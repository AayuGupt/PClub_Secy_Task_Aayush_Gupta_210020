#include<bits/stdc++.h>
#include<time.h>
using std::ofstream;
using namespace std;

#define ll long long



int main(){
    

    ofstream outdata;
    srand(time(NULL));

    outdata.open("test_cases.dat");

    // We can set the number of inputs we need by the follwing for loop
    for(int tt=0;tt<100;tt++){
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


        x1 = (rand()%(n - 1));
        y1 = (rand()%(m - 1));

        while(arr[x1][y1] == 'X'||arr[x1][y1] == 'Q')
        {
            x1 = (rand()%(n - 1));
            y1 = (rand()%(m - 1));

        }

        arr[x1][y1] = 'P';

        for(int i = 0; i< n ; ++i)
        {
            for(int j = 0 ; j<m ; ++j)
            {
                outdata<<arr[i][j];
            }
            outdata<<endl;
        }
    }



    

    return 0;
}
