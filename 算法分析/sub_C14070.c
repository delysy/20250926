int __thiscall sub_C14070(_DWORD *this)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // edi
  struct CObList *v7; // [esp-4h] [ebp-5Ch]
  int v8; // [esp+0h] [ebp-58h]
  int v9; // [esp+4h] [ebp-54h]
  _BYTE v10[4]; // [esp+10h] [ebp-48h] BYREF
  _DWORD *v11; // [esp+14h] [ebp-44h]
  _BYTE v12[4]; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD *v13; // [esp+30h] [ebp-28h]
  _DWORD *v14; // [esp+48h] [ebp-10h]
  int v15; // [esp+54h] [ebp-4h]

  v14 = this;
  if ( *(_DWORD *)(*(_DWORD *)(*(this + 1) + 12) + 12) != 10002 )
    return 0;
  CObList::CObList((CObList *)v10, 10);
  v7 = (struct CObList *)(*(this + 1) + 72);
  v15 = 0;
  CObList::AddTail((CObList *)v10, v7);
  v3 = v11;
  if ( v11 )
  {
    while ( 1 )
    {
      CObList::CObList((CObList *)v12, 10);
      LOBYTE(v15) = 1;
      if ( !v3 )
LABEL_16:
        AfxThrowInvalidArgException();
      v3 = (_DWORD *)*v3;
      sub_BBE700((CObList *)v12);
      v4 = v13;
      if ( v13 )
        break;
LABEL_12:
      LOBYTE(v15) = 0;
      CObList::~CObList((CObList *)v12);
      if ( !v3 )
        goto LABEL_13;
    }
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_16;
      v5 = v4[2];
      v4 = (_DWORD *)*v4;
      if ( (unsigned __int8)sub_CD4BA0(*(_DWORD *)(v5 + 40)) )
      {
        if ( (int)sub_C5E7C0(v8, v9) < 1 && (int)sub_C5E5F0(v8, v9) < 1 )
        {
          v6 = sub_C13960(v5);
          if ( v6 )
            break;
        }
      }
      if ( !v4 )
        goto LABEL_12;
    }
    LOBYTE(v15) = 0;
    CObList::~CObList((CObList *)v12);
  }
  else
  {
LABEL_13:
    v6 = 0;
  }
  v15 = -1;
  CObList::~CObList((CObList *)v10);
  return v6;
}