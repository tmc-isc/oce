#ifndef _Storage_Macros_HeaderFile
#define _Storage_Macros_HeaderFile 1
#include <Storage_SolveMode.hxx>

// PROTOTYPES
//
#define Storage_DECLARE_SCHEMA_METHODS(schema)  public: \
  Standard_EXPORT Handle(Storage_CallBack)  CallBackSelection(const TCollection_AsciiString&) const; \
  Standard_EXPORT Handle(Storage_CallBack)  AddTypeSelection(const Handle(Standard_Persistent)&) const; \
  Standard_EXPORT const TColStd_SequenceOfAsciiString& SchemaKnownTypes() const;

// Read_TypeSelection
//
#define Storage_BEGIN_READ_SELECTION(schema) \
                  extern "C" { \
                  Standard_EXPORT Handle(Storage_Schema) Create##schema() { return new schema; } \
			     } \
                  Handle(Storage_CallBack) schema::CallBackSelection(const TCollection_AsciiString& rt) const \
                                             { \
					      Handle(Standard_Persistent) p; \
					      Handle(Storage_CallBack) cback;

#define Storage_READ_SELECTION(schema,classe,callback) if (strcmp(rt.ToCString(),#classe) == 0) { \
					                 cback = new  callback ; \
                                                         return cback; \
					               }

#define Storage_END_READ_SELECTION(schema)  cback = ResolveUnknownType(rt,p,Storage_WriteSolve); \
					    return cback; \
                                          }

// SchemaKnownTypes
//
#define Storage_BEGIN_SCHEMA_TYPES(schema) const TColStd_SequenceOfAsciiString& schema::SchemaKnownTypes() const \
                                           { \
					     static TColStd_SequenceOfAsciiString aSeq; \
					     static Standard_Boolean              jsuidjaalai = Standard_False; \
					     if (!jsuidjaalai) { \
			      			 jsuidjaalai = Standard_True;

#define Storage_SCHEMA_TYPES(classe) aSeq.Append(#classe);
#define Storage_END_SCHEMA_TYPES(schema)   } return aSeq; \
					  }

// ADD_TypeSelection
//

#define Storage_BEGIN_ADD_TYPES(schema) Handle(Storage_CallBack) schema::AddTypeSelection(const Handle(Standard_Persistent)& p) const \
                                         { \
					  Handle(Storage_CallBack) cback; \
					  if (!p.IsNull()) { \
                                            const Handle(Standard_Type)& t = p->DynamicType(); \
					    static TCollection_AsciiString theTypeName;\
					    theTypeName = t->Name(); \
					    if (HasTypeBinding(theTypeName)) { \
					        cback = TypeBinding(theTypeName); \
					        cback->Add(p,this); \
                                                return cback; \
					    }

#define Storage_ADD_TYPES(schema,classe,callback) if (t == classe##_Type_()) { \
					            cback = new callback ; \
					            BindType(theTypeName,cback); \
					            cback->Add(p,this); \
                                                    return cback; \
                                                  }

#define Storage_END_ADD_TYPES(schema)            cback = ResolveUnknownType(theTypeName,p,Storage_AddSolve); \
					         if (!cback.IsNull()) { \
					            cback->Add(p,this); \
					         } \
						 return cback; \
                                          }  \
					return cback; \
				      }
#endif
