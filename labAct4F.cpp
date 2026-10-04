#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    int days = 5;
    int sfp = 4;
    int ctrD, ctrS, sale;
    int accumalator = 0, totalSales = 0;
    int dailyCount1000 = 0, totalDailyCount1000 = 0;
    float AverageDailySales;

    cout << fixed << setprecision(2);
    cout << "========== DAILY SALES ANALYSIS ==========";
    for (ctrD = 1; ctrD <= days; ctrD++) 
    {
        dailyCount1000 = 0;
        accumalator = 0;
        cout << "\n\nDays " << ctrD << "\n";
        for (ctrS = 1; ctrS <= sfp; ctrS++)
        {
            cout << "Enter sales for Product " << ctrS << " : ";
            cin >> sale;
            accumalator = accumalator + sale;
            totalSales = totalSales + sale;
            AverageDailySales = totalSales / days;
            if (sale >= 1000)
            {
            dailyCount1000++;
            totalDailyCount1000++;
            }
        }
        cout << "\nTotal Sales = " << accumalator;
        cout << "\nProducts with sales >= 1000: " << dailyCount1000;
    }

    cout << "\n========== SUMMARY ==========" << endl;
    cout << "Total Sales:" << totalSales << endl;
    cout << "Products with Sales >= 1000: " << totalDailyCount1000 << endl;
    cout << "Average Daily Sales:" << AverageDailySales << endl;

    return 0;
}