#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest=0;
        int highest=0;
        int count=prices[highest]-prices[lowest];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<prices[lowest]){
                lowest=i;
                highest=i;
                prices[highest]-prices[lowest]>count?count=prices[highest]-prices[lowest]:count=count;
            }
            if(prices[i]>prices[highest]){
                highest=i;
                prices[highest]-prices[lowest]>count?count=prices[highest]-prices[lowest]:count=count;
            }
        }
        return count;
    }
};