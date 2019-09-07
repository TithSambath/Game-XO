#include "block.h"
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include "playerline.h"
#include <QGraphicsScene>
#include <QPen>
#include <QGraphicsView>
#include <border.h>


BLOCK::BLOCK()
{

}
void BLOCK::Create_Board(QGraphicsScene *parent)
{
    int width = 50;
    int height = 50;
    // Middle block: known as center coordinated.
        BLOCK *Mblock = new BLOCK;
        Mblock->setRect(0,0,width,height);
        Mblock->setPos(400,400);
        parent->addItem(Mblock);// Middle block:

    // Mleft Block:
    int i;
    int j = 0;
        for (i = 0;i < 5;i++)
        {
            j += 50;
            BLOCK *LBlock = new BLOCK;
            LBlock->setRect(0,0,50,50);
            LBlock->setPos(400+j,400);
            parent->addItem(LBlock);
        }
    // Mdown block:
    i = 0;
    j = 0;
        for ( i = 0; i < 5; i++) {
            j += 50;
            BLOCK *Mdblock = new BLOCK;
            Mdblock->setRect(0,0,width,height);
            Mdblock->setPos(400,400+j);
            // add item to graphicsScene:
            parent->addItem(Mdblock);
        }
    // Mtop block:
    i = 0;
    j = 0;
        for ( i = 0; i < 5; i++) {
            j += 50;
            BLOCK *Mtblock = new BLOCK;
            Mtblock->setRect(0,0,width,height);
            Mtblock->setPos(400,400-j);
            // add item to graphicsScene:
            parent->addItem(Mtblock);
        }
   // Mright Block:
    i = 0;
    j = 0;
        for ( i = 0; i < 5; i++) {
            j += 50;
            BLOCK *Mrblock = new BLOCK;
            Mrblock->setRect(0,0,width,height);
            Mrblock->setPos(400-j,400);
            // add item to graphicsScene:
            parent->addItem(Mrblock);
      }

   // Top right column 1 conner:
    i = 0;
    j = 0;
        for ( i = 0; i < 4; i++) {
            j += 50;
            BLOCK *Trblock1 = new BLOCK;
            Trblock1->setRect(0,0,width,height);
            Trblock1->setPos(350,400-j);
            // add item to graphicsScene:
            parent->addItem(Trblock1);
        }

   // Top right column 2 conner:
    i = 0;
    j = 0;
        for ( i = 0; i < 3; i++) {
            j += 50;
            BLOCK *Trblock2 = new BLOCK;
            Trblock2->setRect(0,0,width,height);
            Trblock2->setPos(300,400-j);
            // add item to graphicsScene:
            parent->addItem(Trblock2);
        }

   // Top right column 3 conner:
    i = 0;
    j = 0;
        for ( i = 0; i < 2; i++) {
            j += 50;
            BLOCK *Trblock3 = new BLOCK;
            Trblock3->setRect(0,0,width,height);
            Trblock3->setPos(250,400-j);
            // add item to graphicsScene:
            parent->addItem(Trblock3);
        }

  // Top right column 4 conner:
        BLOCK *Tr4block1 = new BLOCK;
        Tr4block1->setRect(0,0,50,50);
        Tr4block1->setPos(200,350);
        parent->addItem(Tr4block1);

  // Down right column 1 conner:
   i = 0;
   j = 0;
        for ( i = 0; i < 4; i++) {
            j += 50;
            BLOCK *drblock1 = new BLOCK;
            drblock1->setRect(0,0,width,height);
            drblock1->setPos(350,400+j);
            // add item to graphicsScene:
            parent->addItem(drblock1);
        }

 // // Down right column 2 conner:
   i = 0;
   j = 0;
        for ( i = 0; i < 3; i++) {
            j += 50;
            BLOCK *drblock2 = new BLOCK;
            drblock2->setRect(0,0,width,height);
            drblock2->setPos(300,400+j);
            // add item to graphicsScene:
            parent->addItem(drblock2);
        }

// // // Down right column 3 conner:
   i = 0;
   j = 0;
        for ( i = 0; i < 2; i++) {
            j += 50;
            BLOCK *drblock3 = new BLOCK;
            drblock3->setRect(0,0,width,height);
            drblock3->setPos(250,400+j);
            // add item to graphicsScene:
            parent->addItem(drblock3);
        }

// // // // Down right column conner:
        BLOCK *dr4block1 = new BLOCK;
        dr4block1->setRect(0,0,50,50);
        dr4block1->setPos(200,450);
        parent->addItem(dr4block1);

 // Top left column 1 conner:
  i = 0;
  j = 0;
        for ( i = 0; i < 4; i++) {
            j += 50;
            BLOCK *Tlblock1 = new BLOCK;
            Tlblock1->setRect(0,0,width,height);
            Tlblock1->setPos(450,400-j);    //Top Left conner: is the first block
            // add item to graphicsScene:
            parent->addItem(Tlblock1);
        }

 // // Top left column 2 conner:
  i = 0;
  j = 0;
        for ( i = 0; i < 3; i++) {
            j += 50;
            BLOCK *Tlblock2 = new BLOCK;
            Tlblock2->setRect(0,0,width,height);
            Tlblock2->setPos(500,400-j);    //Top Left conner: is the first block
            // add item to graphicsScene:
            parent->addItem(Tlblock2);
        }

 // // // Top Left column 3 conner:
  i = 0;
  j = 0;
        for ( i = 0; i < 2; i++) {
            j += 50;
            BLOCK *Tlblock3 = new BLOCK;
            Tlblock3->setRect(0,0,width,height);
            Tlblock3->setPos(550,400-j);    //Top Left conner: is the first block
            // add item to graphicsScene:
            parent->addItem(Tlblock3);
        }

// // // // Top Left column 4 conner:
        BLOCK *Tl4block1 = new BLOCK;
        Tl4block1->setRect(0,0,50,50);
        Tl4block1->setPos(600,350);
        parent->addItem(Tl4block1);

     // Down Left column 1 conner:
  i = 0;
  j = 0;
        for ( i = 0; i < 4; i++) {
            j += 50;
            BLOCK *dlblock1 = new BLOCK;
            dlblock1->setRect(0,0,width,height);
            dlblock1->setPos(450,400+j);
            // add item to graphicsScene:
            parent->addItem(dlblock1);
        }

  // // Down Left column 2 conner:
  i = 0;
  j = 0;
        for ( i = 0; i < 3; i++) {
            j += 50;
            BLOCK *dlblock2 = new BLOCK;
            dlblock2->setRect(0,0,width,height);
            dlblock2->setPos(500,400+j);
            // add item to graphicsScene:
            parent->addItem(dlblock2);
        }

  // // // Down Left column 3 conner:
  i = 0;
  j = 0;
        for ( i = 0; i < 2; i++) {
            j += 50;
            BLOCK *dlblock3 = new BLOCK;
            dlblock3->setRect(0,0,width,height);
            dlblock3->setPos(550,400+j);
            // add item to graphicsScene:
            parent->addItem(dlblock3);
        }

  // // // // Down Left column 4 conner:
        BLOCK *dl4block1 = new BLOCK;
        dl4block1->setRect(0,0,50,50);
        dl4block1->setPos(600,450);
        parent->addItem(dl4block1);
}


int BLOCK::player = 0;
int BLOCK::count = -1;
float BLOCK::Store_coordinatex[50];
float BLOCK::Store_coordinatey[50];
int BLOCK::i;
int BLOCK::Time_of_store = 0;
int BLOCK::notTrue = 0;

int BLOCK::count1 = -1;
float BLOCK::Store_vcoordinatex[50];
float BLOCK::Store_vcoordinatey[50];
int BLOCK::i1;
int BLOCK::Time_of_store1 = 0;
int BLOCK::notTrue1 = 0;

void BLOCK::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    x = event->lastScenePos().x();
    y = event->lastScenePos().y();
    generator(x,y);
    // draw player line when the player press:


        if ( x%50 > 5 && x%50 < 45 && ( y%50 <= 3 || (y%50 >= 47 && y%50 <= 49 ) ))
        {// horizontal condition:
                    x1 = x - (x%50) ;
                    x2 = x -(x%50) + 50 ;
                    if (y%50 <= 3)
                    {
                        y2 = y1 = y - y%50;
                    }
                    else if (y%50 >= 47 && y%50 <= 49)
                    {
                        y2 = y1 = 50 - y%50 + y;
                    }
                    count += 1;
                    median_of_x = (x1+x2)/2;
                    if (count == 0){
                        Store_coordinatex[0] = median_of_x;
                        Store_coordinatey[0] = y1; // y1 == y2
                        Time_of_store += 1;
                        qDebug()<< median_of_x << y1;
                        player = ( player + 1 ) % 2 ;
                        playerline *pline = new playerline;
                        pline->Set_Player_Line(x1,y1,x2,y2,player);
                        scene()->addItem(pline);
                    }
                    else {
                        int Time = Time_of_store;
                        qDebug()<< Store_coordinatex[0];
                        qDebug()<< Store_coordinatey[0];
                        qDebug()<< count;
                        qDebug()<< Time;
                        for (i = 0; i < Time; i++){
                            qDebug()<< "HEllo";
                            if (median_of_x == Store_coordinatex[i] && y1 == Store_coordinatey[i]){
                               qDebug()<<"can't draw twice on the same single line";\


                            }
                            else {
                                notTrue += 1;
                                qDebug()<<"I'm here.";
                                qDebug()<<notTrue;
                            }
                        }
                        if (notTrue == Time)  {
                            qDebug()<<"i = "<<i;
                                Store_coordinatex[i] = median_of_x;
                                Store_coordinatey[i] = y1;
                                Time_of_store += 1;
                                qDebug()<< median_of_x << y1;
                                player = ( player + 1 ) % 2 ;
                                playerline *pline = new playerline;
                                pline->Set_Player_Line(x1,y1,x2,y2,player);
                                scene()->addItem(pline);
                                notTrue = 0;
                                qDebug()<< "Time of store = "<<Time_of_store;
                        }
                        else {
                            notTrue = 0;
                        }

                }
        }
        else if (y%50 > 5 && y%50 < 45 && (x%50 <= 3 || (x%50 >= 47 && x%50 <= 49)))
                {
                    y1 = y - y%50 ;
                    y2 = y - (y%50) + 50 ;
                    if (x%50 <= 3)
                    {
                       x2 = x1 = x - x%50;
                    }
                    else if (x%50 >= 47 && x%50 <= 49)
                    {
                       x2 = x1 = 50 - x%50 + x;
                    }
                    count1 += 1;
                    median_of_y = (y1+y2)/2;
                    if (count1 == 0){
                        Store_vcoordinatex[0] = x1;
                        Store_vcoordinatey[0] = median_of_y; // x1 == x2
                        Time_of_store1 += 1;
                        qDebug()<< median_of_y << x1;
                        player = ( player + 1 ) % 2 ;
                        playerline *pline = new playerline;
                        pline->Set_Player_Line(x1,y1,x2,y2,player);
                        scene()->addItem(pline);
                    }
                    else {
                        int Time1 = Time_of_store1;
                        qDebug()<< Store_vcoordinatex[0];
                        qDebug()<< Store_vcoordinatey[0];
                        qDebug()<< count1;
                        qDebug()<< Time1;
                        for (i1 = 0; i1 < Time1; i1++){
                            qDebug()<< "HEllo";
                            if (median_of_y == Store_vcoordinatey[i] && x1 == Store_vcoordinatex[i]){
                               qDebug()<<"can't draw twice on the same single line";\


                            }
                            else {
                                notTrue1 += 1;
                                qDebug()<<"I'm here.";
                                qDebug()<<notTrue1;
                            }
                        }
                        if (notTrue1 == Time1)  {
                            qDebug()<<"i1 = "<<i1;
                                Store_vcoordinatex[i] = x1;
                                Store_vcoordinatey[i] = median_of_y;
                                Time_of_store1 += 1;
                                qDebug()<< median_of_y << x1;
                                player = ( player + 1 ) % 2 ;
                                playerline *pline = new playerline;
                                pline->Set_Player_Line(x1,y1,x2,y2,player);
                                scene()->addItem(pline);
                                notTrue = 0;
                                qDebug()<< "Time of store1 = "<<Time_of_store1;
                        }
                        else {
                            notTrue1 = 0;
                        }

                }
                // determine player one turn or player 2 turn:
                // player = ( player + 1 ) % 2 ;
                // playerline *pline = new playerline;
                // pline->Set_Player_Line(x1,y1,x2,y2,player);
                // scene()->addItem(pline);
                }

}
