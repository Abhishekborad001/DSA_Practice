class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();
        long long sn = (n * (n+1))/2;
        long long s2n = (n*(n+1)*(2*n+1))/6;
        
        long long s=0, s2=0;
        
        for(int i=0;i<n;i++){
            s+= arr[i];
            s2+= (long long)arr[i] * (long long)arr[i];
            
        }
        
        //x-y
        long long val1 = s-sn;
        
        //x^2 - y^2
        long long val2 = s2-s2n;
        
        //  x+y
        val2 = val2/val1;
        //sum both the equation
        long long x = (val1+val2)/2;
        long long y = x-val1;
        
        return{int(x),int(y)};
        
    }
};