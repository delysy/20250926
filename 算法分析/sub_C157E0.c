int __thiscall sub_C157E0(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // edi
  struct CObList *v6; // [esp-4h] [ebp-5Ch]
  int v7; // [esp-4h] [ebp-5Ch]
  _BYTE v8[4]; // [esp+10h] [ebp-48h] BYREF
  int v9; // [esp+14h] [ebp-44h]
  _BYTE v10[4]; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD *v11; // [esp+30h] [ebp-28h]
  int v12; // [esp+48h] [ebp-10h] BYREF
  int v13; // [esp+54h] [ebp-4h]

  v2 = *(_DWORD *)(*(this + 1) + 12);
  if ( *(_DWORD *)(v2 + 12) == 10003
    || *(_DWORD *)(v2 + 12) == 511
    || *(_DWORD *)(v2 + 12) == 5114
    || *(_DWORD *)(v2 + 12) == 5112
    || *(_DWORD *)(v2 + 12) == 5113
    || *(_DWORD *)(v2 + 12) == 5117
    || *(_DWORD *)(v2 + 12) == 4512
    || *(_DWORD *)(v2 + 12) == 471
    || *(_DWORD *)(v2 + 12) == 482 )
  {
    return 0;
  }
  CObList::CObList((CObList *)v8, 10);
  v6 = (struct CObList *)(*(this + 1) + 72);
  v13 = 0;
  CObList::AddTail((CObList *)v8, v6);
  v12 = v9;
  if ( v9 )
  {
    while ( 1 )
    {
      CObList::CObList((CObList *)v10, 10);
      LOBYTE(v13) = 1;
      sub_B985A0(&v12);
      sub_BBE700((CObList *)v10);
      v3 = v11;
      if ( v11 )
        break;
LABEL_15:
      LOBYTE(v13) = 0;
      CObList::~CObList((CObList *)v10);
      if ( !v12 )
        goto LABEL_16;
    }
    while ( 1 )
    {
      if ( !v3 )
        AfxThrowInvalidArgException();
      v7 = v3[2];
      v3 = (_DWORD *)*v3;
      v4 = sub_C15470(v7);
      if ( v4 )
        break;
      if ( !v3 )
        goto LABEL_15;
    }
    LOBYTE(v13) = 0;
    CObList::~CObList((CObList *)v10);
  }
  else
  {
LABEL_16:
    v4 = 0;
  }
  v13 = -1;
  CObList::~CObList((CObList *)v8);
  return v4;
}