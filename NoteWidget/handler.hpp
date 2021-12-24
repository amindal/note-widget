#ifndef HANDLER_HPP
#define HANDLER_HPP
#include <QObject>
#include "Model/note.hpp"
class Handler : public QObject
{
	Q_OBJECT

public:
	Handler(QObject* parent = nullptr);
	~Handler();
	const std::vector<Note> &getNotes() const;
	void setNotes(const std::vector<Note> &newNotes);

public slots:
private:
	void loadData();
	void saveData();
	std::vector<Note> notes;
};

#endif // HANDLER_HPP
