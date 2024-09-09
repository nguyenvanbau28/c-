#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	int dtb;
	cout<<"chuong trinh nhap diem tb =";
	cin>>dtb;
	if(dtb<0||dtb>10)
		cout<<"nhap sai so ";
	else{
		if(dtb>=5){
			cout<<"dau ";
		}
		else{
			cout<<"rot";
		}
	}
		
	
	return 0;
}
