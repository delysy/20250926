int __thiscall sub_C14980(_DWORD *this)
{
  int v2; // ecx
  int v3; // esi
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // edi
  struct CObList *v8; // [esp-4h] [ebp-60h]
  _BYTE v9[4]; // [esp+10h] [ebp-4Ch] BYREF
  int v10; // [esp+14h] [ebp-48h]
  _BYTE v11[4]; // [esp+2Ch] [ebp-30h] BYREF
  _DWORD *v12; // [esp+30h] [ebp-2Ch]
  _DWORD v13[2]; // [esp+48h] [ebp-14h] BYREF
  int v14; // [esp+58h] [ebp-4h]

  v13[1] = this;
  v2 = *(_DWORD *)(*(this + 1) + 12);
  if ( *(_DWORD *)(v2 + 12) == 10003
    || *(_DWORD *)(v2 + 12) == 511
    || *(_DWORD *)(v2 + 12) == 5114
    || *(_DWORD *)(v2 + 12) == 5112
    || *(_DWORD *)(v2 + 12) == 5113
    || *(_DWORD *)(v2 + 12) == 5117
    || *(_DWORD *)(v2 + 12) == 4512
    || sub_D3AC60(v2) == 10000
    || *(_DWORD *)(*(_DWORD *)(*(this + 1) + 12) + 12) == 482 )
  {
    return 0;
  }
  CObList::CObList((CObList *)v9, 10);
  v8 = (struct CObList *)(*(this + 1) + 72);
  v14 = 0;
  CObList::AddTail((CObList *)v9, v8);
  v13[0] = v10;
  if ( v10 )
  {
    while ( 1 )
    {
      CObList::CObList((CObList *)v11, 10);
      LOBYTE(v14) = 1;
      v3 = *(_DWORD *)sub_B985A0(v13);
      sub_BBE700((CObList *)v11);
      sub_BAE7B0(*(_DWORD *)(v3 + 44));
      v4 = v12;
      if ( v12 )
        break;
LABEL_17:
      LOBYTE(v14) = 0;
      CObList::~CObList((CObList *)v11);
      if ( !v13[0] )
        goto LABEL_18;
    }
    while ( 1 )
    {
      if ( !v4 )
        AfxThrowInvalidArgException();
      v5 = v4[2];
      v4 = (_DWORD *)*v4;
      if ( (unsigned __int8)sub_CD4BA0(*(_DWORD *)(v5 + 40)) )
      {
        v6 = sub_C17B40(v5);
        if ( v6 )
          break;
        v6 = sub_C19880(v5);
        if ( v6 )
          break;
      }
      if ( !v4 )
        goto LABEL_17;
    }
    LOBYTE(v14) = 0;
    CObList::~CObList((CObList *)v11);
  }
  else
  {
LABEL_18:
    v6 = 0;
  }
  v14 = -1;
  CObList::~CObList((CObList *)v9);
  return v6;
}