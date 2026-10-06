/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b47d038; end: 10b47d07b;  */

void FUN_10b47d038(ulong *param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b47e2a4();
  FUN_10b47d07c();
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b47e1ec();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47d07c; end: 10b47d08b;  */

void FUN_10b47d07c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b47d08c; end: 10b47d103;  */

void FUN_10b47d08c(long param_1,long param_2)

{
  long unaff_x19;
  ulong *unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b47e2cc();
  FUN_10b47cef4();
  func_0x00010b47e2a4();
  FUN_10b47d07c();
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b47e1ec();
    if ((*unaff_x20 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47d104; end: 10b47d12f;  */

long FUN_10b47d104(long param_1)

{
  func_0x00010b47e218();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47d130; end: 10b47d133;  */

long FUN_10b47d130(long param_1)

{
  func_0x00010b47e218();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47d134; end: 10b47d147;  */

void FUN_10b47d134(void)

{
  FUN_10b47d104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47d148; end: 10b47d153;  */

undefined ** FUN_10b47d148(void)

{
  return &PTR_DAT_110cea480;
}



/* Entry: 10b47d154; end: 10b47d187;  */

void FUN_10b47d154(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b47e2a4();
  func_0x000107c3025c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b47d188; end: 10b47d21b;  */

long * FUN_10b47d188(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b47e1dc();
  uVar2 = param_1[2] & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b47e234();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x00010b47e1bc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47e298();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 10b47d21c; end: 10b47d28b;  */

void FUN_10b47d21c(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b47e320(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c28098();
    iVar1 = (int)lVar3 + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x00010b47e178();
    iVar1 = iVar1 + extraout_w8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b47e24c();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b47d28c; end: 10b47d28f;  */

void FUN_10b47d28c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b47e2b0();
  func_0x00010b47e344(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b47e338();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47e1ec();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47d290; end: 10b47d323;  */

void FUN_10b47d290(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b47e2b0();
  func_0x00010b47e344(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b47e338();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47e1ec();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47d324; end: 10b47d34f;  */

long FUN_10b47d324(long param_1)

{
  func_0x00010b47e218();
  FUN_10b47df68(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47d350; end: 10b47d353;  */

long FUN_10b47d350(long param_1)

{
  func_0x00010b47e218();
  FUN_10b47df68(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47d354; end: 10b47d367;  */

void FUN_10b47d354(void)

{
  FUN_10b47d324();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47d368; end: 10b47d373;  */

undefined ** FUN_10b47d368(void)

{
  return &PTR_DAT_110cea4d0;
}



/* Entry: 10b47d374; end: 10b47d3a7;  */

void FUN_10b47d374(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b47e2bc();
  if (in_NG == in_OV) {
    func_0x00010b47e300();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b47d3a8; end: 10b47d477;  */

long * FUN_10b47d3a8(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b47e1dc();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x00010b47e190();
    param_3 = (ulong)*(uint *)(param_2 + 0x34);
    func_0x00010b47e220();
    func_0x00010b47e314();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47e298();
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



/* Entry: 10b47d478; end: 10b47d4af;  */

void FUN_10b47d478(ulong *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x00010b47e2b0();
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x00010b47e308();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47e1ec();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47d4b0; end: 10b47d4e3;  */

long FUN_10b47d4b0(long param_1)

{
  func_0x00010b47e218();
  func_0x000107c30258(param_1 + 0x28);
  FUN_10b2141c8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47d4e4; end: 10b47d4e7;  */

long FUN_10b47d4e4(long param_1)

{
  func_0x00010b47e218();
  func_0x000107c30258(param_1 + 0x28);
  FUN_10b2141c8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47d4e8; end: 10b47d4fb;  */

void FUN_10b47d4e8(void)

{
  FUN_10b47d4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47d4fc; end: 10b47d507;  */

undefined ** FUN_10b47d4fc(void)

{
  return &PTR_DAT_110cea528;
}



/* Entry: 10b47d508; end: 10b47d543;  */

void FUN_10b47d508(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b47e2a4();
  func_0x00010563f0e8();
  func_0x000107c3025c(unaff_x19 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b47d544; end: 10b47d60b;  */

long * FUN_10b47d544(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b47e1dc();
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00010b47e234();
    param_4 = (long *)0x8;
    func_0x000107c280a8();
    func_0x00010b47e2d8();
    param_2 = param_1;
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_2 = 2;
    param_4 = unaff_x19;
    func_0x000107c280a0();
  }
  iVar4 = *(int *)(unaff_x20 + 0x18);
  while (iVar4 != 0) {
    func_0x00010b47e190();
    uVar2 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x000107c303cc(3);
    func_0x00010b47e314();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47e298();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 10b47d60c; end: 10b47d68f;  */

long FUN_10b47d60c(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_10b47e144();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    param_1 = *unaff_x21;
    FUN_10b2140e0();
    unaff_x20 = param_1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b47e320(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    unaff_x20 = unaff_x20 + param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x30) != 0) {
    func_0x00010b47e258();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b47e24c();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x34) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b47d690; end: 10b47d6fb;  */

void FUN_10b47d690(ulong *param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  lVar1 = param_2;
  func_0x00010b47e2a4();
  lVar1 = lVar1 + 0x10;
  FUN_10b21415c();
  func_0x00010b47e344(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b47e338();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b47e1ec();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47d6fc; end: 10b47d773;  */

undefined8 * FUN_10b47d6fc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cea258;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 10b47d774; end: 10b47d79f;  */

undefined8 FUN_10b47d774(undefined8 param_1)

{
  func_0x00010b47e218();
  FUN_10b47d7a0(param_1);
  return param_1;
}



/* Entry: 10b47d7a0; end: 10b47d7c3;  */

/* WARNING: Possible PIC construction at 0x00010b47d7b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b47d7b4) */

void FUN_10b47d7a0(ulong *param_1)

{
  ulong uVar1;
  
  func_0x00010b47e2a4();
  uVar1 = *param_1 ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b47d7c4; end: 10b47d7c7;  */

undefined8 FUN_10b47d7c4(undefined8 param_1)

{
  func_0x00010b47e218();
  FUN_10b47d7a0(param_1);
  return param_1;
}



/* Entry: 10b47d7c8; end: 10b47d7db;  */

void FUN_10b47d7c8(void)

{
  FUN_10b47d774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47d7dc; end: 10b47d7e7;  */

undefined ** FUN_10b47d7dc(void)

{
  return &PTR_DAT_110cea580;
}



/* Entry: 10b47d7e8; end: 10b47d823;  */

void FUN_10b47d7e8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b47e2a4();
  func_0x000107c3025c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b47d824; end: 10b47d983;  */

long * FUN_10b47d824(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar4 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar4[1];
  }
  plVar2 = param_1;
  if (lVar5 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,1,puVar4,param_2);
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[4] != 0) {
    func_0x00010b47e204();
    plVar1 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b47e1bc();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b47e204();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar1);
    func_0x00010b47e1bc();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[5] != 0) {
    func_0x00010b47e204();
    plVar1 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010b47e1bc();
    param_2 = plVar1;
  }
  puVar7 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar7[1];
    if (lVar5 == 0) goto LAB_10b47d928;
    puVar3 = (undefined8 *)*puVar7;
  }
  else {
    puVar3 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b47d928;
  }
  func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f76ea41);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,5,puVar7,param_2);
  puVar4 = puVar7;
  param_2 = plVar1;
LAB_10b47d928:
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x00010b47e204();
    param_2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar1);
    func_0x00010b47e1bc();
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010b47e298();
  if ((long)puVar4 < 0) {
    lVar5 = *(long *)(extraout_x8 + 8);
    puVar4 = *(undefined8 **)(extraout_x8 + 0x10);
  }
  else {
    lVar5 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)puVar4) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)puVar4;
      puVar4 = (undefined8 *)(ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar5 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar5,(ulong)puVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)puVar4);
}



/* Entry: 10b47d984; end: 10b47da47;  */

long FUN_10b47d984(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010b47e320(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c28098();
    lVar3 = lVar2 + 1;
  }
  func_0x00010b47e320(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x00010b47e178();
    lVar3 = lVar3 + extraout_x8_01;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b47e178();
    lVar3 = lVar3 + extraout_x8_02;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010b47e178();
    lVar3 = lVar3 + extraout_x8_03;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x00010b47e178();
    lVar3 = lVar3 + extraout_x8_04;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b47e24c();
    lVar2 = extraout_x8_05;
    if (extraout_x8_05 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b47da48; end: 10b47da4b;  */

void FUN_10b47da48(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b47e2b0();
  func_0x00010b47e344(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b47e338();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x00010b47e344(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b47e338();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47e1ec();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47da4c; end: 10b47db2b;  */

void FUN_10b47da4c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b47e2b0();
  func_0x00010b47e344(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b47e338();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x00010b47e344(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b47e338();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47e1ec();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47db2c; end: 10b47db5b;  */

undefined1  [16] FUN_10b47db2c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x20);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x20); puVar2 != (undefined1 *)(param_1 + 0x30);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x30);
  return auVar7;
}



/* Entry: 10b47db5c; end: 10b47db87;  */

long FUN_10b47db5c(long param_1)

{
  func_0x00010b47e218();
  FUN_10b47df94(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47db88; end: 10b47db8b;  */

long FUN_10b47db88(long param_1)

{
  func_0x00010b47e218();
  FUN_10b47df94(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47db8c; end: 10b47db9f;  */

void FUN_10b47db8c(void)

{
  FUN_10b47db5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47dba0; end: 10b47dbab;  */

undefined ** FUN_10b47dba0(void)

{
  return &PTR_DAT_110cea5d0;
}



/* Entry: 10b47dbac; end: 10b47dbdf;  */

void FUN_10b47dbac(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b47e2bc();
  if (in_NG == in_OV) {
    func_0x00010b47e300();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b47dbe0; end: 10b47dc53;  */

long * FUN_10b47dbe0(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b47e1dc();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x00010b47e190();
    param_3 = (ulong)*(uint *)(param_2 + 0x30);
    func_0x00010b47e220();
    func_0x00010b47e314();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47e298();
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



/* Entry: 10b47dc54; end: 10b47dcab;  */

long FUN_10b47dc54(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_10b47e144();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b47dcac();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b47e24c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b47dcac; end: 10b47dcd7;  */

long FUN_10b47dcac(long param_1)

{
  FUN_10b47d984();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b47dcd8; end: 10b47dd0f;  */

void FUN_10b47dcd8(ulong *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x00010b47e2b0();
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x00010b47e308();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47e1ec();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47dd10; end: 10b47dd3b;  */

undefined8 FUN_10b47dd10(undefined8 param_1)

{
  func_0x00010b47e218();
  FUN_10b47dd3c(param_1);
  return param_1;
}



/* Entry: 10b47dd3c; end: 10b47dd57;  */

void FUN_10b47dd3c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b47d774();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47dd58; end: 10b47dd5b;  */

undefined8 FUN_10b47dd58(undefined8 param_1)

{
  func_0x00010b47e218();
  FUN_10b47dd3c(param_1);
  return param_1;
}



/* Entry: 10b47dd5c; end: 10b47dd6f;  */

void FUN_10b47dd5c(void)

{
  FUN_10b47dd10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47dd70; end: 10b47dd7b;  */

undefined ** FUN_10b47dd70(void)

{
  return &PTR_DAT_110cea620;
}



/* Entry: 10b47dd7c; end: 10b47de6f;  */

void FUN_10b47dd7c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b47d7e8(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b47de70; end: 10b47df03;  */

void FUN_10b47de70(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00010b47e104(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b47da4c(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47df04; end: 10b47df3b;  */

void FUN_10b47df04(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110cea208;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b47df3c; end: 10b47df67;  */

long * FUN_10b47df3c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b47e2f8();
  }
  return param_1;
}



/* Entry: 10b47df68; end: 10b47df93;  */

long * FUN_10b47df68(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b47e2f8();
  }
  return param_1;
}



/* Entry: 10b47df94; end: 10b47dfbf;  */

long * FUN_10b47df94(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b47e2f8();
  }
  return param_1;
}



/* Entry: 10b47dfc0; end: 10b47e143;  */

void FUN_10b47dfc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    func_0x00010b47e2f0();
  }
  else {
    func_0x00010b47e240();
  }
  func_0x00010b47e32c(&PTR_FUN_110cea2a8);
  *(long *)(lVar1 + 0x20) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 10b47e144; end: 10b47e34f;  */

void FUN_10b47e144(void)

{
  return;
}



/* Entry: 10b47e350; end: 10b47e36b;  */

long FUN_10b47e350(long param_1)

{
  long extraout_x8;
  
  FUN_10b48772c();
  FUN_10b47e36c();
  return param_1 + extraout_x8;
}



/* Entry: 10b47e36c; end: 10b47e383;  */

void FUN_10b47e36c(void)

{
  return;
}



/* Entry: 10b47e384; end: 10b47e3bb;  */

long FUN_10b47e384(long param_1)

{
  func_0x00010b47f60c();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b47e3bc; end: 10b47e3bf;  */

long FUN_10b47e3bc(long param_1)

{
  func_0x00010b47f60c();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b47e3c0; end: 10b47e3d3;  */

void FUN_10b47e3c0(void)

{
  FUN_10b47e384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47e3d4; end: 10b47e3df;  */

undefined ** FUN_10b47e3d4(void)

{
  return &PTR_DAT_110cea858;
}



/* Entry: 10b47e3e0; end: 10b47e41f;  */

void FUN_10b47e3e0(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b47e420; end: 10b47e4bb;  */

long * FUN_10b47e420(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long extraout_x8;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x18);
  plVar3 = param_3;
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar5 * 8 + 7);
    }
    plVar3 = (long *)(ulong)*(uint *)(*puVar1 + 0x3c);
    param_2 = (long *)0x1;
    func_0x000107c303cc();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b47f6a0();
    if ((long)plVar3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      plVar3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)plVar3;
        plVar3 = (long *)(ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar2,(ulong)plVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar3);
  }
  return param_2;
}



/* Entry: 10b47e4bc; end: 10b47e513;  */

long FUN_10b47e4bc(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b47f5bc();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b47e514();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b47f694();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b47e514; end: 10b47e52b;  */

void FUN_10b47e514(void)

{
  func_0x00010b47e7bc();
  func_0x00010b47f5e8();
  return;
}



/* Entry: 10b47e52c; end: 10b47e52f;  */

void FUN_10b47e52c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b47f674();
  FUN_10b47e560();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47f630();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47e530; end: 10b47e55f;  */

void FUN_10b47e530(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b47f674();
  FUN_10b47e560();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47f630();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47e560; end: 10b47e56f;  */

void FUN_10b47e560(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b47e570; end: 10b47e5a7;  */

void FUN_10b47e570(ulong *param_1,ulong *param_2)

{
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b47e3e0();
  func_0x00010b47f674();
  FUN_10b47e560();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47f630();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47e5a8; end: 10b47e5e7;  */

long FUN_10b47e5a8(long param_1)

{
  func_0x00010b47f60c();
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b47e5e8; end: 10b47e5eb;  */

long FUN_10b47e5e8(long param_1)

{
  func_0x00010b47f60c();
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b47e5ec; end: 10b47e5ff;  */

void FUN_10b47e5ec(void)

{
  FUN_10b47e5a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47e600; end: 10b47e60b;  */

undefined ** FUN_10b47e600(void)

{
  return &PTR_DAT_110cea8a0;
}



/* Entry: 10b47e60c; end: 10b47e65b;  */

void FUN_10b47e60c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x000107c3025c(param_1 + 0x28);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b47e65c; end: 10b47e88b;  */

long * FUN_10b47e65c(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  plVar7 = param_1;
  plVar5 = param_3;
  plVar3 = param_2;
  if ((int)param_1[6] != 0) {
    plVar3 = param_1;
    func_0x00010b47f5b0();
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 6);
    param_2 = (long *)0x8;
    func_0x000107c280a8(8,plVar3);
    func_0x000107c280b8();
    plVar3 = plVar7;
  }
  plVar2 = plVar7;
  if (*(int *)((long)param_1 + 0x34) != 0) {
    func_0x00010b47f5b0();
    plVar2 = (long *)0x10;
    func_0x000107c280a8();
    func_0x00010b47f654();
    param_2 = plVar7;
    plVar3 = plVar2;
  }
  lVar4 = param_1[3];
  plVar7 = (long *)0x0;
  while (iVar8 = (int)plVar7, (int)lVar4 != iVar8) {
    uVar6 = param_1[2];
    puVar1 = (ulong *)(param_1 + 2);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar8 * 8 + 7);
    }
    param_2 = (long *)*puVar1;
    plVar5 = (long *)(ulong)*(uint *)((long)param_2 + 0x14);
    plVar2 = (long *)0x3;
    func_0x000107c303cc();
    plVar3 = plVar2;
    plVar7 = (long *)(ulong)(iVar8 + 1);
  }
  if ((int)param_1[7] != 0) {
    func_0x00010b47f5b0();
    plVar3 = (long *)0x20;
    func_0x000107c280a8();
    func_0x00010b47f654();
    param_2 = plVar2;
  }
  func_0x00010b47f688(param_1[5]);
  if ((long)param_2 < 0) {
    if (plVar7[1] == 0) goto LAB_10b47e784;
    plVar2 = (long *)*plVar7;
  }
  else {
    plVar2 = plVar7;
    if ((int)param_2 == 0) goto LAB_10b47e784;
  }
  func_0x00010b47f5e0(plVar2);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,5,plVar7,plVar3);
  plVar5 = plVar7;
  plVar3 = plVar2;
LAB_10b47e784:
  if ((param_1[1] & 1U) == 0) {
    return plVar3;
  }
  func_0x00010b47f6a0();
  if ((long)plVar5 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar3 < (long)(int)plVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)plVar3) + 0x10;
      iVar8 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)plVar3 + (long)iVar9;
      plVar3 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar3 + (long)iVar8);
  }
  _memcpy(plVar3,lVar4,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)plVar3 + (long)(int)plVar5);
}



/* Entry: 10b47e88c; end: 10b47e98b;  */

void FUN_10b47e88c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    puVar1 = param_1 + 2;
    func_0x000107c303c4(puVar1,param_2 + 0x10);
  }
  uVar2 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = param_1[1];
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = param_1 + 5;
    func_0x000107c30248(puVar1,uVar2,uVar3);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 6) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)((long)param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 7) = *(int *)(param_2 + 0x38);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b47f630();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47e98c; end: 10b47e9e7;  */

long FUN_10b47e98c(long param_1)

{
  func_0x00010b47f60c();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b47c7bc();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x50) != 0) {
    func_0x00010b47e924(param_1);
  }
  func_0x000105991a90(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b47e9e8; end: 10b47e9eb;  */

long FUN_10b47e9e8(long param_1)

{
  func_0x00010b47f60c();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b47c7bc();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x50) != 0) {
    func_0x00010b47e924(param_1);
  }
  func_0x000105991a90(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b47e9ec; end: 10b47e9ff;  */

void FUN_10b47e9ec(void)

{
  FUN_10b47e98c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47ea00; end: 10b47ea0f;  */

long FUN_10b47ea00(long param_1)

{
  func_0x00010b47f60c();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47ea10; end: 10b47ea73;  */

void FUN_10b47ea10(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000105991b74(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b47c85c(*(undefined8 *)(param_1 + 0x40));
    }
  }
  func_0x00010b47e924(param_1);
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b47ea74; end: 10b47ec7f;  */

long * FUN_10b47ea74(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long extraout_x8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  if (*(int *)(param_1 + 0x50) == 2) {
    plVar8 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x48) + 0x3c);
    param_2 = (long *)0x2;
    func_0x00010b47f5a4(2);
  }
  else {
    plVar8 = param_3;
    if (*(int *)(param_1 + 0x50) == 1) {
      func_0x00010b47f688(*(undefined8 *)(param_1 + 0x48));
      func_0x00010b47f5e0();
      param_2 = param_3;
      func_0x00010b47f580(param_3,1);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    plVar8 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x38) + 0x1c);
    param_2 = (long *)0x3;
    func_0x00010b47f5a4(3);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((*(int *)(param_1 + 0x18) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar4 = &lStack_78;
      func_0x00010564c19c(plVar4);
      while (plVar5 = plVar4, lVar11 = lStack_78, lStack_78 != 0) {
        lVar6 = lStack_78 + 8;
        lVar9 = lStack_78 + 0x20;
        func_0x00010b47f58c();
        lVar7 = (long)*(char *)(lVar11 + 0x1f);
        if (lVar7 < 0) {
          lVar6 = *(long *)(lVar11 + 8);
          lVar7 = *(long *)(lVar11 + 0x10);
        }
        func_0x00010b47f548(lVar6,lVar7);
        lVar6 = (long)*(char *)(lVar11 + 0x37);
        if (lVar6 < 0) {
          lVar9 = *(long *)(lVar11 + 0x20);
          lVar6 = *(long *)(lVar11 + 0x28);
        }
        func_0x00010b47f548(lVar9,lVar6);
        plVar4 = &lStack_78;
        func_0x000107c27d54(plVar4);
        param_2 = plVar5;
      }
    }
    else {
      plVar4 = &lStack_78;
      func_0x000105991b98(plVar4);
      puVar2 = apuStack_70[0];
      for (lVar11 = lStack_78 << 3; plVar5 = plVar4, lVar11 != 0; lVar11 = lVar11 + -8) {
        puVar10 = (undefined8 *)*puVar2;
        plVar4 = puVar10 + 3;
        func_0x00010b47f58c();
        lVar6 = (long)*(char *)((long)puVar10 + 0x17);
        puVar3 = puVar10;
        if (lVar6 < 0) {
          lVar6 = puVar10[1];
          puVar3 = (undefined8 *)*puVar10;
        }
        func_0x00010b47f548(puVar3,lVar6);
        lVar6 = (long)*(char *)((long)puVar10 + 0x2f);
        if (lVar6 < 0) {
          plVar4 = (long *)puVar10[3];
          lVar6 = puVar10[4];
        }
        func_0x00010b47f548(plVar4,lVar6);
        puVar2 = puVar2 + 1;
        param_2 = plVar5;
      }
      func_0x000105991ac8(apuStack_70);
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar8 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x40) + 0x14);
    param_2 = (long *)0x5;
    func_0x00010b47f5a4(5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b47f6a0();
    if ((long)plVar8 < 0) {
      lVar11 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar11 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar11);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b47ec80; end: 10b47ed5f;  */

ulong FUN_10b47ec80(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  ulong uVar3;
  long alStack_48 [3];
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  func_0x00010564c19c(alStack_48);
  while (alStack_48[0] != 0) {
    lVar2 = alStack_48[0] + 8;
    func_0x000105990b3c(lVar2,alStack_48[0] + 0x20);
    uVar3 = lVar2 + uVar3;
    func_0x000107c27d54(alStack_48);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001059918cc(*(undefined8 *)(param_1 + 0x38));
      func_0x00010b47f614();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b47bfc8(*(undefined8 *)(param_1 + 0x40));
      func_0x00010b47f614();
    }
  }
  if (*(int *)(param_1 + 0x50) == 2) {
    FUN_10b47ed60(*(undefined8 *)(param_1 + 0x48));
  }
  else {
    if (*(int *)(param_1 + 0x50) != 1) goto LAB_10b47ed28;
    func_0x000107c282a0(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  }
  func_0x00010b47f614();
LAB_10b47ed28:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b47f694();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    uVar3 = lVar2 + uVar3;
  }
  *(int *)(param_1 + 0x14) = (int)uVar3;
  return uVar3;
}



/* Entry: 10b47ed60; end: 10b47ed77;  */

void FUN_10b47ed60(void)

{
  FUN_10b47f248();
  func_0x00010b47f5e8();
  return;
}



/* Entry: 10b47ed78; end: 10b47eefb;  */

void FUN_10b47ed78(long param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  if ((uVar7 & 1) != 0) {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
  }
  func_0x0001059929d4(param_1 + 0x18,param_2 + 0x18);
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar6 = uVar7;
        func_0x000105992a88(uVar7,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar6;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar6 = uVar7;
        FUN_10b47c280(uVar7,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar6;
      }
      else {
        FUN_10b47cb74();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  iVar4 = *(int *)(param_2 + 0x50);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x50);
    if (iVar5 != iVar4) {
      if (iVar5 != 0) {
        func_0x00010b47e924(param_1);
      }
      *(int *)(param_1 + 0x50) = iVar4;
    }
    if (iVar4 == 2) {
      if (iVar5 == 2) {
        ppuVar2 = *(undefined ***)(param_2 + 0x48);
        if (*(int *)(param_2 + 0x50) != 2) {
          ppuVar2 = &PTR_PTR_113371ac0;
        }
        FUN_10b47eefc(*(undefined8 *)(param_1 + 0x48),ppuVar2);
      }
      else {
        FUN_10b47f484(uVar7,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar7;
      }
    }
    else if (iVar4 == 1) {
      if (iVar5 != 1) {
        *(undefined **)(param_1 + 0x48) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x50) != 1) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x48,puVar1,uVar7);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b47eefc; end: 10b47ef97;  */

void FUN_10b47eefc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b47f674();
  func_0x00010598fce8();
  uVar1 = *(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47f630();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47ef98; end: 10b47efd3;  */

long FUN_10b47ef98(long param_1)

{
  func_0x00010b47f60c();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47efd4; end: 10b47efe7;  */

void FUN_10b47efd4(void)

{
  FUN_10b47ef98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47efe8; end: 10b47eff3;  */

undefined ** FUN_10b47efe8(void)

{
  return &PTR_DAT_110cea938;
}



/* Entry: 10b47eff4; end: 10b47f03b;  */

void FUN_10b47eff4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b47f03c; end: 10b47f247;  */

long * FUN_10b47f03c(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long extraout_x8;
  int iVar8;
  long unaff_x22;
  long *plVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  
  plVar5 = param_2;
  plVar9 = param_3;
  func_0x00010b47f688(*(undefined8 *)(param_1 + 0x28));
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b47f088;
  }
  else if ((int)plVar5 != 0) {
LAB_10b47f088:
    func_0x00010b47f5e0();
    plVar5 = (long *)0x1;
    param_2 = param_3;
    func_0x00010b47f580();
  }
  lVar13 = 8;
  puVar3 = &UNK_10f76eb65;
  for (uVar12 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
      uVar12 = uVar12 - 1) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar7 & 1) != 0) {
      puVar2 = (ulong *)(uVar7 + lVar13 + -1);
    }
    plVar9 = (long *)*puVar2;
    lVar6 = (long)*(char *)((long)plVar9 + 0x17);
    plVar5 = plVar9;
    if (lVar6 < 0) {
      lVar6 = plVar9[1];
      plVar5 = (long *)*plVar9;
    }
    func_0x00010b47f548(plVar5,lVar6);
    plVar11 = (long *)(long)*(char *)((long)plVar9 + 0x17);
    if ((((long)plVar11 < 0) && (plVar11 = (long *)plVar9[1], 0x7f < (long)plVar11)) ||
       ((*param_3 - (long)param_2) + 0xe < (long)plVar11)) {
      plVar5 = (long *)0x2;
      param_2 = param_3;
      func_0x00010b4d5120();
    }
    else {
      *(undefined1 *)param_2 = 0x12;
      *(char *)((long)param_2 + 1) = (char)plVar11;
      plVar5 = plVar9;
      if (*(char *)((long)plVar9 + 0x17) < '\0') {
        plVar5 = (long *)*plVar9;
      }
      plVar9 = plVar11;
      _memcpy((undefined1 *)((long)param_2 + 2));
      param_2 = (long *)((undefined1 *)((long)param_2 + 2) + (long)plVar11);
    }
    lVar13 = lVar13 + 8;
  }
  func_0x00010b47f688(*(undefined8 *)(param_1 + 0x30));
  if ((long)plVar5 < 0) {
    puVar3 = (undefined *)0x7461686370616e73;
  }
  else if ((int)plVar5 == 0) goto LAB_10b47f1b4;
  func_0x00010b47f5e0(puVar3);
  param_2 = param_3;
  func_0x00010b47f580(param_3,3);
LAB_10b47f1b4:
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar5 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x38);
    uVar4 = 0x20;
    func_0x000107c280a8(0x20,plVar5);
    func_0x000107c280a8(param_2,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b47f6a0();
    if ((long)plVar9 < 0) {
      lVar13 = *(long *)(extraout_x8 + 8);
      plVar9 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar13 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar9) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)plVar9;
        plVar9 = (long *)(ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar10);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar13,(ulong)plVar9 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar9);
  }
  return param_2;
}



/* Entry: 10b47f248; end: 10b47f317;  */

ulong FUN_10b47f248(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b47f614();
  }
  uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b47f614();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    func_0x00010b47f554();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b47f694();
    lVar6 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x3c) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b47f318; end: 10b47f33b;  */

void FUN_10b47f318(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b47f674();
  func_0x00010598fce8();
  uVar1 = *(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b47f630();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47f33c; end: 10b47f483;  */

void FUN_10b47f33c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b47f66c();
  }
  else {
    func_0x00010b47f660();
  }
  *puVar1 = &PTR_FUN_110cea728;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = 0;
  return;
}


