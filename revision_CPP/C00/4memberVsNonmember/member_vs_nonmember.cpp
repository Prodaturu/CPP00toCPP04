// Demo: member vs non-member function
// - When a function needs direct access to private members, make it a member or a friend.
// - If a function can be implemented using the public interface, prefer non-member functions.

/** Member Functions:-
 * --------------------
 * 
 * 1. Defined inside the class
 * 2. Have access to "this" pointers
 * 3. Can access both static and non-static functions
 * 4. Called on objects
 *      Example: obj.memberFunction()
 * 
 *  Pros:-
 * 1. Clear ownership, can be virtual, can access private state
 * 
 *  Cons:-
 * 1. Tight coupling
 * 2. May bloat the public interface when the operation doesn't need internal access
 * 
 */

/** Non-Member (Free) Functions:-
 * -----------------------------
 * 
 * - Defined outside the class
 * - No "this" pointer
 * - Can only access public members of the class
 * - Called like: nonMemberFunc(obj)
 * 
 * 1. Implement functionality that can be expressed using the class's public interface
 * 2. Prefered if the function can be implemented without access to internals
 * 3. Improves encapsulation and the class's minimal public surface
  * 4. Enchance symmetry and allow operations that conceptually span multiple types
  * 
  */
 
#include <iostream>
#include <string>

class Rectangle
{
    private:
        int width;
        int height;
    public:
        Rectangle(int w, int h) : width(w), height(h) {}
        int getWidth() const { return width; }
        int getHeight() const { return height; }
        bool isSquare() const {
            return (width == height);
        }
        // area can be a member
        int area() const { return width * height; }
};

// Non-member function using public interface
bool isItSquare(const Rectangle& r) {
    return (r.getWidth() == r.getHeight());
}

// A non-member utility that uses public getters
int perimeter(const Rectangle& r)
{
    return 2 * (r.getWidth() + r.getHeight());
}

int main()
{
    Rectangle r(3, 4);
    std::cout << "Area: " << r.area() << "\n";
    std::cout << "Perimeter: " << perimeter(r) << "\n";
    return (0);
}
