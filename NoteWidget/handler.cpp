#include "handler.hpp"

Handler::Handler(QObject *parent) : QObject(parent)
{

}

Handler::~Handler()
{

}

const std::vector<Note> &Handler::getNotes() const
{
	return notes;
}

void Handler::setNotes(const std::vector<Note> &newNotes)
{
	notes = newNotes;
}

void Handler::loadData()
{

}

void Handler::saveData()
{

}
