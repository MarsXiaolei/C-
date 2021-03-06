/*
 * C++类中成员变量的初始化有两种方式：构造函数初始化列表和构造函数体内赋值
 * 注意：这两种方式不能同时出现，同名同参数属于函数重复定义
 * 初始化列表由包含在括号中的参数声明后面的冒号标识，冒号后面列出了各个成员变量及其初始值。
 * 初始值可以是参数，也可以是固定的值
 */
#include "Phone.h"

/**
 * @brief 默认构造函数
 */
Phone::Phone()
{
    m_brand = "";        // 品牌
    m_model = "";        // 型号
    m_color = "";        // 颜色
    m_price = 0;         // 价格
}

/**
 * @brief 通过构造函数初始化列表方式初始化类成员变量
 * @param brand
 * @param model
 * @param color
 * @param price
 */
Phone::Phone(const std::string brand, const std::string model, const std::string color, const int price)
    :m_brand(brand),m_model(model),m_color(color),m_price(price)
{
    std::cout<<"m_brand "<<m_brand<<"\n"
            <<"m_model "<<m_model<<"\n"
           <<"m_color "<< m_color<<"\n"
          <<"m_price "<<m_price;
}


/**
 * @brief 通过构造函数内赋值初始化类成员变量
 * @param brand
 * @param model
 * @param color
 * @param price
 */
//Phone::Phone(const std::string brand, const std::string model, const std::string color, const int price)
//{
//    m_brand = brand;        // 品牌
//    m_model = model;        // 型号
//    m_color = color;        // 颜色
//    m_price = price;        // 价格

//    std::cout<<"m_brand "<<m_brand<<"\n"
//            <<"m_model "<<m_model<<"\n"
//           <<"m_color "<< m_color<<"\n"
//          <<"m_price "<<m_price;
//}

Phone::~Phone()
{

}

void Phone::setBrand(const std::string brand)
{
    m_brand = brand;
}

std::string Phone::getBrand()
{
    return m_brand;
}

void Phone::setModel(const std::string model)
{
    m_model = model;
}

std::string Phone::getModel()
{
    return m_model;
}

void Phone::setColor(const std::string color)
{
    m_color = color;
}

std::string Phone::getColor()
{
    return m_color;
}

void Phone::setPrice(const int price)
{
    m_price = price;
}

int Phone::getPrice()
{
    return m_price;
}
