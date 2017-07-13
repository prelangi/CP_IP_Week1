//https://www.interviewbit.com/problems/spiral-order-matrix-ii/

vector<vector<int> > Solution::generateMatrix(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int i = 1; 
    int n = A;
    vector<vector<int> >res(n, vector<int>(n,0));
    
    int r1,r2,c1,c2,r,c;
    r1=0; c1=0;
    r2=n-1; c2 = n-1;
    
    while(i<=n*n) {
        
        //Right
        c = c1;
        while(i<=n*n && c<=c2) {
            res[r1][c] = i++; c++;
        }
        
        //Down
        r=r1+1;
        while(i<=n*n && r<=r2) {
            res[r][c2] = i++; r++;
        }
        
        //Left
        c = c2-1;
        while(i<=n*n && c>=c1) {
            res[r2][c] = i++; c--;
        }
        
        //Up
        r=r2-1;
        while(i<=n*n && r>r1) {
            res[r][c1] = i++; r--;
        }
        
        r1 = r1+1;
        r2 = r2-1;
        c1 = c1+1;
        c2 = c2-1;
        
    }
    
    return res;
}
