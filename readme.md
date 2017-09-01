# FUSE.PDF




#Initatialisation.


You can initialize the module by simply require it in you JS file.

```
var PDF = require("PDF")

```


# Base64 to PDF saved locally

You can decode the base64 pdf comming from the server by this way, the function takes one argument, the `name` of the file with his extention.
the function return a `path` of where your file have been saved.

```
	function getPath(){
		PDF.Transform(data, "/file.pdf").then(function(results){
			console.log(JSON.stringify(results))
		}, function(err){
			console.log(JSON.stringify(err))
		})
	}

``` 




# Local pdf to Base64.

You can encode local pdf to base64 by this way, the fuction takes one argument, the `name` of the file saved in the application directoty with his extension.
the function return a base64 encoded string.

```
function FilePathToPDF(){
	console.log("yeahhh")
	PDF.PDFToBase64("/file.pdf").then(function(base64){
		console.log(JSON.stringify(base64))
	}, function(err){
		console.log(JSON.stringify(err))
	})
}

```


# View the pdf file (not working for the moment).

```
	function lauch(){
		PDF.LaunchScan("/file.pdf").then(function(results){
			pdffile.value = results
				console.log(JSON.stringify(results))
			}, function(err){
				console.log(JSON.stringify(err))
			})
	
	}

```


i'm not affiliated with the fusetools team.







