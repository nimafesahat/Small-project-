#include <iostream>
using namespace std;

int main()
{
    string customer;
    float price_discount, time_discount, sum_discount, sum_sale, sales_profit, price;
    int customer_number, shopping_number, shopping_time, pay_time, time, i, j;
    i = 1;
    price_discount = time_discount = sum_discount = sum_sale = 0;

    cout << "please enter number of the customers : ";
    cin >> customer_number;
    while (i <= customer_number)
    {
        float sum_price = 0;
        cout << "Please enter name of the customer " << i << " : ";
        cin >> customer;

        cout << "please enter number of the shopping : ";
        cin >> shopping_number;

        cout << "Please enter the pay time : ";
        cin >> pay_time;

        cout << "Please enter the shopping time : ";
        cin >> shopping_time;

        for (int j = 1; j <= shopping_number; j++)
        {
            cout << "Please enter the price number " << j << " :";
            cin >> price;
            sum_price += price;
        }

        if (sum_price > 250000)
        {
            price_discount = 5;
        }

        time = pay_time - shopping_time;
        if (time <= 10)
        {
            time_discount = 3;
        }
        sum_discount = time_discount + price_discount;
        if (sum_discount > 0)
        {
            sum_price -= (sum_price / 100) * sum_discount;
            cout << "The sum shopping of " << customer << " with discount is : " << sum_price << endl;
            sum_sale += sum_price;
        }
        else
        {
            cout << "Your sum shopping of " << customer << " without discount is : " << sum_price << endl;
            sum_sale += sum_price;
        }
        i++;
    }
    sales_profit -= (sum_sale / 100) * 20;
    cout << "All sales of the seller is : " << sum_sale << endl;
    cout << "Profit of the seller is : " << sales_profit;
}