#ifndef PLAYER
#define PLAYER

#include <QGraphicsRectItem>


/*Classe de type QGraphicsRectItem à defaut de classe graphique
 */
class Player : public QGraphicsRectItem{
public:
    void keyPressEvent(QKeyEvent *event);
};
#endif // PLAYER

