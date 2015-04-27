int findFac(int num){
	int factorial;
	if(num == 0){
		return 1;
	}
	else{
		factorial = num*findFac(num-1);
		return factorial;
	}
}
