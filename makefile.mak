repC=BasaeRobot/
repE=Etat/

ALL : Plot.o Objet.o Position.o Robot.o Etat.o EnRoute.o Fige.o AVide.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o test

test : clear main.cpp Plot.o Objet.o Position.o Robot.o Etat.o EnRoute.o Fige.o AVide.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o
	g++ *.o main.cpp -o test

Plot.o : $(repC)Plot.hpp $(repC)Plot.cpp
	g++ $(repC)Plot.cpp -c -o Plot.o
Objet.o : $(repC)Objet.hpp $(repC)Objet.cpp
	g++ $(repC)Objet.cpp -c -o Objet.o
Position.o : $(repC)Position.hpp $(repC)Position.cpp
	g++ $(repC)Position.cpp -c -o Position.o
	
Robot.o : $(repC)Robot.hpp $(repC)Robot.cpp $(repC)Plot.hpp $(repC)Objet.hpp $(repC)Position.hpp $(repE)EtatRobot.hpp
	g++ $(repC)Robot.cpp -c -o Robot.o


Etat.o : $(repE)EtatRobot.hpp $(repE)EtatRobot.cpp $(repC)Robot.hpp $(repC)Plot.hpp $(repC)Objet.hpp
	g++ $(repE)EtatRobot.cpp -c -o Etat.o
EnRoute.o : $(repE)EnRoute.hpp $(repE)EnRoute.cpp $(repE)EtatRobot.hpp $(repE)Fige.hpp $(repC)Robot.hpp Robot.o
	g++ $(repE)EnRoute.cpp -c -o EnRoute.o
Fige.o : $(repE)Fige.hpp $(repE)Fige.cpp $(repE)EtatRobot.hpp
	g++ $(repE)Fige.cpp -c -o Fige.o

AVide.o : $(repE)AVide.hpp $(repE)AVide.cpp $(repE)EtatRobot.hpp
	g++ $(repE)AVide.cpp -c -o AVide.o
AVideFacePlot.o : $(repE)AVideFacePlot.hpp $(repE)AVideFacePlot.cpp $(repE)EtatRobot.hpp
	g++ $(repE)AVideFacePlot.cpp -c -o AVideFacePlot.o
EnCharge.o : $(repE)EnCharge.hpp $(repE)EnCharge.cpp $(repE)EtatRobot.hpp
	g++ $(repE)EnCharge.cpp -c -o EnCharge.o
EnChargeFacePlot.o : $(repE)EnChargeFacePlot.hpp $(repE)EnChargeFacePlot.cpp $(repE)EtatRobot.hpp
	g++ $(repE)EnChargeFacePlot.cpp -c -o EnChargeFacePlot.o

clean :
	rm *.o
	
clear :
	clear

mrproper :
	rm test
	rm *.o
