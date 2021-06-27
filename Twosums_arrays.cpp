class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0;
        int mid=start+1;
        int sum=0;
        vector<int>result;
        while(true){
            sum = nums[start]+nums[mid];
            if(sum!=target){
                if(mid<nums.size()-1){
                    mid++;
                }else{
                    start++;
                    mid=start+1;
                }
            }
            else{
                result.push_back(start);
                result.push_back(mid);
                return result;
            }
            
        }
    }
};