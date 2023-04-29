// 121. Best Time to Buy and Sell Stock

// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    int minPrice = INT_MAX;

    for (int i = 0; i < prices.size(); i++)
    {   if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        int currProfit = prices[i] - minPrice;
        if (currProfit > maxProfit)
        {
            maxProfit = currProfit;
        }
    }
    return maxProfit;
}

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    cout << maxProfit(vec);

    return 0;
}