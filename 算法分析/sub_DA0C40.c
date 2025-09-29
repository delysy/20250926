void __thiscall sub_DA0C40(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ebx
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // [esp+0h] [ebp-ACh]
  int v17; // [esp+4h] [ebp-A8h]
  _BYTE v18[4]; // [esp+10h] [ebp-9Ch] BYREF
  _DWORD *v19; // [esp+14h] [ebp-98h]
  _BYTE v20[4]; // [esp+2Ch] [ebp-80h] BYREF
  _DWORD *v21; // [esp+30h] [ebp-7Ch]
  _DWORD *v22; // [esp+48h] [ebp-64h]
  void *v23; // [esp+4Ch] [ebp-60h]
  _DWORD *v24; // [esp+50h] [ebp-5Ch]
  _DWORD *v25; // [esp+54h] [ebp-58h]
  int v26; // [esp+58h] [ebp-54h]
  int v27; // [esp+5Ch] [ebp-50h]
  int v28; // [esp+60h] [ebp-4Ch]
  int v29; // [esp+64h] [ebp-48h]
  int v30; // [esp+68h] [ebp-44h]
  int v31; // [esp+6Ch] [ebp-40h]
  int v32; // [esp+70h] [ebp-3Ch]
  int v33; // [esp+74h] [ebp-38h]
  int v34; // [esp+78h] [ebp-34h]
  struct tagRECT rcDst; // [esp+7Ch] [ebp-30h] BYREF
  struct tagRECT v36; // [esp+8Ch] [ebp-20h] BYREF
  int v37; // [esp+A8h] [ebp-4h]

  v22 = this;
  v2 = *(this + 3);
  if ( *(_DWORD *)(v2 + 12) == 482
    || *(_DWORD *)(v2 + 12) == 4821
    || *(_DWORD *)(v2 + 12) == 5112
    || *(_DWORD *)(v2 + 12) == 511
    || *(_DWORD *)(v2 + 12) == 5113
    || *(_DWORD *)(v2 + 12) == 5117
    || *(_DWORD *)(v2 + 12) == 5114
    || *(_DWORD *)(v2 + 12) == 5115 )
  {
    v23 = operator new[](0x40u);
    CObList::CObList((CObList *)v18, 10);
    v37 = 0;
    CObList::AddTail((CObList *)v18, (struct CObList *)(this + 18));
    v3 = v19;
    v33 = 0;
    v31 = 0;
    while ( v3 )
    {
      CObList::CObList((CObList *)v20, 10);
      LOBYTE(v37) = 1;
      if ( !v3 )
LABEL_36:
        AfxThrowInvalidArgException();
      v3 = (_DWORD *)*v3;
      v25 = v3;
      sub_BBE700((CObList *)v20);
      v4 = v21;
      if ( v21 )
      {
        do
        {
          if ( !v4 )
            goto LABEL_36;
          v5 = v4[2];
          v6 = *(_DWORD *)(v5 + 44);
          v24 = (_DWORD *)*v4;
          v26 = v5;
          v30 = v6;
          v28 = sub_DE3490(v16, v17);
          v7 = *(_DWORD *)(v6 + 12);
          v8 = 0;
          v29 = 0;
          if ( v7 > 0 )
          {
            do
            {
              if ( v8 < 0 )
              {
                v9 = 0;
              }
              else
              {
                if ( v8 >= *(_DWORD *)(v6 + 12) )
                  goto LABEL_36;
                v9 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 4 * v8);
              }
              v10 = 0;
              v32 = 0;
              do
              {
                v11 = 88 * v10;
                if ( *(_DWORD *)(88 * v10 + v9 + 12) )
                {
                  v12 = 0;
                  v34 = 0;
                  v13 = v9 + 16;
                  v27 = -16 - v9;
                  do
                  {
                    if ( !*(_DWORD *)(v13 - 4) )
                    {
                      *(_DWORD *)(v13 - 4) = *(_DWORD *)(v11 + v9 + 12);
                      *(_DWORD *)v13 = *(_DWORD *)(v11 + v9 + 16);
                      *(_DWORD *)(v13 + 4) = *(_DWORD *)(v11 + v9 + 20);
                      *(_DWORD *)(v13 + 8) = *(_DWORD *)(v11 + v9 + 24);
                      *(_DWORD *)(v13 + 12) = *(_DWORD *)(v11 + v9 + 28);
                      *(_DWORD *)(v13 + 16) = *(_DWORD *)(v11 + v9 + 32);
                      *(_DWORD *)(v13 + 20) = *(_DWORD *)(v11 + v9 + 36);
                      *(_DWORD *)(v13 + 24) = *(_DWORD *)(v11 + v9 + 40);
                      *(_DWORD *)(v13 + 28) = *(_DWORD *)(v11 + v9 + 44);
                      *(_DWORD *)(v13 + 32) = *(_DWORD *)(v11 + v9 + 48);
                      *(_DWORD *)(v13 + 36) = *(_DWORD *)(v11 + v9 + 52);
                      *(_QWORD *)(v13 + 40) = *(_QWORD *)(v11 + v9 + 56);
                      *(_QWORD *)(v13 + 48) = *(_QWORD *)(v11 + v9 + 64);
                      *(_QWORD *)(v13 + 56) = *(_QWORD *)(v11 + v9 + 72);
                      *(_QWORD *)(v13 + 64) = *(_QWORD *)(v11 + v9 + 80);
                      *(_QWORD *)(v13 + 72) = *(_QWORD *)(v11 + v9 + 88);
                      *(_DWORD *)(v13 + 36) = *(_DWORD *)(v11 + v9 + 52);
                      *(_QWORD *)(v11 + v9 + 56) = 0xC0F869FFFF972474uLL;
                      *(_QWORD *)(v11 + v9 + 64) = 0xC0F869FFFF972474uLL;
                      *(_DWORD *)(v11 + v9 + 12) = 0;
                      *(_DWORD *)(v11 + v9 + 16) = 0;
                      *(_DWORD *)(v11 + v9 + 20) = 0;
                      *(_DWORD *)(v11 + v9 + 24) = 0;
                      *(_DWORD *)(v11 + v9 + 28) = 0;
                      *(_DWORD *)(v11 + v9 + 32) = 0;
                      *(_DWORD *)(v11 + v9 + 36) = -1;
                      *(_DWORD *)(v11 + v9 + 40) = -1;
                      *(_DWORD *)(v11 + v9 + 44) = 0;
                      *(_DWORD *)(v11 + v9 + 48) = 0;
                      *(_DWORD *)(v11 + v9 + 52) = -1;
                      *(_QWORD *)(v11 + v9 + 72) = 0;
                      CopyRect(&rcDst, 0);
                      ++v33;
                      *(struct tagRECT *)(v11 + v9 + 80) = rcDst;
                      v14 = sub_DE3490(v16, v17);
                      if ( v14 >= v28 || sub_C55180(v9) )
                      {
                        *(_DWORD *)(v11 + v9 + 12) = *(_DWORD *)(v13 - 4);
                        *(_DWORD *)(v11 + v9 + 16) = *(_DWORD *)v13;
                        *(_DWORD *)(v11 + v9 + 20) = *(_DWORD *)(v13 + 4);
                        *(_DWORD *)(v11 + v9 + 24) = *(_DWORD *)(v13 + 8);
                        *(_DWORD *)(v11 + v9 + 28) = *(_DWORD *)(v13 + 12);
                        *(_DWORD *)(v11 + v9 + 32) = *(_DWORD *)(v13 + 16);
                        *(_DWORD *)(v11 + v9 + 36) = *(_DWORD *)(v13 + 20);
                        *(_DWORD *)(v11 + v9 + 40) = *(_DWORD *)(v13 + 24);
                        *(_DWORD *)(v11 + v9 + 44) = *(_DWORD *)(v13 + 28);
                        *(_DWORD *)(v11 + v9 + 48) = *(_DWORD *)(v13 + 32);
                        *(_DWORD *)(v11 + v9 + 52) = *(_DWORD *)(v13 + 36);
                        *(_QWORD *)(v11 + v9 + 56) = *(_QWORD *)(v13 + 40);
                        *(_QWORD *)(v11 + v9 + 64) = *(_QWORD *)(v13 + 48);
                        *(_QWORD *)(v11 + v9 + 72) = *(_QWORD *)(v13 + 56);
                        *(_QWORD *)(v11 + v9 + 80) = *(_QWORD *)(v13 + 64);
                        *(_QWORD *)(v11 + v9 + 88) = *(_QWORD *)(v13 + 72);
                        *(_DWORD *)(v11 + v9 + 52) = *(_DWORD *)(v13 + 36);
                        *(_QWORD *)(v13 + 40) = 0xC0F869FFFF972474uLL;
                        *(_QWORD *)(v13 + 48) = 0xC0F869FFFF972474uLL;
                        *(_DWORD *)(v13 - 4) = 0;
                        *(_DWORD *)v13 = 0;
                        *(_DWORD *)(v13 + 4) = 0;
                        *(_DWORD *)(v13 + 8) = 0;
                        *(_DWORD *)(v13 + 12) = 0;
                        *(_DWORD *)(v13 + 16) = 0;
                        *(_DWORD *)(v13 + 20) = -1;
                        *(_DWORD *)(v13 + 24) = -1;
                        *(_DWORD *)(v13 + 28) = 0;
                        *(_DWORD *)(v13 + 32) = 0;
                        *(_DWORD *)(v13 + 36) = -1;
                        *(_QWORD *)(v13 + 56) = 0;
                        CopyRect(&v36, 0);
                        ++v31;
                        *(struct tagRECT *)(v13 + 64) = v36;
                      }
                      else
                      {
                        v32 = v34;
                        v11 = v13 + v27;
                        v28 = sub_DE3490(v16, v17);
                      }
                      v12 = v34;
                    }
                    ++v12;
                    v13 += 88;
                    v34 = v12;
                  }
                  while ( v12 < 16 );
                  v10 = v32;
                }
                v32 = ++v10;
              }
              while ( v10 < 16 );
              v6 = v30;
              v8 = v29 + 1;
              v15 = *(_DWORD *)(v30 + 12);
              v29 = v8;
            }
            while ( v15 > v8 );
          }
          v4 = v24;
        }
        while ( v24 );
        v3 = v25;
      }
      LOBYTE(v37) = 0;
      CObList::~CObList((CObList *)v20);
    }
    sub_E5BBE0(v22[2], "delete count : %d , recovere count %d\n");
    operator delete[](v23);
    v37 = -1;
    CObList::~CObList((CObList *)v18);
  }
}