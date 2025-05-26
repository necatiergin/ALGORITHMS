// all_of
template<class InIter, class UnPred>
bool all_of(InIter beg, InIter end, UnPred p);

// any_of
template<class InIter, class UnPred>
bool any_of(InIter beg, InIter end, UnPred p);

// none_of
template<class InIter, class UnPred>
bool none_of(InIter beg, InIter end, UnPred p);

// for_each
template<class InIter, class UFunc>
UFunc for_each(InIter beg, InIter end, UFunc f);

// for_each_n
template<class InIter, class Size, class UFunc>
UFunc for_each_n(InIter beg, Size n, UFunc f);

// count
template<class InIter, class T>
typename iterator_traits<InIter>::difference_type
count(InIter beg, InIter end, const T& val);

// count_if
template<class InIter, class UnPred>
typename iterator_traits<InIter>::difference_type
count_if(InIter beg, InIter end, UnPred p);

// mismatch
template<class InIter1, class InIter2>
std::pair<InIter1, InIter2> mismatch(InIter1 beg1, InIter1 end1, InIter2 beg2);

template<class InIter1, class InIter2, class BiPred>
std::pair<InIter1, InIter2>
mismatch(InIter1 beg1, InIter1 end1, InIter2 beg2, BiPred p);

// equal
template<class InIter1, class InIter2>
bool equal(InIter1 beg1, InIter1 end1, InIter2 beg2);

template<class InIter1, class InIter2, class BiPred>
bool equal(InIter1 beg1, InIter1 end1, InIter2 beg2, BiPred p);

template<class InIter1, class InIter2>
bool equal(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2);

template<class InIter1, class InIter2, class BiPred>
bool equal(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, BiPred p);

// find
template<class InIter, class T>
InIter find(InIter beg, InIter end, const T& val);

// find_if
template<class InIter, class UnPred>
InIter find_if(InIter beg, InIter end, UnPred p);

// find_if_not
template<class InIter, class UnPred>
InIter find_if_not(InIter beg, InIter end, UnPred q);

// find_end
template<class ForIt1, class ForIt2>
ForIt1 find_end(ForIt1 beg1, ForIt1 end1, ForIt2 beg2, ForIt2 end2);

template<class ForIt1, class ForIt2, class BiPred>
ForIt1 find_end(ForIt1 beg1, ForIt1 end1, ForIt2 beg2, ForIt2 end2, BiPred p);

// find_first_of
template<class InIter, class ForIt>
InIter find_first_of(InIter beg, InIter end, ForIt s_beg, ForIt s_end);

template<class InIter, class ForIt, class BiPred>
InIter find_first_of(InIter beg, InIter end, ForIt s_beg, ForIt s_end, BiPred p);

// adjacent_find
template<class ForIt>
ForIt adjacent_find(ForIt beg, ForIt end);

template<class ForIt, class BiPred>
ForIt adjacent_find(ForIt beg, ForIt end, BiPred p);

// search
template<class ForIt1, class ForIt2>
ForIt1 search(ForIt1 beg1, ForIt1 end1, ForIt2 beg2, ForIt2 end2);

template<class ForIt1, class ForIt2, class BiPred>
ForIt1 search(ForIt1 beg1, ForIt1 end1, ForIt2 beg2, ForIt2 end2, BiPred p);

// search_n
template<class ForIt, class Size, class T>
ForIt search_n(ForIt beg, ForIt end, Size count, const T& val);

template<class ForIt, class Size, class T, class BiPred>
ForIt search_n(ForIt beg, ForIt end, Size count, const T& val, BiPred p);

// copy
template<class InIter, class OutIter>
OutIter copy(InIter beg, InIter end, OutIter d_first);

// copy_n
template<class InIter, class Size, class OutIter>
OutIter copy_n(InIter beg, Size count, OutIter result);

// copy_if
template<class InIter, class OutIter, class UnPred>
OutIter copy_if(InIter beg, InIter end, OutIter d_first, UnPred pred);

// copy_backward
template<class BidIt1, class BidIt2>
BidirIt2 copy_backward(BidIt1 beg, BidIt1 end, BidIt2 dest_last);

// move
template<class InIter, class OutIter>
OutIter move(InIter beg, InIter end, OutIter d_first);

// move_backward
template<class BidIt1, class BidIt2>
BidirIt2 copy_backward(BidIt1 beg, BidIt1 end, BidIt2 dest_last);

// swap
template<class T>
void swap(T& a, T& b);

// iter_swap
template<class ForIt1, class ForIt2>
void iter_swap(ForIt1 a, ForIt2 b);

// swap_ranges
template<class ForIt1, class ForIt2>
ForIt2 swap_ranges(ForIt1 beg1, ForIt1 end1, ForIt2 beg2);

// transform
template<class InIter, class OutIter, class UnOp>
OutIter transform(InIter beg1, InIter end1, OutIter d_first, UnOp unary_op);

template<class InIter1, class InIter2, class OutIter, class BinOp>
OutIter transform(InIter1 beg1, InIter1 end1, InIter2 beg2, OutIter d_first, BinOp binary_op);

// replace
template<class ForIt, class T>
void replace(ForIt beg, ForIt end, const T& old_val, const T& new_val);

// replace_if
template<class ForIt, class UnPred, class T>
void replace_if(ForIt beg, ForIt end, UnPred p, const T& new_val);

// replace_copy
template<class InIter, class OutIter, class T>
OutIter replace_copy(InIter beg, InIter end, OutIter d_first, const T& old_val, const T& new_val);

// replace_copy_if
template<class InIter, class OutIter, class UnPred, class T>
OutIter replace_copy_if(InIter beg, InIter end, OutIter d_first, UnPred p, const T& new_val);

// fill
template<class ForIt, class T>
void fill(ForIt beg, ForIt end, const T& val);

// fill_n
template<class OutIter, class Size, class T>
OutIter fill_n(OutIter beg, Size count, const T& val);

// generate
template<class ForIt, class Generator>
void generate(ForIt beg, ForIt end, Generator g);

// generate_n
template<class OutIter, class Size, class Generator>
OutIter generate_n(OutIter beg, Size count, Generator g);

// remove
template<class ForIt, class T>
ForIt remove(ForIt beg, ForIt end, const T& val);

// remove_if
template<class ForIt, class UnPred>
ForIt remove_if(ForIt beg, ForIt end, UnPred p);

// remove_copy
template<class InIter, class OutIter, class T>
OutIter remove_copy(InIter beg, InIter end, OutIter d_first, const T& val);

// remove_copy_if
template<class InIter, class OutIter, class UnPred>
OutIter remove_copy_if(InIter beg, InIter end, OutIter d_first, UnPred p);

// unique
template<class ForIt>
ForIt unique(ForIt beg, ForIt end);

template<class ForIt, class BiPred>
ForIt unique(ForIt beg, ForIt end, BiPred p);

// unique_copy
template<class InIter, class OutIter>
OutIter unique_copy(InIter beg, InIter end, OutIter d_first);

template<class InIter, class OutIter, class BiPred>
OutIter unique_copy(InIter beg, InIter end, OutIter d_first, BiPred p);

// reverse
template<class BidIter>
void reverse(BidIter beg, BidIter end);

// reverse_copy
template<class BidIter, class OutIter>
OutIter reverse_copy(BidIter beg, BidIter end, OutIter d_first);

// rotate
template<class ForIt>
ForIt rotate(ForIt beg, ForIt n_first, ForIt end);

// rotate_copy
template<class ForIt, class OutIter>
OutIter rotate_copy(ForIt beg, ForIt n_first, ForIt end, OutIter d_first);

// shuffle
template<class RanIt, class URBG>
void shuffle(RanIt beg, RanIt end, URBG&& g);

// is_partitioned
template<class InIter, class UnPred>
bool is_partitioned(InIter beg, InIter end, UnPred p);

// partition
template<class BidIter, class UnPred>
BidIter partition(BidIter beg, BidIter end, UnPred p);

// stable_partition
template<class BidIter, class UnPred>
BidIter stable_partition(BidIter beg, BidIter end, UnPred p);

// partition_copy
template<class InIter, class OutIter1, class OutIter2, class UnPred>
std::pair<OutIter1, OutIter2>
partition_copy(InIter beg, InIter end, OutIter1 d_first_true, OutIter2 d_first_false, UnPred p);

// partition_point
template<class ForIt, class UnPred>
ForIt partition_point(ForIt beg, ForIt end, UnPred p);

// sort
template<class RanIt>
void sort(RanIt beg, RanIt end);

template<class RanIt, class Compare>
void sort(RanIt beg, RanIt end, Compare comp);

// stable_sort
template<class RanIt>
void stable_sort(RanIt beg, RanIt end);

template<class RanIt, class Compare>
void stable_sort(RanIt beg, RanIt end, Compare comp);

// partial_sort
template<class RanIt>
void partial_sort(RanIt beg, RanIt middle, RanIt end);

template<class RanIt, class Compare>
void partial_sort(RanIt beg, RanIt middle, RanIt end, Compare comp);

// partial_sort_copy
template<class InIter, class RanIt>
RanIt partial_sort_copy(InIter beg, InIter end, RanIt d_first, RanIt d_last);

template<class InIter, class RanIt, class Compare>
RanIt partial_sort_copy(InIter beg, InIter end, RanIt d_first, RanIt d_last, Compare comp);

// nth_element
template<class RanIt>
void nth_element(RanIt beg, RanIt nth, RanIt end);

template<class RanIt, class Compare>
void nth_element(RanIt beg, RanIt nth, RanIt end, Compare comp);

// is_sorted
template<class ForIt>
bool is_sorted(ForIt beg, ForIt end);

template<class ForIt, class Compare>
bool is_sorted(ForIt beg, ForIt end, Compare comp);

// is_sorted_until
template<class ForIt>
ForIt is_sorted_until(ForIt beg, ForIt end);

template<class ForIt, class Compare>
ForIt is_sorted_until(ForIt beg, ForIt end, Compare comp);

// lower_bound
template<class ForIt, class T>
ForIt lower_bound(ForIt beg, ForIt end, const T& val);

template<class ForIt, class T, class Compare>
ForIt lower_bound(ForIt beg, ForIt end, const T& val, Compare comp);

// upper_bound
template<class ForIt, class T>
ForIt upper_bound(ForIt beg, ForIt end, const T& val);

template<class ForIt, class T, class Compare>
ForIt upper_bound(ForIt beg, ForIt end, const T& val, Compare comp);

// binary_search
template<class ForIt, class T>
bool binary_search(ForIt beg, ForIt end, const T& val);

template<class ForIt, class T, class Compare>
bool binary_search(ForIt beg, ForIt end, const T& val, Compare comp);

// equal_range
template<class ForIt, class T>
std::pair<ForIt, ForIt>
equal_range(ForIt beg, ForIt end, const T& val);

template<class ForIt, class T, class Compare>
std::pair<ForIt, ForIt>
equal_range(ForIt beg, ForIt end, const T& val, Compare comp);

// merge
template<class InIter1, class InIter2, class OutIter>
OutIter merge(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, OutIter d_first);

template<class InIter1, class InIter2, class OutIter, class Compare>
OutIter merge(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, OutIter d_first, Compare comp);

// inplace_merge
template<class BidIter>
void inplace_merge(BidIter beg, BidIter middle, BidIter end);

template<class BidIter, class Compare>
void inplace_merge(BidIter beg, BidIter middle, BidIter end, Compare comp);

// includes
template<class InIter1, class InIter2>
bool includes(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2);

template<class InIter1, class InIter2, class Compare>
bool includes(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, Compare comp);

// set_union
template<class InIter1, class InIter2, class OutIter>
OutIter set_union(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, OutIter d_first);

template<class InIter1, class InIter2, class OutIter, class Compare>
OutIter set_union(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, OutIter d_first, Compare comp);

// set_intersection
template<class InIter1, class InIter2, class OutIter>
OutIter set_intersection(InIter1 beg1, InIter1 end1,InIter2 beg2, InIter2 end2, OutIter d_first);

template<class InIter1, class InIter2, class OutIter, class Compare>
OutIter set_intersection(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, OutIter d_first, Compare comp);

// set_difference
template<class InIter1, class InIter2, class OutIter>
OutIter set_difference(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, OutIter d_first);

template<class InIter1, class InIter2, class OutIter, class Compare>
OutIter set_difference(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, OutIter d_first, Compare comp);

// set_symmetric_difference
template<class InIter1, class InIter2, class OutIter>
OutIter set_symmetric_difference(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, OutIter d_first);

template<class InIter1, class InIter2, class OutIter, class Compare>
OutIter set_symmetric_difference(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, OutIter d_first, Compare comp);

// make_heap
template<class RanIt>
void make_heap(RanIt beg, RanIt end);

template<class RanIt, class Compare>
void make_heap(RanIt beg, RanIt end, Compare comp);

// push_heap
template<class RanIt>
void push_heap(RanIt beg, RanIt end);

template<class RanIt, class Compare>
void push_heap(RanIt beg, RanIt end, Compare comp);

// pop_heap
template<class RanIt>
void pop_heap(RanIt beg, RanIt end);

template<class RanIt, class Compare>
void pop_heap(RanIt beg, RanIt end, Compare comp);

// sort_heap
template<class RanIt>
void sort_heap(RanIt beg, RanIt end);

template<class RanIt, class Compare>
void sort_heap(RanIt beg, RanIt end, Compare comp);

// is_heap
template<class RanIt>
bool is_heap(RanIt beg, RanIt end);

template<class RanIt, class Compare>
bool is_heap(RanIt beg, RanIt end, Compare comp);

// is_heap_until
template<class RanIt>
RanIt is_heap_until(RanIt beg, RanIt end);

template<class RanIt, class Compare>
RanIt is_heap_until(RanIt beg, RanIt end, Compare comp);

// min
template<class T>
const T& min(const T& a, const T& b);

template<class T, class Compare>
const T& min(const T& a, const T& b, Compare comp);

template<class T>
T min(std::initializer_list<T> ilist);

template<class T, class Compare>
T min(std::initializer_list<T> ilist, Compare comp);

// max
template<class T>
const T& max(const T& a, const T& b);

template<class T, class Compare>
const T& max(const T& a, const T& b, Compare comp);

template<class T>
T max(std::initializer_list<T> ilist);

template<class T, class Compare>
T max(std::initializer_list<T> ilist, Compare comp);

// minmax
template<class T>
std::pair<const T&, const T&> minmax(const T& a, const T& b);

template<class T, class Compare>
std::pair<const T&, const T&> minmax(const T& a, const T& b, Compare comp);

template<class T>
std::pair<T, T> minmax(std::initializer_list<T> ilist);

template<class T, class Compare>
std::pair<T, T> minmax(std::initializer_list<T> ilist, Compare comp);

// min_element
template<class ForIt>
ForIt min_element(ForIt beg, ForIt end);

template<class ForIt, class Compare>
ForIt min_element(ForIt beg, ForIt end, Compare comp);

// max_element
template<class ForIt>
ForIt max_element(ForIt beg, ForIt end);

template<class ForIt, class Compare>
ForIt max_element(ForIt beg, ForIt end, Compare comp);

// minmax_element
template<class ForIt>
std::pair<ForIt, ForIt>

minmax_element(ForIt beg, ForIt end);
template<class ForIt, class Compare>

std::pair<ForIt, ForIt>
minmax_element(ForIt beg, ForIt end, Compare comp);

// clamp
template<class T>
const T& clamp(const T& v, const T& lo, const T& hi);
template<class T, class Compare>

const T& clamp(const T& v, const T& lo, const T& hi, Compare comp);

// lexicographical_compare
template<class InIter1, class InIter2>
bool lexicographical_compare(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2);

template<class InIter1, class InIter2, class Compare>
bool lexicographical_compare(InIter1 beg1, InIter1 end1, InIter2 beg2, InIter2 end2, Compare comp);

// is_permutation
template<class ForIt1, class ForIt2>
bool is_permutation(ForIt1 beg1, ForIt1 end1, ForIt2 beg2);

template<class ForIt1, class ForIt2, class BiPred>
bool is_permutation(ForIt1 beg1, ForIt1 end1, ForIt2 beg2, BiPred p);

template<class ForIt1, class ForIt2>
bool is_permutation(ForIt1 beg1, ForIt1 end1, ForIt2 beg2, ForIt2 end2);

template<class ForIt1, class ForIt2, class BiPred>
bool is_permutation(ForIt1 beg1, ForIt1 end1, ForIt2 beg2, ForIt2 end2, BiPred p);

// next_permutation
template<class BidIter>
bool next_permutation(BidIter beg, BidIter end);

template<class BidIter, class Compare>
bool next_permutation(BidIter beg, BidIter end, Compare comp);

// prev_permutation
template<class BidIter>
bool prev_permutation(BidIter beg, BidIter end);

template<class BidIter, class Compare>
bool prev_permutation(BidIter beg, BidIter end, Compare comp);

// accumulate
template<class InIter, class T>
T accumulate(InIter beg, InIter end, T init);

template<class InIter, class T, class BinOp>
T accumulate(InIter beg, InIter end, T init, BinOp op);

// reduce
template<class InIter>
typename iterator_traits<InIter>::val_type
reduce(InIter beg, InIter end);

template<class InIter, class T>
T reduce(InIter beg, InIter end, T init);

template<class InIter, class T, class BinOp>
T reduce(InIter beg, InIter end, T init, BinOp binary_op);

// inner_product
template<class InIter1, class InIter2, class T>
T inner_product(InIter1 beg1, InIter1 end1, InIter2 beg2, T init);

template<class InIter1, class InIter2, class T, class BinOp, class BinOp2>
T inner_product(InIter1 beg1, InIter1 end1, InIter2 beg2, T init, BinOp op1, BinOp2 op2);

// adjacent_difference
template<class InIter, class OutIter>
OutIter adjacent_difference(InIter beg, InIter end, OutIter d_first);

template<class InIter, class OutIter, class BinOp>
OutIter adjacent_difference(InIter beg, InIter end, OutIter d_first, BinOp op);

// partial_sum
template<class InIter, class OutIter>
OutIter partial_sum(InIter beg, InIter end, OutIter d_first);

template<class InIter, class OutIter, class BinOp>
OutIter partial_sum(InIter beg, InIter end, OutIter d_first, BinOp op);

// exclusive_scan
template<class InIter, class OutIter, class T>
OutIter exclusive_scan(InIter beg, InIter end, OutIter d_first, T init);

template<class InIter, class OutIter, class T, class BinOp>
OutIter exclusive_scan(InIter beg, InIter end, OutIter d_first, T init, BinOp binary_op);

// inclusive_scan
template<class InIter, class OutIter>
OutIter inclusive_scan(InIter beg, InIter end, OutIter d_first);

template<class InIter, class OutIter, class BinOp>
OutIter inclusive_scan(InIter beg, InIter end, OutIter d_first, BinOp binary_op);

template<class InIter, class OutIter, class BinOp, class T>
OutIter inclusive_scan(InIter beg, InIter end, OutIter d_first, BinOp binary_op, T init);

// transform_reduce
template<class InIter1, class InIter2, class T>
T transform_reduce(InIter1 beg1, InIter1 end1, InIter2 beg2, T init);

template<class InIter1, class InIter2, class T, class BinOp, class BinOp2>
T transform_reduce(InIter1 beg1, InIter1 end1, InIter2 beg2, T init, BinOp binary_op1, BinOp2 binary_op2);

template<class InIter, class T, class UnOp, class BinOp>
T transform_reduce(InIter beg, InIter end, T init, BinOp binary_op, UnOp unary_op);

// transform_exclusive_scan
template<class InIter, class OutIter, class T, class BinOp, class UnOp>
OutIter transform_exclusive_scan(InIter beg, InIter end, OutIter d_first, T init, BinOp binary_op, UnOp unary_op);

// transform_inclusive_scan
template<class InIter, class OutIter, class BinOp, class UnOp>
OutIter transform_inclusive_scan(InIter beg, InIter end, OutIter d_first, BinOp binary_op, UnOp unary_op);

template<class InIter, class OutIter, class BinOp, class UnOp, class T>
OutIter transform_inclusive_scan(InIter beg, InIter end, OutIter d_first, BinOp binary_op, UnOp unary_op, T init);

// gcd
template<class M, class N>
constexpr std::common_type_t<M, N> gcd(M m, N n);

// lcm
template<class M, class N>
constexpr std::common_type_t<M, N> lcm(M m, N n);

// midpoint
template<class T>
constexpr T midpoint(T a, T b);

template<class T>
constexpr T* midpoint(T* a, T* b);

// lerp
template<class T>
constexpr T lerp(T a, T b, T t);

