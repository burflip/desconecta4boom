#ifndef PLAYER_H
#define PLAYER_H

#include "environment.h"

class Player{
    public:
      Player(int jug);
      Environment::ActionType Think();
      void Perceive(const Environment &env);
      double Practicar(const Environment &T, int jugador, int prof, int &accion);

    private:
      int jugador_;
      Environment actual_;
};
#endif
