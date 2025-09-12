#include <iostream>
#include <string>

int main()
{
	std::string str = "aaa bbb ccc";
	std::string str2;
	std::cout << str << std::endl;
	int pos1 = str.find("aaa", 0);
	int pos2 = str.find("bbb", 0);
	int pos3 = str.find("ccc", 0);
	std::cout << pos1 << std::endl;
	std::cout << pos2 << std::endl;
	std::cout << pos3 << std::endl;
	//str = str.substr(0, pos2);
	str2 = str.substr(pos2, str.length());
	std::cout << str.length() << std::endl;
	std::cout << str2 << std::endl;
}