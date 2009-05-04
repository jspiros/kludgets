#ifndef KLUDGETSAPPLICATION_H
#define KLUDGETSAPPLICATION_H

#include <QApplication>
#include <windows.h>

class KApp : public QApplication
{
public:
    KApp(int argc, char *argv[]);

    bool startClient(const QString &path);
    bool startServer();
};

#endif // KLUDGETSAPPLICATION_H