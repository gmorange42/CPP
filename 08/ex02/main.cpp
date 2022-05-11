#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main(void)
{
	std::cout << "--MUTANTSTACK PART--" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top() : " <<  mstack.top() << std::endl << std::endl;
	mstack.pop();
	std::cout << "mstack.size() : " << mstack.size() << std::endl << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator mit = mstack.begin();
	MutantStack<int>::iterator mite = mstack.end();
	++mit;
	--mit;
	while (mit != mite)
	{
		std::cout << *mit << std::endl;
		++mit;
	}
	std::cout << std::endl;
	
	std::cout << "--STACK PART--" << std::endl;
	std::stack<int> s(mstack);
	s.push(5);
	s.push(17);
	std::cout << "s.top() : " <<  s.top() << std::endl << std::endl;
	s.pop();
	std::cout << "s.size() : " << s.size() << std::endl << std::endl;
	s.push(3);
	s.push(5);
	s.push(737);
	s.push(0);
//	std::stack<int>::iterator sit = s.begin();	Don't works because
//	std::stack<int>::iterator site = s.end();	there isn't
//	++sit;						iterators
//	--sit;						with std::stack
//	while (sit != site)
//	{
//		std::cout << *sit << std::endl;
//		++sit;
//	}

	std::cout << "--LIST PART--" << std::endl;
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "mlist.back() : " <<  mlist.back() << std::endl << std::endl;
	mlist.pop_back();
	std::cout << "mlist.size() : " << mlist.size() << std::endl << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator lit = mlist.begin();
	std::list<int>::iterator lite = mlist.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
		return(0);
}
