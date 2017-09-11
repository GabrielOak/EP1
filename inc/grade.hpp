#ifndef GRADE_HPP
#define GRADE_HPP
#include <string>

using namespace std;

class Grade{
  int tamanho;
  bool grade[tamanho][tamanho];
  bool grade2[tamanho][tamanho];

public:
  Grade();
  int getTamanho();
  void setTamanho(int tamanho);
  void imprimiGrade(bool grade[tamanho+1][tamanho+1]);
  void atualizaGrade();
  void comparaGrade(bool grade[tamanho+1][tamanho+1], bool grade2[tamanho+1][tamanho+1]);

};
#endif
