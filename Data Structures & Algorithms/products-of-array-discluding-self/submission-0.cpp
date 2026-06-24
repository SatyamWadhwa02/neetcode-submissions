class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> pre;
      vector<int> ans;
      int n=nums.size();
      vector<int> post(n);
      pre.push_back(1);
      int  x=1;
      for(int i=1;i<n;i++){
         x=x*nums[i-1];
         pre.push_back(x);
      }
      x=1;
      post[n-1]=1;
      for(int i=n-2;i>=0;i--){
          x=x*nums[i+1];
          post[i]=x;
      }
      for(int i=0;i<n;i++){
        x=pre[i]*post[i];
        ans.push_back(x);
      }
      return ans;
    }
};
