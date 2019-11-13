#ifndef WIN_H
#define WIN_H
#include <QList>
class win
{
public:
    win();
    int generator (int x , int y);
    bool storageManager(int median);
    int storageFunc(bool manager , int median );

    //static int midPoint[60];
    void completeSquareChecking(int midpoint1 , int midpoint2);

private:
     int *border =   new int[44] {4250150 , 4500175 , 4750200 , 5000225 , 5250250 , 5500275 , 5750300 , 6000325 , 6250350 , 6500375
                       , 6750400 , 7000425 , 6750450 , 6500475 , 6250500 , 6000525 , 5750550 , 5500575 , 5250600 , 5000625
                       , 4750650 , 4500675 , 4250700 , 4000675 , 3750650 , 3500625 , 3250600 , 3000575 , 2750550 , 2500525
                       , 2250500 , 2000475 , 1750450 , 1500425 , 1750400 , 2000375 , 2250350 , 2500325 , 2750300 , 3000275
                       , 3250250 , 3500225 , 3750200 , 4000175
                      };
     int *midPoint = new int[61] {42504250,47504250,52504250,57504250,62504250,67504250,42504750,42505250,
                                  42505750,42506250,42506750,42503750,42503250,42502750,42502250,42501750,
                                  37504250,32504250,27504250,22504250,17504250,37503750,37503250,37502750,
                                  37502250,32503750,32503250,32502750,27503750,27503250,22503750,37504750,
                                  37505250,37505750,37506250,32504750,32505250,32505750,27504750,27505250,
                                  22504750,47503750,47503250,47502750,47502250,52503750,52503250,52502750,
                                  57503750,57503250,62503750,47504750,47505250,47505750,47506250,52504750,
                                  52505250,52505750,57504750,57505250,62504750
                                    };

    static QList <int> middlePoint;
    static QList <int> storage;
    //static int n;

    static int player;
};

#endif // WIN_H
