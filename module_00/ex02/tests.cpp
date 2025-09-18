#include <iostream>
#include <vector>
#include <algorithm> // for std::for_each
#include <functional> // for std::mem_fun_ref
#include "Account.hpp"

int main( void ) {

	typedef std::vector<Account::t>							  accounts_t;
	typedef std::vector<int>								  ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	std::cout << ">>> Create the array of initial balances\n";
	int	const amounts[] = { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const amounts_size( sizeof(amounts) / sizeof(int) );

	std::cout << ">>> Create vector accounts based on arr amounts\n";
	accounts_t accounts( amounts, amounts + amounts_size );

	accounts_t::iterator acc_begin = accounts.begin();
	accounts_t::iterator acc_end   = accounts.end();

	std::cout << ">>> Create arr of deposits\n";
	int	const d[] = { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const d_size( sizeof(d) / sizeof(int) );
	ints_t deposits( d, d + d_size );
	ints_t::iterator dep_begin = deposits.begin();
	ints_t::iterator dep_end   = deposits.end();

	std::cout << ">>>Create arr of withdrawls\n";
	int	const w[] = { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const w_size( sizeof(w) / sizeof(int) );
	ints_t withdrawals( w, w + w_size );
	ints_t::iterator wit_begin = withdrawals.begin();
	ints_t::iterator wit_end   = withdrawals.end();

	std::cout << ">>> Display All Accounts Info\n";
	Account::displayAccountsInfos();

	std::cout << ">>> Dispaly status of each account\n";
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	std::cout << ">>> Make deposits\n";
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		std::cout << "  -> Deposit " << *(it.second) << " to account#" 
		          << (it.first - acc_begin) << "\n";
		(*(it.first)).makeDeposit( *(it.second) );
	}

	std::cout << ">>> Dispaly info after deposits are done\n";
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	std::cout << ">>> Make withdrawls\n";
	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		std::cout << "  -> Withdrawal " << *(it.second) << " from account #" 
		          << (it.first - acc_begin) << "\n";
		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	std::cout << ">>> Display info after withdrawals\n";
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	std::cout << ">>> End of programm , destarctors will be called automatically\n";
	return 0;
}
