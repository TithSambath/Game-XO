#include "interface.h"
#include "ui_interface.h"
#include <QGraphicsRectItem>
#include "game.h"
#include "block.h"
#include "border.h"
#include "playerline.h"
#include <QPushButton>
#include <QStyle>
interface::interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::interface)
{
    ui->setupUi(this);
    // create block:
       //Create GraphicsScene and item to scene:
          QGraphicsScene *Scene = new QGraphicsScene;
          Scene->setSceneRect(0,50,850,850);// set size and coordinate of scene

       //Create Collect Block from :
          BLOCK *block = new BLOCK;
          block->Create_Board(Scene);

    // create GraphicsView:
          ui->graphicsView->setScene(Scene);
          ui->graphicsView->setFixedSize(16777215,850);
          //QGraphicsView *view = new QGraphicsView;
          //view->setScene(Scene);
          //view->setFixedSize(850,850);
          //view->show();

    // remove scrollbars:
          ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
          ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // Create Border area:
          BORDER *border = new BORDER;
          border->Create_Border(Scene);


}
interface::~interface()
{
    delete ui;
}
// button event:
void interface::on_PLAY_BUTTON_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
