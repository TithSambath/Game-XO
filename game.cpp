#include "game.h"
#include "ui_game.h"
#include <QtMultimedia/QMediaPlayer>
#include <QtCore>
Game::Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Game)

{

    ui->setupUi(this);
    time = new QTimer(this);
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
    // Winning sound effect
          WinningSound = new QMediaPlayer;
          WinningSound->setMedia(QUrl("qrc:/Sound EFFECT/Game Sound/winning sound.mp3"));
    // Change cursor pixmap:
          connect(time,SIGNAL(timeout()),this,SLOT(display()));
          time->start(100);  
          ui->stackedWidget->setCursor(click);
          ui->PLAY_BUTTON_3->setCursor(click);

       block = new BLOCK;
       //connect(block,&BLOCK::signalDisplay,this,&Game::display);
       //block->signalDisplay();
       connect(&Findwinner,&TheWinner::backtoHome,this,&Game::on_HomeButton_clicked);
       connect(&Findwinner,&TheWinner::Reset,this,&Game::on_reset_clicked);
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
    time->start(100);
}

void Game::on_reset_clicked()// reset button
{
    Scene->clear();
    block->reset();
    block->Create_Board(Scene);
    border->Create_Border(Scene);
    ui->label_4->setNum(block->getPlayerScore_2());
    ui->label_8->setNum(block->getPlayerScore_1());
    time->start(100);
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
    Scene->clear();
    time->stop();
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

void Game::display()
{
    ui->label_4->setNum(block->getPlayerScore_2());
    ui->label_8->setNum(block->getPlayerScore_1());
    switch (block->getPlayer()) {
        case 0:
        ui->view->setCursor(pen_Blue);
        break;
        case 1:
        ui->view->setCursor(pen_Red);
        break;

    }
    DisplaytheWinner();
}

void Game::DisplaytheWinner()
{
    if (block->getPlayerScore_1() + block->getPlayerScore_2() == 61){
        Findwinner.GenerateWinner(block->getPlayerScore_2(),block->getPlayerScore_1());
        Findwinner.setModal(true);
        WinningSound->play();
        Findwinner.exec();
        time->stop();
        Game::on_reset_clicked();
    }
}


