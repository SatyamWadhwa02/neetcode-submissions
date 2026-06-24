class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int x=1;
int zeros=0;
int n=nums.size();
vector<int> ans(n);
for(int i=0;i<n;i++){
    if(nums[i]==0){
        zeros++;
        continue;
    }
    x*=nums[i];
}if(zeros==0){
    for(int i=0;i<n;i++){
        ans[i]=x/nums[i];
    }
}
else if(zeros==1){
   for(int i=0;i<n;i++){
    if(nums[i]==0){
      ans[i]=x;
    }
    else(ans[i]=0);
   }
}
else if(zeros>1){
    for(int i=0;i<n;i++){
        ans[i]=0;
    }
}
return ans;
    }
};
