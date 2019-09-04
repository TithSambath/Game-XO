#ifndef BORDER_H
#define BORDER_H
#include <QGraphicsLineItem>
#include <QGraphicsScene>

class BORDER : public QGraphicsLineItem, public QGraphicsScene
{
public:
    BORDER();
    void Create_Border(QGraphicsScene *Parent = nullptr);
    void store_coordinate_x_and_ycost(int x1,int x2,int y2);
private:


};

#endif // BORDER_H
