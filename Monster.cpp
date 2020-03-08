#include "Monster.h"
using namespace std;

myTeam::myTeam() : m_vie(50), m_attaque1(5), m_attaque2(10), m_attaque3(5), m_attaque4(5){}
myTeam::Monster() : m_vie(50), m_attaque1(5), m_attaque2(10), m_attaque3(5), m_attaque4(10){}

int myTeam::getVie(){
  return m_vie;
}

int myTeam::getAttaque() {
  return m_attaque1;
  return m_attaque2;
  return m_attaque3;
  return m_attaque4;
}

void myTeam::setVie(int _pv){

  pv += _pv;
  
};

int Monster::getVie(){
  return m_vie;
}

int Monster::getAttaque() {
  return m_attaque1;
  return m_attaque2;
  return m_attaque3;
  return m_attaque4;
}

void Monster::setVie(int _pv){

  pv += _pv;
  
};
