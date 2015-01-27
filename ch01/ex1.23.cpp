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
				  if(currItem.isbn()==val.isbn)
						{
						  cnt++;
						}
				}
		}
		return 0;
}