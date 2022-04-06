#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[350][350], i, j, n,  sz1=0,  sz2=0;
    double atlag1=0, atlag2=0;
    ofstream ki("output.txt");
    ifstream be("input.txt");
    be>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            be>>v[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i<j && v[i][j]>0)
            {
                atlag1+=v[i][j];
                sz1++;
            }
            else if(i>j && v[i][j]>0)
            {
                atlag2+=v[i][j];
                sz2++;
            }
        }
    }
    if(sz1!=0 && sz2!=0)
    {
        atlag1/=sz1;
        atlag2/=sz2;

    }
    if(atlag1>atlag2)
    {
        ki<<atlag1-atlag2;
    }
    if(atlag1<atlag2)
    {
        ki<<atlag2-atlag1;
    }
    return 0;
}
