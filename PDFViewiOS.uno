namespace Native.iOS
{
	using Uno;
    using Uno.UX;
    using Uno.Compiler.ExportTargetInterop;
    using Fuse.Controls.Native.iOS;



	[Require("Source.Include", "UIKit/UIKit.h")]
	[Require("Source.Include", "WebKit/WebKit.h")]
    extern(iOS) class  PDF: LeafView, IPDF
    {

		PDFHost _host;
		public PDF(PDFHost host) : base(Create())
		{
			_host = host;

		}


          void IPDF.Load(string fileName)
		{

			Load(Handle, fileName);
		}



        [Foreign(Language.ObjC)]
        static ObjC.Object Create()
        @{
        	WKWebView *webView = [[WKWebView alloc]init];
        	return webView;
        @}



        [Foreign(Language.ObjC)]
         void Load(ObjC.Object handle, string fileName)
        @{
        	WKWebView* webView = (WKWebView*)handle;
        	UIView* c = [[UIView alloc] init];
        	NSString *documentsDirectory = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
			NSString *path = [documentsDirectory stringByAppendingPathComponent:fileName];
			NSURL *targetURL = [NSURL fileURLWithPath:path];
			NSURLRequest *request = [NSURLRequest requestWithURL:targetURL];
			[webView loadRequest:request];

        @}









    }
}