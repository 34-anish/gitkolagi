#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void question_creator();
    void question_creator1();
    void question_creator2();
    void question_creator3();
    bool answer_checkor();
    //void answer_checkor(QString);
    QString q[10];
       char a[10];
        QString opt;
        int i;
        int level=0;
    ~MainWindow();

private slots:
        void on_pushButton_ok_clicked();

private:
    Ui::MainWindow *ui;
    bool t;
};
#endif // MAINWINDOW_H
