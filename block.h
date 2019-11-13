#ifndef BLOCK_H
#define BLOCK_H

#include <QGraphicsItem>
#include <QMouseEvent>
#include <QObject>
#include <QGraphicsView>
#include "win.h"

class BLOCK :public QGraphicsRectItem
{
public:
    BLOCK();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void Create_Board (QGraphicsScene * parent);
    void drawingFunc(bool drawing , int x , int y);
    static int midPoint[61];
private:
    QGraphicsScene *add_to_scene = new QGraphicsScene;
    void DefinePlayerTurn(int CountPlayerTurn);
    int x;
    int y;
    int x1,x2,y1,y2;
    static win Generator ;
    static int player ;// store 1 for player 1 and 2 for player 2




};

#endif // BLOCK_H
