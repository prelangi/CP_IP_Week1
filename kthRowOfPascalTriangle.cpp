vector<int> Solution::getRow(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
        int numElements = A + 1;
        double frac = 0.5;
        vector<int> kthRowOfPascalTriangle(numElements,0);
        
        kthRowOfPascalTriangle[0] = 1;
        for(int j=1; j<(numElements)/2; j++) {
            frac = double(numElements - j)/double(j);
            kthRowOfPascalTriangle[j] = (int)(frac*kthRowOfPascalTriangle[j-1]+0.5);
        }
        
        if(numElements>1) {
            for(int j=numElements/2; j< numElements; j++) {
                if(numElements%2) {
                    frac = double(numElements - j)/double(j);
                    kthRowOfPascalTriangle[j] = (int)(frac*kthRowOfPascalTriangle[j-1]+0.5);
                }
                else {
                    kthRowOfPascalTriangle[j] = kthRowOfPascalTriangle[numElements-j-1];
                }
            
            }
        }
        return kthRowOfPascalTriangle;
}
