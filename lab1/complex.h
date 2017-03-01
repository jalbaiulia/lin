class Complex {
public:
    // Constructor
    Complex(double re, double im);
 
    // Destructor
    ~Complex();
 
    double getRe();
    double getIm();
 
    Complex conjugate(); 

    Complex add(Complex b);
 
private:
    double re;
    double im;
};
