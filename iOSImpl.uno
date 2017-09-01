using Uno;
using Uno.UX;
using Uno.Collections;
using Uno.Compiler.ExportTargetInterop;
using Fuse;
using Fuse.Triggers;
using Fuse.Controls;
using Fuse.Controls.Native;
using Fuse.Controls.Native.iOS;
using Uno.Threading;




namespace PDF
{
	extern(iOS)
	class DecodeFromBase64: Promise<string>
	{


	[Foreign(Language.ObjC)]
    public DecodeFromBase64(string base64, string directory)
    @{

    	    @try {
        		NSString *base64Encoded = base64;
		 		NSData *data = [[NSData alloc] initWithBase64EncodedString:base64Encoded options:0];
		 		NSString *documentsDirectory = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
				NSString *path = [documentsDirectory stringByAppendingPathComponent:directory];
				[data writeToFile:path atomically:YES];
				@{DecodeFromBase64:Of(_this).Resolve(string):Call(path)};
		    }
		    @catch (NSException *exception) {
		        NSLog(@"%@", exception.reason);
		        @{DecodeFromBase64:Of(_this).Reject(string):Call(@"Vous devez etre connecter")};
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


	[Require("Source.Include", "WebKit/WebKit.h")]
	extern(iOS)
	class ViewPDF: Promise<string>
	{



	[Foreign(Language.ObjC)]
    public ViewPDF(string file)
    @{

    	   @try {
			NSString *documentsDirectory = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
			NSString *path = [documentsDirectory stringByAppendingPathComponent:file];
			NSURL *targetURL = [NSURL fileURLWithPath:path];
			NSString *toDisplay = [targetURL absoluteString];
			@{ViewPDF:Of(_this).Resolve(string):Call(toDisplay)};
		    }
		    @catch (NSException *exception) {
		        NSLog(@"%@", exception.reason);
		        @{ViewPDF:Of(_this).Reject(string):Call(@"La lecture du fichier a echoué")};
		    }
    @}


	     void Resolve(string message)
	      {
	      	try{
	      		Launcher.LaunchUri(new Uno.Net.Http.Uri(message));
	      		debug_log "passed here";
	      	}
	      	catch(InvalidCastException e){
	      		debug_log "its not working";
	      	}
	        base.Resolve(message);
	      }

	      void Reject(string reason)
	      {
	        Reject(new Exception(reason));
	      }

	}



		extern(iOS)
		class EncodeToBase64: Promise<string>
		{


		[Foreign(Language.ObjC)]
	    public EncodeToBase64(string file)
	    @{

	    	    @try {

			    	NSString *documentsDirectory = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
					NSString *path = [documentsDirectory stringByAppendingPathComponent:file];
					NSData *zipFileData = [NSData dataWithContentsOfFile:path];
    				NSString *base64String = [zipFileData base64EncodedStringWithOptions:0];
    				@{EncodeToBase64:Of(_this).Resolve(string):Call(base64String)};

			    }
			    @catch (NSException *exception) {
			    	@{EncodeToBase64:Of(_this).Reject(string):Call(exception.reason)};
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