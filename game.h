#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include "block.h"
#include "border.h"
#include <QMediaPlayer>
#include "thewinner.h"

namespace Ui {
class Game;
}

class Game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();
    TheWinner Findwinner;


private slots:
    void on_PLAY_BUTTON_3_clicked();

    void on_reset_clicked();

    void on_option_button_clicked();

    void on_back_button_clicked();

    //void on_horizontalSlider_sliderMoved(int position);

    void on_HomeButton_clicked();

    void on_Music_Pause_clicked();

    void display();


    void on_Sound_Pause_clicked();

private:
    Ui::Game *ui;
    QTimer *time ;
    QCursor pen_Blue = QCursor(QPixmap(":/Layer 0.png"),0,45);
    QCursor pen_Red = QCursor(QPixmap(":/red pencil.png"),0,45);
    QCursor click = QCursor(QPixmap(":/curcor.png"),0,0);
    QGraphicsScene *Scene = new QGraphicsScene;
    TheWinner *winnerDialog = new TheWinner;
    BLOCK *block;
    BORDER *border = new BORDER;
    QMediaPlayer *GameSound;
    QMediaPlayer *MouseClickSound;
    QMediaPlayer *WinningSound;
    int Pause_Music = 1;
    int Pause_Sound = 1;
    void DisplaytheWinner();
};

#endif // GAME_H
