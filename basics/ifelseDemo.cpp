//
// Created by arkap on 15-09-2025.
//
#include <iostream>
using namespace std;
int main() {
    // int a = 10, b = 20;
    // cout << a+b << endl;
    //
    // float x, y;
    // cin >> x >> y;
    // cout << x-y << endl;
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout<< "going to the party";
    }
    else {
        cout <<"you are a kid go for study";
    }
    return 0;
}