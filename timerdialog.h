/*
 * Copyright 2013 KanMemo Project.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef TIMERDIALOG_H
#define TIMERDIALOG_H

#include <QDialog>
#include <QTimer>
#include <QSystemTrayIcon>
#include <QtCore/QSettings>
#include <QtTwitterAPI>

#include "qtquick2applicationviewer.h"
#include "timerdata.h"

namespace Ui {
class TimerDialog;
}

class TimerDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit TimerDialog(QWidget *parent = 0);
    ~TimerDialog();
    
    QSystemTrayIcon *trayIcon;
    QSettings *settings;

protected:
    virtual void resizeEvent(QResizeEvent *event);
    virtual void showEvent(QShowEvent *event);

public slots:
    void closeQml();
    void timeout();

private:
    Ui::TimerDialog *ui;

    QtQuick2ApplicationViewer *m_viewer;
    TimerData m_timerdata;
    QTimer m_timer;

    //ツイッター関連
    OAuth m_oauth;
    Status m_status;

    bool checkKanmemoTimerTimeout(qint64 settime, qint64 starttime);
    void tweetTimerMessage(const QStringList &message);
};

#endif // TIMERDIALOG_H