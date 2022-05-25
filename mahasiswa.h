using namespace std;

struct data{
	string nama;
	int npm;
	float nilaiUts, nilaiUas;
};

class maha{
	private:
	data a;
	
	public:
	maha(){
		this -> a.nama = " ";
		this -> a.npm = 0;
		this -> a.nilaiUts = 0;
		this -> a.nilaiUas = 0;
	}
	
	maha(string name, int NPM, float nu, float na ){
		this -> a.nama = name;
		this -> a.npm = NPM;
		this -> a.nilaiUts = nu;
		this -> a.nilaiUas = na;
	}	
	
	void set_nama(string name){
		this->a.nama = name;
	}
	
	string get_nama(){
		return a.nama;
	}
	
	void set_npm(int NPM){
		this -> a.npm = NPM;
	}
	
	int get_npm(){
		return a.npm;
	}
	
	void set_nilaiUts(float nu){
		this -> a.nilaiUts = nu;
	}
	
	float get_nilaiUts(){
		return a.nilaiUts;
	}
	
	void set_nilaiUas(float na){
		this -> a.nilaiUas = na;
	}

	float get_nilaiUas(){
		return a.nilaiUas;
	}
	
	float nilaiAkhir(){
        return (a.nilaiUts + a.nilaiUas)/2;
    }
    
    char hurufMutu(float NA){
        char hm;
        if(NA >= 80 && NA <= 100){
            hm = 'A';
        }
        else if(NA >= 68 && NA < 80){
            hm = 'B';
        }
        else if(NA >= 56 && NA < 68){
            hm = 'C';
        }
        else if(NA >= 45 && NA < 56){
            hm = 'D';
        }
        else{
            hm = 'E';
        }
        return hm;
    }
};

