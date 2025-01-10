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
	cout<<"Binek aracın markasını giriniz :"<<endl;
	getline(cin,binek.marka);
	cout<<"Binek aracın modelini giriniz :"<<endl;
	getline(cin,binek.model);
	cout<<"Binek aracın yılını giriniz :"<<endl;
	cin>>binek.yil;
	cout<<"Binek aracın yakıt türünü giriniz giriniz (B,D,G,H):"<<endl;
	cin>>binek.yakit;
	cout<<"Binek aracın kilometresini giriniz :"<<endl;
	cin>>binek.km;
	cout<<"Binek aracın fiyatını giriniz :"<<endl;
	cin>>binek.fiyat;
	
		cout << "\nBinek Araç Bilgileri:" << endl;
    cout << "Marka: " << binek.marka <<endl<<"Model: " << binek.model <<endl<< "Yıl: " << binek.yil<<endl
         << "Yakıt: " << binek.yakit<<endl << "KM:" << binek.km <<endl<< "Fiyat: " << binek.fiyat<< " TL" << endl;
	
	cout<<"\nSuv aracın markasını giriniz :"<<endl;
	getline(cin,suv.model);
	cin.ignore();
	cout<<"Suv aracın modelini giriniz :"<<endl;
	getline(cin,suv.model);
	cin.ignore();
	cout<<"Suv aracın yılını giriniz :"<<endl;
	cin>>suv.yil;
	cout<<"Suv aracın yakıt türünü giriniz giriniz (B,D,G,H):"<<endl;
	cin>>suv.yakit;
	cout<<"Suv aracın kilometresini giriniz :"<<endl;
	cin>>suv.km;
	cout<<"Suv aracın fiyatını giriniz :"<<endl;
	cin>>suv.fiyat;
	
	 cout << "\nSUV Araç Bilgileri:" << endl;
    cout << "Marka: " << suv.marka <<endl <<" Model: " << suv.model <<endl <<"Yıl: " << suv.yil<<endl
         << "Yakıt: " << suv.yakit<<endl << "KM: " << suv.km <<endl <<"Fiyat: " << suv.fiyat << " TL" << endl;
         
         
	cout<<"Ticari aracın markasını giriniz :"<<endl;
	getline(cin,ticari.marka);
	cin.ignore();
	cout<<"Ticari aracın modelini giriniz :"<<endl;
	getline(cin,ticari.model);
	cin.ignore();
	cout<<"Ticari aracın yılını giriniz :"<<endl;
	cin>>ticari.yil;
	cin.ignore();
	cout<<"Ticari aracın yakıt türünü  giriniz (B,D,G,H):"<<endl;
	cin>>ticari.yakit;
	cout<<"Ticari aracın kilometresini giriniz :"<<endl;
	cin>>ticari.km;
	cin.ignore();
	cout<<"Ticari aracın fiyatını giriniz :"<<endl;
	cin>>ticari.fiyat;

    cout << "\n Ticari Araç Bilgileri" << endl;
    cout << "Marka: " << ticari.marka <<endl<< "Model: " << ticari.model<<endl << "Yıl: " << ticari.yil<<endl
         << "Yakıt: " << ticari.yakit <<endl<< "KM: " << ticari.km <<endl <<"Fiyat: " << ticari.fiyat << " TL" << endl;
	
	return 0;
}
