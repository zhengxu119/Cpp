#include <iostream>
int main()
{
  int sum=0;
		int v=50;
		while(v<101)
		{
		  std::cout<<v<<std::endl;
				sum+=v++;
		}
		
		std::cout<<"50~100之间的总和:"<<sum<<std::endl;
		
		return 0;
}