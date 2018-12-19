public class HelloJNI { 
   static {
      System.loadLibrary("hello"); 
   }

   private native void sayHello();
   private native void nativeCall(Obj o);

   public static void main(String[] args) {
      HelloJNI hl = new HelloJNI();
      hl.sayHello();
      Obj o = new Obj("MinhVu");
      hl.nativeCall(o);
   }
}
