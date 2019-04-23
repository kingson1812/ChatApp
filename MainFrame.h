#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <QWidget>

namespace Ui {
class MainFrame;
}

class MainFrame : public QWidget
{
    Q_OBJECT

public:
    explicit MainFrame(QWidget *parent = nullptr);
    ~MainFrame();

private:
    Ui::MainFrame *ui;
};

#endif // MAINFRAME_H
