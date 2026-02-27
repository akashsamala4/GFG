
class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> v;
        int n = arr.size(); 
        int max = arr[n - 1]; 
     
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] >= max) {
                max = arr[i];
                v.push_back(max);
            }
        }

        reverse(v.begin(), v.end()); 
        return v;
    }
};


