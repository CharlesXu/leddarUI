#ifndef LEDDARTHREAD_H
#define LEDDARTHREAD_H

#include <QThread>
#include "UI/mainwindow.h"
#include <QtGui/QApplication>

class leddarTimer : public QTimer {
  Q_OBJECT
public:
  explicit leddarTimer(int timerNumber, QObject *parent = 0);

private slots:
  void RoundRobinSlot();
  void LogFileSlot();
  void pingLeddar();
};

#endif // LEDDARTHREAD_H
