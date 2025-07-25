class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
        long long ans=0;
        sort(A, A+N);
        
        for(long long i=K1; i<K2-1; i++){
            ans += A[i];
        }
        
        return ans;
    }
};