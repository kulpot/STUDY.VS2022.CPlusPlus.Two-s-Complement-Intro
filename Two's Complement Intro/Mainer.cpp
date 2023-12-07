
//ref link:https://www.youtube.com/watch?v=dEWhsCA-4V8&list=PLRwVmtr-pp06-8kzgl6j-hp7JSd829ro2&index=25
//

// MyAssembly.asm - (customBuildTool)commandline - ml /c /Cx /coff "%(FullPath)"
// MyAssembly.asm - (customBuildTool)output - %(Filename).obj

// multiply overflow 1111 * 1111 = 11101001
// 32bit overflow 1111 1111 1111 1111 1111 1111 1111 1111 * 1111 1111 1111 1111 1111 1111 1111 1111 = overflow

// cl.exe - is C++ compiler, Cl is compile and link to .obj(object file) which is a temporary target, and .exe is the main target to compile  
// ml.exe - is a microsoft dissasembler
// .obj - cl.exe's doit().obj, ml.exe's doit.obj -> linker -> doit()/doit.exe

extern "C" void doit();
//extern "C" void CalculateNextPower();

void main()
{
	//CalculateNextPower();
	doit();
}

void doit(){}

//void CalculateNextPower(){}
