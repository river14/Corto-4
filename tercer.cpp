#include "iostream"

using namespace std;

float final (float not1, float not2, float not3, float not4, float not5);

bool aprobo (float yes);

int main ()
{
    float n1, n2, n3, n4, n5, fgrade, finote;

        cout<<"\n";
        cout<<"INTRODUZCA SUS CINCO NOTAS Y COMPUREBE SI APROBO";
        cout<<"\n";

        cout<<"INTRODUZCA LA PRIMERA NOTA: ";
        cin>>n1;
        cout<<"\n";

        cout<<"INTRODUZCA LA SEGUNDA NOTA: ";
        cin>>n2;
        cout<<"\n";

        cout<<"INTRODUZCA LA TERCER NOTA: ";
        cin>>n3;
        cout<<"\n";

        cout<<"INTRODUZCA LA CUARTA NOTA: ";
        cin>>n4;
        cout<<"\n";

        cout<<"INRODUZCA LA QUINTA NOTA: ";
        cin>>n5;
        cout<<"\n";
        
        fgrade = final (n1, n2, n3, n4, n5);

        cout<<"SU NOTA FINAL ES: "  << fgrade;
        cout<<"\n";

        finote = aprobo (fgrade);

        if (finote == false)
        {
            cout<<"HA REPROBADO";
            cout<<"\n";
        }
        if (finote == true)
        {
            cout<<"HA APROBADO";
            cout<<"\n";
        }
return 0;     
}
 
float final (float nt1, float nt2, float nt3, float nt4, float nt5)
{
    float grade;

    grade = (nt1 * 0.20 + nt2 * 0.20 + nt3 * 0.20 + nt4 * 0.20 + nt5 * 0.20);

    return grade;
}
bool aprobo (float yes)
{
    bool fin = true;

    if (yes >= 7.00)
    {
        return fin == true;
    }

    if (yes < 7.00)
    {
        return fin == false;
    }
    
}


    


