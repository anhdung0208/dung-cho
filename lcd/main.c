#include <16f877a.h>
#include <def_877a.h>
#FUSES NOWDT, HS, NOPUT, NOPROTECT, NODEBUG, NOBROWNOUT, NOLVP, 
#use delay(clock=4000000)
#define LCD_ENABLE_PIN PIN_B3 // chan E noi voi B3
#define LCD_RS_PIN PIN_B5 // RS noi voi B5
#define LCD_RW_PIN PIN_B4
#define LCD_DATA4 PIN_D4 //D4 noi voi D4
#define LCD_DATA5 PIN_D5
#define LCD_DATA6 PIN_D6
#define LCD_DATA7 PIN_D7
#include <lcd.c> // su dung thu vien lcd.c
void clear_lcd(void);
void main()
{
 //khai bao bien cuc bo
 unsigned char TrangThai=0;
 float SoThuc=0;
 lcd_init();//khoi dong ket noi LCD
 clear_lcd();
 TrangThai=0;
 lcd_gotoxy(1,1);
 printf(lcd_putc,"LOADING.... %03u",TrangThai); lcd_putc('%');
 lcd_gotoxy(1,2);
 for(TrangThai=1;TrangThai<=16;TrangThai++)
 {
 lcd_putc(219);
 } 
 delay_ms(500);
for(TrangThai=1;TrangThai<=16;TrangThai++)
 {
 lcd_gotoxy(12,1);
 SoThuc=SoThuc+6.25f;
 printf(lcd_putc,"%03.1f",SoThuc);lcd_putc('%'); 
 lcd_gotoxy(TrangThai,2);
 lcd_putc(255);
 delay_ms(500);
 }
 clear_lcd();
while(TRUE)
 {
 //TODO: User Code
 lcd_gotoxy(1,1);
 printf(lcd_putc," LAP TRINH CCS ");
 lcd_gotoxy(1,2);
 printf(lcd_putc," HELLO 16F877A!");
 }
}
void clear_lcd(void)
{
lcd_send_byte(0,1);//lay trong thu vien lcd.c
 delay_ms(2);
 }

 
