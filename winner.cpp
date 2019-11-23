#include "winner.h"
#include "ui_winner.h"

Winner::Winner(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Winner)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint); // remove title bar.
}

Winner::~Winner()
{
    delete ui;
}

void Winner::setscore(int PlayerScore)
{
    ui->label->setNum(PlayerScore);
}

void Winner::GenerateWinner(int ScorePlayer2, int ScorePlayer1)
{
    if (ScorePlayer1 > ScorePlayer2){
        setscore(ScorePlayer1);
    }else {
        setscore(ScorePlayer2);
    }
}
