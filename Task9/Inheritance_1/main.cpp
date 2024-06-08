#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main(){
    Rectangle rect;
    Triangle trgl;
    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &rect;
   
     pPoly1->SetValue(4,5);
     pPoly2->SetValue(4,5);
    
     pPoly1->PrintArea();
     pPoly2->PrintArea();
   
    delete pPoly1;
    delete pPoly2;
    return 0;
}