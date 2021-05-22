#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<" Alphabet:";
	cin>>ch;
	/*
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
		
		if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='Y'||ch=='y'||ch=='O'||ch=='o'||ch=='U'||ch=='u'||ch=='V'||ch=='v'){
			
			cout<<" is a vowel";
		}else{
			
			cout<<" is a cansanant";
		}
		
	}else{
		
		cout<< " not alphabet";
	}
	*/
	switch(ch){
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
		case 'Y':
		case 'y':	
			cout<< " is vowel. ";
			break;
		
		default:
			
			cout<<"i consanant. ";
		
	}
	
	system("pause");
	
	return 0;
 } 
