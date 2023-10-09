class Solution {
public:
    bool isPalindrome(int x) {
       int org = x;
       int rev = 0;
       while(x>0){
           int digit = x%10;
           rev = rev*10LL + digit;//Here LL is used for the large multiplication
           x=x/10;
       } 
       return org == rev;
    }
};
