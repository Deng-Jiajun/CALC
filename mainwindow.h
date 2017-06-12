#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include"instructions.h"
#include<QMessageBox>
class Instructions;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_point_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_subtract_clicked();

    void on_pushButton_multiply_clicked();

    void on_pushButton_divide_clicked();

    void on_pushButton_leftbracket_clicked();

    void on_pushButton_rightbracket_clicked();

    void on_pushButton_backspace_clicked();

    void on_pushButton_allclear_clicked();

    void on_action_2_triggered();

    void on_action_triggered();

    void on_action_3_triggered();

private:
    Ui::MainWindow *ui;
    QString expression;
    int CalculateMode=1;//1:标准 2:大数
protected:
};

#endif // MAINWINDOW_H
