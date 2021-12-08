// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Dec 2021
// This program calculates total from subtotal and tax

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates total from subtotal and tax
    const float HST = 0.15;
    float tax;
    float subTotal;
    float total;

    // input
    std::cout << "Enter the subtotal: $";
    std::cin >> subTotal;

    // process
    tax = + subTotal * HST;
    total = subTotal + tax;

    // output
    std::cout << "" << std::endl;
    std::cout << "The HST is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << tax << ", and the total is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << "." << std::endl;
}
