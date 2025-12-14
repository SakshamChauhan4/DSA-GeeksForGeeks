class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        vector<int> temp(arr.size());
        for(int i = 0; i<arr.size(); i++){
            temp[i] = arr[arr.size() - i - 1];
        }
        arr = temp;
    }
};