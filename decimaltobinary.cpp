#include <iostream>
using namespace std;

void dtob1()
{
    int a = 10;
    string ans = "";
    while (a != 0)
    {
        if (a % 2)
            ans = '1' + ans;
        else
            ans = '0' + ans;

        a /= 2;
    }
    cout << ans;
}

void dtob2()
{
    int a = 10;
    string ans = "";
    while (a != 0)
    {
        if (a & 1)
            ans = '1' + ans;
        else
            ans = '0' + ans;

        a >>= 1;
    }
    cout << ans;
}

void ndtob2()
{
    int a = -6;
    char ans[32] = "";
    if (a < 0)
    {
        a *= -1;
    }
    int i = 31;

    while (a != 0)
    {
        if (a & 1)
            ans[i] = '1';
        else
            ans[i] = '0';

        a >>= 1;
        i++;
    }
    for (int j = 0; j < 32; j++)
    {
        if (ans[j] == '0')

            ans[j] = '1';
        else
            ans[j] = '0';
    }
    char carry = '1';
    for (int j = 32; j >= 0; j--)
    {
        if (ans[j] == '1')
        {
            if (carry == '1')
            {
                ans[j] == '0';
                carry = '1';
            }
            else
            {
                carry = '0';
            }
        }
        else
        {
            if (carry == '1')
            {
                ans[j] == '1';
                carry = '0';
            }
            else
            {
                carry = '0';
            }
        }
    }
    cout << ans;
}
int main()
{
    ndtob2();
    return 0;
}