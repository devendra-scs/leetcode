/*
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Follow up:

Coud you solve it without converting the integer to a string?
Success
Details 
Runtime: 12 ms, faster than 81.99% of C++ online submissions for Palindrome Number.
Memory Usage: 6.1 MB, less than 43.66% of C++ online submissions for Palindrome Number.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        int array[20];
        int len=0;
        
        if(x<0 ){
            return false;
        }
        
        if(x<10 ){
            return true;
        }
        
        
        while(x>9){
            int remender=x%10;
            array[len++]=remender;
            x=x/10;
        }
        array[len++]=x;
        for(int i=0;i<len;i++){
            if(array[i]!=array[len-1]){
                return false;
            }
            len--;
        }
        return true;
    }
};
