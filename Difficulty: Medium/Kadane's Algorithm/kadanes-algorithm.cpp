
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        int result = arr[0];
        int maxEnding = arr[0];
        for(int i = 1;i<n;i++){
            maxEnding=max(maxEnding+arr[i],arr[i]);
            
                result=max(result,maxEnding);
            }
            return result;
       
    }
};

