#include <string>
#include <iostream>

class Book
{
    private:
        std::string title;
        int         pages;
    
    public:
        void    setInfo(std::string t, int p)
        {
            title = t;
            pages = p;
        };

        void printInfo() const
		{
			std::cout << "\n-> Book Name: " << title << ",\n-> No of Pages: " << pages << "\n" << std::endl;
		};
};

int main()
{
    Book one;
    Book two;

    one.setInfo("bible", 66);
    two.setInfo("quran", 99);

    one.printInfo();
    two.printInfo();

    return 0;
}
