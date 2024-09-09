#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	
	int x=9;
	switch(x){
		case 0:
		case 1:
		case 3:
			cout<<"abc"	;
			break;
		case 4:
		case 6:
			cout<<"xyz"	;
			break;
		case 9:
			cout<<"ko ho tro"	;
			break;		
	}
//	int n;
//	cout<<" nhap N =";
//	cin>>n;
//	int sd=n%2;
//	switch(sd){
//		case 0:cout<<n<<" la so chan ";
//		break;                        //neu xoa break thi 6 vua la so chan va so ler
//		case 1:cout<<n<<" la so le ";
//		break;
//		default:cout<<"nhap sai";
//	}
//	if(sd=0)
//		cout<<n<<" la so chan ";
//	else{
//		cout<<n<<" la so le ";
//	}
	return 0;
}
