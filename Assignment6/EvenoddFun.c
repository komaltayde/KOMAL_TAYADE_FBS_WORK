void evenodd();

void main(){
	
	evenodd();
}

void evenodd(){
	int n;
	printf("Enter the num");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("Even");
	}else{
		printf("odd");
	}
	
	return 0;
}