#include "win.h"
#include <QDebug>
win::win()
{
    for (int i = 0 ; i < 44 ; i++) {
        storage.append(border[i]);
    }
    delete[] border;
}

QList<int> win :: storage;

QList<int> win :: middlePoint;

  /*int win :: border[44] = {4250150 , 4500175 , 4750200 , 5000225 , 5250250 , 5500275 , 5750300 , 6000325 , 6250350 , 6500375
                          , 6750400 , 7000425 , 6750450 , 6500475 , 6250500 , 6000525 , 5750550 , 5500575 , 5250600 , 5000625
                          , 4750650 , 4500675 , 4250700 , 4000675 , 3750650 , 3500625 , 3250600 , 3000575 , 2750550 , 2500525
                          , 2250500 , 2000475 , 1750450 , 1500425 , 1750400 , 2000375 , 2250350 , 2500325 , 2750300 , 3000275
                          , 3250250 , 3500225 , 3750200 , 4000175
                         };*/

int win::generator(int x, int y)
{
    int median = NULL ;
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
    qDebug() << "median = " << median;
    return median;
}

bool win::storageManagement(int median)
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
    qDebug() << "manager = " << manager;
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
    qDebug() << "drawing = " << drawing ;
    return  drawing;
}





