class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        if(len==0)
            return digits;
        else{
            int ln = len-1;
            int carry = 1;
            while(ln>=0){
                if(digits[ln]==9&&carry==1){
                    int tmp =digits[ln];
                    digits[ln] = 0;
                    carry=1;
                    ln--;
                    if(tmp==9&&ln+1==0){
                        digits.insert(digits.begin(),1);
                    }
                    
                }
                else if(digits[ln]!=9 && carry==1){
                    digits[ln]+=1;
                    carry=0;
                    ln--;
                    
                }else{
                    ln--;
                }
            }
        }
        
        return digits;
    }
};