unsigned int Solution::reverse(unsigned int A) {
    
    unsigned int ans=0;
    int p=31;
    while(p>=0){
        int temp=(A&1);
        ans+=temp*pow(2,p);
        A=A>>1;
        p--;
    }
    return ans;
}
