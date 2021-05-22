/*switch case ashiglan hereglegchees oruulsan too
surug eyregiig todorhoil*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Ta toogoo oruulna uu:";
	cin>>num;
	switch(num>0){
		case 1:{
			cout<<"positive number ";
			break;
		}
		case 0:{
			if(num==0){
				cout<<"zero";
			}else{
				cout<<"Negative number ";
			}
			break;
		}
		default:{
			
			cout<<" zero number ";
			break;   //zero-g ayj hiih we
		}
				
	}
		
	system("pause");
	return 0;		
	
}
