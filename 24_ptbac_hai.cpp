#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	double a,b,c;//ax^2+bx+c=0
	cout<<"giai phuong trinh bac hai ax^2+bx+c=0\n";
	
	cout<<" nhap a =";
	cin>>a;
	cout<<" nhap b =";
	cin>>b;
	cout<<" nhap c =";
	cin>>c;
	if(a==0 ){//bx+c=0
		if(b==0 && c==0){
		cout<<" pt co vo so no ";
	}
		
	else if(b==0 && c!=0)
	{
		cout<<" pt vo no ";
	}
	else{
		double x=-c/b;
		cout<<" pt co 1 no la x="<<x;
	}
	}
	else{
		double delta=pow(b,2)-4*a*c;
		if(delta<0){
			cout<<" pt vo no ";
		}
		else if(delta==0){
			double nokep=-b/(2*a);
			cout<<" pt co  no kep x1 =x2 ="<<nokep;
		}
		else{
			double x1=(-b+sqrt(delta))/(2*a);
			double x2=(-b-sqrt(delta))/(2*a);
			cout<<" pt co 2 no phan biet x1 ="<<x1<<" x2="<<x2;
		}
	}
	
	
	return 0;
}
