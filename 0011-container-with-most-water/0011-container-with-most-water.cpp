class Solution {
public:
    int maxArea(vector<int>& height) {
        int mini,width;
        int maxi=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            mini=min(height[i],height[j]);
            width=j-i;
            maxi=max(maxi,mini*width); 
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
            
            
        }
        return maxi;
    }
};