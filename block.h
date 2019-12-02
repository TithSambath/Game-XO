#ifndef BLOCK_H
#define BLOCK_H
#include <QGraphicsItem>
#include <QMouseEvent>
#include <QObject>
#include <QGraphicsView>
#include "win.h"
#include <QMediaPlayer>
#include "winner.h"
class BLOCK : public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    BLOCK();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void Create_Board (QGraphicsScene * parent);
    void drawingFunc(bool drawing , int x , int y);
    void reset();
    static int getPlayerScore_1();

    static int getPlayerScore_2();

    static int getPlayer();

signals:
    void signalDisplay();

private:
    QGraphicsScene *add_to_scene = new QGraphicsScene;
    void DefinePlayerTurn(int CountPlayerTurn);
    int x;
    int y;
    int x1,x2,y1,y2;
    static win Generator ;
    static int player ;// store 1 for player 1 and 2 for player 2
    static int playerScore_1;
    static int playerScore_2;
    int midpointOFBlock1;
    int midpointOFBlock2;
    // create Media:
    QMediaPlayer *drawingSound = new QMediaPlayer;
    // create winner widget:





};

#endif // BLOCK_H
