#include <iostream>
#include <fstream>

using namespace std;

const int ROW = 15,
          COL = 30,
          TOTAL_SEAT = ROW * COL;
const string LOCATION = "./FileData/",
             SEATING_CHART = "SeatingChart.txt",
             FARE = "Fare.txt";

void displayMenu();                                // TODO: Hien thi menu
void doMenu(char seatingChart[][COL], int fare[]); // TODO: Thuc hien tac vu menu
void readFile(string fileName, char arr[][COL]);   // TODO: Doc file vao mang char
void readFile(string fileName, int arr[]);         // TODO: Doc file vao mang int
void outputArray(char arr[][COL]);                 // TODO: Xuat mang char ra
void outputArray(int arr[]);                       // TODO: Xuat mang int ra
int input(int num, int floor);                     // TODO: Nhap so nguyen
int input(int num, int floor, int bare);           // TODO: Nhap so nguyen
char input(char letter);                           // TODO: Nhap ky tu
bool seatCheck(char[][COL], int row, int col);     // TODO:  Kiem tra vi tri da dat cho
int totalSeatsBooked(char[][COL]);                 // TODO: Tinh tong so ghe da dat
int seatsBookedRow(char[][COL], int row);          // TODO: Tinh tong so ghe da dat theo hang

int main()
{
    char seatingChart[ROW][COL];
    int fare[ROW];
    int choice;
    readFile(SEATING_CHART, seatingChart);

    do
    {
        cout << "Lua chon nhap gia tien: " << endl;
        cout << "1. Nhap tu file\n"
             << "2. Nhap tu ban phim" << endl;
        cout << ">>>";
        cin >> choice;
    } while (choice != 1 && choice != 2);
    if (choice == 1)
    {
        readFile(FARE, fare);
    }
    else
    {
        for (int i = 0; i < ROW; i++)
        {
            cout << "Nhap gia tien cho hang " << i + 1 << ": ";
            fare[i] = input(fare[i], 0);
        }
    }

    cout << "Gia ve theo tung hang" << endl;
    outputArray(fare);

    doMenu(seatingChart, fare);

    return 0;
}

int input(int num, int floor)
{
    int input;
    cin >> input;
    while (input < floor)
    {
        cout << "Nhap lai: ";
        cin >> input;
    }
    return input;
}

int input(int num, int floor, int bare)
{
    int input;
    cin >> input;
    while (input < floor || input > bare)
    {
        cout << "Nhap lai: ";
        cin >> input;
    }
    return input;
}

char input(char letter)
{
    cin >> letter;
    while (!(letter == 'Y' || letter == 'y' || letter == 'N' || letter == 'n'))
    {
        cout << "Chi nhap Y hoac N: ";
        cin >> letter;
    }

    return letter;
}

void displayMenu()
{
    cout << "===== Menu =====" << endl;
    cout << "1. Dem so ghe da ban\n"
         << "2. Dem so ghe con trong tren 1 hang\n"
         << "3. Dem so ghe con trong trong toan bo khan phong\n"
         << "4. Hien thi so do cho ngoi\n"
         << "5. Dat cho\n"
         << "0. Thoat\n";
    cout << "=================" << endl;
}

void doMenu(char seatingChart[][COL], int fare[])
{
    bool flag = true;
    int value;
    do
    {
        displayMenu();
        do
        {
            cout << "Nhap lua chon: ";
            cin >> value;
            if (value < 0 || value > 5)
                cout << "\tNhap khong hop le. Nhap lai." << endl;
        } while (value < 0 || value > 5);
        cout << "++++++++++++++++++" << endl;
        switch (value)
        {
        case 0:
            cout << "\t Da thoat chuong trinh" << endl;
            flag = false;
            break;
        case 1: // TODO: Dem so ghe da dat
            cout << "So ghe da dat: " << totalSeatsBooked(seatingChart) << endl;
            break;
        case 2: // TODO: Dem so ghe con trong tren 1 hang
            cout << "So ghe con trong tren tung hang: " << endl;
            for (int i = 0; i < ROW; i++)
            {
                cout << "Row " << i + 1 << ": " << seatsBookedRow(seatingChart, i) << "\t\t";
                if ((i + 1) % 5 == 0)
                    cout << endl;
            }
            break;
        case 3: // TODO: Dem so ghe con trong trong toan bo khan phong
            cout << "So ghe con trong trong toan bo khan phong: " << TOTAL_SEAT - totalSeatsBooked(seatingChart) << endl;
            break;
        case 4: // TODO: Hien thi so do cho ngoi
            cout << "So do cho ngoi hien tai: " << endl;
            outputArray(seatingChart);
            break;
        case 5: // TODO: Dat cho
            bool flagOrderTicket;
            flagOrderTicket = true;
            int rowOrder, colOrder, total;
            total = 0;
            char letterChoice;
            do
            {
                cout << "Nhap hang: ";
                rowOrder = input(rowOrder, 0, ROW);
                cout << "Nhap cot: ";
                colOrder = input(colOrder, 0, COL);
                if (seatCheck(seatingChart, rowOrder - 1, colOrder - 1))
                {
                    cout << "Ghe da dat. Nhap lai." << endl;
                }
                else
                {
                    seatingChart[rowOrder - 1][colOrder - 1] = '*';
                    total += fare[rowOrder - 1];
                    cout << "Ban co muon dat them khong? (y/n): ";
                    letterChoice = input(letterChoice);
                    if (letterChoice == 'n' || letterChoice == 'N')
                        flagOrderTicket = false;
                }
            } while (flagOrderTicket);
            cout << "Tong so tien ve: " << total << endl;
            outputArray(seatingChart);
            break;
        default:
            break;
        }
        cout << "++++++++++++++++++" << endl;
    } while (flag);
}

bool seatCheck(char seatingChart[][COL], int row, int col)
{
    if (seatingChart[row][col] == '*')
        return true;
    return false;
}

int totalSeatsBooked(char arr[][COL])
{
    int total = 0;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (arr[i][j] == '*')
            {
                total++;
            }
        }
    }
    return total;
}

int seatsBookedRow(char arr[][COL], int row)
{
    int total = 0;
    for (int j = 0; j < COL; j++)
    {
        if (arr[row][j] == '*')
        {
            total++;
        }
    }
    return total;
}

void readFile(string fileName, char array[][COL])
{
    ifstream file(LOCATION + fileName);
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            file >> array[i][j];
        }
    }
    file.close();
}

void readFile(string fileName, int array[])
{
    ifstream file(LOCATION + fileName);
    for (int i = 0; i < ROW; i++)
    {
        file >> array[i];
    }
    file.close();
}

void outputArray(char array[][COL])
{
    cout << "\t ";
    for (int i = 1; i <= COL; i++)
    {
        if (i > 9)
            cout << i % 10 << " ";
        else
            cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < ROW; i++)
    {
        cout << "Row" << i + 1 << "\t ";
        for (int j = 0; j < COL; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void outputArray(int array[])
{
    for (int i = 0; i < ROW; i++)
    {
        cout << "Row " << i + 1 << ": " << array[i] << "\t\t";
        if ((i + 1) % 3 == 0)
            cout << endl;
    }
    cout << endl;
}