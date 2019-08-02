//rotation using temp array
#include<stdio.h>
#include<stdlib.h>

int main(int argc, const char *argv[]){
	int i=0,j=1,arr[argc-1];
	for(i=0;i<argc-1;i++){
		arr[i]=atoi(argv[j]);
		j++;
	}
	int n=5;//rotation by
	int temp[n],c=0;
	for(i=n-1;i>=0;i--){
		temp[i]=arr[argc-2-c];
		c++;
	}

	for(i=argc-2;i>=0;i--){
		arr[i]=arr[i-n];
	}

	for(i=0;i<n;i++)
		arr[i]=temp[i];

	for(i=0;i<argc-1;i++){
		printf("%d",arr[i]);
	}
return 0;
}
