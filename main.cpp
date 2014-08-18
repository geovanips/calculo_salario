#include <iostream>
using namespace std;

int main()
{
    float salario,vale,salliq;
    char outros;
    cout << "\n###PROGRAMA PARA CALCULO DO SALARIO LIQUIDO###\n";
    cout << "### Digite o seu salario BRUTO para obter o liquito com descontos de inss e vale transporte: ";
    cin >> salario;
    cout << "\nFez algum vale esse mes? Digite S OU N.\n";
    cin >> outros;
            if (outros == 'S')
            {
               cout <<"\nDigite o valor do seu vale.\n";
               cin >> vale;
               salliq = salario - ((salario*0.06)+(salario*0.08)+vale);
               cout << "\nSeu salario e:  " <<salliq <<"\n";
            }
            else
                if(outros == 'N')
                {
                    salliq = salario-(salario*0.06)-(salario*0.08);
                    cout << "\nSeu salario e:  " <<salliq <<"\n";
                }
}
