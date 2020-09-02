bool isPrime(int a){
    if(a<=1) 
        return false;
    if(a==2) 
        return true;
    
    for(int i=2; i<=sqrt(a); ++i){
        if( a%i==0) 
            return false;
    }
    return true;
}

vector<int> Solution::primesum(int a) {
    for(int temp = 2; temp<=a/2; temp++){
        if(isPrime(temp)&&isPrime(a-temp)){
            if(temp > a-temp) 
                return {a-temp,temp};
            else 
                return {temp,a-temp};
        }
    }
}