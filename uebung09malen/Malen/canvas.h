#ifndef CANVAS_H
#define CANVAS_H

#include <QFrame>

#define GRID_ROWS 6
#define GRID_COLS 8
#define PRAD 3

typedef QVector<QPoint> Grid[GRID_ROWS][GRID_COLS];

class Canvas : public QFrame
{
	Q_OBJECT

public:
	enum PrimitiveMode {
		FREE_HAND = 0, CIRCLE, LINE, TRIANGLE, RECTANGLE, POLYGON
	};

	Canvas(QWidget *parent = 0);
	~Canvas();

	QSize minimumSizeHint() const;
	QSize sizeHint() const;

	void clearCanvas(void);
	void setPoints();
	void setPrimitiveMode(int mode);

protected:
	void paintEvent(QPaintEvent *event);
	void resizeEvent(QResizeEvent *event);

	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);

private:
	int ax = 0, ay = 0;
	bool dragging;
	PrimitiveMode type;
	Grid grid;
	int cell_size_x, cell_size_y;
	std::vector<QPoint> p;
	QPoint clickPoint0;
	QPoint clickPoint1;
	QPoint clickPoint2;
	int clicks = 0;
};

#endif // CANVAS_H
