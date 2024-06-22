#include <iostream>
using namespace std;

int main() 
{
  //0-2.5 D, 2.5-5C, 5-7.5 B, 7.5-10 A 
  float nota1, nota2;
  cout << "informe a Nota 1\n";
  cin >> nota1;
  
  cout << "informe nota 2\n";
  cin >> nota2;

  
 float media = (nota1+nota2)/2;
 
 cout << "total da media " << media << endl;
  
  if(media < 2.5){
    cout << "Nota D\n";
    
  }else if (media < 5){
    cout << "nota C\n";
  } else if (media < 7.5){
    cout << "nota B";
  }else cout << "nota A";
  
  float frequencia;
  cout << "Qual a frquencia do aluno \n";
  cin >> frequencia;
  
  if (media >= 5 && frequencia >= 75){
    cout << "Aluno Aprovado\n";
  } else{
    cout << "Aluno Reprovado\n";
  }
  
  
  
  

    return 0;
}