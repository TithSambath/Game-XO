#ifndef THEWINNER_H
#define THEWINNER_H

#include <QDialog>

namespace Ui {
class TheWinner;
}

class TheWinner : public QDialog
{
    Q_OBJECT

public:
    explicit TheWinner(QWidget *parent = nullptr);
    ~TheWinner();
    void setscore(int PlayerScore);
    void GenerateWinner (int ScorePlayer2, int ScorePlayer1);

signals:
    void backtoHome();
    void Reset();

public slots:


    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::TheWinner *ui;
};

#endif // THEWINNER_H
