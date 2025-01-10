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
	cout<<"Binek aracýn markasýný giriniz :"<<endl;
	getline(cin,binek.marka);
	cout<<"Binek aracýn modelini giriniz :"<<endl;
	getline(cin,binek.model);
	cout<<"Binek aracýn yýlýný giriniz :"<<endl;
	cin>>binek.yil;
	cout<<"Binek aracýn yakýt türünü giriniz giriniz (B,D,G,H):"<<endl;
	cin>>binek.yakit;
	cout<<"Binek aracýn kilometresini giriniz :"<<endl;
	cin>>binek.km;
	cout<<"Binek aracýn fiyatýný giriniz :"<<endl;
	cin>>binek.fiyat;
	
		cout << "\nBinek Araç Bilgileri:" << endl;
    cout << "Marka: " << binek.marka <<endl<<"Model: " << binek.model <<endl<< "Yýl: " << binek.yil<<endl
         << "Yakýt: " << binek.yakit<<endl << "KM:" << binek.km <<endl<< "Fiyat: " << binek.fiyat<< " TL" << endl;
	
	cout<<"\nSuv aracýn markasýný giriniz :"<<endl;
	getline(cin,suv.model);
	cin.ignore();
	cout<<"Suv aracýn modelini giriniz :"<<endl;
	getline(cin,suv.model);
	cin.ignore();
	cout<<"Suv aracýn yýlýný giriniz :"<<endl;
	cin>>suv.yil;
	cout<<"Suv aracýn yakýt türünü giriniz giriniz (B,D,G,H):"<<endl;
	cin>>suv.yakit;
	cout<<"Suv aracýn kilometresini giriniz :"<<endl;
	cin>>suv.km;
	cout<<"Suv aracýn fiyatýný giriniz :"<<endl;
	cin>>suv.fiyat;
	
	 cout << "\nSUV Araç Bilgileri:" << endl;
    cout << "Marka: " << suv.marka <<endl <<" Model: " << suv.model <<endl <<"Yýl: " << suv.yil<<endl
         << "Yakýt: " << suv.yakit<<endl << "KM: " << suv.km <<endl <<"Fiyat: " << suv.fiyat << " TL" << endl;
         
         
	cout<<"Ticari aracýn markasýný giriniz :"<<endl;
	getline(cin,ticari.marka);
	cin.ignore();
	cout<<"Ticari aracýn modelini giriniz :"<<endl;
	getline(cin,ticari.model);
	cin.ignore();
	cout<<"Ticari aracýn yýlýný giriniz :"<<endl;
	cin>>ticari.yil;
	cin.ignore();
	cout<<"Ticari aracýn yakýt türünü  giriniz (B,D,G,H):"<<endl;
	cin>>ticari.yakit;
	cout<<"Ticari aracýn kilometresini giriniz :"<<endl;
	cin>>ticari.km;
	cin.ignore();
	cout<<"Ticari aracýn fiyatýný giriniz :"<<endl;
	cin>>ticari.fiyat;

    cout << "\n--- Ticari Araç Bilgileri ---" << endl;
    cout << "Marka: " << ticari.marka <<endl<< "Model: " << ticari.model<<endl << "Yýl: " << ticari.yil<<endl
         << "Yakýt: " << ticari.yakit <<endl<< "KM: " << ticari.km <<endl <<"Fiyat: " << ticari.fiyat << " TL" << endl;
	
	return 0;
}
