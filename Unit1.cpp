//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <windowsx.h>
#include "Unit1.h"
#include "mmsystem.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
int do_wygranej = 17;
int x, y, i, ile, liczba, s;
void razD();
void dwarazy();
int do_zniszczenia1, do_zniszczenia2, do_zniszczenia3,  do_zniszczenia4, do_zniszczenia5, do_zniszczenia6, do_zniszczenia7,
do_zniszczenia8, do_zniszczenia9, do_zniszczenia10, do_zniszczenia18, do_zniszczenia19, do_zniszczenia20, do_zniszczenia21,
Check1, Check2, Check3, Check4, Check5, Check6, Check7, Check8, Check9, Check10,  Check18, Check19, Check20, Check21, CheckPoz2, CheckWygrana1, CheckStart, WynikW, WynikPoz1, Suma,
Check11, Check12, Check13, Check14, Check15, Check16, Check17, CheckZamknij, CheckBlys, CheckPowdwaX, CheckSt, CheckPoz1, CheckPrzegrana, CheckTrwania, WynikPoz2, CheckOgolny,
CheckPozTrwania, CheckTrwania1, CheckTrwania2, CheckTrwania3, CheckDzialania, miganieS, CheckAutor, CheckWroc;
bool kolizja(TImage * ball, TImage * Cegla)
{
 if (ball->Left >= Cegla->Left - ball->Width &&
 ball->Left <= Cegla->Left + Cegla->Width &&
 Cegla->Top - ball->Height <= ball->Top &&
 Cegla->Top + Cegla->Height >= ball->Top)
 return 1;
 else return 0;
 }
int startFunction();

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
if ((kolizja(ball, Image18)) && (Image18->Visible == true) && (kolizja(ball, Image19)) && (Image19->Visible == true))
{x = -x;  y = -y;        do_zniszczenia18--;     do_zniszczenia19--;            if (do_zniszczenia18 == 2)   {sndPlaySound("sound1/stal2.wav", SND_ASYNC);
Image18->Picture->LoadFromFile("img1/stal2.bmp");}      else if (do_zniszczenia18 == 1)   {sndPlaySound("sound1/stal1.wav", SND_ASYNC);
Image18->Picture->LoadFromFile("img1/stal3.bmp");}      else if (do_zniszczenia18 == 0)   sndPlaySound("sound1/stal0.wav", SND_ASYNC);
if (do_zniszczenia19 == 2)   {sndPlaySound("sound1/stal2.wav", SND_ASYNC);
Image19->Picture->LoadFromFile("img1/stal2.bmp");}      else if (do_zniszczenia19 == 1)   {sndPlaySound("sound1/stal1.wav", SND_ASYNC);
Image19->Picture->LoadFromFile("img1/stal3.bmp");}      else if (do_zniszczenia19 == 0)   sndPlaySound("sound1/stal0.wav", SND_ASYNC);
}
if ((kolizja(ball, Image19)) && (Image19->Visible == true) && (kolizja(ball, Image20)) && (Image20->Visible == true))
{x = -x;  y = -y;        do_zniszczenia19--;     do_zniszczenia20--;            if (do_zniszczenia19 == 2)   {sndPlaySound("sound1/stal2.wav", SND_ASYNC);
Image19->Picture->LoadFromFile("img1/stal2.bmp");}      else if (do_zniszczenia19 == 1)   {sndPlaySound("sound1/stal1.wav", SND_ASYNC);
Image19->Picture->LoadFromFile("img1/stal3.bmp");}      else if (do_zniszczenia19 == 0)   sndPlaySound("sound1/stal0.wav", SND_ASYNC);
if (do_zniszczenia20 == 2)   {sndPlaySound("sound1/stal2.wav", SND_ASYNC);
Image20->Picture->LoadFromFile("img1/stal2.bmp");}      else if (do_zniszczenia20 == 1)   {sndPlaySound("sound1/stal1.wav", SND_ASYNC);
Image20->Picture->LoadFromFile("img1/stal3.bmp");}      else if (do_zniszczenia20 == 0)   sndPlaySound("sound1/stal0.wav", SND_ASYNC);
}
if ((kolizja(ball, Image20)) && (Image20->Visible == true) && (kolizja(ball, Image21)) && (Image21->Visible == true))
{x = -x;  y = -y;        do_zniszczenia20--;     do_zniszczenia21--;            if (do_zniszczenia20 == 2)   {sndPlaySound("sound1/stal2.wav", SND_ASYNC);
Image20->Picture->LoadFromFile("img1/stal2.bmp");}      else if (do_zniszczenia20 == 1)   {sndPlaySound("sound1/stal1.wav", SND_ASYNC);
Image20->Picture->LoadFromFile("img1/stal3.bmp");}      else if (do_zniszczenia20 == 0)   sndPlaySound("sound1/stal0.wav", SND_ASYNC);
if (do_zniszczenia21 == 2)   {sndPlaySound("sound1/stal2.wav", SND_ASYNC);
Image21->Picture->LoadFromFile("img1/stal2.bmp");}      else if (do_zniszczenia21 == 1)   {sndPlaySound("sound1/stal1.wav", SND_ASYNC);
Image21->Picture->LoadFromFile("img1/sta13.bmp");}      else if (do_zniszczenia21 == 0)    sndPlaySound("sound1/stal0.wav", SND_ASYNC);
}
if ((kolizja(ball, Image18)) && (Image18->Visible == true))
{
{x = -x;  y = -y;        do_zniszczenia18--;}           if (do_zniszczenia18 == 2)   {sndPlaySound("sound1/stal2.wav", SND_ASYNC);       Image18->Picture->LoadFromFile("img1/stal2.bmp");}
else if (do_zniszczenia18 == 1)   {sndPlaySound("sound1/stal1.wav", SND_ASYNC);       Image18->Picture->LoadFromFile("img1/stal3.bmp");}
else if (do_zniszczenia18 == 0)   sndPlaySound("sound1/stal0.wav", SND_ASYNC);}
if ((kolizja(ball, Image19)) && (Image19->Visible == true))
{
{x = -x;  y = -y;        do_zniszczenia19--;}           if (do_zniszczenia19 == 2)   {sndPlaySound("sound1/stal2.wav", SND_ASYNC);       Image19->Picture->LoadFromFile("img1/stal2.bmp");}
else if (do_zniszczenia19 == 1)   {sndPlaySound("sound1/stal1.wav", SND_ASYNC);       Image19->Picture->LoadFromFile("img1/stal3.bmp");}
else if (do_zniszczenia19 == 0)   sndPlaySound("sound1/stal0.wav", SND_ASYNC);}
if ((kolizja(ball, Image20)) && (Image20->Visible == true))
{
{x = -x;  y = -y;        do_zniszczenia20--;}           if (do_zniszczenia20 == 2)   {sndPlaySound("sound1/stal2.wav", SND_ASYNC);       Image20->Picture->LoadFromFile("img1/stal2.bmp");}
else if (do_zniszczenia20 == 1)   {sndPlaySound("sound1/stal1.wav", SND_ASYNC);       Image20->Picture->LoadFromFile("img1/stal3.bmp");}
else if (do_zniszczenia20 == 0)   sndPlaySound("sound1/stal0.wav", SND_ASYNC);}
if ((kolizja(ball, Image21)) && (Image21->Visible == true))
{
{x = -x;  y = -y;        do_zniszczenia21--;}           if (do_zniszczenia21 == 2)   {sndPlaySound("sound1/stal2.wav", SND_ASYNC);       Image21->Picture->LoadFromFile("img1/stal2.bmp");}
else if (do_zniszczenia21 == 1)   {sndPlaySound("sound1/stal1.wav", SND_ASYNC);       Image21->Picture->LoadFromFile("img1/stal3.bmp");}
else if (do_zniszczenia21 == 0)   sndPlaySound("sound1/stal0.wav", SND_ASYNC);}
dwarazy();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::lewoTimer(TObject *Sender)
{
 if (paletka->Left >= tloPoz->Left + 15) paletka->Left -= 10;
  if (ball->Left >= paletka->Left+ball->Width/2 && ball->Left <= paletka->Left + paletka->Width + ball->Width/2 &&
  ball->Top + ball->Height >= paletka->Top && y > 0)    {
  if (x < 0) {if (rb1->Checked) {x = -12;       y = -8;}      else if (rb2->Checked) {x = -16;   y = -10;}
else if (rb3->Checked) x = -18;    y = -12;}
  else  {if (rb1->Checked) {x = 10;       y = -10;}      else if (rb2->Checked) {x = 12; y = -18;}
else if (rb3->Checked) {x = 14;   y = -22;}}
  sndPlaySound("sound1/paletka.wav", SND_ASYNC);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (pilka->Enabled == true)
{
if (Key == 65 || Key == VK_LEFT) lewo->Enabled = true;          //lewoTimer
if (Key == 68 || Key == VK_RIGHT) prawo->Enabled = true;                //prawoTimer
if (Key == 32) {pilka->Enabled = false;         Pause->Visible = true;          Timer2->Enabled = false;             liczTime->Enabled = false;         licz->Enabled = false;
CheckSt = 1;            if (CheckPowdwaX == 1) powdwaX->Visible = false;                skracanie->Enabled = false;             sndPlaySound("sound1/pause.wav", SND_ASYNC);}
if (Key == 27) {zamknij->Left = 304;      zamknij->Top = 296;     zamknij->Width = 401;    zamknij->Height = 65;       zamknij->Caption = "WyjdŸ z gry";        licz->Enabled = false;
zamknij->Visible = true;          Back->Visible = true;     Zmien->Visible = true;        pilka->Enabled = false;        Timer2->Enabled = false;             skracanie->Enabled = false;
Wznow->Left = 304;        Wznow->Top = 224;             Wznow->Height = 65;        Wznow->Width = 401;          Wznow->Visible = true;         liczTime->Enabled = false;
if (CheckPowdwaX == 1) powdwaX->Visible = false;                menu->Enabled = true;           sndPlaySound("sound1/menu.wav", SND_ASYNC);}
}
else if (pilka->Enabled == false)
{
if (Key == 27 && Zmien->Visible == true && CheckStart == 0 && CheckPrzegrana == 0)       {zamknij->Visible = false;          Back->Visible = false;       Zmien->Visible = false;
pilka->Enabled = true;          Pause->Visible = false;         Wznow->Visible = false;         Timer2->Enabled = true;         skracanie->Enabled = true;
liczTime->Enabled = true;           licz->Enabled = true;         if (CheckPowdwaX == 1) powdwaX->Visible = true;               menu->Enabled = false;           menu->Enabled = false;}
if (Key == 27 && CheckStart == 0 && CheckSt == 1 && CheckPrzegrana == 0 && CheckWroc == 0) {zamknij->Left = 304;      zamknij->Top = 296;     zamknij->Width = 401;
zamknij->Height = 65;           zamknij->Caption = "WyjdŸ z gry";        zamknij->Visible = true;        Back->Visible = true;     Zmien->Visible = true;      CheckSt = 0;
Pause->Visible = false;         Wznow->Left = 304;        Wznow->Top = 224;          Wznow->Height = 65;        Wznow->Width = 401;          Wznow->Visible = true;
Timer2->Enabled = false;        licz->Enabled = true;           if (CheckPowdwaX == 1) powdwaX->Visible = false;                menu->Enabled = true;
sndPlaySound("sound1/menu.wav", SND_ASYNC);}
if (Key == 32 && CheckPrzegrana == 0 && CheckAutor == 0 && CheckWroc == 0 && CheckStart == 0) {zamknij->Visible = false;        Back->Visible = false;     Zmien->Visible = false;           licz->Enabled = true;
Pause->Visible = false;         Wznow->Visible = false;          Timer2->Enabled = true;        pilka->Enabled = true;          CheckSt = 0;            liczTime->Enabled = false;
skracanie->Enabled = true;           if (CheckPowdwaX == 1) powdwaX->Visible = true;         menu->Enabled = false;}
if (Key == 27 && CheckAutor == 1 && CheckWroc == 1) {Autor->Visible = true;         start->Visible = true;         zamknij->Visible = true;             Label8->Visible = false;
Label9->Visible = false;                Label10->Visible = false;               MenuStart->Visible = false;              CheckAutor = 0;}
if (Key == 27 && CheckStart == 1 && CheckPrzegrana == 0 && CheckAutor == 0 && CheckWroc == 0)                  {
Image22->Visible = false;  Image23->Visible = false; Image24->Visible = false;
Image25->Visible = false;  Image26->Visible = false; Image27->Visible = false;
Image28->Visible = false;  Label3->Visible = false;  Label4->Visible = false;
Label5->Visible = false;   BPoz1->Visible = false;   ArrowGL->Visible = false;
InfPoz->Visible = false;   miganie->Enabled = false;
zamknij->Left = 304;      zamknij->Top = 296;     zamknij->Width = 401;    zamknij->Height = 65;        zamknij->Caption = "WyjdŸ z gry";        zamknij->Visible = true;
Back->Visible = true;     Zmien->Visible = true;      Wznow->Left = 304;        Wznow->Top = 224;          Wznow->Height = 65;        Wznow->Width = 401;          Wznow->Visible = true;
sndPlaySound("sound1/menu.wav", SND_ASYNC);           menu->Enabled = true;             Pasek->Brush->Color = clLime;}
}
if (Key == 27 && CheckPrzegrana == 1 && CheckStart == 0) {zamknij->Left = 304;      zamknij->Top = 296;     zamknij->Width = 401;    zamknij->Height = 65;
zamknij->Caption = "WyjdŸ z gry";        zamknij->Visible = true;              if (CheckPoz2 == 1)   BPoz2->Visible = false;       else     BPoz1->Visible = false;
Back->Visible = true;     Zmien->Visible = true;      Wznow->Left = 304;        Wznow->Top = 224;          Wznow->Height = 65;        Wznow->Width = 401;          Wznow->Visible = true;
sndPlaySound("sound1/menu.wav", SND_ASYNC);           menu->Enabled = true;}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::prawoTimer(TObject *Sender)
{
 if (paletka->Left + paletka->Width <= Sciana->Left - 10) paletka->Left += 10;
 if (ball->Left >= paletka->Left+ball->Width/2 && ball->Left <= paletka->Left + paletka->Width + ball->Width/2 &&
  ball->Top + ball->Height >= paletka->Top && y > 0)    {
  if (x > 0)  {if (rb1->Checked) {x = 12;       y = -6;}      else if (rb2->Checked) {x = 16; y = -10;}
else if (rb3->Checked) {x = 18;   y = -14;}}
  else  {if (rb1->Checked) {x = -10;       y = -14;}      else if (rb2->Checked) {x = -12; y = -18;}
else if (rb3->Checked) {x = -14;   y = -22;}}
  sndPlaySound("sound1/paletka.wav", SND_ASYNC);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key == 65 || Key == VK_LEFT) lewo->Enabled = false;         //lewoTimer
if (Key == 68 || Key == VK_RIGHT) prawo->Enabled = false;        //prawoTimer
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BPoz1Click(TObject *Sender)
{
s = 0;
CheckStart = 0;
CheckPrzegrana = 0;
CheckTrwania = 1;
CheckPoz1 = 1;
CheckPozTrwania = 1;
Pasek->Width = 785;
miganie->Enabled = false;
Pasek->Brush->Color = clLime;
tloPoz->Picture->LoadFromFile("img1/blekitne_tlo.bmp");
blys->Visible = false;
powdwaX->Visible = false;
blys->Enabled = true;
powdwaX->Enabled = true;
skracanie->Enabled = true;
powdwaX->Left = 512;
powdwaX->Top = -56;
blys->Left = 80;
blys->Top = -40;
ball->Visible = true;
Timer1->Enabled = true;
Timer2->Enabled = false;
liczTime->Enabled = true;
BPoz1->Visible = false;
licz->Enabled = true;
paletka->Left = 300;
do_wygranej = 17;
ball->Left = 196;
ball->Top = 280;
pilka->Enabled = true;
Szer->Visible = false;
Label2->Visible = false;
if (rb1->Checked == true) {x = -10; y = -10;            WynikPoz1 = 25000;}
else if (rb2->Checked == true) {x = -14; y = -14;               WynikPoz1 = 30000;}
else if (rb3->Checked == true) {x = -18; y = -18;               WynikPoz1 = 39000;}
do_zniszczenia1 = 2; do_zniszczenia2 = 2; do_zniszczenia3 = 2;  do_zniszczenia4 = 2; do_zniszczenia5 = 2; do_zniszczenia6 = 2; do_zniszczenia7 = 2;
do_zniszczenia8 = 2; do_zniszczenia9 = 2; do_zniszczenia10 = 2;
Check1 = 0; Check2 = 0; Check3 = 0; Check4 = 0; Check5 = 0; Check6 = 0; Check7 = 0; Check8 = 0; Check9 = 0; Check10 = 0;
Check11 = 0, Check12 = 0, Check13 = 0, Check14 = 0, Check15 = 0, Check16 = 0, Check17 = 0, Check18 = 1; Check19 = 1; Check20 = 1; Check21 = 1; CheckBlys = 0, CheckPowdwaX = 0;
Image1->Visible = true;  Image4->Visible = true;  Image7->Visible = true;
Image2->Visible = true;  Image5->Visible = true;  Image8->Visible = true;
Image3->Visible = true;  Image6->Visible = true;  Image9->Visible = true;
Image10->Visible = true;  Image11->Visible = true; Image14->Visible = true;
Image12->Visible = true;  Image15->Visible = true; Image17->Visible = true;
Image13->Visible = true;  Image16->Visible = true; Szer->Enabled = false;
Image22->Visible = false;  Image23->Visible = false; Image24->Visible = false;
Image25->Visible = false;  Image26->Visible = false; Image27->Visible = false;
Image28->Visible = false;  Label3->Visible = false;  Label4->Visible = false;
ArrowGL->Visible = false;  InfPoz->Visible = false;  Wynik->Visible = false;
Label5->Visible = false;   Image19->Left = -400;  Image18->Left = -400;
Image20->Left = -400;  Image21->Left = -400;
Image1->Picture->LoadFromFile("img1/drew1.bmp");        Image6->Picture->LoadFromFile("img1/drew1.bmp");
Image2->Picture->LoadFromFile("img1/drew1.bmp");        Image7->Picture->LoadFromFile("img1/drew1.bmp");
Image3->Picture->LoadFromFile("img1/drew1.bmp");        Image8->Picture->LoadFromFile("img1/drew1.bmp");
Image4->Picture->LoadFromFile("img1/drew1.bmp");        Image9->Picture->LoadFromFile("img1/drew1.bmp");
Image5->Picture->LoadFromFile("img1/drew1.bmp");        Image10->Picture->LoadFromFile("img1/drew1.bmp");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SzerChange(TObject *Sender)
{
switch(Szer->Position)
{
case 0:    paletka->Width = 20;      break;
case 1:    paletka->Width = 40;      break;
case 2:    paletka->Width = 60;      break;
case 3:    paletka->Width = 80;      break;
case 4:    paletka->Width = 100;     break;
case 5:    paletka->Width = 120;     break;
case 6:    paletka->Width = 140;     break;
case 7:    paletka->Width = 160;     break;
case 8:    paletka->Width = 180;     break;
case 9:    paletka->Width = 200;     break;
case 10:   paletka->Width = 220;     break;
}
}
void dwarazy()
{
if ((kolizja(Form1->ball, Form1->Image1)) && (Form1->Image1->Visible == true) && (kolizja(Form1->ball, Form1->Image2)) && (Form1->Image2->Visible == true))
{x = -x;  y = -y;        do_zniszczenia1--;     do_zniszczenia2--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);         Form1->Image1->Picture->LoadFromFile("img1/drew2.bmp");
Form1->Image2->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image2)) && (Form1->Image2->Visible == true) && (kolizja(Form1->ball, Form1->Image3)) && (Form1->Image3->Visible == true))
{x = -x;  y = -y;        do_zniszczenia2--;     do_zniszczenia3--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);         Form1->Image2->Picture->LoadFromFile("img1/drew2.bmp");
Form1->Image3->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image3)) && (Form1->Image3->Visible == true) && (kolizja(Form1->ball, Form1->Image4)) && (Form1->Image4->Visible == true))
{x = -x;  y = -y;        do_zniszczenia3--;     do_zniszczenia4--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);         Form1->Image3->Picture->LoadFromFile("img1/drew2.bmp");
Form1->Image4->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image4)) && (Form1->Image4->Visible == true) && (kolizja(Form1->ball, Form1->Image5)) && (Form1->Image5->Visible == true))
{x = -x;  y = -y;        do_zniszczenia4--;     do_zniszczenia5--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);         Form1->Image4->Picture->LoadFromFile("img1/drew2.bmp");
Form1->Image5->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image5)) && (Form1->Image5->Visible == true) && (kolizja(Form1->ball, Form1->Image6)) && (Form1->Image6->Visible == true))
{x = -x;  y = -y;        do_zniszczenia5--;     do_zniszczenia6--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);         Form1->Image5->Picture->LoadFromFile("img1/drew2.bmp");
Form1->Image6->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image7)) && (Form1->Image7->Visible == true) && (kolizja(Form1->ball, Form1->Image8)) && (Form1->Image8->Visible == true))
{x = -x;  y = -y;        do_zniszczenia7--;     do_zniszczenia8--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);         Form1->Image7->Picture->LoadFromFile("img1/drew2.bmp");
Form1->Image8->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image8)) && (Form1->Image8->Visible == true) && (kolizja(Form1->ball, Form1->Image9)) && (Form1->Image9->Visible == true))
{x = -x;  y = -y;        do_zniszczenia8--;     do_zniszczenia9--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);         Form1->Image8->Picture->LoadFromFile("img1/drew2.bmp");
Form1->Image9->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image9)) && (Form1->Image9->Visible == true) && (kolizja(Form1->ball, Form1->Image10)) && (Form1->Image10->Visible == true))
{x = -x;  y = -y;        do_zniszczenia9--;     do_zniszczenia10--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);        Form1->Image9->Picture->LoadFromFile("img1/drew2.bmp");
Form1->Image10->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image12)) && (Form1->Image12->Visible == true) && (kolizja(Form1->ball, Form1->Image13)) && (Form1->Image13->Visible == true))
{x = -x;  y = -y;        Form1->Image12->Visible = false;       Form1->Image13->Visible = false;         do_wygranej -=2;            sndPlaySound("sound1/szklo.wav", SND_ASYNC);
Check12 = 1;            Check13 = 1;}
if ((kolizja(Form1->ball, Form1->Image1)) && (Form1->Image1->Visible == true))
{x = -x;  y = -y;        do_zniszczenia1--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);       Form1->Image1->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image2)) && (Form1->Image2->Visible == true))
{x = -x;  y = -y;        do_zniszczenia2--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);       Form1->Image2->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image3)) && (Form1->Image3->Visible == true))
{x = -x;  y = -y;        do_zniszczenia3--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);       Form1->Image3->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image4)) && (Form1->Image4->Visible == true))
{x = -x;  y = -y;        do_zniszczenia4--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);       Form1->Image4->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image5)) && (Form1->Image5->Visible == true))
{x = -x;  y = -y;        do_zniszczenia5--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);       Form1->Image5->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image6)) && (Form1->Image6->Visible == true))
{x = -x;  y = -y;        do_zniszczenia6--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);       Form1->Image6->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image7)) && (Form1->Image7->Visible == true))
{x = -x;  y = -y;        do_zniszczenia7--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);       Form1->Image7->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image8)) && (Form1->Image8->Visible == true))
{x = -x;  y = -y;        do_zniszczenia8--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);       Form1->Image8->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image9)) && (Form1->Image9->Visible == true))
{x = -x;  y = -y;        do_zniszczenia9--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);       Form1->Image9->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image10)) && (Form1->Image10->Visible == true))
{x = -x;  y = -y;        do_zniszczenia10--;            sndPlaySound("sound1/drewno.wav", SND_ASYNC);       Form1->Image10->Picture->LoadFromFile("img1/drew2.bmp");}
if ((kolizja(Form1->ball, Form1->Image11)) && (Form1->Image11->Visible == true))
{x = -x;  y = -y;       Form1->Image11->Visible = false;       do_wygranej--;        sndPlaySound("sound1/szklo.wav", SND_ASYNC);               Check11 = 1;}
if ((kolizja(Form1->ball, Form1->Image12)) && (Form1->Image12->Visible == true))
{x = -x;  y = -y;       Form1->Image12->Visible = false;       do_wygranej--;        sndPlaySound("sound1/szklo.wav", SND_ASYNC);               Check12 = 1;}
if ((kolizja(Form1->ball, Form1->Image13)) && (Form1->Image13->Visible == true))
{x = -x;  y = -y;       Form1->Image13->Visible = false;       do_wygranej--;        sndPlaySound("sound1/szklo.wav", SND_ASYNC);               Check13 = 1;}
if ((kolizja(Form1->ball, Form1->Image14)) && (Form1->Image14->Visible == true))
{x = -x;  y = -y;       Form1->Image14->Visible = false;       do_wygranej--;        sndPlaySound("sound1/szklo.wav", SND_ASYNC);               Check14 = 1;}
if ((kolizja(Form1->ball, Form1->Image15)) && (Form1->Image15->Visible == true))
{x = -x;  y = -y;       Form1->Image15->Visible = false;       do_wygranej--;        sndPlaySound("sound1/szklo.wav", SND_ASYNC);               Check15 = 1;}
if ((kolizja(Form1->ball, Form1->Image16)) && (Form1->Image16->Visible == true))
{x = -x;  y = -y;       Form1->Image16->Visible = false;       do_wygranej--;        sndPlaySound("sound1/szklo.wav", SND_ASYNC);               Check16 = 1;}
if ((kolizja(Form1->ball, Form1->Image17)) && (Form1->Image17->Visible == true))
{x = -x;  y = -y;       Form1->Image17->Visible = false;       do_wygranej--;        sndPlaySound("sound1/szklo.wav", SND_ASYNC);               Check17 = 1;}
Form1->WynikDoWygranej->Caption = do_wygranej;
}
void razD()
{
if ((kolizja(Form1->ball, Form1->Image1)) && (Form1->Image1->Visible == true) && (kolizja(Form1->ball, Form1->Image2)) && (Form1->Image2->Visible == true))
{Form1->Image1->Visible = false;       Form1->Image2->Visible = false;         do_wygranej -=2;         sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check1 = 1;        Check2 = 1;}
if ((kolizja(Form1->ball, Form1->Image2)) && (Form1->Image2->Visible == true) && (kolizja(Form1->ball, Form1->Image3)) && (Form1->Image3->Visible == true))
{Form1->Image2->Visible = false;       Form1->Image3->Visible = false;         do_wygranej -=2;         sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check2 = 1;        Check3 = 1;}
if ((kolizja(Form1->ball, Form1->Image3)) && (Form1->Image3->Visible == true) && (kolizja(Form1->ball, Form1->Image4)) && (Form1->Image4->Visible == true))
{Form1->Image3->Visible = false;       Form1->Image4->Visible = false;         do_wygranej -=2;         sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check3 = 1;        Check4 = 1;}
if ((kolizja(Form1->ball, Form1->Image4)) && (Form1->Image4->Visible == true) && (kolizja(Form1->ball, Form1->Image5)) && (Form1->Image5->Visible == true))
{Form1->Image4->Visible = false;       Form1->Image5->Visible = false;         do_wygranej -=2;         sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check4 = 1;        Check5 = 1;}
if ((kolizja(Form1->ball, Form1->Image5)) && (Form1->Image5->Visible == true) && (kolizja(Form1->ball, Form1->Image6)) && (Form1->Image6->Visible == true))
{Form1->Image5->Visible = false;       Form1->Image6->Visible = false;         do_wygranej -=2;         sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check5 = 1;        Check6 = 1;}
if ((kolizja(Form1->ball, Form1->Image6)) && (Form1->Image6->Visible == true) && (kolizja(Form1->ball, Form1->Image7)) && (Form1->Image7->Visible == true))
{Form1->Image6->Visible = false;       Form1->Image7->Visible = false;         do_wygranej -=2;         sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check6 = 1;        Check7 = 1;}
if ((kolizja(Form1->ball, Form1->Image7)) && (Form1->Image7->Visible == true) && (kolizja(Form1->ball, Form1->Image8)) && (Form1->Image8->Visible == true))
{Form1->Image7->Visible = false;       Form1->Image8->Visible = false;         do_wygranej -=2;         sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check7 = 1;        Check8 = 1;}
if ((kolizja(Form1->ball, Form1->Image8)) && (Form1->Image8->Visible == true) && (kolizja(Form1->ball, Form1->Image9)) && (Form1->Image9->Visible == true))
{Form1->Image8->Visible = false;       Form1->Image9->Visible = false;         do_wygranej -=2;         sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check8 = 1;        Check9 = 1;}
if ((kolizja(Form1->ball, Form1->Image9)) && (Form1->Image9->Visible == true) && (kolizja(Form1->ball, Form1->Image10)) && (Form1->Image10->Visible == true))
{Form1->Image9->Visible = false;       Form1->Image10->Visible = false;         do_wygranej -=2;        sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check9 = 1;        Check10 = 1;}
if ((kolizja(Form1->ball, Form1->Image12)) && (Form1->Image12->Visible == true) && (kolizja(Form1->ball, Form1->Image13)) && (Form1->Image13->Visible == true))
{Form1->Image12->Visible = false;       Form1->Image13->Visible = false;         do_wygranej -=2;           Check12 = 1;            Check13 = 1;
sndPlaySound("sound1/pal.wav", SND_ASYNC);}
if ((kolizja(Form1->ball, Form1->Image18)) && (Form1->Image18->Visible == true) && (kolizja(Form1->ball, Form1->Image19)) && (Form1->Image19->Visible == true))
{Form1->Image18->Visible = false;       Form1->Image19->Visible = false;         do_wygranej -=2;              sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check19 = 1;
Check18 = 1;}
if ((kolizja(Form1->ball, Form1->Image19)) && (Form1->Image19->Visible == true) && (kolizja(Form1->ball, Form1->Image20)) && (Form1->Image20->Visible == true))
{Form1->Image19->Visible = false;       Form1->Image20->Visible = false;         do_wygranej -=2;               sndPlaySound("sound1/pal.wav", SND_ASYNC);       Check20 = 1;
Check19 = 1;}
if ((kolizja(Form1->ball, Form1->Image20)) && (Form1->Image20->Visible == true) && (kolizja(Form1->ball, Form1->Image21)) && (Form1->Image21->Visible == true))
{Form1->Image20->Visible = false;       Form1->Image21->Visible = false;         do_wygranej -=2;               sndPlaySound("sound1/pal.wav", SND_ASYNC);       Check21 = 1;
Check20 = 1;}
if ((kolizja(Form1->ball, Form1->Image1)) && (Form1->Image1->Visible == true))
{Form1->Image1->Visible = false;       do_wygranej--;           sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check1 = 1;}
if ((kolizja(Form1->ball, Form1->Image2)) && (Form1->Image2->Visible == true))
{Form1->Image2->Visible = false;       do_wygranej--;           sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check2 = 1;}
if ((kolizja(Form1->ball, Form1->Image3)) && (Form1->Image3->Visible == true))
{Form1->Image3->Visible = false;       do_wygranej--;           sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check3 = 1;}
if ((kolizja(Form1->ball, Form1->Image4)) && (Form1->Image4->Visible == true))
{Form1->Image4->Visible = false;       do_wygranej--;           sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check4 = 1;}
if ((kolizja(Form1->ball, Form1->Image5)) && (Form1->Image5->Visible == true))
{Form1->Image5->Visible = false;       do_wygranej--;           sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check5 = 1;}
if ((kolizja(Form1->ball, Form1->Image6)) && (Form1->Image6->Visible == true))
{Form1->Image6->Visible = false;       do_wygranej--;           sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check6 = 1;}
if ((kolizja(Form1->ball, Form1->Image7)) && (Form1->Image7->Visible == true))
{Form1->Image7->Visible = false;       do_wygranej--;           sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check7 = 1;}
if ((kolizja(Form1->ball, Form1->Image8)) && (Form1->Image8->Visible == true))
{Form1->Image8->Visible = false;       do_wygranej--;           sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check8 = 1;}
if ((kolizja(Form1->ball, Form1->Image9)) && (Form1->Image9->Visible == true))
{Form1->Image9->Visible = false;       do_wygranej--;           sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check9 = 1;}
if ((kolizja(Form1->ball, Form1->Image10)) && (Form1->Image10->Visible == true))
{Form1->Image10->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check10 = 1;}
if ((kolizja(Form1->ball, Form1->Image11)) && (Form1->Image11->Visible == true))
{Form1->Image11->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check11 = 1;}
if ((kolizja(Form1->ball, Form1->Image12)) && (Form1->Image12->Visible == true))
{Form1->Image12->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check12 = 1;}
if ((kolizja(Form1->ball, Form1->Image13)) && (Form1->Image13->Visible == true))
{Form1->Image13->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check13 = 1;}
if ((kolizja(Form1->ball, Form1->Image14)) && (Form1->Image14->Visible == true))
{Form1->Image14->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check14 = 1;}
if ((kolizja(Form1->ball, Form1->Image15)) && (Form1->Image15->Visible == true))
{Form1->Image15->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check15 = 1;}
if ((kolizja(Form1->ball, Form1->Image16)) && (Form1->Image16->Visible == true))
{Form1->Image16->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check16 = 1;}
if ((kolizja(Form1->ball, Form1->Image17)) && (Form1->Image17->Visible == true))
{Form1->Image17->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check17 = 1;}
if ((kolizja(Form1->ball, Form1->Image18)) && (Form1->Image18->Visible == true))
{Form1->Image18->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check18 = 1;}
if ((kolizja(Form1->ball, Form1->Image19)) && (Form1->Image19->Visible == true))
{Form1->Image19->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check19 = 1;}
if ((kolizja(Form1->ball, Form1->Image20)) && (Form1->Image20->Visible == true))
{Form1->Image20->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check20 = 1;}
if ((kolizja(Form1->ball, Form1->Image21)) && (Form1->Image21->Visible == true))
{Form1->Image21->Visible = false;       do_wygranej--;          sndPlaySound("sound1/pal.wav", SND_ASYNC);        Check21 = 1;}
Form1->WynikDoWygranej->Caption = do_wygranej;
}
void __fastcall TForm1::liczTimer(TObject *Sender)
{
if (do_zniszczenia1 <= 0) {Form1->Image1->Visible = false;       do_wygranej--;        do_zniszczenia1 = 2;               Check1 = 1;
sndPlaySound("sound1/drewnoK.wav", SND_ASYNC);}
if (do_zniszczenia2 <= 0) {Form1->Image2->Visible = false;       do_wygranej--;        do_zniszczenia2 = 2;               Check2 = 1;
sndPlaySound("sound1/drewnoK.wav", SND_ASYNC);}
if (do_zniszczenia3 <= 0) {Form1->Image3->Visible = false;       do_wygranej--;        do_zniszczenia3 = 2;               Check3 = 1;
sndPlaySound("sound1/drewnoK.wav", SND_ASYNC);}
if (do_zniszczenia4 <= 0) {Form1->Image4->Visible = false;       do_wygranej--;        do_zniszczenia4 = 2;               Check4 = 1;
sndPlaySound("sound1/drewnoK.wav", SND_ASYNC);}
if (do_zniszczenia5 <= 0) {Form1->Image5->Visible = false;       do_wygranej--;        do_zniszczenia5 = 2;               Check5 = 1;
sndPlaySound("sound1/drewnoK.wav", SND_ASYNC);}
if (do_zniszczenia6 <= 0) {Form1->Image6->Visible = false;       do_wygranej--;        do_zniszczenia6 = 2;               Check6 = 1;
sndPlaySound("sound1/drewnoK.wav", SND_ASYNC);}
if (do_zniszczenia7 <= 0) {Form1->Image7->Visible = false;       do_wygranej--;        do_zniszczenia7 = 2;               Check7 = 1;
sndPlaySound("sound1/drewnoK.wav", SND_ASYNC);}
if (do_zniszczenia8 <= 0) {Form1->Image8->Visible = false;       do_wygranej--;        do_zniszczenia8 = 2;               Check8 = 1;
sndPlaySound("sound1/drewnoK.wav", SND_ASYNC);}
if (do_zniszczenia9 <= 0) {Form1->Image9->Visible = false;       do_wygranej--;        do_zniszczenia9 = 2;               Check9 = 1;
sndPlaySound("sound1/drewnoK.wav", SND_ASYNC);}
if (do_zniszczenia10 <= 0) {Form1->Image10->Visible = false;       do_wygranej--;        do_zniszczenia10 = 2;            Check10 = 1;
sndPlaySound("sound1/drewnoK.wav", SND_ASYNC);}
if (do_zniszczenia18 <= 0) {Form1->Image18->Visible = false;              do_wygranej--;        do_zniszczenia18 = 3;           Check18 = 1;}
if (do_zniszczenia19 <= 0) {Form1->Image19->Visible = false;              do_wygranej--;        do_zniszczenia19 = 3;           Check19 = 1;}
if (do_zniszczenia20 <= 0) {Form1->Image20->Visible = false;              do_wygranej--;        do_zniszczenia20 = 3;           Check20 = 1;}
if (do_zniszczenia21 <= 0) {Form1->Image21->Visible = false;              do_wygranej--;        do_zniszczenia21 = 3;           Check21 = 1;}
}
void __fastcall TForm1::pilkaTimer(TObject *Sender)
{
ball->Left += x;
ball->Top += y;
if (ball->Left <= tloPoz->Left) {if (rb1->Checked) x = 10;        else if (rb2->Checked) x = 14;
else if (rb3->Checked) x = 18;           sndPlaySound("sound1/sciana.wav", SND_ASYNC);}
if (ball->Top <= Pasek->Top + Pasek->Height) {if (rb1->Checked) y = 10;        else if (rb2->Checked) y = 14;
else if (rb3->Checked) y = 18;           sndPlaySound("sound1/sciana.wav", SND_ASYNC);}
if (ball->Left + ball->Width >= Sciana->Left) {if (rb1->Checked) x = -10;     else if (rb2->Checked) x = -14;
else if (rb3->Checked) x = -18;           sndPlaySound("sound1/sciana.wav", SND_ASYNC);}
if ((paletka->Top + paletka->Height + ball->Height/2 <= ball->Top) || (Pasek->Width <= 0))
{
skracanie->Enabled = false;
ball->Picture->LoadFromFile("img1/ball.bmp");
Timer2->Enabled = false;
liczTime->Enabled = false;
sndPlaySound("sound1/przegrana.wav", SND_ASYNC);
Timer1->Enabled = false;
ball->Visible = false;
jeden->Enabled = false;
if (Image18->Enabled == true)
{
BPoz2->Caption = "Przegrana, Jeszcze raz?";
BPoz2->Visible = true;
BPoz2->Height = 121;
BPoz2->Width = 449;
BPoz2->Left = 176;
}
else
{
Label2->Visible = true;
Szer->Visible = true;
BPoz1->Caption = "Przegrana, Jeszcze raz?";
BPoz1->Visible = true;
Szer->Enabled = true;
}
pilka->Enabled = false;
CheckPrzegrana = 1;
}
if (do_wygranej == 0)
{
skracanie->Enabled = false;
ball->Picture->LoadFromFile("img1/ball.bmp");
Timer2->Enabled = false;
liczTime->Enabled = false;
sndPlaySound("sound1/wygrana.wav", SND_ASYNC);
BPoz2->Caption = "Wygra³eœ! PrzejdŸ do poziomu 2";
BPoz2->Visible = true;
Timer1->Enabled = false;
ball->Visible = false;
jeden->Enabled = false;
if (CheckPoz2 == 1)  {
Wynik->Caption = IntToStr(WynikPoz2);
BPoz2->Height = 121;
BPoz2->Width = 601;
BPoz2->Left = 96;
BPoz2->Caption = "Przeszed³eœ poziomy, Gratulacje!";
Label7->Visible = true;            if (CheckOgolny == 0)          {
Suma = WynikPoz1 + WynikPoz2;
OgolnyW->Caption = IntToStr(Suma);
CheckOgolny = 1;}
OgolnyW->Visible = true;
}
else Wynik->Caption = IntToStr(WynikPoz1);
pilka->Enabled = false;
CheckWygrana1 = 1;
CheckTrwania = 0;
WynikDoWygranej->Caption = 0;
Label6->Visible = true;                Wynik->Visible = true;
}
if (ball->Left >= paletka->Left-ball->Width/2 && ball->Left <= paletka->Left + paletka->Width &&
  ball->Top + ball->Height >= paletka->Top && lewo->Enabled == false && prawo->Enabled == false && y > 0)
  {if (rb1->Checked == true) y = -10;        else if (rb2->Checked == true) y = -14;
else if (rb3->Checked == true) y = -18;             sndPlaySound("sound1/paletka.wav", SND_ASYNC);}
}
void __fastcall TForm1::FormCreate(TObject *Sender)
{
ball->Left = 200;
ball->Top = 300;
BPoz1->Left = 176;
BPoz1->Top = 96;
BPoz2->Left = 96;
BPoz2->Top = 96;
BPoz1->Caption = "Rozpocznij poziom 1";
tloPoz->Picture->LoadFromFile("img1/choosetlo.bmp");
sndPlaySound("sound1/muzyka_do_gry.wav", SND_ASYNC);
ball->Left = 200;
ball->Top = 300;                 CheckZamknij = 0;               WynikW = 16;               CheckAutor = 1;               CheckStart = 1;                CheckWroc = 1;
do_zniszczenia1 = 2; do_zniszczenia2 = 2; do_zniszczenia3 = 2;  do_zniszczenia4 = 2; do_zniszczenia5 = 2; do_zniszczenia6 = 2; do_zniszczenia7 = 2;
do_zniszczenia8 = 2; do_zniszczenia9 = 2; do_zniszczenia10 = 2; do_zniszczenia18 = 3; do_zniszczenia19 = 3; do_zniszczenia20 = 3; do_zniszczenia21 = 3;
}
void __fastcall TForm1::jedenTimer(TObject *Sender)
{
razD();
}
//---------------------------------------------------------------------------





void __fastcall TForm1::BPoz2Click(TObject *Sender)
{
s = -5;
CheckPrzegrana = 0;
CheckTrwania = 1;
Pasek->Width = 785;
CheckPozTrwania = 1;
tloPoz->Picture->LoadFromFile("img1/tloPoz2.bmp");
blys->Visible = false;
powdwaX->Visible = false;
blys->Enabled = true;
powdwaX->Enabled = true;
powdwaX->Left = 512;
powdwaX->Top = -56;
blys->Left = 80;
blys->Top = -40;
ball->Visible = true;
Timer1->Enabled = true;
Timer2->Enabled = false;
liczTime->Enabled = true;
skracanie->Enabled = true;
paletka->Left = 300;
do_wygranej = 21;
ball->Left = 300;
ball->Top = 385;
BPoz2->Visible = false;
pilka->Enabled = true;
jeden->Enabled = false;
CheckPoz2 = 1;
CheckPoz1 = 0;
Image18->Enabled = true;
if (rb1->Checked == true) {x = -10; y = -10;            WynikPoz2 = 37000;}
else if (rb2->Checked == true) {x = -14; y = -14;               WynikPoz2 = 48000;}
else if (rb3->Checked == true) {x = -18; y = -18;               WynikPoz2 = 59000;}
do_zniszczenia1 = 2; do_zniszczenia2 = 2; do_zniszczenia3 = 2;  do_zniszczenia4 = 2; do_zniszczenia5 = 2; do_zniszczenia6 = 2; do_zniszczenia7 = 2;
do_zniszczenia8 = 2; do_zniszczenia9 = 2; do_zniszczenia10 = 2; do_zniszczenia18 = 3; do_zniszczenia19 = 3; do_zniszczenia20 = 3; do_zniszczenia21 = 3;
Check1 = 0; Check2 = 0; Check3 = 0; Check4 = 0; Check5 = 0; Check6 = 0; Check7 = 0; Check8 = 0; Check9 = 0; Check10 = 0; Check18 = 0; Check19 = 0; Check20 = 0; Check21 = 0;
Check11 = 0, Check12 = 0, Check13 = 0, Check14 = 0, Check15 = 0, Check16 = 0, Check17 = 0, CheckBlys = 0, CheckPowdwaX = 0;
Image1->Visible = true;  Image4->Visible = true;  Image7->Visible = true;
Image2->Visible = true;  Image5->Visible = true;  Image8->Visible = true;
Image3->Visible = true;  Image6->Visible = true;  Image9->Visible = true;
Image10->Visible = true;  Image11->Visible = true; Image14->Visible = true;
Image12->Visible = true;  Image15->Visible = true; Image17->Visible = true;
Image13->Visible = true;  Image16->Visible = true; Image18->Visible = true;
Image19->Visible = true; Image20->Visible = true;  Image21->Visible = true;
Image1->Left = 672;     Image7->Left = 648;     Image13->Left = 604;
Image1->Top = 24;       Image7->Top = 120;      Image13->Top = 56;
Image2->Left = 76;      Image8->Left = 584;     Image14->Left = 548;
Image2->Top = 24;       Image8->Top = 120;      Image14->Top = 56;
Image3->Left = 88;      Image9->Left = 520;     Image15->Left = 710;
Image3->Top = 120;      Image9->Top = 120;      Image15->Top = 120;
Image4->Left = 152;     Image10->Left = 456;    Image16->Left = 372;
Image4->Top = 120;      Image10->Top = 120;     Image16->Top = 120;
Image5->Left = 216;     Image11->Left = 144;    Image17->Left = 25;
Image5->Top = 120;      Image11->Top = 56;      Image17->Top = 120;
Image6->Left = 280;     Image12->Left = 200;    Image18->Left = 264;
Image6->Top = 120;      Image12->Top = 56;      Image18->Top = 16;
Image19->Left = 338;    Image20->Left = 410;    Image21->Left = 484;
Image19->Top = 16;      Image20->Top = 16;      Image21->Top = 16;
Image1->Picture->LoadFromFile("img1/drew1.bmp");        Image8->Picture->LoadFromFile("img1/drew1.bmp");
Image2->Picture->LoadFromFile("img1/drew1.bmp");        Image9->Picture->LoadFromFile("img1/drew1.bmp");
Image3->Picture->LoadFromFile("img1/drew1.bmp");        Image10->Picture->LoadFromFile("img1/drew1.bmp");
Image4->Picture->LoadFromFile("img1/drew1.bmp");        Image18->Picture->LoadFromFile("img1/stal1.bmp");
Image5->Picture->LoadFromFile("img1/drew1.bmp");        Image19->Picture->LoadFromFile("img1/stal1.bmp");
Image6->Picture->LoadFromFile("img1/drew1.bmp");        Image20->Picture->LoadFromFile("img1/stal1.bmp");
Image7->Picture->LoadFromFile("img1/drew1.bmp");        Image21->Picture->LoadFromFile("img1/stal1.bmp");
Label6->Visible = false;                Wynik->Visible = false;
Label7->Visible = false;                OgolnyW->Visible = false;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::zamknijClick(TObject *Sender)
{
if (CheckZamknij == 1)
{if (Application->MessageBox("Czy zamkn¹æ aplikacje? Wszystkie dotychczasowe postêpy zostan¹ utracone", "Zamykanie aplikacji", MB_YESNO | MB_ICONQUESTION) == IDYES)
Application->Terminate();} else if (CheckZamknij == 0) Application->Terminate();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::startClick(TObject *Sender)
{
CheckPrzegrana = 0;             CheckPoz2 = 0;            CheckTrwania1 = 0;               CheckTrwania2 = 0;               CheckOgolny = 0;                CheckWroc = 0;
startFunction();            CheckTrwania3 = 0;              do_wygranej = 17;            CheckPoz1 = 1;               CheckTrwania = 0;              CheckAutor = 0;
Pasek->Width = 785;         Autor->Visible = false;             rb1->Enabled = true;            rb2->Enabled = true;            rb3->Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::zacznijClick(TObject *Sender)
{
if (Check1 == 1)       Image1->Visible = false;                else             Image1->Visible = true;
if (Check2 == 1)       Image2->Visible = false;                else             Image2->Visible = true;
if (Check3 == 1)       Image3->Visible = false;                else             Image3->Visible = true;
if (Check4 == 1)       Image4->Visible = false;                else             Image4->Visible = true;
if (Check5 == 1)       Image5->Visible = false;                else             Image5->Visible = true;
if (Check6 == 1)       Image6->Visible = false;                else             Image6->Visible = true;
if (Check7 == 1)       Image7->Visible = false;                else             Image7->Visible = true;
if (Check8 == 1)       Image8->Visible = false;                else             Image8->Visible = true;
if (Check9 == 1)       Image9->Visible = false;                else             Image9->Visible = true;
if (Check10 == 1)      Image10->Visible = false;               else             Image10->Visible = true;
if (Check11 == 1)                   Image11->Visible = false;               else                Image11->Visible = true;
if (Check12 == 1)                   Image12->Visible = false;               else                Image12->Visible = true;
if (Check13 == 1)                   Image13->Visible = false;               else                Image13->Visible = true;
if (Check14 == 1)                   Image14->Visible = false;               else                Image14->Visible = true;
if (Check15 == 1)                   Image15->Visible = false;               else                Image15->Visible = true;
if (Check16 == 1)                   Image16->Visible = false;               else                Image16->Visible = true;
if (Check17 == 1)                   Image17->Visible = false;               else                Image17->Visible = true;
if (Check18 == 1)      Image18->Visible = false;               else if (Check18 == 0)           Image18->Visible = true;
if (Check19 == 1)      Image19->Visible = false;               else if (Check19 == 0)           Image19->Visible = true;
if (Check20 == 1)      Image20->Visible = false;               else if (Check20 == 0)           Image20->Visible = true;
if (Check21 == 1)      Image21->Visible = false;               else if (Check21 == 0)           Image21->Visible = true;
if (CheckPoz1 == 1)
{
Image1->Top = 24;                 Image5->Top = 192;                  Image9->Top = 24;                  Image13->Top = 24;        tloPoz->Picture->LoadFromFile("img1/blekitne_tlo.bmp");
Image1->Left = 64;                Image5->Left = 344;                 Image9->Left = 616;                 Image13->Left = 400;     ball->Picture->LoadFromFile("img1/ball.bmp");
Image2->Top = 24;                 Image6->Top = 192;                  Image10->Top = 24;                 Image14->Top = 24;
Image2->Left = 128;               Image6->Left = 408;                 Image10->Left = 680;                Image14->Left = 500;
Image3->Top = 96;                 Image7->Top = 96;                   Image11->Top = 24;                 Image15->Top = 104;
Image3->Left = 144;               Image7->Left = 536;                 Image11->Left = 248;                Image15->Left = 376;
Image4->Top = 96;                 Image8->Top = 96;                   Image12->Top = 24;                 Image16->Top = 112;
Image4->Left = 208;                Image8->Left = 600;                Image12->Left = 344;                Image16->Left = 704;
Image17->Top = 112;                Image17->Left = 32;                miganieS = 6;
WynikDoWygranej->Caption = do_wygranej;          if (CheckTrwania == 0) miganie->Enabled = true;
}
TLrb1->Visible = false;
TLrb2->Visible = false;
TLrb3->Visible = false;
rb1->Visible = false;
rb2->Visible = false;
rb3->Visible = false;
rb1->Enabled = false;
rb2->Enabled = false;
rb3->Enabled = false;
ball->Visible = true;
paletka->Visible = true;
Sciana->Visible = true;
Label1->Visible = true;
Latwy->Visible = false;
Sredni->Visible = false;
Trudny->Visible = false;
Choose->Visible = false;
WynikDoWygranej->Visible = true;
licz->Enabled = true;
zacznij->Visible = false;
if (CheckBlys == 1)           blys->Visible = true;            if (CheckPowdwaX == 1)           powdwaX->Visible = true;
if (CheckPoz2 == 1)           tloPoz->Picture->LoadFromFile("img1/tloPoz2.bmp");              else if (CheckPoz2 == 0)
tloPoz->Picture->LoadFromFile("img1/blekitne_tlo.bmp");
muzyka->Enabled = false;
sndPlaySound(NULL, SND_ASYNC);
if (CheckStart == 1)
{
Label3->Visible = true;   ArrowGL->Visible = true; Szer->Visible = true;
Image22->Visible = true;  Image23->Visible = true; Image24->Visible = true;
Image25->Visible = true;  Image26->Visible = true; Image27->Visible = true;
Image28->Visible = true;  Label4->Visible = true;  Label5->Visible = true;
BPoz1->Visible = true;    Szer->Enabled = true;    InfPoz->Visible = true;
Label2->Visible = true;
}
else if (CheckTrwania == 1) {
Wznow->Left = 344;        Wznow->Top = 136;           Wznow->Height = 89;        Wznow->Width = 321;          Wznow->Visible = true;
}
else if (CheckWygrana1 == 1)  BPoz2->Visible = true;
CheckZamknij = 1;                 CheckDzialania = 1;
gora->Visible = true;
Pasek->Visible = true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::muzykaTimer(TObject *Sender)
{
sndPlaySound("sound1/muzyka_do_gry.wav", SND_ASYNC);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
if (s >= 17 && powdwaX->Enabled == true)
{
CheckPowdwaX = 1;
powdwaX->Visible = true;
if (rb1->Checked)       powdwaX->Top += 2;      else if (rb2->Checked)       powdwaX->Top += 3;
else if (rb3->Checked)       powdwaX->Top += 4;
if (powdwaX->Top >= 487)
{powdwaX->Enabled = false;         powdwaX->Visible = false;            CheckPowdwaX = 0;}
if (ball->Left <= powdwaX->Left + powdwaX->Width && ball->Left + ball->Width >= powdwaX->Left && ball->Top + ball->Height
>= powdwaX->Top && powdwaX->Top + powdwaX->Height >= ball->Top)
{powdwaX->Enabled = false;       powdwaX->Left = -100;           ball->Picture->LoadFromFile("img1/ball2X.bmp");
powdwaX->Visible = false;       sndPlaySound("sound1/pow2X.wav", SND_ASYNC);            CheckPowdwaX = 0;}
}
if (s >= 30 && blys->Enabled == true)
{
CheckBlys = 1;
blys->Visible = true;
if (rb1->Checked)       blys->Top += 2;      else if (rb2->Checked)       blys->Top += 3;
else if (rb3->Checked)       blys->Top += 4;
if (blys->Top >= 487)
{blys->Enabled = false;         blys->Visible = false;           blys->Left = -100;           Timer2->Enabled = false;
liczTime->Enabled = false;              CheckBlys = 0;}
if (ball->Left <= blys->Left + blys->Width && ball->Left + ball->Width >= blys->Left && ball->Top + ball->Height
>= blys->Top && blys->Top + blys->Height >= ball->Top)
{
jeden->Enabled = true;               Timer1->Enabled = false;           blys->Visible = false;          blys->Enabled = false;          CheckBlys = 0;
if (powdwaX->Left == -100)
{ball->Picture->LoadFromFile("img1/Spilka2X.bmp");      sndPlaySound("sound1/szyb.wav", SND_ASYNC);}
else            {ball->Picture->LoadFromFile("img1/Spilka.bmp");        sndPlaySound("sound1/szyb.wav", SND_ASYNC);}
Timer2->Enabled = false;        liczTime->Enabled = false;}
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::liczTimeTimer(TObject *Sender)
{
s++;
if (s >= 17)    Timer2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BackClick(TObject *Sender)
{
if (Application->MessageBox("Czy na pewno chcesz wróciæ do menu, wszystkie postêpy w grze zostan¹ utracone",
"Wyjœcie do menu", MB_YESNO | MB_ICONQUESTION) == IDYES)
{Timer1->Enabled = false;       Timer2->Enabled = false;        jeden->Enabled = false;        tloPoz->Picture->LoadFromFile("img1/choosetlo.bmp");       zamknij->Visible = true;
Autor->Left = 361;      Autor->Top = 189;        pilka->Enabled = false;      licz->Enabled = false;
liczTime->Enabled = false;       prawo->Enabled = false;       lewo->Enabled = false;      start->Visible = true;       muzyka->Enabled = true;         Label1->Visible = false;
Label2->Visible = false;        ball->Visible = false;         paletka->Visible = false;       Szer->Visible = false;      Back->Visible = false;       Zmien->Visible = false;
WynikDoWygranej->Visible = false;      sndPlaySound("sound1/muzyka_do_gry.wav", SND_ASYNC);            Sciana->Visible = false;        ball->Left = 200;            Wznow->Visible = false;
Autor->Visible = true;          ball->Top = 300;        paletka->Left = 300;        zamknij->Width = 265;               zamknij->Height = 97;             zamknij->Left = 361;
zamknij->Top = 298;             CheckZamknij = 0;       WynikDoWygranej->Caption = 17;
Image1->Visible = false;  Image4->Visible = false;  Image7->Visible = false;
Image2->Visible = false;  Image5->Visible = false;  Image8->Visible = false;
Image3->Visible = false;  Image6->Visible = false;  Image9->Visible = false;
Image10->Visible = false;  Image11->Visible = false; Image14->Visible = false;
Image12->Visible = false;  Image15->Visible = false; Image17->Visible = false;
Image13->Visible = false;  Image16->Visible = false; Image18->Enabled = false;
Image18->Visible = false;  Image19->Visible = false; Image20->Visible = false;
Image21->Visible = false;  BPoz1->Caption = "Rozpocznij poziom 1";
blys->Visible = false;          Szer->Enabled = true;
powdwaX->Visible = false;  Pause->Visible = false;            CheckStart = 1;
do_zniszczenia1 = 2; do_zniszczenia2 = 2; do_zniszczenia3 = 2;  do_zniszczenia4 = 2; do_zniszczenia5 = 2; do_zniszczenia6 = 2; do_zniszczenia7 = 2;
do_zniszczenia8 = 2; do_zniszczenia9 = 2; do_zniszczenia10 = 2; do_zniszczenia18 = 3; do_zniszczenia19 = 3; do_zniszczenia20 = 3; do_zniszczenia21 = 3;
Check1 = 0; Check2 = 0; Check3 = 0; Check4 = 0; Check5 = 0; Check6 = 0; Check7 = 0; Check8 = 0; Check9 = 0; Check10 = 0; Check18 = 1; Check19 = 1; Check20 = 1; Check21 = 1;
Check11 = 0; Check12 = 0; Check13 = 0; Check14 = 0; Check15 = 0; Check16 = 0; Check17 = 0; CheckBlys = 0; CheckPowdwaX = 0; CheckPoz2 = 0; CheckWroc = 1;
Image1->Picture->LoadFromFile("img1/drew1.bmp");        Image6->Picture->LoadFromFile("img1/drew1.bmp");
Image2->Picture->LoadFromFile("img1/drew1.bmp");        Image7->Picture->LoadFromFile("img1/drew1.bmp");
Image3->Picture->LoadFromFile("img1/drew1.bmp");        Image8->Picture->LoadFromFile("img1/drew1.bmp");
Image4->Picture->LoadFromFile("img1/drew1.bmp");        Image9->Picture->LoadFromFile("img1/drew1.bmp");
Image5->Picture->LoadFromFile("img1/drew1.bmp");        Image10->Picture->LoadFromFile("img1/drew1.bmp");
gora->Visible = false;
Pasek->Visible = false;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ZmienClick(TObject *Sender)
{
startFunction();
tloPoz->Picture->LoadFromFile("img1/choosetlo.bmp");
zamknij->Visible = false;         Wznow->Visible = false;            Pause->Visible = false;
pilka->Enabled = false;      prawo->Enabled = false;       lewo->Enabled = false;
Label1->Visible = false;        Label2->Visible = false;        ball->Visible = false;         paletka->Visible = false;       Szer->Visible = false;      Back->Visible = false;
Zmien->Visible = false;         WynikDoWygranej->Visible = false;          Sciana->Visible = false;
sndPlaySound("sound1/muzyka_do_gry.wav", SND_ASYNC);            muzyka->Enabled = true;         licz->Enabled = false;
Image1->Visible = false;  Image4->Visible = false;  Image7->Visible = false;
Image2->Visible = false;  Image5->Visible = false;  Image8->Visible = false;
Image3->Visible = false;  Image6->Visible = false;  Image9->Visible = false;
Image10->Visible = false;  Image11->Visible = false; Image14->Visible = false;
Image12->Visible = false;  Image15->Visible = false; Image17->Visible = false;
Image13->Visible = false;  Image16->Visible = false; Image18->Visible = false;
Image19->Visible = false; Image20->Visible = false;  Image21->Visible = false;
blys->Visible = false;
powdwaX->Visible = false;
gora->Visible = false;
Pasek->Visible = false;
rb1->Enabled = true;
rb2->Enabled = true;
rb3->Enabled = true;
}
//---------------------------------------------------------------------------
int startFunction()
{
Form1->Choose->Visible = true;
Form1->zamknij->Visible = false;
Form1->start->Visible = false;
Form1->zacznij->Visible = true;
Form1->Latwy->Picture->LoadFromFile("img1/£atwy.bmp");
Form1->Sredni->Picture->LoadFromFile("img1/Œredni.bmp");
Form1->Trudny->Picture->LoadFromFile("img1/Trudny.bmp");
Form1->Latwy->Visible = true;
Form1->Sredni->Visible = true;
Form1->Trudny->Visible = true;
Form1->rb1->Visible = true;   Form1->TLrb1->Visible = true;
Form1->rb2->Visible = true;   Form1->TLrb2->Visible = true;
Form1->rb3->Visible = true;   Form1->TLrb3->Visible = true;
}


void __fastcall TForm1::WznowClick(TObject *Sender)
{
sndPlaySound(NULL, SND_ASYNC);
if (CheckStart == 1)            {
Image22->Visible = true;  Image23->Visible = true; Image24->Visible = true;
Image25->Visible = true;  Image26->Visible = true; Image27->Visible = true;
Image28->Visible = true;  Label4->Visible = true;  Label5->Visible = true;
BPoz1->Visible = true;  ArrowGL->Visible = true;   Label3->Visible = true;
InfPoz->Visible = false;   miganie->Enabled = true;     InfPoz->Visible = true;         miganieS = 6;
zamknij->Visible = false;          Back->Visible = false;       Zmien->Visible = false;              Wznow->Visible = false;}
else if (CheckPrzegrana == 1)           {
Back->Visible = false;          Zmien->Visible = false;         Wznow->Visible = false;         zamknij->Visible = false;               sndPlaySound("sound1/pause.wav", SND_ASYNC);
if (CheckPoz1 == 1)     BPoz1->Visible = true;
if (CheckPoz2 == 1)     BPoz2->Visible = true;}
else            {
Wznow->Visible = false;         Back->Visible = false;
pilka->Enabled = true;          Zmien->Visible = false;
Timer2->Enabled = true;         zamknij->Visible = false;
liczTime->Enabled = true;       skracanie->Enabled = true;}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::rb1Click(TObject *Sender)
{
zacznij->Enabled = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::rb2Click(TObject *Sender)
{
zacznij->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::rb3Click(TObject *Sender)
{
zacznij->Enabled = true;        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::skracanieTimer(TObject *Sender)
{
if (CheckPoz1 == 1 && CheckDzialania == 1)             {
if (rb1->Checked) {skracanie->Interval = 130;          CheckTrwania1 = 1;            if (CheckPozTrwania == 1 && CheckTrwania2 == 1)     {WynikPoz1 -= 5000;       CheckTrwania2 = 0;}
else if (CheckPozTrwania == 1 && CheckTrwania3 == 1)     {WynikPoz1 -= 14000;           CheckTrwania3 = 0;}}
if (rb2->Checked) {skracanie->Interval = 90;               CheckTrwania2 = 1;      if (CheckPozTrwania == 1 && CheckTrwania1 == 1)     {WynikPoz1 += 5000;       CheckTrwania1 = 0;}
else if (CheckPozTrwania == 1 && CheckTrwania3 == 1)     {WynikPoz1 -= 9000;            CheckTrwania3 = 0;}}
if (rb3->Checked) {skracanie->Interval = 48;               CheckTrwania3 = 1;      if (CheckPozTrwania == 1 && CheckTrwania2 == 1)     {WynikPoz1 += 9000;       CheckTrwania2 = 0;}
else if (CheckPozTrwania == 1 && CheckTrwania1 == 1)     {WynikPoz1 += 14000;           CheckTrwania1 = 0;}}
CheckDzialania = 0;}
if (CheckPoz2 == 1 && CheckDzialania == 1)             {
if (rb1->Checked) {skracanie->Interval = 145;             CheckTrwania1 = 1;            if (CheckPozTrwania == 1 && CheckTrwania2 == 1)     {WynikPoz2 -= 11000;       CheckTrwania2 = 0;}
else if (CheckPozTrwania == 1 && CheckTrwania3 == 1)     {WynikPoz2 -= 22000;           CheckTrwania3 = 0;}}
if (rb2->Checked) {skracanie->Interval = 94;               CheckTrwania2 = 1;      if (CheckPozTrwania == 1 && CheckTrwania1 == 1)     {WynikPoz2 += 11000;       CheckTrwania1 = 0;}
else if (CheckPozTrwania == 1 && CheckTrwania3 == 1)     {WynikPoz2 -= 11000;            CheckTrwania3 = 0;}}
if (rb3->Checked) {skracanie->Interval = 55;               CheckTrwania3 = 1;      if (CheckPozTrwania == 1 && CheckTrwania2 == 1)     {WynikPoz2 += 11000;       CheckTrwania2 = 0;}
else if (CheckPozTrwania == 1 && CheckTrwania1 == 1)     {WynikPoz2 += 22000;           CheckTrwania1 = 0;}}
CheckDzialania = 0;}
if (Pasek->Width >= 0)          {Pasek->Width -= 1;               if (CheckPoz2 == 1)
{if (Pasek->Width <= 590 && Pasek->Width >= 393) WynikPoz2 -= WynikW + 15;
else if (Pasek->Width <= 393 && Pasek->Width >= 197)  WynikPoz2 -= WynikW + 20;
else if (Pasek->Width <= 197 && Pasek->Width >= 0)  WynikPoz2 -= WynikW + 25;
else if (Pasek->Width >= 590 && Pasek->Width <= 785) WynikPoz2 -= WynikW;
switch (Szer->Position)         {
case 0:    WynikPoz2 -= WynikW - 26;      break;
case 1:    WynikPoz2 -= WynikW - 25;      break;
case 2:    WynikPoz2 -= WynikW - 24;      break;
case 3:    WynikPoz2 -= WynikW - 23;      break;
case 4:    WynikPoz2 -= WynikW - 22;      break;
case 5:    WynikPoz2 -= WynikW - 21;      break;
case 6:    WynikPoz2 -= WynikW - 20;      break;
case 7:    WynikPoz2 -= WynikW - 19;      break;
case 8:    WynikPoz2 -= WynikW - 18;      break;
case 9:    WynikPoz2 -= WynikW - 17;      break;
case 10:    WynikPoz2 -= WynikW - 16;      break;}
}
else if (CheckPoz2 == 0)                {
if (Pasek->Width <= 590 && Pasek->Width >= 393)  WynikPoz1 -= WynikW + 15;
else if (Pasek->Width <= 393 && Pasek->Width >= 197)  WynikPoz1 -= WynikW + 20;
else if (Pasek->Width <= 197 && Pasek->Width >= 0)  WynikPoz1 -= WynikW + 25;
else if (Pasek->Width >= 590 && Pasek->Width <= 785) WynikPoz1 -= WynikW;
switch (Szer->Position)         {
case 0:    WynikPoz1 -= WynikW - 26;      break;
case 1:    WynikPoz1 -= WynikW - 25;      break;
case 2:    WynikPoz1 -= WynikW - 24;      break;
case 3:    WynikPoz1 -= WynikW - 23;      break;
case 4:    WynikPoz1 -= WynikW - 22;      break;
case 5:    WynikPoz1 -= WynikW - 21;      break;
case 6:    WynikPoz1 -= WynikW - 20;      break;
case 7:    WynikPoz1 -= WynikW - 19;      break;
case 8:    WynikPoz1 -= WynikW - 18;      break;
case 9:    WynikPoz1 -= WynikW - 17;      break;
case 10:    WynikPoz1 -= WynikW - 16;      break;}
}
}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::miganieTimer(TObject *Sender)
{
miganieS--;
if (miganieS == 5 || miganieS == 3 || miganieS == 1)                 Pasek->Brush->Color = clRed;
if (miganieS == 4 || miganieS == 2 || miganieS == 0)            Pasek->Brush->Color = clLime;
if (miganieS < 0)         miganie->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::menuTimer(TObject *Sender)
{
sndPlaySound("sound1/menu.wav", SND_ASYNC);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::AutorClick(TObject *Sender)
{
Autor->Visible = false;         start->Visible = false;         zamknij->Visible = false;
Label8->Visible = true;         Label9->Visible = true;         Label10->Visible = true;
MenuStart->Visible = true;      CheckAutor = 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::MenuStartClick(TObject *Sender)
{
Autor->Visible = true;         start->Visible = true;         zamknij->Visible = true;
Label8->Visible = false;         Label9->Visible = false;         Label10->Visible = false;
MenuStart->Visible = false;      CheckAutor = 0;
}
//---------------------------------------------------------------------------


