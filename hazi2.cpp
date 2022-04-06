#include <iostream>

using namespace std;

int main()
{
    int k,n,v[100],cr=0,szam=0;
    cin >> n >> k;
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    for(int i=0 ; i<n ; i++){
        while(v[i]>0){
            v[i]=v[i]/10;
            cr++;
        }
        if(cr>k){
            szam++;
        }
        cr=0;
    }
    cout << szam;

    return 0;
}
