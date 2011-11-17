

package jjAIS;

import jcas.Object;
import jcas.Standard_Boolean;
import jjAIS.AIS_KindOfInteractive;
import jcas.Standard_Short;
import jcas.Standard_Integer;
import jjAIS.SelectMgr_EntityOwner;
import jjAIS.TColStd_ListOfInteger;


public class AIS_ExclusionFilter extends jjAIS.SelectMgr_Filter {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_ExclusionFilter(boolean ExclusionFlagOn) {
   AIS_ExclusionFilter_Create_1(ExclusionFlagOn);
}

private final native void AIS_ExclusionFilter_Create_1(boolean ExclusionFlagOn);

public AIS_ExclusionFilter(short TypeToExclude,boolean ExclusionFlagOn) {
   AIS_ExclusionFilter_Create_2(TypeToExclude,ExclusionFlagOn);
}

private final native void AIS_ExclusionFilter_Create_2(short TypeToExclude,boolean ExclusionFlagOn);

public AIS_ExclusionFilter(short TypeToExclude,int SignatureInType,boolean ExclusionFlagOn) {
   AIS_ExclusionFilter_Create_3(TypeToExclude,SignatureInType,ExclusionFlagOn);
}

private final native void AIS_ExclusionFilter_Create_3(short TypeToExclude,int SignatureInType,boolean ExclusionFlagOn);

native public  boolean IsOk(SelectMgr_EntityOwner anObj);
final public boolean Add(short TypeToExclude) {
   return AIS_ExclusionFilter_Add_1(TypeToExclude);
}

private final native boolean AIS_ExclusionFilter_Add_1(short TypeToExclude);

final public boolean Add(short TypeToExclude,int SignatureInType) {
   return AIS_ExclusionFilter_Add_2(TypeToExclude,SignatureInType);
}

private final native boolean AIS_ExclusionFilter_Add_2(short TypeToExclude,int SignatureInType);

final public boolean Remove(short TypeToExclude) {
   return AIS_ExclusionFilter_Remove_1(TypeToExclude);
}

private final native boolean AIS_ExclusionFilter_Remove_1(short TypeToExclude);

final public boolean Remove(short TypeToExclude,int SignatureInType) {
   return AIS_ExclusionFilter_Remove_2(TypeToExclude,SignatureInType);
}

private final native boolean AIS_ExclusionFilter_Remove_2(short TypeToExclude,int SignatureInType);

native public final void Clear();
native public final boolean IsExclusionFlagOn();
native public final void SetExclusionFlag(boolean Status);
native public final boolean IsStored(short aType);
native public final void ListOfStoredTypes(TColStd_ListOfInteger TheList);
native public final void ListOfSignature(short aType,TColStd_ListOfInteger TheStoredList);
public AIS_ExclusionFilter() {
}




}
