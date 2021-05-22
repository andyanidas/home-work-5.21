
/*switch... case ашиглан хэрэглэгчээс оруулсан тоо тэгш 
сондгой эсэхийг шалгадаг программ бич*/
#include <iostream>
using namespace std;
int main()
{
	int num, num1;	
	cout<<"Your number: ";
	cin>>num;
	num1=num%2;
	switch(num1){
		case 0:{
			cout<<"equal number. ";
			break;
		}
		default:{
			cout<<"odd number.";
			break;
		}
			
		
	}
	
	
	system("pause");
	return 0;
}
