#include<stdio.h>
#include<stdlib.h>

int bin_rec(int arr[],int min, int max,int num){

        if(min>max)
                return -1;
        int mid=min+(max-min)/2;
        if(arr[mid]==num)
                return mid;
        if(arr[mid]>num)
                return bin_rec(arr,min,mid-1,num);
        return bin_rec(arr,mid+1,max,num);
}

int main(int argc,char *argv[]){
        int i,arr[argc-1],j=1;
        for(i=0;i<argc-1;i++){
                arr[i]=atoi(argv[j]);
                j++;
        }

        int num=8,min=0,max=argc-1;
        int res=bin_rec(arr,min,max,num);
	printf("%d",res);
}

