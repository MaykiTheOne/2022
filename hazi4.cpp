#include <iostream>
#include <string>

using namespace std;

int main()
{
    string be,t2,szavak[100],t="",szo="";

    int m=1,n,i,nu=0;
    getline(cin, be);
    be=be+' ';
    for(int i=0 ; i<be.size() ; i++)
    {
        if(be[i]!=' ')
        {
            t=t + be[i];
        }
        if(be[i]== ' ')
        {
            szavak[m]=t;
            m++;
            t="";
        }
    }
    for(int j=1 ; j<=m ; j++)
    {
        if((szavak[j].size())%2!=0)
        {
            t=szavak[j];
            t2="";
            for(i=t.size()-1 ; i>=0 ; i--)
            {
                t2=t2+t[i];
            }
            if(szavak[j]!=t2)
            {
                szavak[j]=t2;
                nu++;
            }

        }
    }
    if(nu!=0)
    {
        for(i=1 ; i<m-1 ; i++)
        {
            cout << szavak[i] << " ";
        }
        cout << szavak[m-1];
    }
    if(nu==0)
    {
        cout << "nu exista";
    }
    return 0;
}
