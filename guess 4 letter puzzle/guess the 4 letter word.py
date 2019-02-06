print "\n hai welcome to the sagar\'s world ! \n\n\t you are entering to the game of \'roccers\'  play it careful \n"
e=raw_input("  enter your sweet name sir !:  ")
print 
r=raw_input(" By guessing enter four letter word without repeating letter : ")
import random
LAN=("king","nail","lake","sail","tend","pour","fade","calm","vary","fend","mend","talk","milk","mail","beat","kite","fate","male","face","bail","care","earn","cold","wild","long","tour","rote","dear","fake","made","date","road","main","yark","boar","tear","fare","feal","gone","went")
v=0;y=3
k=random.choice(LAN)
if(len(r)<4 or len(r)>4) :
	print "enter four lettter word ",e,"garu"
	exit()
i=0;j=0;c=0;q=0
while(r!=k)and(q<7)and(len(r)==4):
	z=3;d=0
	while(z>=0):
		while(d<=3):
			if(r[z]==r[d])and(z!=d):
				print "\n You entered Repeated letter",e,"garu \n"
				exit()
			d=d+1
		z=z-1;d=0
	while(i<=3):
		j=0
		while(j<=3):	
			if r[i]==k[j]:c=c+1
			j=j+1
		i=i+1
	if(q==6):
		print 
		print k,"is the word that you missed it to guess in ",q," chances "
		break
	print 
	if c==0 :w= "zero"
	if c==1 :w='one'
	if c==2 :w='two'
	if c==3 :w='three'
	if c==4 :w='four'
	print w,"letters are common",e," garu try to solve in small time dude...."
	print 
	r=raw_input("Re enter four letter word without repeating letter:")
	c=0;q=q+1;i=0;j=0
if r == k :print "\n awesome",e,"garu the word is",k,"you guessed it in",q,"times attempt only dude !..."
print 
if(len(r)<4 or len(r)>4) :print " \n enter four lettter word ",e,"garu \n"