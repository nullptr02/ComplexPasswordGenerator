//
// Created by Michael on 2022-10-31.
//

#ifndef COMPLEXPASSWORDGENERATOR_MAINWINDOW_H
#define COMPLEXPASSWORDGENERATOR_MAINWINDOW_H
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private
    slots:
            void generate();

    void copy();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

#endif //COMPLEXPASSWORDGENERATOR_MAINWINDOW_H
