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

    float median_of_x;// find median between x0 and x1.
    static int count ; // count for the first click.
    static float Store_coordinatex[50]; // store median of x
    static float Store_coordinatey[50]; // store y constant
    static int i;// declare to use in loop.
    static int Time_of_store ; // count number of element that has been store in array.
    static int notTrue ; // count if element in array didn't match with element that has click.

    float median_of_y;// find median between x0 and x1.
    static int count1 ; // count for the first click.
    static float Store_vcoordinatex[50]; // store median of x
    static float Store_vcoordinatey[50]; // store y constant
    static int i1;// declare to use in loop.
    static int Time_of_store1 ; // count number of element that has been store in array.
    static int notTrue1 ; // count if element in array didn't match with element that has click.



};

#endif // BLOCK_H
