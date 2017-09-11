#include <iostream>
#include "celula.hpp"

Celula::Celula(){
  estado = 0;
}
string Celula::getEstado(){
  this->estado = estado;
}
void Celula::setEstado(int estado){
  return estado;
}
void Celula::estado (bool grade[tamanho][tamanho]){
  bool grade2[tamanho+1][tamanho+1] = {};
  comparaGrade(grade,grade2);

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
