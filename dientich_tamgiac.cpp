#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float a,b,c,h,dientich,chuvi;
	float const Pi=3.14;
	cout<<"a hinh tam giac la =",cin>>a;
	cout<<"b hinh tam giac la =";
	cin>>b;
	cout<<"c hinh tam giac la =";
	cin>>c;
	cout<<"h hinh tam giac la =";
	cin>>h;
	dientich=0.5*a*h;
	chuvi=a+b+c;
	cout<<"s hinh tam giac la = "<<dientich<<endl;
	
	cout<<"chuvi tam giac la = "<<chuvi<<endl;
	return 0;
}
