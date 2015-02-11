#include <iostream>
int main()
{
  int a=10,b=20,*p=&a;
		std::cout<<a<<" "<<b<<" "<<*p<<std::endl;
		p=&b;
		std::cout<<a<<" "<<b<<" "<<*p<<std::endl;
		*p=a;
		std::cout<<a<<" "<<b<<" "<<*p<<std::endl;
		return 0;
}