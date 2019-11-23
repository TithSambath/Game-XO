#ifndef WINNER_H
#define WINNER_H

#include <QWidget>
namespace Ui {
class Winner;
}

class Winner : public QWidget
{
    Q_OBJECT

public:
    explicit Winner(QWidget *parent = nullptr);
    ~Winner();
    void setscore(int PlayerScore);
    void GenerateWinner (int ScorePlayer2, int ScorePlayer1);
private:
    Ui::Winner *ui;
};

#endif // WINNER_H
