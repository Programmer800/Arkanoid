//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Buttons.hpp>
#include <MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *ball;
        TTimer *lewo;
        TTimer *prawo;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TImage *Image7;
        TImage *Image8;
        TImage *Image9;
        TImage *Image10;
        TButton *BPoz1;
        TTimer *Timer1;
        TLabel *Label1;
        TLabel *WynikDoWygranej;
        TScrollBar *Szer;
        TLabel *Label2;
        TShape *paletka;
        TImage *blys;
        TTimer *licz;
        TTimer *pilka;
        TImage *Image11;
        TImage *Image12;
        TImage *Image13;
        TImage *Image14;
        TImage *Image15;
        TImage *Image16;
        TImage *Image17;
        TImage *powdwaX;
        TTimer *jeden;
        TImage *Image18;
        TImage *Image19;
        TImage *Image20;
        TImage *Image21;
        TButton *BPoz2;
        TImage *tloPoz;
        TShape *Sciana;
        TButton *start;
        TButton *zamknij;
        TRadioButton *rb1;
        TImage *Latwy;
        TImage *Sredni;
        TImage *Trudny;
        TButton *zacznij;
        TTimer *muzyka;
        TLabel *TLrb1;
        TLabel *TLrb2;
        TLabel *TLrb3;
        TLabel *Choose;
        TImage *Image22;
        TImage *Image23;
        TImage *Image24;
        TImage *Image25;
        TImage *Image26;
        TImage *Image27;
        TLabel *Label3;
        TLabel *Label4;
        TImage *Image28;
        TLabel *Label5;
        TTimer *Timer2;
        TTimer *liczTime;
        TLabel *Pause;
        TButton *Back;
        TButton *Zmien;
        TButton *Wznow;
        TImage *Image6;
        TShape *Pasek;
        TTimer *skracanie;
        TShape *gora;
        TLabel *Label6;
        TLabel *Wynik;
        TLabel *Label7;
        TLabel *OgolnyW;
        TLabel *InfPoz;
        TTimer *miganie;
        TImage *ArrowGL;
        TTimer *menu;
        TRadioButton *rb3;
        TButton *Autor;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TButton *MenuStart;
        TRadioButton *rb2;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall lewoTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall prawoTimer(TObject *Sender);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall BPoz1Click(TObject *Sender);
        void __fastcall SzerChange(TObject *Sender);
        void __fastcall liczTimer(TObject *Sender);
        void __fastcall pilkaTimer(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall jedenTimer(TObject *Sender);
        void __fastcall BPoz2Click(TObject *Sender);
        void __fastcall zamknijClick(TObject *Sender);
        void __fastcall startClick(TObject *Sender);
        void __fastcall zacznijClick(TObject *Sender);
        void __fastcall muzykaTimer(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall liczTimeTimer(TObject *Sender);
        void __fastcall BackClick(TObject *Sender);
        void __fastcall ZmienClick(TObject *Sender);
        void __fastcall WznowClick(TObject *Sender);
        void __fastcall rb1Click(TObject *Sender);
        void __fastcall rb2Click(TObject *Sender);
        void __fastcall rb3Click(TObject *Sender);
        void __fastcall skracanieTimer(TObject *Sender);
        void __fastcall miganieTimer(TObject *Sender);
        void __fastcall menuTimer(TObject *Sender);
        void __fastcall AutorClick(TObject *Sender);
        void __fastcall MenuStartClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
