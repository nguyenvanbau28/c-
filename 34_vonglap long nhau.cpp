#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	
	int i,j,h;
	cout<<"nhap chieu cao h=";
	cin>>h;
	for(i=0;i<h;i++){
		for(j=0;j<h;j++){
		if(j==0||i==h-1||i==j){//if(j==0,i==h-1,i==j) tao ra duong cheo chinh
			cout<<"*";
		}
		else
			cout<<" ";		
		}	
		cout<<"\n";
	}

	return 0;
}
