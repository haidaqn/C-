#include <bits/stdc++.h>

using namespace std;

int main() {

    int sohs;cin>>sohs;
    vector<int> t1,t2,t3;

    int i = 1;

    while (sohs--)
    {
        int a;cin>>a;
        if(a == 1) t1.push_back(i);
        else if(a == 2) t2.push_back(i);
        else if (a == 3) t3.push_back(i);
        i++;
    }

    int soDoiTuyen = min(t1.size(), min(t2.size(), t3.size() ));
    if(soDoiTuyen == 0 ) cout<<0;
    else{
        cout<<soDoiTuyen<<endl;
        for(int i = 0; i< soDoiTuyen; i++){
            cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<endl;
        }
    }
    

    return 0;
}