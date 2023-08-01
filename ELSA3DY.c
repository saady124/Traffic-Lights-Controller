                                     int I;
int SEG[]={0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20,0x21,0x22,0x23};
void main() {
  adcon1=7 ;
  trisb=255;
  trisd=0 ;
  trisc=0 ;
  trise=0;
  portc=0;
while(1){
 if(portb.B6==0){
     if(portb.B7==1){
         for(I=3 ; I>=0 ; I--){
             portc=SEG[i];
             portd = 0b00001010;
             delay_ms(500);
         }
         while(portb.B6==0 && portb.B7==1){
             portc = SEG[0];
             portd = 0b00100001;
         }
     }
     else{
         for(I=3 ; I>=0 ; I--){
             portc=SEG[i];
             portd = 0b00010001;
             delay_ms(500);
         }
         while(portb.B6==0 && portb.B7==0){
             portc = SEG[0];
             portd = 0b00001100;
         }
     }
 }
 for(;portB.b6==1;)
 {
  porte.b0=1;
  portd=33;
  for(I=23;I>=0;I--)
  {
     if(portB.b6==0)
           break;
     if(I==3)
         portd =17 ;
    portC=SEG[I]  ;
    delay_ms(200);
  }
  portd=12;
  for(I=15;I>=0;I--)
  {
    if(portB.b6==0)
       break;
    if(I==3)
       portd =10 ;
    portC=SEG[I] ;
    delay_ms(200) ;
  }
 }


}

}