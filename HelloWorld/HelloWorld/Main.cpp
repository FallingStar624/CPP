#include <iostream>
// preprocessor satement: compile 전에 진행해서 preprocessor라고 불림
// compiler가 source 파일을 받을 때 가장 먼저 # 부분을 처리
// #include 뒤에 나오는 파일명을 찾아 현재 #include가 있는 자리에 paste해줌
// 이때 참조되는 파일이 header 파일
void Log(const char*);
// 다른 파일에 있는 함수라도 declaration만 해주면
// linker가 .obj 파일들을 .exe로 통합하는 과정에서 연결해준다.

int main() // main func = entry point
{
	std::cout << "Hello World!" << std::endl;
	Log("Hello World!");

	std::cin.get();

	// return 0; : main function은 return 값을 명시하지 않아도 됨
	// 명시하지 않은 경우 return 값을 0으로 간주함.
}