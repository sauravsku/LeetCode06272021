class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index;
        vector<int>::iterator it;
        it = find(nums.begin(),nums.end(),target);
        if(it!=nums.end()){
            index = it-nums.begin();
        }else{
            index=-1;
        }
        return index;
    }
};