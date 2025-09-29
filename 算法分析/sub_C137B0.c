int __thiscall sub_C137B0(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // edi
  struct CObList *v7; // [esp-4h] [ebp-5Ch]
  int v8; // [esp+0h] [ebp-58h]
  int v9; // [esp+4h] [ebp-54h]
  _BYTE v10[4]; // [esp+10h] [ebp-48h] BYREF
  int v11; // [esp+14h] [ebp-44h]
  _BYTE v12[4]; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD *v13; // [esp+30h] [ebp-28h]
  int v14; // [esp+48h] [ebp-10h] BYREF
  int v15; // [esp+54h] [ebp-4h]

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
  CObList::CObList((CObList *)v10, 10);
  v7 = (struct CObList *)(*(this + 1) + 72);
  v15 = 0;
  CObList::AddTail((CObList *)v10, v7);
  v14 = v11;
  if ( v11 )
  {
    while ( 1 )
    {
      CObList::CObList((CObList *)v12, 10);
      LOBYTE(v15) = 1;
      sub_B985A0(&v14);
      sub_BBE700((CObList *)v12);
      v3 = v13;
      if ( v13 )
        break;
LABEL_17:
      LOBYTE(v15) = 0;
      CObList::~CObList((CObList *)v12);
      if ( !v14 )
        goto LABEL_18;
    }
    while ( 1 )
    {
      if ( !v3 )
        AfxThrowInvalidArgException();
      v4 = v3[2];
      v3 = (_DWORD *)*v3;
      if ( (int)sub_C5E7C0(v8, v9) < 1 && (int)sub_C5E5F0(v8, v9) < 1 )
      {
        v5 = sub_C13160(v4);
        if ( v5 )
          break;
      }
      if ( !v3 )
        goto LABEL_17;
    }
    LOBYTE(v15) = 0;
    CObList::~CObList((CObList *)v12);
  }
  else
  {
LABEL_18:
    if ( sub_D97340(*(this + 1)) == 1 )
      sub_DAA5B0(v8, v9);
    v5 = 0;
  }
  v15 = -1;
  CObList::~CObList((CObList *)v10);
  return v5;
}