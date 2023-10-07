int countDigits(int n){
	int count = 0;
    int z = n;
    
    while (n != 0) {
        int digit = n % 10;
        n = n / 10;
        
        if (digit != 0 && z % digit == 0) {
            count++;
        }
    }
    return count;	
}