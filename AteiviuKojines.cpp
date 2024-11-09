#include <iostream>
#include <locale>
#include <fstream>

using namespace std;
int main()
{
    ifstream in("U1.txt");
    ofstream out("U1rez.txt");
    int a, b, sum = 0, c = 0;
    bool flag = false;
    in >> a >> b;
    int koj[b];
    for (int i = 0; i < b; i++)
    {
        in >> koj[i];
        if (koj[i] < a)
        {
            sum += koj[i];
            c++;
        }
    }
    sum += (a-1)*(b-c);
    sum++;
    for (int i = 0; i < b; i++)
    {
        if (koj[i] >= a)
        {
            flag = true;
        }
    }
    if (flag)
    {
        out << sum;
    }
    else
    {
        out << -1;
    }
    return 0;
}
