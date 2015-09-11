#include "stdafx.h"

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <queue>

#include <string>


using namespace std;

void FuncionBachesTecla();

int maxBolsa = 4;
int bolsas, i, numBolsa = 0;
int numRNG1, numRNG2;
bool a = true;

int contaBolsa = 0;
int contadas = 0;
int monedas;
char key;
deque<string> cola;

int TipoCoinRan;

int main()
{

	srand(time(NULL));
	numRNG1 = rand() % 50 + 20;
	
	numRNG2 = rand() % 5 + 1;
	cout << "espera: " << numRNG2 << "\n";


	int monedas = numRNG1;

	while (key != 116){
		system("cls");
		//       cout<<"ok2\n";
		//      //while(a==true){//principal
		//            cout<<"ok3\n";
		cout << "espera: " << numRNG2 << "\n";

		cout << "numero de monedas " << monedas << "\n";
		bolsas = monedas / maxBolsa;
		cout << "bolsas " << bolsas << endl << endl;

		for (i = 1; i<=monedas; i++){//aqui relleno monedas
			
			TipoCoinRan = rand() % 10 + 1;


			switch (TipoCoinRan){
				case 1:
					cola.push_back("peso");
					break;
				case 2:
					cola.push_back("U.S. Dollar");
					break;
				case 3:
					cola.push_back("Euro");
					break;
				case 4:
					cola.push_back("Yen");
					break;
				case 5:
					cola.push_back("British Pound");
					break;
				case 6:
					cola.push_back("Swiss Franc");
					break;
				case 7:
					cola.push_back("Canadian Dollar");
					break;
				case 8:
					cola.push_back("New Zealand Dollar");
					break;
				case 9:
					cola.push_back("African Rand ");
					break;
				case 10:
					cola.push_back("Indian rupee");
					break;
			}
			
		}

		cout << monedas;
		for (i = 0; i<monedas && key != 116; i++)
		{
			//                while ( key!=116 ){
			if (_kbhit()){
				key = _getch();
			}
			numRNG2 = rand() % 4 + 1;
			Sleep(numRNG2 * 1000);
			system("cls");
			cout << "espera: " << numRNG2 << "\n";
			cout << "terminar " << "t\n";
			cout << "error  " << "e\n";
			cout << "Listos: " << cola[i] << " , " << cola[i + 1] << " , " << cola[i + 2] << " , " << cola[i + 3] << ". " << "\n";//faltan del 1 al 4 
			//cout << "Listos: " << cola.at(0) << "\n";//faltan del 1 al 4 

			cout << "moneda " << i + 1 << " ";
			//cola.pop_front();
			cout << "bolsa " << numBolsa + 1 << endl;
			contaBolsa = contaBolsa + 1;
			if (key == 101){
				contaBolsa = 4;
				key = 0;
				cout << "error  \n";
			}
			if (contaBolsa == 4){
				numBolsa++;
				contaBolsa = 0;
			}
			
			//            }//while key!=116
		}//endkgbit


		a = false;//fin de programa
		//}//principal

	}//kbhit end
}//end main()










//for(i=0;i<monedas;i++){
//
//           while(contaBolsa<=maxBolsa){
//                    cout<<"bolsa "<<numBolsa+1<<" ";
//                    cout<<"moneda "<<i<<endl;
//                    contaBolsa++;
//            }
//        numBolsa++;
//
//        }





void FuncionBachesTecla()
{
	while (!_kbhit()){
		system("cls");
		cout << "ok2\n";
		//while(a==true){//principal
		cout << "ok3\n";

		cout << "numero de monedas " << monedas << "\n";
		bolsas = monedas / maxBolsa;
		cout << "bolsas " << bolsas << endl << endl;

		cout << monedas;
		for (i = 0; i<monedas; i++)
		{
			Sleep(100 * 60 * 60 * 60);
			cout << "ok4444\n";

			cout << "moneda " << i + 1 << " ";
			cout << "bolsa " << numBolsa + 1 << endl;
			contaBolsa = contaBolsa + 1;
			if (contaBolsa == 4){
				numBolsa++;
				contaBolsa = 0;
			}
		}






		a = false;//fin de programa
		//}//principal

	}//kbhit end

	cin >> i;
}
















