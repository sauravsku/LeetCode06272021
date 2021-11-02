class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     stack<int>s1;
     stack<int>s2;
     vector<int>ans;
      for(int i=0;i<m;i++)
      {
        s1.push(nums1[i]);
      }
      for(int j=0;j<n;j++)
      {
        s2.push(nums2[j]);
      }
        int flag1=0;      
        while(!s1.empty()){
            int n = s1.top();
            ans.push_back(n);
            s1.pop();
        }
        
        int flag2=0;      
        while(!s2.empty()){
            int n = s2.top();
            ans.push_back(n);
            s2.pop();
        }
        
        sort(ans.begin(),ans.end());
        nums1 = {};
        nums1 = ans;
    }
};