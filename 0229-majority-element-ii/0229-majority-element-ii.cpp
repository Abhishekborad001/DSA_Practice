class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int e1=INT_MIN;
        int e2 = INT_MIN;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(cnt1==0 && nums[i]!=e2){
                cnt1++;
                e1 = nums[i];
            }
            else if(cnt2==0 && nums[i]!=e1){
                cnt2++;
                e2 = nums[i];
            }
            else if(nums[i]==e1) cnt1++;
            else if(nums[i]==e2) cnt2++;
            else cnt1--,cnt2--;
        }
        vector<int> ans;
        cnt1=0,cnt2=0;

        for(int i=0;i<n;i++){
            if(nums[i]==e1) cnt1++;
            if(nums[i]==e2) cnt2++;
        }
        int mini = (int)(n/3)+1;
        if(cnt1>=mini) ans.push_back(e1);
        if(cnt2>=mini) ans.push_back(e2);

        return ans;
    }
};