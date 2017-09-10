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
    public DecodeFromBase64(string base64, string filename)
    @{

    	    @try {
        		NSString *base64Encoded = base64;
		 		NSData *data = [[NSData alloc] initWithBase64EncodedString:base64Encoded options:0];
		 		NSString *documentsDirectory = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
				NSString *path = [documentsDirectory stringByAppendingPathComponent:filename];
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






		extern(iOS)
		class EncodeToBase64: Promise<string>
		{


		[Foreign(Language.ObjC)]
	    public EncodeToBase64(string filename)
	    @{

	    	    @try {

			    	NSString *documentsDirectory = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
					NSString *path = [documentsDirectory stringByAppendingPathComponent:filename];
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