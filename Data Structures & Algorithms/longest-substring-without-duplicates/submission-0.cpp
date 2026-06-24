class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int left=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            while(a.count(s[i])){
                a.erase(s[left]);
                left++;
            }
            a.insert(s[i]);
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};
