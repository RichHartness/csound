// generated by Fast Light User Interface Designer (fluid) version 1.0106

#ifndef winsound_h
#define winsound_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
extern int do_exit;
extern int do_perf, do_util;
extern int do_load;
extern Fl_Double_Window *ew;
extern Fl_Double_Window *xw;
extern Fl_Double_Window *uw;
#include "csound.h"
extern void cs_util_sndinfo(void);
extern void cs_util_opc(int full);
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_File_Input.H>
extern Fl_File_Input *orchname;
extern Fl_File_Input *scorename;
extern Fl_File_Input *output;
#include <FL/Fl_Check_Button.H>
extern Fl_Check_Button *DAC;
#include <FL/Fl_Group.H>
#include <FL/Fl_Round_Button.H>
extern Fl_Round_Button *wav;
extern Fl_Round_Button *aiff;
extern Fl_Round_Button *ircam;
extern Fl_Round_Button *raw;
extern Fl_Round_Button *size_8;
extern Fl_Round_Button *size_16;
extern Fl_Round_Button *size_24;
extern Fl_Round_Button *size_32;
extern Fl_Round_Button *size_f;
extern Fl_Check_Button *mK;
#include <FL/Fl_Button.H>
#include <FL/Fl_Output.H>
extern Fl_Button *icon;
Fl_Double_Window* make_mainwindow();
extern Fl_Round_Button *util_het;
extern Fl_Round_Button *util_lpc;
extern Fl_Round_Button *util_pvc;
extern Fl_Round_Button *util_cvl;
extern Fl_Round_Button *util_info;
extern Fl_Round_Button *util_pinfo;
extern Fl_Round_Button *util_dnoise;
extern Fl_Round_Button *util_opc;
extern Fl_Round_Button *util_opv;
Fl_Double_Window* make_utils();
extern Fl_Check_Button *mI;
extern Fl_Check_Button *mn;
extern Fl_Check_Button *mv;
extern Fl_Check_Button *mR;
#include <FL/Fl_Value_Input.H>
extern Fl_Value_Input *mH;
extern Fl_Check_Button *mN;
extern Fl_Value_Input *mr;
extern Fl_Value_Input *mk;
extern Fl_Value_Input *mm;
extern Fl_Value_Input *mt;
extern Fl_Value_Input *mB;
extern Fl_Value_Input *mb;
extern Fl_File_Input *mM;
extern Fl_File_Input *mi;
extern Fl_Check_Button *mSave;
extern Fl_Check_Button *mZ;
Fl_Double_Window* make_extras();
extern Fl_File_Input *op;
extern Fl_File_Input *ss;
extern Fl_File_Input *sf;
extern Fl_File_Input *sa;
Fl_Double_Window* make_environ();
extern Fl_File_Input *sndinfo_file;
#include <FL/Fl_Return_Button.H>
Fl_Double_Window* make_info();
#endif
