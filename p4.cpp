class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>n/2){
                ans=nums[i];
                break;
            }
        }

        return ans;
    }
};