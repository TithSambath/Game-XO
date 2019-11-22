 #include "playersymbol.h"
#include "win.h"
#include <QGraphicsPixmapItem>
#include <QDebug>
PlayerSymbol::PlayerSymbol()
{

}

void PlayerSymbol::player_O(QGraphicsScene *parent, int posx, int posy)
{
    QGraphicsPixmapItem *pixmap = new QGraphicsPixmapItem;
    pixmap->setPixmap(QPixmap(":/O Player.png"));
    pixmap->setPos(posx,posy);
    parent->addItem(pixmap);
    qDebug()<<parent;
}

void PlayerSymbol::player_X(QGraphicsScene *parent, int posx, int posy)
{
    QGraphicsPixmapItem *pixmap = new QGraphicsPixmapItem;
    pixmap->setPixmap(QPixmap(":/X Player.png"));
    pixmap->setPos(posx,posy);
    parent->addItem(pixmap);
    qDebug()<<parent;
}
