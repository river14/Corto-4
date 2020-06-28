#include "iostream"

using namespace std;

void spaces ()
{
    char x [50];
    int y = 0;

    cout<<"INGRESE UNA PALABRA: ";
    cin>>x;

    while (x[y]!='\0')
    {
        if (x [y] == 'M' || x [y] == 'm')
        {
            x [y] = '0';
        }

        if (x [y] == 'U' || x [y] == 'u')
        {
            x [y] = '1';
        }

        if (x [y] == 'R' || x [y] == 'r')
        {
            x [y] = '2';
        }

       if (x [y] == 'C' || x [y] == 'c')
        {
            x [y] = '3';
        }

        if (x [y] == 'I' || x [y] == 'i')
        {
            x [y] = '4';
        }

        if (x [y] == 'E' || x [y] == 'e')
        {
            x [y] = '5';
        }
        
        if (x [y] == 'L' || x [y] == 'l')
        {
            x [y] = '6';
        }

        if (x [y] == 'A' || x [y] == 'a')
        {
            x [y] = '7';
        }

        if (x [y] == 'G' || x [y] == 'g')
        {
            x [y] = '8';
        }

        if (x [y] == 'O' || x [y] == 'o')
        {
            x [y] = '9';
        }

        y++;

        cout<<"\n" <<x;
    }
}

main ()
{
    spaces ();
    return 0;
}