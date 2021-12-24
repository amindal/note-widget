#ifndef NOTE_HPP
#define NOTE_HPP
#include <QDataStream>
#include <QString>
#include <QColor>

class Note
{
public:
	Note();
	friend QDataStream & operator<< (QDataStream& stream, const Note& note);
	friend QDataStream & operator>> (QDataStream& stream, Note& note);
private:
	QString title;
	QString text;
	QColor color;
};

#endif // NOTE_HPP
