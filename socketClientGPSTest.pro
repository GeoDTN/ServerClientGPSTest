TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    serversocket.cpp \
    socket.cpp \
    client.cpp \
    server.cpp \
    clientsocket.cpp

HEADERS += \
    serversocket.h \
    socket.h \
    socketexception.h \
    clientsocket.h
