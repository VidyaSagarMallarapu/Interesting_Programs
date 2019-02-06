import random
l=['a','b','c','d','e','f']
p=[0,2,4,5,7,9]
k=[]
#list to the classes
print("\documentclass[]{beamer}\n\usetheme{Warsaw}\n\\usecolortheme{albatross}\n\\begin{document}\n\\begin{frame}\n\\begin{tabular}{|  c   |    c   |    c   |   c   |}")
ii=[];print "\hline\n\multicolumn{4}{|c|}{\color{blue}\\textit {p-2 all classes jumbling list}}\\\\\n\\hline\n\\hline\n"
for hhhhh in range(1,21,1):
	ii.append("$A_{"+str(hhhhh)+"}$")
for hhhhh in range(1,15,1):
	ii.append("$B_{"+str(hhhhh)+"}$")
#list for to get a0,a2,b0,b2,b4 like that
for i in range(1,7,1):
	j=0
	while(j<6):
		pp=p[j]
		k.append("$"+l[i-1]+"_{"+str(pp)+"}$")
		j=j+1
	i=i+1
#to get id numbers jumbling.. 
j=[]
j=[];je=[]
for i in range(141001,142001,1):
	e=random.randint(141001,142000)
	while e  in  j :
		e=random.randint(141001,142000);
	j.append(e);
	count=0;
	for ctt in range(141000,142001,50):
	    count=count+1;
	    if(e-ctt<=50):
	        break;
        je.append(count);
hhh=0
zz=0
mm=30
aa=0;
#to assign ceatings to id numbers
for hh in range (0,34,1):
	hhh=hhh+1
	if hhh>1:zz=mm;mm=mm+30
	oo=0;
	if aa==0:print ("\multicolumn{4}{|c|}{\\textit{\color{yellow}$A_1$ class}}\\\\\n\\hline")
	print"\hline";
	xy=1;
	for i in range (zz,mm,1):
    
		print " \color{orange}$  "+str(xy)+" \hspace{.6 cm}$ & $\hspace{1cm}$\color{yellow}$$R"+str(j[i-1])+"$\hspace{1.2cm}$ & $\hspace{1.3cm}$" +"$$\color{black}"+k[oo] +" $\hspace{0.5cm}$& $\hspace{0.5cm}$$\color{green}A_{" +str(je[i-1])+ "}$$\hspace{0.5cm}$\\\\"
		print "\hline"
		oo=oo+1;xy=xy+1;
		if (i==mm-16):print ("\end{tabular}\n\end{frame}\n\\begin{frame}\n\\begin{tabular}{|  r  |  c   |    r   |   l   |}\n\hline\n\\multicolumn{4}{|c|}{\color{white}"+ii[aa]+" class}\\\\\n\hline")
		if len(j) == i :print "\end{tabular}\n\end{frame}\n\\end{document}";exit()
	print ("\end{tabular}\n\end{frame}\n\\begin{frame}\n\\begin{tabular}{|  r  |  c   |    r   |   l   |}\n\hline\n\\multicolumn{4}{|c|}{\color{pink}"+ii[aa+1]+" class}\\\\\n\hline")
	aa+=1;
