class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;

        int n=s.size();
        set<char> used;
        for(int i=0;i<n;i++){
            
            if(mp.size()==0 || mp.find(s[i])==mp.end()  && used.find(t[i])==used.end()){
                mp[s[i]]=t[i];
                used.insert(t[i]);
            }

            // if(mp.size()==0 || mp.find(t[i])==mp.end()){
            //     mp[t[i]]=s[i];
            // }

             if(mp[s[i]]!=t[i]){
                return false;
            }
        }

        return true;
    }
};