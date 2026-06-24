class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int seq=1;
        int ans=0;
        int m=s.size();
        int a=INT_MAX-1;
        for(int x:s){
          if(a+1==x)seq++;
          else seq=1;
          ans=max(ans,seq);
          a=x;
        }
        return ans;
    }
};
