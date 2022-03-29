//
// Created by adela on 3/29/2022.
//
#include "iostream"
#include "io.h"
#include "utils.h"
#include "patrat.h"
using namespace std;
void afisarea_meniului()
{
    cout<<"1 . Introducerea informatiilor despre mai multe ENTITATI"<<endl<<
        "2 . Afisarea informatiilor despre toate entitatile"<<endl<<
        "3 . Determinarea celei mai mari entitati"<<endl<<
        "4 . Identificarea entitatilor situate [complet] in cadranul 1 de pe cercul geometric"<<endl<<
        "5 . Identificarea celei mai lungi secvente de entitati egale"<<endl<<
        "6 . Inchiderea aplciatiei"<<endl;
}
int meniu()
{   int n;
    Square squares[10];
    int obt = 0;
    while(true) {
        afisarea_meniului();
        cout << "Introduceti obtiunea dorita: ";
        cin >> obt;
        cout << endl;
        switch (obt) {
            case 1:
                readSquare(n, squares);
                cout << endl;
                break;
            case 2:
                printSquares(n, squares);
                cout << endl;
                break;
            case 3: {
                Square ms;
                ms = maxSquare(n, squares);
                std::cout << "patratul de x= " << ms.getCorner().getx()
                          << " y = " << ms.getCorner().gety() << " si latura = " << ms.getlat()
                          << " este cel mai mare. " << std::endl;
                cout << endl;
                break;
            }
            case 4: {
                Square v2[10];
                int k = 0;
                filterCadranone(n, squares, k, v2);
                std::cout << "Patratele din caranul 1 sunt: " << std::endl;
                printSquares(k, v2);
                cout << endl;
                break;
            }
            case 5: {
                int start = 0;
                int finalul = longest_Sequence_of_entities(n, squares, start);
                printSquares_st_fin(n, squares, start, finalul);
                cout << endl;
                break;
            }
            case 6:
            {cout<<"Sfarsit "<<endl;
                //break;
                return 0;}
            //default:
            //    cout<<"!!! Obtiune invalida !!!";
            //    break;
            default:
                cout<<"!!! Obtiune invalida !!!";
                afisarea_meniului();
                cout << "Introduceti obtiunea dorita: ";
                cin >> obt;
                break;
        }
    }
}
