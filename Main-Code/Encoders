void checkEncoderLeft(){
  if(((PIND & B00000100)<<2) == (PIND & B00010000)){
    countLeft++;
  }else{
    countLeft--; 
  }
}

void checkEncoderRight(){
  if((PIND & B00100000) == (PIND & B00001000)<<2){
    countRight--;
  }else{
    countRight++; 
  }
}

inline void getCounts(){
  // as these values are changed by interrupts
  // we need to disable interrupts while we read them
  uint8_t oldSREG = SREG;
  cli();
  countLeft=volCountL;
  countRight=volCountR;
  SREG = oldSREG;
}

void printCount()//function to print countLeft and countRight
{
  Serial.print(countLeft);
  Serial.print("  ");
  Serial.println(countRight);
}
