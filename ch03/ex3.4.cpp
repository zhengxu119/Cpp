#include <iostream>
#include <string>
int main()
{
  std::string s1,s2;
		getline(std::cin,s1);
		getline(std::cin,s2);
		if(s1!=s2)
		{
		  if(s1.size()>s2.size())
				 std::cout<<s1<<std::endl;
					else
					std::cout<<s2<<std::endl;
		}
  return 0;
}