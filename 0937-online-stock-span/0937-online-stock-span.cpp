class StockSpanner {    
public:
    stack<pair<int, int>> st;  // {price, index}
    int inx;
    StockSpanner() {
        inx=-1;
        
    }
   
    int next(int price) {
        inx++;
        int ans=1;

        while(!st.empty() && st.top().first <= price){
            st.pop();
        }

        ans = inx - (st.empty() ? -1 : st.top().second);
        st.push({price, inx});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */