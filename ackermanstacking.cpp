#include <iostream>

#include <cstdlib>
using namespace std;
int Ackerman(int m, int n)
{

    if(m==0)
    return n+1;
    else

    {

        if(n==0)
        return Ackerman(m-1, 1);
        else
        return Ackerman(m-1, Ackerman(m, n-1));

    }

}

int main()

{

    int m, n, num ;



    cout<<"\n         FUNCTIA DE ACKERMAN \n\n";
    cout<<"INTRODUCE M <m>: ";
    cin>> m ;
    cout<<"INTRODUCE N <n>: ";
    cin>> n ;
    num = Ackerman(m,n);
    cout<<"\REZULTATUL ESTE "<< num <<endl<<endl;
    system("pause");
    return 0;

}
