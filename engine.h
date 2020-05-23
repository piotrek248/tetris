#ifndef ENGINE_H
#define ENGINE_H

#include <QApplication>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QKeyEvent>


class engine
{
public:
    struct kw1{
        int x, y;
    };
    struct kw2{
        int x,y;
    };
    struct kw3{
        int x, y;
    };
    struct kw4{
        int x, y;
    };

    engine();
    QGraphicsScene *scene = new QGraphicsScene;
    void figure(int random);
    void draw_figure(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
    int choose_figure();
    void move(QKeyEvent *event);
    QGraphicsRectItem *kwadrat_1 = new QGraphicsRectItem;
    QGraphicsRectItem *kwadrat_2 = new QGraphicsRectItem;
    QGraphicsRectItem *kwadrat_3 = new QGraphicsRectItem;
    QGraphicsRectItem *kwadrat_4 = new QGraphicsRectItem;
};

#endif // ENGINE_H
