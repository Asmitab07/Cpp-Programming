#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any Character:";
	cin>>ch;
	if(ch>='a' && ch<='z')
	{
	
		cout<<ch<<" is Lower Case";
}
	 else if(ch>='A' && ch<='Z')
	{
		cout<<ch<<" is Upper Case";
	}
	

else
{
	cout<<ch<<"Is Not Alphabet";
}
	
	return 0;

}
