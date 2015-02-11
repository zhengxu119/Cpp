#include <iostream>
#include <string>
#include <cctype>
#include <vector>
int main()
{
  std::vector<int> ivec;
		int i=0;
		while(std::cin>>i)
		{
		  ivec.push_back(i);
		}
		std::cout<<std::endl;
		for(auto v:ivec)
		std::cout<<v<<std::endl;
		
  return 0;
}