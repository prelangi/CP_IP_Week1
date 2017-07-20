int Solution::romanToInt(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int res=0;
    char pre = ' ';
    for(int i=0;i<A.size();i++){
            if (A[i]=='M' && pre!='C') {res+=1000;}
            if (A[i]=='C' && pre!='X') {res+=100;}
            if (A[i]=='X' && pre!='I') {res+=10;}
             
            if (A[i]=='M' && pre=='C') {res+=800;}
            if (A[i]=='C' && pre=='X') {res+=80;}
            if (A[i]=='X' && pre=='I') {res+=8;}
             
            if (A[i]=='I' ) {res+=1;}
             
            if (A[i]=='V' && pre!='I'){res+=5;}
            if (A[i]=='L' && pre!='X'){res+=50;}
            if (A[i]=='D' && pre!='C'){res+=500;}
             
            if (A[i]=='V' && pre=='I'){res+=3;}
            if (A[i]=='L' && pre=='X'){res+=30;}
            if (A[i]=='D' && pre=='C'){res+=300;}
             
            pre = A[i];
             
        }
         
        return res;
}
