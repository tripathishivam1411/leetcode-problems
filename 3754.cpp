// 3754. Concatenate Non-Zero Digits and Multiply by Sum I
/*You are given an integer n.

Form a new integer x by concatenating all the non-zero digits of n in their original order. If there are no non-zero digits, x = 0.

Let sum be the sum of digits in x.

Return an integer representing the value of x * sum.

 

Example 1:

Input: n = 10203004

Output: 12340

Explanation:

The non-zero digits are 1, 2, 3, and 4. Thus, x = 1234.
The sum of digits is sum = 1 + 2 + 3 + 4 = 10.
Therefore, the answer is x * sum = 1234 * 10 = 12340.*/


class Solution {
public:
    long long sumAndMultiply(int n) {
        long long place=1;
        long long x=0;
        long long ans=0;
        long long sum=0;
        while(n>0){
            int digit =n%10;
            if(digit!=0){
                x=digit*place+x;
                sum=sum+digit;
                place*=10;
            }
            n/=10;
        }
        return sum*x;
        
    }
};
