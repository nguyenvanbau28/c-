#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cout<<"nhap so giay  la =",cin>>t;//ko them endl
	int hour,minute,second;
	hour=(t/3600)%24;
	minute=(t%3600)/60;
	second=(t%3600)%60;
	int hourtemb=hour>12?hour-12:hour; //neu lon 12thi 13-12 ko thi giu nguyen 
	cout<<hourtemb<<":"<<minute<<":"<<second<<(hour>12?"PM":"AM")<<endl;
	return 0;
}
