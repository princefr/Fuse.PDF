namespace Native
{
	using Uno;
	using Fuse;
    using Uno.UX;
    using Fuse.Controls;
    using Fuse.Controls.Native;
    using Fuse.Scripting;
    using Uno.Compiler.ExportTargetInterop;


        internal interface PDFHost
    {
        
    }


       internal interface IPDF
    {

        void Load(string fileName);
    }

    public partial class PDF : Control, PDFHost
    {

    		IPDF PDFView
		{
			get { return NativeView as IPDF; }
		}


			protected override IView CreateNativeView()
		{
			if defined(Android)
			{
				return new Native.Android.PDF(this);
			}
			else if defined(iOS)
			{
				return new Native.iOS.PDF(this);
			}
			else
			{
				return base.CreateNativeView();
			}
		}


    }
}