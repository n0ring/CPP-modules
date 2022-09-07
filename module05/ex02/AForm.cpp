#include "AForm.hpp"

AForm::AForm( void ) : _name("Default_name_AForm"), _isSigned(false), _gradeToSign(GRADE_TO_SIGN), _gradeToExec(GRADE_TO_EXEC)
{
}

AForm::AForm( std::string const &name,
				int const gradeToSign, int const gradeToExec)
				: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
}

AForm::~AForm( void )
{
}

AForm	&AForm::operator=( AForm const &rhs )
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

AForm::AForm( AForm const &src) : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
	*this = src;
	std::cout << "AForm was copy" << std::endl;
}

std::string const &AForm::getName( void ) const
{
	return (this->_name);
}

int		AForm::getGradeToSign( void ) const
{
	return (this->_gradeToSign);
}

int		AForm::getGradeToExec( void ) const
{
	return (this->_gradeToExec);
}

int		AForm::getSignStatus( void ) const
{
	return (this->_isSigned);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade for action too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade for action too low");
}

const char* AForm::FormNotSigned::what() const throw()
{
	return ("Form not signed");
}

void		AForm::beSigned( Bureaucrat const &bur)
{
	if (bur.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSignStatus())
		throw AForm::FormNotSigned();
	if (executor.getGrade() > AForm::getGradeToExec())
		throw AForm::GradeTooLowException();
	action();
}

std::ostream	&operator<<(std::ostream &o, AForm const &i)
{
	o << i.getName() << " AForm, grade to sign: " << i.getGradeToSign()
			<< ", grade to exec: " << i.getGradeToExec()
			<< ", current sign status: " << (i.getSignStatus() ? "signed" : "not_signed");
	return (o);
}
