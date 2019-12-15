#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str;
    ifstream f;
    f.open("#4.txt");
    ofstream f2;
    f2.open("tmp.txt");
    while(getline(f, str))
    {
        for(unsigned i = 0; i<str.length(); i += 1)
        {
            while(str[i]==' ' && str[i+1]==' ')
            {
                str.erase(i, 1);
            }
            f2 << str[i];
        }
        f2 << endl;
    }
    f.close();
    f2.close();
    ofstream ff;
    ff.open("#4.txt");
    ifstream ff2;
    ff2.open("tmp.txt");
    while(getline(ff2, str))
    {
        ff << str << endl;
    }
    ff.close();
    ff2.close();
    remove("tmp.txt");
}
