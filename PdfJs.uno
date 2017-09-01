using Uno;
using Uno.UX;
using Uno.Threading;
using Uno.Text;
using Uno.Platform;
using Uno.Compiler.ExportTargetInterop;
using Uno.Collections;
using Fuse;
using Fuse.Scripting;
using Fuse.Reactive;




namespace PDF
{



	[UXGlobalModule]
	public sealed class PDFmodule: NativeModule
	{
		static readonly PDFmodule _instance;



		public PDFmodule()
		{
			if(_instance != null) return;
      		Uno.UX.Resource.SetGlobalKey(_instance = this, "PDF");
      		AddMember(new NativePromise<string, string>("Transform", Transform));
      		AddMember(new NativePromise<string, string>("LaunchScan", LaunchScan));
      		AddMember(new NativePromise<string, string>("PDFToBase64", PDFToBase64));
      		
		}

		    Future<string> Transform(object[] args)
		    {
		    	var base64 = (string)args[0];
		    	var filepath = (string)args[1];
		        return new PDF.Transform(base64, filepath);
		    }


		    	Future<string> LaunchScan(object[] args)
		    {
		    	var path = (string)args[0];

		        return new PDF.LaunchScan(path);
		    }


		    	Future<string> PDFToBase64(object[] args)
		    {
		    	var path = (string)args[0];
		    	debug_log "hhahahha";

		        return new PDF.PDFToBase64(path);
		    }



	}

}


