package liangjie.app;

public class NativeUtil {
	public native void SayHello(String str);

	static {
		System.loadLibrary("NativeUtil");
	}
}
