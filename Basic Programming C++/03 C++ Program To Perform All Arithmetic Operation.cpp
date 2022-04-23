#include<iostream>
using namespace std;

int main()
{
	int Num1,Num2;
	int Sum,Sub,Mult,Mod;
	float Div;
	cout<<"Enter Two Number:";
	cin>>Num1>>Num2;
	
	Sum = Num1 + Num2;
	Sub = Num1 - Num2;
	Mult = Num1 * Num2;
	Mod = 	Num1%Num2;
	Div = Num1/Num2;
	
	cout<<"\nSum Of Two Number:"<<Sum;
	cout<<"\nSubstraction Of Two Number:"<<Sub;
	cout<<"\nMultiplication  Of Two Number:"<<Mult;
		cout<<"\nModule  Of Two Number:"<<Mod;			
		cout<<"\nDivision  Of Two Number:"<<Div;
	
	
return 0;

}
