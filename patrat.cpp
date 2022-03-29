//
// Created by Andrei on 3/16/2022.
//

#include <iostream>
#include "patrat.h"
Square::Square() {
    this->corner.setx(0);//this este o adresa  (*this).sertar este dereferentiere
    this->corner.sety(0);
    this->lat = 0;
}
int Square::getlat() const{
    return this->lat;
}
Square::Square(const Point2D& c, int v3){
    this->corner= c;
    this->lat=v3;
}

Point2D Square::getCorner() {
    /*int a,b;
    //std::cout<<"punctele "<< a<<" " <<b <<std::endl;
    //this-> x = corner.setx(a);
    //this-> y = corner.sety(b);
    a=corner.getx();
    b=corner.gety();
    std::cout<<"punctele "<< a<<" " <<b <<std::endl;
    this->a = corner.getx();
    this->b = corner.gety();
*/
    //DEJA NU MAI STIU CE SA FAC SI AM LASAT ASa
    return {this->corner.getx(),this->corner.gety()};

}
void Square::setlat(int v3){
    this->lat=v3;
}
Square::Square(const Square &s) {
    this->corner=s.corner;
    //this->y=s.y;
    this->lat=s.lat;
}
Square::~Square() {
    //std::cout<<"Destructor for:"<< this->corner.getx()<<" "<<this->corner.gety()<<" "<< this->lat<<std::endl;
}
Square&::Square::operator=(const Square &s) {
    this->corner=s.corner;
    //this->y=s.y;
    this->lat=s.lat;
    return *this;
}
int Square::area(int v3){
    return v3*v3;
}
int Square::perim(int v3){
    return 4*v3;
}

Point2D::Point2D() {
    this->x = 0; //this este o adresa  (*this).sertar este dereferentiere
    this->y = 0;
}
Point2D::Point2D(int v1, int v2) {
    this->x = v1; //this este o adresa  (*this).sertar este dereferentiere
    this->y = v2;
}
int Point2D::getx() const{
    return this->x;
}
int Point2D::gety() const{
    return this->y;
}
void Point2D::setx(int v1){
    this->x=v1;
}
void Point2D::sety(int v2){
    this->y=v2;
}
Point2D::Point2D(const Point2D &p) {
    this->x=p.x;
    this->y=p.y;
}
Point2D::~Point2D() {
    //std::cout<<"Destructor for:"<< this->x<<" "<< this->y<<std::endl;
}
Point2D&::Point2D::operator=(const Point2D &p) {
    this->x=p.x;
    this->y=p.y;
    //this->lat=s.lat;
    return *this;
}
