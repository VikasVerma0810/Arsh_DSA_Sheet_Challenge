//Problem Link
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int start = prices[0];
        int len = prices.size();
        for(int i = 1;i<len; i++){
            if(start < prices[i]){
                max += prices[i] - start;
            }
            start = prices[i];
        }
        return max;
    }
};





// Variable Initialization:

// max is initialized to 0. This variable will accumulate the maximum profit throughout the iteration.
// start is initialized to prices[0], the price of the stock on the first day. This variable represents the buying price of the stock.
// len is initialized to prices.length, the length of the prices array, representing the total number of days.
// Iteration: A for loop iterates through the prices array starting from the second element (i = 1) to the end of the array (i < len). This loop is used to calculate the profit for each transaction.

// Profit Calculation:

// Within the loop, there's an if statement checking if the current price (prices[i]) is greater than the buying price (start). If true, it indicates a potential profit opportunity.
// The difference between the current price and the buying price (prices[i] - start) is calculated and added to max. This step simulates selling the stock bought at start price, capturing the profit, and then considering the current price as a new buying price for potential future transactions.
// Regardless of whether a profit was made or not, the start is updated to the current price (prices[i]). This step prepares for the next iteration, considering the current day's price as the new buying price.
// Return Statement: After the loop finishes executing, the method returns the accumulated max value, which represents the maximum profit that could have been achieved based on the given stock prices.