#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w; // Creación de la instancia de MainWindow
    w.show(); // Mostrar la ventana
    return a.exec(); // Ejecutar la aplicación
}
