using Uno;
using Uno.UX;
using Uno.Collections;
using Uno.Compiler.ExportTargetInterop;
using Fuse;
using Fuse.Triggers;
using Fuse.Controls;
using Fuse.Controls.Native;
using Fuse.Controls.Native.Android;
using Uno.Threading;
using Uno.Permissions;




namespace PDF
{

	[ForeignInclude(Language.Java, "android.util.Base64", "com.fuse.Activity", "android.util.Log", "android.content.Context",  "java.io.FileOutputStream", "java.io.File", "android.content.Context", "android.os.Environment")]
	[Require("AndroidManifest.Permission", "android.permission.WRITE_EXTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.WRITE_INTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.READ_EXTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.READ_INTERNAL_STORAGE")]
	extern(android)
	class DecodeFromBase64: Promise<string>
	{
		public DecodeFromBase64(string base64String, string filePath)
		{
			Init(base64String, filePath);
		}

		[Foreign(Language.Java)]
	    public void Init(string base64String, string filePath)
	    @{

	    		try{

	    			String path = Activity.getRootActivity().getFilesDir() + filePath;
	    			File dwldsPath = new File(path);
					byte[] pdfAsBytes = Base64.decode(base64String, 0);
					FileOutputStream os;
					os = new FileOutputStream(dwldsPath, false);
					os.write(pdfAsBytes);
					os.flush();
					os.close();
					@{DecodeFromBase64:Of(_this).Resolve(string):Call(path)};
	    		}catch(Exception e)
	    		{	
	    			@{DecodeFromBase64:Of(_this).Reject(string):Call(e.toString())};
	    		}

			
	    @}

	        	void Resolve(string message)
		      {
		        base.Resolve(message);
		      }

		      void Reject(string reason)
		      {
		        Reject(new Exception(reason));
		      }

	}







	[ForeignInclude(Language.Java, "com.fuse.Activity", "android.content.Context", "android.util.Log", "android.content.Intent", "android.net.Uri", "java.io.File", "android.os.Environment", "android.graphics.pdf.PdfRenderer")]
	[Require("AndroidManifest.Permission", "android.permission.WRITE_EXTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.WRITE_INTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.READ_EXTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.READ_INTERNAL_STORAGE")]
	extern(android)
	class ViewPDF: Promise<string>
	{

		public ViewPDF(string path)
		{
			Init(path);
		}


				[Foreign(Language.Java)]
			    public void Init(string path)
			    @{

    			try {
    				String pathFile = Activity.getRootActivity().getFilesDir() + path;
					Uri uri = Uri.parse(pathFile);
					Intent intent = new Intent(Intent.ACTION_VIEW);
					intent.setDataAndType(uri, "application/pdf");
					intent.setFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
					if(intent!=null){
						Activity.getRootActivity().startActivity(intent);
					}
					} catch (Exception e) {
						@{ViewPDF:Of(_this).Reject(string):Call(e.toString())};
						e.printStackTrace();
					}
					
			    @}


					void Resolve(string message)
			      {
			        base.Resolve(message);
			      }

			      void Reject(string reason)
			      {
			        Reject(new Exception(reason));
			      }



	}





	[ForeignInclude(Language.Java, "com.fuse.Activity",  "android.util.Base64", "android.content.Context", "android.util.Log", "android.content.Intent", "android.net.Uri", "java.io.File", "android.os.Environment", "android.graphics.Bitmap", "java.io.FileOutputStream", "java.io.File", "java.io.ByteArrayOutputStream", "java.io.FileInputStream", "android.graphics.BitmapFactory")]
	[Require("AndroidManifest.Permission", "android.permission.WRITE_EXTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.WRITE_INTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.READ_EXTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.READ_INTERNAL_STORAGE")]
	extern(android)
	class EncodeToBase64: Promise<string>
	{

		public EncodeToBase64(string path)
		{
			Init(path);
		}


				[Foreign(Language.Java)]
			    public void Init(string path)
			    @{


			    	try {

						String pathFile = Activity.getRootActivity().getFilesDir() + path;
						File file = new File(pathFile);
						byte[] bytesArray = new byte[(int) file.length()];
						FileInputStream fis = new FileInputStream(file);
						fis.read(bytesArray); //read file into bytes[]
						fis.close();
			            String encoded = Base64.encodeToString(bytesArray, Base64.DEFAULT);
			            @{EncodeToBase64:Of(_this).Resolve(string):Call(encoded)};
			    		} catch(Exception e)
			    		{

			    			@{EncodeToBase64:Of(_this).Reject(string):Call(e.toString())};

			    		}

					
			    @}


					void Resolve(string message)
			      {
			        base.Resolve(message);
			      }

			      void Reject(string reason)
			      {
			        Reject(new Exception(reason));
			      }



	}







}