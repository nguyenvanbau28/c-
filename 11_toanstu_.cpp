#include <iostream>

using namespace std;
// 1 true ,0 flase ,logic !not ;++,--;y=y+1 y++ y+=1

int main(int argc, char** argv) {
	int x=10;
	int y=x<8?x*10:200*x;//toan tu ? toan tu 3ngoi exp1 dung ex2 ex3 ms thuc hien 1800
	//exp1 sai thi ra 2000
	cout<<y<<endl;
	// hau to dung sau thi a=1,roi bms cong 1 
	int b=1;
	int a=b++;
	int c=9;// vi laf tien to

	int d=++c;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	
	int m=3;
	int n=4;
	
	int o=m-- - ++n+2;
	cout<<m<<endl;
	cout<<n<<endl;
	cout<<o<<endl;
	//2 5 0
	return 0;
}
