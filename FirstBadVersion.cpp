// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long badversion;
        for(long i=n;i>=0;i--){
            if(isBadVersion(i)){
                badversion=i;
                continue;
            }else{
                break;
            }
        }
        return badversion;
    }
};