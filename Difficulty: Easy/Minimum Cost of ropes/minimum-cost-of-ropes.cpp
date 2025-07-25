class Solution {
  public:
    int minCost(vector<int>& arr) {
        
       priority_queue<int, vector<int>, greater<int>> minHeap(arr.begin(), arr.end());
       int TCost = 0;
       
       while(minHeap.size()>1){
           int a= minHeap.top();
           minHeap.pop();
           int b= minHeap.top();
           minHeap.pop();
           
           TCost += (a+b);
           minHeap.push(a+b);
       }
       return TCost;
    }
};