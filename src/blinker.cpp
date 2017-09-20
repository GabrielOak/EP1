#include "blinker.hpp"

Blinker::Blinker(){
  setForma(10,10);
  setForma(11,10);
  setForma(12,10);
}
Blinker::Blinker(int x, int y){
    setForma(x,y);
    setForma(x+1,y);
    setForma(x+2,y);
}
Blinker::~Blinker(){}
