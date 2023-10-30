#include <bits/stdc++.h>
using namespace std;

bool escapePark(int n, int m, char mat[100][100], int k, int s, int *x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == '.')
            {
                s -= 2;
                if (j != m - 1)
                    s--;
            }
            else if (mat[i][j] == '*')
            {
                s += 5;
                if (j != m - 1)
                    s--;
            }
            else if (mat[i][j] == '#')
            {
                break;
            }
            
            if (s < k)
            {
                return false;
            }
        }
    }
    *x = s;
    return true;
}

int main()
{
    int n, m, k, s, ans;
    int *ptr = &ans;
    cin >> n >> m >> k >> s;
    char mat[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    (escapePark(n, m, mat, k, s, ptr)) ? cout << "Yes" << endl<<(*ptr) : cout << "No" << endl;

    return 0;
}

/*
//Method - 2
#include <bits/stdc++.h>
using namespace std;

void escapePark(int n, int m, char mat[100][100], int k, int s)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == '.')
            {
                s -= 2;
                if(j!=m-1)  s--;
            }
            else if (mat[i][j] == '*')
            {
                s += 5;
                if(j!=m-1)  s--;
            }
            else if (mat[i][j] == '#')
            {
                break;
            }
            if(s<k){
                cout<<"No"<<endl;return;
            }
        }
    }
    cout<<"Yes\n"<<s<<endl;
}

int main()
{
    int n, m, k, s, ans;
    int *ptr = &ans;
    cin >> n >> m >> k >> s;
    char mat[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    escapePark(n, m, mat, k, s);
    return 0;
}
*/
