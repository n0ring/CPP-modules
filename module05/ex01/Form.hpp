#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception> 
#include "Bureaucrat.hpp"

#define GRADE_TO_SIGN 100
#define GRADE_TO_EXEC 100

class	Bureaucrat;

class	Form
{
private:
			std::string const	_name;
			bool				_isSigned;
			int const			_gradeToSign;
			int const			_gradeToExec;

public:
						Form( void );
						Form( std::string const &name,
							int const gradeToSign, int const gradeToExec );
						Form( Form const &src );
	Form				&operator=( Form const &rhs );
						~Form( void );
	std::string const	&getName( void ) const;
	int					getGradeToSign( void ) const;
	int					getGradeToExec( void ) const;
	int					getSignStatus( void ) const;
	void				beSigned( Bureaucrat const &bur);


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

std::ostream	&operator<<(std::ostream &o, Form const &i);


#endif