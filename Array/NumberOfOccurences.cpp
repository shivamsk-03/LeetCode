int firstOcuur(vector<int>& arr, int n, int x){
	int s=0;
	int e=n-1;
	int mid = s+(e-s)/2;
	int z=0;
	while(s<=e){
		if(arr[mid]==x){
			z=mid;
			e=mid-1;
		}
		else if(arr[mid]<x) s=mid+1;
		else e=mid-1;
		mid = s+(e-s)/2;
	}
	return z;
}
int lastOcuur(vector<int>& arr, int n, int x){
	int s=0;
	int e=n-1;
	int mid = s+(e-s)/2;
	int z=0;
	while(s<=e){
		if(arr[mid]==x){
			z=mid;
			s=mid+1;
		}
		else if(arr[mid]<x) s=mid+1;
		else e=mid-1;
		mid = s+(e-s)/2;
	}
	return z;
}
int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int p = firstOcuur(arr,n,x);
	int q = lastOcuur(arr,n,x);
	if(q==0&&p==0) return q-p;
	return q-p+1;
}
