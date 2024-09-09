#include <iostream>
#include <cstdlib> // Thý vi?n cho hàm rand() và srand()
#include <ctime>   // Thý vi?n cho hàm time()

using namespace std; // S? d?ng không gian tên std ð? ðõn gi?n hóa m?

int main() {
    // Kh?i t?o b? sinh s? ng?u nhiên b?ng cách s? d?ng th?i gian hi?n t?i
    srand(time(NULL));
	while(true){
	
	    // T?o s? ng?u nhiên trong kho?ng t? 1 ð?n 99
	    int somay = 1+rand() % 100;//100 vs 99 nhu nhau
	    
		
		
	    // In s? ng?u nhiên ra màn h?nh
	    cout << "S? ng?u nhiên t? 1 ð?n 99: " << somay << endl;
		cout << "Chuong trinh doan so: \n" ;
		int solandoan =0;
		bool isWin=false;
		
		do{
			int songuoi;
			cout << "May da doan so[1...1000]:moi ban doan \n" ;
			cin>>songuoi;
			solandoan++;
			
			cout<<"Ban doan lan thu "<<solandoan<<endl;
			if(songuoi==somay){
				cout<<"Ban doan dung so may la "<<somay<<endl;
				isWin=true;
				break;
			}
			else if(songuoi>somay){
				cout<<"Ban doan sai so nguoi > so may \n";
			}
			else
				cout<<"Ban doan sai so nguoi<so may  \n";
			if(solandoan==7)
				break;
				
		}while(true);
		if(isWin!=true){
			cout<<"Game Over\n";
			cout<<"so cua may la "<<somay<<endl;
		}
		cout<<"tiep khong ban (c/k):";
		char c;
		cin>>c;
		if(c=='k')
			break;
}
	cout<<"Good Bye";
    return 0;
}

