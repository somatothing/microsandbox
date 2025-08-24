#ifndef GASLESS_EXCHANGE_H
#define GASLESS_EXCHANGE_H

#include <string>
#include <iostream>

class GaslessExchange {
public:
    std::string fetchQuote(const std::string &pair) {
        // TODO: Query gasless exchange for pair pricing
        std::cout << "Fetching quote for " << pair << std::endl;
        return "0";
    }
};

#endif // GASLESS_EXCHANGE_H
