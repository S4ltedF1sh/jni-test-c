# jni-test-c
*This is just a test repo for jni*

Currently tested:
- Basic JNI
- Access and use recsources from Java (variables and methods)
- Modify resources in Java.
- Combine with other self-built c libraries 

Compile command (for window only):
1. Install cygwin (Link: https://www.cygwin.com/)
2. Add these 2 packages while installing: `mingw64-x86_64-gcc-core` for C and `mingw64-x86_64-gcc-g++` for c++
3. Open cygwin, move to the current project folder
  3a. To make Hello.dll lib, use this command `x86_64-w64-mingw32-gcc -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" -shared -o hello.dll HelloJNI.c`
  3b. To make Sort.dll, move to test folder and use this command `x86_64-w64-mingw32-gcc -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" -shared -o Sort.dll Sort.c bbsort.c`
4. Run the java program.
