#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Default_name_Bureaucrat"), _grade(0)
{
}

Bureaucrat::Bureaucrat( std::string const &name, int grade ) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat( void )
{
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &rhs )
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::Bureaucrat( Bureaucrat const &srs) : _name(srs._name), _grade(srs._grade)
{
	*this = srs;
	std::cout << "Bureaucrat was copy" << std::endl;
}

std::string const &Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}

void	Bureaucrat::incrementGrade( void )
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error! Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error! Grade too low");
}

void Bureaucrat::signForm(Form &f)
{
	if (f.getSignStatus())
	{
		std::cout << this->_name << " form was already signed " << std::endl;
		return ;
	}
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn’t sign "
			<< f.getName() << " because " << e.what() << "." << std::endl;
	}
	
}
