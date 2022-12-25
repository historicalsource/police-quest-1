[ POKER QUEST 
[ rm75.h
[ By:  Ken Williams, Greg Rowland, and Al Lowe
[ For: Sierra On-Line Inc. 11/17/86
[ Last Update September 24, 1987al

[ every define Ken Williams could think of.  Formerly known as "pokrdefs".

%include	"gamedefs"


											
[%var	pokerGameStatus			113
[		%define	startedFirstGame	1
[		%define	lostFirstGame		2
[		%define	wonFirstGame		3
[		%define	startedBigGame		4
[		%define	lostBigGame		5
[		%define	wonBigGame		6



%flag	already.dealt				240
%flag	same.suit					241
%flag	is.straight				242
%flag	f.2pair					243
%flag	hide.computer.cards			244
%flag	first.round				245
%flag	second.round				246
%flag	cards.drawn				247
%flag	all.bets.in				248
%flag	dont.show.hands			249



[%var		marked.cash			170	[	Defined in gamedefs
[%var		Mdollar				171	[	   "    "     "
[%var		handsPlayed			172



%var		count					176
%var		count2					177
%var		his.hand					178
	%define	h.garbage			0
	%define	h.2kind			1
	%define	h.2pair			2
	%define	h.3kind			3
	%define	h.straight		4
	%define	h.flush			5
	%define	h.fullh			6
	%define	h.4kind			7
	%define	h.sflush			8
	%define	h.rflush			9
	%define	h.winner			10
	%define	h.deck			81

%var		card1					179
%var		card2					180
%var		card3					181
%var		card4					182
%var		card5					183
	%define	card1.var.number	179
	%define	card4.var.number	182
	%define	card5.var.number	183

%var		suit1					184
%var		suit2					185
%var		suit3					186
%var		suit4					187
%var		suit5					188
	%define	suit1.var.number	184
	%define	suit5.var.number	188
								
%var		current.suit				189
	%define	hearts			14
	%define	diamonds			15
	%define	spades			16
	%define	clubs			17

%var		rm81.work					190
%var		card.to.deal				191
%var		p1.hand					192
%var		p2.hand					193
%var		p3.hand					194
%var		p4.hand					195
	%define	first.hand.var.number 192
	%define	last.hand.var.number  195

%var		p1.kicker					196
%var		p2.kicker					197
%var		p3.kicker					198
%var		p4.kicker					199
%var		current.hand				200
%var		current.kicker				201
%var		bet.status				202
	%define	no.bet			0
	%define	normal.bet		1
	%define	someone.raised		2

%var		last.dealer				203	[    pROTECTED VAR *** 9-24
%var		card						204
	%define	ace				13
%var		current.card				205
%var		raise.amount				206	[	PROTECTED VAR!! Used in %v##
%var		amount.to.call				207	[	PROTECTED VAR!! Used in %v##
								
[equates for card vars:
%var		p1.card1					208	[	player 1
%var		p1.card2					209
%var		p1.card3					210
%var		p1.card4					211
%var		p1.card5					212
%var		p2.card1					213	[	player 2
%var		p2.card2					214
%var		p2.card3					215
%var		p2.card4					216
%var		p2.card5					217
%var		p3.card1					218	[	player 3
%var		p3.card2					219
%var		p3.card3					220
%var		p3.card4					221
%var		p3.card5					222
%var		p4.card1					223	[	player 4
%var		p4.card2					224
%var		p4.card3					225
%var		p4.card4					226
%var		p4.card5					227
	%define	first.card		208
	%define	last.card			227

%var		p1.bet					228
%var		p2.bet					229
%var		p3.bet					230
%var		p4.bet					231
	%define	bet.first.var.number 228
	%define	bet.last.var.number	 231
								  
%var		bet.so.far				232
%var		three.folded				233
%var		pot						234	[	PROTECTED VAR!! Used in %v##
%var		active.player				235
	%define	fred			0
	%define	bill			1
	%define	tom			2
	%define	sonny		3
	%define	whitey		3			[	Sure, we KNOW he's Sonny!

%var		current.bet				236
%var		number.of.cards			237
%var		card.value				238	[	deuce = 1; ace = 13
%var		return.point				239

%var		discard.1					240
%var		discard.2					241
%var		discard.3					242
%var		discard.4					243
%var		discard.5					244
%var		discard.6					245
%var		discard.7					246
%var		discard.8					247
%var		discard.9					248
%var		discard.10				249
%var		discard.11				250
%var		discard.12				251
	%define	discard.first.var.number	240
	%define	discard.last.var.number	251

%var		number.discarded.cards		252
%var		throwaway.1				253
%var		throwaway.2				254
%var		throwaway.3				255



[	These are separate logic numbers:
%define	rm.poker.game				75
%define	poker.subs				81
%define	find.not.kicker			82
%define	display.cards				83
%define	handle.player				84
%define	score.hand				85
%define	evaluate.cards				86
%define	redeal					87
%define	betting.round				88
%define	draw.cards				89
%define	computer.bet				90
%define	computer.draw				91


[	These are subroutines in room 81:
%define	test.already.dealt			161
%define	display.a.card				164
%define	test.same.suit				166
%define	test.straight				167
%define	count.most.of.one.type		168
%define	how.many.of.card			169
%define	sort.cards				170
%define	split.card				172
%define	declare.winner				173
%define	delay.loop				176
%define	throw.away				180		

