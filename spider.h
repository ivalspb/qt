#ifndef SPIDER_H
#define SPIDER_H

#include <QWidget>

class Spider : public QWidget//наследует от класса Qt - QWidget
{
    Q_OBJECT//макрос, необходимый для поддержки механизма сигналов/слотов
    //(в частности в данной работе позволяет использовать функцию tr(), а в дальнейшем и connect())

public:
    Spider(QWidget *parent = nullptr);//у главного окна приложения родителя нет
                                        //(по умолчанию родительским окном является desktop)
    ~Spider();
};
#endif // SPIDER_H
