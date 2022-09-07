#include <iostream>
#include "Account.hpp"

#define ADD_NULL(x) ((x < 10) ? "0" : "")

int Account::_totalAmount;
int Account::_nbAccounts;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->checkAmount() <<  ";created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->checkAmount() <<  ";closed" << std::endl;
}

void Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount()
		<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->checkAmount()
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->checkAmount() << ";withdrawal:";
	if (this->checkAmount() - withdrawal >= 0)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << withdrawal << ";amount:" << this->checkAmount()
			<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;;
		return (true);
	}
	else
	{
		std::cout << "refused" << std::endl;
		return (false) ;
	}
}

void    Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->checkAmount() << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int Account::checkAmount( void ) const
{
	return (this->_amount);
}

// static members
int Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void    Account::_displayTimestamp( void )
{
	struct tm	*timeinfo;
	std::time_t t2 = std::time(0);
	timeinfo = std::localtime (&t2);

	std::cout << "["
		<< timeinfo->tm_year + 1900
		<< ADD_NULL((timeinfo->tm_mday ? timeinfo->tm_mon + 1 : timeinfo->tm_mon))
		<< (timeinfo->tm_mday ? timeinfo->tm_mon + 1 : timeinfo->tm_mon)
		<< ADD_NULL(timeinfo->tm_mday)
		<< timeinfo->tm_mday
		<< "_"
		<< ADD_NULL(timeinfo->tm_hour)
		<< timeinfo->tm_hour
		<< ADD_NULL(timeinfo->tm_min)
		<< timeinfo->tm_min
		<< ADD_NULL(timeinfo->tm_sec)
		<< timeinfo->tm_sec
	<< "] ";
}

void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:"
		<< Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits()
		<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}
