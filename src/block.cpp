#include "block.hpp"

Block::Block(){

  setForma(10,10);
  setForma(10,11);
  setForma(11,10);
  setForma(11,11);

}
Block::Block(int x, int y){
  setForma(x,y);
  setForma(x,y+1);
  setForma(x+1,y);
  setForma(x+1,y+1);

}
Block::~Block(){}
