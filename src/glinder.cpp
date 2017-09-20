#include "glinder.hpp"

Glinder::Glinder(){

  setForma(10,10);
  setForma(10,11);
  setForma(10,12);
  setForma(8,11);
  setForma(9,12);
}
Glinder::Glinder(int x, int y){

  setForma(x,y);
  setForma(x,y+1);
  setForma(x,y+2);
  setForma(x-2,y+1);
  setForma(x-1,y+2);
}
Glinder::~Glinder(){}
