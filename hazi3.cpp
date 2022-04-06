#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,i,j;
    int v[100][100];
    cin >>n;
    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=n ; j++){
            v[i][j]=(i*j)%10;
        }
    }

     for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=n ; j++){
            cout << v[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
