int sumOfAllDivisors(int n){
	// Write your code here.
	int ans=0;
    int i=1;
    while(i<=n){
        ans = ans + i*(n/i);
        i++;
    }   
    return ans;	
}