

package jjAIS;

import jcas.Object;
import jjAIS.AIS_KindOfInteractive;
import jcas.Standard_Integer;
import jcas.Standard_Short;
import jcas.Standard_Boolean;
import jjAIS.SelectMgr_EntityOwner;


public class AIS_SignatureFilter extends jjAIS.AIS_TypeFilter {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_SignatureFilter(short aGivenKind,int aGivenSignature) {
   AIS_SignatureFilter_Create_0(aGivenKind,aGivenSignature);
}

private final native void AIS_SignatureFilter_Create_0(short aGivenKind,int aGivenSignature);

native public final boolean IsOk(SelectMgr_EntityOwner anobj);
public AIS_SignatureFilter() {
}




}
