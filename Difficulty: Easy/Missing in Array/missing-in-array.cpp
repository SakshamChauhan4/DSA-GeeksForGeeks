class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size();
        long long actualSum = ((n + 1)*(n + 2))/2;
        long long arraySum = 0;
        for(int i = 0; i<n; i++){
            arraySum += arr[i];
        }
        return actualSum - arraySum;
    }
};