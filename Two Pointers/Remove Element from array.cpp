int Solution::removeElement(vector<int> &A, int B) {
    int n=A.size();
    
    int j=0,i=0;
    
    while(i<n){
        if(A[i]!=B){
            A[j]=A[i];
            j++;
        }
        i++;
    }
    return j;
}
