#ifndef PLAYERSYMBOL_H
#define PLAYERSYMBOL_H
#include "QGraphicsScene"

class PlayerSymbol
{
public:
    PlayerSymbol();
    void player_O(QGraphicsScene *parent,int posx,int posy);
    void player_X(QGraphicsScene *parent,int posx,int posy);
};

#endif // PLAYERSYMBOL_H
