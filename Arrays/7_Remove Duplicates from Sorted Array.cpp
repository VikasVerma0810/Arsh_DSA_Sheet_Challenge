//Problem Link
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1141932912/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        for(int j=1;j<n;j++){

            if(nums[i]!=nums[j]){

                nums[i+1]=nums[j];

                i++;

            }

        }

        return i+1;
    }
};