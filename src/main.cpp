#include "grade.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glinder.hpp"
#include "gosperglidergun.hpp"
#include <iostream>
#include <unistd.h>

using namespace std;

int main(){

  char iniciar, modo;

  cout << "                                      The Game of Life " << endl;
  cout << endl;
  cout << endl;
  cout << "The game of life é um autómato celular desenvolvido pelo matemático britânico John Horton Conway em 1970." << endl;
  cout << endl;
  cout << "Regras:" << endl;
  cout << " 1. Qualquer célula viva com menos de dois vizinhos vivos morre de solidão." << endl;
  cout << " 2. Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação." << endl;
  cout << " 3. Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva." << endl;
  cout << " 4. Qualquer célula viva com dois ou três vizinhos vivos continua no mesmo estado para a próxima geração." << endl;
  cout << endl;
  cout << " O - célula viva" << endl;
  cout << " . - célula morta" << endl;
  cout << endl;
  cout << "Modos:" << endl;
  cout << " M - Para inserir as células manualmente" << endl;
  cout << " O - Para inserir um block" << endl;
  cout << " B - Para inserir um blinker" << endl;
  cout << " U - Para inserir um glider" << endl;
  cout << " G - Para inserir uma gosper glider gun" << endl;
  cout << endl;
  cout << "Escolha um modo" << endl;
  cin >> modo;

  while(modo != 'm' && modo != 'M' && modo != 'o' && modo != 'O' && modo != 'b'&& modo != 'B' && modo != 'u' && modo != 'U' && modo != 'g' && modo != 'G'){
    cout << "Insira uma opção valida" << endl;
    cin >> modo;
  }

  if(modo == 'm' || modo == 'M'){
      Grade * grade1 = new Grade();
      bool grade;
      bool grade2;
      grade1->atribuirValor(grade);
  }
  else if(modo == 'o'|| modo =='O'){
    //Block
  }
  else if(modo == 'b' || modo == 'B'){
    //Blinker
  }
  else if(modo == 'u' || modo == 'U'){
    //Glider
  }
  else if(modo == 'g' || modo == 'G'){
    //Gosper glider gun
    Grade * gradea = new GosperGliderGun();
    bool grade;
    bool grade2;

    gradea->imprimirGrade(grade);

    while(1){
      gradea->regras(grade, grade2);
      gradea->compararGrade(grade, grade2);
      gradea->imprimirGrade(grade);

      usleep(150000);
    }
  }
  return 0;
}
