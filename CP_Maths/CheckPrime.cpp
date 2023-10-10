bool isPrime(int n)
{
	// Write your code here.
    bool ans=true;
    if(n<=1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            ans=false;
            break;
        }
    }
    return ans;
}
