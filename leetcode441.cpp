class Solution {
public:
    int arrangeCoins(int n) {
        long sum=0;
        int i=1;
 
        while(true){     
            sum += i;
            i++;//1,2,3
            if(sum>n){
                i-=1;
                break;
            }
        } 
        return i-1;
    }
};
