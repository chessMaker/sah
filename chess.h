#ifndef CHESS_H
#define CHESS_H
#include <QGraphicsView>
#include <vector>

#include "chesssquares.h"
class Chess:public QGraphicsView{
    Q_OBJECT
public:
    Chess(QWidget* parent=  nullptr);
    void addItem(QGraphicsItem * item );
    void drawSquares();

private:
    QGraphicsScene m_scene;
    chessSquares * m_matrix[8][8];

};


#endif // CHESS_H
