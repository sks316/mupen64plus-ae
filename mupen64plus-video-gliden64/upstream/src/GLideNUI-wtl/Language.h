#pragma once
#include <list>
#include <map>
#include "util/StdString.h"

enum languageStringID
{
	/*********************************************************************************
	* Meta Information															   *
	*********************************************************************************/
	LANGUAGE_NAME = 1,

	/*********************************************************************************
	* Config Dialog																  *
	*********************************************************************************/
	TAB_VIDEO = 1000,
	TAB_EMULATION = 1001,
	TAB_FRAME_BUFFER = 1002,
	TAB_TEXTURE_ENHANCEMENT = 1003,
	TAB_OSD = 1004,
	TAB_DEBUG = 1005,
	CFG_SAVE_SETTINGS_FOR = 1010,
	CFG_SETTINGS_PROFILE = 1011,
	CFG_REMOVE = 1012,
	CFG_RESTORE_DEFAULTS = 1013,
	CFG_SAVE_AND_CLOSE = 1014,
	CFG_SAVE = 1015,
	CFG_CLOSE = 1016,

	/*********************************************************************************
	* Video Tab																	  *
	*********************************************************************************/
	VIDEO_GROUP = 2000,
	VIDEO_FULL_SCREEN_RES = 2001,
	VIDEO_FULL_SCREEN_RES_TOOLTIP = 2002,
	VIDEO_REFRESH_RATE = 2003,
	VIDEO_REFRESH_RATE_TOOLTIP = 2004,
	VIDEO_WINDOWED_RESOLUTION = 2005,
	VIDEO_WINDOWED_RESOLUTION_TOOLTIP = 2006,
	VIDEO_ASPECT_RATIO = 2007,
	VIDEO_ASPECT_RATIO_TOOLTIP = 2008,
	VIDEO_ASPECT_4_3 = 2009,
	VIDEO_ASPECT_16_19 = 2010,
	VIDEO_ASPECT_STRETCH = 2011,
	VIDEO_ASPECT_ADJUST = 2012,
	VIDEO_VSYNC = 2013,
	VIDEO_VSYNC_TOOLTIP = 2014,
	VIDEO_THREADED_VIDEO = 2015,
	VIDEO_THREADED_VIDEO_TOOLTIP = 2016,
	VIDEO_OVERSCAN = 2017,
	VIDEO_OVERSCAN_TOOLTIP = 2018,
	VIDEO_NTSC = 2019,
	VIDEO_PAL = 2020,
	VIDEO_ANTI_ALIASING = 2021,
	VIDEO_NO_ANTI_ALIASING = 2022,
	VIDEO_FAST_ANTI_ALIASING = 2023,
	VIDEO_MULTISAMPLE_ANTI_ALIASING = 2024,
	VIDEO_AA_OFF = 2025,
	VIDEO_AA_HIGH = 2026,
	VIDEO_AA_TOOLTIP = 2027,
	VIDEO_AA_INFO = 2028,
	VIDEO_FILTERING_GROUP = 2029,
	VIDEO_ANISOTROPIC = 2030,
	VIDEO_ANISOTROPIC_OFF = 2031,
	VIDEO_ANISOTROPIC_HIGH = 2032,
	VIDEO_BILINEAR = 2033,
	VIDEO_BILINEAR_STANDARD = 2034,
	VIDEO_BILINEAR_3POINT = 2035,
	VIDEO_BILINEAR_TOOLTIP = 2036,
	VIDEO_DITHERING_GROUP = 2037,
	VIDEO_PATTERN = 2038,
	VIDEO_DITHERING_APPLY_TO_OUTPUT = 2039,
	VIDEO_DITHERING_APPLY_TO_OUTPUT_TOOLTIP = 2040,
	VIDEO_DITHERING_5BIT_QUANTIZATION = 2041,
	VIDEO_DITHERING_5BIT_QUANTIZATION_TOOLTIP = 2042,
	VIDEO_DITHERING_HIRES_NOISE = 2043,
	VIDEO_DITHERING_HIRES_NOISE_TOOLTIP = 2044,
	VIDEO_DITHERING_MODE_TOOLTIP = 2045,
	VIDEO_DITHERING_DISABLE = 2046,
	VIDEO_DITHERING_BAYER = 2047,
	VIDEO_DITHERING_MAGIC_SQUARE = 2048,
	VIDEO_DITHERING_BLUE_NOISE = 2049,
	VIDEO_LANGUAGE = 2050,

	/*********************************************************************************
	* Emulation Tab																  *
	*********************************************************************************/
	EMULATION_USE_PER_GAME = 3000,
	EMULATION_USE_PER_GAME_TOOLTIP = 3001,
	EMULATION_N64_STYLE_MIP_MAPPING = 3002,
	EMULATION_N64_STYLE_MIP_MAPPING_TOOLTIP = 3003,
	EMULATION_HWLIGHTING = 3004,
	EMULATION_HWLIGHTING_TOOLTIP = 3005,
	EMULATION_SHADERS_STORAGE = 3006,
	EMULATION_SHADERS_STORAGE_TOOLTIP = 3007,
	EMULATION_INTERNAL_RES = 3008,
	EMULATION_INTERNAL_RES_TOOLTIP = 3009,
	EMULATION_FACTOR0X = 3010,
	EMULATION_FACTOR1X = 3011,
	EMULATION_FACTORXX = 3012,
	EMULATION_GAMMA = 3013,
	EMULATION_GAMMA_TOOLTIP = 3014,
	EMULATION_GAMMA_CORRECTION = 3015,
	EMULATION_GAMMA_INFO = 3016,
	EMULATION_2D_ELEMENTS = 3017,
	EMULATION_RENDER_2D_ELEMENTS = 3018,
	EMULATION_RENDER_2D_TOOLTIP = 3019,
	EMULATION_RENDER_DISABLE = 3020,
	EMULATION_RENDER_ENABLE_OPTIMIZED = 3021,
	EMULATION_RENDER_ENABLE_UNOPTIMIZED = 3022,
	EMULATION_HALOS_REMOVAL = 3023,
	EMULATION_FIX_BLACK_LINES = 3024,
	EMULATION_FIX_BLACK_LINES_TOOLTIP = 3025,
	EMULATION_ADJACENT_2D_ELEMENTS = 3026,
	EMULATION_ALWAYS = 3027,
	EMULATION_NEVER = 3028,
	EMULATION_BACKGROUND = 3029,
	EMULATION_BACKGROUND_TOOLTIP = 3030,
	EMULATION_ONE_PIECE = 3031,
	EMULATION_STRIPPED = 3032,
	EMULATION_PIXEL_COVERAGE = 3033,
	EMULATION_PIXEL_COVERAGE_TOOLTIP = 3034,

	/*********************************************************************************
	* Frame Buffer Tab															   *
	*********************************************************************************/
	FRAMEBUFFER_ENABLE = 4000,
	FRAMEBUFFER_ENABLE_INFO = 4001,
	FRAMEBUFFER_COPY_AUX_BUFFERS = 4002,
	FRAMEBUFFER_COPY_AUX_BUFFERS_TOOLTIP = 4003,
	FRAMEBUFFER_SWAP = 4004,
	FRAMEBUFFER_SWAP_TOOLTIP = 4005,
	FRAMEBUFFER_VERTICAL_INTERRUPT = 4006,
	FRAMEBUFFER_VI_ORIGIN_CHANGE = 4007,
	FRAMEBUFFER_COLOR_BUFFER_CHANGE = 4008,
	FRAMEBUFFER_INFO_ENABLE = 4009,
	FRAMEBUFFER_INFO_ENABLE_TOOLTIP = 4010,
	FRAMEBUFFER_READ_COLOR_CHUNK = 4011,
	FRAMEBUFFER_READ_COLOR_CHUNK_TOOLTIP = 4012,
	FRAMEBUFFER_READ_DEPTH_CHUNK = 4013,
	FRAMEBUFFER_READ_DEPTH_CHUNK_TOOLTIP = 4014,
	FRAMEBUFFER_COPY_COLOR_BUFFER = 4015,
	FRAMEBUFFER_COPY_COLOR_BUFFER_TOOLTIP = 4016,
	FRAMEBUFFER_COPY_NEVER = 4017,
	FRAMEBUFFER_COPY_SYNCHRONOUS = 4018,
	FRAMEBUFFER_COPY_ASYNCHRONOUS = 4019,
	FRAMEBUFFER_COPY_DEPTH_BUFFER = 4020,
	FRAMEBUFFER_COPY_DEPTH_BUFFER_TOOLTIP = 4021,
	FRAMEBUFFER_COPY_DEPTH_NEVER = 4022,
	FRAMEBUFFER_COPY_DEPTH_VRAM = 4023,
	FRAMEBUFFER_COPY_DEPTH_SOFTWARE = 4024,
	FRAMEBUFFER_N64_DEPTH_COMPARE = 4025,
	FRAMEBUFFER_N64_DEPTH_COMPARE_TOOLTIP = 4026,
	FRAMEBUFFER_N64_DEPTH_DISABLE = 4027,
	FRAMEBUFFER_N64_DEPTH_FAST = 4028,
	FRAMEBUFFER_N64_DEPTH_COMPATIBLE = 4029,
	FRAMEBUFFER_FORCE_DEPTH_BUFFER_CLEAR = 4030,
	FRAMEBUFFER_FORCE_DEPTH_BUFFER_CLEAR_TOOLTIP = 4031,
	FRAMEBUFFER_RENDER_FRAMEBUFFER = 4032,
	FRAMEBUFFER_RENDER_FRAMEBUFFER_TOOLTIP = 4033,
	FRAMEBUFFER_COPY_DEPTH_TO_MAIN = 4034,
	FRAMEBUFFER_COPY_DEPTH_TO_MAIN_TOOLTIP = 4035,

	/*********************************************************************************
	* Texture Enhancement Tab														*
	*********************************************************************************/
	TEXTURE_N64_TEXTURES_GROUP = 5000,
	TEXTURE_N64_FILTER = 5001,
	TEXTURE_N64_FILTER_TOOLTIP = 5002,
	TEXTURE_N64_FILTER_NONE = 5003,
	TEXTURE_N64_FILTER_SMOOTH1 = 5004,
	TEXTURE_N64_FILTER_SMOOTH2 = 5005,
	TEXTURE_N64_FILTER_SMOOTH3 = 5006,
	TEXTURE_N64_FILTER_SMOOTH4 = 5007,
	TEXTURE_N64_FILTER_SHARP1 = 5008,
	TEXTURE_N64_FILTER_SHARP2 = 5009,
	TEXTURE_ENHANCEMENT = 5010,
	TEXTURE_ENHANCEMENT_TOOLTIP = 5011,
	TEXTURE_ENHANCEMENT_NONE = 5012,
	TEXTURE_ENHANCEMENT_STORE = 5013,
	TEXTURE_DECREASE_COLOR = 5014,
	TEXTURE_DECREASE_COLOR_TOOLTIP = 5015,
	TEXTURE_IGNORE_BACKGROUNDS = 5016,
	TEXTURE_IGNORE_BACKGROUNDS_TOOLTIP = 5017,
	TEXTURE_USE_FILE_STORAGE = 5018,
	TEXTURE_USE_TEXTURE_PACK = 5019,
	TEXTURE_TEXTURE_PACK = 5020,
	TEXTURE_TEXTURE_PACK_TOOLTIP = 5021,
	TEXTURE_CACHE_PATH = 5022,
	TEXTURE_DUMP_PATH = 5023,
	TEXTURE_USE_FULL_TRANSPARENCIES = 5024,
	TEXTURE_USE_FULL_TRANSPARENCIES_TOOLTIP = 5025,
	TEXTURE_ALTERNATIVE_CRC = 5026,
	TEXTURE_ALTERNATIVE_CRC_TOOLTIP = 5027,
	TEXTURE_USE_FILE_STORAGE_TOOLTIP = 5028,
	TEXTURE_SIZE_OF_MEMORY_CACHE = 5031,
	TEXTURE_SIZE_OF_MEMORY_CACHE_TOOLTIP = 5032,
	TEXTURE_SAVE_ENHANCED = 5033,
	TEXTURE_SAVE_ENHANCED_TOOLTIP = 5034,
	TEXTURE_COMPRESS_CACHE = 5035,
	TEXTURE_COMPRESS_CACHE_TOOLTIP = 5036,
	TEXTURE_CONVERT_16BPP = 5037,
	TEXTURE_CONVERT_16BPP_TOOLTIP = 5038,
	TEXTURE_RELOAD = 5039,
	TEXTURE_RELOAD_TOOLTIP = 5040,

	/*********************************************************************************
	* On-screen display															  *
	*********************************************************************************/
	OSD_POSITION = 6000,
	OSD_DISPLAY_FPS = 6001,
	OSD_DISPLAY_VI = 6002,
	OSD_DISPLAY_PERCENTAGE = 6003,
	OSD_DISPLAY_INTERNAL_RESOLUTION = 6004,
	OSD_DISPLAY_RENDERING_RESOLUTION = 6005,
	OSD_FONT = 6006,
	OSD_SIZE = 6007,
	OSD_PX = 6008,
	OSD_COLOR = 6009,
	OSD_PREVIEW = 6010,

	/*********************************************************************************
	* Debug																		  *
	*********************************************************************************/
	DEBUG_DUMP_LOWLEVEL_INFO = 7000,
	DEBUG_DUMP_DISPLAY_LIST = 7001,
	DEBUG_DUMP_DETAILED_INFO = 7002,

	/*********************************************************************************
	* About																		  *
	*********************************************************************************/
	ABOUT_ABOUT_TITLE = 9000,
	ABOUT_TAB_ABOUT = 9001,
	ABOUT_TAB_CONTRIBUTORS = 9002,
	ABOUT_TAB_FUNDERS = 9003,
	ABOUT_TAB_CREDITS = 9004,
	ABOUT_NEXT_GENERATION = 9005,
	ABOUT_AUTHORS = 9006,
	ABOUT_DEVELOPER = 9007,
	ABOUT_BETA_TESTER = 9008,
	ABOUT_GUI_DESIGNER = 9009,
	ABOUT_AND_MORE = 9010,
	ABOUT_AUTHOR_GLN64 = 9011,
	ABOUT_AUTHOR_GLES2N64 = 9012,
	ABOUT_AUTHOR_GLIDEHQ = 9013,
	ABOUT_AUTHOR_Z64 = 9014,
};

struct LanguageFile
{
	std::string Filename;
	std::string LanguageName;
};
typedef std::list<LanguageFile> LanguageList;
typedef std::map<int32_t, stdstr> LANG_STRINGS;
typedef LANG_STRINGS::value_type LANG_STR;

void LoadCurrentStrings(const char * path, const std::string & lang);
LanguageList GetLanguageList(const char * path);
LANG_STRINGS GetDefaultStrings(void);
std::wstring wGS(languageStringID StringID);