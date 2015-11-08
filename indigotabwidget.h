#ifndef INDIGOTABWIDGET_H
#define INDIGOTABWIDGET_H

#include <QTabWidget>
#include <QIcon>
#include "indigodropzone.h"

class IndigoTabWidget : public QTabWidget
{
    Q_OBJECT
public:
    IndigoTabWidget(QWidget* parent = 0);
    void addTab ( QWidget * child, const QString & label );
    void addTab ( QWidget * child, const QIcon & icon, const QString & label );
    QWidget * activeWidget;

protected:
    bool eventFilter(QObject *o, QEvent *e);

signals:

public slots:
};

#endif // INDIGOTABWIDGET_H