#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeView>
#include <QFileSystemModel>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow(); // Declaración del destructor

private:
    QTreeView *treeView;
    QFileSystemModel *fileSystemModel;
    QLineEdit *pathLineEdit;
    QPushButton *refreshButton;
};

#endif // MAINWINDOW_H
