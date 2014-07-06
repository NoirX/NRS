#include "bignum.h"
#include "semiOrderedMap.h"

namespace bts 
{
    std::vector< std::pair<uint32_t,uint32_t> > momentum_search( uint256 midHash );
    bool momentum_verify( uint256 midHash, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e );
}
 
