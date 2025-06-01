template <typename InIter, typename OutIter>
OutIter Move(InIter beg, InIter end, OutIter destbeg)
{
	while (beg != end) {
		*destbeg = std::move(*beg);
		++beg;
		++destbeg;
	}

	return destbeg;
}
