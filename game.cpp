#include "game.h"
#include "ui_game.h"
#include <QtMultimedia/QMediaPlayer>

Game::Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Game)
{

    ui->setupUi(this);
    //Create GraphicsScene and item to scene:
          Scene->setSceneRect(0,100,850,850);// set size and coordinate of scene
    // draw block and its border:

    // create GraphicsView:
          ui->view->setScene(Scene);
          ui->view->setFixedSize(850,850);
    // remove scrollbars:
          ui->view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
          ui->view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // Play game sound
          GameSound = new QMediaPlayer(this);
          GameSound->setMedia(QUrl("qrc:/Sound EFFECT/Game Sound/Intro game.mp3"));
          GameSound->play();
    // Change cursor pixmap:
          QCursor pen = QCursor(QPixmap(":/Layer 0.png"),0,45);
          QCursor click = QCursor(QPixmap(":/curcor.png"),0,0);
          ui->view->setCursor(pen);
          ui->stackedWidget->setCursor(click);
          ui->PLAY_BUTTON_3->setCursor(click);
}

Game::~Game()
{
    delete ui;
}

// Ui.game code:

void Game::on_PLAY_BUTTON_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    block->Create_Board(Scene);
    border->Create_Border(Scene);
    GameSound->stop();
}

void Game::on_reset_clicked()// reset button
{
    Scene->clear();
    block->Create_Board(Scene);
    border->Create_Border(Scene);
}
void Game::on_option_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    border->Create_Border(Scene);
    block->Create_Board(Scene);
}

void Game::on_back_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Game::on_HomeButton_clicked()
{
    Scene->clear();
    block->reset();
    ui->stackedWidget->setCurrentIndex(0);
}

void Game::on_Music_Pause_clicked()
{
    Pause_Music += 1;
    if (Pause_Music % 2 == 0){
        GameSound->stop();
        ui->Music_Pause->setStyleSheet("border-image: url(:/check Boxs.png);");
    }else {
        GameSound->play();
        ui->Music_Pause->setStyleSheet("border-image: url(:/complete check.png);");
    }
}

