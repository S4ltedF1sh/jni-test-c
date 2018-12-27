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
      int[] a = {1, 4, 5, 3, 22, 30, 9, 20};
      Sort.sort(a);
      for (int i = 0; i < 8; i++) {
    	  System.out.print(a[i]+" ");
      }
      System.out.println();
   }
}
