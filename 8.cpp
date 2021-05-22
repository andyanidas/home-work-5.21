#include<iostream>
using namespace std;
int main()
{
	char op;
	float num1, num2;
	
	cout<<"Enter operator eihter + or -or * or / :";
	cin >>op;
	cout<<"Enter number1: ";
	cin>>num1;
	cout<<"Enter number2:";
	cin>>num2;
	switch(op)
	{
		case'+':{
			cout<<num1+num2;
			break;
		}
		case'-':{
			cout<<num1-num2;
			break;
		}
		case'*':{
			
			cout<<num1*num2;
			break;
		}
		case'/':{
			cout<<num1/num2;
			break;
		}
		default:
			cout<<" wrong operator";
		
	}
	
	
	system("pause");
	return 0;
}
