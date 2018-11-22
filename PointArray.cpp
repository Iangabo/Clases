#include <iostream>
#include <iostream>
#include "PointArray.h"

using namespace std;

template<typename TP>
PointArray<TP>::PointArray(){
    this->size=0;
    points=new Point1<TP>[size];
}
template<typename TP>
PointArray<TP>::PointArray(const Point1<TP> pts[],const int size){
    this->size=size;
    points=new Point1<TP>[size];
    for(int y=0;y<size;y++)
        points[y]=pts[y];
}
template<typename TP>
PointArray<TP>::PointArray(PointArray &o){
    this->size=o.size;
    points=new Point1<TP>[size];
    for(int y=0;y<size;y++)
        points[y]=o.points[y];
}
template<typename TP>
PointArray<TP>::~PointArray(){
    delete[] points;
}
template<typename TP>
void PointArray<TP>::resize(int newsize){
    Point1<TP> *ptr=new Point1<TP>[newsize];
    int minsize=(newsize>size)?size:newsize;
    for(int y=0;y<minsize;y++)
        ptr[y]=points[y];
    delete[] points;
    size=newsize;
    points=ptr;
}
template<typename TP>
void PointArray<TP>::print(){
    for(int y=0;y<size;y++)
        points[y].print();
}
template<typename TP>
void PointArray<TP>::clear(){
    resize(0);
}
template<typename TP>
void PointArray<TP>::push_back(const Point1<TP> &p){
    resize(size+1);
    points[size-1]=p;
}

template<typename TP>
void PointArray<TP>::insert(const int pos,const Point1<TP> &p){
    resize(size+1);
    for(int y=(size-1);pos-1<y;y--)
        points[y]=points[y-1];
    points[pos-1]=p;
}
template<typename TP>
void PointArray<TP>::remove(const int pos){
    for(int y=pos-1;y<size-1;y++)
        points[y]=points[y+1];
    size--;
    resize(size);
}

template<typename TP>
int PointArray<TP>::getSize(){
    return size;
}


template <typename TP>
PointArray<TP> PointArray<TP>::operator+(const PointArray& _d)
{
    PointArray<TP> result =*this;
    int a=0;
    for(int i=0;i<sizeof(_d);i++);
    {
        bool add=true;
        for (int j=0;j<size;j++)
        {
            if (_d.points[a] == points[j])
                add=false;
        }
        if (add==true)
            result.push_back(_d.points[a]);
        a++;
    }
    return result;

}

/*
template<typename TP>
int PointArray<TP>::txt(){
    stringstream ss;
    ss<<name<<".txt";
    string s=ss.str();
     arch.open(s.data(),ios::in);
     while (!arch.eof())
    {
        getline(arch,texto);
        cout<<texto<<endl;
    }
}*/
