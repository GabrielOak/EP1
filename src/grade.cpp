#include "grade.hpp"
#include <iostream>
#include <unistd.h>

using namespace std;

Grade::Grade(){

  grade[40][40];
  grade2[40][40];

  for(int a =0; a < tamanho; a++){
      for(int b = 0; b < tamanho; b++){
          grade[a][b] = false;
      }
  }

  for(int a =0; a < tamanho; a++){
      for(int b = 0; b < tamanho; b++){
          grade2[a][b] = false;
      }
  }


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
      if(b == tamanho -1){
        cout << endl;
      }
    }
  }
  cout << endl;

}
void Grade::atribuirValor(bool){

  int i, j, n;

  cout << "Modo manual:" << endl;
  cout << "Insira o numero de celulas que deseja colocar" << endl;
  cin >> n;

  for(int a=0; a<n; a++){
    cout << "Insira a coordenada da celula" << endl;
    cin >> i >> j;
    if(i<1 || i>39){
      cout << "Coordenada invalida";
      cout << "Insira uma coordenada entre 1 e 39" << endl;
      cin >> i;
    }
    if(j<1 || j>39){
      cout << "Coordenada invalida";
      cout << "Insira uma coordenada entre 1 e 39" << endl;
      cin >> j;
    }
    grade[i][j] = true;
    imprimirGrade(grade);
  }

  for(int a=0; a<10; a++){
    regras(grade, grade2);
    compararGrade(grade, grade2);
    imprimirGrade(grade);
    usleep(200000);
  }

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
    for(int a =0; a < tamanho; a++){
        for(int b = 0; b < tamanho; b++){
            grade[a][b] = grade2[a][b];
        }
    }
}
void Grade::regras(bool, bool){
int vizinhos = 0;
for(int a=0; a<tamanho; a++){
  for(int b=0; b<tamanho; b++){

      vizinhos = 0;

      // 1
      if(grade[a-1][b-1] == true){
        vizinhos++;
      }
      //2
      if(grade[a-1][b] == true){
        vizinhos++;
      }
      //3
      if(grade[a-1][b+1] == true){
        vizinhos++;
      }
      //4
      if(grade[a][b-1] == true){
        vizinhos++;
      }
      //5
      if(grade[a][b+1] == true){
        vizinhos++;
      }
      //6
      if(grade[a+1][b-1] == true){
        vizinhos++;
      }
      //7
      if(grade[a+1][b] == true){
        vizinhos++;
      }
      //8
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
