void __thiscall sub_DA18A0(_DWORD *this)
{
  _DWORD *v2; // ebx
  int v3; // esi
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // eax
  _BYTE v8[4]; // [esp+10h] [ebp-4Ch] BYREF
  _DWORD *v9; // [esp+14h] [ebp-48h]
  _BYTE v10[4]; // [esp+2Ch] [ebp-30h] BYREF
  _DWORD *v11; // [esp+30h] [ebp-2Ch]
  void *v12; // [esp+48h] [ebp-14h]
  _DWORD *v13; // [esp+4Ch] [ebp-10h]
  int v14; // [esp+58h] [ebp-4h]

  v13 = this;
  if ( sub_D3AC60(*(this + 3)) == 10000 )
  {
    CObList::CObList((CObList *)v8, 10);
    v14 = 0;
    CObList::AddTail((CObList *)v8, (struct CObList *)(this + 18));
    v2 = v9;
    while ( v2 )
    {
      if ( !v2 )
        goto LABEL_17;
      v3 = v2[2];
      v2 = (_DWORD *)*v2;
      if ( *(_DWORD *)(*(_DWORD *)(v3 + 40) + 1132) != -1 )
      {
        CObList::CObList((CObList *)v10, 10);
        LOBYTE(v14) = 1;
        sub_BBE700((CObList *)v10);
        v4 = v11;
        if ( v11 )
        {
          while ( 1 )
          {
            v5 = v4;
            if ( !v4 )
              break;
            v6 = v4[2];
            v4 = (_DWORD *)*v4;
            if ( (unsigned __int8)sub_D7D680(v5[2]) )
            {
              v12 = operator new(0xBCu);
              LOBYTE(v14) = 2;
              if ( v12 )
                v7 = sub_D452F0(v6);
              else
                v7 = 0;
              LOBYTE(v14) = 1;
              sub_D46090(v7);
            }
            if ( !v4 )
              goto LABEL_13;
          }
LABEL_17:
          AfxThrowInvalidArgException();
        }
LABEL_13:
        LOBYTE(v14) = 0;
        CObList::~CObList((CObList *)v10);
      }
    }
    v14 = -1;
    CObList::~CObList((CObList *)v8);
  }
}