#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int i=0,n,sum_uoc=0;// ko dat i thi i ko xac dinh lap vo han 
	cout<<"nhap n=";
	cin>>n;
	while(i<n){//phía chia 0 l?i nggieem trong 
		if(n%i==0){
			sum_uoc+=i;
		//	i++; phair ra ngoai if
		}
		i++;
		}
		if(sum_uoc==n)// vong while phai thoat ra 147 la uoc 28
			cout<<sum_uoc<<"la so hoan thien";	
		else
			cout<<sum_uoc<<" ko la so hoan thien";				
}
