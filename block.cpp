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

win BLOCK :: Generator ;


void BLOCK::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    x = event->lastScenePos().x();
    y = event->lastScenePos().y();
    int median;
    bool manager , drawing = true;
    median = Generator.generator(x,y);
    manager = Generator.storageManagement(median) ;
    drawing = Generator.storageFunc(manager , median );
    drawingFunc(drawing , x , y);

}

void BLOCK::drawingFunc(bool drawing, int x, int y)
{
    if(drawing)
    {

    if ( x%50 > 10 && x%50 < 40 && ( y%50 <= 5 || (y%50 >= 45 && y%50 <= 49 ) ))
    {// horizontal condition:
                x1 = x - (x%50) ;
                x2 = x -(x%50) + 50 ;
                if (y%50 <= 5)
                {
                    y2 = y1 = y - y%50;
                }
                else if (y%50 >= 45 && y%50 <= 49)
                {
                    y2 = y1 = 50 - y%50 + y;
                }



     }
    else if (y%50 > 10 && y%50 < 40 && (x%50 <= 5 || (x%50 >= 45 && x%50 <= 49)))
            {
                y1 = y - y%50 ;
                y2 = y - (y%50) + 50 ;
                if (x%50 <= 5)
                {
                   x2 = x1 = x - x%50;
                }
                else if (x%50 >= 45 && x%50 <= 49)
                {
                   x2 = x1 = 50 - x%50 + x;
                }

             }
               player = ( player + 1 ) % 2 ;
               playerline *pline = new playerline;
               pline->Set_Player_Line(x1,y1,x2,y2,player);
               scene()->addItem(pline);
    }

}

