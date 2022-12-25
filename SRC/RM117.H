[ POLICE QUEST
[ rm117.h
[ By:  Greg Rowland and Jim Walls
[ For: Sierra On-Line Inc. 12/3/86
[ Last Update October 15, 1987GR

[ Street Map defines -- used in rooms 95, 96, 119.


[%define	dontStop		10	[ none valid dir

%define	stopCarRadius	8
%define	dangerZone	6

[crashing

%define	ranLight			10
%define	curbCrash			50
%define	droveOffOverPass	100
%define	collision			150
%define	crash			255

%define	xResult		range.high		[ used only in gun logics
%define	yResult		range.low



%define	radioWaitShort		3
%define	radioWaitLong		6

%define	reCallShort		2
%define	reCallLong		4


%object	a.car1				1
%object	a.car2				2
%object	a.car3				3
%object	a.car4				4
%object	a.car5				5
%object	a.car6				6
%object	a.dummy1				7
%object	a.dummy2				8
%object	a.dummy3				10
%object	a.dummy4				11
%object	a.intersection			12
%object	a.crash				13


[%var		rmsFirstRadioCall			136
[%var		rmsNextRadioCall			137
[%var		PreventBackAndForth			138

[	%define	blue.car			0
[	%define	cyan.car			1
[	%define	violet.car		2
[	%define	brown.car			3
[	%define	gray.car			4
[	%define	lblue.car			5
[	%define	lgreen.car		6
[	%define	lviolet.car		7
[	%define	yellow.car		8
[	%define	white.car			9


%define	moving0			lcl0
%define	moving1			lcl1
%define	moving2			lcl2
%define	moving3			lcl3
%define	moving4			lcl4
%define	moving5			lcl5
%define	moving6			lcl6
%define	crashing			lcl7
%define	impact			lcl8
%define	persuit			lcl9
%define	victimDir			lcl10
%define	victim.priority	lcl11
%define	traffic.timer		lcl12
%define	stop.suspect		lcl13
%define	intersection		lcl14
%define	last.suspect.dir	lcl15
%define	backup.x			lcl16
%define	backup.y			lcl17
%define	egoLastDir		lcl18
%define	carHit			lcl19


[stop.light states
%define	all.stop1		0
%define	east.stop		1
%define	north.yellow	2
%define	all.stop2		3
%define	north.stop	4
%define	east.yellow	5


%define	moved0			lf0
%define	moved1			lf1
%define	moved2			lf2
%define	moved3			lf3
%define	moved4			lf4
%define	moved5			lf5
%define	moved6			lf6
%define	crashed			lf7
%define	evasive.move		lf8
%define	intersection.clear	lf9
%define	light.ok			lf10
%define	redLight			lf11
%define	weaving			lf12
%define	suspect.mess		lf13
%define	backup.mess		lf14
%define	crashDone			lf15
%define	bumpCurb			lf16


%define	stopCar1			tf1
%define	stopCar2			tf2
%define	stopCar3			tf3
%define	stopCar4			tf4
%define	stopCar5			tf5
%define	stopCar6			tf6

%define	car1.clear		tf7
%define	car4.clear		tf8
%define	stopBackUp		tf9


%define	suspect			tmp0
%define	carDist			tmp1
%define	carStopped		tmp2

%define	Res0				tmp3
%define	Res1				tmp4
%define	Res2				tmp5
%define	Res3				tmp6

%define	car1.dir			tmp7
%define	car2.dir			tmp8
%define	car3.dir			tmp9
%define	car4.dir			tmp10
%define	car5.dir			tmp11
%define	car6.dir			tmp12
%define	Xstreet			tmp13
%define	Ystreet			tmp14
%define	responce			tmp15

[suspect lanes and control
[use gamedefs code var defines for step size cruising, lights, lights.siren
[use sysdefs top.edge, bottom.edge ect...



[ "SUSPECT" TRACKS
%define	s1x		20
%define	s2x		24
%define	s3x		78
%define	s4x		82
%define	s5x		136
%define	s6x		140
%define	s7y		31
%define	s8y		34
%define	s9y		123
%define	s10y		126

[ "TRAFFIC" TRACKS
%define	t1x		19
%define	t2x		25
%define	t3x		77
%define	t4x		83
%define	t5x		135
%define	t6x		141
%define	t7y		29
%define	t8y		36
%define	t9y		121
%define	t10y		128

[ "CLEAR" INTERSECTION position check x,y's
%define	c1x		14
%define	c2x		28
%define	c3x		74
%define	c4x		86
%define	c5x		130
%define	c6x		144

%define	c7y		24
%define	c8y		44
%define	c9y		116
%define	c10y		136


[ "EVASIVE" ACTION position check x,y's

%define	e1x		17
%define	e2x		27
%define	e3x		75
%define	e4x		85
%define	e5x		133
%define	e6x		143

%define	e7y		25
%define	e8y		39
%define	e9y		117
%define	e10y		131


[suspect states moving0
[%define		not.drawn			0
[%define		traveling			1
[%define		off.screen		2
[%define		counting.next room	3
[%define		counting.last.room	4
[%define		test.reapper.xy	5
[%define		draw from last room	6



