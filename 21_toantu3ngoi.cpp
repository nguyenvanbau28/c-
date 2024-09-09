#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cout<<" nhap N =";
	cin>>n;
	cout<<n<<(n%2==0?" la so chan":"la so le");//theem ngoac vo ko se thanhf 0;thay the if else don gian
	/*if(n%2==0)
		cout<<n<<" la so chan ";
	else{
		cout<<n<<" la so le ";
	}*/
	return 0;
}
