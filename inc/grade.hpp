#ifndef GRADE_HPP
#define GRADE_HPP

using namespace std;

const int tamanho = 100;

class Grade{
  bool grade[100][100];
  bool grade2[100][100];

public:
  Grade();
  void imprimirGrade(bool grade);
  void aplicarRegras(bool grade);
  void atribuirValor(bool grade);
  void compararGrade(bool grade, bool grade2);

};
#endif
