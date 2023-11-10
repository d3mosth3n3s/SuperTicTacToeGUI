//---------------------------------------------------------------------------

#ifndef STTTH
#define STTTH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Filter.Effects.hpp>
#include <FMX.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TButton* Button1;
	TLine* Line1;
	TLine* Line2;
	TLine* Line3;
	TLine* Line4;
	TInvertEffect* InvertEffect1;
	TButton* Button2;
	TInvertEffect* InvertEffect2;
	TButton* Button3;
	TInvertEffect* InvertEffect3;
	TButton* Button4;
	TInvertEffect* InvertEffect4;
	TButton* Button5;
	TInvertEffect* InvertEffect5;
	TButton* Button6;
	TInvertEffect* InvertEffect6;
	TButton* Button7;
	TInvertEffect* InvertEffect7;
	TButton* Button8;
	TInvertEffect* InvertEffect8;
	TButton* Button9;
	TInvertEffect* InvertEffect9;
	TButton* Button10;
	TInvertEffect* InvertEffect10;
	TButton* Button11;
	TInvertEffect* InvertEffect11;
	TButton* Button12;
	TInvertEffect* InvertEffect12;
	TButton* Button13;
	TInvertEffect* InvertEffect13;
	TButton* Button14;
	TInvertEffect* InvertEffect14;
	TButton* Button15;
	TInvertEffect* InvertEffect15;
	TButton* Button16;
	TInvertEffect* InvertEffect16;
	TButton* Button17;
	TInvertEffect* InvertEffect17;
	TButton* Button18;
	TInvertEffect* InvertEffect18;
	TButton* Button19;
	TInvertEffect* InvertEffect19;
	TButton* Button20;
	TInvertEffect* InvertEffect20;
	TButton* Button21;
	TInvertEffect* InvertEffect21;
	TButton* Button22;
	TInvertEffect* InvertEffect22;
	TButton* Button23;
	TInvertEffect* InvertEffect23;
	TButton* Button24;
	TInvertEffect* InvertEffect24;
	TButton* Button25;
	TInvertEffect* InvertEffect25;
	TButton* Button26;
	TInvertEffect* InvertEffect26;
	TButton* Button27;
	TInvertEffect* InvertEffect27;
	TButton* Button28;
	TInvertEffect* InvertEffect28;
	TButton* Button29;
	TInvertEffect* InvertEffect29;
	TButton* Button30;
	TInvertEffect* InvertEffect30;
	TButton* Button31;
	TInvertEffect* InvertEffect31;
	TButton* Button32;
	TInvertEffect* InvertEffect32;
	TButton* Button33;
	TInvertEffect* InvertEffect33;
	TButton* Button34;
	TInvertEffect* InvertEffect34;
	TButton* Button35;
	TInvertEffect* InvertEffect35;
	TButton* Button36;
	TInvertEffect* InvertEffect36;
	TButton* Button37;
	TInvertEffect* InvertEffect37;
	TButton* Button38;
	TInvertEffect* InvertEffect38;
	TButton* Button39;
	TInvertEffect* InvertEffect39;
	TButton* Button40;
	TInvertEffect* InvertEffect40;
	TButton* Button41;
	TInvertEffect* InvertEffect41;
	TButton* Button42;
	TInvertEffect* InvertEffect42;
	TButton* Button43;
	TInvertEffect* InvertEffect43;
	TButton* Button44;
	TInvertEffect* InvertEffect44;
	TButton* Button45;
	TInvertEffect* InvertEffect45;
	TButton* Button46;
	TInvertEffect* InvertEffect46;
	TButton* Button47;
	TInvertEffect* InvertEffect47;
	TButton* Button48;
	TInvertEffect* InvertEffect48;
	TButton* Button49;
	TInvertEffect* InvertEffect49;
	TButton* Button50;
	TInvertEffect* InvertEffect50;
	TButton* Button51;
	TInvertEffect* InvertEffect51;
	TButton* Button52;
	TInvertEffect* InvertEffect52;
	TButton* Button53;
	TInvertEffect* InvertEffect53;
	TButton* Button54;
	TInvertEffect* InvertEffect54;
	TButton* Button55;
	TInvertEffect* InvertEffect55;
	TButton* Button56;
	TInvertEffect* InvertEffect56;
	TButton* Button57;
	TInvertEffect* InvertEffect57;
	TButton* Button58;
	TInvertEffect* InvertEffect58;
	TButton* Button59;
	TInvertEffect* InvertEffect59;
	TButton* Button60;
	TInvertEffect* InvertEffect60;
	TButton* Button61;
	TInvertEffect* InvertEffect61;
	TButton* Button62;
	TInvertEffect* InvertEffect62;
	TButton* Button63;
	TInvertEffect* InvertEffect63;
	TButton* Button64;
	TInvertEffect* InvertEffect64;
	TButton* Button65;
	TInvertEffect* InvertEffect65;
	TButton* Button66;
	TInvertEffect* InvertEffect66;
	TButton* Button67;
	TInvertEffect* InvertEffect67;
	TButton* Button68;
	TInvertEffect* InvertEffect68;
	TButton* Button69;
	TInvertEffect* InvertEffect69;
	TButton* Button70;
	TInvertEffect* InvertEffect70;
	TButton* Button71;
	TInvertEffect* InvertEffect71;
	TButton* Button72;
	TInvertEffect* InvertEffect72;
	TButton* Button73;
	TInvertEffect* InvertEffect73;
	TButton* Button74;
	TInvertEffect* InvertEffect74;
	TButton* Button75;
	TInvertEffect* InvertEffect75;
	TButton* Button76;
	TInvertEffect* InvertEffect76;
	TButton* Button77;
	TInvertEffect* InvertEffect77;
	TButton* Button78;
	TInvertEffect* InvertEffect78;
	TButton* Button79;
	TInvertEffect* InvertEffect79;
	TButton* Button80;
	TInvertEffect* InvertEffect80;
	TButton* Button81;
	TInvertEffect* InvertEffect81;
	TImage* X1;
	TImage* O1;
	TImage* GridImage1;
	TImage* GridImage2;
	TPanel* Panel1;
	TPanel* Panel2;
	TPanel* Panel3;
	TPanel* Panel4;
	TPanel* Panel5;
	TPanel* Panel6;
	TPanel* Panel7;
	TPanel* Panel8;
	TPanel* Panel9;
	TImage* O2;
	TImage* O3;
	TImage* O4;
	TImage* O5;
	TImage* O6;
	TImage* O7;
	TImage* O8;
	TImage* O9;
	TImage* X2;
	TImage* X3;
	TImage* X4;
	TImage* X5;
	TImage* X6;
	TImage* X7;
	TImage* X8;
	TImage* X9;
	TImage* winImage;
	TImage* Image1;
	TImage* xIndicate;
	TLabel* Z;
	TImage *tiedImage;
	TImage *oIndicate;
	void __fastcall ButtonClick(TObject* Sender);






private:	// User declarations
	bool CheckIsSmallWinnerQ1(UnicodeString& winnerSymbol);
	bool CheckIsSmallWinnerQ2(UnicodeString& winnerSymbol);
	bool CheckIsSmallWinnerQ3(UnicodeString& winnerSymbol);
	bool CheckIsSmallWinnerQ4(UnicodeString& winnerSymbol);
	bool CheckIsSmallWinnerQ5(UnicodeString& winnerSymbol);
	bool CheckIsSmallWinnerQ6(UnicodeString& winnerSymbol);
	bool CheckIsSmallWinnerQ7(UnicodeString& winnerSymbol);
	bool CheckIsSmallWinnerQ8(UnicodeString& winnerSymbol);
	bool CheckIsSmallWinnerQ9(UnicodeString& winnerSymbol);
	bool CheckIsBigWinner();
	int NextGrid(TButton* lastClickedButton);
	void HandlePlayerMove();
	void ClearPanels();
public: // User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3* Form3;
//---------------------------------------------------------------------------
#endif




