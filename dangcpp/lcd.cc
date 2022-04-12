#include<iostream>
#include<iomanip>
using namespace std;

void SapXep(int n, string MaSV[], double Diem[], string XepLoai[])
{
    for(int i= 0; i< n-1; i++)
    {
        double min = Diem[i];
        int ViTri= i;
        for(int j=i+1; j<n; j++)
        {
            if(Diem[j]<min)
            {
                min = Diem[j];
                ViTri = j;
            }
        }

        if(ViTri != i)
        {
            double temp1 = Diem[i];
            Diem[i] = Diem[ViTri];
            Diem[ViTri] = temp1;

            string temp2 = XepLoai[i];
            XepLoai[i] = XepLoai[ViTri];
            XepLoai[ViTri] = temp2;

            string temp3 = MaSV[i];
            MaSV[i] = MaSV[ViTri];
            MaSV[ViTri] = temp3;

        }


    }
}

int main()
{
    string MaSV[5] = {"A01", "A02", "A03", "A04", "A05"};
    double Diem[5];
    string XepLoai[5];

    for(int i = 0; i<5; i++)
    {
        cout<<"Nhap diem cho hoc sinh "<<MaSV[i]<<" :";
        cin>>Diem[i];

        if(Diem[i] >= 8)
        {
            XepLoai[i] ="A";
        }

        else if(Diem[i] >= 6)
        {
            XepLoai[i] ="B";
        }

        else
            XepLoai[i] = "C";
    }


    SapXep(5, MaSV, Diem, XepLoai);
    cout<<"STT "<<setw(4)<<"MaSV "<<setw(4)<<"DTB  "<<setw(7)<<"Xep Loai"<<endl;
    for(int i =0; i<5; i++)
    cout<<i<<setw(6)<<MaSV[i]<<setw(4)<<Diem[i]<<setw(7)<<XepLoai[i]<<endl;
    
    system("pause");
    return 0;
}