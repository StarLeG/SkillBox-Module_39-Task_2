#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PhoneNumber; }
QT_END_NAMESPACE

class PhoneNumber : public QMainWindow
{
    Q_OBJECT

public:
    PhoneNumber(QWidget *parent = nullptr);
    ~PhoneNumber();
private slots:
    void SetOk();
    void SetBad();

private:
    Ui::PhoneNumber *ui;
};
#endif // PHONENUMBER_H
