class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i=0;i<k;i++){
            int first = nums[0];
             nums[0] = nums[nums.size()-1];
            for(int j=1;j<nums.size();j++){
                int temp2 = nums[j];
                nums[j] = first;
                first=temp2;
            }
           
        }
    }
};