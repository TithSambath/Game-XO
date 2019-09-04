#ifndef PLAYERLINE_H
#define PLAYERLINE_H
#include <QGraphicsLineItem>
#include <QMouseEvent>
#include <block.h>
#include <QObject>


class playerline :public QObject, public QGraphicsLineItem
{
public:
    playerline();// constructor
    void Set_Player_Line(int x1,int y1,int x2,int y2,int player);


};

#endif // PLAYERLINE_H
