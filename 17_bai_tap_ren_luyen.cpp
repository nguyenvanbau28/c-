#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	//bai1 cua minh 
//	char kitu;
//	cout<<"nhap vao 1 kytu  la =";
//	cin>>kitu;
//	int f=kitu;
//	char t=f+1;
//	cout<<f<<endl;
//	cout<<t<<endl;
	//bai1 cuar chatgpt

//    char c;
//    cout << "Nhap vào mot ki tu: ";
//    cin >> c;
//
//    cout << "Ma ASCII2 cua ky tu " << c << " là: " << static_cast<int>(c) << endl;
//    cout << "Ky tu ke tiep cua " << c << " là: " << static_cast<char>(c + 1) << endl;

// bai2
// 	int x,n;
// 	cout<<"nhap vao x  la =";
//	cin>>x;
//	cout<<"nhap vao n la =";
//	cin>>n;
// 	int a=pow(pow(x,2)+x+1,n)+pow(pow(x,2)-x+1,n);
// 	cout<<a;
//	return 0;
	
	//bai3 poe 
//	int num, reversedNum = 0;
//
//    // Nh?p s? nguyên dıõng 3 ch? s?
//    std::cout << "Nh?p vào s? nguyên dıõng 3 ch? s?: ";
//    std::cin >> num;
//
//    // Ki?m tra n?u s? nh?p vào không ph?i là 3 ch? s?
//    if (num < 100 || num > 999) {
//        std::cout << "S? nh?p vào ph?i là 3 ch? s?!" << std::endl;
//        return 1;
//    }
//
//    // Ğ?o ngı?c s?
//    while (num > 0) {
//        int digit = num % 10;
//        reversedNum = reversedNum * 10 + digit;
//        num /= 10;
//    }
//
//    // In k?t qu?
//    std::cout << "S? ğ?o ngı?c là: " << reversedNum << std::endl;
	
	
	//bai3 chatgpt
	  int number;
    std::cout << "Nhap vao mot so nguyen duong co 3 chu so: ";
    std::cin >> number;

    if (number < 100 || number > 999) {
        std::cout << "So nhap vao khong phai la so nguyen duong co 3 chu so." << std::endl;
        return 1;
    }

    int reversedNumber = 0;
    int hundreds = number / 100;  // L?y ch? s? hàng trãm
    int tens = (number / 10) % 10;  // L?y ch? s? hàng ch?c
    int units = number % 10;  // L?y ch? s? hàng ğõn v?

    reversedNumber = units * 100 + tens * 10 + hundreds;

    std::cout << "So dao nguoc la: " << reversedNumber << std::endl; 
}
