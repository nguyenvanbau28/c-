#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float r,dientich,chuvi;
	float const Pi=3.14;
	cout<<"r hinh tron la =";
	cin>>r;
	dientich=r*r*Pi;
	chuvi=2*Pi*r;
	cout<<"s hinh tron la = "<<dientich<<endl;
	//cout<<"s hinh tron la = "<<r*r*Pi<<endl;
	cout<<"chuvi hinh tron la = "<<chuvi<<endl;
	return 0;
}
