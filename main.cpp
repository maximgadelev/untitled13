#include <iostream>
using namespace std;
int binarySearch(int array[],int left,int right,int x){
    if(right>=1){
        int middle=left+(right-1)/2;
        if(array[middle]==x)
            return middle;
        if(array[middle]>x)
            return binarySearch(array,left,middle-1,x);
        return binarySearch(array,middle+1,right,x);
    }
    return -1;
}
int main() {
    int arr[]={2,3,4,10,40};
    int x =10;
    int n= sizeof(arr)/ sizeof(arr[0]);
    int result= binarySearch(arr,0,n-1,x);
    cout<<result;
    return 0;
}
