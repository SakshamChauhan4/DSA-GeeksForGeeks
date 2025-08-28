class Solution {
  public:
    bool checkYear(int n) {
        if (n % 4 == 0 && n % 100 != 0)
        {
            return 1;
        }
        if (n % 400 == 0)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
};