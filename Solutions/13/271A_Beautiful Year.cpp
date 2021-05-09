#include <iostream>
using namespace std;
 
int kartotiniai(int sk)
{
    int skaitmuo[10];
    for(int i=0; i<4; i++)
    {
        skaitmuo[i]=sk%10;
        sk=sk/10;
    }
    int kiekis[10000];
    for(int i=0; i<10000; i++)
    {
        kiekis[i]=0;
    }
    for(int i=0; i<4; i++)
    {
        kiekis[skaitmuo[i]]++;
    }
    for(int i=0; i<4; i++)
    {
        if(kiekis[skaitmuo[i]]>1)
        {
            return 1;
        }
    }
    return 0;
}
 
int main()
{
    int sk, a;
    cin>>sk;
    sk=sk+1;
    while(kartotiniai(sk) == 1)
    {
        sk++;
    }
    cout<<sk<<endl;
return 0;
}
