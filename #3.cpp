#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str;
    ofstream f;
    f.open("#3.txt");
    ifstream fin2;
    fin2.open("#3_2.txt");
    while(getline(fin2, str))
    {
        f << str << endl;
    }
    fin2.close();
    ifstream fin1;
    fin1.open("#3_1.txt");
    while(getline(fin1, str))
    {
        f << str << endl;
    }
    fin1.close();
}
