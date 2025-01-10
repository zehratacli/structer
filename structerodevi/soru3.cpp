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
    cout << "Ad� Soyad�: "; 
	getline(cin, kurye.adsoyad);
    cout << "Telefon No: "; 
	cin>>kurye.telno;
	cin.ignore();
     for (int i = 0; i < 5; ++i) {
        cout << i + 1 << ". g�nderi i�in bilgileri giriniz:" << endl;
        cout << "G�nderen Bilgileri:" << endl;
        cout << "Ad� Soyad�: "; 
		getline(cin, gonderen[i].adsoyad);
		cin.ignore();
        cout << "Adres: "; 
		getline(cin, gonderen[i].adres);//
		cin.ignore();
        cout << "Telefon No: "; 
		cin>>gonderen[i].telno;

        cout << "Al�c� Bilgileri:" << endl;
        cout << "Ad� Soyad�: "; 
		getline(cin, alici[i].adsoyad);
		cin.ignore();
        cout << "Adres: "; 
		getline(cin, alici[i].adres);
		cin.ignore();
        cout << "Telefon No: "; 
		cin>>alici[i].telno;

        cout << "G�nderi Bilgileri:" << endl;
        cout << "G�nderi No: ";
	    cin >> kargolar[i].kargono;
        cout << "A��rl�k (kg): "; 
		cin >> kargolar[i].agirlik;
        cout << "Hacim (m�): "; 
		cin >> kargolar[i].hacim;
        cout << "Garanti (e/h): "; 
		cin >> kargolar[i].garanti;
        cout << "�cret (TL): "; 
		cin >> kargolar[i].ucret;
      }
	
	 cout << "bilgileri listele";
    for (int i = 0; i < 5; ++i) {
        cout << "\n" << i + 1 << ". G�nderi:" << endl;
        cout << "G�nderen: " << gonderen[i].adsoyad << ", " << gonderen[i].adres << ", " << gonderen[i].telno << endl;
        cout << "Al�c�: " << alici[i].adsoyad << ", " << alici[i].adres << ", " << alici[i].telno << endl;
        cout << "G�nderi No: " << kargolar[i].kargono<< endl;
        cout << "A��rl�k: " << kargolar[i].agirlik << " kg" << endl;
        cout << "Hacim: " << kargolar[i].hacim << " m�" << endl;
        cout << "Garanti: " << (kargolar[i].garanti == 'e' ? "Evet" : "Hay�r") << endl;
        cout << "�cret: " << kargolar[i].ucret << " TL" << endl;
    }
	
	
	return 0;
}
