#ifndef oxp_mpeg_codec_h
#define oxp_mpeg_codec_h

//:
// \file 
// \author awf
// \date Dec 2001
// Modifications
// \verbatim
// \endverbatim

struct oxp_mpeg_codec_data;

//: Allows user to load MPEG files as vxl video.
// use set_demux if mpeg is a VOB
class oxp_mpeg_codec {
public:
  oxp_mpeg_codec();
  ~oxp_mpeg_codec();

  //-----------------------------------------------------

  virtual bool   get_section(int position, void* ib, int x0, int y0, int xs, int ys) const;
  virtual int    put_section(int position, void* ib, int x0, int y0, int xs, int ys);

  //-----------------------------------------------------
  bool probe(const char* fname);
  bool load(const char* fname, char mode = 'r' );
  // bool save(movie* movie, const char* fname);

  int get_width() const;
  int get_height() const;

  // could be set for efficiency, after load was called?
  void set_output_format_grey();
  void set_output_format_rgb();

private:

  //--- these are set by load/save
  void set_demux_video();

  oxp_mpeg_codec_data* impl_;
};

#endif // oxp_mpeg_codec_h
