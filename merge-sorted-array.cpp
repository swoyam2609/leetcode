#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        int j;
        for(int i=0;i<n;i++){
            if(nums1[i]==0){
                j=i;
                break;
            }
        }
        for(int i=j;i<n;i++){
            nums1.erase(nums1.begin());
        }
    }
};