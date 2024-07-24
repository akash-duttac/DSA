#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key){
    int low=0, high=n-1;
    while (low<=high){
        int mid = (low+high)/2;
        if (arr[mid]==key)
            return mid;
        else if (arr[mid]>key)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    
    cout<<binary_search(arr,n,5);
return 0;
}