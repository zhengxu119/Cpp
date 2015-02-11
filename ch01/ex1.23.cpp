#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item  currItem,val;
		int cnt=1;
		if(std::cin>>currItem)
		{
		  while(std::cin>>val)
				{
				  if(currItem.isbn()==val.isbn())
						{
						  cnt++;
						}
						else
						{
						  std::cout<<currItem<<" 销售数量:"<<cnt<<std::endl;
								currItem=val;
								cnt=1;
						}
				}
				std::cout<<currItem<<" 销售数量:"<<cnt<<std::endl;
		}
		return 0;
}