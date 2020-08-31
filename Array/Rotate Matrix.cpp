void Solution::rotate(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    int temp;
    
    for(int i=0;i<m;i++){
        int j=0,k=n-1;
        while(j<=k){
            swap(A[j][i],A[k][i]);
            j++;
            k--;
        }
    }
    
    for(int x=0;x<n;x++)
        for(int y=x+1;y<m;y++)
            swap(A[x][y],A[y][x]);
}
