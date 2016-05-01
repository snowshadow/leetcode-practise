class Solution {
public:
    int mySqrt(int x) {
        // binary search
        int min=1,max=x-1;
        int close=x;
        while(min<=max) {
             int mid = (min+max)/2;
             if(x/mid>mid){
                 // 四舍五入取较小的值做根
                close = mid;
                min=mid+1;
             }else if(x/mid<mid){
                 max=mid-1;
             }else{
                 return mid;
             }
        }
        return close;
    }
};
