#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int a,b,c;
	//double p;
	cout<<" nhap a =";
	cin>>a;
	cout<<" nhap b =";
	cin>>b;
	cout<<" nhap c =";
	cin>>c;
	if(a<=0 || b<=0 || c<=0 ||a+b<=c||a+c<=b||b+c<=a){
		cout<<"ban nhap sai tam giac roi";
	}
	else{
		double cv=(a+b+c);
		double p=cv/2.0;//neu de (a+b+c)/2.0 phai khai bao double p
		//int p=cv/2.0;
		double s=sqrt((p-a)*(p-b)*(p-c));
		cout<<"chu vi tam giac = "<<cv<<endl;
		cout<<"dien tich  tam giac = "<<s;
	}
	
			
	

	return 0;
}
