
#include <OpenGl_tgl_all.hxx>

#include <stddef.h>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>

#include <OpenGl_cmn_varargs.hxx>
#include <OpenGl_telem_attri.hxx>
#include <OpenGl_tsm.hxx>
#include <OpenGl_telem.hxx>
#include <OpenGl_telem_inquire.hxx>
#include <OpenGl_Memory.hxx>

static  TStatus  PolylineTypeDisplay( TSM_ELEM_DATA, Tint, cmn_key* );
static  TStatus  PolylineTypeAdd( TSM_ELEM_DATA, Tint, cmn_key* );
static  TStatus  PolylineTypePrint( TSM_ELEM_DATA, Tint, cmn_key* );
static  TStatus  PolylineTypeInquire( TSM_ELEM_DATA, Tint, cmn_key* );

static  TStatus  (*MtdTbl[])( TSM_ELEM_DATA, Tint, cmn_key* ) =
{
  0,             /* PickTraverse */
  PolylineTypeDisplay,
  PolylineTypeAdd,
  0,             /* Delete */
  PolylineTypePrint,
  PolylineTypeInquire
};


MtblPtr
TelPolylineTypeInitClass( TelType *el )
{
  *el = TelPolylineType;
  return MtdTbl;
}

static  TStatus
PolylineTypeAdd( TSM_ELEM_DATA d, Tint n, cmn_key *k )
{
  ((tsm_elem_data)(d.pdata))->ldata = k[0]->data.ldata;

  return TSuccess;
}


static  TStatus
PolylineTypeDisplay( TSM_ELEM_DATA data, Tint n, cmn_key *k )
{
  CMN_KEY     key;

  key.id = TelPolylineType;
  key.data.ldata = data.ldata;
  TsmSetAttri( 1, &key );

  return TSuccess;
}


static  TStatus
PolylineTypePrint( TSM_ELEM_DATA data, Tint n, cmn_key *k )
{
  switch( data.ldata )
  {
  case TEL_LS_SOLID:
    fprintf( stdout, "TelPolylineType. Value = SOLID\n" );
    break;

  case TEL_LS_DOT:
    fprintf( stdout, "TelPolylineType. Value = DOT\n" );
    break;

  case TEL_LS_DASH_DOT:
    fprintf( stdout, "TelPolylineType. Value = DASH_DOT\n" );
    break;

  case TEL_LS_DASH:
    fprintf( stdout, "TelPolylineType. Value = DASH\n" );
    break;

  case TEL_LS_DOUBLE_DOT_DASH:
    fprintf( stdout, "TelPolylineType. Value = DOUBLE_DOT_DASH\n" );
    break;
  }
  fprintf( stdout, "\n" );

  return TSuccess;
}


static TStatus
PolylineTypeInquire( TSM_ELEM_DATA data, Tint n, cmn_key *k )
{
  Tint i;

  for( i = 0; i < n; i++ )
  {
    switch( k[i]->id )
    {
    case INQ_GET_SIZE_ID:
      {
        k[i]->data.ldata = sizeof( Tint );
        break;
      }
    case INQ_GET_CONTENT_ID:
      {
        TEL_INQ_CONTENT *c;
        Teldata         *w;

        c = (tel_inq_content)k[i]->data.pdata;
        w = c->data;
        c->act_size = 0;
        w->idata = data.ldata;
        break;
      }
    }
  }

  return TSuccess;
}
