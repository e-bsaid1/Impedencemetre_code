// C++ code
//

int VX_1K = 12,VX_100K=11,VX_1M=10, BOUTON_POUSSOIR = 13;//déclaration de la tension 
                                                // du bouton poussoir              

void setup()
{
  pinMode(VX_1K, INPUT), pinMode(VX_100K, INPUT),pinMode(VX_1M, INPUT);
  pinMode(BOUTON_POUSSOIR, INPUT);
 
  
  Serial.begin(9600);// opens serial port, sets data rate to 9600 bps
}

void loop()
{
  //digitalWrite(VX_1K,LOW), digitalWrite(VX_100K,LOW), digitalWrite(VX_1M,LOW), digitalWrite(BOUTON_POUSSOIR,LOW); 
  
  

  
  Serial.println("Veuillez appuyer sur le BP ");
  while(digitalRead(BOUTON_POUSSOIR) == LOW);//Si le bouton poussoir n'est pas ppuyer ne rien faire 
  
  
  
  //if(digitalRead(BOUTON_POUSSOIR) == HIGH)// si on appuie sur le bouton poussoir
   {resistance();}
    
}

void resistance(){// fonction measure : 
                                                // X1,X2,X3 : état des broches C,B,A
                                                // MESURE : mesure pinctionné sur l'écho du capteur 
                                                float Mesure_1 = 0;
                                                float Mesure_2 = 0;

                                                

                                                
                                                pinMode(VX_1M,OUTPUT);
                                                digitalWrite(VX_1M,HIGH);
                                                
                                                
                                                delay(3000);
                                                Mesure_2 = analogRead(A1);
                                                digitalWrite(VX_1M,LOW);
                                                delay(1000);
                                                pinMode(VX_1M,INPUT);

                                                 
                                                
                                                
                                                
                                                 
                                               

                                                
                                                //if( Mesure_1 == Mesure_2)
                                                //{
                                                     //Serial.println("Il s'agit d'une résistence ");
                                                     
                                                      
                                                      //if ( (Mesure_1 > 102.4) && (Mesure_1 < 921.6))
                                                      //{
                                                       //Serial.println(Mesure_1);
                                                       //Serial.println(Mesure_2);
                                                        

                                                       

                                                      //}


                                                      if ((Mesure_2>104) && (Mesure_2<937))
                                                          
                                                           {
                                                             Serial.println(Mesure_2);
                                                             
                                                          }else
                                                          
                                                           {
                                                             Serial.println(Mesure_2);
                                                             Serial.println("ERREUR RELATIVE SUPERIEUR A 3% ! ERREUR ABSOLUE SUPERIEURE A 1.5% !\n");
                                                             Serial.println("CHANGEZ DE BROCHES");
                                                          }
                                                      
                                                      //else
                                                         //{Serial.println("Changez de résistance");}
  
}  

                                               //if(Mesure_1 < Mesure_2)
                                                 //{Serial.println(Mesure_1);
                                                  //Serial.println(Mesure_2);
                                                  //Serial.println("Il s'agit d'un condensateur");
                                                 //}

                                               //if(Mesure_1 > Mesure_2)
                                                  //{Serial.println("Il s'agit d'une bobine");
                                                   //Serial.println(Mesure_1);
                                                   //Serial.println(Mesure_2);}


                                                   
                            
