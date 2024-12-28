#include "mainwindow.h"
#include <QApplication>
#include <QHeaderView>
#include <QVBoxLayout>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), treeView(new QTreeView(this)), fileSystemModel(new QFileSystemModel(this)), 
      pathLineEdit(new QLineEdit(this)) {

    // Configurar el QFileSystemModel
    fileSystemModel->setRootPath(QDir::rootPath());
    fileSystemModel->setFilter(QDir::NoDotAndDotDot | QDir::AllEntries);

    // Configurar la vista de árbol
    treeView->setModel(fileSystemModel);
    treeView->setRootIndex(fileSystemModel->index(QDir::rootPath()));
    treeView->header()->setSectionResizeMode(0, QHeaderView::ResizeToContents); // Cambiado para Qt6

    // Conectar señales
    connect(treeView, &QTreeView::clicked, this, [this](const QModelIndex &index) {
        QString path = fileSystemModel->filePath(index);
        pathLineEdit->setText(path);
    });

    // Configurar el diseño
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(pathLineEdit);
    layout->addWidget(treeView);

    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    // Título de la ventana
    setWindowTitle("QtFM - Simple File Manager");
}

// Definición del destructor
MainWindow::~MainWindow() {
    // Aquí puedes liberar recursos si es necesario
}
