#include "Monster.h"
using namespace std;

myTeam::myTeam() : m_vie(50), m_attaque1(5), m_attaque2(10), m_attaque3(5), m_attaque4(5){}

int myTeam::getVie(){
  return m_vie;
}

int myTeam::getAttaque() {
  return m_attaque1;
  return m_attaque2;
  return m_attaque3;
  return m_attaque4;
}
