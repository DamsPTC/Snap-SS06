/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108913f88; end: 108913fa7;  */

undefined ** FUN_108913f88(void)

{
  return &PTR_DAT_110a93d78;
}



/* Entry: 108913fa8; end: 108914013;  */

long * FUN_108913fa8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108915d10();
  if ((char)param_1[2] == '\x01') {
    func_0x000108915d04();
    func_0x000108915f7c();
    func_0x000108915edc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108915ed0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 108914014; end: 108914043;  */

long FUN_108914014(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 108914044; end: 108914077;  */

long FUN_108914044(long param_1)

{
  func_0x000108915dec();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b59fd40();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108914078; end: 10891408b;  */

void FUN_108914078(void)

{
  FUN_108914044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891408c; end: 108914097;  */

undefined ** FUN_10891408c(void)

{
  return &PTR_DAT_110a93dc0;
}



/* Entry: 108914098; end: 108914187;  */

void FUN_108914098(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108915fd4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b59fe28(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108914188; end: 10891418b;  */

void FUN_108914188(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108915e58();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001089160cc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001089160c0();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_108915c90();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x00010b5a0460();
    }
  }
  func_0x000108915e44();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108915f14();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891418c; end: 1089141df;  */

void FUN_10891418c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  
  func_0x000108915f54();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_DAT_110a93a08;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000108915d44();
  }
  func_0x000107c296d0(unaff_x19 + 2);
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return;
}



/* Entry: 1089141e0; end: 10891420b;  */

long FUN_1089141e0(long param_1)

{
  func_0x000108915dec();
  func_0x000107c296d8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10891420c; end: 10891421f;  */

void FUN_10891420c(void)

{
  FUN_1089141e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108914220; end: 10891422b;  */

undefined ** FUN_108914220(void)

{
  return &PTR_DAT_110a93e08;
}



/* Entry: 10891422c; end: 10891425f;  */

void FUN_10891422c(long param_1)

{
  ulong *puVar1;
  
  FUN_1086ebb04(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108914260; end: 1089142d3;  */

long * FUN_108914260(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108915d10();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x000108915d50();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x000108915d6c();
    func_0x0001089160a8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915ed0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1089142d4; end: 10891432b;  */

long FUN_1089142d4(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x000108915fb0();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    func_0x000107c2a268();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108916038();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10891432c; end: 10891432f;  */

void FUN_10891432c(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x000108915f54();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x000107c296d4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108914330; end: 108914363;  */

long FUN_108914330(long param_1)

{
  func_0x000108915dec();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108914364; end: 108914377;  */

void FUN_108914364(void)

{
  FUN_108914330();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108914378; end: 108914383;  */

undefined ** FUN_108914378(void)

{
  return &PTR_DAT_110a93e48;
}



/* Entry: 108914384; end: 1089143bf;  */

void FUN_108914384(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108915fd4();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108916090();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1089143c0; end: 108914463;  */

long * FUN_1089143c0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108915d10();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x000108915d6c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x000108915d04();
    func_0x000108916004();
    func_0x000108915edc();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x000108915d04();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x000108915edc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915ed0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108914464; end: 1089144c7;  */

void FUN_108914464(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108915fd4();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108916088();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108915e10();
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x000108915e10();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108916038();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1089144c8; end: 1089144cb;  */

void FUN_1089144c8(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108915e58();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001089160cc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001089160c0();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108916098();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x000108915e44();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108915f14();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1089144cc; end: 1089144f3;  */

undefined8 FUN_1089144cc(undefined8 param_1)

{
  func_0x000108915dec();
  func_0x000108915ffc();
  return param_1;
}



/* Entry: 1089144f4; end: 108914507;  */

void FUN_1089144f4(void)

{
  FUN_1089144cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108914508; end: 108914513;  */

undefined ** FUN_108914508(void)

{
  return &PTR_DAT_110a93e90;
}



/* Entry: 108914514; end: 10891453f;  */

void FUN_108914514(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108915ee8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108914540; end: 1089145bb;  */

long * FUN_108914540(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000108915df4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_108914584;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_108914584;
  func_0x000108915fec();
  func_0x000108915dc0();
  unaff_x19 = unaff_x22;
LAB_108914584:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x000108915ed0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x20 - (long)unaff_x19 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x20 - (int)unaff_x19) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x19 = unaff_x20;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar3);
  }
  _memcpy(unaff_x19,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)param_3);
}



/* Entry: 1089145bc; end: 108914613;  */

void FUN_1089145bc(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108915e6c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108916038();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 108914614; end: 108914617;  */

void FUN_108914614(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108915d90();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001089160d8();
    }
    func_0x000108915ff4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108914618; end: 10891463b;  */

undefined8 FUN_108914618(undefined8 param_1)

{
  func_0x000108915dec();
  return param_1;
}



/* Entry: 10891463c; end: 10891464f;  */

void FUN_10891463c(void)

{
  FUN_108914618();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108914650; end: 10891466f;  */

undefined ** FUN_108914650(void)

{
  return &PTR_DAT_110a93ed8;
}



/* Entry: 108914670; end: 1089146cf;  */

long * FUN_108914670(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108915d10();
  if ((int)param_1[2] != 0) {
    func_0x000108915d04();
    func_0x000108915da8();
    func_0x000108915de0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108915ed0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1089146d0; end: 1089146ff;  */

long FUN_1089146d0(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x000108915f2c();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 108914700; end: 108914727;  */

undefined8 FUN_108914700(undefined8 param_1)

{
  func_0x000108915dec();
  func_0x000108915ffc();
  return param_1;
}



/* Entry: 108914728; end: 10891473b;  */

void FUN_108914728(void)

{
  FUN_108914700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891473c; end: 108914747;  */

undefined ** FUN_10891473c(void)

{
  return &PTR_DAT_110a93f28;
}



/* Entry: 108914748; end: 108914777;  */

void FUN_108914748(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108915ee8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108914778; end: 108914847;  */

long * FUN_108914778(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  plVar4 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)plVar4 + 0x17);
  plVar5 = param_3;
  if (lVar2 < 0) {
    lVar2 = plVar4[1];
    if (lVar2 == 0) goto LAB_1089147e0;
    plVar1 = (long *)*plVar4;
  }
  else {
    plVar1 = plVar4;
    if (*(char *)((long)plVar4 + 0x17) == '\0') goto LAB_1089147e0;
  }
  func_0x000108915fec(plVar1,lVar2,param_3,&UNK_10f4ec40f);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,1,plVar4,param_2);
  plVar5 = plVar4;
  param_2 = plVar1;
LAB_1089147e0:
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar4 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    func_0x000108916004();
    func_0x000107c280b8(param_2,plVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x000108915ed0();
  if ((long)plVar5 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar3 - iVar6);
      if (iVar3 - iVar6 == 0 || iVar3 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar5);
}



/* Entry: 108914848; end: 1089148c3;  */

void FUN_108914848(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108915e6c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108916038();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 1089148c4; end: 1089148c7;  */

void FUN_1089148c4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108915d90();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001089160d8();
    }
    func_0x000108915ff4();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1089148c8; end: 1089148ef;  */

undefined8 FUN_1089148c8(undefined8 param_1)

{
  func_0x000108915dec();
  func_0x000108915ffc();
  return param_1;
}



/* Entry: 1089148f0; end: 108914903;  */

void FUN_1089148f0(void)

{
  FUN_1089148c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108914904; end: 10891490f;  */

undefined ** FUN_108914904(void)

{
  return &PTR_DAT_110a93f68;
}



/* Entry: 108914910; end: 10891493b;  */

void FUN_108914910(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108915ee8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10891493c; end: 1089149b7;  */

long * FUN_10891493c(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000108915df4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_108914980;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_108914980;
  func_0x000108915fec();
  func_0x000108915dc0();
  unaff_x19 = unaff_x22;
LAB_108914980:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x000108915ed0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x20 - (long)unaff_x19 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x20 - (int)unaff_x19) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x19 = unaff_x20;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar3);
  }
  _memcpy(unaff_x19,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)param_3);
}



/* Entry: 1089149b8; end: 108914a0f;  */

void FUN_1089149b8(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108915e6c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108916038();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 108914a10; end: 108914a13;  */

void FUN_108914a10(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108915d90();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001089160d8();
    }
    func_0x000108915ff4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108914a14; end: 108914a47;  */

long FUN_108914a14(long param_1)

{
  func_0x000108915dec();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108914a48; end: 108914a5b;  */

void FUN_108914a48(void)

{
  FUN_108914a14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108914a5c; end: 108914a67;  */

undefined ** FUN_108914a5c(void)

{
  return &PTR_DAT_110a93fb0;
}



/* Entry: 108914a68; end: 108914b47;  */

void FUN_108914a68(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108915fd4();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108916090();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108914b48; end: 108914b4b;  */

void FUN_108914b48(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108915e58();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001089160cc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001089160c0();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108916098();
    }
  }
  func_0x000108915e44();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108915f14();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108914b4c; end: 108914b6f;  */

undefined8 FUN_108914b4c(undefined8 param_1)

{
  func_0x000108915dec();
  return param_1;
}



/* Entry: 108914b70; end: 108914b83;  */

void FUN_108914b70(void)

{
  FUN_108914b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108914b84; end: 108914ba3;  */

undefined ** FUN_108914b84(void)

{
  return &PTR_DAT_110a93ff8;
}



/* Entry: 108914ba4; end: 108914c03;  */

long * FUN_108914ba4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108915d10();
  if ((int)param_1[2] != 0) {
    func_0x000108915d04();
    func_0x000108915da8();
    func_0x000108915de0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108915ed0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 108914c04; end: 108914c33;  */

long FUN_108914c04(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x000108915f2c();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 108914c34; end: 108914c67;  */

long FUN_108914c34(long param_1)

{
  func_0x000108915dec();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108914c68; end: 108914c6b;  */

long FUN_108914c68(long param_1)

{
  func_0x000108915dec();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108914c6c; end: 108914c7f;  */

void FUN_108914c6c(void)

{
  FUN_108914c34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108914c80; end: 108914c8b;  */

undefined ** FUN_108914c80(void)

{
  return &PTR_DAT_110a94040;
}



/* Entry: 108914c8c; end: 108914cc7;  */

void FUN_108914c8c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108915fd4();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108916090();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108914cc8; end: 108914d47;  */

long * FUN_108914cc8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108915d10();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x000108915d6c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x000108915d04();
    func_0x000108916004();
    func_0x000108915edc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915ed0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108914d48; end: 108914d9f;  */

void FUN_108914d48(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108915fd4();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108916088();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108915e10();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108916038();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 108914da0; end: 108914da3;  */

void FUN_108914da0(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108915e58();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001089160cc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001089160c0();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108916098();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x000108915e44();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108915f14();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108914da4; end: 108914e07;  */

void FUN_108914da4(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108915e58();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001089160cc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001089160c0();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108916098();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x000108915e44();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108915f14();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108914e08; end: 108914e3b;  */

void FUN_108914e08(long param_1,long param_2)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108915f84();
  FUN_108914c8c();
  puVar1 = unaff_x20;
  func_0x000108915e58();
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001089160cc();
  }
  if ((unaff_x20[2] & 1) != 0) {
    func_0x0001089160c0();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x000108916098();
    }
  }
  if ((int)unaff_x20[4] != 0) {
    *(int *)(unaff_x21 + 0x20) = (int)unaff_x20[4];
  }
  func_0x000108915e44();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108915f14();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108914e3c; end: 108914e63;  */

void FUN_108914e3c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110a93af8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 108914e64; end: 108914efb;  */

void FUN_108914e64(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  
  func_0x000108915f54();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_DAT_110a93af8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000108915d44();
  }
  FUN_108915380(unaff_x19 + 2);
  FUN_1088d94f0(unaff_x19 + 5);
  func_0x000107c296d0(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0xb) = 0;
  return;
}



/* Entry: 108914efc; end: 108914f27;  */

long FUN_108914efc(long param_1)

{
  func_0x000108915dec();
  func_0x0001089153ac(param_1 + 0x10);
  return param_1;
}



/* Entry: 108914f28; end: 108914f3b;  */

void FUN_108914f28(void)

{
  FUN_108914efc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108914f3c; end: 108914f47;  */

undefined ** FUN_108914f3c(void)

{
  return &PTR_DAT_110a94090;
}



/* Entry: 108914f48; end: 108914f8b;  */

void FUN_108914f48(long param_1)

{
  ulong *puVar1;
  
  FUN_10879b6d4(param_1 + 0x10);
  func_0x00010879b6e8(param_1 + 0x28);
  FUN_1086ebb04(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108914f8c; end: 108915113;  */

long * FUN_108914f8c(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108915d10();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x000108915d50();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x000108915d6c();
    func_0x0001089160a8();
  }
  iVar3 = *(int *)(unaff_x20 + 0x30);
  while (iVar3 != 0) {
    func_0x000108915d50();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x000108915f24(2);
    func_0x0001089160a8();
  }
  iVar3 = *(int *)(unaff_x20 + 0x48);
  while (iVar3 != 0) {
    func_0x000108915d50();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x000108915f24(3);
    func_0x0001089160a8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915ed0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108915114; end: 108915127;  */

void FUN_108915114(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108915f54();
  FUN_108915114(param_1 + 0x10,param_2 + 0x10);
  FUN_1088c9edc(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x000107c296d4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108915128; end: 10891515b;  */

void FUN_108915128(long param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108915f84();
  FUN_108914f48();
  lVar1 = unaff_x20;
  lVar3 = unaff_x19;
  func_0x000108915f54();
  FUN_108915114(lVar1 + 0x10,lVar3 + 0x10);
  FUN_1088c9edc(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar2 = (ulong *)(unaff_x19 + 0x40);
  func_0x000107c296d4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915e2c();
    if ((*puVar2 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891515c; end: 10891517f;  */

undefined8 FUN_10891515c(undefined8 param_1)

{
  func_0x000108915dec();
  return param_1;
}



/* Entry: 108915180; end: 108915193;  */

void FUN_108915180(void)

{
  FUN_10891515c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108915194; end: 1089151b7;  */

undefined ** FUN_108915194(void)

{
  return &PTR_DAT_110a940e0;
}



/* Entry: 1089151b8; end: 108915263;  */

long * FUN_1089151b8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108915d10();
  if (param_1[2] != 0) {
    func_0x000108915d04();
    func_0x000108915f7c();
    func_0x000108915fa4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000108915d04();
    func_0x000108916004();
    func_0x000108915fa4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x000108915d04();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x000108915de0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108915ed0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108915264; end: 10891537f;  */

ulong FUN_108915264(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x24) = (int)uVar1;
  return uVar1;
}



/* Entry: 108915380; end: 108915673;  */

undefined8 * FUN_108915380(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_108915114(param_1,param_3);
  return param_1;
}



/* Entry: 108915674; end: 1089156bf;  */

void FUN_108915674(long param_1)

{
  ulong extraout_x8;
  
  func_0x000108915f54();
  if (param_1 == 0) {
    func_0x000108915e98();
  }
  else {
    func_0x000108915d20();
  }
  func_0x000108916054();
  func_0x000108916060(&PTR_FUN_110a938c8);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108915d44();
  }
  func_0x000108915f98();
  func_0x000108916044();
  return;
}



/* Entry: 1089156c0; end: 10891571b;  */

undefined8 * FUN_1089156c0(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108915f70();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108915ea0();
  }
  else {
    func_0x000108915d84();
  }
  *param_1 = &PTR_DAT_110a93698;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_108913678();
  return param_1;
}



/* Entry: 10891571c; end: 108915787;  */

void FUN_10891571c(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108915f54();
  if (param_1 == 0) {
    func_0x000108915e98();
  }
  else {
    func_0x000108915d20();
  }
  func_0x000108916054();
  func_0x000108916060(&PTR_DAT_110a93b48);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108915d44();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_108915c90();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x19;
  return;
}



/* Entry: 108915788; end: 1089157bb;  */

undefined8 * FUN_108915788(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108915f84();
  if (param_1 == 0) {
    param_1 = 0x30;
    __Znwm();
  }
  else {
    func_0x00010891606c();
  }
  func_0x000108916104();
  lVar1 = param_3;
  func_0x000108915f54();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_DAT_110a93a08;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x000108915d44();
  }
  func_0x000107c296d0(unaff_x19 + 2,unaff_x20,param_3 + 0x10);
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return unaff_x19;
}



/* Entry: 1089157bc; end: 10891581f;  */

undefined8 * FUN_1089157bc(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000108915f70();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108915e98();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b4d80e0();
  }
  *param_1 = &PTR_DAT_110a93738;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_10891372c();
  return param_1;
}



/* Entry: 108915820; end: 108915877;  */

undefined8 * FUN_108915820(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108915f70();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108915ea0();
  }
  else {
    func_0x000108915d84();
  }
  *param_1 = &PTR_DAT_110a93968;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 2) = 0;
  func_0x000108913748();
  return param_1;
}



/* Entry: 108915878; end: 1089158cb;  */

long FUN_108915878(long param_1)

{
  func_0x000108915f70();
  if (param_1 == 0) {
    func_0x000108915ea0();
  }
  else {
    func_0x000108915d84();
  }
  func_0x0001089160e4(&PTR_DAT_110a936e8);
  func_0x000108913760();
  return param_1;
}



/* Entry: 1089158cc; end: 108915997;  */

undefined8 * FUN_1089158cc(undefined8 *param_1)

{
  uint uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000108915f84();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108916078();
  }
  else {
    param_1 = unaff_x20;
    func_0x000108916080();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_110a93aa8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108915d44();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c2a26c();
  }
  param_1[3] = unaff_x20;
  param_1[4] = *(undefined8 *)(unaff_x19 + 0x20);
  return param_1;
}



/* Entry: 108915998; end: 1089159eb;  */

long FUN_108915998(long param_1)

{
  func_0x000108915f70();
  if (param_1 == 0) {
    func_0x000108915ea0();
  }
  else {
    func_0x000108915d84();
  }
  func_0x0001089160e4(&PTR_DAT_110a935f8);
  FUN_108913834();
  return param_1;
}



/* Entry: 1089159ec; end: 108915a3f;  */

long FUN_1089159ec(long param_1)

{
  func_0x000108915f70();
  if (param_1 == 0) {
    func_0x000108915ea0();
  }
  else {
    func_0x000108915d84();
  }
  func_0x0001089160e4(&PTR_DAT_110a937d8);
  func_0x000108913850();
  return param_1;
}



/* Entry: 108915a40; end: 108915aaf;  */

undefined8 * FUN_108915a40(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x000108915f84();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    func_0x00010891606c();
  }
  func_0x000108916104();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a98688;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108927c9c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 108915ab0; end: 108915bdb;  */

undefined8 * FUN_108915ab0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000108915f84();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108915e98();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_110a93828;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108915d44();
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x000107c2809c();
  param_1[2] = lVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(unaff_x19 + 0x18);
  return param_1;
}



/* Entry: 108915bdc; end: 108915c3b;  */

undefined8 * FUN_108915bdc(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000108915f70();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108916078();
  }
  else {
    param_1 = unaff_x21;
    func_0x000108916080();
  }
  *param_1 = &PTR_DAT_110a93788;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_1089139b0();
  return param_1;
}



/* Entry: 108915c3c; end: 108915c8f;  */

long FUN_108915c3c(long param_1)

{
  func_0x000108915f70();
  if (param_1 == 0) {
    func_0x000108915ea0();
  }
  else {
    func_0x000108915d84();
  }
  func_0x0001089160e4(&PTR_DAT_110a93648);
  func_0x0001089139e4();
  return param_1;
}



/* Entry: 108915c90; end: 108915ccb;  */

undefined8 * FUN_108915c90(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  func_0x000108915f84();
  if (param_1 == 0) {
    unaff_x20 = (undefined8 *)0xa8;
    __Znwm();
  }
  else {
    param_2 = 0xa8;
    func_0x00010b4d80e0();
  }
  func_0x000108916104();
  unaff_x20[1] = param_2;
  *unaff_x20 = &PTR_DAT_110d13820;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5a1dfc();
  }
  *(undefined4 *)(unaff_x20 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)unaff_x20 + 0x1c) = 0;
  *(undefined8 *)((long)unaff_x20 + 0x14) = 0;
  *(undefined4 *)((long)unaff_x20 + 0x24) = 0;
  unaff_x20[5] = param_2;
  func_0x00010b5a069c(unaff_x20 + 3,param_3 + 0x18);
  FUN_1088d94f0(unaff_x20 + 6,param_2,param_3 + 0x30);
  lVar2 = param_3 + 0x48;
  func_0x00010b5a1f54();
  unaff_x20[9] = lVar2;
  lVar2 = param_3 + 0x50;
  func_0x00010b5a1f54();
  unaff_x20[10] = lVar2;
  lVar2 = param_3 + 0x58;
  func_0x00010b5a1f54();
  unaff_x20[0xb] = lVar2;
  lVar2 = param_3 + 0x60;
  func_0x00010b5a1f54();
  unaff_x20[0xc] = lVar2;
  lVar2 = param_3 + 0x68;
  func_0x00010b5a1f54();
  unaff_x20[0xd] = lVar2;
  uVar1 = *(uint *)(unaff_x20 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5a1ba4(param_2,*(undefined8 *)(param_3 + 0x70));
  }
  unaff_x20[0xe] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5a1c20(param_2,*(undefined8 *)(param_3 + 0x78));
  }
  unaff_x20[0xf] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5a1c8c(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  unaff_x20[0x10] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5a1cbc(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  unaff_x20[0x11] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5a1cf8(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  unaff_x20[0x12] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)((long)unaff_x20 + 0x9e) = *(undefined8 *)(param_3 + 0x9e);
  unaff_x20[0x13] = uVar3;
  return unaff_x20;
}



/* Entry: 108915ccc; end: 10891610f;  */

void FUN_108915ccc(void)

{
  return;
}


