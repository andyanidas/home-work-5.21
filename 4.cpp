/*switch case ashiglan 2toonii 
ihiiig oldog programm bich*/
#include<iostream>
using namespace std;
int main()
{
	int num,num1,num2;
	
	cout<<"num 1: ";
	cin>>num1;
	cout<<"num 2: ";
	cin>>num2;
	num=num1-num2;
	switch(num>0){
		case 1:{
			cout<<num1<< " ih too baina. ";
			break;
		}
		case 0:{
			cout<<num2<<" ih too baina. ";
			break;
		}
		default:{
			cout<<"Tentsvv too baina. ";  //eiig yah bilee
			break;
		}
		system("pause");	
		return 0;
	}
	
	
	
	
	/*if(num1>num2){
		cout<<num1<<" ih too biana";
	
	}else if(num2>num1){
	
		cout<<num2<<" ih too baina";
	
	}else{
		cout<<"Tentsvv too biana";
	}*/
	
	
	
	system("pause");
	
	
	return 0;
}
