#include <iostream>
#include <string>
#include <cctype>
int main()
{
  std::string s,s1;
  getline(std::cin,s);
		for(auto c:s)
		{
		  if(!ispunct(c))
				s1+=c;
		}
		std::cout<<s1<<std::endl;
  return 0;
}