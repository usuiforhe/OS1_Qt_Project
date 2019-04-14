#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "info_manager.h"
#include <QTimer>

#include "QFile"
#include "qdebug.h"
#include "QDir"
#include "QGridLayout"
#include "QLabel"
#include "QLayoutItem"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void update_Use_Persend();
    void update_Change_Wid();

private:
    QTimer *update_use;
    QTimer * Change_wid;
    Info_Manager *info_Manager;
    Ui::MainWindow *ui;
    QGridLayout * pLayout;
};

#endif // MAINWINDOW_H
