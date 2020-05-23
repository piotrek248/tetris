#include "engine.h"

engine::engine()
{

}

void engine::figure(int random){

    engine::kw1 obiekt_1;
    engine::kw2 obiekt_2;
    engine::kw3 obiekt_3;
    engine::kw4 obiekt_4;

    switch (random) {
    case 1:
        engine::draw_figure(0, 0, 20, 0, 40, 0 ,20 ,20);
        obiekt_1.x = 0;
        obiekt_1.y = 0;
        obiekt_2.x = 20;
        obiekt_2.y = 0;
        obiekt_3.x = 40;
        obiekt_3.y = 0;
        obiekt_4.x = 20;
        obiekt_4.y = 20;
        break;
    case 2:
        engine::draw_figure(0, 0, 20, 0, 40, 0, 60, 0);
        obiekt_1.x = 0;
        obiekt_1.y = 0;
        obiekt_2.x = 20;
        obiekt_2.y = 0;
        obiekt_3.x = 40;
        obiekt_3.y = 0;
        obiekt_4.x = 60;
        obiekt_4.y = 0;
        break;
    case 3:
        engine::draw_figure(0, 0, 20, 0, 0, 20, 20, 20);
        obiekt_1.x = 0;
        obiekt_1.y = 0;
        obiekt_2.x = 20;
        obiekt_2.y = 0;
        obiekt_3.x = 0;
        obiekt_3.y = 20;
        obiekt_4.x = 20;
        obiekt_4.y = 20;
        break;
    case 4:
        engine::draw_figure(0, 0, 20, 0, 40, 0, 0, 20);
        obiekt_1.x = 0;
        obiekt_1.y = 0;
        obiekt_2.x = 20;
        obiekt_2.y = 0;
        obiekt_3.x = 40;
        obiekt_3.y = 0;
        obiekt_4.x = 0;
        obiekt_4.y = 20;
        break;
    }
}

void engine::draw_figure(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{

    kwadrat_1->setRect(x1,y1,20,20);
    kwadrat_2->setRect(x2,y2,20,20);
    kwadrat_3->setRect(x3,y3,20,20);
    kwadrat_4->setRect(x4,y4,20,20);
    scene->addItem(kwadrat_1);
    scene->addItem(kwadrat_2);
    scene->addItem(kwadrat_3);
    scene->addItem(kwadrat_4);
}

int engine::choose_figure()
{
    srand(time(NULL));
    return (rand()%4)+1;
}

void engine::move(QKeyEvent *event)
{
    engine::kw1 obiekt_1;
    engine::kw2 obiekt_2;
    engine::kw3 obiekt_3;
    engine::kw4 obiekt_4;

    if(event->key() == Qt::Key_Right){
        kwadrat_1->setPos((obiekt_1.x) + 20, obiekt_1.y);

    }

}
