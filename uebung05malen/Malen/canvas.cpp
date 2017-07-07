#include <QPainter>
#include <QMouseEvent>
#include <math.h>
#include "canvas.h"
#include <random>

#define GRID_SIZE width() / 10

Canvas::Canvas(QWidget *parent)
	: QFrame(parent)
{
	setFrameStyle(QFrame::Box);
	setMouseTracking(true);

	type = LINE;
	dragging = false;
}

Canvas::~Canvas()
{
}

QSize Canvas::minimumSizeHint() const
{
	return QSize(200, 200);
}

QSize Canvas::sizeHint() const
{
	return QSize(640, 480);
}

void Canvas::clearCanvas(void)
{
	// TODO
	clicks = 0;
	clickPoint0.rx() = 0;
	clickPoint0.ry() = 0;
	clickPoint1.rx() = 0;
	clickPoint1.ry() = 0;
	clickPoint2.rx() = 0;
	clickPoint2.ry() = 0;
	p.resize(0);
}

void Canvas::setPoints()
{
	if (type == CIRCLE) {
		std::random_device rdev0;
		std::default_random_engine re0(rdev0());
		std::uniform_real_distribution<float> distributionWidth(0, width() - 1);

		std::random_device rdev1;
		std::default_random_engine re1(rdev1());
		std::uniform_real_distribution<float> distributionHeight(0, height() - 1);

		for (int i = 0; i < 200; i++) {
			p.push_back(QPoint(distributionWidth(re0), distributionHeight(re1)));
		}
	}
}

void Canvas::setPrimitiveMode(int mode)
{
	type = (Canvas::PrimitiveMode)mode;
}

void Canvas::paintEvent(QPaintEvent *event)
{
	QFrame::paintEvent(event);
	QPainter painter(this);

	painter.fillRect(0, 0, width() - 1, height() - 1, Qt::white);
	painter.drawRect(0, 0, width() - 1, height() - 1);
	QPainterPath drawingPath;
	painter.setBrush(Qt::cyan);

	

	if (type == FREE_HAND) {
	}

	if (type == CIRCLE) {
		for (int i = 0, w = 0, h = 0; i < GRID_SIZE; i++, w += 50, h += 35) {
			painter.fillRect(0, 0, width() - 1, height() - 1, QColor(255, 220, 200));
			drawingPath.moveTo(QPoint(0, h));
			drawingPath.lineTo(QPoint(width(), h));
			drawingPath.moveTo(QPoint(w, 0));
			drawingPath.lineTo(QPoint(w, height()));
			painter.drawPath(drawingPath);
		}

		for (int i = 0; i < p.size(); i++) {
			painter.drawEllipse(p[i], 3, 3);
		}
	}

	if (type == LINE) {
		painter.setPen(Qt::black);
		if (clicks > 1) {
			for (int i = 0; i < p.size(); i += 2) {
			drawingPath.moveTo(p[i]);
			drawingPath.lineTo(p[i + 1]);
			painter.drawPath(drawingPath);
			}
		}
		
		/*if (clicks > 1) {
			drawingPath.lineTo(clickPoint1);
			painter.drawPath(drawingPath);
		}*/
	}

	if (type == TRIANGLE) {
		QPoint tempPoint;
		painter.setPen(Qt::blue);
		if (clicks % 3 == 1) {
			painter.drawPoint(clickPoint0);
			drawingPath.moveTo(clickPoint0);
		}
		else if (clicks == 2) {
			painter.drawPoint(clickPoint0);
			drawingPath.moveTo(clickPoint0);
			painter.drawPoint(clickPoint1);
			drawingPath.lineTo(clickPoint1);
			painter.drawPath(drawingPath);
		}
		else if (clicks == 3) {
			painter.drawPoint(clickPoint0);
			drawingPath.moveTo(clickPoint0);
			painter.drawPoint(clickPoint1);
			drawingPath.lineTo(clickPoint1);
			painter.drawPoint(clickPoint2);
			drawingPath.lineTo(clickPoint2);
			drawingPath.lineTo(clickPoint0);
			painter.drawPath(drawingPath);
		}

		if (clicks == 4) {
			clicks = 1;
		}
	}

	if (type == RECTANGLE) {
	}

	if (type == POLYGON) {
	}
	// TODO; implement drawing functionality!
	// white background with black border and all the primitives
}

void Canvas::resizeEvent(QResizeEvent *event) 
{
	QFrame::resizeEvent(event);
}

void Canvas::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton) {
		dragging = true;

		// TODO; implement mouse interaction
		// Mouse position given as follows
		QPoint currPos = event->pos();

		if (type == LINE) {
			p.push_back(currPos);
			p.push_back(currPos);
		}
		update();
	}
}

void Canvas::mouseMoveEvent(QMouseEvent *event)
{
	if ((event->buttons() & Qt::LeftButton) && dragging) {
		QPoint currPos = event->pos();
		// TODO
		if (type == LINE) {
			clicks++;
			/*if (clicks > 1) {
				clickPoint1 = event->pos();
			}*/
			p[p.size() - 1] = currPos;
		}
		
		update();
	}
}

void Canvas::mouseReleaseEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton && dragging) {
		dragging = false;

		// TODO


		if (type == TRIANGLE) {
			clicks++;
			if (clicks % 3 == 1) {
				clickPoint0 = event->pos();
			}
			else if (clicks == 2) {
				clickPoint1 = event->pos();
			}
			else if (clicks == 3) {
				clickPoint2 = event->pos();
			}
		}
		update();
	}
}