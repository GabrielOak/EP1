#include "grade.hpp"
#include <iostream>

Grade::Grade(){

  grade[40][40];
  grade2[40][40];
}

void Grade::imprimirGrade(bool){
  for(int a = 1; a < tamanho; a++){
    for( int b = 1; b < tamanho; b++){
      if (grade[a][b] == true){
        cout << " O";
      }
      else {
        cout << " .";
      }
      if(b == tamanho - 1){
        cout << endl;
      }
    }
  }

}
void Grade::atribuirValor(bool){
  /*for (int a=0; a<tamanho; a++){
    for (int b=0; b<tamanho; b++){
      if(a == b){
        grade[a][b] = true;
      }
      else{
        grade[a][b] = false;
      }
    }
  }*/


}
void Grade::setForma(int x, int y){
    grade[x][y] = true;
}
int Grade::getX(){
  return x;
}
void Grade::setX(int x){
  this->x = x;
}
int Grade::getY(){
  return y;
}
void Grade::setY(int y){
  this->y = y;
}
int Grade::getCoordenada(){
  return coordenada;
}
void Grade::setCoordenada(int coordenada){
  this->coordenada = coordenada;
}
void Grade::compararGrade (bool, bool){
    for(int a =0; a < tamanho; a++)
    {
        for(int b = 0; b < tamanho; b++)
        {
                grade[a][b] = grade2[a][b];
        }
    }
}
void Grade::regras(bool, bool){
int vizinhos = 0;
for(int a=0; a<tamanho; a++){
  for(int b=0; b<tamanho; b++){

      vizinhos = 0;

      if(grade[a-1][b-1] == true){
        vizinhos++;
      }
      if(grade[a-1][b] == true){
        vizinhos++;
      }
      if(grade[a-1][b+1] == true){
        vizinhos++;
      }
      if(grade[a][b-1] == true){
        vizinhos++;
      }
      if(grade[a][b+1] == true){
        vizinhos++;
      }
      if(grade[a+1][b-1] == true){
        vizinhos++;
      }
      if(grade[a+1][b] == true){
        vizinhos++;
      }
      if(grade[a+1][b+1] == true){
        vizinhos++;
      }
      //Regra 1 - Solidão
      if (grade[a][b] == true && vizinhos < 2){
          grade2[a][b] = false;
      }
      // Regra 2 - Superpopulação
      else if (grade[a][b] == true && vizinhos > 3){
          grade2[a][b] = false;
      }
      //Regra 3
      else if (grade[a][b] == 0 && vizinhos == 3){
            grade2[a][b] = true;
      }
      //Regra 4
      else if (grade[a][b] == true && (vizinhos == 2 || vizinhos == 3)){
            grade2[a][b] = true;
      }
    }
  }
}
