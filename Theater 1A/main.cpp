#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n , m, a;

    cin >> n >> m >> a ;

    int s = n*m;

    int f = a*a;

    float amount = s / f;




    cout << ceil(amount) << endl;




}
