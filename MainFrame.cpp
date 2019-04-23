#include "MainFrame.h"
#include "ui_MainFrame.h"

MainFrame::MainFrame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainFrame)
{
    ui->setupUi(this);
}

MainFrame::~MainFrame()
{
    delete ui;
}
