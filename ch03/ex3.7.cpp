#include <iostream>
#include <string>
#include <cctype>
int main()
{
  std::string s;
  getline(std::cin,s);
		for(char c:s)
		  c='X';
		std::cout<<s<<std::endl;
  return 0;
}