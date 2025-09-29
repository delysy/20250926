int __thiscall sub_C196B0(_DWORD *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  void *v5; // edi
  int v6; // eax
  int v7; // edi
  struct CObList *v9; // [esp-4h] [ebp-5Ch]
  int v10; // [esp+0h] [ebp-58h]
  int v11; // [esp+4h] [ebp-54h]
  _BYTE v12[4]; // [esp+10h] [ebp-48h] BYREF
  _DWORD *v13; // [esp+14h] [ebp-44h]
  _BYTE v14[4]; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD *v15; // [esp+30h] [ebp-28h]
  _DWORD *v16; // [esp+48h] [ebp-10h]
  int v17; // [esp+54h] [ebp-4h]

  CObList::CObList((CObList *)v12, 10);
  v9 = (struct CObList *)(*(this + 1) + 72);
  v17 = 0;
  CObList::AddTail((CObList *)v12, v9);
  v2 = v13;
  if ( v13 )
  {
    while ( 1 )
    {
      CObList::CObList((CObList *)v14, 10);
      LOBYTE(v17) = 1;
      if ( !v2 )
LABEL_28:
        AfxThrowInvalidArgException();
      v16 = (_DWORD *)*v2;
      sub_BBE700((CObList *)v14);
      v3 = v15;
      if ( v15 )
        break;
LABEL_24:
      LOBYTE(v17) = 0;
      CObList::~CObList((CObList *)v14);
      v2 = v16;
      if ( !v16 )
        goto LABEL_25;
    }
    while ( 1 )
    {
      v4 = v3;
      if ( !v3 )
        goto LABEL_28;
      v3 = (_DWORD *)*v3;
      v5 = (void *)v4[2];
      if ( sub_D3AC60(*(_DWORD *)(*(this + 1) + 12)) != 10000 )
      {
        v6 = *(_DWORD *)(*(this + 1) + 12);
        if ( *(_DWORD *)(v6 + 12) != 10003
          && *(_DWORD *)(v6 + 12) != 511
          && *(_DWORD *)(v6 + 12) != 5114
          && *(_DWORD *)(v6 + 12) != 5112
          && *(_DWORD *)(v6 + 12) != 5113
          && *(_DWORD *)(v6 + 12) != 5117
          && *(_DWORD *)(v6 + 12) != 4512
          && *(_DWORD *)(v6 + 12) != 471
          && *(_DWORD *)(v6 + 12) != 482
          && (*(_DWORD *)(v6 + 12) != 511
           && *(_DWORD *)(v6 + 12) != 5112
           && *(_DWORD *)(v6 + 12) != 5113
           && *(_DWORD *)(v6 + 12) != 5117
           || (int)sub_C5D450(v10, v11) <= 1)
          && (int)sub_C5E7C0(v10, v11) < 1
          && (int)sub_C5E5F0(v10, v11) < 1 )
        {
          v7 = sub_C19400(v5);
          if ( v7 )
            break;
        }
      }
      if ( !v3 )
        goto LABEL_24;
    }
    LOBYTE(v17) = 0;
    CObList::~CObList((CObList *)v14);
  }
  else
  {
LABEL_25:
    v7 = 0;
  }
  v17 = -1;
  CObList::~CObList((CObList *)v12);
  return v7;
}