#include <iostream>
#include <stdlib.h>

using namespace std;

void maiorMenor (int *pontCadeiaNum, int *pontMaxNum, int *pontMinNum, int cn);

int main()
{

    int numVal, maxNum = 0, minNum = 0;

    cout << "Entre com o numero de valores:";
    cin >> numVal;
    int cadeiaNum[numVal];

    for (int i = 0; i < numVal; i++)
    {
      cout << "Digite um numero: ";
      cin >> cadeiaNum[i];
    }

    maxNum = cadeiaNum[0];
    minNum = cadeiaNum[0];

    maiorMenor (cadeiaNum, &maxNum, &minNum, numVal);

    cout << "Valores do vetor: ";
    for (int i = 0; i < numVal; i++)
    {
      cout << cadeiaNum[i]<<", ";
    }
    cout <<endl;
    cout <<"Valor maximo: " << maxNum << endl;
    cout <<"Valoe minimo: " << minNum;

    return 0;
}


void maiorMenor (int *pontCadeiaNum, int *pontMaxNum, int *pontMinNum, int cn)
 {


     for (int i = 0; i < cn; i++) {

        if (pontCadeiaNum[i] > *pontMaxNum) {
            *pontMaxNum = pontCadeiaNum[i];
        } else if (pontCadeiaNum[i] < *pontMinNum) {
            *pontMinNum = pontCadeiaNum[i];
        }

     }

 }