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
      		AddMember(new NativePromise<string, string>("EncodeToBase64", EncodeToBase64));
      		
		}

		    Future<string> DecodeFromBase64(object[] args)
		    {
		    	var base64 = (string)args[0];
		    	var filename = (string)args[1];
		        return new PDF.DecodeFromBase64(base64, filename);
		    }



		    	Future<string> EncodeToBase64(object[] args)
		    {
		    	var filename = (string)args[0];
		        return new PDF.EncodeToBase64(filename);
		    }








	}

}


