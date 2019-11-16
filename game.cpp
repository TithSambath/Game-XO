#include "game.h"
#include "ui_game.h"

Game::Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
    //Create GraphicsScene and item to scene:
          Scene->setSceneRect(0,50,850,850);// set size and coordinate of scene
    // draw block and its border:
          block->Create_Board(Scene);
          border->Create_Border(Scene);
    // create GraphicsView:
          ui->view->setScene(Scene);
          ui->view->setFixedSize(850,850);
    // remove scrollbars:
          ui->view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
          ui->view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

Game::~Game()
{
    delete ui;
}

// game.ui part:

void Game::on_PLAY_BUTTON_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}



void Game::on_pushButton_clicked()// reset button
{
    Scene->clear();
    block->Create_Board(Scene);
    border->Create_Border(Scene);
    block->reset();
}

void Game::on_option_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->Background->setStyleSheet("border-image: url(:/tee.png)");
}


void Game::on_back_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->Background->setStyleSheet("border-image: url(:/backgroung1.png)");
}
/*
void Game::on_horizontalSlider_sliderMoved(int position)
{

}
*/

