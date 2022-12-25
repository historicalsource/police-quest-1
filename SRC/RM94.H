[ POLICE QUEST 
[ rm94.h
[ By:  Greg Rowland, Jim Walls and Al Lowe
[ For: Sierra On-Line Inc. 12/16/86
[ Last Update October 6, 1987GR

[ header file for all rooms that call
[ rm94 -- lgc.stopped.cars and Sonny's current car 



%define	rm94Moved0		tf0
%define	rm94ScriptDone		tf1		

%define	private			tf4
%define	nearScar			tf5
%define	nearSdoor			tf6
%define	nearFdoor			tf7
%define	nearBdoor			tf8
%define	nearPassDoor		tf9
%define	hasRightKeys		tf10

%define	rm94Moving0		tmp0
%define	rm94ScriptTimer	tmp1
%define	rm94ScriptCycles	tmp2

%define	suspectX			tmp6
%define	suspectY			tmp7

%define	getting.out		tmp10
%define	getting.in		tmp11
%define	x.suspect			tmp13
%define	y.suspect			tmp14
%define	suspect.cuffed		tmp15
	%define	not.cuffed	0
	%define	in.front		1
	%define	in.back		2

