#include <iostream>
int main()
{
  int v1=0,v2=0,temp=0;
		std::cout<<"请输入两个整数:"<<std::endl;
		std::cin>>v1>>v2;
		temp=v1-v2;
		int i=temp;
		if(temp==-1||temp==0||temp==1)
		   std::cout<<"数字"<<v1<<"和数字"<<v2<<"之间不存在整数!"<<std::endl;
		else
		{
   while(temp!=0&&temp!=-1&&temp!=1)
   {
			  i<0?temp++:temp--;
					std::cout<<(i<0?++v1:++v2)<<std::endl;	
    }
		}
		
		return 0;
}