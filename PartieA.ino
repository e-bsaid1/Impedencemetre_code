// C++ code
//

int VX = 12, BOUTON_POUSSOIR = 13;//déclaration de la tension 
                                                // du bouton poussoir              

void setup()
{
  pinMode(VX, OUTPUT);
  pinMode(BOUTON_POUSSOIR, INPUT);
  digitalWrite(VX,LOW), digitalWrite(BOUTON_POUSSOIR,LOW);
  
  Serial.begin(9600);// opens serial port, sets data rate to 9600 bps
}

void loop()
{
  digitalWrite(VX,LOW); 
  float Mesure_1 = 0; //déclaration de la première mesure
  float Mesure_2 = 0;

  delay(5000);//attendre 5 secondes
  Serial.println("Veuiller appuyer sur le BP ");
  while(digitalRead(BOUTON_POUSSOIR) == LOW);//Si le bouton poussoir n'est pas ppuyer ne rien faire 

  
  
  //if(digitalRead(BOUTON_POUSSOIR) == HIGH)// si on appuie sur le bouton poussoir
  
    digitalWrite(VX,HIGH);//faire circuler 5V dans le pont diviseur
    Mesure_1 = analogRead(A0);//Lire la tension Vx une fois
    delay(1000);
    Mesure_2 = analogRead(A0);
   digitalWrite(VX,LOW);
    
    Serial.println(Mesure_1);
    Serial.println(Mesure_2);
  
  
  if( Mesure_1 == Mesure_2)
  {
    Serial.println("Il s'agit d'une résistence ");
  }

  if(Mesure_1 < Mesure_2)
    {
    Serial.println("Il s'agit d'un condensateur");
    }
  
  if(Mesure_1 > Mesure_2)
    {

    Serial.println("Il s'agit d'une bobine"); 
    }
}
