#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP
# include <iostream>
#include <string>

class Sample{
    public:
            Sample(void);
            ~Sample(void);

            void   bar(char const c) const;
            void   bar(int const n) const;
            void   bar(float const z) const;
            // void    bar(Sample const & i);

};

#endif