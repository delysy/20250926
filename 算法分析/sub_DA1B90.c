int __thiscall sub_DA1B90(int this)
{
  int v2; // eax
  _DWORD *v3; // edi
  int v4; // ecx
  int v6; // [esp-4h] [ebp-44h]
  _BYTE v7[4]; // [esp+Ch] [ebp-34h] BYREF
  _DWORD *v8; // [esp+10h] [ebp-30h]
  _BYTE v9[8]; // [esp+28h] [ebp-18h] BYREF
  int v10; // [esp+30h] [ebp-10h]
  int v11; // [esp+3Ch] [ebp-4h]

  sub_E5BBE0(*(_DWORD *)(this + 8), "\n*** Start PostOptimization() ***\n");
  sub_E58780(*(_DWORD **)(this + 8));
  sub_DA1730();
  sub_E5BBE0(*(_DWORD *)(this + 8), "\n*** After NozzleReAssignAlgorithmForTapeFlux() ***\n");
  sub_E58780(*(_DWORD **)(this + 8));
  sub_DA18A0();
  sub_E5BBE0(*(_DWORD *)(this + 8), "\n*** After PlacementSeqeunceOptimization() ***\n");
  sub_E58780(*(_DWORD **)(this + 8));
  sub_DA0C40();
  v2 = *(_DWORD *)(this + 12);
  if ( *(_DWORD *)(v2 + 12) == 482
    || *(_DWORD *)(v2 + 12) == 4821
    || *(_DWORD *)(v2 + 12) == 5112
    || *(_DWORD *)(v2 + 12) == 511
    || *(_DWORD *)(v2 + 12) == 5113
    || *(_DWORD *)(v2 + 12) == 5117
    || *(_DWORD *)(v2 + 12) == 5114
    || *(_DWORD *)(v2 + 12) == 5115 )
  {
    sub_E5BBE0(*(_DWORD *)(this + 8), "\n*** After MoveStepforCyclesToreduceNozzleChange()() ***\n");
    sub_E58780(*(_DWORD **)(this + 8));
  }
  CObList::CObList((CObList *)v7, 10);
  v11 = 0;
  CObList::AddTail((CObList *)v7, (struct CObList *)(this + 16));
  v3 = v8;
  if ( v8 )
  {
    while ( 1 )
    {
      if ( !v3 )
        AfxThrowInvalidArgException();
      v6 = v3[2];
      v3 = (_DWORD *)*v3;
      if ( (int)sub_D97FD0(v6) > 2000 )
        break;
      if ( !v3 )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    sub_C0C190(this);
    LOBYTE(v11) = 1;
    sub_C157E0();
    sub_E5BBE0(*(_DWORD *)(this + 8), "\n*** After MoveCyclesToReduceNozzleChange() ***\n");
    sub_E58780(*(_DWORD **)(this + 8));
    if ( *(_BYTE *)(this + 884) )
    {
      v4 = *(_DWORD *)(this + 12);
      if ( *(_DWORD *)(v4 + 12) == 10003
        || *(_DWORD *)(v4 + 12) == 1681
        || *(_DWORD *)(v4 + 12) == 4811
        || *(_DWORD *)(v4 + 12) == 4821
        || *(_DWORD *)(v4 + 12) == 511
        || *(_DWORD *)(v4 + 12) == 485
        || *(_DWORD *)(v4 + 12) == 4851
        || *(_DWORD *)(v4 + 12) == 5114
        || *(_DWORD *)(v4 + 12) == 5112
        || *(_DWORD *)(v4 + 12) == 5113
        || *(_DWORD *)(v4 + 12) == 5117
        || *(_DWORD *)(v4 + 12) == 4512
        || sub_D3AC60(v4) == 10000
        || *(_DWORD *)(*(_DWORD *)(this + 12) + 12) == 482 )
      {
        sub_D9E3E0();
      }
      v10 = 0;
      sub_C14980();
      v10 = 1;
      sub_C14980();
      sub_E5BBE0(*(_DWORD *)(this + 8), "\n*** After Old-MTT ***\n");
      sub_E58780(*(_DWORD **)(this + 8));
    }
    sub_C137B0();
    sub_E5BBE0(*(_DWORD *)(this + 8), "\n*** After MergeCyclesToReduceCycleCount() ***\n");
    sub_E58780(*(_DWORD **)(this + 8));
    sub_C196B0();
    sub_E5BBE0(*(_DWORD *)(this + 8), "\n*** After RemoveNzChgInAllGantryTasks() ***\n");
    sub_E58780(*(_DWORD **)(this + 8));
    if ( *(_BYTE *)(this + 884) )
    {
      sub_C152D0();
      sub_E5BBE0(*(_DWORD *)(this + 8), "\n*** After MixTapeAndTrayBySimGroup() ***\n");
      sub_E58780(*(_DWORD **)(this + 8));
    }
    sub_C14070();
    sub_E5BBE0(*(_DWORD *)(this + 8), "\n*** After MergeCyclesToReduceCycleCountForEXCENSeries() ***\n");
    sub_E58780(*(_DWORD **)(this + 8));
    sub_DAA0C0();
    sub_E5BBE0(*(_DWORD *)(this + 8), "\n*** After SetPickAndPlaceSequences() ***\n");
    sub_E58780(*(_DWORD **)(this + 8));
    LOBYTE(v11) = 0;
    sub_C0C4D0(v9);
  }
  v11 = -1;
  CObList::~CObList((CObList *)v7);
  return 0;
}