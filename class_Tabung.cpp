#include<iostream>
using namespace std;

struct data{
	float jari, tinggi;
};

class tabung{
	data a;
	public:
		tabung(){
		this -> a.jari = 0;
		this -> a.tinggi = 0;
	}
	
	tabung(float r, float t ){
		this -> a.jari  = r;
		this -> a.tinggi= t;
	}
	
	void set_jari(float r){
		this -> a.jari = r;
	}
	
	float get_jari(){
		return a.jari;
	}
	
	void set_tinggi(float t){
		this -> a.tinggi = t;
	}

	float get_tinggi(){
		return a.tinggi;
	}
	float volumeTabung(){
        return (3.14*a.jari*a.jari*a.tinggi);
    }

};

int main(){
	tabung tabung1;
    tabung1.set_jari(1);
    tabung1.set_tinggi(1);
    
    tabung tabung2;
    tabung2.set_jari(2);
    tabung2.set_tinggi(2);
    
    tabung tabung3;
    tabung3.set_jari(3);
    tabung3.set_tinggi(3);
    
    tabung tabung4;
    tabung4.set_jari(4);
    tabung4.set_tinggi(4);
    
    tabung tabung5;
    tabung5.set_jari(5);
    tabung5.set_tinggi(5);
    
    tabung tabung6;
    tabung6.set_jari(6);
    tabung6.set_tinggi(6);
    
    tabung tabung7;
    tabung7.set_jari(7);
    tabung7.set_tinggi(7);
    
    tabung tabung8;
    tabung8.set_jari(8);
    tabung8.set_tinggi(8);
    
    tabung tabung9;
    tabung9.set_jari(9);
    tabung9.set_tinggi(9);
    
    tabung tabung10;
    tabung10.set_jari(10);
    tabung10.set_tinggi(10);
    
    cout<<"Volume Tabung ke-1 = " << tabung1.volumeTabung()<<endl;
    cout<<"Volume Tabung ke-2 = " << tabung2.volumeTabung()<<endl;
    cout<<"Volume Tabung ke-3 = " << tabung3.volumeTabung()<<endl;
    cout<<"Volume Tabung ke-4 = " << tabung4.volumeTabung()<<endl;
    cout<<"Volume Tabung ke-5 = " << tabung5.volumeTabung()<<endl;
    cout<<"Volume Tabung ke-6 = " << tabung6.volumeTabung()<<endl;
    cout<<"Volume Tabung ke-7 = " << tabung7.volumeTabung()<<endl;
    cout<<"Volume Tabung ke-8 = " << tabung8.volumeTabung()<<endl;
    cout<<"Volume Tabung ke-9 = " << tabung9.volumeTabung()<<endl;
    cout<<"Volume Tabung ke-10 = " << tabung10.volumeTabung()<<endl;
    

    return 0;
}
