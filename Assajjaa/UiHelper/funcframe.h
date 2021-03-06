#ifndef FUNCFRAME_H
#define FUNCFRAME_H

#include <QFrame>
#include <QWebView>
#include <QDir>
#include <QMainWindow>
#include <QStatusBar>

class FuncFrame: public QFrame
{

public:
    explicit FuncFrame(QMainWindow *parent = 0);
    //~FuncFrame();

    virtual void changeStyle(QString styleID) = 0;
     virtual void changeFont(QString font, QString arfont, int size) = 0;
    virtual void zoom(signed char sign) = 0;
    virtual void refreshLanguage(bool rtl) = 0;

protected:

    bool rtl;
    bool hasContent;
    QString stylesheet;
    QStatusBar * status;

    void initialize();

    void setCSS(QWebView * webView, QString nameCSS);

    virtual void initUI() = 0;
    virtual void initExporter() = 0;

};

#endif // FUNCFRAME_H
