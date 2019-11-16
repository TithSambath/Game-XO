#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include "block.h"
#include "border.h"

namespace Ui {
class Game;
}

class Game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

private slots:
    void on_PLAY_BUTTON_3_clicked();

    void on_pushButton_clicked();

    void on_option_button_clicked();

    void on_pushButton_2_clicked();

    void on_back_button_clicked();

    void on_horizontalSlider_sliderMoved(int position);

private:
    Ui::Game *ui;
    QGraphicsScene *Scene = new QGraphicsScene;
    BLOCK *block = new BLOCK;
    BORDER *border = new BORDER;
};

#endif // GAME_H
