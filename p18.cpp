#include <bits/stdc++.h>
class Solution {
public:

    int give(int n){
        int ans=0;
        while(n>0){
            ans+=pow(n%10,2);
            n/=10;
        }

        return ans;
    }

    bool isHappy(int n) {
        int ans=0;
        int t=10;
        while(t--){
            
            
            ans=give(n);
            
            
            if(ans==1){
                return true;
            }

            n=ans;
        }

        return false;
    }
};