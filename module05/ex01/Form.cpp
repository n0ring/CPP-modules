#include "Form.hpp"

Form::Form( void ) : _name("Default_name_Form"), _isSigned(false), _gradeToSign(GRADE_TO_SIGN), _gradeToExec(GRADE_TO_EXEC)
{
}

Form::Form( std::string const &name,
				int const gradeToSign, int const gradeToExec)
				: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
}

Form::~Form( void )
{
}

Form	&Form::operator=( Form const &rhs )
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

Form::Form( Form const &src) : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
	*this = src;
	std::cout << "Form was copy" << std::endl;
}

std::string const &Form::getName( void ) const
{
	return (this->_name);
}

int		Form::getGradeToSign( void ) const
{
	return (this->_gradeToSign);
}

int		Form::getGradeToExec( void ) const
{
	return (this->_gradeToExec);
}

int		Form::getSignStatus( void ) const
{
	return (this->_isSigned);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade for action too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade for action too low");
}

void		Form::beSigned( Bureaucrat const &bur)
{
	if (bur.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_isSigned = true;
}


std::ostream	&operator<<(std::ostream &o, Form const &i)
{
	o << i.getName() << " form, grade to sign: " << i.getGradeToSign()
			<< ", grade to exec: " << i.getGradeToExec()
			<< ", current sign status: " << (i.getSignStatus() ? "signed" : "not_signed");
	return (o);
}
