#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : Form(name, target, 145, 137 )
{
	std::cout << "New ShrubberyCreationForm ! [" << this->_name << "] is created." << std::endl;
	std::ofstream outfile(target + "_shrubbery");
	outfile.exceptions(std::ofstream::badbit | std::ofstream::failbit);
	outfile << "	      _{\\ _{\\{\\/}/}/}__ " << std::endl;
	outfile << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
	outfile << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
	outfile << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
	outfile << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
	outfile << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
	outfile << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
	outfile << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
	outfile << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
	outfile << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
	outfile << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
	outfile << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
	outfile << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
	outfile << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
	outfile << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
	outfile << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
	outfile << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
	outfile << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
	outfile << "              (_)  \\.-'.-/" << std::endl;
	outfile << "          __...--- |'-.-'| --...__" << std::endl;
	outfile << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__" << std::endl;
	outfile << " -\"    ' .  . '    |.'-._| '  . .  '   jro" << std::endl;
	outfile << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
	outfile << "          ' ..     |'-_.-|" << std::endl;
	outfile << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
	outfile << "              .'   |'- .-|   '." << std::endl;
	outfile << "  ..-'   ' .  '.   `-._.-�   .'  '  - ." << std::endl;
	outfile << "   .-' '        '-._______.-'     '  ." << std::endl;
	outfile << "        .      ~," << std::endl;
	outfile << "    .       .   |\\   .    ' '-." << std::endl;
	outfile << "    ___________/  \\____________" << std::endl;
	outfile << "   /  Why is it, when you want \\" << std::endl;
	outfile << "  |  something, it is so damn   |" << std::endl;
	outfile << "  |    much work to get it?     |" << std::endl;
	outfile << "   \\___________________________/" << std::endl;
	outfile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& ref)
{
	*this = ref;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
	this->_signature = rhs._signature;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << this->_name << " is thrown in the trash." << std::endl;
}
