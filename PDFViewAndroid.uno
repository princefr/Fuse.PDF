namespace Native.Android
{
	using Uno;
    using Uno.UX;
    using Uno.Compiler.ExportTargetInterop;
    using Fuse.Controls.Native.Android;


	[Require("Gradle.Dependency.Compile", "com.github.barteksc:android-pdf-viewer:2.7.0")]
	[ForeignInclude(Language.Java, "com.fuse.Activity", "com.github.barteksc.pdfviewer.PDFView", "com.github.barteksc.pdfviewer.scroll.DefaultScrollHandle", "com.github.barteksc.pdfviewer.listener.OnPageChangeListener", "com.github.barteksc.pdfviewer.listener.OnLoadCompleteListener", "android.content.Context", "android.util.Log", "android.content.Intent", "android.net.Uri", "java.io.File", "android.os.Environment", "android.graphics.pdf.PdfRenderer")]
	[Require("AndroidManifest.Permission", "android.permission.WRITE_EXTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.WRITE_INTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.READ_EXTERNAL_STORAGE")]
	[Require("AndroidManifest.Permission", "android.permission.READ_INTERNAL_STORAGE")]
    extern(Android) class PDF : LeafView, IPDF 
    {


        PDFHost _host;
		public PDF (PDFHost host) : base(Create())
		{
			_host = host;

		}

       		void IPDF.Load(string filename)
		{
			Load(Handle, filename);
		}



        [Foreign(Language.Java)]
        static Java.Object Create()
        @{

        	PDFView pdfView = new PDFView(Activity.getRootActivity(), null);
        	return pdfView;

        @}


        [Foreign(Language.Java)]
        void Load(this Java.Object handle, string fileName)
        @{

        	PDFView pdfView = (PDFView)handle;
	    	String pathFile = Activity.getRootActivity().getFilesDir() + "/" + fileName;
			File dwldsPath = new File(pathFile);
			pdfView.fromFile(dwldsPath)
				.defaultPage(0)
		        .enableAnnotationRendering(true)
		        .scrollHandle(new DefaultScrollHandle(Activity.getRootActivity()))
		        .spacing(10) // in dp
		        .load();

        @}






    }
}