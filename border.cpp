#include "border.h"
#include "block.h"
#include <QPen>
#include <QGraphicsScene>
#include <QDebug>
BORDER::BORDER()
{

}

void BORDER::Create_Border(QGraphicsScene *Parent)
{
    int i;
    // create border area:
        int incrementlater = 0;
        int increment1 = 0;
        for (i = 0; i < 6; i++)
        {
          // Draw Top right line border:
            // Horizontal border:
            increment1 += 50;
            BORDER *HRight_line_border = new BORDER;
                HRight_line_border->setLine(400+incrementlater,100+increment1,400+increment1,100+increment1);
            QPen Pen_Hright_line_border;
                Pen_Hright_line_border.setWidth(3);
                Pen_Hright_line_border.setColor(Qt::darkRed);
                HRight_line_border->setPen(Pen_Hright_line_border);
            Parent->addItem(HRight_line_border);
            incrementlater += 50;
            //vertical border:
            BORDER *VRight_line_border = new BORDER;
                VRight_line_border->setLine(400+incrementlater,100+increment1,400+increment1,150+increment1);
            QPen Pen_Vright_line_border;
                Pen_Vright_line_border.setWidth(3);
                Pen_Vright_line_border.setColor(Qt::darkRed);
                VRight_line_border->setPen(Pen_Vright_line_border);
            Parent->addItem(VRight_line_border);

        }
        incrementlater = 0;
        increment1 = 0;
        i = 0;
        for (i = 0; i < 6; i++)
        {
          // Draw Down right line border:
            // Horizontal border:
            increment1 += 50;
            BORDER *HDRight_line_border = new BORDER;
                HDRight_line_border->setLine(400+incrementlater,750-increment1,400+increment1,750-increment1);
            QPen Pen_HDright_line_border;
                Pen_HDright_line_border.setWidth(3);
                Pen_HDright_line_border.setColor(Qt::darkRed);
                HDRight_line_border->setPen(Pen_HDright_line_border);
            Parent->addItem(HDRight_line_border);
            incrementlater += 50;
            //vertical border:
            if (i != 5)// do like this coz this vertical need to draw only five time but loop run too 6.
            {
                BORDER *VDRight_line_border = new BORDER;
                    VDRight_line_border->setLine(400+incrementlater,750-increment1,400+increment1,700-increment1);
                QPen Pen_VDright_line_border;
                    Pen_VDright_line_border.setWidth(3);
                    Pen_VDright_line_border.setColor(Qt::darkRed);
                    VDRight_line_border->setPen(Pen_VDright_line_border);
                Parent->addItem(VDRight_line_border);
            }
        }
        incrementlater = 0;
        increment1 = 0;
        i = 0;
        for (i = 0; i < 6; i++)
        {
          // Draw Top left line border:
            // Horizontal border:
            increment1 += 50;
            if (i != 0)
            {
                BORDER *HTL_line_border = new BORDER;
                    HTL_line_border->setLine(450-incrementlater,100+increment1,450-increment1,100+increment1);
                QPen Pen_HTL_line_border;
                    Pen_HTL_line_border.setWidth(3);
                    Pen_HTL_line_border.setColor(Qt::darkRed);
                    HTL_line_border->setPen(Pen_HTL_line_border);
                Parent->addItem(HTL_line_border);
            }
            incrementlater += 50;
            //vertical border:
            BORDER *VTL_line_border = new BORDER;
                VTL_line_border->setLine(450-incrementlater,100+increment1,450-increment1,150+increment1);
            QPen Pen_VTL_line_border;
                Pen_VTL_line_border.setWidth(3);
                Pen_VTL_line_border.setColor(Qt::darkRed);
                VTL_line_border->setPen(Pen_VTL_line_border);
           Parent->addItem(VTL_line_border);

        }
        incrementlater = 0;
        increment1 = 0;
        i = 0;
        for (i = 0; i < 5; i++)
        {
          // Draw Down left line border:
            // Horizontal border:
            increment1 += 50;
                BORDER *HDL_line_border = new BORDER;
                    HDL_line_border->setLine(150+incrementlater,400+increment1,150+increment1,400+increment1);
                QPen Pen_HDL_line_border;
                    Pen_HDL_line_border.setWidth(3);
                    Pen_HDL_line_border.setColor(Qt::darkRed);
                    HDL_line_border->setPen(Pen_HDL_line_border);
                Parent->addItem(HDL_line_border);
            incrementlater += 50;

            //vertical border:
            BORDER *VDL_line_border = new BORDER;
                VDL_line_border->setLine(150+incrementlater,400+increment1,150+increment1,450+increment1);
            QPen Pen_VDL_line_border;
                Pen_VDL_line_border.setWidth(3);
                Pen_VDL_line_border.setColor(Qt::darkRed);
                VDL_line_border->setPen(Pen_VDL_line_border);
            Parent->addItem(VDL_line_border);
        }
// check if user click on border or not:



}



