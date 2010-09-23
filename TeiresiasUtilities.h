/******************************************************************************

    WordSearch/Teiresias
    Dazhang Gu
    $Log: DG_util.h,v $
    Revision 1.5  2007/09/15 17:39:08  gu
    *** empty log message ***

    Revision 1.4  2007/09/14 19:15:33  jens
    *** empty log message ***

    Revision 1.3  2007/09/14 19:12:06  jens
    *** empty log message ***

    Revision 1.2  2007/09/10 14:40:39  gu
    *** empty log message ***

    Revision 1.1  2007/08/09 14:57:58  gu
    reorganized the repository and added makefile

    Revision 1.4  2007/08/06 20:41:42  gu
    - added support for searching on foward or both strands
    - changed the command argument format for search_t

    Revision 1.3  2007/07/26 18:20:32  gu
    *** empty log message ***

*******************************************************************************/

#ifndef UTIL
#define UTIL
#include <vector>
#include <string>

struct Lessthan
{
    bool operator ()(const std::string &l, const std::string &r) const
    {
        size_t n=l.find('.');
        if(n==std::string::npos) n=l.length();
        size_t m=r.find('.'); 
        if(m==std::string::npos) m=r.length();            
        if(n==m) return l < r;
        return n>m;
    }
};

class FileProcessor
{
    int nseqs;
    std::vector<std::string> headers;
    std::vector<int> boundaries;
    std::string seq;
    std::string reversecomplement(const std::string &s) const;
    void GetUpper(std::string& str) const;
    
public:
    FileProcessor(int argc, char *argv[]);
    FileProcessor(){}

    static std::string getkey(int argc, char *argv[], std::string key, 
        bool isflag=false, std::string def=std::string());

    int size() const {return nseqs;}
    const std::vector<std::string> &get_headers() const { return headers; }
    const std::string &get_header(int n) const { return headers[n]; }
    const std::vector<int> &get_boundaries() const { return boundaries; }
    const std::string operator [](int n) const;
    int length(int n) const;
    size_t length() const {return seq.length();}
    const std::string &get_seq() const {return seq;}
    void print() const;
};
#endif
