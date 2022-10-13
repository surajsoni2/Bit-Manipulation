#include <bits/stdc++.h>
using namespace std;

// Approach 1
int main()
{
    int n;
    cin >> n;

    int arr[32] = {0};
    int i = 0;

    //converting negative to postive

    n=0-n;

    //calculating binary of +ve n
    while (n > 0)
    {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }

    // getting 1's Complement
    for (int x = 0; x < 32; x++)
    {
        if (arr[x])
            arr[x] = 0;
        else
            arr[x] = 1;
    }

    // getting 2's complement by adding 1 to 1's Complement
    int carry = 1;

    for (int j = 0; j <32; j++)
    {
        if (arr[j]==1 && carry==1)
        {
            arr[j] = 0;
        }
        else
        {
            arr[j] = carry;
            carry=0;
            break;
        }
    }

    for (int j = 31; j >= 0; j--)
        cout << arr[j];
}