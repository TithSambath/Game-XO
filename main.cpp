#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include "block.h"
#include "playerline.h"
#include "border.h"
#include "game.h"
#include "interface.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Game GameProcess;
    GameProcess.showMaximized();



    return a.exec();
}
