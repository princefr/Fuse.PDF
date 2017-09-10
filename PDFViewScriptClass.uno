using Uno;
using Uno.Compiler.ExportTargetInterop;
using Uno.Time;

using Fuse;
using Fuse.Controls;
using Fuse.Controls.Native;
using Fuse.Scripting;


namespace Native
{
		public partial class PDF
	{
		static PDF()
		{
					ScriptClass.Register(typeof(PDF),
				new ScriptMethod<PDF>("Open", Open, ExecutionThread.MainThread));
		}


			static void Open(Context c, PDF pdf, object[] args)
		{
			var dpv = pdf.PDFView;
			var filename = (string)args[0];
			if (args.Length != 1)
			{
				Fuse.Diagnostics.UserError( "retrieve requires 1 argument, the value of the item", pdf);
				return;
			}else{
				if(dpv != null){
				dpv.Load(filename);
				}
			}

		}



	}
}