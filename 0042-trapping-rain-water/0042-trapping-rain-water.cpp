class Solution {
public:
    int trap(vector<int>& height) {
        int j = height.size() - 1;
        int i = 0;
        int sum = 0;
        int leftMax = height[0];
        int rightMax = height[j];

        while(i < j)
        {
            if(leftMax <= rightMax)
            {
                sum = sum + (leftMax - height[i]);
                i++;
                leftMax = max(leftMax, height[i]);
            }
            else
            {
                sum = sum + (rightMax - height[j]);
                j--;
                rightMax = max(rightMax, height[j]);
            }
        }
        return sum;
    }
};