

package jjAIS;

import jcas.Object;
import jjAIS.SelectMgr_SelectableObject;
import jcas.Standard_Integer;
import jjAIS.TopoDS_Shape;


public class AIS_DimensionOwner extends jjAIS.SelectMgr_EntityOwner {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_DimensionOwner(SelectMgr_SelectableObject aSO,int aPriority) {
   AIS_DimensionOwner_Create_0(aSO,aPriority);
}

private final native void AIS_DimensionOwner_Create_0(SelectMgr_SelectableObject aSO,int aPriority);

native public final void SetShape(TopoDS_Shape aShape);
native public final TopoDS_Shape FixedShape();
public AIS_DimensionOwner() {
}




}
