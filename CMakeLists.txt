cmake_minimum_required(VERSION 3.16)

project(QtFM)

# Especificar el estándar de C++
set(CMAKE_CXX_STANDARD 11)

# Buscar los módulos de Qt 6
find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

# Crear el ejecutable
add_executable(QtFM src/main.cpp src/mainwindow.cpp)

# Vincular las bibliotecas de Qt 6
target_link_libraries(QtFM Qt6::Core Qt6::Gui Qt6::Widgets)

# Activar las opciones de MOC, UIC y RCC
set_target_properties(QtFM PROPERTIES
    AUTOMOC ON
    AUTOUIC ON
    AUTORCC ON
)

# Definir la instalación
install(TARGETS QtFM
    RUNTIME DESTINATION bin
)

# También puedes agregar instalación para otros archivos si es necesario, como los recursos, configuraciones, etc.
# Por ejemplo, para instalar archivos QML (si los tienes):
# install(DIRECTORY qml/ DESTINATION share/QtFM/qml)

# Para asegurarte de que se instalen los archivos CMake correctamente:
install(FILES CMakeLists.txt DESTINATION share/QtFM)
