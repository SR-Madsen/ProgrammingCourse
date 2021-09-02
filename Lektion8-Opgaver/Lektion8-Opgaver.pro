TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    shape.cpp \
    circle.cpp \
    rectangle.cpp \
    triangle.cpp \
    arrayint.cpp

HEADERS += \
    shape.h \
    circle.h \
    rectangle.h \
    triangle.h \
    arrayint.h
