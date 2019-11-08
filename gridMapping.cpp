#include <iostream>
#include <stdio.h>
#include <istream>
#include <vector>
#include <map>
//#include <algorithm>
#include <regex>
#include <string>

using namespace std;

// ----v----configuration block----v----
struct ParenCommaEq_is_space : std::ctype<char>
{ 
    ParenCommaEq_is_space() : std::ctype<char>(get_table()) {} 
    static mask const* get_table() 
    { 
        static mask rc[table_size]; 
        rc['('] = std::ctype_base::space; 
        rc[')'] = std::ctype_base::space; 
        rc['<'] = std::ctype_base::space; 
        rc['>'] = std::ctype_base::space; 
        rc['/'] = std::ctype_base::space; 
        rc[','] = std::ctype_base::space; 
        rc['='] = std::ctype_base::space; 
        rc[' '] = std::ctype_base::space; 
        rc['\t'] = std::ctype_base::space; 
        rc['\r'] = std::ctype_base::space; 
        rc['\n'] = std::ctype_base::space; 
        rc['\"'] = std::ctype_base::space; 
		rc[':'] = std::ctype_base::space;
        return &rc[0]; 
    } 
}; 
//----v----Function Block----v----


//----v----Main Block----v----

int main(int argc, char* argv[])
{
    
    return 0;
}

//----v----Implementation Block----v----
