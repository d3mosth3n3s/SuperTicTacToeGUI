//---------------------------------------------------------------------------
//
#include <fmx.h>
#include <Vcl.Controls.hpp>
#include <Windows.h>
#include <mmsystem.h>
#pragma hdrstop

#include "STTT.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TSuperTicTacToe* SuperTicTacToe;
char currentPlayerSymbol = 'X';
UnicodeString winnerSymbol;
TButton* lastClickedButton = nullptr;
int currentGrid;
bool isQ3Winner = false;

bool TSuperTicTacToe::CheckIsSmallWinnerQ1(UnicodeString& winnerSymbol)
{
    if (!Button1->Text.IsEmpty() && Button1->Text == Button2->Text && Button1->Text == Button3->Text) {
        winnerSymbol = Button1->Text;
        return true;
    }
    if (!Button4->Text.IsEmpty() && Button4->Text == Button5->Text && Button4->Text == Button6->Text) {
        winnerSymbol = Button4->Text;
        return true;
    }
    if (!Button7->Text.IsEmpty() && Button7->Text == Button8->Text && Button7->Text == Button9->Text) {
        winnerSymbol = Button7->Text;
        return true;
    }
    if (!Button1->Text.IsEmpty() && Button1->Text == Button4->Text && Button1->Text == Button7->Text) {
        winnerSymbol = Button1->Text;
        return true;
    }
    if (!Button2->Text.IsEmpty() && Button2->Text == Button5->Text && Button2->Text == Button8->Text) {
        winnerSymbol = Button2->Text;
        return true;
    }
    if (!Button3->Text.IsEmpty() && Button3->Text == Button6->Text && Button3->Text == Button9->Text) {
        winnerSymbol = Button3->Text;
        return true;
    }
    if (!Button1->Text.IsEmpty() && Button1->Text == Button5->Text && Button1->Text == Button9->Text) {
        winnerSymbol = Button1->Text;
        return true;
    }
    if (!Button3->Text.IsEmpty() && Button3->Text == Button5->Text && Button3->Text == Button7->Text) {
        winnerSymbol = Button3->Text;
        return true;
    }

    winnerSymbol = ""; // No winner
    return false;
}

//_____________________________________________________________
bool TSuperTicTacToe::CheckIsSmallWinnerQ2(UnicodeString& winnerSymbol)
{
    if (!Button10->Text.IsEmpty() && Button10->Text == Button11->Text && Button10->Text == Button12->Text) {
        winnerSymbol = Button10->Text;
        return true;
    }
    if (!Button13->Text.IsEmpty() && Button13->Text == Button14->Text && Button13->Text == Button15->Text) {
        winnerSymbol = Button13->Text;
        return true;
    }
    if (!Button16->Text.IsEmpty() && Button16->Text == Button17->Text && Button16->Text == Button18->Text) {
        winnerSymbol = Button16->Text;
        return true;
    }
    if (!Button10->Text.IsEmpty() && Button10->Text == Button13->Text && Button10->Text == Button16->Text) {
        winnerSymbol = Button10->Text;
        return true;
    }
    if (!Button11->Text.IsEmpty() && Button11->Text == Button14->Text && Button11->Text == Button17->Text) {
        winnerSymbol = Button11->Text;
        return true;
    }
    if (!Button12->Text.IsEmpty() && Button12->Text == Button15->Text && Button12->Text == Button18->Text) {
        winnerSymbol = Button12->Text;
        return true;
    }
    if (!Button10->Text.IsEmpty() && Button10->Text == Button14->Text && Button10->Text == Button18->Text) {
        winnerSymbol = Button10->Text;
        return true;
    }
    if (!Button12->Text.IsEmpty() && Button12->Text == Button14->Text && Button12->Text == Button16->Text) {
        winnerSymbol = Button12->Text;
        return true;
    }

    winnerSymbol = ""; // No winner
    return false;
}

//_____________________________________
bool TSuperTicTacToe::CheckIsSmallWinnerQ3(UnicodeString& winnerSymbol)
{
    // Check each row, column, and diagonal for a winning combination.
    if (!Button19->Text.IsEmpty() && Button19->Text == Button20->Text && Button19->Text == Button21->Text) {
        winnerSymbol = Button19->Text;

        return true;
    }
    if (!Button22->Text.IsEmpty() && Button22->Text == Button23->Text &&
        Button22->Text == Button24->Text)
    {
        winnerSymbol = Button22->Text;
        return true;
    }
    if (!Button25->Text.IsEmpty() && Button25->Text == Button26->Text && Button25->Text == Button27->Text) {
        winnerSymbol = Button25->Text;
        return true;
    }
    if (!Button19->Text.IsEmpty() && Button19->Text == Button22->Text && Button19->Text == Button25->Text) {
        winnerSymbol = Button19->Text;
        return true;
    }
    if (!Button20->Text.IsEmpty() && Button20->Text == Button23->Text && Button20->Text == Button26->Text) {
        winnerSymbol = Button20->Text;
        return true;
    }
    if (!Button21->Text.IsEmpty() && Button21->Text == Button24->Text && Button21->Text == Button27->Text) {
        winnerSymbol = Button21->Text;
        return true;
    }
    if (!Button19->Text.IsEmpty() && Button19->Text == Button23->Text && Button19->Text == Button27->Text) {
        winnerSymbol = Button19->Text;
        return true;
    }
    if (!Button21->Text.IsEmpty() && Button21->Text == Button23->Text && Button21->Text == Button25->Text) {
        winnerSymbol = Button21->Text;
        return true;
    }

    // If no winner is found, set winnerSymbol to an empty string.
    winnerSymbol = "";
    return false;
}
//_____________________________________________

bool TSuperTicTacToe::CheckIsSmallWinnerQ4(UnicodeString& winnerSymbol)
{
    // Check each row, column, and diagonal for a winning combination.
    if (!Button28->Text.IsEmpty() && Button28->Text == Button29->Text && Button28->Text == Button30->Text) {
        winnerSymbol = Button28->Text;
        return true;
    }
    if (!Button31->Text.IsEmpty() && Button31->Text == Button32->Text && Button31->Text == Button33->Text) {
        winnerSymbol = Button31->Text;
        return true;
    }
    if (!Button34->Text.IsEmpty() && Button34->Text == Button35->Text && Button34->Text == Button36->Text) {
        winnerSymbol = Button34->Text;
        return true;
    }
    if (!Button28->Text.IsEmpty() && Button28->Text == Button31->Text && Button28->Text == Button34->Text) {
        winnerSymbol = Button28->Text;
        return true;
    }
    if (!Button29->Text.IsEmpty() && Button29->Text == Button32->Text && Button29->Text == Button35->Text) {
        winnerSymbol = Button29->Text;
        return true;
    }
    if (!Button30->Text.IsEmpty() && Button30->Text == Button33->Text && Button30->Text == Button36->Text) {
        winnerSymbol = Button30->Text;
        return true;
    }
    if (!Button28->Text.IsEmpty() && Button28->Text == Button32->Text && Button28->Text == Button36->Text) {
        winnerSymbol = Button28->Text;
        return true;
    }
    if (!Button30->Text.IsEmpty() && Button30->Text == Button32->Text && Button30->Text == Button34->Text) {
        winnerSymbol = Button30->Text;
        return true;
    }

    // If no winner is found, set winnerSymbol to an empty string.
    winnerSymbol = "";
    return false;
}

//_____________________________________________
bool TSuperTicTacToe::CheckIsSmallWinnerQ5(UnicodeString& winnerSymbol)
{
    // Check each row, column, and diagonal for a winning combination.
    if (!Button37->Text.IsEmpty() && Button37->Text == Button38->Text && Button37->Text == Button39->Text) {
        winnerSymbol = Button37->Text;
        return true;
    }
    if (!Button40->Text.IsEmpty() && Button40->Text == Button41->Text && Button40->Text == Button42->Text) {
        winnerSymbol = Button40->Text;
        return true;
    }
    if (!Button43->Text.IsEmpty() && Button43->Text == Button44->Text && Button43->Text == Button45->Text) {
        winnerSymbol = Button43->Text;
        return true;
    }
    if (!Button37->Text.IsEmpty() && Button37->Text == Button40->Text && Button37->Text == Button43->Text) {
        winnerSymbol = Button37->Text;
        return true;
    }
    if (!Button38->Text.IsEmpty() && Button38->Text == Button41->Text && Button38->Text == Button44->Text) {
        winnerSymbol = Button38->Text;
        return true;
    }
    if (!Button39->Text.IsEmpty() && Button39->Text == Button42->Text && Button39->Text == Button45->Text) {
        winnerSymbol = Button39->Text;
        return true;
    }
    if (!Button37->Text.IsEmpty() && Button37->Text == Button41->Text && Button37->Text == Button45->Text) {
        winnerSymbol = Button37->Text;
        return true;
    }
    if (!Button39->Text.IsEmpty() && Button39->Text == Button41->Text && Button39->Text == Button43->Text) {
        winnerSymbol = Button39->Text;
        return true;
    }

    // If no winner is found, set winnerSymbol to an empty string.
    winnerSymbol = "";
    return false;
}
//____________________________________________
bool TSuperTicTacToe::CheckIsSmallWinnerQ6(UnicodeString& winnerSymbol)
{
    // Check each row, column, and diagonal for a winning combination.
    if (!Button46->Text.IsEmpty() && Button46->Text == Button47->Text && Button46->Text == Button48->Text) {
        winnerSymbol = Button46->Text;
        return true;
    }
    if (!Button49->Text.IsEmpty() && Button49->Text == Button50->Text && Button49->Text == Button51->Text) {
        winnerSymbol = Button49->Text;
        return true;
    }
    if (!Button52->Text.IsEmpty() && Button52->Text == Button53->Text && Button52->Text == Button54->Text) {
        winnerSymbol = Button52->Text;
        return true;
    }
    if (!Button46->Text.IsEmpty() && Button46->Text == Button49->Text && Button46->Text == Button52->Text) {
        winnerSymbol = Button46->Text;
        return true;
    }
    if (!Button47->Text.IsEmpty() && Button47->Text == Button50->Text && Button47->Text == Button53->Text) {
        winnerSymbol = Button47->Text;
        return true;
    }
    if (!Button48->Text.IsEmpty() && Button48->Text == Button51->Text && Button48->Text == Button54->Text) {
        winnerSymbol = Button48->Text;
        return true;
    }
    if (!Button46->Text.IsEmpty() && Button46->Text == Button50->Text && Button46->Text == Button54->Text) {
        winnerSymbol = Button46->Text;
        return true;
    }
    if (!Button48->Text.IsEmpty() && Button48->Text == Button50->Text && Button48->Text == Button52->Text) {
        winnerSymbol = Button48->Text;
        return true;
    }

    // If no winner is found, set winnerSymbol to an empty string.
    winnerSymbol = "";
    return false;
}
//____________________________________________
bool TSuperTicTacToe::CheckIsSmallWinnerQ7(UnicodeString& winnerSymbol)
{
    // Check each row, column, and diagonal for a winning combination.
    if (!Button55->Text.IsEmpty() && Button55->Text == Button56->Text && Button55->Text == Button57->Text) {
        winnerSymbol = Button55->Text;
        return true;
    }
    if (!Button58->Text.IsEmpty() && Button58->Text == Button59->Text && Button58->Text == Button60->Text) {
        winnerSymbol = Button58->Text;
        return true;
    }
    if (!Button61->Text.IsEmpty() && Button61->Text == Button62->Text && Button61->Text == Button63->Text) {
        winnerSymbol = Button61->Text;
        return true;
    }
    if (!Button55->Text.IsEmpty() && Button55->Text == Button58->Text && Button55->Text == Button61->Text) {
        winnerSymbol = Button55->Text;
        return true;
    }
    if (!Button56->Text.IsEmpty() && Button56->Text == Button59->Text && Button56->Text == Button62->Text) {
        winnerSymbol = Button56->Text;
        return true;
    }
    if (!Button57->Text.IsEmpty() && Button57->Text == Button60->Text && Button57->Text == Button63->Text) {
        winnerSymbol = Button57->Text;
        return true;
    }
    if (!Button55->Text.IsEmpty() && Button55->Text == Button59->Text && Button55->Text == Button63->Text) {
        winnerSymbol = Button55->Text;
        return true;
    }
    if (!Button57->Text.IsEmpty() && Button57->Text == Button59->Text && Button57->Text == Button61->Text) {
        winnerSymbol = Button57->Text;
        return true;
    }

    // If no winner is found, set winnerSymbol to an empty string.
    winnerSymbol = "";
    return false;
}

//______________________________________________
bool TSuperTicTacToe::CheckIsSmallWinnerQ8(UnicodeString& winnerSymbol)
{
    // Check each row, column, and diagonal for a winning combination.
    if (!Button64->Text.IsEmpty() && Button64->Text == Button65->Text && Button64->Text == Button66->Text) {
        winnerSymbol = Button64->Text;
        return true;
    }
    if (!Button67->Text.IsEmpty() && Button67->Text == Button68->Text && Button67->Text == Button69->Text) {
        winnerSymbol = Button67->Text;
        return true;
    }
    if (!Button70->Text.IsEmpty() && Button70->Text == Button71->Text && Button70->Text == Button72->Text) {
        winnerSymbol = Button70->Text;
        return true;
    }
    if (!Button64->Text.IsEmpty() && Button64->Text == Button67->Text && Button64->Text == Button70->Text) {
        winnerSymbol = Button64->Text;
        return true;
    }
    if (!Button65->Text.IsEmpty() && Button65->Text == Button68->Text && Button65->Text == Button71->Text) {
        winnerSymbol = Button65->Text;
        return true;
    }
    if (!Button66->Text.IsEmpty() && Button66->Text == Button69->Text && Button66->Text == Button72->Text) {
        winnerSymbol = Button66->Text;
        return true;
    }
    if (!Button64->Text.IsEmpty() && Button64->Text == Button68->Text && Button64->Text == Button72->Text) {
        winnerSymbol = Button64->Text;
        return true;
    }
    if (!Button66->Text.IsEmpty() && Button66->Text == Button68->Text && Button66->Text == Button70->Text) {
        winnerSymbol = Button66->Text;
        return true;
    }

    // If no winner is found, set winnerSymbol to an empty string.
    winnerSymbol = "";
    return false;
}

//_______________________________________________
bool TSuperTicTacToe::CheckIsSmallWinnerQ9(UnicodeString& winnerSymbol)
{
    // Check each row, column, and diagonal for a winning combination.
    if (!Button73->Text.IsEmpty() && Button73->Text == Button74->Text && Button73->Text == Button75->Text) {
        winnerSymbol = Button73->Text;
        return true;
    }
    if (!Button76->Text.IsEmpty() && Button76->Text == Button77->Text && Button76->Text == Button78->Text) {
        winnerSymbol = Button76->Text;
        return true;
    }
    if (!Button79->Text.IsEmpty() && Button79->Text == Button80->Text && Button79->Text == Button81->Text) {
        winnerSymbol = Button79->Text;
        return true;
    }
    if (!Button73->Text.IsEmpty() && Button73->Text == Button76->Text && Button73->Text == Button79->Text) {
        winnerSymbol = Button73->Text;
        return true;
    }
    if (!Button74->Text.IsEmpty() && Button74->Text == Button77->Text && Button74->Text == Button80->Text) {
        winnerSymbol = Button74->Text;
        return true;
    }
    if (!Button75->Text.IsEmpty() && Button75->Text == Button78->Text && Button75->Text == Button81->Text) {
        winnerSymbol = Button75->Text;
        return true;
    }
    if (!Button73->Text.IsEmpty() && Button73->Text == Button77->Text && Button73->Text == Button81->Text) {
        winnerSymbol = Button73->Text;
        return true;
    }
    if (!Button75->Text.IsEmpty() && Button75->Text == Button77->Text && Button75->Text == Button79->Text) {
        winnerSymbol = Button75->Text;
        return true;
    }

    // If no winner is found, set winnerSymbol to an empty string.
    winnerSymbol = "";
    return false;
}

//____________________________________________

int TSuperTicTacToe::NextGrid(TButton* lastClickedButton)
{
    int nextGrid = 0; // Initialize currentGrid to 0

    // Set currentGrid based on the range of buttons
    if (lastClickedButton == FindComponent("Button1") ||
        lastClickedButton == FindComponent("Button10") ||
        lastClickedButton == FindComponent("Button19") ||
        lastClickedButton == FindComponent("Button28") ||
        lastClickedButton == FindComponent("Button37") ||
        lastClickedButton == FindComponent("Button46") ||
        lastClickedButton == FindComponent("Button55") ||
        lastClickedButton == FindComponent("Button64") ||
        lastClickedButton == FindComponent("Button73"))
    {
        nextGrid = 1;

    }
    else if (lastClickedButton == FindComponent("Button2") ||
        lastClickedButton == FindComponent("Button11") ||
        lastClickedButton == FindComponent("Button20") ||
        lastClickedButton == FindComponent("Button29") ||
        lastClickedButton == FindComponent("Button38") ||
        lastClickedButton == FindComponent("Button47") ||
        lastClickedButton == FindComponent("Button56") ||
        lastClickedButton == FindComponent("Button65") ||
        lastClickedButton == FindComponent("Button74"))
    {
        nextGrid = 2;
    }
    else if (lastClickedButton == FindComponent("Button3") ||
        lastClickedButton == FindComponent("Button12") ||
        lastClickedButton == FindComponent("Button21") ||
        lastClickedButton == FindComponent("Button30") ||
        lastClickedButton == FindComponent("Button39") ||
        lastClickedButton == FindComponent("Button48") ||
        lastClickedButton == FindComponent("Button57") ||
        lastClickedButton == FindComponent("Button66") ||
        lastClickedButton == FindComponent("Button75"))
    {
        nextGrid = 3;
    }
    else if (lastClickedButton == FindComponent("Button4") ||
        lastClickedButton == FindComponent("Button13") ||
        lastClickedButton == FindComponent("Button22") ||
        lastClickedButton == FindComponent("Button31") ||
        lastClickedButton == FindComponent("Button40") ||
        lastClickedButton == FindComponent("Button49") ||
        lastClickedButton == FindComponent("Button58") ||
        lastClickedButton == FindComponent("Button67") ||
        lastClickedButton == FindComponent("Button76"))
    {
        nextGrid = 4;
    }
    else if (lastClickedButton == FindComponent("Button5") ||
        lastClickedButton == FindComponent("Button14") ||
        lastClickedButton == FindComponent("Button23") ||
        lastClickedButton == FindComponent("Button32") ||
        lastClickedButton == FindComponent("Button41") ||
        lastClickedButton == FindComponent("Button50") ||
        lastClickedButton == FindComponent("Button59") ||
        lastClickedButton == FindComponent("Button68") ||
        lastClickedButton == FindComponent("Button77"))
    {
        nextGrid = 5;
    }
    else if (lastClickedButton == FindComponent("Button6") ||
        lastClickedButton == FindComponent("Button15") ||
        lastClickedButton == FindComponent("Button24") ||
        lastClickedButton == FindComponent("Button33") ||
        lastClickedButton == FindComponent("Button42") ||
        lastClickedButton == FindComponent("Button51") ||
        lastClickedButton == FindComponent("Button60") ||
        lastClickedButton == FindComponent("Button69") ||
        lastClickedButton == FindComponent("Button78"))
    {
        nextGrid = 6;
    }
    else if (lastClickedButton == FindComponent("Button7") ||
        lastClickedButton == FindComponent("Button16") ||
        lastClickedButton == FindComponent("Button25") ||
        lastClickedButton == FindComponent("Button34") ||
        lastClickedButton == FindComponent("Button43") ||
        lastClickedButton == FindComponent("Button52") ||
        lastClickedButton == FindComponent("Button61") ||
        lastClickedButton == FindComponent("Button70") ||
        lastClickedButton == FindComponent("Button79"))
    {
        nextGrid = 7;
    }
    else if (lastClickedButton == FindComponent("Button8") ||
        lastClickedButton == FindComponent("Button17") ||
        lastClickedButton == FindComponent("Button26") ||
        lastClickedButton == FindComponent("Button35") ||
        lastClickedButton == FindComponent("Button44") ||
        lastClickedButton == FindComponent("Button53") ||
        lastClickedButton == FindComponent("Button62") ||
        lastClickedButton == FindComponent("Button71") ||
        lastClickedButton == FindComponent("Button80"))
    {
        nextGrid = 8;
    }
    else if (lastClickedButton == FindComponent("Button9") ||
        lastClickedButton == FindComponent("Button18") ||
        lastClickedButton == FindComponent("Button27") ||
        lastClickedButton == FindComponent("Button36") ||
        lastClickedButton == FindComponent("Button45") ||
        lastClickedButton == FindComponent("Button54") ||
        lastClickedButton == FindComponent("Button63") ||
        lastClickedButton == FindComponent("Button72") ||
        lastClickedButton == FindComponent("Button81"))
    {
        nextGrid = 9;
    }

    return nextGrid;
}



//---------------------------------------------------------------------------
__fastcall TSuperTicTacToe::TSuperTicTacToe(TComponent* Owner)
    : TForm(Owner)
{

	 //PlaySound(TEXT("ipanema.wav"), NULL, SND_FILENAME | SND_ASYNC);
	//button array??

}
//---------------------------------------------------------------------------

void TSuperTicTacToe::ClearPanels() {
    Panel1->Opacity = 0;
    Panel1->HitTest = false;
    Panel2->Opacity = 0;
    Panel2->HitTest = false;
    Panel3->Opacity = 0;
    Panel3->HitTest = false;
    Panel4->Opacity = 0;
    Panel4->HitTest = false;
    Panel5->Opacity = 0;
    Panel5->HitTest = false;
    Panel6->Opacity = 0;
    Panel6->HitTest = false;
    Panel7->Opacity = 0;
    Panel7->HitTest = false;
    Panel8->Opacity = 0;
    Panel8->HitTest = false;
    Panel9->Opacity = 0;
    Panel9->HitTest = false;
}
//-------------------

void __fastcall TSuperTicTacToe::ButtonClick(TObject* Sender)
{
    TButton* clickedButton = dynamic_cast<TButton*>(Sender);
    clickedButton->Text = currentPlayerSymbol;
    if (!clickedButton->Text.IsEmpty()) {

        lastClickedButton = clickedButton;
        clickedButton->Enabled = false;
    }

    bool isWinner = false;



    if (clickedButton->Text == 'X') {
        clickedButton->TextSettings->FontColor = TAlphaColorRec::Red;

    }
    else if (clickedButton->Text == 'O') {
        clickedButton->TextSettings->FontColor = TAlphaColorRec::Green;
    }

    if (CheckIsSmallWinnerQ1(winnerSymbol)) {
        //ClearPanels();

        if (winnerSymbol == 'X') {
            X1->Opacity = 1;

        }
        else {
            O1->Opacity = 1;
        }
		for (int i = 1; i <= 9; i++) {
            TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

            if (button != NULL) {
                button->Enabled = false;
            }
        }


    }

    if (CheckIsSmallWinnerQ2(winnerSymbol)) {


        if (winnerSymbol == 'X') {
            X2->Opacity = 1;

        }
        else {
            O2->Opacity = 1;
        }
        for (int i = 10; i <= 18; i++) {
            TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

            if (button != NULL) {
                button->Enabled = false;
            }
        }
    }

	if (CheckIsSmallWinnerQ3(winnerSymbol)) {

        if (winnerSymbol == 'X') {
            X3->Opacity = 1;

        }
        else {
            O3->Opacity = 1;
        }

        for (int i = 19; i <= 27; i++) {
            TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

            if (button != NULL) {
                button->Enabled = false;
            }
        }

    }

	if (CheckIsSmallWinnerQ4(winnerSymbol)) {

		if (winnerSymbol == 'X') {
            X4->Opacity = 1;

        }
        else {
            O4->Opacity = 1;
        }

        for (int i = 28; i <= 36; i++) {
            TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

            if (button != NULL) {
                button->Enabled = false;
            }
        }

    }

    if (CheckIsSmallWinnerQ5(winnerSymbol)) {

        if (winnerSymbol == 'X') {
            X5->Opacity = 1;

        }
        else {
            O5->Opacity = 1;
        }

        for (int i = 37; i <= 45; i++) {
            TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

            if (button != NULL) {
                button->Enabled = false;
            }
        }

    }

    if (CheckIsSmallWinnerQ6(winnerSymbol)) {

		if (winnerSymbol == 'X') {
            X6->Opacity = 1;

        }
        else {
            O6->Opacity = 1;
        }

        for (int i = 46; i <= 54; i++) {
            TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

            if (button != NULL) {
                button->Enabled = false;
            }
        }

    }

    if (CheckIsSmallWinnerQ7(winnerSymbol)) {

        if (winnerSymbol == 'X') {
            X7->Opacity = 1;

        }
        else {
            O7->Opacity = 1;
        }

        for (int i = 55; i <= 63; i++) {
            TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

            if (button != NULL) {
                button->Enabled = false;
            }
        }

    }

    if (CheckIsSmallWinnerQ8(winnerSymbol)) {

        if (winnerSymbol == 'X') {
            X8->Opacity = 1;

        }
        else {
            O8->Opacity = 1;
        }

        for (int i = 64; i <= 72; i++) {
            TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

            if (button != NULL) {
                button->Enabled = false;
            }
        }

    }

    if (CheckIsSmallWinnerQ9(winnerSymbol)) {

        if (winnerSymbol == 'X') {
            X9->Opacity = 1;

        }
        else {
            O9->Opacity = 1;
        }

        for (int i = 73; i <= 81; i++) {
            TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

            if (button != NULL) {
                button->Enabled = false;
            }
        }

    }





	bool Q1Tie = false;
	bool Q2Tie = false;
	bool Q3Tie = false;
	bool Q4Tie = false;
	bool Q5Tie = false;
	bool Q6Tie = false;
	bool Q7Tie = false;
	bool Q8Tie = false;
	bool Q9Tie = false;
	int openGrid = NextGrid(lastClickedButton);
    bool Q1Winner = CheckIsSmallWinnerQ1(winnerSymbol);
    bool Q2Winner = CheckIsSmallWinnerQ2(winnerSymbol);
    bool Q3Winner = CheckIsSmallWinnerQ3(winnerSymbol);
    bool Q4Winner = CheckIsSmallWinnerQ4(winnerSymbol);
    bool Q5Winner = CheckIsSmallWinnerQ5(winnerSymbol);
    bool Q6Winner = CheckIsSmallWinnerQ6(winnerSymbol);
    bool Q7Winner = CheckIsSmallWinnerQ7(winnerSymbol);
    bool Q8Winner = CheckIsSmallWinnerQ8(winnerSymbol);
	bool Q9Winner = CheckIsSmallWinnerQ9(winnerSymbol);


	if (Q1Winner == false && Button1->Enabled == false &&
	Button2->Enabled == false &&
	Button3->Enabled == false &&
	Button4->Enabled == false &&
	Button5->Enabled == false &&
	Button6->Enabled == false &&
	Button7->Enabled == false &&
	Button8->Enabled == false &&
	Button9->Enabled == false) {
		aTIEIMG->Opacity = 1;
		aTIEIMG->HitTest = true;
		Q1Tie = true;
	}
		if (Q2Winner == false && Button10->Enabled == false &&
	Button11->Enabled == false &&
    Button12->Enabled == false &&
	Button13->Enabled == false &&
	Button14->Enabled == false &&
	Button15->Enabled == false &&
	Button16->Enabled == false &&
	Button17->Enabled == false &&
	Button18->Enabled == false) {
		aTIEIMG2->Opacity = 1;
		aTIEIMG2->HitTest = true;
		Q2Tie = true;
	}

    if (Q3Winner == false && Button19->Enabled == false &&
    Button20->Enabled == false &&
    Button21->Enabled == false &&
    Button22->Enabled == false &&
    Button23->Enabled == false &&
    Button24->Enabled == false &&
    Button25->Enabled == false &&
    Button26->Enabled == false &&
    Button27->Enabled == false) {
    aTIEIMG3->Opacity = 1;
    aTIEIMG3->HitTest = true;
    Q3Tie = true;
}

if (Q4Winner == false && Button28->Enabled == false &&
    Button29->Enabled == false &&
    Button30->Enabled == false &&
    Button31->Enabled == false &&
    Button32->Enabled == false &&
    Button33->Enabled == false &&
    Button34->Enabled == false &&
    Button35->Enabled == false &&
    Button36->Enabled == false) {
    aTIEIMG4->Opacity = 1;
    aTIEIMG4->HitTest = true;
    Q4Tie = true;
}

if (Q5Winner == false && Button37->Enabled == false &&
    Button38->Enabled == false &&
    Button39->Enabled == false &&
    Button40->Enabled == false &&
    Button41->Enabled == false &&
    Button42->Enabled == false &&
    Button43->Enabled == false &&
    Button44->Enabled == false &&
    Button45->Enabled == false) {
    aTIEIMG5->Opacity = 1;
    aTIEIMG5->HitTest = true;
    Q5Tie = true;
}



// Q6
if (Q6Winner == false && Button46->Enabled == false &&
    Button47->Enabled == false &&
    Button48->Enabled == false &&
    Button49->Enabled == false &&
    Button50->Enabled == false &&
    Button51->Enabled == false &&
    Button52->Enabled == false &&
    Button53->Enabled == false &&
    Button54->Enabled == false) {
    aTIEIMG6->Opacity = 1;
    aTIEIMG6->HitTest = true;
    Q6Tie = true;
}

// Q7
if (Q7Winner == false && Button55->Enabled == false &&
    Button56->Enabled == false &&
    Button57->Enabled == false &&
    Button58->Enabled == false &&
    Button59->Enabled == false &&
    Button60->Enabled == false &&
    Button61->Enabled == false &&
    Button62->Enabled == false &&
    Button63->Enabled == false) {
    aTIEIMG7->Opacity = 1;
    aTIEIMG7->HitTest = true;
    Q7Tie = true;
}

// Q8
if (Q8Winner == false && Button64->Enabled == false &&
    Button65->Enabled == false &&
    Button66->Enabled == false &&
    Button67->Enabled == false &&
    Button68->Enabled == false &&
    Button69->Enabled == false &&
    Button70->Enabled == false &&
    Button71->Enabled == false &&
    Button72->Enabled == false) {
    aTIEIMG8->Opacity = 1;
    aTIEIMG8->HitTest = true;
    Q8Tie = true;
}

// Q9
if (Q9Winner == false && Button73->Enabled == false &&
    Button74->Enabled == false &&
    Button75->Enabled == false &&
    Button76->Enabled == false &&
    Button77->Enabled == false &&
    Button78->Enabled == false &&
    Button79->Enabled == false &&
    Button80->Enabled == false &&
    Button81->Enabled == false) {
    aTIEIMG9->Opacity = 1;
    aTIEIMG9->HitTest = true;
    Q9Tie = true;
}



	/*  maybe something to deal with ties
	if (Q1Winner != false && Q2Winner != false && Q3Winner != false && Q4Winner != false && Q5Winner != false && Q6Winner != false && Q7Winner != false && Q8Winner != false && Q9Winner != false) {
		tiedImage->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
            TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

            if (button != NULL) {
                button->Enabled = false;
            }
        }
	}

	if (Q1Winner != false && Q1Winner == Q2Winner && Q1Winner == Q3Winner) {
		winImage->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	  */


	// horizonal big win conditions FOR X
	if (Q1Winner != false && X1->Opacity == 1 && X2->Opacity == 1 && X3->Opacity == 1) {
		XWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	if (Q4Winner != false && X4->Opacity == 1 && X5->Opacity == 1 && X6->Opacity == 1) {
		XWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	if (Q7Winner != false && X7->Opacity == 1 && X8->Opacity == 1 && X9->Opacity == 1) {
		XWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}



		// vertical big win conditions FOR X
	if (Q1Winner != false && X1->Opacity == 1 && X4->Opacity == 1 && X7->Opacity == 1) {
		XWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	if (Q2Winner != false && X2->Opacity == 1 && X5->Opacity == 1 && X8->Opacity == 1) {
		XWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	if (Q3Winner != false && X3->Opacity == 1 && X6->Opacity == 1 && X9->Opacity == 1) {
		XWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

			// diagonal big win conditions FOR X
	if (Q1Winner != false && X1->Opacity == 1 && X5->Opacity == 1 && X9->Opacity == 1) {
		XWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	if (Q3Winner != false && X3->Opacity == 1 && X5->Opacity == 1 && X7->Opacity == 1) {
		XWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	// horizonal big win conditions FOR O
	if (Q1Winner != false && O1->Opacity == 1 && O2->Opacity == 1 && O3->Opacity == 1) {
		OWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	if (Q4Winner != false && O4->Opacity == 1 && O5->Opacity == 1 && O6->Opacity == 1) {
		OWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	if (Q7Winner != false && O7->Opacity == 1 && O8->Opacity == 1 && O9->Opacity == 1) {
		OWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}


			// vertical big win conditions FOR O
	if (Q1Winner != false && O1->Opacity == 1 && O4->Opacity == 1 && O7->Opacity == 1) {
		OWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	if (Q2Winner != false && O2->Opacity == 1 && O5->Opacity == 1 && O8->Opacity == 1) {
		OWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	if (Q3Winner != false && O3->Opacity == 1 && O6->Opacity == 1 && O9->Opacity == 1) {
		OWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

			// diagonal big win conditions FOR O
	if (Q1Winner != false && O1->Opacity == 1 && O5->Opacity == 1 && O9->Opacity == 1) {
		OWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}

	if (Q3Winner != false && O3->Opacity == 1 && O5->Opacity == 1 && O7->Opacity == 1) {
		OWIN->Opacity = 1;
		for (int i = 1; i <= 81; i++) {
			TButton* button = dynamic_cast<TButton*>(FindComponent("Button" + IntToStr(i)));

			if (button != NULL) {
				button->Enabled = false;
			}
		}
	}






	if (openGrid == 1 && Q1Winner == false && Q1Tie == false) {
		Panel1->Opacity = 0;
        Panel1->HitTest = false;
        Panel2->Opacity = 0.5;
        Panel2->HitTest = true;
        Panel3->Opacity = 0.5;
        Panel3->HitTest = true;
		Panel4->Opacity = 0.5;
		Panel4->HitTest = true;
		Panel5->Opacity = 0.5;
		Panel5->HitTest = true;
        Panel6->Opacity = 0.5;
        Panel6->HitTest = true;
        Panel7->Opacity = 0.5;
        Panel7->HitTest = true;
        Panel8->Opacity = 0.5;
        Panel8->HitTest = true;
        Panel9->Opacity = 0.5;
        Panel9->HitTest = true;
    }
	else if ((openGrid == 1 && Q1Winner == true) || (openGrid == 1 && Q1Tie == true)) {
        ClearPanels();
    } // THIS IS DOING IT
	if (openGrid == 2 && Q2Winner == false && Q2Tie == false) {
        Panel1->Opacity = 0.5;
        Panel1->HitTest = true;
		Panel2->Opacity = 0;
        Panel2->HitTest = false;
        Panel3->Opacity = 0.5;
        Panel3->HitTest = true;
        Panel4->Opacity = 0.5;
        Panel4->HitTest = true;
        Panel5->Opacity = 0.5;
        Panel5->HitTest = true;
        Panel6->Opacity = 0.5;
        Panel6->HitTest = true;
        Panel7->Opacity = 0.5;
        Panel7->HitTest = true;
        Panel8->Opacity = 0.5;
        Panel8->HitTest = true;
        Panel9->Opacity = 0.5;
        Panel9->HitTest = true;
    }
	else if ((openGrid == 2 && Q2Winner == true) || (openGrid == 2 && Q2Tie == true)) {
		ClearPanels();
    }
	if (openGrid == 3 && Q3Winner == false && Q3Tie == false) {
        Panel1->Opacity = 0.5;
		Panel1->HitTest = true;
        Panel2->Opacity = 0.5;
        Panel2->HitTest = true;
        Panel3->Opacity = 0;
        Panel3->HitTest = false;
        Panel4->Opacity = 0.5;
        Panel4->HitTest = true;
        Panel5->Opacity = 0.5;
        Panel5->HitTest = true;
        Panel6->Opacity = 0.5;
        Panel6->HitTest = true;
        Panel7->Opacity = 0.5;
        Panel7->HitTest = true;
        Panel8->Opacity = 0.5;
        Panel8->HitTest = true;
        Panel9->Opacity = 0.5;
        Panel9->HitTest = true;
    }
	else if ((openGrid == 3 && Q3Winner == true) || (openGrid == 3 && Q3Tie == true)) {
		ClearPanels();
    }
	if (openGrid == 4 && Q4Winner == false && Q4Tie == false) {
		Panel1->Opacity = 0.5;
        Panel1->HitTest = true;
        Panel2->Opacity = 0.5;
        Panel2->HitTest = true;
        Panel3->Opacity = 0.5;
        Panel3->HitTest = true;
        Panel4->Opacity = 0;
        Panel4->HitTest = false;
        Panel5->Opacity = 0.5;
        Panel5->HitTest = true;
        Panel6->Opacity = 0.5;
        Panel6->HitTest = true;
        Panel7->Opacity = 0.5;
        Panel7->HitTest = true;
        Panel8->Opacity = 0.5;
        Panel8->HitTest = true;
        Panel9->Opacity = 0.5;
        Panel9->HitTest = true;
    }
	else if ((openGrid == 4 && Q4Winner == true) || (openGrid == 4 && Q4Tie == true)) {
        ClearPanels();
    }
	if (openGrid == 5 && Q5Winner == false && Q5Tie == false) {
        Panel1->Opacity = 0.5;
        Panel1->HitTest = true;
        Panel2->Opacity = 0.5;
        Panel2->HitTest = true;
        Panel3->Opacity = 0.5;
        Panel3->HitTest = true;
        Panel4->Opacity = 0.5;
        Panel4->HitTest = true;
        Panel5->Opacity = 0;
        Panel5->HitTest = false;
        Panel6->Opacity = 0.5;
        Panel6->HitTest = true;
        Panel7->Opacity = 0.5;
        Panel7->HitTest = true;
        Panel8->Opacity = 0.5;
        Panel8->HitTest = true;
        Panel9->Opacity = 0.5;
        Panel9->HitTest = true;
    }
	else if ((openGrid == 5 && Q5Winner == true) || (openGrid == 5 && Q5Tie == true)) {
        ClearPanels();
    }
	if (openGrid == 6 && Q6Winner == false && Q6Tie == false) {
        Panel1->Opacity = 0.5;
        Panel1->HitTest = true;
        Panel2->Opacity = 0.5;
        Panel2->HitTest = true;
        Panel3->Opacity = 0.5;
        Panel3->HitTest = true;
        Panel4->Opacity = 0.5;
        Panel4->HitTest = true;
        Panel5->Opacity = 0.5;
        Panel5->HitTest = true;
        Panel6->Opacity = 0;
        Panel6->HitTest = false;
        Panel7->Opacity = 0.5;
        Panel7->HitTest = true;
        Panel8->Opacity = 0.5;
        Panel8->HitTest = true;
        Panel9->Opacity = 0.5;
        Panel9->HitTest = true;
	}
	else if ((openGrid == 6 && Q6Winner == true) || (openGrid == 6 && Q6Tie == true)) {
        ClearPanels();
    }
	if (openGrid == 7 && Q7Winner == false && Q7Tie == false) {
        Panel1->Opacity = 0.5;
        Panel1->HitTest = true;
        Panel2->Opacity = 0.5;
        Panel2->HitTest = true;
        Panel3->Opacity = 0.5;
        Panel3->HitTest = true;
        Panel4->Opacity = 0.5;
        Panel4->HitTest = true;
        Panel5->Opacity = 0.5;
        Panel5->HitTest = true;
        Panel6->Opacity = 0.5;
        Panel6->HitTest = true;
        Panel7->Opacity = 0;
        Panel7->HitTest = false;
        Panel8->Opacity = 0.5;
        Panel8->HitTest = true;
        Panel9->Opacity = 0.5;
        Panel9->HitTest = true;
    }
	else if ((openGrid == 7 && Q7Winner == true) || (openGrid == 7 && Q7Tie == true)) {
        ClearPanels();
    }
	if (openGrid == 8 && Q8Winner == false && Q8Tie == false) {
        Panel1->Opacity = 0.5;
        Panel1->HitTest = true;
        Panel2->Opacity = 0.5;
        Panel2->HitTest = true;
        Panel3->Opacity = 0.5;
        Panel3->HitTest = true;
        Panel4->Opacity = 0.5;
        Panel4->HitTest = true;
        Panel5->Opacity = 0.5;
        Panel5->HitTest = true;
        Panel6->Opacity = 0.5;
        Panel6->HitTest = true;
        Panel7->Opacity = 0.5;
        Panel7->HitTest = true;
        Panel8->Opacity = 0;
        Panel8->HitTest = false;
        Panel9->Opacity = 0.5;
        Panel9->HitTest = true;
    }
	else if ((openGrid == 8 && Q8Winner == true) || (openGrid == 8 && Q8Tie == true)) {
        ClearPanels();
    }
	if (openGrid == 9 && Q9Winner == false && Q9Tie == false) {
        Panel1->Opacity = 0.5;
        Panel1->HitTest = true;
        Panel2->Opacity = 0.5;
        Panel2->HitTest = true;
        Panel3->Opacity = 0.5;
        Panel3->HitTest = true;
        Panel4->Opacity = 0.5;
        Panel4->HitTest = true;
        Panel5->Opacity = 0.5;
        Panel5->HitTest = true;
        Panel6->Opacity = 0.5;
        Panel6->HitTest = true;
        Panel7->Opacity = 0.5;
        Panel7->HitTest = true;
        Panel8->Opacity = 0.5;
        Panel8->HitTest = true;
        Panel9->Opacity = 0;
        Panel9->HitTest = false;
    }
	else if ((openGrid == 9 && Q9Winner == true) || (openGrid == 9 && Q9Tie == true)) {
		ClearPanels();
    }

    if (currentPlayerSymbol == 'X') {
        currentPlayerSymbol = 'O';
        xIndicate->Opacity = 0;
		oIndicate->Opacity = 1;
    }
    else {
        currentPlayerSymbol = 'X';
        xIndicate->Opacity = 1;
	   oIndicate->Opacity = 0;

    }
}

//---------------------------------------------------------------------------





















































































































