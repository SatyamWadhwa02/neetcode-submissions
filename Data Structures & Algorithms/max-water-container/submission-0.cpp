class Solution {
public:
    int maxArea(vector<int>& heights) {
       int i=0;
       int j=heights.size()-1;
       int ans=0;
       int area=0;
       int width;
       while(i<j){
         width=j-i;
         area=width*(min(heights[i],heights[j]));
         ans=max(area,ans);
         if(heights[i]<heights[j])i++;
         else j--;
       } 
       return ans;
    }
};
