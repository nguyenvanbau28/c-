#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a,b;
	cout<<"giai phuong trinh bac nhat ax+b=0\n";
	
	cout<<" nhap a =";
	cin>>a;
	cout<<" nhap b =";
	cin>>b;
	if(a==0 && b==0)
		cout<<" pt co vo so no ";
	else if(a==0 && b!=0)
	{
		cout<<" pt vo no ";
	}
	else{
		double x=-b*1.0/a;
		cout<<" pt co 1 no la x-"<<x;
	}
	return 0;
}
