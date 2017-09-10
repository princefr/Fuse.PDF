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


	extern(!android && !ios)
	class DecodeFromBase64: Promise<string>
	{
			public DecodeFromBase64(string base64String, string filePath)
		{


			
		}


			      void Resolve(string message)
		      {
		        base.Resolve(message);
		      }

		      void Reject(string reason)
		      {
		        Reject(new Exception(reason));
		      }
	}


		extern(!android && !ios)
	class  ViewPDF: Promise<string>
	{
			public  ViewPDF(string path)
		{
			
		}


			      void Resolve(string message)
		      {
		        base.Resolve(message);
		      }

		      void Reject(string reason)
		      {
		        Reject(new Exception(reason));
		      }
	}


		extern(!android && !ios)
	class EncodeToBase64: Promise<string>
	{
			public EncodeToBase64(string path)
		{
			
		}

			    void Resolve(string message)
		      {
		        base.Resolve(message);
		      }

		      void Reject(string reason)
		      {
		        Reject(new Exception(reason));
		      }
	}



		extern(!android && !ios)
	class GetSignature: Promise<string>
	{
			public GetSignature(string path)
		{
			
		}


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