#include<iostream>
using namespace std;
int main()
{	
	int month;
	cout<< "Month number: ";
	cin>>month;
	switch(month){
		
		case 1:{
			cout<<"January is 31 days ";
			break;
		}
		case 2:{
			cout<<" February is 28 days ";
			break;
		}
		case 3:{
			cout<<" March is 31 days ";
			break;
		}
		case 4:{
			cout<<"Apryl is 30 days ";
			break;
		}
		
		case 5:{
			cout<<" May is 31 days ";
			break;
		}
		case 6:{
			cout<<" June is 30 days ";
			break;
		}
		case 7:{
			cout<<" July is 31 days ";
			break;
		}
		case 8:{
			cout<<" August is 31 days ";
			break;
		}
		case 9:{
			cout<<" September is 30 days ";
			break;
		}
		case 10:{
			cout<<" October is 31 days ";
			break;
		}
		case 11:{
			cout<<" November is 30 days ";
			break;
		}
		case 12:{
			cout<<"December is 31 days ";
			break;
		}
		
		default:
			cout<<"Wrong input";
					
			
	} 
	/*
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		cout<<"Total number of days=31 ";
	} else if(month==4||month==6||month==9||month==11){
		cout<<"Total number of days=30 ";
	}else if (month==2){
		cout<<"Total number of days=28 ";
	}else{
		cout<<"wrong input";
	}*/
	system("pause");
	return 0;
}
