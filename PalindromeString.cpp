//https://www.interviewbit.com/problems/palindrome-string/

#include<cctype>

int Solution::isPalindrome(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A.empty())
        return true;
        
    int st = 0; 
    int end = A.size()-1;
        
    while(st<end) {
            
        //cctype library has isalnum function that checks if the char is alphanumeric
        //loop through the string till you find the first alphanumeric character
        if(isalnum(A[st])==false) { 
                st++; 
                continue;
        }
            
        if(isalnum(A[end])==false) {
                end--;
                continue;
        }
            
        if(tolower(A[st]) != tolower(A[end])) {
                return false;
        }
        else {
                st++;
                end--;
        }
            
    }
        
    return true;
}
