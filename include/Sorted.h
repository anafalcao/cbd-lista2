#include "Block.h"
#include "Header.h"

#include<vector>

class Sorted {

  private:
    uint64_t pos;
    bool sorted;

  public:
    Block *blockp;
    Block *blockg;
    Header* header;

    Sorted();
    ~Sorted();

    void flush();

    void ins(const char *string);
    const DataRecord *sel(const char *cpf, bool toDelete=false);
    std::vector<const DataRecord *>selMultiple(const char **cpfs, const int quant);
    std::vector<const DataRecord *>selRange(const char *cpfBegin, const char *cpfEnd);
    void del(const char *cpf);

    void sort();

};
