#include <QPushButton>
#include<QObject>
#include<iostream>

class demo : public QObject
 {
    Q_OBJECT

public:
    demo()
    {
         button=new QPushButton ("&Click Here !");
         // to set position at x=550,y=300 with size l=200 h=50
         button->setGeometry(550,300,200,50);
         button->show();
         connect(button,SIGNAL(clicked()),this,SLOT(handlebutton()));
    }

public slots:
    void handlebutton()
    {
        button->setText("HELLO! I'm Amritha Menon :)");

    }

private:
    QPushButton *button;
 };
