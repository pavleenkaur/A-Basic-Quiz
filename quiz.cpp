#include<iostream.h>
void main()
{
// t is for the category and c is for the answer option.
// Correct options for level 1 are
/*CORRECT OPTION FOR LEVEL 1 CATEGORY 1 ARE : D B A A C B D B C A
  COREECT OPTION FOR CATEGORY 2 ARE : B D B B D C B C A A
  CORRECT OPTION FOR CATEGORY 3 ARE : A C D D B B B B A B
  CORRECT OPTION FOR LEVEL 2 CATEGORY 1 ARE : D C D A A D C C D C
  CORRECT OPTION FOR CATEGORY 2 ARE : B A C A D B A C A C
  CORRECT OPTION FOR CATEGORY 3 ARE : B C D A A A A C C D
  CORRECT OPTION FOR LEVEL 3 CATEGORY 1 ARE : C D D A C C A C D B
  CORRECT OPTION FOR CATEGORY 2 ARE : A C D A B A C C A A
  CORRECT OPTION FOR CATEGORY 3 ARE : C A A B A C C D A C*/

int t,x=0,y=0,z=0;
int a=0,b=0,d=0;
int q=0,r=0,s=0;
char ch,c;
cout<<"Designed by PAVLEEN KAUR";
cout<<"\nWELCOME TO QUIZO WORLD!!";
do
{
cout<<"\nThis is LEVEL 1";
cout<<"\nThe categories are:\n";
cout<<"\n1.General Knowledge";
cout<<"\n2.Entertainment";
cout<<"\n3.Sports";
cout<<"\nChoose your category\nEnter the Serial Number for the chosen category";
cin>>t;
switch (t)
{
case 1:cout<<"\nGeneral Knowledge\nEnter the alphabet of the chosen option. Without the full stop.\n";
cout<<"1.How many chambers does a human heart have?";
cout<<"\n a. 1\n b. 2\n c. 3\n d. 4";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
x++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n2.What is the full form of CMP?";
cout<<"\n a. Committee on Management Programme\n b. Common Minimum Programme\n c. Correct Measurement of Polio\n d. Communist (Marxist) Politbureau";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
x++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n3.Who is considered as the father of Geometry?";
cout<<"\n a. Euclid\n b. Leonardo Fibbonaci\n c. Charles Dodgons\n d. Pythagoras";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
x++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n4.The oldest parliamentary democracy in the world is?";
cout<<"\n a. Great Britain\n b. Iceland\n c. China\n d. Greece";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
x++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n5.Alexander the Great found which city in Egypt?";
cout<<"\n a. Thebes\n b. Cairo\n c. Alexandria\n d. Giza";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
x++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n6. Who killed Julius Caesar?";
cout<<"\n a. Metullus Cimber\n b. Brutus\n c. Antony\n d. Publius";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
x++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n7. During WWII, a German-Jewish girl was hiding in an attic in Amsterdam. She also wrote a diary which is very popular. What is her name?";
cout<<"\n a. Virginia Woolf\n b. Karl Dönitz\n c.  Karl Alman\n d. Anne Frank";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
x++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n8. A sonnet has how many lines?";
cout<<"\n a. 12\n b. 14\n c. 8\n d. 16";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
x++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n9. Which is the largest gulf in the world?";
cout<<"\n a. Gulf of Aden\n b. Persian Gulf\n c. Gulf of Mexico\n d. Gulf of Bothnia";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
x++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n10. Which famous freedom fighter wrote 'My Experiments with Truth'?";
cout<<"\n a. Mahatma Gandhi\n b. Bhagat Singh\n c. Chandrashekhar Azad\n d. Sarojini Naidu";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
x++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\nTotal number of correct answers out of 10 are: "<<x;
if ( x>=3)
{
cout<<"\n\aCONGRATULATIONS!!\nYou may proceed to the next level\nIf you wish to continue, press, enter, press and again enter y or Y. \nIf you to play again press, enter, press and again enter p or P.";
cin>>ch;
}
else
cout<<"\nYou cannot proceed to the next level\n A minimum of 4 correct answers are required.\n You wish to play again?\n Press, enter, press and again enter p or P.";
cin>>ch; break;



case 2:cout<<"\nEntertainment\nEnter the alphabet of the chosen option. Without the full stop.\n";
cout<<"1.Who was the director of the famous film 'Titanic'?";
cout<<"\n a. Keanu Reeves\n b. Steven Spielsberg\n c. Vanessa Redgrave\n d. Jesse Eisenberg";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
y++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n2.The movie '3 Idiots' has been inspired by a book written by whom?";
cout<<"\n a. Kiran Desai\n b. R.K.Narayan\n c. Salman Rushdie\n d. Chetan Bhagat";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
y++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n3.In 'Mission Impossible' the tape always ended with a self-destruct warning, \nhow long was it before the tape blew up?";
cout<<"\n a. 10 Seconds\n b. 5 seconds\n c. 1 minute\n d. 30 seconds";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
y++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n4.In 'The Simpsons' which villian is always trying to kill Bart?";
cout<<"\n a. Mr. Burns\n b. Sideshow Bob\n c. Crusty the clown\n d. Sideshow Mel";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
y++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n5.The musical 'Mamma Mia' is based on the music of which band?";
cout<<"\n a. The Beatles\n b. The Mamas and Papar\n c. The Jacksons\n d. ABBA";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
y++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n6.In Enid Blyton's Famous Five stories, how many of the five are boys and how many are girls";
cout<<"\n a. 3 girls and 2 boys\n b. 1 girl and 4 boys\n c. two of each\n d. 3 boys and 2 girls";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
y++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n7.Who found a house made of bread and cake with window panes of sugar in a forest, and began eating bits of it?";
cout<<"\n a. Harman and Grendal\n b. Hansel and Gratel\n c. Harriet and Gretchen\n d. Hansel and Greta";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
y++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n8.Where was Superman born?";
cout<<"\n a. Planet Mars\n b. Planet Venus\n c. Planet Kansas\n d. Planet Krypton";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
y++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n9.In the film 'Alice in Wonderland' Johnny Depp played which role?";
cout<<"\n a. Mad Hatter\n b. Jabberwock\n c. Cheshire Cat\n d. Dodo";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
y++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n10.The movie 'This is it' is based on whose lifestory?";
cout<<"\n a. Michael Jackson\n b. Elvis Presley\n c. Paul McCartney\n d. Bob Dylan";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
y++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\nTotal number of correct answers out of 10 are: "<<y;
if ( y>=3)
{
cout<<"\n\aCONGRATULATIONS!!\nYou may proceed to the next level\n If you wish to continue, press, enter, press and again enter y or Y. \nIf you wish to play again, press, enter, press and again enter p or P";
cin>>ch;
}
else
cout<<"\nYou cannot proceed to the next level\n A minimum of 4 correct answers are required.\nYou wish to play again? Press, enter, press and again enter p or P.";
cin>>ch; break;


case 3:cout<<"\nSports\nEnter the alphabet of the chosen option. Without the full stop.\n";
cout<<"1.Which sport is known as 'Softball'";
cout<<"\n a. Baseball\n b. Football\n c. Squash\n d. Cricket";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
z++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n2.Which of the following is not an extreme sport?";
cout<<"\n a. Dirt Biking\n b. Skateborading\n c. Gymnastics\n d. Rock Climbing";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
z++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n3.Which sport uses a net, a racket and a shuttlecock?";
cout<<"\n a. Cricket\n b. Volleyball\n c. Tennis\n d. badminton";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
z++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n4.Which of the following sports does not use a ball?";
cout<<"\n a. Tennis\n b. Polo\n c. Golf\n d. Ice Hockey";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
z++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n5.Which professional golfer was considered the best in the years 1999-2003?";
cout<<"\n a. Jack Nicklaus\n b. Tiger Woods\n c. Vijay Singh\n d. Arnold Palmer";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
z++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n6. What world-wide sporting competition is held every four years for athletes\n from all over the world?";
cout<<"\n a. Super Bowl\n b. The Olympics\n c. World Series\n d. Sports Champion";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
z++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n7.Which of these events is not considered a world championship?";
cout<<"\n a. Cricket World Cup\n b. Wimbledon\n c. FIFA World Cup\n d. F1 Driver's Championship";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
z++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n8.Which of these sports does not use a straight pole or stick?";
cout<<"\n a. Pole Vault\n b. Ice Hockey\n c. Javelin Throw\n d. Billiards";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
z++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n9.Who was John Heisman?";
cout<<"\n a. A famous American football coach with a trophy named in his honor\n b. Chairman of the International Olympic Committee\n c. The inventor of basketball\n d. The first man to climb to the top of Mount Everest";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
z++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n10.The baseball Little League World Series is held in what city?";
cout<<"\n a. Cooperstown, New York\n b. Williamsport, Pennsylvania\n c. New York, New York\n d. Omaha Nebraska";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
z++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\nTotal number of correct answers out of 10 are: "<<z;
if ( z>=3)
{
cout<<"\n\aCONGRATULATIONS!!\nYou may proceed to the next level\nIf you wish to continue, press, enter, press and again enter y or Y. \nIf you wish to play again press, enter, press and again enter p or P.";
cin>>ch;
}
else
cout<<"\nYou cannot proceed to the next level\nA minimum of 4 correct answers are required.\nYou wish to play again? Press, enter, press and again enter p or P.";
cin>>ch;
}
}
while((ch=='p')||(ch=='P') && ch<=3);


while ((ch=='y')||(ch=='Y'))
{
do
{
cout<<"\n\aCONGRATULATIONS!! You have reached LEVEL 2";
cout<<"\nChose Your Categories:\n";
cout<<"\n1.Science";
cout<<"\n2.Acronyms";
cout<<"\n3.Country Capitals";
cout<<"\nChoose your category";
cin>>t;
switch (t)
{
case 1:cout<<"\nScience\n";
cout<<"1.Name the plant hormone that exhibits the growth of plants";
cout<<"\n a. Auxin\n b. Geotropism\n c. Chemotropism\n d. Abscisic Acid";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
a++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n2.What is the unit of current?";
cout<<"\n a. Watt\n b. Volt\n c. Ampere\n d. ohm";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
a++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n3.Who discovered that planets move not in circles but in oval-shaped paths called ellipses?";
cout<<"\n a. Isaac Newton\n b. Tycho Brahe\n c. Albert Einstein\n d. Johannes Kepler";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
a++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n4.What is the lightest of all gases and elements?";
cout<<"\n a. Hydrogen\n b. Oxygen\n c. Helium\n d. CArbon Dioxide";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
a++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n5.Who discovered the nucleus of an Atom??";
cout<<"\n a. Ernst Rutherford\n b. E. Goldstein\n c. Neils Bohr\n d. J. Chadwick";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
a++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n6. Who gave the three Laws of Motion?";
cout<<"\n a. Galileo Galilei\n b. J. Chadwick\n c. Stephen Hawking\n d. Isaac Newton";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
a++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n7. The first law of motion also gives the definition of";
cout<<"\n a. Force\n b. Inertia\n c.  Mass\n d. Momentum";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
a++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n8. KWh is the unit of-";
cout<<"\n a. Electricity\n b. Kilo Watt Hour\n c. Power\n d. Energy";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
a++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n9. Who discovered Vaccination?";
cout<<"\n a. James Prescott\n b. Edward Jenner\n c. Taylor Shutzenfestenstien\n d. Kim Jong II";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
a++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n10. What is the audible range of hearing for an average human being?";
cout<<"\n a. 20Hz-20kHz\n b. 1Hz-100kHz\n c. 40-400kHz\n d. 2Hz-1200kHz";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
a++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\nTotal number of correct answers out of 10 are: "<<a;
if ( a>=4)
{
cout<<"\n\aCONGRATULATIONS!!\nYou may proceed to the next level\nIf you wish to continue, press, enter, press and again enter y or Y. If you wish to play again, press, enter, press and again enter p or P.";
cin>>ch;
}
else
cout<<"\nYou cannot proceed to the next level\nA minimum of 5 correct answers are required.\nIf you wish to play again, press, enter, press and again enter p or P.";
cin>>ch; break;


case 2:cout<<"\nAcronyms\n";
cout<<"1.O.T.R. stands for?";
cout<<"\n a. Otherwise\n b. Off the Records\n c. On the road\n d. open the roll";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
b++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n2.F.O.T.H stands for?";
cout<<"\n a. Fly off the handle\n b. For opening the house\n c. Full of tag hinges\n d. From out to hide";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
b++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n3.D.C. stands for?";
cout<<"\n a. Down cold\n b. 5 Delhi Calcutta\n c. Direct Current\n d. Drive carefully";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
b++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n4.A.C. stands for?";
cout<<"\n a. Ante Christum\n b. Air cooling\n c. All cease\n d. Anti Christ";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
b++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n5.B&E stands for?";
cout<<"\n a. Breakfast and Entree\n b. Ball and eradicate\n c. Blow and Exit\n d. Break and Entry";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
b++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n6.ENT stands for?";
cout<<"\n a. Earl Ned Thomson\n b. Ear Nose and Throat\n c. East North and Turn\n d. Easy Nada Tough";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
b++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n7.EOF stands for?";
cout<<"\n a. End of file\n b. End of film\n c. Exit open from\n d. Endl Output Fille";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
b++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n8.ISO";
cout<<"\n a. Indian Space Organisation\n b. International Science Organisation\n c. International Standard Organisation\n d. Integrated Service Organisation";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
b++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n9.RAW stands for?";
cout<<"\n a. Research and Analysis Wing\n b. Reserved access wing \n c. Random Associative Wing\n d. Red Achieve Wing";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
b++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n10.RPM stands for?";
cout<<"\n a. Research party member\n b. Regional Profit Market\n c. Revolution per minute\n d. Regional Permission Mark";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
b++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\nTotal number of correct answers out of 10 are: "<<b;
if ( b>=4)
{
cout<<"\n\aCONGRATULATIONS!!\nYou may proceed to the next level\nIf you wish to continue, press, enter, press and again enter y or Y. If you wish to play again, press, enter, press and again enter p or P.";
cin>>ch;
}
else
cout<<"\nYou cannot proceed to the next level\nA minimum of 5 correct answers are required.\nIf you wish to play again, press, enter, press and again enter p or P.";
cin>>ch; break;



case 3:cout<<"\nCountry Capitals\n";
cout<<"1.What is the capital of Australia?";
cout<<"\n a. Sydney\n b. Canberra\n c. Melbourne\n d. Darwin";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
d++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n2. What is the capital of Cameroon?";
cout<<"\n a. Calabi\n b. Barundi\n c. Yaounde\n d. Mawabe";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
d++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n3.What is the capital of Switzerland?";
cout<<"\n a. Paris\n b. Zurich\n c. Interlaken\n d. Bern";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
d++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n4.What is the capital of Denmark?";
cout<<"\n a. Copenhagen\n b. Roskilde\n c. Aalborg\n d. Odense";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
d++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n5.What is the capital of Ethiopia?";
cout<<"\n a. Addis Ababa\n b. Adwe\n c. Dire Dawa\n d. Domo";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
d++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n6. What is the capital of Finland?";
cout<<"\n a. Helsinki\n b. Imatra\n c. Mikkeli\n d. Porvoo";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
d++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n7.What is the capital of Ghana";
cout<<"\n a. Accra\n b. Kumasi\n c. Tamale\n d. Bolgatanga";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
d++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n8.What is the capital of Iceland?";
cout<<"\n a. Dalvik\n b. Hveragerdi\n c. Reykjavik\n d. Randburg";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
d++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n9.What is the capital of Jamaica?";
cout<<"\n a. Ocho Rios\n b. Montego Bay\n c. Kingston\n d. Port Antonio";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
d++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n10.What is the capital of Romania?";
cout<<"\n a.  Budapest\n b. Brasov\n c. Transylvania\n d. Bucharest";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
d++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\nTotal number of correct answers out of 10 are: "<<d;
if ( d>=4)
{
cout<<"\n\aCONGRATULATION!!\nYou may proceed to the next level\nIf you wish to continue, press, enter, press and again enter y or Y. \nIf you wish to play again, press, enter, press and again enter p or P.";
cin>>ch;
}
else
cout<<"\nYou cannot proceed to the next level\nA minimum of 5 correct answers are required.\nIf you to play again, press, enter, press and again enter p or P.";
cin>>ch;
}
}
while ((ch=='p')||(ch=='P')&& ch<=3);



while ((ch=='y')||(ch=='Y'))
{
do
{
cout<<"\n\aCONGRATULATIONS!!You have reached LEVEL 3\nThis is going to be tough.\nGOOD LUCK!!!";
cout<<"\nThe categories are:\n";
cout<<"\n1.Animals";
cout<<"\n2.Music";
cout<<"\n3.Computers";
cout<<"\nChoose your category";
cin>>t;
switch (t)
{
case 1:cout<<"\nAnimals\n";
cout<<"1.How do cats check to see if they can fit into a tight space?";
cout<<"\n a. by using their ears\n b. by using their paws\n c. by using their whiskers\n d. by using their tails";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
q++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n2.Which pair of animals sleeps in a standing position?";
cout<<"\n a. horses and sheep\n b. sheep and cows\n c. bears and horses\n d. horses and cows";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
q++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n3.Which animal makes the loudest noise?";
cout<<"\n a. tigers\n b. blue whale\n c. howler monkeys\n d. lions";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
q++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n4. Which fish does not have a bony skeleton?";
cout<<"\n a. shark\n b. goldfish\n c. whale\n d. barracuda";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
q++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n5.A rhinoceros has a horn that is made from?";
cout<<"\n a. bone\n b. skin\n c. hair\n d. cartilage";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
q++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n6. Which animal holds the record for laying the largest egg?";
cout<<"\n a. ostrich\n b. elephant\n c. shark\n d. snake";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
q++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n7. How many stomachs do sheep have?";
cout<<"\n a. 4\n b. 3\n c. 1\n d. 6";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
q++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n8. What is the correct name for baby sharks?";
cout<<"\n a. tiny sharks\n b. midgets\n c. pups\n d. pugs";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
q++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n9. Which animals cannot walk backwards?";
cout<<"\n a. turtles and penguins\n b. birds and sheep\n c. cats and lizards\n d. kangaroos and emus";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
q++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n10. A hippopotamus can run faster than which of these animals?";
cout<<"\n a. cheetah\n b. man\n c. antelope\n d. tiger";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
q++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\nTotal number of correct answers out of 10 are: "<<q;
cout<<"\nYou want to play the same level again?\n Press, enter, press and again enter p or P.";
cin>>ch; break;


case 2:cout<<"\nMusic\n";
cout<<"1.Who had a hit with Firework?";
cout<<"\n a. Katy Perry\n b. Pink Floyd\n c. Billie Joe Armstrong\n d. Demi Moore";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
r++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n2.Which female singer had a hit with Only Girl (In The World)?";
cout<<"\n a. Florence\n b. V.V.Brown\n c. Rihanna\n d. Demi Lovato";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
r++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n3. Who had a hit with Dynamite?";
cout<<"\n a. Mike Grant\n b. Chris Brown\n c. Jay Sean\n d. Taio Cruz";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
r++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n4.Who had a hit with On The Floor?";
cout<<"\n a. Jennifer Lopez\n b. Avril Lavigne\n c. Katherine Heigls\n d. Kelly Clarkson";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
r++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n5.Who made a hit with Love the way you lie?";
cout<<"\n a. Lil C\n b. Eminem\n c. Snoop Dogg\n d. U2";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
r++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n6. The lyrics of Kabhi Kabhie were written by?";
cout<<"\n a. Sahir Ludhianvi\n b. Anu Malik\n c. Anand Bakshi\n d. Gulzar";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
r++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n7.The song 'Aye mere pyaare watan' is from the film?";
cout<<"\n a. Upkaar\n b. Sarfarosh\n c. Kabuliwala\n d. Sikandar-E-Azam";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
r++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n8.Which playback singer has been awarded the Bharat Ratna, the nation's highest civilian honour?";
cout<<"\n a. Asha Bhosale\n b. Kishore Kumar\n c. Lata Mangeshkar\n d. Mohd. Rafi";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
r++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n9.Which of the following musical instruments is of Indian origin?";
cout<<"\n a. Flute\n b. Sitar\n c. Violin\n d. Table";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
r++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n10.Raga 'Lajwanti' was composed by?";
cout<<"\n a. Ustad Ali Akbar Khan\n b. Pandit Ravi Shankar\n c. Kumar Gandharva\n d. Amir Khusrao";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
r++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\nTotal number of correct answers out of 10 are: "<<r;
cout<<"\nYou want to play the same level again? \nPress, enter, press and again enter p or P.";
cin>>ch;  break;



case 3:cout<<"\nComputers\n";
cout<<"1.The sampling rate, (how many samples per second are stored) for a CD is?";
cout<<"\n a. 48.4 khz\n b. 22,050 Hz\n c. 44.1 khz\n d. 48 khz";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
s++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n2. Compact discs, (according to the original CD specifications) hold how many minutes of music?";
cout<<"\n a. 74 mins\n b. 56 mins\n c. 60 mins\n d. 90 mins";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
s++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n3. Where is the headquarters of Microsoft located?";
cout<<"\n a. Santa Clara, California\n b. Tucson, Arizona\n c. Richmond, Virginia\n d. Redmond, Washington";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
s++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n4.In what year was the @ chosen for its use in e-mail addresses?";
cout<<"\n a. 1976\n b. 1972\n c. 1980\n d. 1984";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='b')||(c=='B'))
{
s++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n5.What was the first ARPANET message?";
cout<<"\n a. ''lo''\n b. ''hello world''\n c. ''mary had a little lamb''\n d. ''cyberspace, the final frontier''";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
s++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n6.Where is the headquarters of Intel located?";
cout<<"\n a. Redmond, Washington\n b. Tucson, Arizona\n c. Santa Clara, California\n d. Richmond, Virginia";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
s++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n7.'.MPG' extension refers usually to what kind of file?";
cout<<"\n a. WordPerfect Document File\n b. MS Office Document\n c. Animation/Movie File\n d. Image File";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
s++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n8.'JPG' extension refers usually to what kind of file?";
cout<<"\n a. System File\n b. Animation/Movie File\n c. MS Encarta Document\n d. Image File";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='d')||(c=='D'))
{
s++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n9.'.TXT' extension refers usually to what kind of file?";
cout<<"\n a. Text File\n b. Image File\n c. Audio File\n d. Adobe Acrobat File";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='a')||(c=='A'))
{
s++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\n\n10.Who co-founded Hotmail in 1996 and then sold the company to Microsoft?";
cout<<"\n a. Shawn Fanning\n b. Ada Byron Lovelace\n c. Sabeer Bhatia\n d. Ray Tomlinson";
cout<<"\nEnter the correct option\n";
cin>>c;
if ((c=='c')||(c=='C'))
{
s++;
cout<<"Your answer is correct";
}
else
cout<<"Your answer is wrong";
cout<<"\nTotal number of correct answers out of 10 are: "<<s;
cout<<"\nYou want to play the same level again? \nPress, enter, press and again enter p or P.";
cin>>ch; break;
default:cout<<"Wrong Entry";
}
}
while ((ch=='p')||(ch=='P')&& ch<=3);
}
}
}
