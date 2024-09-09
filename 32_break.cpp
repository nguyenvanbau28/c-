#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	//  break nam trong vong lap for while
	int i,sum=0,n;
	cout<<"nhap n=";
	cin>>n;
	for(i=1;i<=n;i++){
		
	if(sum>=9)break;
		sum+=i;
	}
	cout<<"tong tu 1 den n la="<<sum;
	return 0;
}
