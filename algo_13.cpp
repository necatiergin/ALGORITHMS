template< class BidIt1, class BidIt2 >
BidIt2 copy_backward(BidIt1 beg, BidIt1 end, BidIt2 destend)
{
    while (beg != end) {
        *(--destend) = *(--end);
    }
    return destend;
}
