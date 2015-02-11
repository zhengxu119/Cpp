#include <iostream>
#include <string>
#include <cctype>
#include <vector>
int main()
{
  std::vector<std::string> v7{10,"hi"};
		std::cout<<v7.size()<<std::endl;
		for(auto e:v7)
		std::cout<<e<<std::endl;
  return 0;
}