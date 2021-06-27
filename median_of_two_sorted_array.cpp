class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merged;
        double sum,res;
        for(auto x:nums1){
            merged.push_back(x);
        }
        for(auto x:nums2){
            merged.push_back(x);
        }
        sort(merged.begin(),merged.end());
        for(auto y:merged){
         sum+=y;   
        }
        int a = floor(merged.size()/2);
        if(merged.size()%2==0){
            res = (double)(merged[a-1]+merged[a])/2;
        }else{
             res = merged[a];
        }
        return res;
    }
};