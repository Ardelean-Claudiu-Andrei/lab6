//
// Created by adela on 3/23/2022.
//
#include "iostream"
#include "patrat.h"
using namespace std;
void readSquare(int &n, Square a[])
/// functia citeste un vector de obiecte de tip Square.
/// \param n lungimea vectorului.
/// \param a vectorul de obiecte de tip Square.
{
    cout<<"Introduceti numarul de patrate pe care doriti sa le cititi mai departe: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x=0,y=0,lat=0;
        cout<<"Patratul "<< i+1<<endl;
        cout<<"x = ";cin>>x;cout<<endl;
        cout<<"y = ";cin>>y;cout<<endl;
        cout<<"lat = ";cin>>lat;cout<<endl;
        Point2D p1(x,y);
        Square s1(p1, lat);
        a[i]= s1;
    }
}
void printSquares(int n, Square a[])
/// \functia va afisa tpate obiectele de tip Square care se afla in vectorul primit.
/// \param n lungimea vectorului de obiecte.
/// \param a vectorul de obiecte de tip Square.
{
    for(int i=0;i<n;i++){
        int cx = a[i].getCorner().getx();
        int cy = a[i].getCorner().gety();
        int latura = a[i].getlat();
        cout<<" Patratul de coordonate "<<cx<< " si "<<cy<<" si latura "<< latura<<endl;
    }
}

void printSquares_st_fin(int n, Square a[], int start, int stop)
/// Functia afiseaza obiectele de tip Square din vector intre doua pozitii stabilite.
/// \param n lungimea vectorului de obiecte.
/// \param a vectorul de obiecte.
/// \param start pozitia de start a secventei pe care dorim sa o afisam.
/// \param stop pozitia de sfarsit a secventei pe care dorim sa o afisam.
{
    cout<<"Cea mai lunga secventa de patrate egale este: "<<endl;
    for(int i=start;i<=stop;i++){
        int cx = a[i].getCorner().getx();
        int cy = a[i].getCorner().gety();
        int latura = a[i].getlat();
        cout<<" Patratul de coordonate "<<cx<< " si "<<cy<<" si latura "<< latura<<endl;
    }
}