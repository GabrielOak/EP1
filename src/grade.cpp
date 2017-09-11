#include "grade.hpp"

Grade::Grade(){
  tamanho = 25;
  bool grade[tamanho][tamanho] = {};
  bool grade2[tamanho][tamanho] = {};
}
int Grade::getTamanho(){
  return tamanho;
}
void Grade::setTamanho(int tamanho){
  this->tamanho = tamanho;
}

void Grade::imprimiGrade(bool grade[tamanho+1][tamanho+1]){
  for(int a = 1; a < tamanho; a++){
    for( int b = 1; b < tamanho; b++){
      if (grade[a][b] == true){
        cout << " O ";
      }
      else {
        cout << " . ";
      }
      if(b == grade - 1){
        cout << endl;
      }
    }
  }
}
void Grade::atualizaGrade(){}
void Grade::comparaGrade(bool grade[tamanho+1][tamanho+1], bool grade2[tamanho+1][tamanho+1]){
  for(int a = 0; a < ){
    for(int b =0; b < tamanho; b++){
      grade2[a][b] = grade[a][b];
    }
  }
}
