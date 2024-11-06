#include <algorithm>

template<typename RanIt, typename Comp>
void heap_sort(RanIt first,  RanIt last, Comp cmp) 
{
    std::make_heap(first, last, cmp);
    std::sort_heap(first, last, cmp);
}
