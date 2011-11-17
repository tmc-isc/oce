

package jjAIS;

import jcas.Object;
import jcas.Standard_Boolean;
import jjAIS.TopAbs_ShapeEnum;
import jcas.Standard_Short;
import jjAIS.SelectMgr_EntityOwner;
import jcas.Standard_Integer;
import jjAIS.TopoDS_Edge;


public class AIS_BadEdgeFilter extends jjAIS.SelectMgr_Filter {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_BadEdgeFilter() {
   AIS_BadEdgeFilter_Create_0();
}

private final native void AIS_BadEdgeFilter_Create_0();

native public  boolean ActsOn(short aType);
native public  boolean IsOk(SelectMgr_EntityOwner EO);
native public final void SetContour(int Index);
native public final void AddEdge(TopoDS_Edge anEdge,int Index);
native public final void RemoveEdges(int Index);



}
