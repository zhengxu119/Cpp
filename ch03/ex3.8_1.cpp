#include <iostream>
#include <string>
#include <cctype>
int main()
{
  std::string s;
  getline(std::cin,s);
		int i=0;
		while(i<s.size())
		{
		  s[i++]='X';
		}
  std::cout<<s<<std::endl;
  return 0;
}