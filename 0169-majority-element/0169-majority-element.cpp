class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maxi= *max_element(nums.begin(),nums.end());
        map<int,int> mpp;
        for(int i = 0;i<n;i++){
            mpp[nums[i]]++;
        }
        int maxFreq = 0;
        int ans;
        for(auto it:mpp){
            if(it.second>maxFreq){
                maxFreq=it.second;
                ans=it.first; 
            }
        }
        return ans;
    }
};