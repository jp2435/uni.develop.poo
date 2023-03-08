#ifndef COMPLEX_H_EX02
#define COMPLEX_H_EX02

class Complex{
private:
    double real_,imag_;
public:
    explicit Complex(int r=0,int i=0): real_(r), imag_(i){}

    double GetReal() const{
        return real_;
    }
    double GetImag() const {
        return imag_;
    }
    void Show() const{
        if(real_ !=0){
            std::cout << real_;
        }

        // Parte Imaginária
        if(imag_ < 0 || real_ == 0){
            std::cout << imag_;
        }else{
            std::cout << "+" << imag_;
        }
        std::cout << "i";
    }
    Complex operator +(const Complex& other) const{
        Complex res;
        res.real_ = real_ + other.real_;
        res.imag_ = imag_ + other.imag_;
        return res;
    }
    Complex operator -(const Complex& other) const{
        Complex res;
        res.real_ = real_ - other.real_;
        res.imag_ = imag_ - other.imag_;
        return res;
    }
    Complex operator *(const Complex& other) const{
        Complex res;
        res.real_ =  real_*other.real_ - imag_*other.imag_;
        res.imag_ = real_*other.imag_ + imag_*other.real_;

        return res;
    }
    Complex operator /(const Complex& other) const{
        Complex res;
        double divisor = (other.real_*other.real_) + (other.imag_*other.imag_);
        res.real_= (real_*other.real_ - imag_*(-other.imag_)) / divisor;
        res.imag_ = (real_*(-other.imag_) + imag_*other.real_) / divisor;

        return res;
    }

};


#endif
