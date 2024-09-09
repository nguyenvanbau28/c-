#include <iostream>
#include <math.h>
using namespace std;
// continue bor qua chuong trinh
int main(int argc, char** argv) {
	
	//  break nam trong vong lap for while
	int i,sum=0,n;
	cout<<"nhap n=";
	cin>>n;//i<=n
	for(i=1;i<=n;i++){
		
	if(i==1 || i==4)continue;
		sum+=i;
	}
//	do{
//		i++;
//		if(i==1 || i==4)continue;
//		sum+=i;
//	}while(i<n);//i<n
	cout<<"tong tu 1 den n la="<<sum;
	return 0;
}
