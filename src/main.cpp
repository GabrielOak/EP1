#include "grade.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glinder.hpp"
#include "gosperglidergun.hpp"
#include <iostream>
#include <unistd.h>

using namespace std;

int main(){

  Grade * gradea = new GosperGliderGun();
  bool grade;
  bool grade2;

  gradea->imprimirGrade(grade);

  while(1){
    gradea->regras(grade, grade2);
    gradea->compararGrade(grade, grade2);
    gradea->imprimirGrade(grade);
    usleep(200000);
  }
  return 0;
}
