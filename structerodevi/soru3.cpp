#include <iostream>
#include <locale.h>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct Gonderenalici
{
	string adsoyad;
	string adres;
	string telno;
};
struct Kargo
{
	int kargono;
	int agirlik;
	int hacim;
	char garanti;
	int ucret;
};
struct Kurye
{
	string adsoyad;
	string telno;
};
int main()
{
	setlocale(LC_ALL, "Turkish");
	Gonderenalici gonderen[5], alici[5];
	Kargo kargolar[5];
	Kurye kurye;
	cout << "Kurye bilgilerini giriniz:" << endl;
    cout << "Adý Soyadý: "; 
	getline(cin, kurye.adsoyad);
    cout << "Telefon No: "; 
	cin>>kurye.telno;
	cin.ignore();
     for (int i = 0; i < 5; ++i) {
        cout << i + 1 << ". gönderi için bilgileri giriniz:" << endl;
        cout << "Gönderen Bilgileri:" << endl;
        cout << "Adý Soyadý: "; 
		getline(cin, gonderen[i].adsoyad);
		cin.ignore();
        cout << "Adres: "; 
		getline(cin, gonderen[i].adres);//
		cin.ignore();
        cout << "Telefon No: "; 
		cin>>gonderen[i].telno;

        cout << "Alýcý Bilgileri:" << endl;
        cout << "Adý Soyadý: "; 
		getline(cin, alici[i].adsoyad);
		cin.ignore();
        cout << "Adres: "; 
		getline(cin, alici[i].adres);
		cin.ignore();
        cout << "Telefon No: "; 
		cin>>alici[i].telno;

        cout << "Gönderi Bilgileri:" << endl;
        cout << "Gönderi No: ";
	    cin >> kargolar[i].kargono;
        cout << "Aðýrlýk (kg): "; 
		cin >> kargolar[i].agirlik;
        cout << "Hacim (m³): "; 
		cin >> kargolar[i].hacim;
        cout << "Garanti (e/h): "; 
		cin >> kargolar[i].garanti;
        cout << "Ücret (TL): "; 
		cin >> kargolar[i].ucret;
      }
	
	 cout << "bilgileri listele";
    for (int i = 0; i < 5; ++i) {
        cout << "\n" << i + 1 << ". Gönderi:" << endl;
        cout << "Gönderen: " << gonderen[i].adsoyad << ", " << gonderen[i].adres << ", " << gonderen[i].telno << endl;
        cout << "Alýcý: " << alici[i].adsoyad << ", " << alici[i].adres << ", " << alici[i].telno << endl;
        cout << "Gönderi No: " << kargolar[i].kargono<< endl;
        cout << "Aðýrlýk: " << kargolar[i].agirlik << " kg" << endl;
        cout << "Hacim: " << kargolar[i].hacim << " m³" << endl;
        cout << "Garanti: " << (kargolar[i].garanti == 'e' ? "Evet" : "Hayýr") << endl;
        cout << "Ücret: " << kargolar[i].ucret << " TL" << endl;
    }
	
	
	return 0;
}
