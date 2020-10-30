//**@page Заголовочный файл для класса Транспорт
#pragma once
using namespace std;
#include <iostream>
/**
@brief Абстрактный Класс "Транспорта"
*/
class Transport {
public:
	virtual string MakeSignal() = 0;
};

/**
@brief Абстрактный Класс "Наземного вида транспорта"
@detailed Наследуется виртуально от класса Транспорт.
*/
class GroundTransport : virtual public Transport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief Абстрактный Класс "Подземного вида транспорта"
@detailed Наследуется виртуально от класса Транспорт.
*/
class UnderGroundTransport : virtual  public Transport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief Абстрактный Класс "Воздушного вида транспорта"
@detailed Наследуется виртуально от класса Транспорт.
*/
class AirTransport : virtual  public Transport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief Абстрактный Класс "Водного вида транспорта"
@detailed Наследуется виртуально от класса Транспорт.
*/
class WaterTransport :virtual public Transport {
public:
	virtual string MakeSignal() = 0;
};

// 

/**
@brief Класс Интерфейс для класса "Метро"
@detailed Наследуется от класса ПодзменыйТранспорт.
*/
class MetroI : public UnderGroundTransport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief Класс "Метро"
@detailed Наследуется от класса МетроИнтерфейс.
*/
class Metro : public MetroI {
public:
	string MakeSignal() override; 
};

/**
@brief Класс Интерфейс для класса "Самолет"
@detailed Наследуется от класса ВоздушныйТранспорт.
*/
class PlaneI : public AirTransport {
public:
	virtual string MakeSignal() = 0 ;
};
/**
@brief Класс "Самолет"
@detailed Наследуется от класса СамолетИнтерфейс.
*/
class Plane : public PlaneI {
public:
	string MakeSignal() override;
};

/**
@brief Класс Интерфейс для класса "Вертолет"
@detailed Наследуется от класса ВоздушныйТранспорт.
*/
class HelicopterI : public AirTransport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief Класс "Вертолет"
@detailed Наследуется от класса ВертолетИнтерфейс.
*/
class Helicopter : public HelicopterI {
public:
	string MakeSignal() override;
};

/**
@brief Класс Интерфейс для класса "Лайнер"
@detailed Наследуется от класса ВодныйТранспорт.
*/
class LinerI : public WaterTransport {
public:
	virtual string MakeSignal() = 0 ;
};
/**
@brief Класс "Лайнер"
@detailed Наследуется от класса ЛайнерИнтерфейс.
*/
class Liner : public LinerI {
public:
	string MakeSignal() override;
};

/**
@brief Класс Интерфейс для класса "Яхта"
@detailed Наследуется от класса ВодныйТранспорт.
*/
class YachtI : public WaterTransport {
public:
	virtual string MakeSignal() = 0;
};

/**
@brief Класс "Яхта"
@detailed Наследуется от класса ЯхтаИнтерфейс.
*/
class Yacht : public YachtI {
public:
	string MakeSignal() override;
};

/**
@brief Класс Интерфейс для класса "Поезд"
@detailed Наследуется от класса НазменыйТранспорт.
*/
class TrainI : public GroundTransport {
public:
	virtual string MakeSignal()= 0;
};
/**
@brief Класс "Поезд"
@detailed Наследуется от класса ПоездИнтерфейс.
*/
class Train : public TrainI {
public:
	string MakeSignal() override;
};

/**
@brief Класс Интерфейс для класса "Велосипед"
@detailed Наследуется от класса НазменыйТранспорт.
*/
class BicycleI : public GroundTransport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief Класс "Велосипед"
@detailed Наследуется от класса ВелосипедИнтерфейс.
*/
class Bicycle : public BicycleI {
public:
	string MakeSignal() override;
};

/**
@brief Класс Интерфейс для класса "Автобус"
@detailed Наследуется от класса НазменыйТранспорт.
*/
class BusI : public GroundTransport {
public:
	virtual string MakeSignal() = 0 ;
};
/**
@brief Класс "Автобус"
@detailed Наследуется от класса АвтобусИнтерфейс.
*/
class Bus : public BusI {
public:
	string MakeSignal() override;
};

/**
@brief Класс Интерфейс для класса "Машина"
@detailed Наследуется от класса НазменыйТранспорт.
*/
class carI : public GroundTransport {
public:
	virtual string MakeSignal() = 0 ;
};

/**
@brief Класс "Машина"
@detailed Наследуется от класса МашинаИнтерфейс.
*/
class car : public carI {
public:
	string MakeSignal() override;
};

//
/**
@brief Класс Интерфейс для класса "ЛетающаяМашина"
@detailed Класс Множественно наследуется от классов МашинаИнтерфейс и ВоздушныйТранспорт
*/
class FlyingcarI : public carI, public  AirTransport{
public:
	virtual string MakeSignal() = 0;
};
/**
@brief Класс "ЛетающаяМашина"
@detailed Наследуется от класса ЛетающаяМашинаИнтерфейс.
*/
class Flyingcar :public FlyingcarI {
public:
	string MakeSignal() override ;
};