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
    // Constructor
    explicit MainWindow(QWidget *parent = nullptr);
    
    // Destructor
    ~MainWindow();

private slots:
    // Slot para manejar la acción de refrescar la vista de archivos
    void onRefreshButtonClicked();

private:
    // Miembros para la vista de árbol de archivos, el modelo de sistema de archivos y los controles
    QTreeView *treeView;
    QFileSystemModel *fileSystemModel;
    QLineEdit *pathLineEdit;
    QPushButton *refreshButton;
};

#endif // MAINWINDOW_H
