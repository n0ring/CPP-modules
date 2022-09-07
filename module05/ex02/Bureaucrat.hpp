#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception> 
#include "AForm.hpp"

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */


class	AForm;

class	Bureaucrat
{
private:
			std::string const	_name;
			int					_grade;

public:
						Bureaucrat( void );
						Bureaucrat( std::string const &name, int grade );
						Bureaucrat( Bureaucrat const &src );
	Bureaucrat			&operator=( Bureaucrat const &rhs );
						~Bureaucrat( void );
	std::string const	&getName( void ) const;
	int					getGrade( void ) const;
	void				incrementGrade( void );
	void				decrementGrade( void );
	void				signAForm( AForm &f );
	void				executeForm(AForm const & form);

	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream & o, Bureaucrat const & i);


#endif