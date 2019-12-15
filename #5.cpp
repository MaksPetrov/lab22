#include <iostream>
#include <fstream>;

using namespace std;

int main()
{
    string str;
    int count = 0;
    ifstream f;
    f.open("#5.txt");
    while(getline(f, str))
    {
        if(str[0]==' ' && str[1]==' ' && str[2]==' ' && str[3]==' ' && str[4]==' ' && str[5]!=' ')
        {
            count += 1;
        }
    }
    f.close();
    cout << count;
}
