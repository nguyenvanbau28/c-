#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	double dtb,toan,ly,hoa;
	cout<<"chuong trinh nhap diem tb =\n";
	cout<<"toan la =";
	cin>>toan;
	cout<<"ly la =";
	cin>>ly;
	cout<<"hoa la =";
	cin>>hoa;
	dtb=(toan+ly+hoa)/3;
	cout<<"diiem trung binh laf"<<dtb<<endl;
	cout<<"diiem trung binh lam tron la"<<setprecision(3)<<dtb<<endl;
	return 0;
}
