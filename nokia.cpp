#include <iostream>

struct Base
{
  Base()
  {
    std::cout<<"Base::constructor\n";
  }
  virtual ~Base()
  {
    std::cout<<"Base::destructor\n";
  }
  virtual void meow() const{std::cout<<"Base::meow\n";}
  viirtual void purr() const{ meow();}

};
struct Derived : Base
{
  Derived()
  {
    std::cout<<"Derived::constructor\n";
  }
  virtual ~Derived()
  {
    std::cout<<"Derived::destructor\n";
  }
  void meow() const override {std::cout << "Derived::meow\n";}
  void purr() const override { meow();}
};
int main()
{
  std::unique_ptr<Base> object = std::make_unique<Derived>();
  object->putt();
}
