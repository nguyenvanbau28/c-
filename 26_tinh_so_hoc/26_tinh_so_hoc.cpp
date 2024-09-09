#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	int a,b;
	char ch;
	cout<<" nhap a =";
	cin>>a;
	cout<<" nhap b =";
	cin>>b;
	cout<<" nhap ki tu (+ - * /) =";
	cin>>ch;
	switch(ch){
		case '+':
			cout<<a<<"+"<<b<<"="<<(a+b);
			break;
		case '-':
			cout<<a<<"-"<<b<<"="<<(a-b);
			break;
		case '*':
			cout<<a<<"*"<<b<<"="<<(a*b);
			break;
		case '/':
			if(b==0){
				cout<<"so chia phai khac 0";
			}
			else
				cout<<a<<"/"<<b<<"="<<(a/b);
			break;
		default:
			cout<<"nhap sai dau";		
	}

	return 0;
}
