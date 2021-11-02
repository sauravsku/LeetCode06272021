class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index;
        if(nums.size()==0){
           return 0;
        }
        else{
           for(int i=0;i<nums.size();i++){
               if(nums[i]==target){
                   index= i;
                   break;
               }else{
                    index=-1;   
               }   
           }
        }
        return index;
    }
    
};