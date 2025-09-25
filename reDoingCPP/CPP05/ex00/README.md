# CPP05 - ex00: Bureaucrat Class

## Overview

This exercise introduces the **Bureaucrat** class, focusing on encapsulation, constructors, and exception handling in C++11. You will implement grade boundaries, custom exceptions, and proper class design patterns.

## Objectives

- Implement a `Bureaucrat` class with:
	- Private members: `_name` (const `std::string`), `_grade` (int)
	- Constructors, copy constructor, assignment operator, destructor
	- Getters: `getName() const`, `getGrade() const`
	- Methods: `incrementGrade()`, `decrementGrade()`
	- Custom exceptions: `GradeTooHighException`, `GradeTooLowException`
- Enforce grade limits (1-150) with exceptions
- Demonstrate usage and edge cases in `main.cpp`

## Requirements

- **C++11** standard: `-Wall -Wextra -Werror -std=c++11`
- Header guards: `#ifndef BUREAUCRAT_HPP`
- File naming: `Bureaucrat.hpp` / `Bureaucrat.cpp`
- Const correctness: getters and parameters
- Defensive programming: validate input, handle errors gracefully
- No exceptions outside Bureaucrat (subject requirement)
- Test scenarios in `main.cpp`

## Build Instructions

Use the provided Makefile:
```sh
make        # Build executable
make clean  # Remove .o files
make fclean # Remove .o files and executable
make re     # Full rebuild
make debug  # Build with debugging symbols
```

## Testing

- Test grade boundaries (1, 150, out-of-range)
- Test increment/decrement methods
- Check exception messages
- Use `valgrind --leak-check=full ./ex00` for memory leaks

## References

- [C++11 Standard](https://en.cppreference.com/w/cpp/language)
- [Exception Handling](https://en.cppreference.com/w/cpp/error/exception)
- [42 School Subject PDF](../subject.pdf)
