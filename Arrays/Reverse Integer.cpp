// 7. Reverse Integer

// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 -1], then return 0

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

// int reverse(int x) {

//     long long int num = 0;

//     while(x != 0){
//         num = num*10 + x%10;
//         x = x/10;
//     }
//     if(num < INT_MIN or num>INT_MAX){
//         return 0;
//     }
//     return num;
// }

int reverse(int x)
{

    int ans = 0;
    while (x != 0)
    {

        if (ans < (pow(-2, 31)) / 10 || ans > (pow(2, 31) - 1) / 10)
        {
            return 0;
        }
        else
        {
            int digit = x % 10;
            ans = (ans * 10) + digit;
            x = x / 10;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << reverse(n);

    return 0;
}