#include "phonenumber.h"
#include "./ui_phonenumber.h"
#include <QRegularExpression>

PhoneNumber::PhoneNumber(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PhoneNumber)
{
    ui->setupUi(this);
    connect(ui->InLine, &QLineEdit::textEdited,[this](QString currentText)
    {
        QRegularExpression exp("^(\\+375|80)(29|25|44|33)(\\d{3})(\\d{2})(\\d{2})$");
        if(exp.match(currentText).hasMatch())
            SetOk();
        else
            SetBad();
    });
}

PhoneNumber::~PhoneNumber()
{
    delete ui;
}

void PhoneNumber::SetOk()
{
    ui->OutLine->setText("OK!");
    ui->OutLine->setStyleSheet("QLabel {color : green;}");

}

void PhoneNumber::SetBad()
{
    ui->OutLine->setText("Not OK!");
    ui->OutLine->setStyleSheet("QLabel {color : red;}");
}

