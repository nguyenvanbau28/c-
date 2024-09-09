#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cout<<"nhap goc do  la =",cin>>t;//ko them endl
	float radian;
	float const Pi=3.14;
	radian=t*(Pi/180);
	float sinx=sin(radian);//phai them float
	float cosx=cos(radian);
	float tanx=tan(radian);
	float cotanx=1/tan(radian);
	cout<<"sin x ="<<sinx<<endl;
	cout<<"cos x ="<<cosx<<endl;
	cout<<"tan x ="<<tanx<<endl;
	cout<<"cotan x ="<<cotanx<<endl;
	return 0;
}
