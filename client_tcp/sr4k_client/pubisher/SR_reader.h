#ifndef SR_READER_H
#define SR_READER_H

/*
 *  David Z, Mar 13, 2015
 *  read the SwissRanger 4000 data from file 
 *
 * */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
// #include "libMesaSR.h"

using namespace std; 
typedef float SR_TYPE; 
typedef unsigned short SR_IMG_TYPE;
const static int SR_WIDTH = 176; 
const static int SR_HEIGHT = 144; 
const static int SR_SIZE = SR_WIDTH*SR_HEIGHT;

class sr_data
{
  public:
    SR_IMG_TYPE intensity_[SR_SIZE];
  union{
    struct
    {
      SR_IMG_TYPE dis_[SR_SIZE];
      // unsigned char cam_handle_[SR_SIZE]; // for buffering the cam_handle     
    };
    struct
    {
      SR_TYPE z_[SR_SIZE]; 
      SR_TYPE x_[SR_SIZE]; 
      SR_TYPE y_[SR_SIZE]; 
      SR_IMG_TYPE c_[SR_SIZE]; 
    };
  };
  static const int _sr_size = SR_SIZE; 
  static const int _sr_width = SR_WIDTH; 
  static const int _sr_height = SR_HEIGHT;
  typedef SR_IMG_TYPE _sr_type;
};

class CSReader
{
  public:
    CSReader();
    ~CSReader();
    bool loadAllData();
    bool isEmpty();
    sr_data get_frame(int i);
    sr_data get_current_frame(bool&);
    void reset(int index=0);
  public:
    typedef vector<sr_data>::iterator iterator; 
    iterator begin() {return data_set_.begin();}
    iterator end() {return data_set_.end();}
    bool readOneFrame(string f_name, sr_data& d);

  public:
    string file_dir_;           // data dir 
    string data_prefix_;        // data prefix 
    string data_suffix_;        // data suffix 
    int start_frame_ ;          // start frame
    int end_frame_;             // the last frame
    int curr_frame_;            // current frame
    vector<sr_data> data_set_;
    bool b_sr_new_version;     // file version  
};

#endif
