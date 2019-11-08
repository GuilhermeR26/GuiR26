#include <iostream>
///Eu nao inclui as bibliotecas de Portugues porque meu teclado e padrao US
using namespace std;

int main()
{
    int conta, dig1, dig2, dig3, dig4, r1, r2, r3, digv; ///Digito, resultado e digito verificador
    cout << "Digite o numero da conta (4 digitos):" << endl;
    cin >> conta;
    dig1= conta/1000;
    dig2= (conta%1000)/100;
    dig3= ((conta%1000)%100)/10;
    dig4= ((conta%1000)%100)%10;
    r1= dig1+dig2+dig3+dig4;
    r2= dig1*dig2*dig3*dig4;
    r3= r2-r1;
    digv= r3/9;
    cout << "O digito verificador e:" << digv <<"" << endl;
    return 0;
}
