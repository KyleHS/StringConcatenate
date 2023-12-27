#include <iostream>
#include <string>
using namespace std;
int main()
{
	std::string string1, string2;

	std::cout <<"Please Enter two Strings:"<<endl;
	std::cin >> string1 >> string2; //Asks user for two inputs
	std::cout <<"Concatenated Strings: "<<string1 + string2<<endl; //Concatenates strings
	return 0;
}
