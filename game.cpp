#include "game.h"
#include "ui_game.h"
#include "block.h"
#include "border.h"
#include "playerline.h"

Game::Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Game)
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
          ui->view->setScene(Scene);
          ui->view->setFixedSize(16777215,850);
    // remove scrollbars:
          ui->view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
          ui->view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // Create Border area:
          BORDER *border = new BORDER;
          border->Create_Border(Scene);

          //ui->Solo_Button->setStyleSheet("image: url(:/16_Player_Match_game_competition-512.png)");

}

Game::~Game()
{
    delete ui;
}

// game.ui part:

void Game::on_PLAY_BUTTON_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->Background->setStyleSheet("border-image: url(:/interface background.jpg)");
}

void Game::on_Solo_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->Background->setStyleSheet("background-image: White");
}


void Game::on_Dual_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->Background->setStyleSheet("border-image: url(:/inside play.jpg)");
}
