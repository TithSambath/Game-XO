#ifndef GAME_H
#define GAME_H

#include <QMainWindow>

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


    void on_Solo_Button_clicked();

    void on_Dual_button_clicked();

private:
    Ui::Game *ui;
};

#endif // GAME_H
