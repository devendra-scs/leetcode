/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

Success
Details 
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Integer.
Memory Usage: 6.1 MB, less than 41.14% of C++ online submissions for Reverse Integer.
*/
class Solution {   
    
        
public:
    int reverse(int x) {
        int number=std::abs(x);
        int result=0;
         auto max_a = std::numeric_limits<int32_t>::max() / 10;
        try{
        while(number>9){
          int remender =number%10;
            number=number/10;  
           
        if(result >=(max_a+number) ) {
            return 0;
        }
            result=(result*10)+remender;
        }   
        
         if(result >=(max_a+number) ) {
            return 0;
        }
            
        result=result*10+number;
        
        if(x>0){
            return result;
        }
        return 0-result;
            
        }catch(...){
            
        }
        return 0;
    }
};
