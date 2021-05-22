#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,x1,x2;
	cout<<" ax^2+bx+c=0  utgiig oloe:"<<endl;
	cout<< "a= ";
	cin>>a;
	cout<< "b= ";
	cin>>b;
	cout<< "c= ";
	cin>>c;
	
	x1=((-b)+sqrt(b*b-4*a*c))/2*a;
	cout<<"x1= "<<x1<<endl;
	
	x2=((-b)-sqrt(b*b-4*a*c))/2*a;
	cout<<"x2= "<<x2;
	system("pause");
	
	return 0;
}
