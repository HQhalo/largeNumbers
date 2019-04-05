#include"QInt.h"
#include "QFloat.h"

template
<class T> void PrintBit(T a) {
	for (int i = 0; i < 128; i++)
		std::cout << a.getBit(127 - i);
	std::cout << "\n";
}
void TestRange() {

	Qfloat A,B;
	std::string a = "1189731495357231765085759326628007130763444687096510237472674821233261358180483686904488595472612039915115437484839309258897667381308687426274524698341565006080871634366004897522143251619531446845952345709482135847036647464830984784714280967845614138476044338404886122905286855313236158695999885790106357018120815363320780964323712757164290613406875202417365323950267880089067517372270610835647545755780793431622213451903817859630690311343850657539360649645193283178291767658965405285113556134369793281725888015908414675289832538063419234888599898980623114025121674472051872439321323198402942705341366951274739014593816898288994445173400364617928377138074411345791848573595077170437644191743889644885377684738322240608239079061399475675334739784016491742621485229014847672335977897158397334226349734811441653077758250988926030894789604676153104257260141806823027588003441951455327701598071281589597169413965608439504983171255062282026626200048042149808200002060993433681237623857880627479727072877482838438705048034164633337013385405998040701908662387301605018188262573723766279240798931717708807901740265407930976419648877869604017517691938687988088008944251258826969688364194133945780157844364946052713655454906327187428531895100278695119323496808703630436193927592692344820812834297364478686862064169042458555136532055050508189891866846863799917647547291371573500701015197559097453040033031520683518216494195636696077748110598284901343611469214274121810495077979275556645164983850062051066517084647369464036640569339464837172183352956873912042640003611618789278195710052094562761306703551840330110645101995435167626688669627763820604342480357906415354212732946756073006907088870496125050068156659252761297664065498347492661798824062312210409274584565587264846417650160123175874034726261957289081466197651553830744424709698634753627770356227126145052549125229448040149114795681359875968512808575244271871455454084894986155020794806980939215658055319165641681105966454159951476908583129721503298816585142073061480888021769818338417129396878371459575846052583142928447249703698548125295775920936450022651427249949580708203966082847550921891152133321048011973883636577825533325988852156325439335021315312134081390451021255363707903495916963125924201167877190108935255914539488216897117943269373608639074472792751116715127106396425081353553137213552890539802602978645319795100976432939091924660228878912900654210118287298298707382159717184569540515403029173307292454391789568674219640761451173600617752186991913366837033887201582071625868247133104513315097274713442728340606642890406496636104443217752811227470029162858093727701049646499540220983981932786613204254226464243689610107429923197638681545837561773535568984536053627234424277105760924864023781629665526314910906960488073475217005121136311870439925762508666032566213750416695719919674223210606724721373471234021613540712188239909701971943944347480314217903886317767779921539892177334344368907550318800833546852344370327089284147501640589448482001254237386680074457341910933774891959681016516069106149905572425810895586938833067490204900368624166301968553005687040285095450484840073528643826570403767157286512380255109954518857013476588189300004138849715883139866071547574816476727635116435462804401112711392529180570794193422686818353212799068972247697191474268157912195973794192807298886952361100880264258801320928040011928153970801130741339550003299015924978259936974358726286143980520112454369271114083747919007803406596321353417004068869443405472140675963640997405009225803505672726465095506267339268892424364561897661906898424186770491035344080399248327097911712881140170384182058601614758284200750183500329358499691864066590539660709069537381601887679046657759654588001937117771344698326428792622894338016112445533539447087462049763409147542099248815521395929388007711172017894897793706604273480985161028815458787911160979113422433557549170905442026397275695283207305331845419990749347810524006194197200591652147867193696254337864981603833146354201700628817947177518115217674352016511172347727727075220056177748218928597158346744541337107358427757919660562583883823262178961691787226118865632764934288772405859754877759869235530653929937901193611669007472354746360764601872442031379944139824366828698790212922996174192728625891720057612509349100482545964152046477925114446500732164109099345259799455690095576788686397487061948854749024863607921857834205793797188834779656273479112388585706424836379072355410286787018527401653934219888361061949671961055068686961468019035629749424086587195041004404915266476272761070511568387063401264136517237211409916458796347624949215904533937210937520465798300175408017538862312719042361037129338896586028150046596078872444365564480545689033575955702988396719744528212984142578483954005084264327730840985420021409069485412320805268520094146798876110414583170390473982488899228091818213934288295679717369943152460447027290669964066816";
	std::string b = "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010";
/*	for (int i = 0; i < 128; i++)
	{
		A.setBit(127 - i, a[i] - '0');
		B.setBit(127 - i, b[i] - '0');
	}
*/
	//A.setExponent((1 << 15) -2 );
	A = Qfloat::decToBin(a);

	
	//B.setExponent(0);
	//std::string s = Qfloat::binToDec(A);
	PrintBit(A);
	//std::cin >> s;
	//A = Qfloat::decToBin(s);
	/*std::cin >> s;
	B = Qfloat::decToBin(s);
	*/

	//std::cout << Qfloat::binToDec(A) << "\n";
	//std::cout << Qfloat::binToDec(B) << "\n";
	//std::cout << Qfloat::binToDec(B / A) << "\n";
	//PrintBit(B);
	//PrintBit(A);

	//A = B / A;
	//PrintBit(A);

	system("pause");
}
void TestQInt() {
	QInt A, B;
	std::string a = "0000000000000000000000000100010010000000000000000000000000000000000000000000000000000000000000000000000000000000000001001010000";
	std::string b = "00000000000101001000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000010000000000010";
	for (int i = 0; i < 128; i++)
	{
		A.setBit(127 - i, (a[i] - '0' ));
		B.setBit(127 - i, b[i] - '0');
	}
	

	std::string s = QInt::binToDec(A);
	//std::cout << s << "\n";
	//PrintBit(A);
	//PrintBit(B);
	//PrintBit(A + B);
	//std::cout << QInt::binToDec(A) << "\n";
	//std::cout << QInt::binToDec(B) << "\n";
	//std::cout << QInt::binToDec(B / A) << "\n";


	std::cin >> s;
	A = QInt::hexToBin(s);

	std::cin >> s;
	B = QInt::hexToBin(s);

	std::cout << QInt::binToHex(A + B);

	//std::cin >> s;
	//A = QInt::decToBin(s);
	/*std::cin >> s;
	B = Qfloat::decToBin(s);
	*/

	system("pause");
}
void TestToken() {
	std::string s = "10 1 + 210624583337114373395836055367340864637790190801098222508621955071";
	std::cout <<QInt::getToken(s);
	system("pause");
}
int main(int argc, char const *argv[])
{
	TestRange();
	//TestQInt();
	//TestToken();
	return 0;
    /* code */
	/*std::string s;
	getline(std::cin,s);
	
	std::cout << QInt::getToken(s);
	*/
	

	//std::string s;
	// getline(std::cin,s);
	
	// std::cout << QInt::getToken(s);

	/*
	Qfloat x = Qfloat();
	Qfloat::scanQfloat(x);

	std::cout << Qfloat::binToDec(x);

	std::cout << "\n";
	std::cout << "\n";

	Qfloat y = Qfloat();
	Qfloat::scanQfloat(y);
	std::cout << Qfloat::binToDec(y);

	std::cout << "\n";
	std::cout << "\n";
	std::cout << Qfloat::binToDec( x + y);
	*/

	std::cout << "Test dectoBin\n";
	std::cout << "Nhap so thap phan\n";
	std::string s;
	std::cin >> s;
	Qfloat A = Qfloat::decToBin(s);
	

	// std::cout << "Test dectoBin\n";
	// std::cout << "Nhap so thap phan\n";
	// std::cin >> s;
	// Qfloat A = Qfloat::decToBin(s);


	std::cout << "Nhap so thap phan\n";
	std::cin >> s;
 	Qfloat B = Qfloat::decToBin(s);



	std::cout << "ket qua phep *\n";
	std::cout <<Qfloat::binToDec(A / B);

	// std::cout << "ket qua phep *\n";
	// std::cout <<Qfloat::binToDec(A + B);

	/*
	std::cout << "ket qua phep  *  \n";
	std::cout <<Qfloat::binToDec(A * B);
	std::cout << "\n";

	//std::cout << Qfloat::binToDec(A);
	*/
	
	

	/*
	std::string s;
	std::cin >> s;
	QInt a = QInt(s);
	
	std::cin >> s;
	QInt b = QInt(s);

	std::cout << QInt::binToDec(a % b);
	*/
	

	system("pause");
    return 0;
}
