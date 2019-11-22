#include "win.h"
#include <QDebug>
win::win()
{
    initailize();
}

QList<int> win :: storage;

QList<int> win :: middlePoint;

int win::generator(int x, int y)
{
    int median = 0;
    if ( x%50 > 10 && x%50 < 40 && ( y%50 <= 5 || (y%50 >= 45 && y%50 <= 49 ) ))
            {// horizontal condition:
                x = x -(x%50) + 25 ;
                if (y%50 <= 5)
                {
                    y = y - y%50;
                }
                else if (y%50 >= 45 && y%50 <= 49)
                {
                    y = 50 - y%50 + y;
                }

                median =  x * 10000 + y ;
            }
    else if (y%50 > 10 && y%50 < 40 && (x%50 <= 5 || (x%50 >= 45 && x%50 <= 49)))
            {
                y = y - (y%50) + 25;
                if (x%50 <= 5)
                {
                   x = x - x%50;
                }
                else if (x%50 >= 45 && x%50 <= 49)
                {
                   x = 50 - x%50 + x;
                }
                median = x * 10000 + y ;
            }
    return median;
}

bool win::storageManager(int median)
{
    bool manager = false;

    if (median == 0)
    {
        return manager ;
    }
    else
    {
        for (int i = 0 ; i < storage.size() ; i++ )
        {
            if ( storage.at(i) == median )
            {
                manager = false;
                break;
            }
            else
            {
                manager = true;
            }
        }
    }
    return  manager;
}

int win::storageFunc(bool manager , int median)
{
    bool drawing = true;

    if( manager == true )
    {

       storage.append(median);
       drawing = true ;
    }
    else
    {
        drawing = false;
    }
    return  drawing;
}

void win::completeSquareChecking(int midpoint1, int midpoint2)
{
    point = 0;
    win::receiveMidPoint1 = 0;
    win::receiveMidPoint2 = 0;
    for (int i = 0; i < 61; i++)
    {
        if (midpoint1 == middlePoint.at(i)/10)
        {
               middlePoint[i] = middlePoint.at(i)+1;
               if (middlePoint.at(i) % 10 == 4){
                   point++;
                   receiveMidPoint1 = midpoint1;
               }
        }
        if (midpoint2 == middlePoint.at(i)/10)
        {
            middlePoint[i] = middlePoint.at(i)+1;
            if (middlePoint.at(i) % 10 == 4){
                point++;
                receiveMidPoint2 = midpoint2;
            }
        }

    }

}

void win::initailize()
{
    storage.clear();
    middlePoint.clear();
    for (int i = 0 ; i < 44 ; i++) {
        storage.append(border[i]);
    }
    for (int i = 0 ; i < 61 ; i++)
    {
        middlePoint.append(midPoint[i]);
    }
}

int win::getPoint() const
{
    return point;
}

int win::getMidPoint1()
{
    return receiveMidPoint1;
}

int win::getMidPoint2()
{
    return receiveMidPoint2;
}







