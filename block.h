#ifndef BLOCK_H
#define BLOCK_H

#include <QGraphicsItem>
#include <QMouseEvent>
#include <QObject>
#include <QGraphicsView>
#include "win.h"

class BLOCK :public QGraphicsRectItem , public win
{
public:
    BLOCK();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void Create_Board (QGraphicsScene * parent);
private:
    QGraphicsScene *add_to_scene = new QGraphicsScene;
    void DefinePlayerTurn(int CountPlayerTurn);
    int x;
    int y;
    int x1,x2,y1,y2;
    int x_oldvalue = 0;
    int x_value = 0;
    int y_oldvalue = 0;
    int y_value = 0;
    static int player ;// store 1 for player 1 and 2 for player 2
    //float Store_coordinatex[50];
    //float Store_coordinatey[50];
    float median_of_x;

    static int count ;
    static float Store_coordinatex[50];
    static float Store_coordinatey[50];
    static int i;
    static int Time_of_store ;
    static int notTrue ;


};

#endif // BLOCK_H
