#include <iostream>
#include <locale.h>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Kumas
{
    string ipliktipi;
    float dm2agirlik;
    string dokumatipi;
    string renk;
    int miktar;
};

struct iskelet
{
    string malzeme;
    string birlestirme;
    string tarz;
    int boyut;
    int miktar;
};

struct Mobilya
{
    Kumas kaplama;
    iskelet malzeme;
    int fiyat;
    int adet;
};

int main()
{
	setlocale(LC_ALL, "Turkish");
	Mobilya mobilyalar[10];
	int toplam;
	
	for (int i=0;i<10;i++)
	{
		cout<<i+1<<". mobilya için bilgileri giriniz:"<<endl;
		//kumas bilgileri
		cout<<"iplik tipi: ";
		getline(cin,mobilyalar[i].kaplama.ipliktipi);//
		cin.ignore();
		cout<<"dm2 agirlik: "<<endl;
		cin >> mobilyalar[i].kaplama.dm2agirlik;
		cout<<"dokuma tipi: "<<endl;
		getline(cin,mobilyalar[i].kaplama.dokumatipi);
		cin.ignore();
		cout<<"renk: "<<endl;
		getline(cin,mobilyalar[i].kaplama.renk);
		cin.ignore();
		cout<<"miktar :"<<endl;
		cin >> mobilyalar[i].kaplama.miktar;
		//iskelet bilgi
		
		cout<<"malzeme :"<<endl;
		getline(cin,mobilyalar[i].malzeme.malzeme);
		cin.ignore();
		cout<<"birleþtirme :"<<endl;
		getline(cin,mobilyalar[i].malzeme.birlestirme);
		cin.ignore();
		cout<<"tarz :"<<endl;
		getline(cin,mobilyalar[i].malzeme.tarz);
		cin.ignore();
		cout<<"boyut :"<<endl;
		cin>>mobilyalar[i].malzeme.boyut;
		cout<<"miktar :"<<endl;
		cin>>mobilyalar[i].malzeme.miktar;
		
		cout<<"fiyat :"<<endl;
		cin>>mobilyalar[i].fiyat;
		cout<<"adet :"<<endl;
		cin>>mobilyalar[i].adet;
		
		toplam+=mobilyalar[i].fiyat*mobilyalar[i].adet;
	}
	cout << "listelenilen veriler";
	for (int i = 0; i < 10; ++i) {
        cout << "\n" << i + 1 << ". mobilya bilgileri :" << endl;
        cout << "iplik tipi: " << mobilyalar[i].kaplama.ipliktipi << endl;
        cout << "dm2 agirlik: " << mobilyalar[i].kaplama.dm2agirlik << endl;
        cout << "dokuma tipi: " << mobilyalar[i].kaplama.dokumatipi << endl;
        cout << "renk: " << mobilyalar[i].kaplama.renk << endl;
        cout << "miktar: " << mobilyalar[i].kaplama.miktar << endl;
        cout << "malzeme: " << mobilyalar[i].malzeme.malzeme << endl;
        cout << "birlestirme: " << mobilyalar[i].malzeme.birlestirme << endl;
        cout << "tarz: " << mobilyalar[i].malzeme.tarz << endl;
        cout << "boyut: " << mobilyalar[i].malzeme.boyut << endl;
        cout << "miktar: " << mobilyalar[i].malzeme.miktar << endl;
        cout << "fiyat: " << mobilyalar[i].fiyat << " TL" << endl;
        cout << "adet: " << mobilyalar[i].adet << endl;
}
		cout << "Toplam fiyat: " << toplam << " TL" << endl;
		
		
	return 0;
}

