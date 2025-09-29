int __thiscall sub_DA4270(_DWORD *this)
{
  _DWORD *v1; // ebx
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  bool v6; // zf
  int v7; // esi
  _DWORD *i; // ecx
  _DWORD *v9; // eax
  struct CObList *v10; // eax
  _DWORD *v11; // edi
  _DWORD *v12; // esi
  _DWORD *v13; // ecx
  int v14; // ebx
  _DWORD *v15; // esi
  struct CObject *v16; // edi
  int v17; // eax
  int v18; // eax
  struct CObList *v20; // [esp-4h] [ebp-C4h]
  int v21; // [esp+0h] [ebp-C0h]
  int v22; // [esp+4h] [ebp-BCh]
  char v23[4]; // [esp+10h] [ebp-B0h] BYREF
  _DWORD *v24; // [esp+14h] [ebp-ACh]
  char v25[4]; // [esp+2Ch] [ebp-94h] BYREF
  _DWORD *v26; // [esp+30h] [ebp-90h]
  char v27[4]; // [esp+48h] [ebp-78h] BYREF
  _DWORD *v28; // [esp+4Ch] [ebp-74h]
  char v29[4]; // [esp+64h] [ebp-5Ch] BYREF
  _DWORD *v30; // [esp+68h] [ebp-58h]
  char v31[4]; // [esp+80h] [ebp-40h] BYREF
  _DWORD *v32; // [esp+84h] [ebp-3Ch]
  _DWORD *v33; // [esp+9Ch] [ebp-24h]
  _DWORD *v34; // [esp+A0h] [ebp-20h]
  int v35; // [esp+A4h] [ebp-1Ch]
  _DWORD *v36; // [esp+A8h] [ebp-18h]
  int v37; // [esp+ACh] [ebp-14h]
  int v38; // [esp+B0h] [ebp-10h]
  int v39; // [esp+BCh] [ebp-4h]

  v1 = this;
  v34 = this;
  v2 = 0;
  v37 = 0;
  CObList::CObList((CObList *)v31, 10);
  v39 = 0;
  if ( (unsigned __int8)sub_D962D0() )
  {
    sub_D97ED0((CObList *)v31);
  }
  else
  {
    CObList::AddTail((CObList *)v31, (struct CObList *)(v1 + 4));
    v3 = v1[235];
    if ( v3 == 1 || v3 == 2 )
      sub_DB89A0();
  }
  v4 = sub_D768B0(v31);
  v5 = v32;
  v35 = v4;
  if ( v32 )
  {
    while ( 1 )
    {
      if ( !v5 )
        goto LABEL_46;
      v6 = *((_BYTE *)v1 + 133) == 1;
      v7 = v5[2];
      v36 = (_DWORD *)*v5;
      if ( v6 && *(int *)(v7 + 180) <= 0 || v4 == 1 )
        goto LABEL_37;
      if ( *(_BYTE *)(v7 + 1120) )
      {
        for ( i = (_DWORD *)v1[5]; i; *(_BYTE *)(v9[2] + 1084) = 0 )
        {
          v9 = i;
          i = (_DWORD *)*i;
        }
      }
      else
      {
        *(_BYTE *)(v7 + 1084) = 0;
      }
      v37 = 1;
      CObList::CObList((CObList *)v29, 10);
      v6 = *(_BYTE *)(v7 + 1120) == 0;
      LOBYTE(v39) = 1;
      v10 = (struct CObList *)(v1 + 18);
      if ( v6 )
        v10 = (struct CObList *)(v7 + 224);
      CObList::AddTail((CObList *)v29, v10);
      v11 = v30;
      if ( v30 )
        break;
LABEL_24:
      CObList::CObList((CObList *)v23, 10);
      v20 = (struct CObList *)(v1[3] + 128);
      LOBYTE(v39) = 3;
      CObList::AddTail((CObList *)v23, v20);
      v13 = v24;
      if ( !v24 )
        goto LABEL_36;
      do
      {
        if ( !v13 )
          goto LABEL_46;
        v14 = v13[2];
        v33 = (_DWORD *)*v13;
        v38 = v14;
        CObList::CObList((CObList *)v25, 10);
        LOBYTE(v39) = 4;
        sub_CC8E50((CObList *)v25);
        v15 = v26;
        if ( v26 )
        {
          while ( v15 )
          {
            v16 = (struct CObject *)v15[2];
            v15 = (_DWORD *)*v15;
            v17 = *((_DWORD *)v16 + 21);
            if ( !v17 || v17 == 2 )
            {
              if ( !CObList::Find((CObList *)(v14 + 396), v16, 0) )
                CObList::AddTail((CObList *)(v14 + 396), v16);
              v14 = v38;
            }
            if ( !v15 )
              goto LABEL_34;
          }
          goto LABEL_46;
        }
LABEL_34:
        LOBYTE(v39) = 3;
        CObList::~CObList((CObList *)v25);
        v13 = v33;
      }
      while ( v33 );
      v1 = v34;
LABEL_36:
      LOBYTE(v39) = 1;
      CObList::~CObList((CObList *)v23);
      LOBYTE(v39) = 0;
      CObList::~CObList((CObList *)v29);
      v4 = v35;
LABEL_37:
      v5 = v36;
      if ( !v36 )
      {
        v2 = v37;
        goto LABEL_39;
      }
    }
    while ( 1 )
    {
      if ( !v11 )
        goto LABEL_46;
      v11 = (_DWORD *)*v11;
      CObList::CObList((CObList *)v27, 10);
      LOBYTE(v39) = 2;
      sub_BBE700((CObList *)v27);
      v12 = v28;
      if ( v28 )
        break;
LABEL_23:
      LOBYTE(v39) = 1;
      CObList::~CObList((CObList *)v27);
      if ( !v11 )
        goto LABEL_24;
    }
    while ( v12 )
    {
      v12 = (_DWORD *)*v12;
      sub_C4D4A0(v21, v22);
      if ( !v12 )
        goto LABEL_23;
    }
LABEL_46:
    AfxThrowInvalidArgException();
  }
LABEL_39:
  if ( v1[253] )
  {
    v18 = v1[235];
    if ( v18 )
    {
      if ( v18 != 3 && *((_BYTE *)v1 + 133) != 1 && v1[7] == 2 )
        sub_E4AFB0((CObList *)(v1 + 4), sub_BA93F0);
    }
  }
  v39 = -1;
  CObList::~CObList((CObList *)v31);
  return v2;
}