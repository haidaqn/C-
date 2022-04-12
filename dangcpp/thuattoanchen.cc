#include <iostream>

using namespace std;

void nhap(int arr[], int n){
    for(int i = 0; i<n; i++) {
        cout<<"nhap vao phan tu thu "<<i<<" la ";
        cin>>arr[i];
    }
}

void chen(int arr[], int &n, int vitri, int canchen){

    for(int i = n; i >= vitri; i--){
        arr[i] = arr[i-1];
    }
    arr[vitri] = canchen;
    n++;

}

void xuatmang(int arr[], int n){
    for(int i =0; i <n; i++) cout<<arr[i]<< " ";
}


int main() {
    int vitri;
    int canchen;
    int n;
    cin>>n;
    int arr[n];
    nhap(arr,n);
    xuatmang(arr,n);    
    cout<<endl;
    cout<<"nhap vi tri can chen ", cin>>vitri;
    cout<<"nhap so can chen ", cin>>canchen;
    chen(arr,n,vitri,canchen);
    cout<<endl;
    xuatmang(arr,n);
    return 0;
}