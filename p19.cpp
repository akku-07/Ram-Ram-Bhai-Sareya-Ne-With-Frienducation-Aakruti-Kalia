class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(),nums.end());
        int ans=0;
        for(int num: numset){
            if(numset.find(num-1)==numset.end()){
                int a=num,seq=1;

                while(numset.find(a+1)!=numset.end()){
                    a++;
                    seq++;
                }

                ans=max(ans,seq);

            }
        }

        return ans;
    }
};