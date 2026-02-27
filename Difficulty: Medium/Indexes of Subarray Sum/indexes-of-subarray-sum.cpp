class Solution {
public:
 vector<int> subarraySum(vector<int>& arr, int s) {
        unordered_map<long long, int> mp;
        long long prefixSum = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            prefixSum += arr[i];

            if (prefixSum == s)
                return {1, i + 1};

            if (mp.find(prefixSum - s) != mp.end())
                return {mp[prefixSum - s] + 2, i + 1};

            mp[prefixSum] = i;
        }

        return {-1};
    }
};