#include <iostream>

using namespace std;

int main() {
    int k;
    int arr[26] = {0};
    string str;
    cin >> k >> str;
    for (int i = 0; i < str.size(); i++) arr[str[i] - 'a']++;
    bool tOrF = false;
    for (int i = 0; i < 26; i++) {
        if (arr[i] != 0 && arr[i] % k != 0) {
            tOrF = true;
        }
    }
    if (tOrF) {
        cout << "-1" << endl;
    }else{
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < 26; j++) {
                if (arr[j] != 0) {
                    int length = arr[j]/k;
                    while (length--) {
                        cout << (char)(j+'a');
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}