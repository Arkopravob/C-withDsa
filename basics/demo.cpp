//
// Created by arkap on 13-10-2025.
//
#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    auto x = 5;
    auto a = 2;
    auto y = 10.5;
    auto z = 45.5f;
    auto ptr = &x;
    auto pptr = &ptr;
    cout << typeid(a).name() << endl;
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;
    cout << typeid(ptr).name() << endl;
    cout << typeid(pptr).name() << endl;
    return 0;
}