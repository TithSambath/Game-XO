#include "playerline.h"
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include <block.h>
#include <QGraphicsScene>
playerline::playerline()
{

}

void playerline::Set_Player_Line(int x1,int y1,int x2,int y2,int Player)
{
    if (Player == 0)
    {
        setLine(x1,y1,x2,y2);
        QPen Pen;
        Pen.setWidth(5);
        Pen.setColor(Qt::red);
        setPen(Pen);
    }
    else if (Player == 1){
        setLine(x1,y1,x2,y2);
        QPen Pen;
        Pen.setWidth(5);
        Pen.setColor(Qt::blue);
        setPen(Pen);
    }
}




