#ifndef RAMBO_ALGORITHM_HPP
#define RAMBO_ALGORITHM_HPP

#include <utility>

namespace rambo {

    template<typename TInputIterator, typename P, typename A>
    void for_each_if(TInputIterator begin, TInputIterator end, P&& predicate, A&& action)
    {
        for(; begin != end; ++begin) {
            if (predicate(*begin)) action(*begin);
        }
    }

    template<typename TInputIterator1, typename TInputIterator2, typename TOutputIterator>
    TOutputIterator zip(TInputIterator1 begin1, TInputIterator1 end1, TInputIterator2 begin2, TInputIterator2 end2,
             TOutputIterator begin3) {

       for( ; begin1 != end1, begin2 != end2; ++begin1, ++begin2) {
           *begin3++ = std::make_pair(*begin1, *begin2);
       }

        return begin3;
    }

    template<typename TInputIterator1, typename TInputIterator2, typename TOutputIterator, typename P>
    TOutputIterator zip_if(TInputIterator1 begin1, TInputIterator1 end1, TInputIterator2 begin2, TInputIterator2 end2,
                TOutputIterator begin3, P&& predicate) {

        for( ; begin1 != end1, begin2 != end2; ++begin1, ++begin2) {
            if (predicate(*begin1, *begin2))
                *begin3++ = std::make_pair(*begin1, *begin2);
        }

        return begin3;
    }

    template<typename TInputIterator, typename TOutputIterator, typename P, typename F>
    TOutputIterator transform_if(TInputIterator begin1, TInputIterator end1,
                                 TOutputIterator begin2, P&& predicate, F&& f) {
        for(; begin1 != end1; ++begin1) {
            if (predicate(*begin1)) *begin2 = f(*begin1);
        }
        return begin2;
    }

    template<typename TInputIterator, typename Zero, typename P, typename F>
    Zero accumulate_if(TInputIterator begin1, TInputIterator end1, Zero zero, P&& predicate, F&& f) {
        for(; begin1 != end1; ++begin1) {
            if (predicate(*begin1)) zero = f(zero, *begin1);
        }
        return zero;
    }
}

#endif
