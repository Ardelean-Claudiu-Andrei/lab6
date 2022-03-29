//
// Created by Andrei on 3/17/2022.
//

#ifndef LAB4_PATRAT_H
#define LAB4_PATRAT_H



class Point2D{
private:
    int x;
    int y;
public:
    Point2D();
    Point2D(int v1, int v2);
    Point2D(const Point2D &p);
    ~Point2D();
    void setx(int v1);
    void sety(int v2);
    int getx() const;
    int gety() const;
    Point2D& operator = (const Point2D &p);
};
class Square{
private:
    //coordonatre stanga sus
    Point2D corner;
    int lat;
public:
    Square();
    Square(const Point2D& c, int v3);
    Square(const Square &s);
    ~Square();//destructor
    //void setx(int v1);
    //void sety(int v2);
    void setlat(int v3);
    int getlat() const;
    Point2D getCorner();
    Square& operator = (const Square &s);
    static int area(int v3);
    static int perim(int v3);
};
#endif //LAB4_PATRAT_H