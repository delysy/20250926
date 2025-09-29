BOOL __thiscall sub_D730D0(_DWORD *this)
{
  _DWORD *v1; // eax
  int v2; // esi
  _DWORD *v3; // esi
  int v4; // edi
  char v5; // bl
  int v6; // eax
  int v7; // ebx
  int v9; // esi
  int v10; // [esp+0h] [ebp-8Ch]
  int v11; // [esp+4h] [ebp-88h]
  _BYTE v12[68]; // [esp+10h] [ebp-7Ch] BYREF
  int v13; // [esp+54h] [ebp-38h]
  _BYTE v14[4]; // [esp+58h] [ebp-34h] BYREF
  _DWORD *v15; // [esp+5Ch] [ebp-30h]
  _DWORD *v16; // [esp+74h] [ebp-18h]
  int v17; // [esp+78h] [ebp-14h]
  _DWORD *v18; // [esp+7Ch] [ebp-10h]
  int v19; // [esp+88h] [ebp-4h]

  v18 = this;
  v1 = (_DWORD *)*(this + 19);
  if ( !v1 )
    return sub_DA2F80(v10, v11) != 0;
  while ( 1 )
  {
    if ( !v1 )
LABEL_19:
      AfxThrowInvalidArgException();
    v2 = v1[2];
    v16 = (_DWORD *)*v1;
    v17 = v2;
    CObList::CObList((CObList *)v14, 10);
    v19 = 0;
    sub_BBE700((CObList *)v14);
    v3 = v15;
    if ( v15 )
      break;
LABEL_14:
    v19 = -1;
    CObList::~CObList((CObList *)v14);
    v1 = v16;
    if ( !v16 )
      return sub_DA2F80(v10, v11) != 0;
  }
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_19;
    v4 = v3[2];
    v3 = (_DWORD *)*v3;
    if ( *(_DWORD *)(v4 + 16) )
      break;
LABEL_13:
    if ( !v3 )
      goto LABEL_14;
  }
  sub_D481A0(v4);
  LOBYTE(v19) = 1;
  v13 = v17;
  v5 = sub_D7D680(v4);
  if ( sub_D3AC60(v18[3]) == 10000 && (*(_DWORD *)(*(_DWORD *)(v4 + 40) + 508) == 3 || v5) )
    v6 = sub_D49500(v10, v11);
  else
    v6 = sub_D48B10(v10, v11);
  v7 = v6;
  sub_C59740(v4);
  LOBYTE(v19) = 0;
  if ( !v7 )
  {
    sub_D484D0(v12);
    goto LABEL_13;
  }
  v9 = 62003;
  if ( v7 == 61381 )
    v9 = 61381;
  sub_D484D0(v12);
  v19 = -1;
  CObList::~CObList((CObList *)v14);
  return v9;
}