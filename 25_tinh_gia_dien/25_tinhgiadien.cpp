#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	const int gia1=600,gia2=700,gia3=900,gia4=1100;//loi giai const dong tung cai
	int tien,khw;
	cout<<" nhap so kwh  =";
	cin>>khw;

	if(khw<=100 ){
		tien=khw*gia1;
	}
		
	else if(khw<=150 )//viet luon <=150 101<khw<=150 
	{
		tien=(khw-100)*gia2+100*gia1;
	}
	else if(khw<=200 )
	{
		tien=(khw-150)*gia3+100*gia1+50*gia2;
	}
	else{
		tien=(khw-200)*gia4+100*gia1+50*gia2+50*gia3;
	}
	cout<<"so tien phai tra"<<tien<<" dong";
	
	
	
	return 0;
}
