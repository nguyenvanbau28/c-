#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	//  cau 1
//	float a,b,c;
//	cout<<"nhap a = ";
//	cin>>a;
//	cout<<"nhap b = ";
//	cin>>b;
//	cout<<"nhap c = ";
//	cin>>c;
//	if(a>b && b>c){
//		cout<<"so lon nhat 1 la"<<a;
//	}
//	else if (a<b && b<c){
//		cout<<"so lon nhat 2 la"<<c;//ko the so sanh a<b<c
//	}
//	else{
//	
//		cout<<"so lon nhat 3 la"<<b;
//	}
	
	//cau2
	int t,nam;
	cout<<"nhap t = ";
	cin>>t;
	cout<<"nhap nam = ";
	cin>>nam;
	switch(t){
		case 1:
		case 3:
		case 5:	
		case 7:
		case 8:
		case 10:
		case 12:	
			cout<<"co 31 ngay";
			break;
		case 4:
		case 6:
		case 9:	
		case 11:
			cout<<"co 30 ngay";	
			break;
		default:
			{if(nam%400==0){
				cout<<"thang co 29 ngay";
			}
			else
				cout<<"thang co 28 ngay";
				}	
	}
	return 0;
}
