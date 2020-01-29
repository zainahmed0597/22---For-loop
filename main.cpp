#include <iostream>
using namespace std;

int main()
{
     //for( int x = 5; x < 55; x += 5){h
     //   cout << x << endl;
     //}h

    int n, i;
    cout << "Enter an integer: ";
    cin >> n;
    for (i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}

