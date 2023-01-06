#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int i = 1, j;
    while (i <= n)
    {
        // start
        j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        // mid
        j = 1;
        while (j <= (i - 1) * 2)
        {
            cout << " ";
            j++;
        }
        // end
        j = n - i + 1 ;
        while (j >= 1)
        {

            cout << j;
            j--;
        }


        cout << endl;
        i++;
    }

    return 0;
}