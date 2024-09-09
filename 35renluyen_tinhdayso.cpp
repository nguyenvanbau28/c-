#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	double x;
	int n;
	
	cout<<"nhap x=";
	cin>>x;
	cout<<"nhap n=";
	cin>>n;
	double s=0;
	
	for(int i=1;i<=n;i++){
		double 	tu=pow(x,i);
	int mau=1;
	for(int j=1;j<=i;j++){
		mau=mau*j;
	}
	s=s+tu/mau;// trong for cong nhieu lan 	s=s+tu/mau;			
}	
	cout<<"s ("<<x<<","<<n<<")="<<s;
}
