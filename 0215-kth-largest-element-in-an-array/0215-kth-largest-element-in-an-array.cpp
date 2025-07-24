class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for(int i=0; i<arr.size(); i++){
            minHeap.push(arr[i]);
            
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        
        return minHeap.top() ;
    }
};