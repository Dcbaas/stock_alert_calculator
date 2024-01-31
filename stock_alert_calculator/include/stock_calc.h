#ifndef STOCK_CALC_H
#define STOCK_CALC_H

#include <span>
#include <string>
#include <vector>

struct StockCalcArgs
{
    // Do I want to order this to optimize sotrage space on the struct?
    std::vector<float> prices;
    bool err {false};
    std::string what;
};

StockCalcArgs parse_args(std::span<char*> argv);

struct StockPriceCalculation
{
    float buy_price;
    float loss_8_percent;
    float gain_20_percent;
    float gain_25_percent;
};

void perform_stock_price_calculation(const float price, StockPriceCalculation& calculation);

#endif // !STOCK_CALC_H
