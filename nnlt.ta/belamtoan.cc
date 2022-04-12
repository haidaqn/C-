#include <iostream>

using namespace std;

int main() {
  string s1, phep_Tinh, s2;
  string result = "";
  cin >> s1 >> phep_Tinh >> s2;
  //Phep cong
  if (phep_Tinh == "+") {
    int arr[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int nho = 0;
    if (s1.size() < s2.size()) {
      for (int i = s2.size() - s1.size() - 1; i >= 0; i--) {
        s1 = "0" + s1;
      }
    }else if (s1.size() > s2.size()) {
      for (int i = s1.size() - s2.size() - 1; i >= 0; i--) {
        s2 = "0" + s2;
      }
    }
    if (s1.size() == s2.size()){
      for (int i = s1.size() - 1; i >= 0; i--) {
        /*cout << "Nho = " << nho << endl;
        cout << "s1 + s2 + nho = " << (s1[i] - 48) + (s2[i] - 48) + nho << endl;
        cout << "Gia tri = " << char(arr[(s1[i] - 48) + (s2[i] - 48) + nho] + 48) << endl;*/
        if ((s1[i] - 48) + (s2[i] - 48) + nho <= 9) {
          result += arr[(s1[i] - 48) + (s2[i] - 48) + nho] + 48;
          nho = 0;
        }else{
          result += arr[(s1[i] - 48) + (s2[i] - 48) + nho] + 48;
          nho = 1;
        }
      }
      if (nho == 1) {
        result += 49;
      }
      for (int i = result.size()-1; i >= 0; i--) {
        cout << result[i] - 48;
      }
      cout << endl;
    }
  }
  //Phep tru
  if (phep_Tinh == "-") {
    if (s1.size() > s2.size()) {
      for (int i = s1.size() - s2.size() - 1; i >= 0; i--) {
        s2 = "0" + s2;
      }
    }

    if (s1.size() < s2.size()) {
      for (int i = s2.size() - s1.size() - 1; i >= 0; i--) {
        s1 = "0" + s1;
      }
    }
    
    if (s1.size() == s2.size()) {
      int dem = 0;
      bool t_Or_F = true;
      for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == s2[i]) {
          dem ++;
        }else if (s1[i] > s2[i]) {
          t_Or_F = true;
          break;
        }else if (s1[i] < s2[i]) {
          t_Or_F = false;
          break;
        }
      }
      //Tinh toan cho phep tru
      if (dem == s1.size()) {
        result = 48;
      }else{
        int nho = 0;
        if (t_Or_F) {
          for (int i = s1.size() - 1; i >= 0; i--) {
            int tru = (s1[i] - 48) - (s2[i] - 48);
            switch (tru - nho) {
              case -10:
                result = "0" + result;
                nho = 1;
                break;
              case -9:
                result = "1" + result;
                nho = 1;
                break;
              case -8:
                result = "2" + result;
                nho = 1;
                break;
              case -7:
                result = "3" + result;
                nho = 1;
                break;
              case -6:
                result = "4" + result;
                nho = 1;
                break;
              case -5:
                result = "5" + result;
                nho = 1;
                break;
              case -4:
                result = "6" + result;
                nho = 1;
                break;
              case -3:
                result = "7" + result;
                nho = 1;
                break;
              case -2:
                result = "8" + result;
                nho = 1;
                break;
              case -1:
                result = "9" + result;
                nho = 1;
                break;
              case 0:
                result = "0" + result;
                nho = 0;
                break;
              case 1:
                result = "1" + result;
                nho = 0;
                break;
              case 2:
                result = "2" + result;
                nho = 0;
                break;
              case 3:
                result = "3" + result;
                nho = 0;
                break;
              case 4:
                result = "4" + result;
                nho = 0;
                break;
              case 5:
                result = "5" + result;
                nho = 0;
                break;
              case 6:
                result = "6" + result;
                nho = 0;
                break;
              case 7:
                result = "7" + result;
                nho = 0;
                break;
              case 8:
                result = "8" + result;
                nho = 0;
                break;
              case 9:
                result = "9" + result;
                nho = 0;
                break;
            }
          }
        }else{
          for (int i = s2.size() - 1; i >= 0; i--) {
            int tru = (s2[i] - 48) - (s1[i] - 48);
            switch (tru - nho) {
              case -10:
                result = "0" + result;
                nho = 1;
                break;
              case -9:
                result = "1" + result;
                nho = 1;
                break;
              case -8:
                result = "2" + result;
                nho = 1;
                break;
              case -7:
                result = "3" + result;
                nho = 1;
                break;
              case -6:
                result = "4" + result;
                nho = 1;
                break;
              case -5:
                result = "5" + result;
                nho = 1;
                break;
              case -4:
                result = "6" + result;
                nho = 1;
                break;
              case -3:
                result = "7" + result;
                nho = 1;
                break;
              case -2:
                result = "8" + result;
                nho = 1;
                break;
              case -1:
                result = "9" + result;
                nho = 1;
                break;
              case 0:
                result = "0" + result;
                nho = 0;
                break;
              case 1:
                result = "1" + result;
                nho = 0;
                break;
              case 2:
                result = "2" + result;
                nho = 0;
                break;
              case 3:
                result = "3" + result;
                nho = 0;
                break;
              case 4:
                result = "4" + result;
                nho = 0;
                break;
              case 5:
                result = "5" + result;
                nho = 0;
                break;
              case 6:
                result = "6" + result;
                nho = 0;
                break;
              case 7:
                result = "7" + result;
                nho = 0;
                break;
              case 8:
                result = "8" + result;
                nho = 0;
                break;
              case 9:
                result = "9" + result;
                nho = 0;
                break;
            }
          }
          result = "-" + result;
        }
      }
    }
    cout << result << endl;
  }
  system("pause");
  return 0;
}
