/* textual representation of constants found in the scripts */

/*	names_for_the_"PERSON"_command
	note_that_all_typos_and/or_inconsistencies_are_transcribed_as-is_from_the_US_releases
	TODO:_fix_these_names, maybe_add_localization? */

/* zeroes are required because apollo introduces 5 additional slots */
char *speakers[4][60] = {
	{ /* names from phoenix 1 */
	"SPEAKER_EMPTY_00",		"SPEAKER_???_01",	"SPEAKER_PHOENIX_02",	"SPEAKER_POLICE",	"SPEAKER_MAYA",
	"SPEAKER_MIA_05",		"SPEAKER_ALARMCLOCK",	"SPEAKER_MIA_07",	"SPEAKER_JUDGE",	"SPEAKER_EDGEWORTH_09",
	"SPEAKER_PAYNE",		"SPEAKER_INTERPHONE",	"SPEAKER_GROSSBERG",	"SPEAKER_CELLULAR",	"SPEAKER_PUBLIC",
	"SPEAKER_???_15",		"SPEAKER_PENNY",	"SPEAKER_OLDBAG",	"SPEAKER_MANELLA",	"SPEAKER_TV",
	"SPEAKER_GUMSHOE",		"SPEAKER_WHITE",	"SPEAKER_APRIL",	"SPEAKER_BELLBOY",	"SPEAKER_VASQUEZ",
	"SPEAKER_BUTZ_25",		"SPEAKER_SAHWIT",	"SPEAKER_WILL",		"SPEAKER_CODY",		"SPEAKER_PHOENIX_29",
	"SPEAKER_EDGEWORTH_30",		"SPEAKER_LOTTA",	"SPEAKER_YOGI",		"SPEAKER_KARMA",	"SPEAKER_PARROT",
	"SPEAKER_MISSILE",		"SPEAKER_UNCLE",	"SPEAKER_GUARD_37",	"SPEAKER_TEACHER",	"SPEAKER_EDGEWORTH_39",
	"SPEAKER_BUTZ_40",		"SPEAKER_EMPTY_41",	"SPEAKER_EMPTY_42",	"SPEAKER_CHIEF",	"SPEAKER_EMA",
	"SPEAKER_LANA",			"SPEAKER_MARSHALL",	"SPEAKER_MEEKINS",	"SPEAKER_GOODMAN",	"SPEAKER_GANT",
	"SPEAKER_ANGEL",		"SPEAKER_GUARD_51",	"SPEAKER_OFFICER",	"SPEAKER_PATROLMAN",	"SPEAKER_EMPTY_54",
	0, 0, 0, 0, 0
	},
	{ /* names from phoenix 2 */
	"SPEAKER_EMPTY_00",		"SPEAKER_???_01",	"SPEAKER_???_02",		"SPEAKER_PHOENIX",		"SPEAKER_MAYA",
	"SPEAKER_MIA_05",		"SPEAKER_MIA_06",	"SPEAKER_JUDGE",		"SPEAKER_EDGEWORTH",		"SPEAKER_PAYNE",
	"SPEAKER_GUMSHOE",		"SPEAKER_PHONE",	"SPEAKER_PUBLIC",		"SPEAKER_BAILIFF",		"SPEAKER_VON_KARMA_14",
	"SPEAKER_VON_KARMA_15",		"SPEAKER_WELLINGTON",	"SPEAKER_BYRDE_17",		"SPEAKER_BYRDE_18",		"SPEAKER_INI",
	"SPEAKER_PEARL",		"SPEAKER_MORGAN",	"SPEAKER_HOTTI",		"SPEAKER_GREY",			"SPEAKER_LOTTA",
	"SPEAKER_MIA_25",		"SPEAKER_NURSE",	"SPEAKER_MIMI",			"SPEAKER_REGINA",		"SPEAKER_MAX",
	"SPEAKER_BEN",			"SPEAKER_MOE",		"SPEAKER_ACRO",			"SPEAKER_TRILO",		"SPEAKER_MONEY",
	"SPEAKER_ENGARDE",		"SPEAKER_ANDREWS",	"SPEAKER_DE_KILLER_37",		"SPEAKER_DE_KILLER_38",		"SPEAKER_OLDBAG",
	"SPEAKER_POWERS",		"SPEAKER_TV",		"SPEAKER_EMPTY_42",		"SPEAKER_EMPTY_43",		"SPEAKER_EMPTY_44",
	"SPEAKER_CELESTE",		"SPEAKER_RUSSELL",	"SPEAKER_BELLBOY",		"SPEAKER_PA_NOTICE",		"SPEAKER_RAY_GUN",
	"SPEAKER_CHIEF",		"SPEAKER_DETECTIVE",	"SPEAKER_JAILER",		"SPEAKER_SHOE",			"SPEAKER_DOE",
	0, 0, 0, 0, 0
	},
	{ /* names from phoenix 3 */
	"SPEAKER_PHOENIX",	"SPEAKER_MIA",		"SPEAKER_GROSSBERG",	"SPEAKER_PAYNE",	"SPEAKER_JUDGE",
	"SPEAKER_DAHLIA",	"SPEAKER_???",		"SPEAKER_SWALLOW",	"SPEAKER_JUDGE",	"SPEAKER_RON",
	"SPEAKER_DESIRÉE",	"SPEAKER_DEMASQUE",	"SPEAKER_ANDREWS",	"SPEAKER_GODOT",	"SPEAKER_ATMEY",
	"SPEAKER_PEARL",	"SPEAKER_ANNOUNCER",	"SPEAKER_PHONE",	"SPEAKER_GUMSHOE",	"SPEAKER_BUTZ",
	"SPEAKER_MAYA",		"SPEAKER_BAILIFF",	"SPEAKER_OFFICER",	"SPEAKER_BUZZER",	"SPEAKER_ARMSTRONG",
	"SPEAKER_BASIL",	"SPEAKER_VIOLA",	"SPEAKER_TIGRE",	"SPEAKER_BYRDE",	"SPEAKER_KUDO",
	"SPEAKER_CHIEF",	"SPEAKER_OLD_MAN",	"SPEAKER_DETECTIVE",	"SPEAKER_THE_TIGER",	"SPEAKER_PROGRAMMER",
	"SPEAKER_VALERIE",	"SPEAKER_FAWLES",	"SPEAKER_EDGEWORTH",	"SPEAKER_MELISSA",	"SPEAKER_ARMANDO",
	"SPEAKER_BIKINI",	"SPEAKER_IRIS",		"SPEAKER_LAURISE",	"SPEAKER_ELISE",	"SPEAKER_VON_KARMA",
	"SPEAKER_MORGAN",	"SPEAKER_MISTY",	"SPEAKER_OLDBAG",	"SPEAKER_RAY_GUN",	"SPEAKER_BLANK_49",
	"SPEAKER_VIOLETTA",	"SPEAKER_BLANK_51",	"SPEAKER_BLANK_52",	"SPEAKER_BLANK_53",	"SPEAKER_BLANK_54",
	0, 0, 0, 0, 0
	},
	{ /* names from apollo */
	"SPEAKER_EMPTY_00",		"SPEAKER_EMPTY_01",		"SPEAKER_???_02",		"SPEAKER_???_03",		"SPEAKER_APOLLO",
	"SPEAKER_TRUCY_05",		"SPEAKER_KRISTOPH_06",		"SPEAKER_PHOENIX",		"SPEAKER_KRISTOPH_08",		"SPEAKER_EMA",
	"SPEAKER_JUDGE",		"SPEAKER_PAYNE",		"SPEAKER_OLGA",			"SPEAKER_ALITA",		"SPEAKER_WOCKY",
	"SPEAKER_GUY",			"SPEAKER_PLUM",			"SPEAKER_BIG_WINS",		"SPEAKER_HICKFIELD",		"SPEAKER_VERA_19",
	"SPEAKER_BRUSHEL",		"SPEAKER_PHOENIX",		"SPEAKER_GUMSHOE",		"SPEAKER_KRISTOPH_23",		"SPEAKER_KRISTOPH_24",
	"SPEAKER_VALANT",		"SPEAKER_DREW",			"SPEAKER_TRUCY_27",		"SPEAKER_VERA_28",		"SPEAKER_MEEKINS",
	"SPEAKER_STICKLER",		"SPEAKER_ZAK",			"SPEAKER_SMITH",		"SPEAKER_VALANT",		"SPEAKER_LAMIROIR",
	"SPEAKER_MACHI",		"SPEAKER_LE_TOUSE",		"SPEAKER_DARYAN",		"SPEAKER_PLACEHOLDER_38",	"SPEAKER_PLACEHOLDER_39",
	"SPEAKER_PLACEHOLDER_40",	"SPEAKER_PLACEHOLDER_41",	"SPEAKER_PLACEHOLDER_42",	"SPEAKER_BAILIFF",		"SPEAKER_OFFICER",
	"SPEAKER_ANNOUNCER",		"SPEAKER_MR._HAT",		"SPEAKER_MERAKTIS",		"SPEAKER_ENIGMAR",		"SPEAKER_PUBLIC",
	"SPEAKER_MAGNIFI",		"SPEAKER_NO._6",		"SPEAKER_GUARD",		"SPEAKER_KLAVIER",		"SPEAKER_THALASSA",
	"SPEAKER_STAFF",		"SPEAKER_OLD_LADY",		"SPEAKER_KRISTOPH_57",		"SPEAKER_TV",			"SPEAKER_BLANK_59"
	}
	
};

char *colors[4] = {
	"COLOR_WHITE", "COLOR_RED", "COLOR_BLUE", "COLOR_GREEN"
};

char *shiftdirection[4] = {
	"SHIFT_LEFT", "SHIFT_RIGHT", "SHIFT_UP", "SHIFT_DOWN"
};

char *cmd35flaghint[2] = {
	"SKIP_IF_FLAG_SET", "SKIP_IF_FLAG_UNSET"
};

char *cmd35jumphint[2] = {
	"JUMP_THIS_SECTION", "JUMP_OTHER_SECTION"
};

/* multilang backgrounds share their number! */
/* TODO: add support for multiple games */
/* 4096 is the size per game due to BGSPC, this may change due to various weird leftover commands though */
char *backgrounds[4][4096] = {
	{
		/* phoenix 1 */
		"BG000_MIAS_OFFICE_NIGHT",
		"BG001_MIAS_OFFICE_DAY",
		"BG002_DEFENDANT_LOBBY",
		"BG003_COURT_DEFENSE",
		"BG004_COURT_PROSECUTION",
		"BG005_COURT_STAND",
		"BG006_COURT_FULL",
		"BG007_COURT_DEFENSE_PARTNER",
		"BG008_COURT_JUDGE",
		"BG009_MIAS_OFFICE_ENTRANCE",
		"BG010_DEAD_MIA_WITH_MAYA",
		"BG011_GLOBAL_STUDIOS_PATH", 
		"BG012_STAFF_AREA",
		"BG013_MIA_DODGING_RIGHT",
		"BG014_MIA_DODGING_LEFT",
		"BG015_MAP_OF_MIAS_OFFICE",
		"BG016_APRIL_AND_BELLBOY",
		"BG017_MIAS_OFFICE_BODY",
		"BG018_PHOENIX_WITH_MAYA_AND_MIA",
		"BG019_STUDIO_2_INSIDE",
		"BG020_APRIL_ON_PHONE",
		"BG021_REDD_ATTACKING", 
		"BG022_MIA_BEING_ATTACKED",
		"BG023_THINKER_AS_WEAPON",
		"BG024_DRESSING_ROOM", 
		"BG025_GLOBAL_STUDIOS_MAIN_GATE", 
		"BG026_STUDIO_1",
		"BG027_GAVEL_SLAM_2",
		"BG028_GAVEL_SLAM_3",
		"BG029_MAP_OF_MIAS_OFFICE_WITH_FOV",
		"BG030_DETENTION_CENTER",
		"BG031_BLUECORP_CEO_OFFICE",
		"BG032_GATEWATER_APRILS_ROOM",
		"BG033_THINKER_WITH_BLOOD",
		"BG034_CINDY_DEAD_ON_FLOOR",
		"BG035_SAHWIT_AFTER_MURDER",
		"BG036_SAHWIT_CLUELESS",
		"BG037_SAHWIT_THINKING",
		"BG038_SAHWIT_HAVING_IDEA",
		"BG039_GROSSBERGS_OFFICE",
		"BG040_GROSSBERGS_OFFICE_NO_PAINTING",
		"BG041_SAHWIT_CAUGHT",
		"BG042_SAHWIT_SEEING_LARRY",
		"BG043_SAHWIT_FINDING_CINDY",
		"BG044_STUDIO_2_ENTRANCE", 
		0, 0, 
		"BG047_GAVEL_SLAM_1",
		0, 
		"BG049_STEEL_SAMURAI_BROKEN_LEG",
		"BG050_FINDING_DEAD_HAMMER",
		"BG051_HAMMER_STEALING_COSTUME",
		"BG052_VASQUEZ_AFTER_MURDER", 
		"BG053_STAFF_AT_LUNCH", 
		"BG054_HAMMER_AND_VASQUEZ_AT_STUDIO_2", 
		"BG055_CODY_SEES_SAMURAI",
		"BG056_PHOTO_OF_SAMURAI_AT_STUDIO_2", 
		"BG057_INCIDENT_AT_STUDIO_2_5_YEARS_AGO", 
		"BG058_STUDIO_2_INSIDE_WITH_MIB", 
		"BG059_PINK_PRINCESS_POSTER", 
		"BG060_MONKEY_HEAD_ON_STUDIO_PATH",
		"BG061_MAP_OF_GLOBAL_STUDIOS", 
		"BG062_ACTORS_TRAINING", 
		"BG063_STEEL_SAMURAI_POSTER", 
		0, 0,
		"BG066_CLOSEUP_SPEEDLINES",
		0, 0,
		"BG069_STEEL_SAMURAI_MOON",
		"BG070_GOURD_LAKE_ENTRANCE",
		"BG071_GOURD_LAKE_PARK_DECORATED",
		"BG072_GOURD_LAKE_PARK",
		"BG073_GOURD_LAKE_FOREST",
		"BG074_STEEL_SAMURAI_MOON_GRASS",
		0, 
		"BG076_STEEL_SAMURAI_IN_ACTION",
		"BG077_GOURD_LAKE_BOAT_RENTAL",
		"BG078_GOURD_LAKE_BOAT_RENTAL_INSIDE",
		"BG079_POLICE_STATION_INSIDE", 
		"BG080_POLICE_STATION_EVIDENCE_ROOM",
		"BG081_STEEL_SAMURAI_CROSSING_SWORDS",
		0, 0, 0,
		"BG085_TRAIN_STATION",
		"BG086_MAP_OF_GOURD_LAKE",
		"BG087_LOTTAS_PHOTO_ENLARGED",
		"BG088_INCIDENT_FROM_DL-6",
		"BG089_NEWSPAPER_ABOUT_GOURDY",
		"BG090_LARRY_WITH_BALLOON",
		"BG091_BALLOON_HITTING_LAKE",
		"BG092_LARRY_SEARCHING_FOR_BALLOON",
		"BG093_SCHOOL_COURT",
		"BG094_LOTTAS_PHOTO",
		"BG095_SCHOOL_PHOENIX",
		"BG096_SCHOOL_EDGEWORTH",
		"BG097_SCHOOL_LARRY",
		"BG098_YANNI_ATTACKING_VICTIM",
		"BG099_YANNI_AND_EDGEWORTH_ON_BOAT",
		"BG100_EDGEWORTH_INSIDE_ELEVATOR",
		"BG101_EDGEWORTH_THROWING_GUN",
		"BG102_VON_KARMA_BEING_SHOT",
		"BG103_VON_KARMA_ENTERING_ELEVATOR",
		"BG104_MAYA_LEAVING_AT_STATION",
		"BG105_WINNING_PARTY_AFTER_CREDITS",
		"BG106_BOAT_WITH_SINGLE_PASSENGER",
		"BG107_MAN_WITH_GUN",
		"BG108_EDGEWORTH_WITH_GUN",
		"BG109_CAPCOM_LOGO_BLACK_AND_WHITE",
		0, 0, 0,
		"BG113_POLICE_STATION_ENTRANCE",
		"BG114_EDGEWORTHS_OFFICE",
		"BG115_PARKING_GARAGE",
		"BG116_GANTS_OFFICE",
		"BG117_EVIDENCE_LOCKER_ROOM",
		"BG118_POLICE_STATION_SECURITY_ROOM",
		"BG119_MAP_OF_PARKING_GARAGE",
		"BG120_LANA_ATTACKING_GOODMAN",
		"BG121_LANA_IN_GARAGE",
		"BG122_ANGEL_WITH_LANA",
		"BG123_EDGEWORTHS_CAR_TRUNK",
		"BG124_GOODMANS_NOTE",
		"BG125_KEY_CARD_LOG_BLANK",
		"BG126_MEEKINS_WITH_GOODMAN_AT_LOCKERS",
		0,
		"BG128_BLOODY_PRINT_ON_LOCKER",
		"BG129_LUMINOL_PRINT_ON_LOCKER",
		"BG130_HAND_PRINT_ON_CLOTH",
		0, 0, 0, 0, 0, 0, 0, 0, 0,
		"BG140_CONTRADICTION_OF_THE_LAW",
		0,
		"BG142_VASE_CLOSEUP_OF_WRITING",
		0,
		"BG144_EVIDENCE_LOCKERS_CLOSEUP",
		"BG145_EVIDENCE_LOCKERS_CLOSEUP_OF_PRINT",
		"BG146_EVIDENCE_LOCKERS_LEFT_LUMINOL_0",
		"BG147_EVIDENCE_LOCKERS_LEFT_LUMINOL_1",
		0, 0,
		0, 0, 0, 
		"BG153_VASE_BREAK_1",
		"BG154_VASE_BREAK_2",
		"BG155_VASE_BREAK_3",
		"BG156_BACKLIT_BADGER",
		"BG157_PARKING_GARAGE_BACKGROUND",
		0,
		"BG159_MAP_OF_EVIDENCE_LOCKER_ROOM",
		"BG160_VASE_CLOSEUP_WITH_BLOODY_WRITING_COMPLETE",
		"BG161_KEY_CARD_LOG_2",
		"BG162_KEY_CARD_LOG_3",
		0, 0, 0, 0,
		"BG167_KURAIN_VILLAGE",
		0, 0,
		//170
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		//180
		0,
		"BG181_STATUE_IN_GANTS_OFFICE",
		"BG182_LANA_AND_GANT",
		"BG183_SL-9_MURDERER_DARKE",
		"BG184_SL-9_INVESTIGATION_GROUP",
		"BG185_SL-9_GANT_LANA_NEIL_WITH_TROPHY",
		"BG186_SL-9_MURDER_SCENE",
		"BG187_SL-9_LANA_WITH_UNCONCIOUS_EMA",
		"BG188_SL-9_DEAD_NEIL_WITH_MURDERER",
		"BG189_SL-9_EMAS_DRAWING",
		"BG190_SL-9_EMAS_DRAWING_PEOPLE",
		"BG191_SL-9_EMAS_DRAWING_VASE",
		0, 0, 0, 0, 0,
		"BG197_VASE_WITH_BLOODY_WRITING",
		0,
		"BG199_NEIL_IMPALED_ON_STATUE_PHOTO",
		"BG200_JAPANESE_KEYPAD", // matching language is just patched on?
		"BG201_EVIDENCE_LOCKERS_UNTOUCHED",
		"BG202_RED_BADGER_HEAD",
		"BG203_LANA_HUGGING_EMA",
		0, 0, 0, 0, 0, 0,
		//210
		0,
		0, //211 this is gants office again?
		"BG212_VASE_CLOSEUP_WITH_MISSING_PIECE",
		0, 0, 0, 0, 0, 0, 0,
		//220
		0,
		"BG221_VASE_ANGLED_AS_BADGER",
		"BG222_KEYPAD_DISPLAY",
		"BG223_SAFE_AT_GANTS_OFFICE_0",
		"BG224_SAFE_AT_GANTS_OFFICE_1",
		"BG225_SAFE_AT_GANTS_OFFICE_2",
		"BG226_VASE_MISSING_PIECE_COMPLETE_WRITING",
		0,
		"BG228_CITY_IN_INTRO",
		0,
		"BG230_BACKGROUND_FOR_DANCING_BADGER",
		0,
		"BG232_KING_OF_PROSECUTORS_TROPHY",
		0,
		"BG234_EMAS_DRAWING_VERTICAL",
		"BG235_POLICE_STATION_ENTRANCE_NO_BADGER",
		"BG236_NEIL_FLYING_TOWARDS_STATUE_1",
		"BG237_NEIL_FLYING_TOWARDS_STATUE_2",
		"BG238_NEIL_FLYING_TOWARDS_STATUE_3",
		0,
		"BG240_GOODMAN_IN_CAR_TRUNK",
		0, 0, 0, 0, 0, 0, 0, 0, 0,
		//250
		0, 0, 0, 0, 0,
		0, //255
		0, 0, 0, 0,
		
		[4095] = "BGSPC_BLACK_SCREEN"
		// 32884 seems to be gants office yet again?
	},
	{
		/* phoenix 2 to be done */
		0,
		0,
		"BG002_CAPCOM_LOGO_GRAYSCALE",
		"BG003_DEFENSE_LOBBY",
		"BG004_COURT_DEFENSE",
		"BG005_COURT_PROSECUTION",
		"BG006_COURT_STAND",
		"BG007_COURT_JUDGE",
		"BG008_COURT_DEFENSE_PARTNER",
		"BG009_COURTROOM_FULL_VIEW",
		0,
		"BG011_GAVEL_SLAM",
		0,
		0,
		0,
		0,
		"BG016_SPEEDLINES",
		"BG017_DETENTION_CENTER",
		"BG018_PHOENIX_OFFICE",
		"BG019_POLICE_HQ_INSIDE",
		0,
		"BG021_PHOTO_OF_DEAD_DUSTIN",
		"BG022_PHOTO_OF_MESSAGE_IN_SAND",
		"BG023_MAGGEY_WITH_VICTIM",
		"BG024_MAGGEY_SEES_VICTIM_AND_CULPRIT",
		0,
		"BG026_PHOENIX_NIGHTMARE",
		"BG027_CULPRIT_AFTER_HITTING_PHOENIX",
		"BG028_KURAIN",
		"BG029_FEY_MANOR_MAIN_HALL",
		"BG030_FEY_MANOR_SUMMONING_ROOM",
		"BG031_FEY_MANOR_WINDING_WAY",
		"BG032_FEY_MANOR_SPARE_ROOM",
		0,
		"BG034_HOTTI_CLINIC",
		"BG035_CAR_DRIVING",
		"BG036_CAR_ACCIDENT",
		"BG037_PHOENIX_WITH_MAYA_IN_DETENTION",
		0,
		0,
		0,
		0,
		"BG042_MAP_OF_SUMMONING_ROOM",
		"BG043_MAP_OF_FEY_MANOR",
		"BG044_CAR_LIGHTS_RIGHT",
		"BG045_DEAD_MIA_FROM_PHOENIX_1",
		"BG046_MAYA_WITH_VICTIM",
		"BG047_NURSE_AT_HOSPITAL",
		"BG048_MAYAS_COSTUME",
		"BG049_PHOTO_OF_CULPRIT_BACK",
		"BG050_PHOTO_OF_CULPRIT_FRONT",
		"BG051_PHOTO_OF_MIA_SUMMONED_BY_MAYA",
		"BG052_PEARL_FIXING_URN",
		"BG053_MORGAN_WITH_PHOTO",
		"BG054_CULPRIT_AND_INI",
		"BG055_INI_WITH_KNOCKED_OUT_MAYA",
		"BG056_BOX_BEHIND_SCREEN",
		"BG057_VICTIM_WITH_GUN",
		"BG058_MAYA_AND_MIA_SUMMONED_BY_PEARL",
		"BG059_CIRCUS_TENT",
		"BG060_CIRCUS_CAFETERIA",
		"BG061_MR._BERRIES_OFFICE",
		0,
		"BG063_CIRCUS_ENTRANCE_NIGHT",
		"BG064_CIRCUS_COURTYARD",
		"BG065_MOES_ROOM",
		"BG066_ACROS_ROOM",
		0,
		0,
		"BG069_CIRCUS_FULL_VIEW",
		"BG070_MAX_GALACTICA_INTRO",
		0,
		"BG072_MAX_GALACTICA_POSTER",
		"BG073_PHOTO_OF_MAX_WITH_AWARD",
		"BG074_MAX_NEGOTIATING_WITH_VICTIM",
		"BG075_MAP_OF_CIRCUS",
		"BG076_PHOTO_OF_VICTIM_OVER_BOX",
		"BG077_VICTIM_SLUMPED_OVER_BOX",
		"BG078_VICTIM_LIFTING_BOX",
		"BG079_VICTIM_HIT_WITH_STATUE",
		"BG080_LION_WITH_ACROS_BROTHER",
		"BG081_VICTIM_SEEN_BY_TRILO",
		"BG082_ACRO_SEEING_MAX",
		"BG083_MAX_STATUE",
		"BG084_ACRO_DROPPING_STATUE",
		"BG085_MAX_GRABBING_BOTTLE",
		"BG086_ACRO_LOWER_HALF_AT_COURT",
		"BG087_EDGEWORTH_AT_AIRPORT",
		"BG088_GATEWATER_HOTEL_BALLROOM",
		"BG089_GATEWATER_HOTEL_HALLWAY",
		"BG090_GATEWATER_HOTEL_ENGARDES_ROOM",
		"BG091_GATEWATER_HOTEL_CORRIDAS_ROOM",
		0,
		"BG093_GATEWATER_HOTEL_LOBBY",
		"BG094_ENGARDES_LIVING_ROOM",
		"BG095_SECRET_ROOM",
		"BG096_WINE_CELLAR",
		"BG097_CLOUDS",
		"BG098_JAMMIN_NINJA_POSTER",
		"BG099_AIRPORT",
		"BG100_PHOTO_OF_VICTIM",
		0,
		"BG102_PHOTO_OF_ANDREWS_IN_COSTUME",
		"BG103_NICKEL_SAMURAI_POSTER",
		"BG104_JUAN_AT_SUICIDE",
		"BG105_ANDREWS_DRESSING_UP_IN_COSTUME",
		"BG106_ANDREWS_WAKING_UP_MATT",
		"BG107_ENGARDE_WITH_CELESTE_BASE",
		"BG108_EDGEWORTH_WITH_GUN_FROM_PHOENIX_1",
		"BG109_ENGARDE_WITH_BUTLER",
		"BG110_FRANZISKA_ENTERING_COURT",
		"BG111_BUTLER_RECIEVING_BEAR",
		"BG112_PHOENIX_WITH_MAYA_AND_PEARL",
		"BG113_CALLING_CARD_WITH_DRAWING",
		"BG114_PHOENIX_LEAVING_BAD_END",
		"BG115_ANDREWS_FINDING_JUAN",
		"BG116_DE_KILLER_CALLING_CARD",
		"BG117_STEEL_SAMURAI_POSTER",
		0,
		"BG119_YOUNG_EDGEWORTH_FROM_PHOENIX_1",
		"BG120_HEROES_LINEUP",
		"BG121_NICKEL_SAMURAI_SPOTLIGHT",
		"BG122_NICKEL_SAMURAI_WITH_FAN",
		
		
		[4095] = "BGSPC_BLACK_SCREEN",
	},
	{
		/* phoenix 3 to be done */
		0
	},
	{
		/* apollo to be done */
		0
	}
};

char *musicfading[2] = {
	"FADE_OUT", "FADE_IN"
};

char *soundplay[2] = {
	"SOUND_START", "SOUND_STOP"
};

char *showside[2] = {
	"SHOW_LEFT", "SHOW_RIGHT"
};

char *testimonypress[2] = {
	"SHOWBOX", "HIDEBOX"
};

char *fademode[4] = {
	"FADE_NONE", "FADE_FROM_BLACK", "FADE_TO_BLACK", "FADE_FROM_WHITE", "FADE_TO_WHITE"
};

char *animationstate[2] = {
	"ANIM_START", "ANIM_STOP"
};

/* 1024 is a placeholder, change when all things are known */
char *sound_data[4][1024] = {
	{
		/* phoenix 1 */
		/* BEGIN BGM */
		"BGM000_DETENTION_CENTER",
		"BGM001_GUMSHOES_THEME",
		"BGM002_CORNERED",
		"BGM003_CORNERED_VARIATION",
		"BGM004_OBJECTION",
		"BGM005_LOGIC_AND_TRICK",
		"BGM006_MAYAS_THEME",
		"BGM007_ENDING",
		"BGM008_COURTROOM_LOBBY",
		"BGM009_UNUSED",
		"BGM010_QUESTIONING_MODERATO",
		"BGM011_QUESTIONING_ALLEGRO",
		"BGM012_INVESTIGATION_CORE",
		"BGM013_COURTROOM_OPENING",
		"BGM014_JINGLE_SURPRISE",
		"BGM015_JINGLE_EVIDENCE",
		"BGM016_JINGLE_SAVE",
		"BGM017_JINGLE_IDEA",
		"BGM018_SUSPENSE",
		"BGM019_TURNABOUT_SISTERS_BALLAD", 
		"BGM020_VICTORY",
		"BGM021_STEEL_SAMURAI_THEME",
		"BGM022_HAPPY_PEOPLE",
		"BGM023_INTRO_CASE_1",
		"BGM024_TELLING_THE_TRUTH",
		"BGM025_INVESTIGATION_OPENING",
		"BGM026_GROSSBERGS_THEME",
		"BGM027_RECOLLECTION_DL-6",
		"BGM028_RECOLLECTION_MAYA",
		"BGM029_RECOLLECTION_CLASS_TRIAL",
		"BGM030_RECOLLECTION_STUDIO",
		"BGM031_AMBIENT_BIRD_CHIRPS",
		"BGM032_JINGLE_WRONG_CHOICE",
		"BGM033_UNKNOWN",
		"BGM034_UNKNOWN",
		"BGM035_UNKNOWN",
		"BGM036_UNKNOWN",
		"BGM037_UNKNOWN",
		"BGM038_UNKNOWN",
		"BGM039_UNKNOWN",
		"BGM040_UNKNOWN",
		"BGM041_UNKNOWN",
		/* END BGM */
		/* BEGIN SE */
		"SE000_MENU_CHANGE",
		"SE001_MENU_CONFIRM",
		"SE002_MENU_CANCEL",
		"SE003_TEXT_BLIP_MALE",
		"SE004_TEXT_BLIP_FEMALE",
		"SE005_TEXT_ADVANCE",
		"SE006_TEXT_BLIP_TYPEWRITER_HIGH",
		"SE007_MENU_OPEN_SUBMENU",
		0,
		"SE009_DISPLAY_EVIDENCE",
		"SE00A_UNKNOWN",
		"SE00B_UNKNOWN",
		"SE00C_MENU_CHANGE_PAGE",
		"SE00D_VOICE_PHOENIX_TAKE_THAT_JP",
		"SE00E_VOICE_EDGEWORTH_OBJECTION_JP",
		"SE00F_VOICE_PAYNE_OBJECTION_JP",
		"SE010_GAVEL_SLAM",
		"SE011_GAVEL_SLAM_TRIPLE",
		"SE012_GAVEL_SLAM_HEXA",
		"SE013_COURTROOM_AUDIENCE_1",
		"SE014_COURTROOM_AUDIENCE_2",
		"SE015_COURTROOM_AUDIENCE_UPROAR",
		"SE016_CONFIRM_SAVE",
		"SE017_VOICE_VON_KARMA_OBJECTION_JP",
		"SE018_PHOTO_SNAPSHOT",
		"SE019_IMPACT",
		"SE01A_TEXT_TYPEWRITER_LOW",
		"SE01B_CRASH",
		"SE01C_DESK_HIT",
		"SE01D_VOICE_PHOENIX_HOLD_IT_JP",
		"SE01E_EXCLAMATION",
		"SE01F_POLICE_SIREN",
		"SE020_DOOR_OPEN_IMPACT",
		"SE021_COLLAPSE_IMPACT",
		"SE022_LOST_A_TRY",
		"SE023_TYPEWRITER_LOW",
		"SE024_CRITICAL_HIT",
		"SE025_GUNSHOT_1",
		"SE026_VERBAL_HIT",
		"SE027_VOICE_PHOENIX_OBJECTION_JP",
		"SE028_CRASH_INTO_WATER",
		"SE029_BEGIN_QUESTIONING",
		"SE02A_TEXT_TYPEWRITER_LOW",
		"SE02B_TEXT_TYPEWRITER_HIGH",
		"SE02C_GAME_OVER",
		"SE02D_UNEXPECTED_TURN_OF_EVENTS",
		"SE02E_UNKNOWN",
		"SE02F_UNKNOWN",
		"SE030_PHONE_RING",
		"SE031_PHONE_PICKUP",
		"SE032_PHONE_END_OF_RECORDING",
		"SE033_CAMERA_SOUND_ZOOM_IN",
		"SE034_DOG_BARK",
		"SE035_VON_KARMA_SNAP",
		"SE036_JAPANESE_WOOD_SOUND",
		"SE037_UNKNOWN_(EARTHQUAKE?)",
		"SE038_JAPANESE_HIT",
		"SE039_STICK_SNAP",
		"SE03A_ELECTRO_SHOCK",
		"SE03B_FIRE_ALARM",
		"SE03C_COURTROOM_AUDIENCE_VICTORY",
		"SE03D_UNKNOWN",
		"SE03E_REDD_BLING_SPARKLES",
		"SE03F_CRASH_THROUGH_DOOR",
		0,
		"SE041_PHONE_RINGTONE_STEEL_SAMURAI",
		0,
		"SE043_UNKNOWN",
		
		[121] = "SE04F_SWOOSH",
		"SE050_SHOCKING_TURN_OF_EVENTS",
		
		[157] = "SE073_STOMACH_GRUMBLE",
		
		/* this seems to be a thing */
		[256] = "BGM-SP_RESUMEPLAYING",
		
		[380] = "BGM150_EMAS_THEME",
		"BGM151_MARSHALLS_THEME",
		"BGM152_RECOLLECTION_SL-9",
		"BGM153_GANTS_THEME",
		"BGM154_INTRO_CASE_5",
		"BGM155_ENDING_CASE_5",
		"BGM156_BLUE_BADGERS_THEME",
		
		[400] = "SE0B0_VOICE_PHOENIX_OBJECTION_EN",
		"SE0B1_VOICE_PHOENIX_HOLD_IT_EN",
		"SE0B2_VOICE_PAYNE_OBJECTION_EN",
		"SE0B3_VOICE_EDGEWORTH_OBJECTION_EN",
		"SE0B4_VOICE_VON_KARMA_OBJECTION_EN",
		"SE0B5_VOICE_PHOENIX_TAKE_THAT_EN",
		"SE0B6_COURTROOM_AUDIENCE_3",
		"SE0B7_SLAP",
		"SE0B8_GUNSHOT_2",
		"SE0B9_THUNDER",
		"SE0BA_METAL_CLANG",
		"SE0BB_ORGAN",
		"SE0BC_LOCK_OPEN_LIGHTSWITCH",
		"SE0BD_ELECTRONIC_INTERACTION",
		"SE0BE_ELECTRONIC_CONFIRMATION",
		"SE0BF_ELECTRONIC_ENTRY",
		"SE0C0_FINGERPRINT_MATCH",
		"SE0C1_ELECTROMECHANIC_ENTRY",
		"SE0C2_MEEKINS_LOUDSPEAKER",
		"SE0C3_UNKNOWN",
		"SE0C4_FINGERPRINT_DUSTING",
		"SE0C5_OPEN",
		"SE0C6_FINGERPRINT_CHECKING",
		"SE0C7_FINGERPRINT_POINT",
		"SE0C8_VIDEOPLAYER_PLAYPAUSE",
		"SE0C9_VIDEOPLAYER_SEEK",
		"SE0CA_VIDEOPLAYER_STEP_1",
		"SE0CB_VIDEOPLAYER_STEP_2",
		"SE0CC_VASE_PUZZLE_MATCH_1",
		"SE0CD_VASE_PUZZLE_MATCH_2",
		"SE0CE_SAFE_PANEL_SOUND_1",
		"SE0CF_SAFE_PANEL_SOUND_2",
		"SE0D0_SAFE_PANEL_SOUND_3",
		"SE0D1_SAFE_PANEL_SOUND_4",
		"SE0D2_SAFE_PANEL_SOUND_5",
		"SE0D3_SAFE_PANEL_SOUND_6",
		"SE0D4_CASE_5_INTRO_WINDOW_SWOOSH",
		"SE0D5_CASE_5_INTRO_RAIN_1",
		"SE0D6_CASE_5_INTRO_THUNDER_1",
		0,
		"SE0D8_CASE_5_INTRO_LIGHTNING_1",
		"SE0D9_CASE_5_INTRO_LIGHTNING_2",
		"SE0DA_CASE_5_INTRO_LIGHTNING_3",
		"SE0DB_CASE_5_INTRO_THUNDER_2",
		"SE0DC_CASE_5_INTRO_RAIN_2",
		"SE0DD_CASE_5_INTRO_THUNDER_3",
		"SE0DE_CASE_5_INTRO_SWING",
		"SE0DF_CASE_5_INTRO_FLYING_OBJECT",
		"SE0E0_CASE_5_INTRO_SHATTER",
		"SE0E1_CASE_5_INTRO_SHOCK",
		"SE0E2_CASE_5_INTRO_THUNDER_4",
		"SE0E3_UNKNOWN",
		"SE0E5_UNKNOWN",
		"SE0E4_GUNSHOT_3",
		"SE0E6_BOTTLE_OPEN",
		"SE0E7_GAVEL_SLAM_2",
		"SE0E8_MEEKINS_LOUDSPEAKER_SQUEAK",
		0,
		"SE0EA_VOICE_PHOENIX_OBJECTION_FR",
		"SE0EB_VOICE_PHOENIX_HOLD_IT_FR",
		"SE0EC_VOICE_PAYNE_OBJECTION_FR",
		"SE0ED_VOICE_EDGEWORTH_OBJECTION_FR",
		"SE0EE_VOICE_VON_KARMA_OBJECTION_FR",
		"SE0EF_VOICE_PHOENIX_TAKE_THAT_FR",
		"SE0F0_VOICE_PHOENIX_OBJECTION_IT",
		"SE0F1_VOICE_PHOENIX_HOLD_IT_IT",
		"SE0F2_VOICE_PHOENIX_TAKE_THAT_IT",
		"SE0F3_VOICE_PAYNE_OBJECTION_IT",
		"SE0F4_VOICE_EDGEWORTH_OBJECTION_IT",
		"SE0F5_VOICE_VON_KARMA_OBJECTION_IT",
		"SE0F6_VOICE_PHOENIX_OBJECTION_DE",
		"SE0F7_VOICE_PHOENIX_HOLD_IT_DE",
		"SE0F8_VOICE_PHOENIX_TAKE_THAT_DE",
		"SE0F9_VOICE_PAYNE_OBJECTION_DE",
		"SE0FA_VOICE_EDGEWORTH_OBJECTION_DE",
		"SE0FB_VOICE_VON_KARMA_OBJECTION_DE",
		"SE0FC_VOICE_PHOENIX_OBJECTION_ES",
		"SE0FD_VOICE_PHOENIX_HOLD_IT_ES",
		"SE0FE_VOICE_PHOENIX_TAKE_THAT_ES",
		"SE0FF_VOICE_PAYNE_OBJECTION_ES",
		"SE100_VOICE_EDGEWORTH_OBJECTION_ES",
		"SE101_VOICE_VON_KARMA_OBJECTION_ES",
		/*_this_table_lacks_various_clips_from_the_euro_version
		such_as_IT, ES_and_DE_voiceclips */
	},
	{
		/* phoenix 2 */
		/* everything up to BGM041 is from phoenix 1 */
		
		[1] = "BGM001_GUMSHOES_THEME",
		"BGM002_CORNERED_1",
		
		[6] = "BGM006_MAYAS_THEME",
		"BGM007_ENDING",
		0,
		"BGM009_UNUSED",
		0, 0,
		"BGM012_INVESTIGATION_CORE_1",
		0,
		"BGM014_JINGLE_SURPRISE",
		"BGM015_JINGLE_EVIDENCE",
		"BGM016_JINGLE_SAVE",
		"BGM017_JINGLE_IDEA",
		"BGM018_SUSPENSE_1",
		"BGM019_TURNABOUT_SISTERS_BALLAD_1",
		0,
		"BGM021_STEEL_SAMURAI_THEME",
		"BGM022_HAPPY_PEOPLE",
		"BGM023_INTRO_CASE_1",
		0,
		"BGM025_INVESTIGATION_OPENING_1",
		"BGM026_GROSSBERGS_THEME",
		"BGM027_RECOLLECTION_DL-6",
		"BGM028_RECOLLECTION_MAYA",
		"BGM029_RECOLLECTION_CLASS_TRIAL",
		"BGM030_RECOLLECTION_STUDIO",
		"BGM031_AMBIENT_BIRD_CHIRPS",
		"BGM032_JINGLE_WRONG_CHOICE",
		"BGM033_UNKNOWN",
		"BGM034_UNKNOWN",
		"BGM035_UNKNOWN",
		"BGM036_UNKNOWN",
		"BGM037_UNKNOWN",
		"BGM038_UNKNOWN",
		"BGM039_UNKNOWN",
		"BGM040_UNKNOWN",
		"BGM041_UNKNOWN",
		
		
		
		"SE000_MENU_CHANGE",
		"SE001_MENU_CONFIRM",
		"SE002_MENU_CANCEL",
		"SE003_TEXT_BLIP_MALE",
		"SE004_TEXT_BLIP_FEMALE",
		"SE005_TEXT_ADVANCE",
		0,
		"SE007_MENU_OPEN_SUBMENU",
		0,
		"SE009_DISPLAY_EVIDENCE",
		"SE00A_UNKNOWN",
		0,
		"SE00C_MENU_CHANGE_PAGE",
		"SE00D_VOICE_PHOENIX_TAKE_THAT_JP",
		"SE00E_VOICE_EDGEWORTH_OBJECTION_JP",
		"SE00F_VOICE_PAYNE_OBJECTION_JP",
		"SE010_GAVEL_SLAM",
		"SE011_GAVEL_SLAM_TRIPLE",
		0,
		"SE013_COURTROOM_AUDIENCE_1",
		0,
		0,
		"SE016_CONFIRM_SAVE",
		0,
		0,
		"SE019_IMPACT",
		"SE01A_TEXT_TYPEWRITER_LOW",
		0,
		"SE01C_DESK_HIT",
		"SE01D_VOICE_PHOENIX_HOLD_IT_JP",
		"SE01E_EXCLAMATION",
		0,
		"SE020_DOOR_OPEN_IMPACT",
		"SE021_COLLAPSE_IMPACT",
		"SE022_LOST_A_TRY",
		0,
		"SE024_CRITICAL_HIT",
		"SE025_GUNSHOT_1",
		"SE026_VERBAL_HIT",
		"SE027_VOICE_PHOENIX_OBJECTION_JP",
		0,
		"SE029_BEGIN_QUESTIONING",
		0,
		0,
		"SE02C_GAME_OVER",
		"SE02D_UNEXPECTED_TURN_OF_EVENTS",
		0,
		0,
		0,
		0,
		0,
		"SE033_CAMERA_SOUND_ZOOM_IN",
		"SE034_DOG_BARK",
		"SE035_VON_KARMA_SNAP",
		"SE036_JAPANESE_WOOD_SOUND",
		"SE037_UNKNOWN_(EARTHQUAKE?)",
		"SE038_JAPANESE_HIT",
		"SE039_STICK_SNAP",
		"SE03A_ELECTRO_SHOCK",
		"SE03B_FIRE_ALARM",
		"SE03C_COURTROOM_AUDIENCE_VICTORY",
		"SE03D_UNKNOWN",
		"SE03E_REDD_BLING_SPARKLES",
		"SE03F_CRASH_THROUGH_DOOR",
		"SE040_PHONE_RINGTONE_WELLINGTON",
		"SE041_PHONE_RINGTONE_STEEL_SAMURAI",
		"SE042_SHORT_BEEP",
		"SE043_UNKNOWN",
		"SE044_UNKNOWN",
		"SE045_GAVEL_SLAM_REVERB",
		"SE046_WHIP",
		0,
		0,
		"SE049_PSYCHE_LOCK_SLAM",
		"SE04A_PSYCHE_LOCK_BREAK",
		"SE04B_CAR_CRASH",
		"SE04C_UNKNOWN_DOOR_OPEN",
		"SE04D_WOOD_DOOR_IMPACT",
		0,
		"SE04F_SWOOSH",
		"SE050_SHOCKING_TURN_OF_EVENTS",
		"SE051_LION_ROAR",
		"SE052_MONKEY_SCREECH",
		"SE053_SPOT_LIGHT_ON",
		"SE054_UNKNOWN_AHA",
		"SE055_WOOD_DOOR_BREAKDOWN",
		"SE056_PHYCHE_LOCK_CHAINS_1",
		"SE057_PHYCHE_LOCK_CHAINS_2",
		"SE058_PHYCHE_LOCK_CHAINS_3",
		"SE059_PHYCHE_LOCK_CHAINS_4",
		"SE05A_PHYCHE_LOCK_CHAINS_5",
		"SE05B_CAR_ENGINE",
		"SE05C_CAR_SWOOP_LEFTRIGHT",
		"SE05D_CAR_SWOOP_RIGHTLEFT",
		"SE05E_CAR_ENGINE_CRESCENDO",
		"SE05F_CIRCUS_DRUMROLL",
		"SE060_CIRCUS_DRUM",
		"SE061_UNKNOWN_CIRCUS_SE",
		"SE062_LOW_AUDIENCE_CHEERS",
		"SE063_HIGH_AUDIENCE_CHEERS_LONG",
		"SE064_CIRCUS_WHIP",
		"SE065_LONG_LION_ROAR",
		"SE066_HIGH_AUDIENCE_CHEERS_SHORT",
		"SE067_OLDBAG_LAZERBLASTER",
		"SE068_RADIO_TRANSMITTER_RINGTONE",
		"SE069_RADIO_TRANSMITTER_PICKUP",
		"SE06A_RADIO_TRANSMITTER_END",
		"SE06B_RADIO_TRANSMITTER_INTERFERENCE",
		"SE06C_VOICE_FRANZISKA_OBJECTION_JP",
		"SE06D_PHONE_CALLER_QUIT",
		"SE06E_FRANZISKAS_TRACKER?",
		"SE06F_UNKNOWN",
		"SE070_DOOR_UNLOCK",
		"SE071_CAT_MEOW",
		"SE072_LIFE_BAR_RESTORE",
		"SE073_STOMACH_GROWL",
		"SE074_PHONE_DIAL_1",
		"SE075_PHONE_DIAL_2",
		"SE076_PHONE_DIAL_3",
		"SE077_PHONE_DIAL_4",
		"SE078_PHONE_DIAL_5",
		"SE079_COURTROOM_AUDIENCE_2",
		"SE07A_COURTROOM_AUDIENCE_3",
		"SE07B_COURTROOM_AUDIENCE_FADE",
		"SE07C_COURTROOM_HEADLINE_IN",
		"SE07D_COURTROOM_HEADLINE_OUT",
		0,
		"SE07F_UNKNOWN_AHA?",
		"SE080_UNKNOWN_GROWL",
		"SE081_HIGH_AUDIENCE_CHEER_LOOP",
		"SE082_RADIO_DETECTOR_LOW",
		"SE083_PHONE_DIALLING",
		"SE084_RADIO_DETECTOR_MEDIUM",
		"SE085_UNKNOWN_SLAM",
		"SE086_PSYCHE_LOCK_BREAK_2?",
		
		[201] = "BGM051_INTRO_CASE_1_PART_1",
		"BGM052_INTRO_CASE_3_AND_4",
		"BGM053_STEEL_SAMURAIS_BALLAD",
		"BGM054_TURNABOUT_SISTERS_THEME_2",
		"BGM055	-_BERRY_BIG_CIRCUS",
		0,
		"BGM057_KURAIN_VILLAGE",
		"BGM058_DETENTION_CENTER",
		"BGM059_ECCENTRIC",
		0,
		"BGM061_SHELLY_DE_KILLER_THEME",
		"BGM062_RECOLLECTION_FEYS",
		"BGM063_RECOLLECTION_ANDREWS",
		"BGM064_INVESTIGATION_CORE_2",
		"BGM065_INVESTIGATION_OPENING_2",
		0,
		"BGM067_EDGEWORTHS_THEME",
		"BGM068_ANNOYING_PEOPLE_(MOE, OLDBAG)",
		"BGM069_COURTROOM_OPENING_2",
		"BGM070_OBJECTION_2",
		"BGM071_TRICK_AND_MAGIC",
		"BGM072_QUESTIONING_MODERATO_2",
		"BGM073_QUESTIONING_ALLEGRO_2",
		"BGM074_CORNERED_2",
		"BGM075_CORNERED_2_VARIATION",
		"BGM076_VICTORY_2",
		"BGM077_COURTROOM_LOBBY_2",
		"BGM078_TELLING_THE_TRUTH_2",
		0,
		"BGM080_JINGLE_SAVE_2",
		0,
		0,
		"BGM083_ENDING_2_PART_1",
		"BGM084_INTRO_CASE_1_PART_2",
		"BGM085_PSYCHE_LOCK_2",
		"BGM086_HOTLINE_OF_FATE",
		"BGM087_FRANZISKAS_THEME",
		"BGM088_INVESTIGATION_MIDDLE_2",
		"BGM089_EDGEWORTH_OUTRO",
		"BGM090_AUDIENCE_BGM?",
		"BGM091_FRANZISKAS_THEME_VARIATION",
		"BGM092_PEARLS_THEME",
		"BGM093_ENDING_2_PART_1_VARIATION",
		"BGM094_ENDING_2_PART_2",
		
		/* this seems to be a thing */
		[256] = "BGM-SP_RESUMEPLAYING",
		
		[400] = "SE0B0_VOICE_PHOENIX_OBJECTION_EN",
		"SE0B1_VOICE_PHOENIX_HOLD_IT_EN",
		"SE0B2_VOICE_PAYNE_OBJECTION_EN",
		"SE0B3_VOICE_EDGEWORTH_OBJECTION_EN",
		0,
		"SE0B5_VOICE_PHOENIX_TAKE_THAT_EN",
		"SE0B6_VOICE_FRANZISKA_OBJECTION_EN",
		0,
		"SE0B8_VOICE_FRANZISKA_OBJECTION_FR",
		0,
		0,
		0,
		"SE0BC_VOICE_FRANZISKA_OBJECTION_DE",
		0,
		0,
		"SE0BF_VOICE_FRANZISKA_OBJECTION_IT",
		0,
		0,
		0,
		"SE0C3_VOICE_FRANZISKA_OBJECTION_ES",
		"SE0EA_VOICE_PHOENIX_OBJECTION_FR",
		"SE0EB_VOICE_PHOENIX_HOLD_IT_FR",
		"SE0EF_VOICE_PHOENIX_TAKE_THAT_FR",
		"SE0EC_VOICE_PAYNE_OBJECTION_FR",
		"SE0ED_VOICE_EDGEWORTH_OBJECTION_FR",
		"SE0F0_VOICE_PHOENIX_OBJECTION_IT",
		"SE0F1_VOICE_PHOENIX_HOLD_IT_IT",
		"SE0F2_VOICE_PHOENIX_TAKE_THAT_IT",
		"SE0F3_VOICE_PAYNE_OBJECTION_IT",
		"SE0F4_VOICE_EDGEWORTH_OBJECTION_IT",
		"SE0F6_VOICE_PHOENIX_OBJECTION_DE",
		"SE0F7_VOICE_PHOENIX_HOLD_IT_DE",
		"SE0F8_VOICE_PHOENIX_TAKE_THAT_DE",
		"SE0F9_VOICE_PAYNE_OBJECTION_DE",
		"SE0FA_VOICE_EDGEWORTH_OBJECTION_DE",
		"SE0FC_VOICE_PHOENIX_OBJECTION_ES",
		"SE0FD_VOICE_PHOENIX_HOLD_IT_ES",
		"SE0FE_VOICE_PHOENIX_TAKE_THAT_ES",
		"SE0FF_VOICE_PAYNE_OBJECTION_ES",
		"SE100_VOICE_EDGEWORTH_OBJECTION_ES",
	},
	{
		/* phoenix 3 to be done */
		/* everything up to BGM041 is from phoenix 1 */
		
		[1] = "BGM001_GUMSHOES_THEME",
		"BGM002_CORNERED_1",
		"BGM003_CORNERED_1_VARIATION",
		
		[12] = "BGM012_INVESTIGATION_CORE_1",
		0,
		"BGM014_JINGLE_SURPRISE",
		"BGM015_JINGLE_EVIDENCE",
		0,
		0,
		"BGM018_SUSPENSE_1",
		"BGM019_TURNABOUT_SISTERS_BALLAD_1",
		0,
		0,
		"BGM022_HAPPY_PEOPLE",
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		"BGM031_AMBIENT_BIRD_CHIRPS_1",
		
		[42] = "SE000_MENU_CHANGE",
		"SE001_MENU_CONFIRM",
		"SE002_MENU_CANCEL",
		"SE003_TEXT_BLIP_MALE",
		"SE004_TEXT_BLIP_FEMALE",
		"SE005_TEXT_ADVANCE",
		0,
		"SE007_MENU_OPEN_SUBMENU",
		0,
		"SE009_DISPLAY_EVIDENCE",
		"SE00A_UNKNOWN",
		0,
		"SE00C_MENU_CHANGE_PAGE",
		"SE00D_VOICE_PHOENIX_TAKE_THAT_FR",
		"SE00E_VOICE_EDGEWORTH_OBJECTION_FR",
		"SE00F_VOICE_PAYNE_OBJECTION_FR",
		"SE010_GAVEL_SLAM",
		"SE011_GAVEL_SLAM_TRIPLE",
		0,
		"SE013_COURTROOM_AUDIENCE_1",
		0,
		0,
		"SE016_CONFIRM_SAVE",
		0,
		0,
		"SE019_IMPACT",
		"SE01A_TEXT_TYPEWRITER_LOW",
		0,
		"SE01C_DESK_HIT",
		"SE01D_VOICE_PHOENIX_HOLD_IT_FR",
		"SE01E_EXCLAMATION",
		0,
		"SE020_DOOR_OPEN_IMPACT",
		"SE021_COLLAPSE_IMPACT",
		"SE022_LOST_A_TRY",
		0,
		"SE024_CRITICAL_HIT",
		"SE025_GUNSHOT_1",
		"SE026_VERBAL_HIT",
		"SE027_VOICE_PHOENIX_OBJECTION_FR",
		"SE028_CRASH_INTO_WATER",
		"SE029_BEGIN_QUESTIONING",
		0,
		0,
		"SE02C_GAME_OVER",
		"SE02D_UNEXPECTED_TURN_OF_EVENTS",
		0,
		0,
		"SE030_PHONE_RING",
		"SE031_PHONE_PICKUP",
		0,
		"SE033_CAMERA_SOUND_ZOOM_IN",
		0,
		"SE035_VON_KARMA_SNAP",
		
		[102] = "SE03C_COURTROOM_AUDIENCE_VICTORY",
		
		[107] = "SE041_PHONE_RINGTONE_STEEL_SAMURAI",
		"SE042_SHORT_BEEP",
		0,
		"SE044_UNKNOWN",
		"SE045_GAVEL_SLAM_REVERB",
		"SE046_WHIP",
		0,
		0,
		"SE049_PSYCHE_LOCK_SLAM",
		"SE04A_PSYCHE_LOCK_BREAK",
		0,
		"SE04C_UNKNOWN_DOOR_OPEN",
		0,
		0,
		"SE04F_SWOOSH",
		"SE050_SHOCKING_TURN_OF_EVENTS",
		"SE051_LION_ROAR",
		0,
		"SE053_SPOT_LIGHT_ON",
		"SE054_UNKNOWN_AHA",
		0,
		"SE056_PHYCHE_LOCK_CHAINS_1",
		"SE057_PHYCHE_LOCK_CHAINS_2",
		"SE058_PHYCHE_LOCK_CHAINS_3",
		"SE059_PHYCHE_LOCK_CHAINS_4",
		"SE05A_PHYCHE_LOCK_CHAINS_5",
		
		[145] = "SE067_OLDBAG_LAZERBLASTER",
		
		[150] = "SE06C_VOICE_FRANZISKA_OBJECTION_FR",
		0,
		0,
		"SE06F_UNKNOWN",
		"SE070_DOOR_UNLOCK",
		0,
		"SE072_LIFE_BAR_RESTORE",
		"SE073_STOMACH_GROWL",
		
		[163] = "SE079_COURTROOM_AUDIENCE_2",
		"SE07A_COURTROOM_AUDIENCE_3",
		"SE07B_COURTROOM_AUDIENCE_FADE",
		"SE07C_COURTROOM_HEADLINE_IN",
		"SE07D_COURTROOM_HEADLINE_OUT",
		0,
		0,
		0,
		0,
		"SE082_RADIO_DETECTOR_LOW",
		0,
		"SE084_RADIO_DETECTOR_MEDIUM",
		"SE085_UNKNOWN_SLAM",
		0,
		0,
		"SE088_COFFE_GULP",
		"SE089_COFFE_SWOOP",
		"SE08A_UNKNOWN_CLAP?",
		"SE08B_COFFE_GULP_MARATHON_2",
		"SE08C_COFFE_GULP_MARATHON_3",
		"SE08D_COFFE_GULP_MARATHON_4",
		
		[203] = "BGM053_STEEL_SAMURAIS_BALLAD",
		"BGM054_TURNABOUT_SISTERS_THEME_2",
		0,
		0,
		"BGM057_KURAIN_VILLAGE",
		"BGM058_DETENTION_CENTER",
		"BGM059_ECCENTRIC",
		"BGM060_AMBIENT_BIRD_CHIRPS_3",
		0,
		0,
		0,
		"BGM064_INVESTIGATION_CORE_2",
		0,
		"BGM066_SUSPENSE_1",
		0,
		0,
		0,
		0,
		"BGM071_TRICK_AND_MAGIC",
		0,
		0,
		0,
		0,
		0,
		"BGM077_COURTROOM_LOBBY_2",
		0,
		"BGM079_PSYCHE_LOCK_3",
		0,
		"BGM081_JINGLE_EVIDENCE_1",
		"BGM082_FRANZISKAS_THEME_3",
		0,
		0,
		"BGM085_PSYCHE_LOCK_2",
		"BGM086_HOTLINE_OF_FATE",
		"BGM087_FRANZISKAS_THEME_2",
		0,
		0,
		"BGM090_AUDIENCE_BGM?",
		0,
		"BGM092_PEARLS_THEME",
		
		/* this seems to be a thing */
		[256] = "BGM-SP_RESUMEPLAYING",
		
		[301] = "BGM101_INTRO_CASE_1",
		"BGM102_TBD",
		"BGM103_TBD",
		"BGM104_INTRO_CASE_5",
		"BGM105_TBD",
		"BGM106_TBD",
		"BGM107_LUKE_ATMEYS_THEME",
		"BGM108_TBD",
		"BGM109_TBD",
		"BGM110_TBD",
		"BGM111_TBD",
		"BGM112_HAZAKURA_SHRINE",
		"BGM113_DAHLIAS_THEME",
		"BGM114_TBD",
		"BGM115_GODOTS_THEME",
		"BGM116_TBD",
		"BGM117_TBD",
		"BGM118_TBD",
		"BGM119_TBD",
		"BGM120_TBD",
		"BGM121_TBD",
		"BGM122_TBD",
		"BGM123_CORNERED_3",
		"BGM124_CORNERED_3_VARIATION",
		"BGM125_TBD",
		"BGM126_TBD",
		0,
		"BGM128_TBD",
		"BGM129_TBD",
		"BGM130_TBD",
		"BGM131_TBD",
		"BGM132_TBD",
		"BGM133_TBD",
		"BGM134_TBD",
		"BGM135_TBD",
		"BGM136_TBD",
		"BGM137_TBD",
		"BGM138_TBD",
		"BGM139_TBD",
		0,
		0,
		"BGM142_CORNERED_1_VERSION_3",
		"BGM143_CORNERED_1_VERSION_3_VARIATION",
		
		[350] = "SE090_JINGLE_SURPRISE_1",
		"SE091_JINGLE_SURPRISE_2",
		"SE092_JINGLE_SURPRISE_3",
		"SE093_JINGLE_SURPRISE_4",
		"SE094_JINGLE_SURPRISE_5",
		"SE095_SECURITY_ALARM",
		"SE096_ALARM_TURN_OFF",
		"SE097_UNKNOWN_CONFIRM",
		"SE098_UNKNOWN_SNAP",
		0,
		"SE09A_ELEVATOR_MOVING",
		"SE09B_ELEVATOR_ARRIVE",
		"SE09C_URN_BREAKING",
		"SE09D_UNKNOWN",
		"SE09E_UNKNOWN_CONFIRM_2",
		"SE09F_UNKNOWN_UNLOCK",
		"SE0A0_LIGHTNING",
		"SE0A1_VOICE_EDGEWORTH_HOLD_IT_FR",
		"SE0A2_VOICE_EDGEWORTH_TAKE_THAT_FR",
		"SE0A3_VOICE_MIA_OBJECTION_FR",
		"SE0A4_VOICE_MIA_HOLD_IT_FR",
		"SE0A5_VOICE_MIA_TAKE_THAT_FR",
		"SE0A6_VOICE_GODOT_OBJECTION_FR",
		"SE0A7_UNKNOWN_HIT",
		0,
		0,
		"SE0AA_UNKNOWN_CRITICAL_HIT",
		"SE0AB_JINGLE_SURPRISE_6",
		
		[382] = "SE0B0_UNKNOWN_SIZZLE_LONG",
		"SE0B1_UNKNOWN_SIZZLE_MID",
		"SE0B2_UNKNOWN_SIZZLE_SHORT",
		"SE0B3_UNKNOWN_SIZZLE_VERY_LONG",
		"SE0B4_UNKNOWN_BLEEP",
		"SE0B5_UNKNOWN_ENGINE",
		"SE0B6_UNKNOWN_IMPACT",
		"SE0B7_UNKNOWN",
		"SE0B8_UNKNOWN",
		0,
		0,
		"SE0BB_PHONE_RINGTONE_GODOT",
		"SE0BC_HAZAKURA_BELL",
		"SE0BD_UNKNOWN_WATER",
		"SE0BE_UNKNOWN_SPLASH",
		"SE0BF_VOICE_PHOENIX_EPIC_OBJECTION_JP",
		"SE0C0_EPIC_OBJECTION",
		"SE0C1_GHOST_SCREAM",
		"SE0C2_GHOST_EXORCISM",
		"SE0C3_UNKNOWN",
		"SE0C4_UNKNOWN",
		"SE0C5_EXCLAMATION_3",
		"SE0C6_GHOST_SCREAM_2",
		0,
		"SE0C8_COURTROOM_AUDIENCE",
		
		[500] = "SE0D0_VOICE_PHOENIX_OBJECTION_DE",
		"SE0D1_VOICE_PHOENIX_HOLD_IT_DE",
		"SE0D2_VOICE_PAYNE_OBJECTION_DE",
		"SE0D3_VOICE_EDGEWORTH_OBJECTION_DE",
		0,
		"SE0D5_VOICE_PHOENIX_TAKE_THAT_DE",
		"SE0D6_VOICE_FRANZISKA_OBJECTION_DE",
		// anything past here is from a different sequence bank that none of the usual tools handle
		// and is therefore pure guesswork
		0,
		0,
		0,
		// this assumes that WAVE SE ST01 is the first bank
		// and that the sequences appear in order of the wave files
		"SE0DA_VOICE_GODOT_OBJECTION_DE",
		"SE0DB_VOICE_EDGEWORTH_TAKE_THAT_DE",
		"SE0DC_VOICE_EDGEWORTH_HOLD_IT_DE",
		"SE0DD_VOICE_MIA_OBJECTION_DE",
		"SE0DE_VOICE_MIA_TAKE_THAT_DE",
		"SE0DF_VOICE_MIA_HOLD_IT_DE",
	},
	{
		/* apollo to be done */
		0
	}
};

/* 1024 is a placeholder, change when all things are known */
char *locations[4][256] = {
	{
		/* phoenix 1 */
		"LOCATION_FEY_PARTNER",
		"LOCATION_OFFICE",
		"LOCATION_DETENTION_CENTER",
		"LOCATION_OFFICE_GROSSBERG",
		"LOCATION_BLUECORP",
		"LOCATION_HOTEL_GATEWATER",
		"LOCATION_WRIGHT_PARTNER",
		"LOCATION_STUDIO_ENTRANCE",
		"LOCATION_STAFF_AREA",
		"LOCATION_CHANGING_ROOM",
		"LOCATION_STUDIO1_OUTSIDE",
		"LOCATION_STUDIO1_INSIDE",
		"LOCATION_STUDIO2_OUTSIDE",
		"LOCATION_TRAILER",
		"LOCATION_CRIMINAL_AFFAIRS",
		"LOCATION_ARCHIVE",
		"LOCATION_GOURD_LAKE",
		"LOCATION_BEACH_GOURD_LAKE",
		"LOCATION_FOREST_GOURD_LAKE",
		"LOCATION_BOAT_RENTAL",
		"LOCATION_HOUSE_OF_RENTAL",
		"LOCATION_BLANK",
		"LOCATION_PARKING_GARAGE",
		"LOCATION_OFFICE_EDGEWORTH", // CHANGEME
		"LOCATION_POLICE_STATION_ENTRANCE",
		"LOCATION_OFFICE_POLICE_CHEF",
		"LOCATION_SECURITY_ROOM",
		"LOCATION_EVIDENCE_ROOM",
		[255] = "LOCATION_NONE"
	},
	{
		/* phoenix 2 */
		
	},
	{
		/* phoenix 3 */
		
	},
	{
		/* apollo */
		
	}
};
