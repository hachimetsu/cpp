#include<iostream>

using namespace std;
class Shape{
    protected:
    double TArea;
    double RArea;
    public:
    virtual void Display() = 0;
    virtual void Input(float, float) = 0;
};
class Triangle: public Shape {
    public:
    void Input(float Base, float Height){
        TArea = 0.5*Base*Height;
    }
    void Display(){
        cout << "Area of Triangle : " << TArea << endl;
    }
};
class Retangle: public Shape{
    double Area;
    public:
    void Input(float Base, float Height){
        RArea = Base*Height*1.0;
    }
    void Display(){
        cout << "Area of Rectangle : " << RArea << endl;
    }
};
int main(){
    Shape *Test;
  int ch;
    float B, H;
    do{
        cout <<"------------------------------" << endl
             << "1. Triangle " << endl
             << "2. Rectangle " << endl
             << "0. EXIT !" << endl
             << "choise : ";
        cin >> ch;
        switch(ch){
            case 1: cout << "Ent 2 val : ";
                    cin >> B >> H;
                    Test = new Triangle(); break;
            case 2: cout << "Ent 2 val : ";
                    cin >> B >> H;
                    Test = new Retangle();
                    break;
            case 0: cout << "Thank u..." << endl; break;
            default: cout << "try Again !" << endl ;
        }
        Test->Input(B, H);
        Test->Display();
    }while(ch != 0);
    return 0;
}
