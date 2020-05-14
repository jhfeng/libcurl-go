package main

import (
	"os"

	curl "github.com/jhfeng/libcurl-go"
)

func write_data(ptr []byte, userdata interface{}) bool {
	fp := userdata.(*os.File)
	if _, err := fp.Write(ptr); err == nil {
		return true
	}
	return false
}

func main() {
	curl.GlobalInit(curl.GLOBAL_ALL)

	easy := curl.EasyInit()
	defer easy.Cleanup()

	if easy != nil {
		easy.Setopt(curl.OPT_URL, "https://qsc-stage.kms.test.cloud.ibm.com:4443/_version")
		easy.Setopt(curl.OPT_CURVES, "p256_kyber768")
		easy.Setopt(curl.OPT_SSLVERSION, curl.SSLVERSION_TLSv1_3)
		easy.Setopt(curl.OPT_VERBOSE, true)
		easy.Setopt(curl.OPT_WRITEFUNCTION, write_data)

		// write file
		fp, _ := os.OpenFile("simple_output", os.O_WRONLY|os.O_APPEND|os.O_CREATE, 0777)
		defer fp.Close()
		easy.Setopt(curl.OPT_WRITEDATA, fp)

		if err := easy.Perform(); err != nil {
			println("ERROR: ", err.Error())
		}
	}
}
