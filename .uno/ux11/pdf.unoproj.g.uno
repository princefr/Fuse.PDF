sealed class pdf_FuseControlsWebView_Url_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.WebView _obj;
    public pdf_FuseControlsWebView_Url_Property(Fuse.Controls.WebView obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.WebView)obj).Url; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.WebView)obj).SetUrl(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
