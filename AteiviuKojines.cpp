#include <iostream>
#include <locale>

using namespace std;
int main()
{
    int a, b, sum = 0, c = 0;
    bool flag = false;
    cin >> a >> b;
    int koj[b];
    for (int i = 0; i < b; i++)
    {
        cin >> koj[i];
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
        cout << sum;
    }
    else
    {
        cout << -1;
    }
    return 0;
}
