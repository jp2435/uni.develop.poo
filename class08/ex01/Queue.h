#ifndef QUEUE_H_EX01
#define QUEUE_H_EX01
#include <iostream>
#include <vector>

template<class T>
class Queue{
private:
    std::vector<T> elems_;
public:
    Queue(const std::vector<T> &e):
        elems_(e){};
    Queue(){}
    ~Queue(){
        elems_.clear();
    }


    // Setter Member Functions

    // Push Function
    void enqueue(T const& elem){
        elems_.push_back(elem);
    }
    // Pop Back Function
    void dequeue(){
        if(isempty()){
            throw std::out_of_range("Elements not defined");
        }
        elems_.pop_back();
    }
    // Clear Function
    void clear(){
        elems_.clear();
    }

    // Getter Member Functions

    // Front Element
    T peek() const{
        if(isempty()){
            throw std::out_of_range("Elements not defined");
        }
        return elems_.front();
    }
    // Top
    T top() const{
        return elems_.back();
    }
    int size(){
        return elems_.size();
    }
    bool isempty() const{
        return elems_.empty();
    }
};


#endif