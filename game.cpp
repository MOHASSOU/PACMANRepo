#include "game.h"
#include <QApplication>
#include <QFont>
Game::Game(QWidget *parent){

    //Configuration de la vue
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900,500);

    //Instanciation et Configuration de la scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,width(),height());
    setScene(scene);

    //Instanciation et Configuration d'un player
    pacman = new Player();
    pacman->setRect(0,0,50,50);

    pacman->setFlag(QGraphicsItem::ItemIsFocusable);
    pacman->setFocus();
    pacman->setPos(0,0);
    scene->addItem(pacman);

}
