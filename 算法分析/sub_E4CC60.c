int __thiscall sub_E4CC60(CCmdTarget *this)
{
  int v2; // edi
  int result; // eax
  int v4; // edi

  *((_DWORD *)this + 41) = 1;
  CWnd::ShowWindow((CCmdTarget *)((char *)this + 3196), 5);
  CCmdTarget::BeginWaitCursor(this);
  v2 = sub_DA79A0();
  if ( *(int *)(*(_DWORD *)(*((_DWORD *)this + 98) + 12) + 112) > 1 )
    sub_E5B030();
  if ( v2 )
  {
    sub_D8D900();
    if ( *((_DWORD *)this + 796) != 4311 || *((int *)this + 784) < 489 || (result = sub_D80140()) == 0 )
    {
      v4 = sub_D8FD30();
      sub_E518F0();
      sub_E4BFF0();
      sub_E5BBE0(this, "After Rebalancing for the 2-Stage Production of SM431L.....\n");
      sub_E518F0();
      CWnd::ShowWindow((CCmdTarget *)((char *)this + 3196), 0);
      *((_DWORD *)this + 41) = 0;
      CCmdTarget::EndWaitCursor(this);
      if ( v4 )
      {
        return v4;
      }
      else
      {
        *((_DWORD *)this + 61) = 1;
        return 0;
      }
    }
  }
  else
  {
    CWnd::ShowWindow((CCmdTarget *)((char *)this + 3196), 0);
    *((_DWORD *)this + 41) = 0;
    CCmdTarget::EndWaitCursor(this);
    return 62005;
  }
  return result;
}