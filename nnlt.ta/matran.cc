#include <bits/stdc++.h>

using namespace std;
int n;
int a[256][256], b[256][256], c[256][256];

void matrix(int a[][256], int n){
    for(int i =0; i<n;i++){
        for(int j =0; j<n;j++){
            cin>>a[i][j];
        }
    }
}

void tich(int a[][256], int b[][256], int c[][256], int n){
    for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			for(int l = 0; l < n; l++) {
				c[i][j] += a[i][l] * b[l][j];
			}
		}
	}
}
void xuat(int a[][256], int n) { 
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}


int main() {

    cin>>n;
    matrix(a,n);
    matrix(b,n);
    tich(a,b,c,n);
    xuat(c,n);

    return 0;
}