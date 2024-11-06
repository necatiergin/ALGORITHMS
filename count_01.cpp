#include <iterator>

template<class InIter, class T = typename std::iterator_traits<InIter>::value_type>
typename std::iterator_traits<InIter>::difference_type
count(InIter beg, InIter end, const T& val)
{
    typename std::iterator_traits<InIter>::difference_type cnt{};

    while (beg != end) {
        if (*beg == val)
            ++cnt;
        ++beg;
    }
    return cnt;
}
