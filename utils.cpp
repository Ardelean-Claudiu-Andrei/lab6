//
// Created by adela on 3/23/2022.
//
#include "patrat.h"
#include "iostream"
Square maxSquare(int n,Square a[])
/// Functia returneaza cel mai mare obiect de tip Squre, adica cel care are aria cea mai mare.
/// \param n lungimea vectorului.
/// \param a vectorul de obiecte.
/// \return obiectul de tip Square cel mai mare.
{
    Square maxs; //constr fara param si pune 0 la toate
    for (int i=0; i<n;i++){
        //Square s1 = a[i];
        //if (s1.area(s1.getlat())>maxs.area(maxs.getlat())){maxs=s1;}
        if ((a[i].area(a[i].getlat()))>(maxs.area(maxs.getlat()))){maxs=a[i];}
    }
    return maxs;
}
void filterCadranone(int n, Square a[], int &pos, Square aux[])
/// Functia va returna un vector care contine toate obiectele de tip Square care se afla in cadranul 1.
/// \param n lungimea vectorului care contine toate obiectele de tip square.
/// \param a vectorul initial.
/// \param pos contorul noului vector.
/// \param aux vectoruyl care contine obiectele care indeplinesc conditia.
{
    //Square aux[100];
    //int pos=0;
    for (int i=0; i<n;i++){
    if ((a[i].getCorner().getx()>=0)&&(a[i].getCorner().gety()>=0)&&(a[i].getCorner().getx()-a[i].getlat()>=0))
    {aux[pos]=a[i];
        pos=pos+1;
    }
}}

//Identificarea celei mai lungi secvente de entitati egale TEMA

int longest_Sequence_of_entities(int n, Square a[], int &start)
/// Functia va returna pozitia finala a secventei de lunginme maxima care indeplineste conditia din primul "if".
/// \param n lungimea vectorului.
/// \param a vectorul.
/// \param start farametru prin referinta care se va modifica si va reprezenta pozitia de start a celei mai lungi secvente.
/// \return pozitia de final a secventei.
{
    int l_start = 0;
    int l_end = 0;
    int crt_start = 0;
    int crt_end;
    for (int i = 0; i < n; i++) {
        if (a[i].area(a[i].getlat()) == a[i+1].area(a[i+1].getlat())) {
            crt_end = i + 1;
            if (l_end - l_start < crt_end - crt_start) {
                l_end = crt_end;
                l_start = crt_start;
            }
        }
        else {
            crt_start = i + 1;
            //crt_end = i + 1;
        }
    }
    start = l_start;
    //trebuie sa adaugam + 2 la lungimea secventei deoarece se verifica pana la pozitia i+2 si daca e valid si se introduce x[i] atunci si pozitiile i+1 si i+2 sunt bune
    //l_end = l_end + 2;
    //mai bine la afisare
    return l_end;
}