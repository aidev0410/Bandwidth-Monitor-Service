#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtServiceController>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_installButton_clicked();
    void on_uninstallButton_clicked();

private:
    Ui::Widget *ui;
    QtServiceController *m_controller; // controller for bandwidthmonitorservice
};

#endif // WIDGET_H
