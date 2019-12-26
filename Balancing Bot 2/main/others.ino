void MOVE(float magnitude, bool forward){
  if(!forward){
    analogWrite(LM1,magnitude+dead_band);
    analogWrite(LM2,0);
    analogWrite(RM1,0);
    analogWrite(RM2,magnitude+dead_band);
  }
  else{    
    analogWrite(LM1,0);
    analogWrite(LM2,magnitude+dead_band);
    analogWrite(RM1,magnitude+dead_band);
    analogWrite(RM2,0);
  }  
}
