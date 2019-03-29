#include "QFloat.h"
Qfloat::Qfloat(){
    cell[0] = cell[1] = cell[2] = cell[3] = 0;
}

bool Qfloat::getBit(const unsigned char &index){
    return ((cell[3 - index / 32] >> (index % 32)) & 1);
}

void Qfloat::turnBitOn(const unsigned char &index){
    cell[3 - index / 32] |= 1 << (index % 32);
}

void Qfloat::turnBitOff(const unsigned char &index){
    cell[3 - index / 32] &= ~(unsigned int (1) << (index % 32));
}

void Qfloat::setBit(const unsigned char &index, const bool &value)
{
    if (value) turnBitOn(index);
    else turnBitOff(index);
}

QInt Qfloat::convert() {
	return QInt(cell);
}

int  Qfloat::getExponent() const {
	Qfloat tmp = *this;
	tmp.turnBitOff(127);
	int ans = tmp.cell[0];
	ans = ans >> 16;
	return ans;
}
void Qfloat::setExponent(int Ex) {
	unsigned int tmp = ((unsigned int)1 << 15) - 1;
	tmp = tmp << 16;

	(*this).cell[0] &= ~tmp;
	cell[0] += Ex << 16;
}



Qfloat Qfloat::operator * (Qfloat const & other) {
	int Ex1 = getExponent();
	int Ex2 = other.getExponent();
	int Ex = Ex1 + Ex2 - (1 << 16) - 1;

	QInt tmp = ()

	QInt A = (

}


Qfloat Qfloat::operator + (Qfloat const & other)
{
    Qfloat re;

    QInt number1(*this);
    QInt number2(other);
    QInt numberRe;

    int exponent1 = this->getExponent();
    int exponent2 = other.getExponent();
    int exponent = 0 ;

    bool sign1 = QInt.getBit(127);
    bool sign2 = QInt.getBit(127);
    bool sign;

    if(exponent1 > exponent2)
    {
        int shift = exponent1- exponent2;
        number2 = number2 >> shift ;
        number2 = number1 ;
    }
    if(exponent1 < exponent2)
    {
        int shift = exponent2- exponent1;
        number1 = number1 >> shift ;
        number1 = number2 ;
    }
    exponent = exponent1;
     
    if(sign1 == sign2)
    {
        numberRe= number1 + number2;
        sign = sign1;
        if(numberRe.getBit(113)= true)
        {
            numberRe >> 1;
            exponent ++ ;
        }
    }
    else
    {
        numberRe = (number1 > number2 ) ? (number1 - number2 ) : ( number2- number1 );
        sign = ( number1 > number2 ) ? sign1 : sign2;
        
        for(int i=112;i >= 0 ; i-- )
        {
            if(numberRe.getBit(112) == true)
                break;
            numberRe << 1; 
            exponent -- ;       
        }
    }
    
    re.setBit(127,sign);
    re.setExponent(exponent);
    
	for(int i=0 ; i < 112 ; i++)
	{
		re.setBit(i, (numberRe >> i) &1 ); 
	}

	return re;
}









