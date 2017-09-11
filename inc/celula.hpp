#ifndef CELULA_HPP
#define CELULA_HPP
#include "grade.hpp"

class Celula :: public Grade{
  int estado;
public:
  Celula();
  int getEstado();
  void setEstado(int estado);
  void estado(bool grade[tamanho][tamanho]);

};
#endif
