class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index;
        
        if(nums.size()==0)
        {
            return 0;
        }else{
            auto it = find(nums.begin(),nums.end(),target);
            if(it!=nums.end()){
                index = it-nums.begin();
            }else{
                for(int i=0;i<nums.size();i++){
                    if(nums[i]<target){
                        continue;
                    }else{
                        index = i;
                        break;
                    }
                }
            }
        }
        return index;
    }
};