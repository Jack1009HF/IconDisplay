#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_IconDisplay.h"

class IconDisplay : public QMainWindow
{
    Q_OBJECT

public:
    IconDisplay(QWidget *parent = Q_NULLPTR);

private:
    Ui::IconDisplayClass ui;
};
