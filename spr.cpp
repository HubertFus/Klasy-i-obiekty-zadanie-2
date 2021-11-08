#include <iostream>
#include <string>
using namespace std;
class Uczen{
	public:
		string imie,nazwisko,klasa;
		int grupa,rokur;
		void pobierz();
		void wys();
		void metryczka(){
			cout<<"-----------------"<<endl;
			cout<<"program wykonal"<<endl;
			cout<<"Hubet fusiarz 3cg"<<endl;
			cout<<"-----------------"<<endl;
		}
};
Uczen& pobierz(Uczen* x){
	cout<<"podaj imie: ";
	cin>>x->imie;
	cout<<"podaj nazwisko: ";
	cin>>x->nazwisko;
	cout<<"podaj rok urodzenia: ";
	cin>>x->rokur;
	cout<<"podaj klase: ";
	cin>>x->klasa;
	cout<<"podaj podaj grupe: ";
	cin>>x->grupa;
}
Uczen& wys(Uczen* x){
	cout<<"twoje imie to "<<x->imie<<endl;
	cout<<"twoje nazwisko to "<<x->nazwisko<<endl;
	cout<<"twoj rok urodzenia to "<<x->rokur<<endl;
	cout<<"twoja klasa to "<<x->klasa<<endl;
	cout<<"twoja grupa to "<<x->grupa<<endl;
}
int main(){
	Uczen *ucz;
	ucz= new Uczen();
	ucz->metryczka();
	pobierz(ucz);
	wys(ucz);
	delete ucz;
}
