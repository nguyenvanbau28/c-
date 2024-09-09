#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int sd=0,n,sum_uoc=0;
	cout<<"nhap n=";
	cin>>n;
	while(n>0){
		sd=n%10;
		n=n/10;
		sum_uoc+=sd;
		}
	cout<<"vay tong cac chu so la "<<sum_uoc;				
}
