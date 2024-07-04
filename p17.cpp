class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,int>m;
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            string s1=strs[i];
            sort(s1.begin(),s1.end());
            auto it=m.find(s1);

            if(it!=m.end()){
                ans[it->second].push_back(strs[i]);
            }
            else{
                ans.push_back({strs[i]});
                m[s1]=ans.size()-1;
            }
        }
        
        return ans;
    }
};