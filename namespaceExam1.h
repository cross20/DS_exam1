#ifndef namespaceExam1_h
#define namespaceExam1_h

#include <string>
#include <iomanip>

namespace Exam1 {
	class FootWear {
	private:
		int size = 1;
	public:
		FootWear(int _size);
		int GetSize();
		virtual void Description() = 0;
	};
	class Sandle : public FootWear {
	public:
		Sandle(int size_);
		int getSize();
		void Description();
	};
	class RollerSkate : public FootWear {
		RollerSkate(int _size_, string color);
		void Description();
	};
	class Wheel {
		string color = red;
		void set_color(string _color);
		string get_color();
	};
}

#endif namespaceExam1_h
