#include <iostream>
#include <string>
int main()
{
  std::string s1,s2;
		while(getline(std::cin,s1))
		{
				s2+=s1;
				s2+=" ";
		}
	
		std::cout<<"\n"<<s2<<std::endl;
  return 0;
}