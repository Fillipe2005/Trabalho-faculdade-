#include <iostream> // inclusão de bibliotecas
#include <locale.h>  
using namespace std; 
int main() {
  setlocale(LC_ALL, "Portuguese");
  int CPFinserido, CPF, soma, verificadorD; // variaveis para input e output
  int C1, C2, C3, C4, C5, C6, C7, C8, C9, D1, D2; // separação dos dígitos em diferentes variaveis

  // usuário informa CPF sem o verficador
  cout<<"Digite os 9 primeiros dígitos do CPF: \n";
  cin>>CPFinserido;
  CPF = CPFinserido; 

  // separa os dígitos do CPF em 9 variáveis diferentes
  C1 = CPF/100000000;
  CPF = CPF - C1*100000000;
  C2 = CPF/10000000;
  CPF = CPF - C2*10000000;
  C3 = CPF/1000000;
  CPF = CPF - C3*1000000;
  C4 = CPF/100000;
  CPF = CPF - C4*100000;
  C5 = CPF/10000;
  CPF = CPF - C5*10000;
  C6 = CPF/1000;
  CPF = CPF - C6*1000;
  C7 = CPF/100;
  CPF = CPF - C7*100;
  C8 = CPF/10;
  CPF = CPF - C8*10;
  C9 = CPF/1; 
  
  // aplica a fórmula para descobrir o primeiro verificador
  soma = 10*C1 + 9*C2 + 8*C3 + 7*C4 + 6*C5 + 5*C6 + 4*C7 + 3*C8 + 2*C9; 
  
  verificadorD = soma%11;
  
  // verifica se o verificador é menor que 2 ou maior
  if (verificadorD < 2) {
    D1 = 0;
    cout<<"\n\nPrimeiro dígito verificador: "<<D1;  

  } else {
    D1 = 11 - verificadorD;
    cout<<"\n\nPrimeiro dígito verificador: "<<D1;
  } 
  
  // aplica a fórmula para o segundo verificador
  soma = 11*C1 + 10*C2 + 9*C3 + 8*C4 + 7*C5 + 6*C6 + 5*C7 + 4*C8 + 3*C9 + 2*D1;
  verificadorD = soma%11;

  // verifica se o verificador é menor que 2 ou maior
  if (verificadorD < 2) { 
    D2 = 0;
    cout<<"\nSegundo dígito verificador: "<<D2;    
  } else {
    D2 = 11 - verificadorD;
    cout<<"\nSegundo dígito verificador: "<<D2;
  }
  // mostra na tela o CPF informado + os digitos verificadores
  cout<<"\n\nCPF completo: "<<C1<<C2<<C3;
  cout<<"."<<C4<<C5<<C6;
  cout<<"."<<C7<<C8<<C9;
  cout<<"-"<<D1<<D2;
  return(0);
}
// Alunos: Allan Araujo, Eduardo Cauã, Fillipe Rocha, Lucas Gabriel, Victor Matheus.