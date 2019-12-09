#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#include <iostream>
#include <ctime>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <chrono>
#include <string>

#define l1 393216
#define  l3 9437184
#define iterations 1000
#define translate 1024*1024
typedef std::chrono::high_resolution_clock Clock;


class Cache {
public:
    Cache();

    std::map<int, int> number_of_experiments();

    void straight_pass();

    void back_pass();

    void random_pass();

    void resultWindow(std::string const &, size_t const &, int const &,
                      double const &);

    ~Cache() {}

private:
    void set_array(int);

    void set_straight(int);

    void set_back(int);

    void set_random(int, std::vector <size_t> &);


public:
    int *_array;
    std::map<int, int> _experiments;
};

#endif // INCLUDE_HEADER_HPP_
