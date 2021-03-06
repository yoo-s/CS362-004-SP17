CFLAGS = -Wall -fpic -coverage -lm

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)

testDrawCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)

runtests: testDrawCard 
	./testDrawCard &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out

unittestresults.out: unittest1.c unittest2.c unittest3.c unittest4.c cardtest1.c cardtest2.c cardtest3.c cardtest4.c randomtestadventurer.c randomtestcard1.c randomtestcard2.c dominion.c rngs.c
	echo "Result for running random tests:\n" >  unittestresults.out

	echo "randomtestadventurer.c:" >>  unittestresults.out
	gcc -o randomtestadventurer -g randomtestadventurer.c dominion.c rngs.c $(CFLAGS)
	randomtestadventurer >>  unittestresults.out
	gcov -b -f dominion.c >>  unittestresults.out

	echo "randomtestcard1.c:" >>  unittestresults.out
	gcc -o randomtestcard1 -g randomtestcard1.c dominion.c rngs.c $(CFLAGS)
	randomtestcard1 >>  unittestresults.out
	gcov -b -f dominion.c >>  unittestresults.out

	echo "randomtestcard2.c:" >>  unittestresults.out
	gcc -o randomtestcard2 -g randomtestcard2.c dominion.c rngs.c $(CFLAGS)
	randomtestcard2 >>  unittestresults.out
	gcov -b -f dominion.c >>  unittestresults.out

	#echo "Result for running unit tests:\n" >  unittestresults.out

	echo "unittest1.c:" >>  unittestresults.out
	gcc -o unittest1 -g unittest1.c dominion.c rngs.c $(CFLAGS)
	unittest1 >>  unittestresults.out
	gcov -b -f dominion.c >>  unittestresults.out

	echo "unittest2.c:" >>  unittestresults.out
	gcc -o unittest2 -g unittest2.c dominion.c rngs.c $(CFLAGS)
	unittest2 >>  unittestresults.out
	gcov -b -f dominion.c >>  unittestresults.out

	echo "unittest3.c:" >>  unittestresults.out
	gcc -o unittest3 -g unittest3.c dominion.c rngs.c $(CFLAGS)
	unittest3 >>  unittestresults.out
	gcov -b -f dominion.c >>  unittestresults.out

	echo "unittest4.c:" >>  unittestresults.out
	gcc -o unittest4 -g unittest4.c dominion.c rngs.c $(CFLAGS)
	unittest4 >>  unittestresults.out
	gcov -b -f dominion.c >>  unittestresults.out

	echo "cardtest1.c:" >>  unittestresults.out
	gcc -o cardtest1 -g cardtest1.c dominion.c rngs.c $(CFLAGS)
	cardtest1 >>  unittestresults.out
	gcov -b -f dominion.c >>  unittestresults.out

	echo "cardtest2.c:" >>  unittestresults.out
	gcc -o cardtest2 -g cardtest2.c dominion.c rngs.c $(CFLAGS)
	cardtest2 >>  unittestresults.out
	gcov -b -f dominion.c >>  unittestresults.out

	echo "cardtest3.c:" >>  unittestresults.out
	gcc -o cardtest3 -g cardtest3.c dominion.c rngs.c $(CFLAGS)
	cardtest3 >>  unittestresults.out
	gcov -b -f dominion.c >>  unittestresults.out

	echo "cardtest4.c:" >>  unittestresults.out
	gcc -o cardtest4 -g cardtest4.c dominion.c rngs.c $(CFLAGS)
	cardtest4 >>  unittestresults.out
	gcov -b -f dominion.c >>  unittestresults.out

randomtestadventurer: randomtestadventurer.c dominion.o rngs.o
	gcc -o randomtestadventurer -g  randomtestadventurer.c dominion.o rngs.o $(CFLAGS)

randomtestcard1: randomtestcard1.c dominion.o rngs.o
	gcc -o randomtestcard1 -g  randomtestcard1.c dominion.o rngs.o $(CFLAGS)

randomtestcard2: randomtestcard2.c dominion.o rngs.o
	gcc -o randomtestcard2 -g  randomtestcard2.c dominion.o rngs.o $(CFLAGS)

player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)

all: playdom player testDrawCard testBuyCard badTestDrawCard

clean:
	rm -f *.o playdom.exe playdom test.exe test randomtestadventurer randomtestcard1 randomtestcard2 player player.exe testInit testInit.exe unittest1 unittest1.exe unittest2 unittest2.exe unittest3 unittest3.exe unittest4 unittest4.exe cardtest1 cardtest1.exe cardtest2 cardtest2.exe cardtest3 cardtest3.exe cardtest4 cardtest4.exe unittestresults.out *.gcov *.gcda *.gcno *.so
