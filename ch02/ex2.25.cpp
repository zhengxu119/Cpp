#include <iostream>
int main()
{
  int test=10;
  int* ip,i,&r=i;
		ip=&test;
		i=test;
		std::cout<<*ip<<" "<<i<<" "<<r<<std::endl;
		return 0;
}