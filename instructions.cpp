#include "instructions.h"
#include "ui_instructions.h"

Instructions::Instructions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Instructions)
{
    ui->setupUi(this);
}

Instructions::~Instructions()
{
    delete ui;
}
