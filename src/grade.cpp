#include "grade.hpp"
#include <iostream>

Grade::Grade(){


  grade[100][100];
  grade2[100][100];
}

void Grade::imprimirGrade(bool){
  for(int a = 1; a < tamanho; a++){
    for( int b = 1; b < tamanho; b++){
      if (grade[a][b] == true){
        cout << "O";
      }
      else {
        cout << ".";
      }
      if(b == tamanho - 1){
        cout << endl;
      }
    }
  }

}
void Grade::aplicarRegras(bool){
  bool grade2[100][100];
  compararGrade(grade,grade2);

  for(int a = 1; a < tamanho; a++){
    for(int b = 1; b < tamanho; b++){
      int vivo = 0;
      for(int c = -1; c < 2; c++){
        for(int d = -1; d < 2; d++){
          if(!(c == 0 && d == 0)){
            if(grade2[a+c][b+d]){
              vivo++;
            }
          }
        }
      }
        if(vivo < 2){
          grade[a][b] = false;
        }
        else if(vivo == 3){
          grade[a][b] = true;
        }
        else if(vivo > 3){
          grade[a][b] = false;
        }
      }
    }
}
void Grade::compararGrade(bool,bool){
  for(int a = 0; a < tamanho; a++){
    for(int b =0; b < tamanho; b++){
      grade2[a][b] = grade[a][b];
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
