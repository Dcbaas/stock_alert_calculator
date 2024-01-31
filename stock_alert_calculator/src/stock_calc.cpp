#include "stock_calc.h"

StockCalcArgs parse_args(std::span<char*> argv)
{
    StockCalcArgs args;
    
    if (argv.size() == 1)
    {
        // No args passed only executeable passed in
        args.err = true;
        args.what = "No prices provided";
        return args;
    }

    bool bypass_exec_name{true};
    for (auto arg : argv)
    {
        std::string arg_str(arg);

        try
        {
            float price = std::stof(arg_str);
            args.prices.push_back(price);
        }
        catch(const std::exception& e)
        {
            args.err = true;
            args.what = "Arguments contained invalid price";
            return args;
        }
        
    }
    
    return args;
}
