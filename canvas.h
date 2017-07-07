#ifndef CANVAS_H
#define CANVAS_H

#include <QFrame>

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
	bool dragging;
	PrimitiveMode type;
	std::vector<QPoint> p;
	QPoint clickPoint0;
	QPoint clickPoint1;
	QPoint clickPoint2;
	int clicks = 0;
};

#endif // CANVAS_H
