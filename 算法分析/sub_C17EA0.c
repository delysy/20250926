int __thiscall sub_C17EA0(_DWORD *this)
{
  _DWORD *v2; // ebx
  int v3; // esi
  _DWORD *v4; // esi
  int v5; // edi
  struct CObList *v7; // [esp-4h] [ebp-5Ch]
  CObList *v8; // [esp-4h] [ebp-5Ch]
  _BYTE v9[4]; // [esp+10h] [ebp-48h] BYREF
  _DWORD *v10; // [esp+14h] [ebp-44h]
  _BYTE v11[4]; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD *v12; // [esp+30h] [ebp-28h]
  _DWORD *v13; // [esp+48h] [ebp-10h]
  int v14; // [esp+54h] [ebp-4h]

  v13 = this;
  CObList::CObList((CObList *)v9, 10);
  v7 = (struct CObList *)(*(this + 1) + 72);
  v14 = 0;
  CObList::AddTail((CObList *)v9, v7);
  v2 = v10;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( !v2 )
LABEL_11:
        AfxThrowInvalidArgException();
      v3 = v2[2];
      v2 = (_DWORD *)*v2;
      sub_BAE7B0(*(_DWORD *)(v3 + 44));
      CObList::CObList((CObList *)v11, 10);
      LOBYTE(v14) = 1;
      sub_BBE700((CObList *)v11);
      v4 = v12;
      if ( v12 )
        break;
LABEL_7:
      LOBYTE(v14) = 0;
      CObList::~CObList((CObList *)v11);
      if ( !v2 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_11;
      v8 = (CObList *)v4[2];
      v4 = (_DWORD *)*v4;
      v5 = sub_C17C30(v8);
      if ( v5 )
        break;
      if ( !v4 )
        goto LABEL_7;
    }
    LOBYTE(v14) = 0;
    CObList::~CObList((CObList *)v11);
  }
  else
  {
LABEL_8:
    sub_DB0320();
    v5 = 0;
  }
  v14 = -1;
  CObList::~CObList((CObList *)v9);
  return v5;
}