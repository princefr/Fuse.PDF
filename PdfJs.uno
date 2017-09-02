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
      		AddMember(new NativePromise<string, string>("DecodeFromBase64", DecodeFromBase64));
      		AddMember(new NativePromise<string, string>("ViewPDF", ViewPDF));
      		AddMember(new NativePromise<string, string>("EncodeToBase64", EncodeToBase64));
      		
		}

		    Future<string> DecodeFromBase64(object[] args)
		    {
		    	var base64 = (string)args[0];
		    	var filepath = (string)args[1];
		        return new PDF.DecodeFromBase64(base64, filepath);
		    }


		    	Future<string> ViewPDF(object[] args)
		    {
		    	var path = (string)args[0];

		        return new PDF.ViewPDF(path);
		    }


		    	Future<string> EncodeToBase64(object[] args)
		    {
		    	var path = (string)args[0];
		    	debug_log "hhahahha";

		        return new PDF.EncodeToBase64(path);
		    }





	}

}


