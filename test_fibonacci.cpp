#include <catch2/catch_test_macros.hpp>
#include "fibonacci.hpp"
using namespace std;

TEST_CASE("fibonacci","test"){
    vector<tuple<int,Bint>>cases 
        {{-2,-1},{-1,1},{0,0},{1,1},{2,1},{3,2},{10,55},
         {40,102334155},{100,Bint("354224848179261915075")}};
    for(auto c:cases){
        REQUIRE(fibonacci(get<0>(c)) == get<1>(c));
        if (get<0>(c)>0)
        {
            REQUIRE(fibonacci(get<0>(c))>0);
        }
        
    }
}