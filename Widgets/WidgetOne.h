#pragma once

#include <QObject>
#include <qqml.h>
#include <QString>
#include "BaseWidget.h"
#include <QPainter>

#include <QQuickPaintedItem>

class WidgetOne : public BaseWidget
{
	Q_OBJECT
	Q_PROPERTY(QString aName READ getAName WRITE setAName NOTIFY aNameChanged )
public:
	WidgetOne(QQuickItem * parent = nullptr);

	virtual void update() override;
	virtual void writeToModel(Model * a_model) override;
	virtual void udpateView(Model * a_model, View * a_view) override;

	void paint(QPainter *painter) override;

	QString getAName();

	void setAName(const QString & string);

private:
	QString _aName;

signals:
	void aNameChanged();

};
