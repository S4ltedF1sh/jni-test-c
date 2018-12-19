
public class Obj {
	public int token;
	public String myname;
	
	public Obj(String name){
		token = 100;
		myname = name;
	}
	
	public void call() {
		System.out.println("Hi, " + myname + token + ", this is a call from java");
	}
}
