#include <iostream>
using namespace std;

int main()
{
    int* p;
    p = new int;
    *p = 10;
    cout << "*p=" <<*p<< endl;
    delete p; // must delete else the memory leak
}