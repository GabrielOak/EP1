#ifndef GRADE_HPP
#define GRADE_HPP

using namespace std;

const int tamanho = 40;

class Grade{
  bool grade[40][40];
  bool grade2[40][40];
  int x, y, coordenada;

public:
  Grade();
  int getX();
  void setX(int x);
  int getY();
  void setY(int y);
  int getCoordenada();
  void setCoordenada(int coordenada);
  void imprimirGrade(bool grade);
  void atribuirValor(bool grade);
  void compararGrade(bool grade, bool grade2);
  void setForma(int x, int y);
  void regras(bool grade, bool grade2);

};
#endif
