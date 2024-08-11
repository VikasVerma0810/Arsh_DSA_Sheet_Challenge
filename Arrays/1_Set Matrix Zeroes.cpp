// problem link
//  https://leetcode.com/problems/set-matrix-zeroes/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int checkrow[n];
        for(int i=0;i<n;i++){checkrow[i]=0;}

        int checkcol[m];
         for(int i=0;i<m;i++){checkcol[i]=0;}

        for(int i = 0; i<n; i++){

            for(int j = 0; j<m; j++){

                if(matrix[i][j]==0){

                    checkrow[i] = 1;

                    checkcol[j] = 1;

                }

            }

        }

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                if(checkrow[i]==1 || checkcol[j]==1){

                    matrix[i][j] = 0;

                }

            }

        }
    }
};