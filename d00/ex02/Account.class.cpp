/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 00:37:05 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/11 01:35:26 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <time.h>

Account::Account(int initial_deposit) {
	this->_amount = initial_deposit;
	this->_accountIndex = Account::getNbAccounts();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_totalAmount += this->_amount;
	Account::_nbAccounts++;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	return ;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

int		Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	if (Account::getNbAccounts() > 0) {
		Account::_displayTimestamp();
		std::cout << "accounts:" << Account::getNbAccounts() << ";";
		std::cout << "total:" << Account::getTotalAmount() << ";";
		std::cout << "deposits:" << Account::getNbDeposits() << ";";
		std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";";
		std::cout << std::endl;
	}
	return ;
}

// void	Account::makeDeposit(int deposit) {
//
// }
// bool	Account::makeWithdrawal(int withdrawal);
// int		Account::checkAmount(void) const;
void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void) {
	time_t		timestamp = time(0);
	struct tm	*tstruct = localtime(&timestamp);
	char		buf[18];

	strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S]", tstruct);
	std::cout << buf << ' ';
	return ;
}
