#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	int a;
	cout<<"chuong trinh nhap diem so nguyen duong =";
	
	cin>>a;
	if(a>=0)
		cout<<a<<"la so nguyen dung";
	else
		cout<<a<<"la so nguyen am";
	
	return 0;
}
