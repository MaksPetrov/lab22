#include <iostream>
#include <fstream>
#include <cstdio>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char filename[21];
    cin >> filename;
    FILE* f = fopen(filename, "w");
    ofstream fout;
    fout.open(filename);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i<n; i += 1)
    {
        for(int j = 0; j<k; j += 1)
        {
            fout << "*";
        }
        fout << endl;
    }
    fout.close();
}
