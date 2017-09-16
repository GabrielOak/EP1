#ifndef GRADE_HPP
#define GRADE_HPP

using namespace std;

const int tamanho = 100;

class Grade{
  bool grade[100][100];
  bool grade2[100][100];
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
  void aplicarRegras(bool grade);
  void atribuirValor(bool grade);
  void compararGrade(bool grade, bool grade2);
  void setForma(int x, int y);

};
#endif
