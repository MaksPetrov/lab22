#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str;
    ifstream fin;
    fin.open("#1.txt");
    getline(fin, str);
    while(str[0]!=' ')
    {
        str.erase(0, 1);
    }
    str.erase(0, 1);
    fin.close();
    ofstream fout;
    fout.open("#1.txt");
    fout << str;
    fout.close();
}
