class Solution {
public:
    int mySqrt(int x) {
        if (x==0 || x==1) return x;
        for(long long i=0;i<=(x/2)+1;i++){
            if((i*i)==x) return i;
            if((i*i) > x) return i-1;
        }
        return 0;
    }
};