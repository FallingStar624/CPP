#include <iostream>
// preprocessor satement: compile ���� �����ؼ� preprocessor��� �Ҹ�
// compiler�� source ������ ���� �� ���� ���� # �κ��� ó��
// #include �ڿ� ������ ���ϸ��� ã�� ���� #include�� �ִ� �ڸ��� paste����
// �̶� �����Ǵ� ������ header ����
void Log(const char*);
// �ٸ� ���Ͽ� �ִ� �Լ��� declaration�� ���ָ�
// linker�� .obj ���ϵ��� .exe�� �����ϴ� �������� �������ش�.

int main() // main func = entry point
{
	std::cout << "Hello World!" << std::endl;
	Log("Hello World!");

	std::cin.get();

	// return 0; : main function�� return ���� ������� �ʾƵ� ��
	// ������� ���� ��� return ���� 0���� ������.
}