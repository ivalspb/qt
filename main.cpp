#include "spider.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QIcon>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//создание объекта, инкапсулирующего функциональность приложения.

    //QIcon::QIcon(const QSrting & "icon1.ico");


    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "spider_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }



    Spider w;//создание объекта для поддержки главного окна приложения.
            //В конструкторе можно осуществить все действия для инициализации главного окна

    //w.showMinimized();
    //QIcon icon(".\Images_lab1\icon1.ico");
    //w.setWindowIcon(QIcon "icon1.ico");
    w.show();//отобразить главное окно, иначе по умолчанию оно останется невидимым
    return a.exec();//запуск цикла обработки сообщений, выход из которого осуществляется только по желанию пользователя.
    //Цикл обработки сообщений извлекает из очереди сообщений приложения очередное событие
    //(нажатие кнопки на клавиатуре, движение мышки, событие от таймера…) и отправляет его на обработку
    //соответствующей функции – обработчику события (получателем может быть окно, объект QObject,…)
}
