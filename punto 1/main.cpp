#include <iostream>

using namespace std;

int main()
{
    int edad=0,cant=0,contador=0,z=0,suma=0,fin=0;
    float promedio=0.0;

    while(true){
        cout <<"digite numero de estudiantes: "<< endl;
        cin>>cant;
        while (contador<cant)
        {
            suma=suma+edad;
            cout<<"suma: "<<suma<<endl;
            contador=contador+1;
            cout<<"digite la edad de el estudiante "<<contador<<": "<<endl;
            cin>>edad;
            z=contador;
            if (edad>18)
            {
                z=contador-1;
                break;
            }

        }
        promedio=((suma)/z);
        cout<<"promedio: "<<promedio<<endl;
        cout<<" "<<endl;
        suma=0;
        cant=0;
        edad=0;
        contador=0;
        z=0;
        cout<<"si desea cerrar el programa ingrese '0' de lo contrario ingrese 1: ";
        cin>>fin;
        if(fin==0){
            break;
        }
    }

    return 0;
}
