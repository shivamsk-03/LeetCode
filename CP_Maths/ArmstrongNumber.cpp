int count(int n){
	int k=0;
	while(n!=0){
	int digit = n%10;
	k++;	
	n=n/10;
	}
	return k;
}
bool checkArmstrong(int n){
	//Write your code here
	int cmp = n;
	int arm=0;
	int digits = count(n);
	while(n!=0){
		int digit = n%10;
		arm += pow(digit,digits);
		n=n/10;
	}
	return cmp == arm;
}
