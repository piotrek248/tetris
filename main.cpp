#include <QApplication>
#include "engine.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    engine *object = new engine;

    QGraphicsView *view = new QGraphicsView();
    view->setScene(object->scene);
    view->setSceneRect(0,0,500,500);

    object->figure(object->choose_figure());
    view->show();


    return a.exec();
}
