#include <16f877a.h>
#include <def_877a.h>
#FUSES NOWDT, HS, NOPUT, NOPROTECT, NODEBUG, NOBROWNOUT, NOLVP, PUT,XT,
#use delay(clock=4000000)
#define LCD_ENABLE_PIN PIN_B3 // chan E noi voi B3
#define LCD_RS_PIN PIN_B5 // RS noi voi B5
#define LCD_RW_PIN PIN_B4
#define LCD_DATA4 PIN_D4 //D4 noi voi D4
#define LCD_DATA5 PIN_D5
#define LCD_DATA6 PIN_D6
#define LCD_DATA7 PIN_D7
#include <lcd.c> // su dung thu vien lcd.c
void main()
{
 lcd_init();
 lcd_gotoxy(1,1);
 lcd_putc("DAI HOC CONG NGHIEP");
 lcd_gotoxy(1,2);
 lcd_putc(" TP HO CHI MINH");
 while(TRUE)
 {
 ; 
 }
}

