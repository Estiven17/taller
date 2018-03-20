#include <iostream>

using namespace std;

int main()
{
    int z=0,suma=0;
    float promedio=0.0,estatura=0.0;

    cout<<"el programa esta diseñado para una cantidad de estaturas n"<<endl;
    cout<<"si en algun momento desea cerrar el programa digite el numero '4' en cualquier linea"<<endl;

    for(int i=1; ; i++){
        suma=suma+estatura;
        cout<<"digite  estatura #"<<i<<" en metros: "<<endl;
        cin>>estatura;
        if (estatura==4)
        {
            z=i-1;
            break;
        }
    }
    promedio=(suma/z);
    cout<<"promedio: "<<promedio<<endl;


    return 0;
}
