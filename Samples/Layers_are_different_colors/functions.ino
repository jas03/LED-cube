/*
void CubeUpdate(int layerno){ 
  
  if(layerno == 1){                 
                                  // Tlc.set(OUTPUT, BRIGHTNESS VALUE (0-4095)), general use of Tlc.set      
    Tlc.set(AchR, REDLEDs[0]);             // set AaR brightness to AchR OUTPUT(OUTPUT 0); first TLC5940 
    Tlc.set(BchR, REDLEDs[1]);             // set BaR brightness to BchR OUTPUT(OUTPUT 1);
    Tlc.set(CchR, REDLEDs[2]);             // set CaR brightness to CchR OUTPUT(OUTPUT 2);
    Tlc.set(DchR, REDLEDs[3]);             // set DaR brightness to DchR OUTPUT(OUTPUT 3);
    Tlc.set(EchR, REDLEDs[4]);             // set EaR brightness to EchR OUTPUT(OUTPUT 4);
    Tlc.set(FchR, REDLEDs[5]);             // set FaR brightness to FchR OUTPUT(OUTPUT 5);
    Tlc.set(GchR, REDLEDs[6]);             // set GaR brightness to GchR OUTPUT(OUTPUT 6);
    Tlc.set(HchR, REDLEDs[7]);             // set HaR brightness to HchR OUTPUT(OUTPUT 7);
    Tlc.set(IchR, REDLEDs[8]);             // set IaR brightness to IchR OUTPUT(OUTPUT 8);
    Tlc.set(JchR, REDLEDs[9]);             // set JaR brightness to JchR OUTPUT(OUTPUT 9);
    Tlc.set(KchR, REDLEDs[10]);             // set KaR brightness to KchR OUTPUT(OUTPUT 10);
    Tlc.set(LchR, REDLEDs[11]);             // set LaR brightness to LchR OUTPUT(OUTPUT 11);
    Tlc.set(MchR, REDLEDs[12]);             // set MaR brightness to MchR OUTPUT(OUTPUT 12);
    Tlc.set(NchR, REDLEDs[13]);             // set NaR brightness to NchR OUTPUT(OUTPUT 13);
    Tlc.set(OchR, REDLEDs[14]);             // set OaR brightness to OchR OUTPUT(OUTPUT 14);
    Tlc.set(PchR, REDLEDs[15]);             // set PaR brightness to PchR OUTPUT(OUTPUT 15);
    Tlc.set(AchG, GREENLEDs[0]);             // set AaG brightness to AchG OUTPUT(OUTPUT 0); second TLC5940
    Tlc.set(BchG, GREENLEDs[1]);             // set BaG brightness to BchG OUTPUT(OUTPUT 1);
    Tlc.set(CchG, GREENLEDs[2]);             // set CaG brightness to CchG OUTPUT(OUTPUT 2);
    Tlc.set(DchG, GREENLEDs[3]);             // set DaG brightness to DchG OUTPUT(OUTPUT 3);
    Tlc.set(EchG, GREENLEDs[4]);             // set EaG brightness to EchG OUTPUT(OUTPUT 4);
    Tlc.set(FchG, GREENLEDs[5]);             // set FaG brightness to FchG OUTPUT(OUTPUT 5);
    Tlc.set(GchG, GREENLEDs[6]);             // set GaG brightness to GchG OUTPUT(OUTPUT 6);
    Tlc.set(HchG, GREENLEDs[7]);             // set HaG brightness to HchG OUTPUT(OUTPUT 7);
    Tlc.set(IchG, GREENLEDs[8]);             // set IaG brightness to IchG OUTPUT(OUTPUT 8);
    Tlc.set(JchG, GREENLEDs[9]);             // set JaG brightness to JchG OUTPUT(OUTPUT 9);
    Tlc.set(KchG, GREENLEDs[10]);             // set KaG brightness to KchG OUTPUT(OUTPUT 10);
    Tlc.set(LchG, GREENLEDs[11]);             // set LaG brightness to LchG OUTPUT(OUTPUT 11);
    Tlc.set(MchG, GREENLEDs[12]);             // set MaG brightness to MchG OUTPUT(OUTPUT 12);
    Tlc.set(NchG, GREENLEDs[13]);             // set NaG brightness to NchG OUTPUT(OUTPUT 13);
    Tlc.set(OchG, GREENLEDs[14]);             // set OaG brightness to OchG OUTPUT(OUTPUT 14);
    Tlc.set(PchG, GREENLEDs[15]);             // set PaG brightness to PchG OUTPUT(OUTPUT 15);
    Tlc.set(AchB, BLUELEDs[0]);             // set AaB brightness to AchB OUTPUT(OUTPUT 0); third TLC5940
    Tlc.set(BchB, BLUELEDs[1]);             // set BaB brightness to BchB OUTPUT(OUTPUT 1);
    Tlc.set(CchB, BLUELEDs[2]);             // set CaB brightness to CchB OUTPUT(OUTPUT 2);
    Tlc.set(DchB, BLUELEDs[3]);             // set DaB brightness to DchB OUTPUT(OUTPUT 3);
    Tlc.set(EchB, BLUELEDs[4]);             // set EaB brightness to EchB OUTPUT(OUTPUT 4);
    Tlc.set(FchB, BLUELEDs[5]);             // set FaB brightness to FchB OUTPUT(OUTPUT 5);
    Tlc.set(GchB, BLUELEDs[6]);             // set GaB brightness to GchB OUTPUT(OUTPUT 6);
    Tlc.set(HchB, BLUELEDs[7]);             // set HaB brightness to HchB OUTPUT(OUTPUT 7);
    Tlc.set(IchB, BLUELEDs[8]);             // set IaB brightness to IchB OUTPUT(OUTPUT 8);
    Tlc.set(JchB, BLUELEDs[9]);             // set JaB brightness to JchB OUTPUT(OUTPUT 9);
    Tlc.set(KchB, BLUELEDs[10]);             // set KaB brightness to KchB OUTPUT(OUTPUT 10);
    Tlc.set(LchB, BLUELEDs[11]);             // set LaB brightness to LchB OUTPUT(OUTPUT 11);
    Tlc.set(MchB, BLUELEDs[12]);             // set MaB brightness to MchB OUTPUT(OUTPUT 12);
    Tlc.set(NchB, BLUELEDs[13]);             // set NaB brightness to NchB OUTPUT(OUTPUT 13);
    Tlc.set(OchB, BLUELEDs[14]);             // set OaB brightness to OchB OUTPUT(OUTPUT 14);    
    Tlc.set(PchB, BLUELEDs[15]);             // set PaB brightness to PchB OUTPUT(OUTPUT 15);
    
    
    digitalWrite(LayerOne, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
    digitalWrite(LayerTwo, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
    digitalWrite(LayerThree, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
    digitalWrite(LayerFour, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF
    Tlc.update();                   // writes the values for the LEDs brightness to the tlc
    delay(1);                                // give the tlc some time to let the value settle
    digitalWrite(LayerOne, LOW);    // sets LayerOne (pin A0) Low (active)--> Layer one ON
    
  }
  
    if(layerno == 2){
    
  
    Tlc.set(AchR, REDLEDs[16]);             // same as if(layerno == 1) but we use different brightness, so we define LEDs in the second layer
    Tlc.set(BchR, REDLEDs[17]);
    Tlc.set(CchR, REDLEDs[18]);
    Tlc.set(DchR, REDLEDs[19]);    
    Tlc.set(EchR, REDLEDs[20]);
    Tlc.set(FchR, REDLEDs[21]);
    Tlc.set(GchR, REDLEDs[22]);
    Tlc.set(HchR, REDLEDs[23]);    
    Tlc.set(IchR, REDLEDs[24]);
    Tlc.set(JchR, REDLEDs[25]);
    Tlc.set(KchR, REDLEDs[26]);
    Tlc.set(LchR, REDLEDs[27]);
    Tlc.set(MchR, REDLEDs[28]);
    Tlc.set(NchR, REDLEDs[29]);
    Tlc.set(OchR, REDLEDs[30]);
    Tlc.set(PchR, REDLEDs[31]);
    Tlc.set(AchG, GREENLEDs[16]);            
    Tlc.set(BchG, GREENLEDs[17]);
    Tlc.set(CchG, GREENLEDs[18]);
    Tlc.set(DchG, GREENLEDs[19]);    
    Tlc.set(EchG, GREENLEDs[20]);
    Tlc.set(FchG, GREENLEDs[21]);
    Tlc.set(GchG, GREENLEDs[22]);
    Tlc.set(HchG, GREENLEDs[23]);    
    Tlc.set(IchG, GREENLEDs[24]);
    Tlc.set(JchG, GREENLEDs[25]);
    Tlc.set(KchG, GREENLEDs[26]);
    Tlc.set(LchG, GREENLEDs[27]);
    Tlc.set(MchG, GREENLEDs[28]);
    Tlc.set(NchG, GREENLEDs[29]);
    Tlc.set(OchG, GREENLEDs[30]);
    Tlc.set(PchG, GREENLEDs[31]);
    Tlc.set(AchB, BLUELEDs[16]);             
    Tlc.set(BchB, BLUELEDs[17]);
    Tlc.set(CchB, BLUELEDs[18]);
    Tlc.set(DchB, BLUELEDs[19]);    
    Tlc.set(EchB, BLUELEDs[20]);
    Tlc.set(FchB, BLUELEDs[21]);
    Tlc.set(GchB, BLUELEDs[22]);
    Tlc.set(HchB, BLUELEDs[23]);    
    Tlc.set(IchB, BLUELEDs[24]);
    Tlc.set(JchB, BLUELEDs[25]);
    Tlc.set(KchB, BLUELEDs[26]);
    Tlc.set(LchB, BLUELEDs[27]);
    Tlc.set(MchB, BLUELEDs[28]);
    Tlc.set(NchB, BLUELEDs[29]);
    Tlc.set(OchB, BLUELEDs[30]);
    Tlc.set(PchB, BLUELEDs[31]);
    
    
    digitalWrite(LayerOne, HIGH);  // same as if(layerno==1)
    digitalWrite(LayerTwo, HIGH);
    digitalWrite(LayerThree, HIGH);
    digitalWrite(LayerFour, HIGH);
    Tlc.update();
    delay(1);
    digitalWrite(LayerTwo, LOW);  // sets LayerTwo (pin A1) Low (active)--> Layer two ON
    
  }
  
  
  if(layerno == 3){
    
    Tlc.set(AchR, REDLEDs[32]);             // same as if(layerno == 1) but we use different brightness, so we define LEDs in the third layer
    Tlc.set(BchR, REDLEDs[33]);
    Tlc.set(CchR, REDLEDs[34]);
    Tlc.set(DchR, REDLEDs[35]);    
    Tlc.set(EchR, REDLEDs[36]);
    Tlc.set(FchR, REDLEDs[37]);
    Tlc.set(GchR, REDLEDs[38]);
    Tlc.set(HchR, REDLEDs[39]);    
    Tlc.set(IchR, REDLEDs[40]);
    Tlc.set(JchR, REDLEDs[41]);
    Tlc.set(KchR, REDLEDs[42]);
    Tlc.set(LchR, REDLEDs[43]);
    Tlc.set(MchR, REDLEDs[44]);
    Tlc.set(NchR, REDLEDs[45]);
    Tlc.set(OchR, REDLEDs[46]);
    Tlc.set(PchR, REDLEDs[47]);
    Tlc.set(AchG, GREENLEDs[32]);            
    Tlc.set(BchG, GREENLEDs[33]);
    Tlc.set(CchG, GREENLEDs[34]);
    Tlc.set(DchG, GREENLEDs[35]);    
    Tlc.set(EchG, GREENLEDs[36]);
    Tlc.set(FchG, GREENLEDs[37]);
    Tlc.set(GchG, GREENLEDs[38]);
    Tlc.set(HchG, GREENLEDs[39]);    
    Tlc.set(IchG, GREENLEDs[40]);
    Tlc.set(JchG, GREENLEDs[41]);
    Tlc.set(KchG, GREENLEDs[42]);
    Tlc.set(LchG, GREENLEDs[43]);
    Tlc.set(MchG, GREENLEDs[44]);
    Tlc.set(NchG, GREENLEDs[45]);
    Tlc.set(OchG, GREENLEDs[46]);
    Tlc.set(PchG, GREENLEDs[47]);
    Tlc.set(AchB, BLUELEDs[32]);             
    Tlc.set(BchB, BLUELEDs[33]);
    Tlc.set(CchB, BLUELEDs[34]);
    Tlc.set(DchB, BLUELEDs[35]);    
    Tlc.set(EchB, BLUELEDs[36]);
    Tlc.set(FchB, BLUELEDs[37]);
    Tlc.set(GchB, BLUELEDs[38]);
    Tlc.set(HchB, BLUELEDs[39]);    
    Tlc.set(IchB, BLUELEDs[40]);
    Tlc.set(JchB, BLUELEDs[41]);
    Tlc.set(KchB, BLUELEDs[42]);
    Tlc.set(LchB, BLUELEDs[43]);
    Tlc.set(MchB, BLUELEDs[44]);
    Tlc.set(NchB, BLUELEDs[45]);
    Tlc.set(OchB, BLUELEDs[46]);
    Tlc.set(PchB, BLUELEDs[47]);
    
    
    digitalWrite(LayerOne, HIGH);   // same as if(layerno==1)
    digitalWrite(LayerTwo, HIGH);
    digitalWrite(LayerThree, HIGH);
    digitalWrite(LayerFour, HIGH);
    Tlc.update();
    delay(1);
    digitalWrite(LayerThree, LOW);   // sets LayerThree (pin A2) Low (active)--> Layer three ON 
    
  }}

  void reset(){                 // we set all LEDs to 0 brightness
  for (p=0;p<64;p++){
  REDLEDs[p]=0;
  GREENLEDs[p]=0;
  BLUELEDs[p]=0;}}
  
  void allred(int bright){
  for (int p=0;p<64;p++){
  REDLEDs[p]=bright;}}
  
  void allgreen(int bright){
  for (p=0;p<64;p++){
  GREENLEDs[p]=bright;}}
  
  void allblue(int bright){
  for (p=0;p<64;p++){
  BLUELEDs[p]=bright;}}
      
  void randomRED(int bright){
    for (p=0;p<10;p++){
    REDLEDs[random(64)]=random(500, bright);
    }}
    
  void randomGREEN(int bright){  
    for (p=0;p<10;p++){
    GREENLEDs[random(64)]=random(500,bright);}}
    
  void randomBLUE(int bright){
    for (p=0;p<10;p++){    
    BLUELEDs[random(64)]=random(500,bright);}}
  
  void test(int bright){
    REDLEDs[q]=bright;
    q=q+1;
    if (q==64){q=0;}}        
   
   void blue_turnon(int liste[], int anzahl, int bright2){
    for (int i = 0; i < anzahl; i++)
    {
        BLUELEDs[liste[i]]=bright2;
    }}
   
   void green_turnon(int liste[], int anzahl, int bright2){
    for (int i = 0; i < anzahl; i++)
    {
        GREENLEDs[liste[i]]=bright2;
    }}
    
   void red_turnon(int liste[], int anzahl, int bright2){
    for (int i = 0; i < anzahl; i++)
    {
        REDLEDs[liste[i]]=bright2;
    }}
    
  void wall(int bright){
  
    if(q==0){reset();
             int turnonlist[] = {0,1,2,3,  16,17,18,19,    32,33,34,35,    48,49,50,51};
             red_turnon(turnonlist, 16, bright);}
    if(q==1){reset();
             int turnonlist[] = {1,2,3,7,   17,18,19,23,   33,34,35,39,   49,50,51,55};
             red_turnon(turnonlist, 16, bright);}
    if(q==2){reset();
             int turnonlist[] = {2,3,7,11,   18,19,23,27,   34,35,39,43,   50,51,55,59};
             red_turnon(turnonlist, 16, bright);}
    if(q==3){reset();
             int turnonlist[] = {3,7,11,15,   19,23,27,31,   35,39,43,47,   51,55,59,63};
             red_turnon(turnonlist, 16, bright);}
    if(q==4){reset();
             int turnonlist[] = {7,11,15,14,   23,27,31,30,   39,43,47,46,   55,59,63,62};
             red_turnon(turnonlist,16, bright);}
    if(q==5){reset();    
             int turnonlist[] = {11,15,14,13,   27,31,30,29,   43,47,46,45,   59,63,62,61};
             red_turnon(turnonlist, 16, bright);}
    if(q==6){reset();
             int turnonlist[] = {15,14,13,12,   31,30,29,28,   47,46,45,44,   63,62,61,60};
             red_turnon(turnonlist, 16, bright);}
    if(q==7){reset();
             int turnonlist[] = {14,13,12,8,   30,29,28,24,   46,45,44,40,   62,61,60,56};
             red_turnon(turnonlist, 16, bright);}
    if(q==8){reset();
             int turnonlist[] = {13,12,8,4,   29,28,24,20,   45,44,40,36,   61,60,56,52};
             red_turnon(turnonlist, 16, bright);}
    if(q==9){reset();
             int turnonlist[] = {12,8,4,0,   28,24,20,16,   44,40,36,32,   60,56,52,48};
             red_turnon(turnonlist, 16, bright);}
    if(q==10){reset();
              int turnonlist[] = {8,4,0,1,   24,20,16,17,   40,36,32,33,   56,52,48,49};
              red_turnon(turnonlist, 16, bright);}
    if(q==11){reset();
              int turnonlist[] = {4,0,1,2,   20,16,17,18,   36,32,33,34,   52,48,49,50};
              red_turnon(turnonlist, 16, bright);}
    q=q+1;
    if(q==12){q=0;}}
    
    void colorchange(){
    
    for (p=0;p<64;p++){
      REDLEDs[p]=r1;
      GREENLEDs[p]=g1;
      BLUELEDs[p]=b1;}
    if(q==0){r1=c1;b1=4095-c1;c1++;
            if(c1==4096){c1=0;q=q+1;}}
    if(q==1){g1=c1;r1=4095-c1;c1++;
            if(c1==4096){c1=0;q=q+1;}}
    if(q==2){b1=c1;g1=4095-c1;c1++;
            if(c1==4096){c1=0;q=0;}}}
    
*/

