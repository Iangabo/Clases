#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"
template<typename TP>
class PointArray
{
    public:
        PointArray();
        PointArray(const Point<TP> pts[],const int size);

        PointArray(const PointArray<TP>&);
        PointArray(PointArray &o);
        ~PointArray();
        void print();
        void clear();
        void push_back(const Point<TP> &p);

        void insert(const int,const Point<TP> &p);
        void remove(const int);
        int getSize();

        PointArray<TP> operator+(const PointArray&);

       friend ostream& operator<<(ostream &o, const PointArray<TP>& _d)
	    {
		if ( _d.size == 0 )
		{
			cout<<"()";
			return o;
		}

		for(int i = 0; i < _d.size-1; i++)
			cout<<_d.points[i]<<", ";
		cout<<_d.points[_d.size-1];

		return o;
	    }


    private:
        int size;

        Point<TP> *points;
        void resize(int);
};
#endif // POINTARRAY_H
