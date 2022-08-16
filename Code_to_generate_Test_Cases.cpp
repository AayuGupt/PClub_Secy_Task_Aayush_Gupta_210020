#include<bits/stdc++.h>
#include <vector>
#include <math.h>
#include<time.h>
using std::ofstream;
using namespace std;
#define vi vector<int>
#define pb push_back
#define p push
#define sll stack<long long>
#define qll queue<long long>
#define vll vector<long long>
#define st string
#define vvll vector<vll>
#define vstr vector <string>
#define fori(n) for(ll i=0;i<n;i++)
#define forj(n) for(int j=0;j<n;j++)
#define fork(n) for(int k=0;k<n;k++)
#define fori1(n) for(int i=1;i<n;i++)
#define f(i,a,b) for(int i=a;i<=b;i++)s
#define s(v) sort(v.begin(),v.end())
#define ll long long
#define mp   make_pair 


int main(){
    

    ofstream outdata;
    srand(time(NULL));

    outdata.open("chess.dat");
    // We can set the number of inputs we need
    for(int tt=0;tt<1000;tt++){
        int n, m;

        n = (rand()%(100 - 9)) + 8;
        m = (rand()%(100 - 9)) + 8;

        char arr[n][m];
        outdata<<n<<" "<<m<<endl;
        for(int i = 0; i< n ; ++i)
        {
            for(int j = 0 ; j<m ; ++j)
            {
                arr[i][j] = '.';
            }
        }


        int toldel, x1, y1;


        toldel = (rand()%(n*m - 4));

        for(int i = 0 ; i<toldel ; ++i)
        {
            x1 = (rand()%(n - 1));
            y1 = (rand()%(m - 1));
            arr[x1][y1] = 'X';
        }


        x1 = (rand()%(n - 1));
        y1 = (rand()%(m - 1));

        while(arr[x1][y1] == 'X')
        {
            x1 = (rand()%(n - 1));
            y1 = (rand()%(m - 1));

        }

        arr[x1][y1] = 'Q';

        if(arr[x1+1][y1] != 'X')arr[x1+1][y1] = '0';
        if(arr[x1+1][y1+1] != 'X')arr[x1+1][y1+1]  = '0';
        if(arr[x1+1][y1-1] != 'X')arr[x1+1][y1-1] = '0';
        if(arr[x1][y1+1] != 'X')arr[x1][y1+1]  = '0';
        if(arr[x1][y1-1] != 'X')arr[x1][y1-1] = '0';
        if(arr[x1-1][y1] != 'X')arr[x1-1][y1] = '0';
        if(arr[x1-1][y1+1] != 'X')arr[x1-1][y1+1] = '0';
        if(arr[x1-1][y1-1] != 'X')arr[x1-1][y1-1] = '0';


        x1 = (rand()%(n - 1));
        y1 = (rand()%(m - 1));

        while(arr[x1][y1] == 'X' || arr[x1][y1] == '0')
        {
            x1 = (rand()%(n - 1));
            y1 = (rand()%(m - 1));

        }

        arr[x1][y1] = 'P';


         x1 = (rand()%(n - 1));
        y1 = (rand()%(m - 1));

        while(arr[x1][y1] == 'X' || arr[x1][y1] == '0' || arr[x1][y1] == 'P')
        {
            x1 = (rand()%(n - 1));
            y1 = (rand()%(m - 1));

        }

        arr[x1][y1] = 'K';

        for(int i = 0; i< n ; ++i)
        {
            for(int j = 0 ; j<m ; ++j)
            {
                if(arr[i][j] == '0')arr[i][j] = '.';
                outdata<<arr[i][j];
            }
            outdata<<endl;
        }
    }



    

    return 0;
}
