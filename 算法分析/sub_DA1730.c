void __thiscall sub_DA1730(_DWORD *this)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // esi
  int v4; // edi
  void (__thiscall ***v5)(_DWORD); // eax
  void (__thiscall **v6)(_DWORD); // edx
  int v7; // [esp+0h] [ebp-58h]
  int v8; // [esp+4h] [ebp-54h]
  _BYTE v9[4]; // [esp+10h] [ebp-48h] BYREF
  _DWORD *v10; // [esp+14h] [ebp-44h]
  _BYTE v11[4]; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD *v12; // [esp+30h] [ebp-28h]
  void *v13; // [esp+48h] [ebp-10h]
  int v14; // [esp+54h] [ebp-4h]

  if ( sub_D3AC60(*(this + 3)) == 10000 && *(_DWORD *)(*(this + 3) + 12) != 5116 )
  {
    CObList::CObList((CObList *)v9, 10);
    v14 = 0;
    CObList::AddTail((CObList *)v9, (struct CObList *)(this + 18));
    v2 = v10;
    if ( v10 )
    {
      while ( 1 )
      {
        CObList::CObList((CObList *)v11, 10);
        LOBYTE(v14) = 1;
        if ( !v2 )
LABEL_20:
          AfxThrowInvalidArgException();
        v2 = (_DWORD *)*v2;
        sub_BBE700((CObList *)v11);
        v3 = v12;
        if ( v12 )
          break;
LABEL_17:
        LOBYTE(v14) = 0;
        CObList::~CObList((CObList *)v11);
        if ( !v2 )
          goto LABEL_18;
      }
      while ( 1 )
      {
        if ( !v3 )
          goto LABEL_20;
        v4 = v3[2];
        v3 = (_DWORD *)*v3;
        if ( *(_DWORD *)(*(_DWORD *)(v4 + 40) + 508) == 5 )
          break;
LABEL_16:
        if ( !v3 )
          goto LABEL_17;
      }
      if ( (int)sub_C5E7C0(v7, v8) >= 1 || (int)sub_C5E5F0(v7, v8) >= 1 )
      {
        v13 = operator new(0x44u);
        LOBYTE(v14) = 3;
        if ( v13 )
        {
          v5 = (void (__thiscall ***)(_DWORD))sub_D5BDF0(v4);
          goto LABEL_15;
        }
      }
      else
      {
        v13 = operator new(0x38u);
        LOBYTE(v14) = 2;
        if ( v13 )
        {
          v5 = (void (__thiscall ***)(_DWORD))sub_D5BB30(v4);
LABEL_15:
          v6 = *v5;
          LOBYTE(v14) = 1;
          (*v6)(v5);
          goto LABEL_16;
        }
      }
      v5 = 0;
      goto LABEL_15;
    }
LABEL_18:
    v14 = -1;
    CObList::~CObList((CObList *)v9);
  }
}