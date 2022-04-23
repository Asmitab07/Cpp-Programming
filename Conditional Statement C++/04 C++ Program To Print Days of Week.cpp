#include<iostream>
using namespace std;
int main()
{
	int Week;
	
	cout<<"Enter Week Number (1-7):";
	cin>>Week;
		if(Week == 1)
		{
			cout<<"Monday";
		}
			
			else if(Week == 2)
			{
			     cout<<"Tuesday";
					}
					else if(Week == 3)
					{
						cout<<"Wednesday";
					}
					else if(Week == 4)
						{
						cout<<"Thursday";
					}
					else if(Week == 5)
						{
						cout<<"Friday";
					}
					else if(Week == 6)
						{
						cout<<"Saturday";
					}
					else if(Week == 7)
						{
						cout<<"Sunday";
				}
				else
				{
					cout<<"Invalid Day";
				}
				return 0;
}

