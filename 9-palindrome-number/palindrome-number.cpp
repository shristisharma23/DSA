class Solution {
public:
    bool isPalindrome(int x) {
   if (x<0 )
    return 0;
  int rev = 0;
  int dup = x;
  while (dup != 0)
  {
    int rem = dup % 10;
    dup /= 10;
    if(rev>INT_MAX/10 || rev<INT_MIN/10)
        return 0;
    rev = rev * 10 + rem;
  }
  return (x == rev);
    }
    
};