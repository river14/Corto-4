#include "iostream"

using namespace std;

int promedio (int x);

int main ()
{
    int est [25], i, acumulador=0, prom, dpe=0, dpd=0;
    
    cout<<"CALCULE EL PROMEDIO DE ALTURA DE 25 ALUMNOS";
    cout<<endl;

    for (i = 1; i <= 25; i++)
    {
        cout<<"INGRESE LA ALTURA DEL ALUMNO EN CM: ";
        cin>>est [i];
        acumulador = acumulador + est [i];
    }
    
    prom = promedio (acumulador);

    cout<<"EL PROMEDIO DE ALTURA DE LA CLASE FUE: " <<prom;
    cout<<endl;

    for(i = 0; i < 25; i++) 
    {
      if (est[i] > prom)
        dpe++;
      else
        dpd++;
    }

    cout<<"ALUMNOS POR DEBAJO DEL PROMEDIO: "<<dpd<<endl;
	cout<<"ALUMNOS POR ENCIMA DEL PROMEDIO: "<<dpe<<endl;
    
return 0;
}

int promedio (int x)
{
    int prom;

    prom = x / 25;

    return prom;
}





