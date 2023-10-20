int partitionArray(int input[], int start, int end) {
	// Write your code here
	int pivot=input[start];
	int i=start;
	int j=end;
	while(i<j){
		while(input[i]<=pivot && i<end){
			i++;
		}
		while(input[j]>pivot && j>start){
			j--;
		}
		if(i<j){
			swap(input[i],input[j]);
		}
	}
	swap(input[j],input[start]);
	return j;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start<end){
		int pIndex = partitionArray(input,start,end);
		quickSort(input,start,pIndex-1);
		quickSort(input,pIndex+1,end);
	}
}
