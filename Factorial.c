#include<stdio.h>
#include<time.h>

void main (){
    clock_t start, end;
    double cpu_time_used;

    int n,ans=1;

    printf("Enter Number:");
    scanf("%d",&n);
    start = clock();

    for(int i=1;n>=i;i++){
         ans=ans*i; 
    }
    end = clock();
    printf("Factorial = %d",ans);
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time Taken by Processor :%f ",cpu_time_used);
}