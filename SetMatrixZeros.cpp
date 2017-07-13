//https://www.interviewbit.com/problems/set-matrix-zeros/

void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    //Reuse the matrix space to save information about zero in rows and cols
    //Use two temporary variables that store information about the first row and column
    //First row and column can be used to store information about the other rows and columns
    
    int row = A.size();
    if (row==0){return;}
        
    int col = A[0].size();
    if (col==0){return;}
         
    bool fc0=false; //first column zero
    bool fr0=false; //first row zero
         
    for (int i=0;i<col;i++){
        if (A[0][i]==0){fr0 = true;}
    }
         
    for (int i=0;i<row;i++){
        if (A[i][0]==0){fc0 = true;}
    }
      
    //Reuse the array space for storing the zero positions
    for (int i=1;i<row;i++){
        for (int j=1;j<col;j++){
            if (A[i][j]==0){
                A[i][0]=0;
                A[0][j]=0;
            }
        }
    }
         
    //Set columns zero
    for (int i=1;i<col;i++){
            if (A[0][i]==0){
                for(int j=0;j<row;j++){
                    A[j][i]=0;
                }
            }
    }
    
    //Set rows zero
    for (int i=1;i<row;i++){
            if (A[i][0]==0){
                for(int j=0;j<col;j++){
                    A[i][j]=0;
                }
            }
     }
         
        if (fr0){
            for (int i=0;i<col;i++){A[0][i]=0;}
        }
        if (fc0){
            for (int i=0;i<row;i++){A[i][0]=0;}
        }
         
        return;
         
        

}
