#ifndef WIN_H
#define WIN_H
#include <QList>
class win
{
public:
    win();
    int generator (int x , int y);
    bool storageManagement(int median);
    int storageFunc(bool manager , int median );
private:
    static const int border[44];
    static QList <int> storage;
    //static int n;
    static int player;
};

#endif // WIN_H
