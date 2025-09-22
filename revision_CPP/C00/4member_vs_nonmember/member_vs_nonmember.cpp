#include <iostream>
#include <string>

// Demo: member vs non-member function
// - When a function needs direct access to private members, make it a member or a friend.
// - If a function can be implemented using the public interface, prefer non-member functions.

class Rectangle
{
private:
	int width;
	int height;

public:
	Rectangle(int w, int h) : width(w), height(h) {}
	int getWidth() const { return width; }
	int getHeight() const { return height; }
	// area can be a member
	int area() const { return width * height; }
};

// A non-member utility that uses public getters
int perimeter(const Rectangle &r)
{
	return 2 * (r.getWidth() + r.getHeight());
}

int main()
{
	Rectangle r(3, 4);
	std::cout << "Area: " << r.area() << "\n";
	std::cout << "Perimeter: " << perimeter(r) << "\n";
	return 0;
}
