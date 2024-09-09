#include <iostream>

using namespace std;
// chuyen doi kieu du lieu : eps kieu rong vaf hep int<float<double
int main(int argc, char** argv) {
	float x= (float)5/2;
	//float x= 5.0/2;
	cout<<"x="<<x<<endl;
	int y=5.2/2;
	cout<<"y="<<y<<endl;
	int a=2;
	int b=4;
	float z=(float)a/b;
	cout<<"z="<<z<<endl;
	return 0;
}
