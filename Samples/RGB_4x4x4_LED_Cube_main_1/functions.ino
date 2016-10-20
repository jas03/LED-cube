/* FUNCTIONS;

    CubeUpdate(layer 1-4);
    
    hsvToRgb(Hue 0-1, Saturation 0-1, Brightness 0-1, Resolution integer);
    
    renderHue();
    
    renderCube();
    
    
    
*/



void CubeUpdate(int layerNoVal){
  
  if(layerNoVal == 1){
    
    //Set all LEDs for Layer 1, RED channel
    Tlc.set(AAchr, AAAr);
    Tlc.set(ABchr, AABr);
    Tlc.set(ACchr, AACr);
    Tlc.set(ADchr, AADr);
    
    Tlc.set(BAchr, ABAr);
    Tlc.set(BBchr, ABBr);
    Tlc.set(BCchr, ABCr);
    Tlc.set(BDchr, ABDr);
    
    Tlc.set(CAchr, ACAr);
    Tlc.set(CBchr, ACBr);
    Tlc.set(CCchr, ACCr);
    Tlc.set(CDchr, ACDr);
    
    Tlc.set(DAchr, ADAr);
    Tlc.set(DBchr, ADBr);
    Tlc.set(DCchr, ADCr);
    Tlc.set(DDchr, ADDr);
    
    //Set all LEDs for Layer 1, GREEN channel
    Tlc.set(AAchg, AAAg);
    Tlc.set(ABchg, AABg);
    Tlc.set(ACchg, AACg);
    Tlc.set(ADchg, AADg);
    
    Tlc.set(BAchg, ABAg);
    Tlc.set(BBchg, ABBg);
    Tlc.set(BCchg, ABCg);
    Tlc.set(BDchg, ABDg);
    
    Tlc.set(CAchg, ACAg);
    Tlc.set(CBchg, ACBg);
    Tlc.set(CCchg, ACCg);
    Tlc.set(CDchg, ACDg);
    
    Tlc.set(DAchg, ADAg);
    Tlc.set(DBchg, ADBg);
    Tlc.set(DCchg, ADCg);
    Tlc.set(DDchg, ADDg);
    
    //Set all LEDs for Layer 1, BLUE channel
    Tlc.set(AAchb, AAAb);
    Tlc.set(ABchb, AABb);
    Tlc.set(ACchb, AACb);
    Tlc.set(ADchb, AADb);
    
    Tlc.set(BAchb, ABAb);
    Tlc.set(BBchb, ABBb);
    Tlc.set(BCchb, ABCb);
    Tlc.set(BDchb, ABDb);
    
    Tlc.set(CAchb, ACAb);
    Tlc.set(CBchb, ACBb);
    Tlc.set(CCchb, ACCb);
    Tlc.set(CDchb, ACDb);
    
    Tlc.set(DAchb, ADAb);
    Tlc.set(DBchb, ADBb);
    Tlc.set(DCchb, ADCb);
    Tlc.set(DDchb, ADDb);
    
    
    PORTD |= _BV(PD6);  //layer 1
    PORTD |= _BV(PD7);  //layer 2
    PORTB |= _BV(PB0);  //layer 3
    //PORTB |= _BV(P);  //layer 2
    
    Tlc.update();

    PORTD &= ~_BV(PD6);  //layer 1
    
  }
  
  
  if(layerNoVal == 2){
    
    //Set all LEDs for Layer 1, RED channel
    Tlc.set(AAchr, BAAr);
    Tlc.set(ABchr, BABr);
    Tlc.set(ACchr, BACr);
    Tlc.set(ADchr, BADr);
    
    Tlc.set(BAchr, BBAr);
    Tlc.set(BBchr, BBBr);
    Tlc.set(BCchr, BBCr);
    Tlc.set(BDchr, BBDr);
    
    Tlc.set(CAchr, BCAr);
    Tlc.set(CBchr, BCBr);
    Tlc.set(CCchr, BCCr);
    Tlc.set(CDchr, BCDr);
    
    Tlc.set(DAchr, BDAr);
    Tlc.set(DBchr, BDBr);
    Tlc.set(DCchr, BDCr);
    Tlc.set(DDchr, BDDr);
    
    //Set all LEDs for Layer 1, GREEN channel
    Tlc.set(AAchg, BAAg);
    Tlc.set(ABchg, BABg);
    Tlc.set(ACchg, BACg);
    Tlc.set(ADchg, BADg);
    
    Tlc.set(BAchg, BBAg);
    Tlc.set(BBchg, BBBg);
    Tlc.set(BCchg, BBCg);
    Tlc.set(BDchg, BBDg);
    
    Tlc.set(CAchg, BCAg);
    Tlc.set(CBchg, BCBg);
    Tlc.set(CCchg, BCCg);
    Tlc.set(CDchg, BCDg);
    
    Tlc.set(DAchg, BDAg);
    Tlc.set(DBchg, BDBg);
    Tlc.set(DCchg, BDCg);
    Tlc.set(DDchg, BDDg);
    
    //Set all LEDs for Layer 1, BLUE channel
    Tlc.set(AAchb, BAAb);
    Tlc.set(ABchb, BABb);
    Tlc.set(ACchb, BACb);
    Tlc.set(ADchb, BADb);
    
    Tlc.set(BAchb, BBAb);
    Tlc.set(BBchb, BBBb);
    Tlc.set(BCchb, BBCb);
    Tlc.set(BDchb, BBDb);
    
    Tlc.set(CAchb, BCAb);
    Tlc.set(CBchb, BCBb);
    Tlc.set(CCchb, BCCb);
    Tlc.set(CDchb, BCDb);
    
    Tlc.set(DAchb, BDAb);
    Tlc.set(DBchb, BDBb);
    Tlc.set(DCchb, BDCb);
    Tlc.set(DDchb, BDDb);
    
    PORTD |= _BV(PD6);  //layer 1
    PORTD |= _BV(PD7);  //layer 2
    PORTB |= _BV(PB0);  //layer 3
    //PORTB |= _BV(P);  //layer 2
    
    Tlc.update();

    PORTD &= ~_BV(PD7);  //layer 2
     
  }
  
  
  if(layerNoVal == 3){
    
    //Set all LEDs for Layer 1, RED channel
    Tlc.set(AAchr, CAAr);
    Tlc.set(ABchr, CABr);
    Tlc.set(ACchr, CACr);
    Tlc.set(ADchr, CADr);
    
    Tlc.set(BAchr, CBAr);
    Tlc.set(BBchr, CBBr);
    Tlc.set(BCchr, CBCr);
    Tlc.set(BDchr, CBDr);
    
    Tlc.set(CAchr, CCAr);
    Tlc.set(CBchr, CCBr);
    Tlc.set(CCchr, CCCr);
    Tlc.set(CDchr, CCDr);
    
    Tlc.set(DAchr, CDAr);
    Tlc.set(DBchr, CDBr);
    Tlc.set(DCchr, CDCr);
    Tlc.set(DDchr, CDDr);
    
    //Set all LEDs for Layer 1, GREEN channel
    Tlc.set(AAchg, CAAg);
    Tlc.set(ABchg, CABg);
    Tlc.set(ACchg, CACg);
    Tlc.set(ADchg, CADg);
    
    Tlc.set(BAchg, CBAg);
    Tlc.set(BBchg, CBBg);
    Tlc.set(BCchg, CBCg);
    Tlc.set(BDchg, CBDg);
    
    Tlc.set(CAchg, CCAg);
    Tlc.set(CBchg, CCBg);
    Tlc.set(CCchg, CCCg);
    Tlc.set(CDchg, CCDg);
    
    Tlc.set(DAchg, CDAg);
    Tlc.set(DBchg, CDBg);
    Tlc.set(DCchg, CDCg);
    Tlc.set(DDchg, CDDg);
    
    //Set all LEDs for Layer 1, BLUE channel
    Tlc.set(AAchb, CAAb);
    Tlc.set(ABchb, CABb);
    Tlc.set(ACchb, CACb);
    Tlc.set(ADchb, CADb);
    
    Tlc.set(BAchb, CBAb);
    Tlc.set(BBchb, CBBb);
    Tlc.set(BCchb, CBCb);
    Tlc.set(BDchb, CBDb);
    
    Tlc.set(CAchb, CCAb);
    Tlc.set(CBchb, CCBb);
    Tlc.set(CCchb, CCCb);
    Tlc.set(CDchb, CCDb);
    
    Tlc.set(DAchb, CDAb);
    Tlc.set(DBchb, CDBb);
    Tlc.set(DCchb, CDCb);
    Tlc.set(DDchb, CDDb);
    
     PORTD |= _BV(PD6);  //layer 1
    PORTD |= _BV(PD7);  //layer 2
    PORTB |= _BV(PB0);  //layer 3
    //PORTB |= _BV(P);  //layer 2
    
    Tlc.update();

    PORTB &= ~_BV(PB0);  //layer 3
        
  }
  
  
  if(layerNoVal == 4){
    
    //Set all LEDs for Layer 1, RED channel
    Tlc.set(AAchr, DAAr);
    Tlc.set(ABchr, DABr);
    Tlc.set(ACchr, DACr);
    Tlc.set(ADchr, DADr);
    
    Tlc.set(BAchr, DBAr);
    Tlc.set(BBchr, DBBr);
    Tlc.set(BCchr, DBCr);
    Tlc.set(BDchr, DBDr);
    
    Tlc.set(CAchr, DCAr);
    Tlc.set(CBchr, DCBr);
    Tlc.set(CCchr, DCCr);
    Tlc.set(CDchr, DCDr);
    
    Tlc.set(DAchr, DDAr);
    Tlc.set(DBchr, DDBr);
    Tlc.set(DCchr, DDCr);
    Tlc.set(DDchr, DDDr);
    
    //Set all LEDs for Layer 1, GREEN channel
    Tlc.set(AAchg, DAAg);
    Tlc.set(ABchg, DABg);
    Tlc.set(ACchg, DACg);
    Tlc.set(ADchg, DADg);
    
    Tlc.set(BAchg, DBAg);
    Tlc.set(BBchg, DBBg);
    Tlc.set(BCchg, DBCg);
    Tlc.set(BDchg, DBDg);
    
    Tlc.set(CAchg, DCAg);
    Tlc.set(CBchg, DCBg);
    Tlc.set(CCchg, DCCg);
    Tlc.set(CDchg, DCDg);
    
    Tlc.set(DAchg, DDAg);
    Tlc.set(DBchg, DDBg);
    Tlc.set(DCchg, DDCg);
    Tlc.set(DDchg, DDDg);
    
    //Set all LEDs or Layer 1, BLUE channel
    Tlc.set(AAchb, DAAb);
    Tlc.set(ABchb, DABb);
    Tlc.set(ACchb, DACb);
    Tlc.set(ADchb, DADb);
    
    Tlc.set(BAchb, DBAb);
    Tlc.set(BBchb, DBBb);
    Tlc.set(BCchb, DBCb);
    Tlc.set(BDchb, DBDb);
    
    Tlc.set(CAchb, DCAb);
    Tlc.set(CBchb, DCBb);
    Tlc.set(CCchb, DCCb);
    Tlc.set(CDchb, DCDb);
    
    Tlc.set(DAchb, DDAb);
    Tlc.set(DBchb, DDBb);
    Tlc.set(DCchb, DDCb);
    Tlc.set(DDchb, DDDb);
    
    PORTD |= _BV(PD6);  //layer 1
    PORTD |= _BV(PD7);  //layer 2
    PORTB |= _BV(PB0);  //layer 3
    //PORTB |= _BV(P);  //layer 2
    
    Tlc.update();

    //PORTC &= ~_BV(PC1);  //layer 4
      
  }
  
  
  
  }
  
 

  
  void hsvToRgb(float h,float s,float v, int res){
    float r, g, b;

    int i = h * 6;
    float f = h * 6 - i;
    float p = v * (1 - s);
    float q = v * (1 - f * s);
    float t = v * (1 - (1 - f) * s);

    switch(i % 6){
        case 0: r = v, g = t, b = p; break;
        case 1: r = q, g = v, b = p; break;
        case 2: r = p, g = v, b = t; break;
        case 3: r = p, g = q, b = v; break;
        case 4: r = t, g = p, b = v; break;
        case 5: r = v, g = p, b = q; break;
    }

    
    HueOutR = r*(res+RedCal);
    HueOutG = g*(res+GreenCal);
    HueOutB = b*(res+BlueCal);
    
    
}

void renderHue(){
  
  float tempAA;
  float tempAB;
  float tempAC;
  float tempAD;
  
  float tempDA;
  float tempDB;
  float tempDC;
  float tempDD;
  
  float tempH;
  
  
  //layer 1{
  //column A{
  tempAA = hueAAone;
  
  hsvToRgb(tempAA, CubeSat, CubeBrig, CubeRes);
  AAAr=HueOutR;
  AAAg=HueOutG;
  AAAb=HueOutB;
  
  
  tempAD = hueADone;
  
  hsvToRgb(tempAD, CubeSat, CubeBrig, CubeRes);
  AADr=HueOutR;
  AADg=HueOutG;
  AADb=HueOutB;
  
  
  tempAB = ((tempAA*2)+tempAD)/3;
  
  hsvToRgb(tempAB, CubeSat, CubeBrig, CubeRes);
  AABr=HueOutR;
  AABg=HueOutG;
  AABb=HueOutB;
  
  
  tempAC = (tempAA+(tempAD*2))/3;
  
  hsvToRgb(tempAC, CubeSat, CubeBrig, CubeRes);
  AACr=HueOutR;
  AACg=HueOutG;
  AACb=HueOutB;
  
  //} 
  //column D{
  tempDA = hueDAone;
  
  hsvToRgb(tempDA, CubeSat, CubeBrig, CubeRes);
  ADAr=HueOutR;
  ADAg=HueOutG;
  ADAb=HueOutB;
  
  
  tempDD = hueDDone;
  
  hsvToRgb(tempDD, CubeSat, CubeBrig, CubeRes);
  ADDr=HueOutR;
  ADDg=HueOutG;
  ADDb=HueOutB;
  
  
  tempDB = ((tempDA*2)+tempDD)/3;
  
  hsvToRgb(tempDB, CubeSat, CubeBrig, CubeRes);
  ADBr=HueOutR;
  ADBg=HueOutG;
  ADBb=HueOutB;
  
  
  tempDC = (tempDA+(tempDD*2))/3;
  
  hsvToRgb(tempDC, CubeSat, CubeBrig, CubeRes);
  ADCr=HueOutR;
  ADCg=HueOutG;
  ADCb=HueOutB;
  
  //}
  //column B{
    
  tempH = ((tempAA*2)+tempDA)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ABAr=HueOutR;
  ABAg=HueOutG;
  ABAb=HueOutB;
  
  
  tempH = ((tempAB*2)+tempDB)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ABBr=HueOutR;
  ABBg=HueOutG;
  ABBb=HueOutB;
  
  
  tempH = ((tempAC*2)+tempDC)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ABCr=HueOutR;
  ABCg=HueOutG;
  ABCb=HueOutB;
  
  
  tempH = ((tempAD*2)+tempDD)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ABDr=HueOutR;
  ABDg=HueOutG;
  ABDb=HueOutB;
  
    //}
  //column C{
    
  tempH = ((tempDA*2)+tempAA)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ACAr=HueOutR;
  ACAg=HueOutG;
  ACAb=HueOutB;
  
  
  tempH = ((tempDB*2)+tempAB)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ACBr=HueOutR;
  ACBg=HueOutG;
  ACBb=HueOutB;
  
  
  tempH = ((tempDC*2)+tempAC)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ACCr=HueOutR;
  ACCg=HueOutG;
  ACCb=HueOutB;
  
  
  tempH = ((tempDD*2)+tempAD)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ACDr=HueOutR;
  ACDg=HueOutG;
  ACDb=HueOutB;
  
  
  //}}
  
  
  //layer 2{
  //column A{
  tempAA = ((hueAAone*2)+hueAAfour)/3;
  
  hsvToRgb(tempAA, CubeSat, CubeBrig, CubeRes);
  BAAr=HueOutR;
  BAAg=HueOutG;
  BAAb=HueOutB;
  
  
  tempAD = ((hueADone*2)+hueADfour)/3;
  
  hsvToRgb(tempAD, CubeSat, CubeBrig, CubeRes);
  BADr=HueOutR;
  BADg=HueOutG;
  BADb=HueOutB;
  
  
  tempAB = ((tempAA*2)+tempAD)/3;
  
  hsvToRgb(tempAB, CubeSat, CubeBrig, CubeRes);
  BABr=HueOutR;
  BABg=HueOutG;
  BABb=HueOutB;
  
  
  tempAC = (tempAA+(tempAD*2))/3;
  
  hsvToRgb(tempAC, CubeSat, CubeBrig, CubeRes);
  BACr=HueOutR;
  BACg=HueOutG;
  BACb=HueOutB;
  
  //} 
  //column D{
  tempDA = ((hueDAone*2)+hueDAfour)/3;
  
  hsvToRgb(tempDA, CubeSat, CubeBrig, CubeRes);
  BDAr=HueOutR;
  BDAg=HueOutG;
  BDAb=HueOutB;
  
  
  tempDD = ((hueDDone*2)+hueDDfour)/3;
  
  hsvToRgb(tempDD, CubeSat, CubeBrig, CubeRes);
  BDDr=HueOutR;
  BDDg=HueOutG;
  BDDb=HueOutB;
  
  
  tempDB = ((tempDA*2)+tempDD)/3;
  
  hsvToRgb(tempDB, CubeSat, CubeBrig, CubeRes);
  BDBr=HueOutR;
  BDBg=HueOutG;
  BDBb=HueOutB;
  
  
  tempDC = (tempDA+(tempDD*2))/3;
  
  hsvToRgb(tempDC, CubeSat, CubeBrig, CubeRes);
  BDCr=HueOutR;
  BDCg=HueOutG;
  BDCb=HueOutB;
  
  //}
  //column B{
    
  tempH = ((tempAA*2)+tempDA)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  BBAr=HueOutR;
  BBAg=HueOutG;
  BBAb=HueOutB;
  
  
  tempH = ((tempAB*2)+tempDB)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  BBBr=HueOutR;
  BBBg=HueOutG;
  BBBb=HueOutB;
  
  
  tempH = ((tempAC*2)+tempDC)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  BBCr=HueOutR;
  BBCg=HueOutG;
  BBCb=HueOutB;
  
  
  tempH = ((tempAD*2)+tempDD)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  BBDr=HueOutR;
  BBDg=HueOutG;
  BBDb=HueOutB;
  
    //}
  //column C{
    
  tempH = ((tempDA*2)+tempAA)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  BCAr=HueOutR;
  BCAg=HueOutG;
  BCAb=HueOutB;
  
  
  tempH = ((tempDB*2)+tempAB)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  BCBr=HueOutR;
  BCBg=HueOutG;
  BCBb=HueOutB;
  
  
  tempH = ((tempDC*2)+tempAC)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  BCCr=HueOutR;
  BCCg=HueOutG;
  BCCb=HueOutB;
  
  
  tempH = ((tempDD*2)+tempAD)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  BCDr=HueOutR;
  BCDg=HueOutG;
  BCDb=HueOutB;
  
  
  //}}
  
  
  //layer 3{
  //column A{
  tempAA = ((hueAAfour*2)+hueAAone)/3;
  
  hsvToRgb(tempAA, CubeSat, CubeBrig, CubeRes);
  CAAr=HueOutR;
  CAAg=HueOutG;
  CAAb=HueOutB;
  
  
  tempAD = ((hueADfour*2)+hueADone)/3;
  
  hsvToRgb(tempAD, CubeSat, CubeBrig, CubeRes);
  CADr=HueOutR;
  CADg=HueOutG;
  CADb=HueOutB;
  
  
  tempAB = ((tempAA*2)+tempAD)/3;
  
  hsvToRgb(tempAB, CubeSat, CubeBrig, CubeRes);
  CABr=HueOutR;
  CABg=HueOutG;
  CABb=HueOutB;
  
  
  tempAC = (tempAA+(tempAD*2))/3;
  
  hsvToRgb(tempAC, CubeSat, CubeBrig, CubeRes);
  CACr=HueOutR;
  CACg=HueOutG;
  CACb=HueOutB;
  
  //} 
  //column D{
  tempDA = ((hueDAone*2)+hueDAfour)/3;
  
  hsvToRgb(tempDA, CubeSat, CubeBrig, CubeRes);
  CDAr=HueOutR;
  CDAg=HueOutG;
  CDAb=HueOutB;
  
  
  tempDD = ((hueDDone*2)+hueDDfour)/3;
  
  hsvToRgb(tempDD, CubeSat, CubeBrig, CubeRes);
  CDDr=HueOutR;
  CDDg=HueOutG;
  CDDb=HueOutB;
  
  
  tempDB = ((tempDA*2)+tempDD)/3;
  
  hsvToRgb(tempDB, CubeSat, CubeBrig, CubeRes);
  CDBr=HueOutR;
  CDBg=HueOutG;
  CDBb=HueOutB;
  
  
  tempDC = (tempDA+(tempDD*2))/3;
  
  hsvToRgb(tempDC, CubeSat, CubeBrig, CubeRes);
  CDCr=HueOutR;
  CDCg=HueOutG;
  CDCb=HueOutB;
  
  //}
  //column B{
    
  tempH = ((tempAA*2)+tempDA)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  CBAr=HueOutR;
  CBAg=HueOutG;
  CBAb=HueOutB;
  
  
  tempH = ((tempAB*2)+tempDB)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  CBBr=HueOutR;
  CBBg=HueOutG;
  CBBb=HueOutB;
  
  
  tempH = ((tempAC*2)+tempDC)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  CBCr=HueOutR;
  CBCg=HueOutG;
  CBCb=HueOutB;
  
  
  tempH = ((tempAD*2)+tempDD)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  CBDr=HueOutR;
  CBDg=HueOutG;
  CBDb=HueOutB;
  
    //}
  //column C{
    
  tempH = ((tempDA*2)+tempAA)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  CCAr=HueOutR;
  CCAg=HueOutG;
  CCAb=HueOutB;
  
  
  tempH = ((tempDB*2)+tempAB)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  CCBr=HueOutR;
  CCBg=HueOutG;
  CCBb=HueOutB;
  
  
  tempH = ((tempDC*2)+tempAC)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  CCCr=HueOutR;
  CCCg=HueOutG;
  CCCb=HueOutB;
  
  
  tempH = ((tempDD*2)+tempAD)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  CCDr=HueOutR;
  CCDg=HueOutG;
  CCDb=HueOutB;
  
  
  //}}
  
  
  //layer 4{
  //column A{
  tempAA = hueAAfour;
  
  hsvToRgb(tempAA, CubeSat, CubeBrig, CubeRes);
  AAAr=HueOutR;
  AAAg=HueOutG;
  AAAb=HueOutB;
  
  
  tempAD = hueADfour;
  
  hsvToRgb(tempAD, CubeSat, CubeBrig, CubeRes);
  AADr=HueOutR;
  AADg=HueOutG;
  AADb=HueOutB;
  
  
  tempAB = ((tempAA*2)+tempAD)/3;
  
  hsvToRgb(tempAB, CubeSat, CubeBrig, CubeRes);
  AABr=HueOutR;
  AABg=HueOutG;
  AABb=HueOutB;
  
  
  tempAC = (tempAA+(tempAD*2))/3;
  
  hsvToRgb(tempAC, CubeSat, CubeBrig, CubeRes);
  AACr=HueOutR;
  AACg=HueOutG;
  AACb=HueOutB;
  
  //} 
  //column D{
  tempDA = hueDAfour;
  
  hsvToRgb(tempDA, CubeSat, CubeBrig, CubeRes);
  ADAr=HueOutR;
  ADAg=HueOutG;
  ADAb=HueOutB;
  
  
  tempDD = hueDDfour;
  
  hsvToRgb(tempDD, CubeSat, CubeBrig, CubeRes);
  ADDr=HueOutR;
  ADDg=HueOutG;
  ADDb=HueOutB;
  
  
  tempDB = ((tempDA*2)+tempDD)/3;
  
  hsvToRgb(tempDB, CubeSat, CubeBrig, CubeRes);
  ADBr=HueOutR;
  ADBg=HueOutG;
  ADBb=HueOutB;
  
  
  tempDC = (tempDA+(tempDD*2))/3;
  
  hsvToRgb(tempDC, CubeSat, CubeBrig, CubeRes);
  ADCr=HueOutR;
  ADCg=HueOutG;
  ADCb=HueOutB;
  
  //}
  //column B{
    
  tempH = ((tempAA*2)+tempDA)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ABAr=HueOutR;
  ABAg=HueOutG;
  ABAb=HueOutB;
  
  
  tempH = ((tempAB*2)+tempDB)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ABBr=HueOutR;
  ABBg=HueOutG;
  ABBb=HueOutB;
  
  
  tempH = ((tempAC*2)+tempDC)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ABCr=HueOutR;
  ABCg=HueOutG;
  ABCb=HueOutB;
  
  
  tempH = ((tempAD*2)+tempDD)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ABDr=HueOutR;
  ABDg=HueOutG;
  ABDb=HueOutB;
  
    //}
  //column C{
    
  tempH = ((tempDA*2)+tempAA)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ACAr=HueOutR;
  ACAg=HueOutG;
  ACAb=HueOutB;
  
  
  tempH = ((tempDB*2)+tempAB)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ACBr=HueOutR;
  ACBg=HueOutG;
  ACBb=HueOutB;
  
  
  tempH = ((tempDC*2)+tempAC)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ACCr=HueOutR;
  ACCg=HueOutG;
  ACCb=HueOutB;
  
  
  tempH = ((tempDD*2)+tempAD)/3;
  
  hsvToRgb(tempH, CubeSat, CubeBrig, CubeRes);
  ACDr=HueOutR;
  ACDg=HueOutG;
  ACDb=HueOutB;
  
  
  //}}
  
  
}
  
  
  
  void renderCube(){
  
    //Layer1 {
    //column A
  hsvToRgb(hueAAone, CubeSat, CubeBrig, CubeRes);
  AAAr=HueOutR;
  AAAg=HueOutG;
  AAAb=HueOutB;
  
  hsvToRgb(hueADone, CubeSat, CubeBrig, CubeRes);
  AADr=HueOutR;
  AADg=HueOutG;
  AADb=HueOutB;
  
  AABr=((AAAr*2)+AADr)/3;
  AABg=((AAAg*2)+AADg)/3;
  AABb=((AAAb*2)+AADb)/3;

  AACr=((AADr*2)+AAAr)/3;
  AACg=((AADg*2)+AAAg)/3;
  AACb=((AADb*2)+AAAb)/3;
  
  //column D
  hsvToRgb(hueDAone, CubeSat, CubeBrig, CubeRes);
  ADAr=HueOutR;
  ADAg=HueOutG;
  ADAb=HueOutB;
  
  hsvToRgb(hueDDone, CubeSat, CubeBrig, CubeRes);
  ADDr=HueOutR;
  ADDg=HueOutG;
  ADDb=HueOutB;
  
  ADBr=((ADAr*2)+ADDr)/3;
  ADBg=((ADAg*2)+ADDg)/3;
  ADBb=((ADAb*2)+ADDb)/3;

  ADCr=((ADDr*2)+ADAr)/3;
  ADCg=((ADDg*2)+ADAg)/3;
  ADCb=((ADDb*2)+ADAb)/3;
  
  //ColumnB
  ABAr=((AAAr*2)+ADAr)/3;
  ABAg=((AAAg*2)+ADAg)/3;
  ABAb=((AAAb*2)+ADAb)/3;
  
  ABBr=((AABr*2)+ADBr)/3;
  ABBg=((AABg*2)+ADBg)/3;
  ABBb=((AABb*2)+ADBb)/3;
  
  ABCr=((AACr*2)+ADCr)/3;
  ABCg=((AACg*2)+ADCg)/3;
  ABCb=((AACb*2)+ADCb)/3;
  
  ABDr=((AADr*2)+ADDr)/3;
  ABDg=((AADg*2)+ADDg)/3;
  ABDb=((AADb*2)+ADDb)/3;
  
  //ColumnC
  ACAr=((ADAr*2)+AAAr)/3;
  ACAg=((ADAg*2)+AAAg)/3;
  ACAb=((ADAb*2)+AAAb)/3;
  
  ACBr=((ADBr*2)+AABr)/3;
  ACBg=((ADBg*2)+AABg)/3;
  ACBb=((ADBb*2)+AABb)/3;
  
  ACCr=((ADCr*2)+AACr)/3;
  ACCg=((ADCg*2)+AACg)/3;
  ACCb=((ADCb*2)+AACb)/3;
  
  ACDr=((ADDr*2)+AADr)/3;
  ACDg=((ADDg*2)+AADg)/3;
  ACDb=((ADDb*2)+AADb)/3;
  
  //}
      //Layer4 {
    //column A
  hsvToRgb(hueAAfour, CubeSat, CubeBrig, CubeRes);
  DAAr=HueOutR;
  DAAg=HueOutG;
  DAAb=HueOutB;
  
  hsvToRgb(hueADfour, CubeSat, CubeBrig, CubeRes);
  DADr=HueOutR;
  DADg=HueOutG;
  DADb=HueOutB;
  
  DABr=((DAAr*2)+DADr)/3;
  DABg=((DAAg*2)+DADg)/3;
  DABb=((DAAb*2)+DADb)/3;

  DACr=((DADr*2)+DAAr)/3;
  DACg=((DADg*2)+DAAg)/3;
  DACb=((DADb*2)+DAAb)/3;
  
  //column D
  hsvToRgb(hueDAfour, CubeSat, CubeBrig, CubeRes);
  DDAr=HueOutR;
  DDAg=HueOutG;
  DDAb=HueOutB;
  
  hsvToRgb(hueDDfour, CubeSat, CubeBrig, CubeRes);
  DDDr=HueOutR;
  DDDg=HueOutG;
  DDDb=HueOutB;
  
  DDBr=((DDAr*2)+DDDr)/3;
  DDBg=((DDAg*2)+DDDg)/3;
  DDBb=((DDAb*2)+DDDb)/3;

  DDCr=((DDDr*2)+DDAr)/3;
  DDCg=((DDDg*2)+DDAg)/3;
  DDCb=((DDDb*2)+DDAb)/3;
  
  //ColumnB
  DBAr=((DAAr*2)+DDAr)/3;
  DBAg=((DAAg*2)+DDAg)/3;
  DBAb=((DAAb*2)+DDAb)/3;
  
  DBBr=((DABr*2)+DDBr)/3;
  DBBg=((DABg*2)+DDBg)/3;
  DBBb=((DABb*2)+DDBb)/3;
  
  DBCr=((DACr*2)+DDCr)/3;
  DBCg=((DACg*2)+DDCg)/3;
  DBCb=((DACb*2)+DDCb)/3;
  
  DBDr=((DADr*2)+DDDr)/3;
  DBDg=((DADg*2)+DDDg)/3;
  DBDb=((DADb*2)+DDDb)/3;
  
  //ColumnC
  DCAr=((DDAr*2)+DAAr)/3;
  DCAg=((DDAg*2)+DAAg)/3;
  DCAb=((DDAb*2)+DAAb)/3;
  
  DCBr=((DDBr*2)+DABr)/3;
  DCBg=((DDBg*2)+DABg)/3;
  DCBb=((DDBb*2)+DABb)/3;
  
  DCCr=((DDCr*2)+DACr)/3;
  DCCg=((DDCg*2)+DACg)/3;
  DCCb=((DDCb*2)+DACb)/3;
  
  DCDr=((DDDr*2)+DADr)/3;
  DCDg=((DDDg*2)+DADg)/3;
  DCDb=((DDDb*2)+DADb)/3;
  
  //}
        //Layer3 {
    //column A
  CAAr=((DAAr*2)+AAAr)/3;
  CAAg=((DAAg*2)+AAAg)/3;
  CAAb=((DAAb*2)+AAAb)/3;

  CADr=((DADr*2)+AADr)/3;
  CADg=((DADg*2)+AADg)/3;
  CADb=((DADb*2)+AADb)/3;
    
  CABr=((DAAr*2)+DADr)/3;
  CABg=((DAAg*2)+DADg)/3;
  CABb=((DAAb*2)+DADb)/3;

  CACr=((DADr*2)+DAAr)/3;
  CACg=((DADg*2)+DAAg)/3;
  CACb=((DADb*2)+DAAb)/3;
  
  //column D
  
  CDAr=((DDAr*2)+ADAr)/3;
  CDAg=((DDAg*2)+ADAg)/3;
  CDAb=((DDAb*2)+ADAb)/3;

  CDDr=((DDDr*2)+ADDr)/3;
  CDDg=((DDDg*2)+ADDg)/3;
  CDDb=((DDDb*2)+ADDb)/3;
  
  CDBr=((DDAr*2)+DDDr)/3;
  CDBg=((DDAg*2)+DDDg)/3;
  CDBb=((DDAb*2)+DDDb)/3;

  CDCr=((DDDr*2)+DDAr)/3;
  CDCg=((DDDg*2)+DDAg)/3;
  CDCb=((DDDb*2)+DDAb)/3;
  
  //ColumnB
  CBAr=((DAAr*2)+DDAr)/3;
  CBAg=((DAAg*2)+DDAg)/3;
  CBAb=((DAAb*2)+DDAb)/3;
  
  CBBr=((DABr*2)+DDBr)/3;
  CBBg=((DABg*2)+DDBg)/3;
  CBBb=((DABb*2)+DDBb)/3;
  
  CBCr=((DACr*2)+DDCr)/3;
  CBCg=((DACg*2)+DDCg)/3;
  CBCb=((DACb*2)+DDCb)/3;
  
  CBDr=((DADr*2)+DDDr)/3;
  CBDg=((DADg*2)+DDDg)/3;
  CBDb=((DADb*2)+DDDb)/3;
  
  //ColumnC
  CCAr=((DDAr*2)+DAAr)/3;
  CCAg=((DDAg*2)+DAAg)/3;
  CCAb=((DDAb*2)+DAAb)/3;
  
  CCBr=((DDBr*2)+DABr)/3;
  CCBg=((DDBg*2)+DABg)/3;
  CCBb=((DDBb*2)+DABb)/3;
  
  CCCr=((DDCr*2)+DACr)/3;
  CCCg=((DDCg*2)+DACg)/3;
  CCCb=((DDCb*2)+DACb)/3;
  
  CCDr=((DDDr*2)+DADr)/3;
  CCDg=((DDDg*2)+DADg)/3;
  CCDb=((DDDb*2)+DADb)/3;
 //
         //Layer2 {
    //column A
  BAAr=((AAAr*2)+DAAr)/3;
  BAAg=((AAAg*2)+DAAg)/3;
  BAAb=((AAAb*2)+DAAb)/3;

  BADr=((AADr*2)+DADr)/3;
  BADg=((AADg*2)+DADg)/3;
  BADb=((AADb*2)+DADb)/3;
    
  BABr=((AAAr*2)+DADr)/3;
  BABg=((AAAg*2)+DADg)/3;
  BABb=((AAAb*2)+DADb)/3;

  BACr=((AADr*2)+DAAr)/3;
  BACg=((AADg*2)+DAAg)/3;
  BACb=((AADb*2)+DAAb)/3;
  
  //column D
  
  BDAr=((DDAr*2)+ADAr)/3;
  BDAg=((DDAg*2)+ADAg)/3;
  BDAb=((DDAb*2)+ADAb)/3;

  BDDr=((DDDr*2)+ADDr)/3;
  BDDg=((DDDg*2)+ADDg)/3;
  BDDb=((DDDb*2)+ADDb)/3;
  
  BDBr=((DDAr*2)+DDDr)/3;
  BDBg=((DDAg*2)+DDDg)/3;
  BDBb=((DDAb*2)+DDDb)/3;

  BDCr=((DDDr*2)+DDAr)/3;
  BDCg=((DDDg*2)+DDAg)/3;
  BDCb=((DDDb*2)+DDAb)/3;
  
  //ColumnB
  BBAr=((DAAr*2)+DDAr)/3;
  BBAg=((DAAg*2)+DDAg)/3;
  BBAb=((DAAb*2)+DDAb)/3;
  
  BBBr=((DABr*2)+DDBr)/3;
  BBBg=((DABg*2)+DDBg)/3;
  BBBb=((DABb*2)+DDBb)/3;
  
  BBCr=((DACr*2)+DDCr)/3;
  BBCg=((DACg*2)+DDCg)/3;
  BBCb=((DACb*2)+DDCb)/3;
  
  BBDr=((DADr*2)+DDDr)/3;
  BBDg=((DADg*2)+DDDg)/3;
  BBDb=((DADb*2)+DDDb)/3;
  
  //ColumnC
  BCAr=((DDAr*2)+DAAr)/3;
  BCAg=((DDAg*2)+DAAg)/3;
  BCAb=((DDAb*2)+DAAb)/3;
  
  BCBr=((DDBr*2)+DABr)/3;
  BCBg=((DDBg*2)+DABg)/3;
  BCBb=((DDBb*2)+DABb)/3;
  
  BCCr=((DDCr*2)+DACr)/3;
  BCCg=((DDCg*2)+DACg)/3;
  BCCb=((DDCb*2)+DACb)/3;
  
  BCDr=((DDDr*2)+DADr)/3;
  BCDg=((DDDg*2)+DADg)/3;
  BCDb=((DDDb*2)+DADb)/3;
  
  //}
  
  

  
  
  
  
  }
  
  
  
  
