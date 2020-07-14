#include <iostream>

using namespace std;

class Base
{
public:
    virtual void Print(){cout << "Base" << endl; };
    void Show() {cout << "Base" << endl; }
};

class Derived : public Base
{
public:

    void Print(){cout << "Derived" << endl; };
    void Show() {cout << "Derived" << endl; }
};

int main()
{
    Derived d;
    Base b;
    b.Show();
    d.Show();
    return 0;
}
