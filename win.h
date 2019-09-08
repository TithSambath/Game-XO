#ifndef WIN_H
#define WIN_H


class win
{
public:
    win();
    int generator (int x , int y);
    bool storageManagement(int median);
    int storageFunc(bool manager , int median );
private:
    static int storage[100];
    static int n;
    static int player;
};

#endif // WIN_H
