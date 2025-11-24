#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sumArray(int*arr,int n){
        int sum=0;
        for (int i=0;i<n;i++){
            sum +=*(arr+i);
        }
        return sum;
    }
    int countPositive(const int *arr,int n){
        int cn=0;
        for(int i;i<n;i++){
            if(*(arr+i)>0)cnt++;
        }
        return cnt;
    }
    int countNegative(const int *arr,int n){
        int cnt=0;
        for(int i=0;i<n;i++){
            if(*(arr+i)<0)cnt++;
        }
        return cnt;
    }
    sum=sumArray(arr n);
    printf("\nSum of all elements=%d",sum);
    posCount=countPositive(arr n);
    negCount=countNegative(arr n);
    return 0;
}
