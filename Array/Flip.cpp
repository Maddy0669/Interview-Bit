vector<int> Solution::flip(string A) {
    int sum=0,cur=0;
    int i=0,j=0,I=0,J=0;
    vector<int> ans;
    int n=A.size();
    
    for(int i=0;i<n;i++){
        cur+=(A[i]=='1')?-1:1;
        
        if(cur>sum){
            sum=cur;
            J=j;
            I=i;
        }
        if(cur<0){
            cur=0;
            j=i+1;
        }
    }
    if(sum){
        ans.push_back(J+1);
        ans.push_back(I+1);
    }
    return ans;
}
