#include <iostream>
int main()
{
  int currVal=0,val=0;
		std::cout<<"请输入数字:"<<std::endl;
		if(std::cin>>currVal)
		{
		   int cnt=1;
					while(std::cin>>val)
					{
					  if(currVal==val)
							{
									cnt++;
							}
							else
							{
							  std::cout<<currVal<<"重复出现了"<<cnt<<"次"<<std::endl;
							  cnt=1;
									currVal=val;
							}
					}
					std::cout<<currVal<<"重复出现了"<<cnt<<"次"<<std::endl;
		}
		return 0;
}