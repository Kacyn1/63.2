#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class dwa_jeden {
	ifstream plik;
	
	public:
		dwa_jeden();
		~dwa_jeden();
		void wczytaj_to();
		bool sprawdzenie(string s);
};
dwa_jeden::dwa_jeden() {
	plik.open("ciagi.txt");
	
}
void dwa_jeden::wczytaj_to() {
	string ciag;
	int ilosc=0;
	if(plik.good()) {
		while(!plik.eof()) {
		plik>>ciag;
		if(this->sprawdzenie(ciag)) {
		ilosc++;
			}
		}		
	}
	cout<<ilosc;
	
}
bool dwa_jeden::sprawdzenie(string ciag) {
	for(int i=0; i<ciag.length(); i++) {
	if(ciag[i]=='1' && ciag[i+1]=='1') {
	return false;
	}
}
	return true;
}
dwa_jeden::~dwa_jeden() {
	plik.close();
}




int main(int argc, char** argv) {
dwa_jeden c;
c.wczytaj_to();
return 0;
}
