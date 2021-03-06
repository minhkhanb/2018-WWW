#if defined(_WINDOWS)
#define _ResourceFileNameLength		13
char* _ResourceFileName[] = {
"bg",
"character",
"enemy",
"obstacle",
"effect",
"hud",
"font",
"advert",
"sfx",
"bgm_ingame",
"bgm_main_menu",
"bgm_result_screen_with_new_highscore",
"bgm_boss_fight",
};
#define _IDtoFileNameLength		96
int _IDtoFileName[] = {
0,
0,
0,
1,
2,
2,
2,
2,
2,
3,
4,
5,
6,
5,
5,
6,
4,
3,
3,
5,
3,
4,
0,
5,
6,
0,
5,
2,
5,
5,
1,
4,
4,
3,
5,
3,
5,
6,
5,
0,
0,
0,
0,
0,
0,
0,
2,
2,
2,
4,
4,
4,
0,
5,
2,
5,
1,
1,
1,
7,
7,
5,
5,
5,
9,
10,
11,
12,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
};
#define _ResourceInfoLength		192
int _ResourceInfo[] = {
36,21148,
21184,240995,
262179,32952,
36,118664,
36,137456,
137492,148424,
285916,150260,
436176,72952,
509128,78400,
36,35344,
36,4674,
36,36754,
36,48306,
36790,5388,
42178,45890,
48342,74258,
4710,322,
35380,2146,
37526,17030,
88068,7795,
54556,12572,
5032,80756,
295131,17518,
95863,13260,
122600,6660,
312649,194461,
109123,362503,
587528,134464,
471626,40564,
512190,32414,
118700,123692,
85788,448,
86236,1142,
67128,20158,
544604,25992,
87286,2670,
570596,33744,
129260,22990,
604340,22528,
507110,99357,
606467,23286,
629753,20228,
649981,62744,
712725,83763,
796488,48632,
845120,69118,
721992,129416,
851408,82952,
934360,131064,
87378,18534,
105912,570,
106482,970,
914238,41173,
626868,126523,
1065424,83256,
753391,3828,
242392,121024,
363416,122924,
486340,136252,
36,127992,
128028,89768,
757219,35424,
792643,50978,
843621,1782,
36,947412,
36,3552739,
36,488164,
36,290746,
36,177470,
177506,539222,
716728,28570,
745298,67564,
812862,213032,
1025894,1862982,
2888876,2783480,
5672356,476460,
6148816,222896,
6371712,149452,
6521164,16398,
6537562,400982,
6938544,65098,
7003642,931044,
7934686,917092,
8851778,40818,
8892596,1138248,
10030844,238564,
10269408,235290,
10504698,85596,
10590294,32926,
10623220,161352,
10784572,66682,
10851254,15012,
10866266,28588,
10894854,36822,
10931676,57092,
10988768,260620,
};
const int CGame::_syn_sprite_index[VERSION_NUMS*TOTAL_SPRITEID]=
{
/*SPRITEID_BG_01_PALYER_1*/				SPRITEID_BG_01_PALYER_1_640x1136,
/*SPRITEID_BG_01_PALYER_2*/				SPRITEID_BG_01_PALYER_2_640x1136,
/*SPRITEID_BG_01_PALYER_4*/				SPRITEID_BG_01_PALYER_4_640x1136,
/*SPRITEID_CHARATER_01*/				SPRITEID_CHARATER_01_640x1136,
/*SPRITEID_ENEMY_01*/				SPRITEID_ENEMY_01_640x1136,
/*SPRITEID_ENEMY_02*/				SPRITEID_ENEMY_02_640x1136,
/*SPRITEID_ENEMY_03*/				SPRITEID_ENEMY_03_640x1136,
/*SPRITEID_ENEMY_04*/				SPRITEID_ENEMY_04_640x1136,
/*SPRITEID_ENEMY_05*/				SPRITEID_ENEMY_05_640x1136,
/*SPRITEID_OBSTACLE*/				SPRITEID_OBSTACLE_640x1136,
/*SPRITEID_EFFECT_BULLET*/				SPRITEID_EFFECT_BULLET_640x1136,
/*SPRITEID_HUD_GAME_OVER*/				SPRITEID_HUD_GAME_OVER_640x1136,
/*SPRITEID_FONT_MONEY*/				SPRITEID_FONT_MONEY_640x1136,
/*SPRITEID_HUD_COIN*/				SPRITEID_HUD_COIN_640x1136,
/*SPRITEID_HUD_INGAME*/				SPRITEID_HUD_INGAME_640x1136,
/*SPRITEID_FONT_DISTANCE*/				SPRITEID_FONT_DISTANCE_640x1136,
/*SPRITEID_EFFECT_PARTICAL*/				SPRITEID_EFFECT_PARTICAL_640x1136,
/*SPRITEID_FROM_COIN*/				SPRITEID_FROM_COIN_640x1136,
/*SPRITEID_FROM_OBSTACLE*/				SPRITEID_FROM_OBSTACLE_640x1136,
/*SPRITEID_HUD_STICK*/				SPRITEID_HUD_STICK_640x1136,
/*SPRITEID_OBSTACLE_ROCKET*/				SPRITEID_OBSTACLE_ROCKET_640x1136,
/*SPRITEID_EFFECT_EXPLOSION*/				SPRITEID_EFFECT_EXPLOSION_640x1136,
/*SPRITEID_BG_01_PALYER_2A*/				SPRITEID_BG_01_PALYER_2A_640x1136,
/*SPRITEID_HUD_MACHETE*/				SPRITEID_HUD_MACHETE_640x1136,
/*SPRITEID_FONT_POWER*/				SPRITEID_FONT_POWER_640x1136,
/*SPRITEID_BG_MAIN_MENU*/				SPRITEID_BG_MAIN_MENU_640x1136,
/*SPRITEID_HUD_SHOP*/				SPRITEID_HUD_SHOP_640x1136,
/*SPRITEID_BOSS_01*/				SPRITEID_BOSS_01_640x1136,
/*SPRITEID_HUD_MULE*/				SPRITEID_HUD_MULE_640x1136,
/*SPRITEID_HUD_MEDAL*/				SPRITEID_HUD_MEDAL_640x1136,
/*SPRITEID_CHARATER_02*/				SPRITEID_CHARATER_02_640x1136,
/*SPRITEID_EFFECT_FAST*/				SPRITEID_EFFECT_FAST_640x1136,
/*SPRITEID_EFFECT_DUST*/				SPRITEID_EFFECT_DUST_640x1136,
/*SPRITEID_TRESURE_CHESS*/				SPRITEID_TRESURE_CHESS_640x1136,
/*SPRITEID_HUD_CHECK_POINT*/				SPRITEID_HUD_CHECK_POINT_640x1136,
/*SPRITEID_FROM_ROCKET*/				SPRITEID_FROM_ROCKET_640x1136,
/*SPRITEID_HUD_RESULT*/				SPRITEID_HUD_RESULT_640x1136,
/*SPRITEID_FONT_RESULT*/				SPRITEID_FONT_RESULT_640x1136,
/*SPRITEID_HUD_APPLE*/				SPRITEID_HUD_APPLE_640x1136,
/*SPRITEID_BG_SWAP_LAYER_1*/				SPRITEID_BG_SWAP_LAYER_1_640x1136,
/*SPRITEID_BG_SWAP_LAYER_2*/				SPRITEID_BG_SWAP_LAYER_2_640x1136,
/*SPRITEID_BG_02_PALYER_1*/				SPRITEID_BG_02_PALYER_1_640x1136,
/*SPRITEID_BG_02_PALYER_2*/				SPRITEID_BG_02_PALYER_2_640x1136,
/*SPRITEID_BG_02_PALYER_3*/				SPRITEID_BG_02_PALYER_3_640x1136,
/*SPRITEID_BG_02_PALYER_4*/				SPRITEID_BG_02_PALYER_4_640x1136,
/*SPRITEID_BG_01_PALYER_3*/				SPRITEID_BG_01_PALYER_3_640x1136,
/*SPRITEID_BOSS_02*/				SPRITEID_BOSS_02_640x1136,
/*SPRITEID_BOSS_03*/				SPRITEID_BOSS_03_640x1136,
/*SPRITEID_BOSS_1_A*/				SPRITEID_BOSS_1_A_640x1136,
/*SPRITEID_EFFECT_WAGON_PARTICAL*/				SPRITEID_EFFECT_WAGON_PARTICAL_640x1136,
/*SPRITEID_EFFECT_GOLD_PARTICAL*/				SPRITEID_EFFECT_GOLD_PARTICAL_640x1136,
/*SPRITEID_EFFECT_TRAIN_SMOKE*/				SPRITEID_EFFECT_TRAIN_SMOKE_640x1136,
/*SPRITEID_BG_LOADING*/				SPRITEID_BG_LOADING_640x1136,
/*SPRITEID_HUD_TUTORIAL*/				SPRITEID_HUD_TUTORIAL_640x1136,
/*SPRITEID_BOSS_3_A*/				SPRITEID_BOSS_3_A_640x1136,
/*SPRITEID_HUD_ICON_LOADING*/				SPRITEID_HUD_ICON_LOADING_640x1136,
/*SPRITEID_CHARATER_03*/				SPRITEID_CHARATER_03_640x1136,
/*SPRITEID_CHARATER_04*/				SPRITEID_CHARATER_04_640x1136,
/*SPRITEID_CHARATER_05*/				SPRITEID_CHARATER_05_640x1136,
/*SPRITEID_FONT_ADVERT*/				SPRITEID_FONT_ADVERT_640x1136,
/*SPRITEID_PINE_ADVERT*/				SPRITEID_PINE_ADVERT_640x1136,
/*SPRITEID_HUD_ANDROID*/				SPRITEID_HUD_ANDROID_640x1136,
/*SPRITEID_HUD_DAILY_REWARD*/				SPRITEID_HUD_DAILY_REWARD_640x1136,
/*SPRITEID_HUD_TOPEBOX_ADS*/				SPRITEID_HUD_TOPEBOX_ADS_640x1136,
};
#endif //PLATFORM
#if defined(MAC_OS)
#define _ResourceFileNameLength		13
char* _ResourceFileName[] = {
"bg",
"character",
"enemy",
"obstacle",
"effect",
"hud",
"font",
"advert",
"sfx",
"bgm_ingame",
"bgm_main_menu",
"bgm_result_screen_with_new_highscore",
"bgm_boss_fight",
};
#define _IDtoFileNameLength		96
int _IDtoFileName[] = {
0,
0,
0,
1,
2,
2,
2,
2,
2,
3,
4,
5,
6,
5,
5,
6,
4,
3,
3,
5,
3,
4,
0,
5,
6,
0,
5,
2,
5,
5,
1,
4,
4,
3,
5,
3,
5,
6,
5,
0,
0,
0,
0,
0,
0,
0,
2,
2,
2,
4,
4,
4,
0,
5,
2,
5,
1,
1,
1,
7,
7,
5,
5,
5,
9,
10,
11,
12,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
};
#define _ResourceInfoLength		192
int _ResourceInfo[] = {
24,21148,
21172,240995,
262167,32952,
24,118664,
24,137456,
137480,148424,
285904,150260,
436164,72952,
509116,78400,
24,35344,
24,4674,
24,36754,
24,48306,
36778,5388,
42166,45890,
48330,74258,
4698,322,
35368,2146,
37514,17030,
88056,7795,
54544,12572,
5020,80756,
295119,17518,
95851,13260,
122588,6660,
312637,194461,
109111,362503,
587516,134464,
471614,40564,
512178,32414,
118688,123692,
85776,448,
86224,1142,
67116,20158,
544592,25992,
87274,2670,
570584,33744,
129248,22990,
604328,22528,
507098,99357,
606455,23286,
629741,20228,
649969,62744,
712713,83763,
796476,48632,
845108,69118,
721980,129416,
851396,82952,
934348,131064,
87366,18534,
105900,570,
106470,970,
914226,41173,
626856,126523,
1065412,83256,
753379,3828,
242380,121024,
363404,122924,
486328,136252,
24,127992,
128016,89768,
757207,35424,
792631,50978,
843609,1782,
24,947412,
24,3552739,
24,488164,
24,290746,
24,177470,
177494,539222,
716716,28570,
745286,67564,
812850,213032,
1025882,1862982,
2888864,2783480,
5672344,476460,
6148804,222896,
6371700,149452,
6521152,16398,
6537550,400982,
6938532,65098,
7003630,931044,
7934674,917092,
8851766,40818,
8892584,1138248,
10030832,238564,
10269396,235290,
10504686,85596,
10590282,32926,
10623208,161352,
10784560,66682,
10851242,15012,
10866254,28588,
10894842,36822,
10931664,57092,
10988756,260620,
};
const int CGame::_syn_sprite_index[VERSION_NUMS*TOTAL_SPRITEID]=
{
/*SPRITEID_BG_01_PALYER_1*/				SPRITEID_BG_01_PALYER_1_640x1136,		SPRITEID_BG_01_PALYER_1_640x1136,		SPRITEID_BG_01_PALYER_1_640x1136,
/*SPRITEID_BG_01_PALYER_2*/				SPRITEID_BG_01_PALYER_2_640x1136,		SPRITEID_BG_01_PALYER_2_640x1136,		SPRITEID_BG_01_PALYER_2_640x1136,
/*SPRITEID_BG_01_PALYER_4*/				SPRITEID_BG_01_PALYER_4_640x1136,		SPRITEID_BG_01_PALYER_4_640x1136,		SPRITEID_BG_01_PALYER_4_640x1136,
/*SPRITEID_CHARATER_01*/				SPRITEID_CHARATER_01_640x1136,		SPRITEID_CHARATER_01_640x1136,		SPRITEID_CHARATER_01_640x1136,
/*SPRITEID_ENEMY_01*/				SPRITEID_ENEMY_01_640x1136,		SPRITEID_ENEMY_01_640x1136,		SPRITEID_ENEMY_01_640x1136,
/*SPRITEID_ENEMY_02*/				SPRITEID_ENEMY_02_640x1136,		SPRITEID_ENEMY_02_640x1136,		SPRITEID_ENEMY_02_640x1136,
/*SPRITEID_ENEMY_03*/				SPRITEID_ENEMY_03_640x1136,		SPRITEID_ENEMY_03_640x1136,		SPRITEID_ENEMY_03_640x1136,
/*SPRITEID_ENEMY_04*/				SPRITEID_ENEMY_04_640x1136,		SPRITEID_ENEMY_04_640x1136,		SPRITEID_ENEMY_04_640x1136,
/*SPRITEID_ENEMY_05*/				SPRITEID_ENEMY_05_640x1136,		SPRITEID_ENEMY_05_640x1136,		SPRITEID_ENEMY_05_640x1136,
/*SPRITEID_OBSTACLE*/				SPRITEID_OBSTACLE_640x1136,		SPRITEID_OBSTACLE_640x1136,		SPRITEID_OBSTACLE_640x1136,
/*SPRITEID_EFFECT_BULLET*/				SPRITEID_EFFECT_BULLET_640x1136,		SPRITEID_EFFECT_BULLET_640x1136,		SPRITEID_EFFECT_BULLET_640x1136,
/*SPRITEID_HUD_GAME_OVER*/				SPRITEID_HUD_GAME_OVER_640x1136,		SPRITEID_HUD_GAME_OVER_640x1136,		SPRITEID_HUD_GAME_OVER_640x1136,
/*SPRITEID_FONT_MONEY*/				SPRITEID_FONT_MONEY_640x1136,		SPRITEID_FONT_MONEY_640x1136,		SPRITEID_FONT_MONEY_640x1136,
/*SPRITEID_HUD_COIN*/				SPRITEID_HUD_COIN_640x1136,		SPRITEID_HUD_COIN_640x1136,		SPRITEID_HUD_COIN_640x1136,
/*SPRITEID_HUD_INGAME*/				SPRITEID_HUD_INGAME_640x1136,		SPRITEID_HUD_INGAME_640x1136,		SPRITEID_HUD_INGAME_640x1136,
/*SPRITEID_FONT_DISTANCE*/				SPRITEID_FONT_DISTANCE_640x1136,		SPRITEID_FONT_DISTANCE_640x1136,		SPRITEID_FONT_DISTANCE_640x1136,
/*SPRITEID_EFFECT_PARTICAL*/				SPRITEID_EFFECT_PARTICAL_640x1136,		SPRITEID_EFFECT_PARTICAL_640x1136,		SPRITEID_EFFECT_PARTICAL_640x1136,
/*SPRITEID_FROM_COIN*/				SPRITEID_FROM_COIN_640x1136,		SPRITEID_FROM_COIN_640x1136,		SPRITEID_FROM_COIN_640x1136,
/*SPRITEID_FROM_OBSTACLE*/				SPRITEID_FROM_OBSTACLE_640x1136,		SPRITEID_FROM_OBSTACLE_640x1136,		SPRITEID_FROM_OBSTACLE_640x1136,
/*SPRITEID_HUD_STICK*/				SPRITEID_HUD_STICK_640x1136,		SPRITEID_HUD_STICK_640x1136,		SPRITEID_HUD_STICK_640x1136,
/*SPRITEID_OBSTACLE_ROCKET*/				SPRITEID_OBSTACLE_ROCKET_640x1136,		SPRITEID_OBSTACLE_ROCKET_640x1136,		SPRITEID_OBSTACLE_ROCKET_640x1136,
/*SPRITEID_EFFECT_EXPLOSION*/				SPRITEID_EFFECT_EXPLOSION_640x1136,		SPRITEID_EFFECT_EXPLOSION_640x1136,		SPRITEID_EFFECT_EXPLOSION_640x1136,
/*SPRITEID_BG_01_PALYER_2A*/				SPRITEID_BG_01_PALYER_2A_640x1136,		SPRITEID_BG_01_PALYER_2A_640x1136,		SPRITEID_BG_01_PALYER_2A_640x1136,
/*SPRITEID_HUD_MACHETE*/				SPRITEID_HUD_MACHETE_640x1136,		SPRITEID_HUD_MACHETE_640x1136,		SPRITEID_HUD_MACHETE_640x1136,
/*SPRITEID_FONT_POWER*/				SPRITEID_FONT_POWER_640x1136,		SPRITEID_FONT_POWER_640x1136,		SPRITEID_FONT_POWER_640x1136,
/*SPRITEID_BG_MAIN_MENU*/				SPRITEID_BG_MAIN_MENU_640x1136,		SPRITEID_BG_MAIN_MENU_640x1136,		SPRITEID_BG_MAIN_MENU_640x1136,
/*SPRITEID_HUD_SHOP*/				SPRITEID_HUD_SHOP_640x1136,		SPRITEID_HUD_SHOP_640x1136,		SPRITEID_HUD_SHOP_640x1136,
/*SPRITEID_BOSS_01*/				SPRITEID_BOSS_01_640x1136,		SPRITEID_BOSS_01_640x1136,		SPRITEID_BOSS_01_640x1136,
/*SPRITEID_HUD_MULE*/				SPRITEID_HUD_MULE_640x1136,		SPRITEID_HUD_MULE_640x1136,		SPRITEID_HUD_MULE_640x1136,
/*SPRITEID_HUD_MEDAL*/				SPRITEID_HUD_MEDAL_640x1136,		SPRITEID_HUD_MEDAL_640x1136,		SPRITEID_HUD_MEDAL_640x1136,
/*SPRITEID_CHARATER_02*/				SPRITEID_CHARATER_02_640x1136,		SPRITEID_CHARATER_02_640x1136,		SPRITEID_CHARATER_02_640x1136,
/*SPRITEID_EFFECT_FAST*/				SPRITEID_EFFECT_FAST_640x1136,		SPRITEID_EFFECT_FAST_640x1136,		SPRITEID_EFFECT_FAST_640x1136,
/*SPRITEID_EFFECT_DUST*/				SPRITEID_EFFECT_DUST_640x1136,		SPRITEID_EFFECT_DUST_640x1136,		SPRITEID_EFFECT_DUST_640x1136,
/*SPRITEID_TRESURE_CHESS*/				SPRITEID_TRESURE_CHESS_640x1136,		SPRITEID_TRESURE_CHESS_640x1136,		SPRITEID_TRESURE_CHESS_640x1136,
/*SPRITEID_HUD_CHECK_POINT*/				SPRITEID_HUD_CHECK_POINT_640x1136,		SPRITEID_HUD_CHECK_POINT_640x1136,		SPRITEID_HUD_CHECK_POINT_640x1136,
/*SPRITEID_FROM_ROCKET*/				SPRITEID_FROM_ROCKET_640x1136,		SPRITEID_FROM_ROCKET_640x1136,		SPRITEID_FROM_ROCKET_640x1136,
/*SPRITEID_HUD_RESULT*/				SPRITEID_HUD_RESULT_640x1136,		SPRITEID_HUD_RESULT_640x1136,		SPRITEID_HUD_RESULT_640x1136,
/*SPRITEID_FONT_RESULT*/				SPRITEID_FONT_RESULT_640x1136,		SPRITEID_FONT_RESULT_640x1136,		SPRITEID_FONT_RESULT_640x1136,
/*SPRITEID_HUD_APPLE*/				SPRITEID_HUD_APPLE_640x1136,		SPRITEID_HUD_APPLE_640x1136,		SPRITEID_HUD_APPLE_640x1136,
/*SPRITEID_BG_SWAP_LAYER_1*/				SPRITEID_BG_SWAP_LAYER_1_640x1136,		SPRITEID_BG_SWAP_LAYER_1_640x1136,		SPRITEID_BG_SWAP_LAYER_1_640x1136,
/*SPRITEID_BG_SWAP_LAYER_2*/				SPRITEID_BG_SWAP_LAYER_2_640x1136,		SPRITEID_BG_SWAP_LAYER_2_640x1136,		SPRITEID_BG_SWAP_LAYER_2_640x1136,
/*SPRITEID_BG_02_PALYER_1*/				SPRITEID_BG_02_PALYER_1_640x1136,		SPRITEID_BG_02_PALYER_1_640x1136,		SPRITEID_BG_02_PALYER_1_640x1136,
/*SPRITEID_BG_02_PALYER_2*/				SPRITEID_BG_02_PALYER_2_640x1136,		SPRITEID_BG_02_PALYER_2_640x1136,		SPRITEID_BG_02_PALYER_2_640x1136,
/*SPRITEID_BG_02_PALYER_3*/				SPRITEID_BG_02_PALYER_3_640x1136,		SPRITEID_BG_02_PALYER_3_640x1136,		SPRITEID_BG_02_PALYER_3_640x1136,
/*SPRITEID_BG_02_PALYER_4*/				SPRITEID_BG_02_PALYER_4_640x1136,		SPRITEID_BG_02_PALYER_4_640x1136,		SPRITEID_BG_02_PALYER_4_640x1136,
/*SPRITEID_BG_01_PALYER_3*/				SPRITEID_BG_01_PALYER_3_640x1136,		SPRITEID_BG_01_PALYER_3_640x1136,		SPRITEID_BG_01_PALYER_3_640x1136,
/*SPRITEID_BOSS_02*/				SPRITEID_BOSS_02_640x1136,		SPRITEID_BOSS_02_640x1136,		SPRITEID_BOSS_02_640x1136,
/*SPRITEID_BOSS_03*/				SPRITEID_BOSS_03_640x1136,		SPRITEID_BOSS_03_640x1136,		SPRITEID_BOSS_03_640x1136,
/*SPRITEID_BOSS_1_A*/				SPRITEID_BOSS_1_A_640x1136,		SPRITEID_BOSS_1_A_640x1136,		SPRITEID_BOSS_1_A_640x1136,
/*SPRITEID_EFFECT_WAGON_PARTICAL*/				SPRITEID_EFFECT_WAGON_PARTICAL_640x1136,		SPRITEID_EFFECT_WAGON_PARTICAL_640x1136,		SPRITEID_EFFECT_WAGON_PARTICAL_640x1136,
/*SPRITEID_EFFECT_GOLD_PARTICAL*/				SPRITEID_EFFECT_GOLD_PARTICAL_640x1136,		SPRITEID_EFFECT_GOLD_PARTICAL_640x1136,		SPRITEID_EFFECT_GOLD_PARTICAL_640x1136,
/*SPRITEID_EFFECT_TRAIN_SMOKE*/				SPRITEID_EFFECT_TRAIN_SMOKE_640x1136,		SPRITEID_EFFECT_TRAIN_SMOKE_640x1136,		SPRITEID_EFFECT_TRAIN_SMOKE_640x1136,
/*SPRITEID_BG_LOADING*/				SPRITEID_BG_LOADING_640x1136,		SPRITEID_BG_LOADING_640x1136,		SPRITEID_BG_LOADING_640x1136,
/*SPRITEID_HUD_TUTORIAL*/				SPRITEID_HUD_TUTORIAL_640x1136,		SPRITEID_HUD_TUTORIAL_640x1136,		SPRITEID_HUD_TUTORIAL_640x1136,
/*SPRITEID_BOSS_3_A*/				SPRITEID_BOSS_3_A_640x1136,		SPRITEID_BOSS_3_A_640x1136,		SPRITEID_BOSS_3_A_640x1136,
/*SPRITEID_HUD_ICON_LOADING*/				SPRITEID_HUD_ICON_LOADING_640x1136,		SPRITEID_HUD_ICON_LOADING_640x1136,		SPRITEID_HUD_ICON_LOADING_640x1136,
/*SPRITEID_CHARATER_03*/				SPRITEID_CHARATER_03_640x1136,		SPRITEID_CHARATER_03_640x1136,		SPRITEID_CHARATER_03_640x1136,
/*SPRITEID_CHARATER_04*/				SPRITEID_CHARATER_04_640x1136,		SPRITEID_CHARATER_04_640x1136,		SPRITEID_CHARATER_04_640x1136,
/*SPRITEID_CHARATER_05*/				SPRITEID_CHARATER_05_640x1136,		SPRITEID_CHARATER_05_640x1136,		SPRITEID_CHARATER_05_640x1136,
/*SPRITEID_FONT_ADVERT*/				SPRITEID_FONT_ADVERT_640x1136,		SPRITEID_FONT_ADVERT_640x1136,		SPRITEID_FONT_ADVERT_640x1136,
/*SPRITEID_PINE_ADVERT*/				SPRITEID_PINE_ADVERT_640x1136,		SPRITEID_PINE_ADVERT_640x1136,		SPRITEID_PINE_ADVERT_640x1136,
/*SPRITEID_HUD_ANDROID*/				SPRITEID_HUD_ANDROID_640x1136,		SPRITEID_HUD_ANDROID_640x1136,		SPRITEID_HUD_ANDROID_640x1136,
/*SPRITEID_HUD_DAILY_REWARD*/				SPRITEID_HUD_DAILY_REWARD_640x1136,		SPRITEID_HUD_DAILY_REWARD_640x1136,		SPRITEID_HUD_DAILY_REWARD_640x1136,
/*SPRITEID_HUD_TOPEBOX_ADS*/				SPRITEID_HUD_TOPEBOX_ADS_640x1136,		SPRITEID_HUD_TOPEBOX_ADS_640x1136,		SPRITEID_HUD_TOPEBOX_ADS_640x1136,
};
#endif //PLATFORM
#if defined(_WINDOWS_PHONE8)
#define _ResourceFileNameLength		40
char* _ResourceFileName[] = {
"bg",
"character",
"enemy",
"obstacle",
"effect",
"hud",
"font",
"advert",
"bgm_ingame",
"bgm_main_menu",
"bgm_result_screen_with_new_highscore",
"bgm_boss_fight",
"sfx_bomb",
"sfx_button_start",
"sfx_coin",
"sfx_gunshot",
"sfx_horse_up_down",
"sfx_mission_completed",
"sfx_mission_failed",
"sfx_powerup_collected",
"sfx_score_counting",
"sfx_upgrade",
"sfx_warning",
"sfx_boss_defeated",
"sfx_button",
"sfx_missiles",
"sfx_gameover",
"sfx_gunshot_boss",
"sfx_horse_run",
"sfx_train_start_stop",
"sfx_train_warning",
"sfx_gunshot_gameover",
"sfx_knife",
"sfx_player_hurt",
"sfx_train_goin",
"sfx_boss_throwing_bomb",
"sfx_enemy_die_1",
"sfx_enemy_die_2",
"sfx_enemy_die_3",
"sfx_warning_boss",
};
#define _IDtoFileNameLength		96
int _IDtoFileName[] = {
0,
0,
0,
1,
2,
2,
2,
2,
2,
3,
4,
5,
6,
5,
5,
6,
4,
3,
3,
5,
3,
4,
0,
5,
6,
0,
5,
2,
5,
5,
1,
4,
4,
3,
5,
3,
5,
6,
5,
0,
0,
0,
0,
0,
0,
0,
2,
2,
2,
4,
4,
4,
0,
5,
2,
5,
1,
1,
1,
7,
7,
5,
5,
5,
8,
9,
10,
11,
12,
13,
14,
15,
16,
17,
18,
19,
20,
21,
22,
23,
24,
25,
26,
27,
28,
29,
30,
31,
32,
33,
34,
35,
36,
37,
38,
39,
};
#define _ResourceInfoLength		192
int _ResourceInfo[] = {
0,21148,
21148,240995,
262143,32952,
0,118664,
0,137456,
137456,148424,
285880,150260,
436140,72952,
509092,78400,
0,35344,
0,4674,
0,36754,
0,48306,
36754,5388,
42142,45890,
48306,74258,
4674,322,
35344,2146,
37490,17030,
88032,7795,
54520,12572,
4996,80756,
295095,17518,
95827,13260,
122564,6660,
312613,194461,
109087,362503,
587492,134464,
471590,40564,
512154,32414,
118664,123692,
85752,448,
86200,1142,
67092,20158,
544568,25992,
87250,2670,
570560,33744,
129224,22990,
604304,22528,
507074,99357,
606431,23286,
629717,20228,
649945,62744,
712689,83763,
796452,48632,
845084,69118,
721956,129416,
851372,82952,
934324,131064,
87342,18534,
105876,570,
106446,970,
914202,41173,
626832,126523,
1065388,83256,
753355,3828,
242356,121024,
363380,122924,
486304,136252,
0,127992,
127992,89768,
757183,35424,
792607,50978,
843585,1782,
0,947412,
0,3552739,
0,488164,
0,290746,
0,177470,
0,539222,
0,28570,
0,67564,
0,213032,
0,1862982,
0,2783480,
0,476460,
0,222896,
0,149452,
0,16398,
0,400982,
0,65098,
0,931044,
0,917092,
0,40818,
0,1138248,
0,238564,
0,235290,
0,85596,
0,32926,
0,161352,
0,66682,
0,15012,
0,28588,
0,36822,
0,57092,
0,260620,
};
const int CGame::_syn_sprite_index[VERSION_NUMS*TOTAL_SPRITEID]=
{
/*SPRITEID_BG_01_PALYER_1*/				SPRITEID_BG_01_PALYER_1_640x1136,		SPRITEID_BG_01_PALYER_1_640x1136,		SPRITEID_BG_01_PALYER_1_640x1136,		SPRITEID_BG_01_PALYER_1_640x1136,
/*SPRITEID_BG_01_PALYER_2*/				SPRITEID_BG_01_PALYER_2_640x1136,		SPRITEID_BG_01_PALYER_2_640x1136,		SPRITEID_BG_01_PALYER_2_640x1136,		SPRITEID_BG_01_PALYER_2_640x1136,
/*SPRITEID_BG_01_PALYER_4*/				SPRITEID_BG_01_PALYER_4_640x1136,		SPRITEID_BG_01_PALYER_4_640x1136,		SPRITEID_BG_01_PALYER_4_640x1136,		SPRITEID_BG_01_PALYER_4_640x1136,
/*SPRITEID_CHARATER_01*/				SPRITEID_CHARATER_01_640x1136,		SPRITEID_CHARATER_01_640x1136,		SPRITEID_CHARATER_01_640x1136,		SPRITEID_CHARATER_01_640x1136,
/*SPRITEID_ENEMY_01*/				SPRITEID_ENEMY_01_640x1136,		SPRITEID_ENEMY_01_640x1136,		SPRITEID_ENEMY_01_640x1136,		SPRITEID_ENEMY_01_640x1136,
/*SPRITEID_ENEMY_02*/				SPRITEID_ENEMY_02_640x1136,		SPRITEID_ENEMY_02_640x1136,		SPRITEID_ENEMY_02_640x1136,		SPRITEID_ENEMY_02_640x1136,
/*SPRITEID_ENEMY_03*/				SPRITEID_ENEMY_03_640x1136,		SPRITEID_ENEMY_03_640x1136,		SPRITEID_ENEMY_03_640x1136,		SPRITEID_ENEMY_03_640x1136,
/*SPRITEID_ENEMY_04*/				SPRITEID_ENEMY_04_640x1136,		SPRITEID_ENEMY_04_640x1136,		SPRITEID_ENEMY_04_640x1136,		SPRITEID_ENEMY_04_640x1136,
/*SPRITEID_ENEMY_05*/				SPRITEID_ENEMY_05_640x1136,		SPRITEID_ENEMY_05_640x1136,		SPRITEID_ENEMY_05_640x1136,		SPRITEID_ENEMY_05_640x1136,
/*SPRITEID_OBSTACLE*/				SPRITEID_OBSTACLE_640x1136,		SPRITEID_OBSTACLE_640x1136,		SPRITEID_OBSTACLE_640x1136,		SPRITEID_OBSTACLE_640x1136,
/*SPRITEID_EFFECT_BULLET*/				SPRITEID_EFFECT_BULLET_640x1136,		SPRITEID_EFFECT_BULLET_640x1136,		SPRITEID_EFFECT_BULLET_640x1136,		SPRITEID_EFFECT_BULLET_640x1136,
/*SPRITEID_HUD_GAME_OVER*/				SPRITEID_HUD_GAME_OVER_640x1136,		SPRITEID_HUD_GAME_OVER_640x1136,		SPRITEID_HUD_GAME_OVER_640x1136,		SPRITEID_HUD_GAME_OVER_640x1136,
/*SPRITEID_FONT_MONEY*/				SPRITEID_FONT_MONEY_640x1136,		SPRITEID_FONT_MONEY_640x1136,		SPRITEID_FONT_MONEY_640x1136,		SPRITEID_FONT_MONEY_640x1136,
/*SPRITEID_HUD_COIN*/				SPRITEID_HUD_COIN_640x1136,		SPRITEID_HUD_COIN_640x1136,		SPRITEID_HUD_COIN_640x1136,		SPRITEID_HUD_COIN_640x1136,
/*SPRITEID_HUD_INGAME*/				SPRITEID_HUD_INGAME_640x1136,		SPRITEID_HUD_INGAME_640x1136,		SPRITEID_HUD_INGAME_640x1136,		SPRITEID_HUD_INGAME_640x1136,
/*SPRITEID_FONT_DISTANCE*/				SPRITEID_FONT_DISTANCE_640x1136,		SPRITEID_FONT_DISTANCE_640x1136,		SPRITEID_FONT_DISTANCE_640x1136,		SPRITEID_FONT_DISTANCE_640x1136,
/*SPRITEID_EFFECT_PARTICAL*/				SPRITEID_EFFECT_PARTICAL_640x1136,		SPRITEID_EFFECT_PARTICAL_640x1136,		SPRITEID_EFFECT_PARTICAL_640x1136,		SPRITEID_EFFECT_PARTICAL_640x1136,
/*SPRITEID_FROM_COIN*/				SPRITEID_FROM_COIN_640x1136,		SPRITEID_FROM_COIN_640x1136,		SPRITEID_FROM_COIN_640x1136,		SPRITEID_FROM_COIN_640x1136,
/*SPRITEID_FROM_OBSTACLE*/				SPRITEID_FROM_OBSTACLE_640x1136,		SPRITEID_FROM_OBSTACLE_640x1136,		SPRITEID_FROM_OBSTACLE_640x1136,		SPRITEID_FROM_OBSTACLE_640x1136,
/*SPRITEID_HUD_STICK*/				SPRITEID_HUD_STICK_640x1136,		SPRITEID_HUD_STICK_640x1136,		SPRITEID_HUD_STICK_640x1136,		SPRITEID_HUD_STICK_640x1136,
/*SPRITEID_OBSTACLE_ROCKET*/				SPRITEID_OBSTACLE_ROCKET_640x1136,		SPRITEID_OBSTACLE_ROCKET_640x1136,		SPRITEID_OBSTACLE_ROCKET_640x1136,		SPRITEID_OBSTACLE_ROCKET_640x1136,
/*SPRITEID_EFFECT_EXPLOSION*/				SPRITEID_EFFECT_EXPLOSION_640x1136,		SPRITEID_EFFECT_EXPLOSION_640x1136,		SPRITEID_EFFECT_EXPLOSION_640x1136,		SPRITEID_EFFECT_EXPLOSION_640x1136,
/*SPRITEID_BG_01_PALYER_2A*/				SPRITEID_BG_01_PALYER_2A_640x1136,		SPRITEID_BG_01_PALYER_2A_640x1136,		SPRITEID_BG_01_PALYER_2A_640x1136,		SPRITEID_BG_01_PALYER_2A_640x1136,
/*SPRITEID_HUD_MACHETE*/				SPRITEID_HUD_MACHETE_640x1136,		SPRITEID_HUD_MACHETE_640x1136,		SPRITEID_HUD_MACHETE_640x1136,		SPRITEID_HUD_MACHETE_640x1136,
/*SPRITEID_FONT_POWER*/				SPRITEID_FONT_POWER_640x1136,		SPRITEID_FONT_POWER_640x1136,		SPRITEID_FONT_POWER_640x1136,		SPRITEID_FONT_POWER_640x1136,
/*SPRITEID_BG_MAIN_MENU*/				SPRITEID_BG_MAIN_MENU_640x1136,		SPRITEID_BG_MAIN_MENU_640x1136,		SPRITEID_BG_MAIN_MENU_640x1136,		SPRITEID_BG_MAIN_MENU_640x1136,
/*SPRITEID_HUD_SHOP*/				SPRITEID_HUD_SHOP_640x1136,		SPRITEID_HUD_SHOP_640x1136,		SPRITEID_HUD_SHOP_640x1136,		SPRITEID_HUD_SHOP_640x1136,
/*SPRITEID_BOSS_01*/				SPRITEID_BOSS_01_640x1136,		SPRITEID_BOSS_01_640x1136,		SPRITEID_BOSS_01_640x1136,		SPRITEID_BOSS_01_640x1136,
/*SPRITEID_HUD_MULE*/				SPRITEID_HUD_MULE_640x1136,		SPRITEID_HUD_MULE_640x1136,		SPRITEID_HUD_MULE_640x1136,		SPRITEID_HUD_MULE_640x1136,
/*SPRITEID_HUD_MEDAL*/				SPRITEID_HUD_MEDAL_640x1136,		SPRITEID_HUD_MEDAL_640x1136,		SPRITEID_HUD_MEDAL_640x1136,		SPRITEID_HUD_MEDAL_640x1136,
/*SPRITEID_CHARATER_02*/				SPRITEID_CHARATER_02_640x1136,		SPRITEID_CHARATER_02_640x1136,		SPRITEID_CHARATER_02_640x1136,		SPRITEID_CHARATER_02_640x1136,
/*SPRITEID_EFFECT_FAST*/				SPRITEID_EFFECT_FAST_640x1136,		SPRITEID_EFFECT_FAST_640x1136,		SPRITEID_EFFECT_FAST_640x1136,		SPRITEID_EFFECT_FAST_640x1136,
/*SPRITEID_EFFECT_DUST*/				SPRITEID_EFFECT_DUST_640x1136,		SPRITEID_EFFECT_DUST_640x1136,		SPRITEID_EFFECT_DUST_640x1136,		SPRITEID_EFFECT_DUST_640x1136,
/*SPRITEID_TRESURE_CHESS*/				SPRITEID_TRESURE_CHESS_640x1136,		SPRITEID_TRESURE_CHESS_640x1136,		SPRITEID_TRESURE_CHESS_640x1136,		SPRITEID_TRESURE_CHESS_640x1136,
/*SPRITEID_HUD_CHECK_POINT*/				SPRITEID_HUD_CHECK_POINT_640x1136,		SPRITEID_HUD_CHECK_POINT_640x1136,		SPRITEID_HUD_CHECK_POINT_640x1136,		SPRITEID_HUD_CHECK_POINT_640x1136,
/*SPRITEID_FROM_ROCKET*/				SPRITEID_FROM_ROCKET_640x1136,		SPRITEID_FROM_ROCKET_640x1136,		SPRITEID_FROM_ROCKET_640x1136,		SPRITEID_FROM_ROCKET_640x1136,
/*SPRITEID_HUD_RESULT*/				SPRITEID_HUD_RESULT_640x1136,		SPRITEID_HUD_RESULT_640x1136,		SPRITEID_HUD_RESULT_640x1136,		SPRITEID_HUD_RESULT_640x1136,
/*SPRITEID_FONT_RESULT*/				SPRITEID_FONT_RESULT_640x1136,		SPRITEID_FONT_RESULT_640x1136,		SPRITEID_FONT_RESULT_640x1136,		SPRITEID_FONT_RESULT_640x1136,
/*SPRITEID_HUD_APPLE*/				SPRITEID_HUD_APPLE_640x1136,		SPRITEID_HUD_APPLE_640x1136,		SPRITEID_HUD_APPLE_640x1136,		SPRITEID_HUD_APPLE_640x1136,
/*SPRITEID_BG_SWAP_LAYER_1*/				SPRITEID_BG_SWAP_LAYER_1_640x1136,		SPRITEID_BG_SWAP_LAYER_1_640x1136,		SPRITEID_BG_SWAP_LAYER_1_640x1136,		SPRITEID_BG_SWAP_LAYER_1_640x1136,
/*SPRITEID_BG_SWAP_LAYER_2*/				SPRITEID_BG_SWAP_LAYER_2_640x1136,		SPRITEID_BG_SWAP_LAYER_2_640x1136,		SPRITEID_BG_SWAP_LAYER_2_640x1136,		SPRITEID_BG_SWAP_LAYER_2_640x1136,
/*SPRITEID_BG_02_PALYER_1*/				SPRITEID_BG_02_PALYER_1_640x1136,		SPRITEID_BG_02_PALYER_1_640x1136,		SPRITEID_BG_02_PALYER_1_640x1136,		SPRITEID_BG_02_PALYER_1_640x1136,
/*SPRITEID_BG_02_PALYER_2*/				SPRITEID_BG_02_PALYER_2_640x1136,		SPRITEID_BG_02_PALYER_2_640x1136,		SPRITEID_BG_02_PALYER_2_640x1136,		SPRITEID_BG_02_PALYER_2_640x1136,
/*SPRITEID_BG_02_PALYER_3*/				SPRITEID_BG_02_PALYER_3_640x1136,		SPRITEID_BG_02_PALYER_3_640x1136,		SPRITEID_BG_02_PALYER_3_640x1136,		SPRITEID_BG_02_PALYER_3_640x1136,
/*SPRITEID_BG_02_PALYER_4*/				SPRITEID_BG_02_PALYER_4_640x1136,		SPRITEID_BG_02_PALYER_4_640x1136,		SPRITEID_BG_02_PALYER_4_640x1136,		SPRITEID_BG_02_PALYER_4_640x1136,
/*SPRITEID_BG_01_PALYER_3*/				SPRITEID_BG_01_PALYER_3_640x1136,		SPRITEID_BG_01_PALYER_3_640x1136,		SPRITEID_BG_01_PALYER_3_640x1136,		SPRITEID_BG_01_PALYER_3_640x1136,
/*SPRITEID_BOSS_02*/				SPRITEID_BOSS_02_640x1136,		SPRITEID_BOSS_02_640x1136,		SPRITEID_BOSS_02_640x1136,		SPRITEID_BOSS_02_640x1136,
/*SPRITEID_BOSS_03*/				SPRITEID_BOSS_03_640x1136,		SPRITEID_BOSS_03_640x1136,		SPRITEID_BOSS_03_640x1136,		SPRITEID_BOSS_03_640x1136,
/*SPRITEID_BOSS_1_A*/				SPRITEID_BOSS_1_A_640x1136,		SPRITEID_BOSS_1_A_640x1136,		SPRITEID_BOSS_1_A_640x1136,		SPRITEID_BOSS_1_A_640x1136,
/*SPRITEID_EFFECT_WAGON_PARTICAL*/				SPRITEID_EFFECT_WAGON_PARTICAL_640x1136,		SPRITEID_EFFECT_WAGON_PARTICAL_640x1136,		SPRITEID_EFFECT_WAGON_PARTICAL_640x1136,		SPRITEID_EFFECT_WAGON_PARTICAL_640x1136,
/*SPRITEID_EFFECT_GOLD_PARTICAL*/				SPRITEID_EFFECT_GOLD_PARTICAL_640x1136,		SPRITEID_EFFECT_GOLD_PARTICAL_640x1136,		SPRITEID_EFFECT_GOLD_PARTICAL_640x1136,		SPRITEID_EFFECT_GOLD_PARTICAL_640x1136,
/*SPRITEID_EFFECT_TRAIN_SMOKE*/				SPRITEID_EFFECT_TRAIN_SMOKE_640x1136,		SPRITEID_EFFECT_TRAIN_SMOKE_640x1136,		SPRITEID_EFFECT_TRAIN_SMOKE_640x1136,		SPRITEID_EFFECT_TRAIN_SMOKE_640x1136,
/*SPRITEID_BG_LOADING*/				SPRITEID_BG_LOADING_640x1136,		SPRITEID_BG_LOADING_640x1136,		SPRITEID_BG_LOADING_640x1136,		SPRITEID_BG_LOADING_640x1136,
/*SPRITEID_HUD_TUTORIAL*/				SPRITEID_HUD_TUTORIAL_640x1136,		SPRITEID_HUD_TUTORIAL_640x1136,		SPRITEID_HUD_TUTORIAL_640x1136,		SPRITEID_HUD_TUTORIAL_640x1136,
/*SPRITEID_BOSS_3_A*/				SPRITEID_BOSS_3_A_640x1136,		SPRITEID_BOSS_3_A_640x1136,		SPRITEID_BOSS_3_A_640x1136,		SPRITEID_BOSS_3_A_640x1136,
/*SPRITEID_HUD_ICON_LOADING*/				SPRITEID_HUD_ICON_LOADING_640x1136,		SPRITEID_HUD_ICON_LOADING_640x1136,		SPRITEID_HUD_ICON_LOADING_640x1136,		SPRITEID_HUD_ICON_LOADING_640x1136,
/*SPRITEID_CHARATER_03*/				SPRITEID_CHARATER_03_640x1136,		SPRITEID_CHARATER_03_640x1136,		SPRITEID_CHARATER_03_640x1136,		SPRITEID_CHARATER_03_640x1136,
/*SPRITEID_CHARATER_04*/				SPRITEID_CHARATER_04_640x1136,		SPRITEID_CHARATER_04_640x1136,		SPRITEID_CHARATER_04_640x1136,		SPRITEID_CHARATER_04_640x1136,
/*SPRITEID_CHARATER_05*/				SPRITEID_CHARATER_05_640x1136,		SPRITEID_CHARATER_05_640x1136,		SPRITEID_CHARATER_05_640x1136,		SPRITEID_CHARATER_05_640x1136,
/*SPRITEID_FONT_ADVERT*/				SPRITEID_FONT_ADVERT_640x1136,		SPRITEID_FONT_ADVERT_640x1136,		SPRITEID_FONT_ADVERT_640x1136,		SPRITEID_FONT_ADVERT_640x1136,
/*SPRITEID_PINE_ADVERT*/				SPRITEID_PINE_ADVERT_640x1136,		SPRITEID_PINE_ADVERT_640x1136,		SPRITEID_PINE_ADVERT_640x1136,		SPRITEID_PINE_ADVERT_640x1136,
/*SPRITEID_HUD_ANDROID*/				SPRITEID_HUD_ANDROID_640x1136,		SPRITEID_HUD_ANDROID_640x1136,		SPRITEID_HUD_ANDROID_640x1136,		SPRITEID_HUD_ANDROID_640x1136,
/*SPRITEID_HUD_DAILY_REWARD*/				SPRITEID_HUD_DAILY_REWARD_640x1136,		SPRITEID_HUD_DAILY_REWARD_640x1136,		SPRITEID_HUD_DAILY_REWARD_640x1136,		SPRITEID_HUD_DAILY_REWARD_640x1136,
/*SPRITEID_HUD_TOPEBOX_ADS*/				SPRITEID_HUD_TOPEBOX_ADS_640x1136,		SPRITEID_HUD_TOPEBOX_ADS_640x1136,		SPRITEID_HUD_TOPEBOX_ADS_640x1136,		SPRITEID_HUD_TOPEBOX_ADS_640x1136,
};
#endif //PLATFORM
#if defined(ANDROID_OS)
#define _ResourceFileNameLength		13
char* _ResourceFileName[] = {
"bg",
"character",
"enemy",
"obstacle",
"effect",
"hud",
"font",
"advert",
"sfx",
"bgm_ingame",
"bgm_main_menu",
"bgm_result_screen_with_new_highscore",
"bgm_boss_fight",
};
#define _IDtoFileNameLength		96
int _IDtoFileName[] = {
0,
0,
0,
1,
2,
2,
2,
2,
2,
3,
4,
5,
6,
5,
5,
6,
4,
3,
3,
5,
3,
4,
0,
5,
6,
0,
5,
2,
5,
5,
1,
4,
4,
3,
5,
3,
5,
6,
5,
0,
0,
0,
0,
0,
0,
0,
2,
2,
2,
4,
4,
4,
0,
5,
2,
5,
1,
1,
1,
7,
7,
5,
5,
5,
9,
10,
11,
12,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
8,
};
#define _ResourceInfoLength		192
int _ResourceInfo[] = {
32,21148,
21180,240995,
262175,32952,
32,118664,
32,137456,
137488,148424,
285912,150260,
436172,72952,
509124,78400,
32,35344,
32,4674,
32,36754,
32,48306,
36786,5388,
42174,45890,
48338,74258,
4706,322,
35376,2146,
37522,17030,
88064,7795,
54552,12572,
5028,80756,
295127,17518,
95859,13260,
122596,6660,
312645,194461,
109119,362503,
587524,134464,
471622,40564,
512186,32414,
118696,123692,
85784,448,
86232,1142,
67124,20158,
544600,25992,
87282,2670,
570592,33744,
129256,22990,
604336,22528,
507106,99357,
606463,23286,
629749,20228,
649977,62744,
712721,83763,
796484,48632,
845116,69118,
721988,129416,
851404,82952,
934356,131064,
87374,18534,
105908,570,
106478,970,
914234,41173,
626864,126523,
1065420,83256,
753387,3828,
242388,121024,
363412,122924,
486336,136252,
32,127992,
128024,89768,
757215,35424,
792639,50978,
843617,1782,
32,947412,
32,3552739,
32,488164,
32,290746,
32,177470,
177502,539222,
716724,28570,
745294,67564,
812858,213032,
1025890,1862982,
2888872,2783480,
5672352,476460,
6148812,222896,
6371708,149452,
6521160,16398,
6537558,400982,
6938540,65098,
7003638,931044,
7934682,917092,
8851774,40818,
8892592,1138248,
10030840,238564,
10269404,235290,
10504694,85596,
10590290,32926,
10623216,161352,
10784568,66682,
10851250,15012,
10866262,28588,
10894850,36822,
10931672,57092,
10988764,260620,
};
const int CGame::_syn_sprite_index[VERSION_NUMS*TOTAL_SPRITEID]=
{
/*SPRITEID_BG_01_PALYER_1*/				SPRITEID_BG_01_PALYER_1_640x1136,
/*SPRITEID_BG_01_PALYER_2*/				SPRITEID_BG_01_PALYER_2_640x1136,
/*SPRITEID_BG_01_PALYER_4*/				SPRITEID_BG_01_PALYER_4_640x1136,
/*SPRITEID_CHARATER_01*/				SPRITEID_CHARATER_01_640x1136,
/*SPRITEID_ENEMY_01*/				SPRITEID_ENEMY_01_640x1136,
/*SPRITEID_ENEMY_02*/				SPRITEID_ENEMY_02_640x1136,
/*SPRITEID_ENEMY_03*/				SPRITEID_ENEMY_03_640x1136,
/*SPRITEID_ENEMY_04*/				SPRITEID_ENEMY_04_640x1136,
/*SPRITEID_ENEMY_05*/				SPRITEID_ENEMY_05_640x1136,
/*SPRITEID_OBSTACLE*/				SPRITEID_OBSTACLE_640x1136,
/*SPRITEID_EFFECT_BULLET*/				SPRITEID_EFFECT_BULLET_640x1136,
/*SPRITEID_HUD_GAME_OVER*/				SPRITEID_HUD_GAME_OVER_640x1136,
/*SPRITEID_FONT_MONEY*/				SPRITEID_FONT_MONEY_640x1136,
/*SPRITEID_HUD_COIN*/				SPRITEID_HUD_COIN_640x1136,
/*SPRITEID_HUD_INGAME*/				SPRITEID_HUD_INGAME_640x1136,
/*SPRITEID_FONT_DISTANCE*/				SPRITEID_FONT_DISTANCE_640x1136,
/*SPRITEID_EFFECT_PARTICAL*/				SPRITEID_EFFECT_PARTICAL_640x1136,
/*SPRITEID_FROM_COIN*/				SPRITEID_FROM_COIN_640x1136,
/*SPRITEID_FROM_OBSTACLE*/				SPRITEID_FROM_OBSTACLE_640x1136,
/*SPRITEID_HUD_STICK*/				SPRITEID_HUD_STICK_640x1136,
/*SPRITEID_OBSTACLE_ROCKET*/				SPRITEID_OBSTACLE_ROCKET_640x1136,
/*SPRITEID_EFFECT_EXPLOSION*/				SPRITEID_EFFECT_EXPLOSION_640x1136,
/*SPRITEID_BG_01_PALYER_2A*/				SPRITEID_BG_01_PALYER_2A_640x1136,
/*SPRITEID_HUD_MACHETE*/				SPRITEID_HUD_MACHETE_640x1136,
/*SPRITEID_FONT_POWER*/				SPRITEID_FONT_POWER_640x1136,
/*SPRITEID_BG_MAIN_MENU*/				SPRITEID_BG_MAIN_MENU_640x1136,
/*SPRITEID_HUD_SHOP*/				SPRITEID_HUD_SHOP_640x1136,
/*SPRITEID_BOSS_01*/				SPRITEID_BOSS_01_640x1136,
/*SPRITEID_HUD_MULE*/				SPRITEID_HUD_MULE_640x1136,
/*SPRITEID_HUD_MEDAL*/				SPRITEID_HUD_MEDAL_640x1136,
/*SPRITEID_CHARATER_02*/				SPRITEID_CHARATER_02_640x1136,
/*SPRITEID_EFFECT_FAST*/				SPRITEID_EFFECT_FAST_640x1136,
/*SPRITEID_EFFECT_DUST*/				SPRITEID_EFFECT_DUST_640x1136,
/*SPRITEID_TRESURE_CHESS*/				SPRITEID_TRESURE_CHESS_640x1136,
/*SPRITEID_HUD_CHECK_POINT*/				SPRITEID_HUD_CHECK_POINT_640x1136,
/*SPRITEID_FROM_ROCKET*/				SPRITEID_FROM_ROCKET_640x1136,
/*SPRITEID_HUD_RESULT*/				SPRITEID_HUD_RESULT_640x1136,
/*SPRITEID_FONT_RESULT*/				SPRITEID_FONT_RESULT_640x1136,
/*SPRITEID_HUD_APPLE*/				SPRITEID_HUD_APPLE_640x1136,
/*SPRITEID_BG_SWAP_LAYER_1*/				SPRITEID_BG_SWAP_LAYER_1_640x1136,
/*SPRITEID_BG_SWAP_LAYER_2*/				SPRITEID_BG_SWAP_LAYER_2_640x1136,
/*SPRITEID_BG_02_PALYER_1*/				SPRITEID_BG_02_PALYER_1_640x1136,
/*SPRITEID_BG_02_PALYER_2*/				SPRITEID_BG_02_PALYER_2_640x1136,
/*SPRITEID_BG_02_PALYER_3*/				SPRITEID_BG_02_PALYER_3_640x1136,
/*SPRITEID_BG_02_PALYER_4*/				SPRITEID_BG_02_PALYER_4_640x1136,
/*SPRITEID_BG_01_PALYER_3*/				SPRITEID_BG_01_PALYER_3_640x1136,
/*SPRITEID_BOSS_02*/				SPRITEID_BOSS_02_640x1136,
/*SPRITEID_BOSS_03*/				SPRITEID_BOSS_03_640x1136,
/*SPRITEID_BOSS_1_A*/				SPRITEID_BOSS_1_A_640x1136,
/*SPRITEID_EFFECT_WAGON_PARTICAL*/				SPRITEID_EFFECT_WAGON_PARTICAL_640x1136,
/*SPRITEID_EFFECT_GOLD_PARTICAL*/				SPRITEID_EFFECT_GOLD_PARTICAL_640x1136,
/*SPRITEID_EFFECT_TRAIN_SMOKE*/				SPRITEID_EFFECT_TRAIN_SMOKE_640x1136,
/*SPRITEID_BG_LOADING*/				SPRITEID_BG_LOADING_640x1136,
/*SPRITEID_HUD_TUTORIAL*/				SPRITEID_HUD_TUTORIAL_640x1136,
/*SPRITEID_BOSS_3_A*/				SPRITEID_BOSS_3_A_640x1136,
/*SPRITEID_HUD_ICON_LOADING*/				SPRITEID_HUD_ICON_LOADING_640x1136,
/*SPRITEID_CHARATER_03*/				SPRITEID_CHARATER_03_640x1136,
/*SPRITEID_CHARATER_04*/				SPRITEID_CHARATER_04_640x1136,
/*SPRITEID_CHARATER_05*/				SPRITEID_CHARATER_05_640x1136,
/*SPRITEID_FONT_ADVERT*/				SPRITEID_FONT_ADVERT_640x1136,
/*SPRITEID_PINE_ADVERT*/				SPRITEID_PINE_ADVERT_640x1136,
/*SPRITEID_HUD_ANDROID*/				SPRITEID_HUD_ANDROID_640x1136,
/*SPRITEID_HUD_DAILY_REWARD*/				SPRITEID_HUD_DAILY_REWARD_640x1136,
/*SPRITEID_HUD_TOPEBOX_ADS*/				SPRITEID_HUD_TOPEBOX_ADS_640x1136,
};
#endif //PLATFORM
