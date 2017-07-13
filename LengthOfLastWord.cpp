//https://www.interviewbit.com/problems/length-of-last-word/

int Solution::lengthOfLastWord(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int lastWordLength = 0;
    int strLength = A.length(); 
    
    if(strLength==0) return 0; 
    for(int i= strLength-1; i>=0; i--) {
        if(A[i] == ' ') {
            if(lastWordLength) //for corner cases like "B "
                return lastWordLength;
        }
        else {
            lastWordLength++;
        }
    }
    
    return lastWordLength;
}
