#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <exception> 
#include "fstream"
#include "Bureaucrat.hpp"


#define GRADE_TO_SIGN 100
#define GRADE_TO_EXEC 100

class	Bureaucrat;

class	AForm
{
private:
			std::string const	_name;
			bool				_isSigned;
			int const			_gradeToSign;
			int const			_gradeToExec;
virtual		void action(void) const = 0;


public:
						AForm( void );
						AForm( std::string const &name,
							int const gradeToSign, int const gradeToExec );
						AForm( AForm const &src );
	AForm				&operator=( AForm const &rhs );
	virtual				~AForm( void );
	std::string const	&getName( void ) const;
	int					getGradeToSign( void ) const;
	int					getGradeToExec( void ) const;
	int					getSignStatus( void ) const;
	void				beSigned( Bureaucrat const &bur);

	void				execute(Bureaucrat const & executor) const;


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

	class FormNotSigned : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, AForm const &i);


#endif