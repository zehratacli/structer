#include <iostream>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
	struct Otomobil{
		string marka;
		string model;
		int yil;
		char yakit;
		int km;
		float fiyat;
	};
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	Otomobil binek,suv,ticari;
	cout<<"Binek arac�n markas�n� giriniz :"<<endl;
	getline(cin,binek.marka);
	cout<<"Binek arac�n modelini giriniz :"<<endl;
	getline(cin,binek.model);
	cout<<"Binek arac�n y�l�n� giriniz :"<<endl;
	cin>>binek.yil;
	cout<<"Binek arac�n yak�t t�r�n� giriniz giriniz (B,D,G,H):"<<endl;
	cin>>binek.yakit;
	cout<<"Binek arac�n kilometresini giriniz :"<<endl;
	cin>>binek.km;
	cout<<"Binek arac�n fiyat�n� giriniz :"<<endl;
	cin>>binek.fiyat;
	
		cout << "\nBinek Ara� Bilgileri:" << endl;
    cout << "Marka: " << binek.marka <<endl<<"Model: " << binek.model <<endl<< "Y�l: " << binek.yil<<endl
         << "Yak�t: " << binek.yakit<<endl << "KM:" << binek.km <<endl<< "Fiyat: " << binek.fiyat<< " TL" << endl;
	
	cout<<"\nSuv arac�n markas�n� giriniz :"<<endl;
	getline(cin,suv.model);
	cin.ignore();
	cout<<"Suv arac�n modelini giriniz :"<<endl;
	getline(cin,suv.model);
	cin.ignore();
	cout<<"Suv arac�n y�l�n� giriniz :"<<endl;
	cin>>suv.yil;
	cout<<"Suv arac�n yak�t t�r�n� giriniz giriniz (B,D,G,H):"<<endl;
	cin>>suv.yakit;
	cout<<"Suv arac�n kilometresini giriniz :"<<endl;
	cin>>suv.km;
	cout<<"Suv arac�n fiyat�n� giriniz :"<<endl;
	cin>>suv.fiyat;
	
	 cout << "\nSUV Ara� Bilgileri:" << endl;
    cout << "Marka: " << suv.marka <<endl <<" Model: " << suv.model <<endl <<"Y�l: " << suv.yil<<endl
         << "Yak�t: " << suv.yakit<<endl << "KM: " << suv.km <<endl <<"Fiyat: " << suv.fiyat << " TL" << endl;
         
         
	cout<<"Ticari arac�n markas�n� giriniz :"<<endl;
	getline(cin,ticari.marka);
	cin.ignore();
	cout<<"Ticari arac�n modelini giriniz :"<<endl;
	getline(cin,ticari.model);
	cin.ignore();
	cout<<"Ticari arac�n y�l�n� giriniz :"<<endl;
	cin>>ticari.yil;
	cin.ignore();
	cout<<"Ticari arac�n yak�t t�r�n�  giriniz (B,D,G,H):"<<endl;
	cin>>ticari.yakit;
	cout<<"Ticari arac�n kilometresini giriniz :"<<endl;
	cin>>ticari.km;
	cin.ignore();
	cout<<"Ticari arac�n fiyat�n� giriniz :"<<endl;
	cin>>ticari.fiyat;

    cout << "\n--- Ticari Ara� Bilgileri ---" << endl;
    cout << "Marka: " << ticari.marka <<endl<< "Model: " << ticari.model<<endl << "Y�l: " << ticari.yil<<endl
         << "Yak�t: " << ticari.yakit <<endl<< "KM: " << ticari.km <<endl <<"Fiyat: " << ticari.fiyat << " TL" << endl;
	
	return 0;
}
