class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>2) continue;
            ans.push_back(nums[i]);
        }

        nums=ans;
        return nums.size();
    }
};