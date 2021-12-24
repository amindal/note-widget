#include "note.hpp"

Note::Note()
{

}

QDataStream & operator<< (QDataStream& stream, const Note& note){
	stream << note.color;
	stream << note.text;
	stream << note.title;
	return stream;
}

QDataStream & operator>> (QDataStream& stream, Note& note){
	stream >> note.color;
	stream >> note.text;
	stream >> note.title;
	return stream;
}
