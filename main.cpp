#include <iostream>
using namespace std;

int main() 
{
    int N,i;
    float numero, max;

    cout << "Numero di valori da inserire?" << endl;

    cin >> N;

    for(i=1; i<=N; i=i+1)
    {
        cout << "Scrivi il numero." << endl,

        cin >> numero;

        if(i=1)
        {
            max=numero;
        }
        else
        {
            if(numero>max)
            {
                max = numero
            }
            else
            {

            }
        }
    }

    cout << "Il numero maggiore è " << max << endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
