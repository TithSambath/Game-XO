#include "block.h"
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include "playerline.h"
#include <QGraphicsScene>
#include <QPen>
#include <QGraphicsView>
#include <border.h>
#include "win.h"
#include <QLabel>
#include <QPixmap>
#include "playersymbol.h"

BLOCK::BLOCK()
{

}
void BLOCK::Create_Board(QGraphicsScene *parent)
{
    int width = 50;
    int height = 50;
    QThread delay;
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
        //dfadfdsfasdfdsfadsfdfdfsad
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
int BLOCK::playerScore_1 = 0;
int BLOCK::playerScore_2 = 0;

win BLOCK :: Generator ;


void BLOCK::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    // Drawing sound:
       drawingSound = new QMediaPlayer;
       drawingSound->setMedia(QUrl("qrc:/Sound EFFECT/Game Sound/drawing line.wav"));
       drawingSound->play();
    x = event->lastScenePos().x();
    y = event->lastScenePos().y();
    int median;
    bool manager , drawing = true;
    median = Generator.generator(x,y);
    manager = Generator.storageManager(median) ;
    drawing = Generator.storageFunc(manager , median );
    drawingFunc(drawing , x , y);


}
/*
int BLOCK::midPoint[61] =  {42504250,47504250,52504250,57504250,62504250,67504250,42504750,42505250,
                            42505750,42506250,42506750,42503750,42503250,42502750,42502250,42501750,
                            37504250,32504250,27504250,22504250,17504250,37503750,37503250,37502750,
                            37502250,32503750,32503250,32502750,27503750,27503250,22503750,37504750,
                            37505250,37505750,37506250,32504750,32505250,32505750,27504750,27505250,
                            22504750,47503750,47503250,47502750,47502250,52503750,52503250,52502750,
                            57503750,57503250,62503750,47504750,47505250,47505750,47506250,52504750,
                            52505250,52505750,57504750,57505250,57505750
                       };
                       */
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
     ///////////////////////////////////////////////////////////////////////////////
     // get median:

                int Median = Generator.generator(x,y);
                qDebug()<<Median;

                int seperate = Median % 10000;
                int seperatex = (Median - seperate);
                int Median1;
                int Median2;
                //seperate = seperate / 10; // we get y coordinate.
                Median1 = seperatex + (seperate + 25);
                Median2 = seperatex + (seperate - 25);
                Generator.completeSquareChecking(Median1,Median2);
                //win *getmidPoint = new win();
    //////////////////////////////////////////////////////////////////////////////
                //qDebug()<<midPoint[j];



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
 //////////////////////////////////////////////////////////////////////////////
                int Median = Generator.generator(x,y);
                int seperatey = Median % 10000;
                int seperatex = (Median - seperatey)/10000;
                int Median1;
                int Median2;
                //seperate = seperate / 10; // we get y coordinate.
                Median1 = seperatey + (seperatex + 25)*10000;
                Median2 = seperatey + (seperatex - 25)*10000;
               Generator.completeSquareChecking(Median1,Median2);
//////////////////////////////////////////////////////////////////////////////
               // qDebug()<<midPoint[j];
             }

                int before_P1score = playerScore_1;
                int before_P2score = playerScore_2;
               player = ( player + 1 ) % 2 ;
               switch (player) {
               case 0:{
                   playerScore_1 += Generator.getPoint();
                   qDebug()<<"Get point = "<<Generator.getPoint();
                   int pos_x = 0;
                   int pos_y = 0;
                   ///////////////////////////////////////////////
                   if (Generator.getPoint() == 1){
                       qDebug()<<"GREEN";
                       qDebug()<<scene();
                       midpointOFBlock1 = Generator.getMidPoint1();
                       midpointOFBlock2 = Generator.getMidPoint2();
                       qDebug()<<"Mid point of complete block 1 = "<<midpointOFBlock1;
                       qDebug()<<"Mid point of complete block 2 = "<<midpointOFBlock2;
                       if (midpointOFBlock1 != 0){
                          pos_x = (midpointOFBlock1 / 10000) - 20;
                          pos_y = (midpointOFBlock1 % 10000) - 20;
                          //QGraphicsScene *s = new QGraphicsScene;
                          PlayerSymbol *Player_O = new PlayerSymbol();
                          Player_O->player_O(scene(),pos_x,pos_y);
                       }else if (midpointOFBlock2 != 0) {
                           qDebug()<<"Hello";
                           pos_x = (midpointOFBlock2 / 10000) - 20;
                           pos_y = (midpointOFBlock2 % 10000) - 20;
                           qDebug()<<pos_x;
                           qDebug()<<pos_y;
                           PlayerSymbol *Player_O = new PlayerSymbol();
                           Player_O->player_O(scene(),pos_x,pos_y);
                       }
                       ///////////////////////////////////////////////////////////////

                       ///////////////////////////////////////////////////////////////
                   }else if (Generator.getPoint() == 2) {
                       int i = 0;
                       midpointOFBlock1 = Generator.getMidPoint1();
                       midpointOFBlock2 = Generator.getMidPoint2();
                       qDebug()<<"Mid point of complete block 1 = "<<midpointOFBlock1;
                       qDebug()<<"Mid point of complete block 2 = "<<midpointOFBlock2;
                       while (i < 1) {
                         qDebug()<<"GREEN";
                         //////////////////////
                         pos_x = (midpointOFBlock1 / 10000) - 20;
                         pos_y = (midpointOFBlock1 % 10000) - 20;
                         PlayerSymbol *Player_O = new PlayerSymbol();
                         Player_O->player_O(scene(),pos_x,pos_y);
                         /*****************************************/
                         pos_x = (midpointOFBlock2 / 10000) - 20;
                         pos_y = (midpointOFBlock2 % 10000) - 20;
                         PlayerSymbol *Player_O1 = new PlayerSymbol();
                         Player_O1->player_O(scene(),pos_x,pos_y);
                         //////////////////////
                         i++;
                       }
                   }
                   ///////////////////////////////////////////////
                   break;
               }
               case 1:
               {
                   playerScore_2 += Generator.getPoint();
                   qDebug()<<"Get point = "<<Generator.getPoint();
                   int pos_x = 0;
                   int pos_y = 0;
                   ///////////////////////////////////////////////
                   if (Generator.getPoint() == 1){
                       qDebug()<<"BLUE";
                       int midpointOFBlock1 = Generator.getMidPoint1();
                       int midpointOFBlock2 = Generator.getMidPoint2();
                       qDebug()<<"Mid point of complete block 1 = "<<midpointOFBlock1;
                       qDebug()<<"Mid point of complete block 2 = "<<midpointOFBlock2;
                       if (midpointOFBlock1 != 0){
                          pos_x = (midpointOFBlock1 / 10000) - 20;
                          pos_y = (midpointOFBlock1 % 10000) - 20;
                          PlayerSymbol *Player_X = new PlayerSymbol();
                          Player_X->player_X(scene(),pos_x,pos_y);
                       }else if (midpointOFBlock2 != 0) {
                           qDebug()<<"Hello";
                           pos_x = (midpointOFBlock2 / 10000) - 20;
                           pos_y = (midpointOFBlock2 % 10000) - 20;
                           qDebug()<<pos_x;
                           qDebug()<<pos_y;
                           PlayerSymbol *Player_X = new PlayerSymbol();
                           Player_X->player_X(scene(),pos_x,pos_y);
                       }
                   }else if (Generator.getPoint() == 2) {
                       int i = 0;
                       int midpointOFBlock1 = Generator.getMidPoint1();
                       int midpointOFBlock2 = Generator.getMidPoint2();
                       qDebug()<<"Mid point of complete block 1 = "<<midpointOFBlock1;
                       qDebug()<<"Mid point of complete block 2 = "<<midpointOFBlock2;
                       while (i < 2) {
                         qDebug()<<"BLUE";
                         //////////////////////
                         pos_x = (midpointOFBlock1 / 10000) - 20;
                         pos_y = (midpointOFBlock1 % 10000) - 20;
                         PlayerSymbol *Player_X = new PlayerSymbol();
                         Player_X->player_X(scene(),pos_x,pos_y);
                         /*****************************************/
                         pos_x = (midpointOFBlock2 / 10000) - 20;
                         pos_y = (midpointOFBlock2 % 10000) - 20;
                         PlayerSymbol *Player_X1 = new PlayerSymbol();
                         Player_X1->player_X(scene(),pos_x,pos_y);
                         /////////////////////
                         i++;
                       }
                   }
                   ///////////////////////////////////////////////
                   break;
               }
           }
               playerline *pline = new playerline;
               pline->Set_Player_Line(x1,y1,x2,y2,player);
               scene()->addItem(pline);
               if (before_P1score != playerScore_1)
               {
                   player = 1;
               }
               else if(before_P2score != playerScore_2)
               {
                   player = 0;
               }
    }

    qDebug() << "score player 1:" << playerScore_1;
    qDebug() << "score player 2:" << playerScore_2;

}

void BLOCK::reset()
{
    player = 0;
    playerScore_1 = 0;
    playerScore_2 = 0;
    Generator.initailize();
}



