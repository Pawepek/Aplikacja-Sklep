#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include "Error.h"
#include "CheckWybor.h"
#include "Produkt.h"
#include "Konsola.h"
#include "Pass.h"
#include "Plik.h"
#include "Gra.h"

using namespace std;
int main()
{


	
	
	setlocale(LC_ALL, "");
	Produkt<int, double, string> *produkt=new Produkt<int,double,string>(7,1.78,"PS4Yo");
	Konsola *konsola = new Konsola(2, 9, 2111.78, "PlayStation 3");
	Gra *gra = new Gra("PS4", 18, 181.21, "Uncharted 4");
	Konsola *konsola2 = new Konsola(3, 4, 2411.78, "Xbox 360");
	Gra *gra2 = new Gra("Xbox One", 18, 201.81, "Gears of war 4");






	double koszyk = 0;
	string login, haslo;
	int proby = 3;
	int choice = 1;
	while (choice != 0)
	{
		try
		{
			system("CLS");
			cout << "-------------------------\n"
				<< "  Sklep Konsolowy by Pawe³ Pajor\n"
				<< "-------------------------\n";
			cout << "Do zaplaty: " << koszyk << " z³\n\n"

				<< "Oferowany produkty:\n";

			cout << "\n-------------------------\n"
				<< "1.PlayStation 3 + 2 pady\n"
				<< "2.Xbox 360 + 3 pady\n"
			
				<< "3.Gra Uncharted 4 \n"
				<< "4.Gra Gears of War 4\n"
				
				<< " 5. Do Kasy\n"
				<< "\n0.Wyjscie\n"
				<< "\nTwoj wybor: ";
			cin >> choice;
			CheckWybor a(choice);

			switch (choice)
			{
			case 1:

				konsola->wypisz();
				konsola->koszyk_info();
				koszyk += konsola->get_cena();
				Plik::zapisz(konsola);
				Sleep(4000);
				break;
			case 2:
				konsola2->wypisz();
				konsola2->koszyk_info();
				koszyk += konsola2->get_cena();
				Plik::zapisz(konsola2);
				Sleep(4000);
				break;
			case 3:
				gra->wypisz();
				koszyk += gra->get_cena();
				Plik::zapisz(gra);
				Sleep(4000);
				break;
			case 4:
				gra2->wypisz();
				koszyk += gra2->get_cena();
				Plik::zapisz(gra2);
				Sleep(4000);
				break;
			case 5:
				system("CLS");
				cout << "Logowanie do banku\n";
				cout << "Login: " << endl;
				cin >> login;
				cout << "Has³o: " << endl;
				cin >> haslo;
				while (proby)
				{
					if (login != "login" && haslo != "password")
					{
						proby--;
						Pass d(login, haslo);
						Sleep(3500);
					}
					else
						break;
				}

			}
		}
		catch (int b)
		{
			Error c(b);

		}
	}
	
	system("pause");	

	return 0;


}