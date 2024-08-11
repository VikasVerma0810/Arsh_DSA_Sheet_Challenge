//Problem Link
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int minVal = prices[0];

    int maxi = 0;  

    for(int i=1;i<prices.size();i++){

        maxi = max(prices[i]-minVal,maxi);

        minVal = min(minVal, prices[i]);

    }

    return maxi;
        
    }
};