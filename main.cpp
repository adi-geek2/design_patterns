#include "PrivateInheritance.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Position p;
    Velocity v;
    cout << "X velocity before= " << v.v_x << endl;
    v.v_x = 100.0F;
    cout << "X velocity assigned before= " << v.v_x << endl;
    cout << "X before = " << p.x << endl;

    Position p1(1.0F,1.0F);
    Velocity v1(10.0F,10.0F);

    p = p1;
    v = v1;

    cout << "X velocity = " << v.v_x << endl;
    v.v_x = 1.0F;
    cout << "X velocity assigned= " << v.v_x << endl;
    cout << "X = " << p.x << endl;

    Position p3(3.0F,3.0F);
    Velocity v3(30.0F,30.0F);
    v3.x = p3.x;  
    
    Position p2(p3);
    Velocity v2(v3);

    cout << "X after other= " << v2.x << endl;
    v2.v_x = 1.0F;

    return 0;
}
