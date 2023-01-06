#include <iostream>
using namespace std;

void dm(int n, int m)
{
    switch (n)
    {
    case 1:
        switch (m)
        {
        case 1:
            cout << "One\n";
            break;

        case 2:
            cout << "Two\n";
            break;
        }
        cout << "One\n";
        break;

    case 2:
        switch (m)
        {
        case 1:
            cout << "One\n";
            break;

        case 2:
            cout << "Two\n";
            break;
        }
        cout << "Two\n";
        break;
    }
}

int main()
{
    dm(1,2);
    exit(0);
    int n;
    cin >> n;

    int a, b, c, d;
    a = n / 100;
    n %= 100;
    b = n / 50;
    n %= 50;
    c = n / 20;
    n %= 20;
    d = n / 1;
    n %= 1;
    cout << "100 " << a << endl;
    cout << "50 " << b << endl;
    cout << "20 " << c << endl;
    cout << "1 " << d << endl;
    return 0;
}