#include <iostream>
#include <vector>
int SumOfDigits(int digit)
{
    int sum = 0;
    while (digit != 0)
    {
        sum += digit%10;
        digit /= 10;
    }
    return sum;
}

bool IsPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}
int main() {
    std::vector<int> arrvec;
    arrvec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 24234, 10, 1, 43, 432, 43242};
    std::cout << "Before: " << std::endl;
    for (int i : arrvec)
        std::cout << i << std::endl;
    for (int i = 0; i < arrvec.size() ; ++i)
    {
        if(IsPrime(arrvec[i]))
        {
            //std::cout << "prime" << std::endl;
            arrvec.erase(arrvec.begin() + i);
        }
        else if(SumOfDigits(arrvec[i]) == 15)
        {
            std::cout << "Summ of digit is 15" << std::endl;
            arrvec.insert(arrvec.begin() + i, arrvec[i]);
            i++;
        }
    }
    std::cout << "After:" << std::endl;
    for (int i = 0; i < arrvec.size() ; ++i)
        std::cout << arrvec[i] << std::endl;
    return 0;
}