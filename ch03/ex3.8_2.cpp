#include <iostream>
#include <string>
#include <cctype>
int main()
{
  std::string s;
  getline(std::cin,s);
		for(int i=0;i<s.size();i++)
		 s[i]='X';
  std::cout<<s<<std::endl;
  return 0;
}