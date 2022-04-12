#include <bits/stdc++.h>

using namespace std;

void nhapMang(int arr[], int n){
    for(int i =1; i <= n;i++) {
        cout<<"Phan tu thu "<<i<<" cua mang la: ";cin>>arr[i];
    }
}

void sapXepMang(int arr[], int n){
    int temp;
    for(int i =0; i <n; i++){
        for(int j = i+1; j< n;j++){
            if(arr[i] > arr[j] ){
                
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int jumpSearch(int arr[], int n, int x){
    int step = sqrt(n);  
    int prev = 0; 
    while (arr[min(step, n)-1] < x) 
    { 
        prev = step; 
        step += sqrt(n); 
        if (prev >= n) 
            return -1; 
    } 
    while (arr[prev] < x) 
    { 
        prev++;  
        if (prev == min(step, n)) 
            return -1; 
    } 
    if (arr[prev] == x) 
        return prev; 
  
    return -1; 
} 


int main() {

    int n, x;

    cout<<"Nhap vao so can tim: ";cin>>x;
    cout<<"Nhap vao so phan tu cua mang la: ";cin>>n;
    int arr[n];

    nhapMang(arr,n);

    int index = jumpSearch(arr,n,x);

    if( index == -1 ) cout<<"x khong co trong mang";
    else cout<<"x co o trong mang";

    return 0;
}