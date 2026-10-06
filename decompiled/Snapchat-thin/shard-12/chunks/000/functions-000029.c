/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c6e258; end: 108c6e287;  */

void FUN_108c6e258(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f72c();
  func_0x000108c6fb08();
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



/* Entry: 108c6e288; end: 108c6e32b;  */

long * FUN_108c6e288(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  plVar2 = param_2;
  func_0x000108c6f704();
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_108c6e2d4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_108c6e2d4;
  param_4 = (long *)&UNK_10f50e6ef;
  func_0x000108c6f8b8();
  func_0x000108c6f5ec();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_108c6e2d4:
  func_0x000108c6fa1c(*(undefined8 *)(unaff_x21 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_3 + 8);
  }
  if (lVar3 != 0) {
    func_0x000108c6fa00();
    func_0x000107c280a0();
    param_4 = param_2;
    param_2 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x000108c6f8c8();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    func_0x000108c6f9c8();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        param_3 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar5);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_2;
}



/* Entry: 108c6e32c; end: 108c6e40b;  */

long FUN_108c6e32c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x000108c6f614();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x000108c6f8ec(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    func_0x000108c6f91c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108c6f9dc();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 108c6e40c; end: 108c6e433;  */

undefined8 FUN_108c6e40c(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  return param_1;
}



/* Entry: 108c6e434; end: 108c6e437;  */

undefined8 FUN_108c6e434(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  return param_1;
}



/* Entry: 108c6e438; end: 108c6e44b;  */

void FUN_108c6e438(void)

{
  FUN_108c6e40c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6e44c; end: 108c6e457;  */

undefined ** FUN_108c6e44c(void)

{
  return &PTR_DAT_110abcc20;
}



/* Entry: 108c6e458; end: 108c6e483;  */

void FUN_108c6e458(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f72c();
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



/* Entry: 108c6e484; end: 108c6e503;  */

long * FUN_108c6e484(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  plVar2 = param_2;
  func_0x000108c6f704();
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_108c6e4d0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_108c6e4d0;
  param_4 = (long *)&UNK_10f50e72c;
  func_0x000108c6f8b8();
  func_0x000108c6f788();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_108c6e4d0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x000108c6f8c8();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000108c6fc44();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 108c6e504; end: 108c6e5a3;  */

void FUN_108c6e504(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108c6f614();
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
    func_0x000108c6f9dc();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 108c6e5a4; end: 108c6e60b;  */

void FUN_108c6e5a4(long param_1,undefined8 param_2,long param_3)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000108c6f8f8();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x000108c6fc24(&PTR_FUN_110abc750);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108c6f738();
  }
  func_0x000108c6fb98();
  FUN_108c6f078();
  param_3 = param_3 + 0x28;
  func_0x000107c2809c();
  *(long *)(unaff_x19 + 0x28) = param_3;
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  return;
}



/* Entry: 108c6e60c; end: 108c6e637;  */

undefined8 FUN_108c6e60c(undefined8 param_1)

{
  func_0x000108c6f880();
  FUN_108c6e638(param_1);
  return param_1;
}



/* Entry: 108c6e638; end: 108c6e65f;  */

undefined8 FUN_108c6e638(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x28);
  func_0x000108c6fae8(param_1 + 0x10);
  if (extraout_x8 != 0) {
    func_0x000108c6f9f8();
  }
  return unaff_x19;
}



/* Entry: 108c6e660; end: 108c6e663;  */

undefined8 FUN_108c6e660(undefined8 param_1)

{
  func_0x000108c6f880();
  FUN_108c6e638(param_1);
  return param_1;
}



/* Entry: 108c6e664; end: 108c6e677;  */

void FUN_108c6e664(void)

{
  FUN_108c6e60c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6e678; end: 108c6e683;  */

undefined ** FUN_108c6e678(void)

{
  return &PTR_DAT_110abcc70;
}



/* Entry: 108c6e684; end: 108c6e6bb;  */

void FUN_108c6e684(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f860();
  if (in_NG == in_OV) {
    func_0x000108c6fa0c();
  }
  func_0x000108c6f9d4();
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



/* Entry: 108c6e6bc; end: 108c6e7d7;  */

long * FUN_108c6e6bc(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int unaff_w23;
  int iVar3;
  
  func_0x000108c6f75c();
  func_0x000108c6fb78();
  while (unaff_w23 != (int)unaff_x22) {
    func_0x000108c6f6b4();
    param_3 = (ulong)*(uint *)(param_2 + 0x48);
    param_1 = (long *)0x1;
    func_0x000108c6f750();
    func_0x000108c6fba8();
  }
  func_0x000108c6f910(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_108c6e730;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_108c6e730;
  param_4 = (long *)&UNK_10f50e75d;
  func_0x000108c6f8b8();
  func_0x000108c6f634();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_108c6e730:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000108c6f8c8();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000108c6f9c8();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 108c6e7d8; end: 108c6e7db;  */

void FUN_108c6e7d8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c6f600();
  FUN_108c6e82c();
  func_0x000108c6f7e8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000108c6f8d4();
    }
    func_0x000108c6fac8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
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



/* Entry: 108c6e7dc; end: 108c6e82b;  */

void FUN_108c6e7dc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c6f600();
  FUN_108c6e82c();
  func_0x000108c6f7e8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000108c6f8d4();
    }
    func_0x000108c6fac8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
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



/* Entry: 108c6e82c; end: 108c6e83b;  */

void FUN_108c6e82c(long *param_1,long param_2)

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



/* Entry: 108c6e83c; end: 108c6e8af;  */

void FUN_108c6e83c(ulong *param_1,ulong *param_2)

{
  ulong extraout_x8;
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108c6f9bc();
  FUN_108c6e684();
  func_0x000108c6fc50();
  func_0x000108c6f600();
  FUN_108c6e82c();
  func_0x000108c6f7e8();
  uVar1 = extraout_x8;
  if ((long)extraout_x8 < 0) {
    uVar1 = param_2[1];
  }
  if (uVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000108c6f8d4();
    }
    func_0x000108c6fac8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
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



/* Entry: 108c6e8b0; end: 108c6e8ef;  */

long FUN_108c6e8b0(long param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  func_0x000108c6f998();
  func_0x000108c6fa28();
  func_0x000108c6f9f0();
  func_0x000108c6fbc0();
  func_0x000107c30258(param_1 + 0x38);
  return param_1;
}



/* Entry: 108c6e8f0; end: 108c6e8f3;  */

long FUN_108c6e8f0(long param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  func_0x000108c6f998();
  func_0x000108c6fa28();
  func_0x000108c6f9f0();
  func_0x000108c6fbc0();
  func_0x000107c30258(param_1 + 0x38);
  return param_1;
}



/* Entry: 108c6e8f4; end: 108c6e907;  */

void FUN_108c6e8f4(void)

{
  FUN_108c6e8b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6e908; end: 108c6e913;  */

undefined ** FUN_108c6e908(void)

{
  return &PTR_DAT_110abccc0;
}



/* Entry: 108c6e914; end: 108c6e95b;  */

void FUN_108c6e914(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f72c();
  func_0x000108c6fb08();
  func_0x000108c6fa30();
  func_0x000108c6f9d4();
  func_0x000108c6fbc8();
  func_0x000107c3025c(unaff_x19 + 0x38);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
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



/* Entry: 108c6e95c; end: 108c6eb23;  */

long * FUN_108c6e95c(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x000108c6fb88();
  func_0x000108c6f9a0();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_3 + 8);
  }
  if (lVar3 != 0) {
    func_0x000108c6f96c();
    func_0x000107c280a0();
    unaff_x21 = param_1;
  }
  func_0x000108c6f910(*(undefined8 *)(unaff_x20 + 0x18));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_108c6e9b4;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_108c6e9b4:
      func_0x000108c6f8b8();
      func_0x000108c6fa00();
      func_0x000108c6f744();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x000108c6f910(*(undefined8 *)(unaff_x20 + 0x20));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_108c6e9f0;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_108c6e9f0:
      func_0x000108c6f8b8();
      func_0x000108c6fb6c();
      func_0x000108c6f744();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x000108c6f910(*(undefined8 *)(unaff_x20 + 0x28));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_108c6ea2c;
  }
  else if ((int)param_2 != 0) {
LAB_108c6ea2c:
    func_0x000108c6f8b8();
    param_2 = 4;
    param_1 = unaff_x19;
    func_0x000108c6f744();
    unaff_x21 = param_1;
  }
  func_0x000108c6f910(*(undefined8 *)(unaff_x20 + 0x30));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_108c6ea6c;
  }
  else if ((int)param_2 != 0) {
LAB_108c6ea6c:
    func_0x000108c6f8b8();
    param_2 = 5;
    param_1 = unaff_x19;
    func_0x000108c6f744();
    unaff_x21 = param_1;
  }
  func_0x000108c6f910(*(undefined8 *)(unaff_x20 + 0x38));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_108c6eac8;
  }
  else if ((int)param_2 == 0) goto LAB_108c6eac8;
  func_0x000108c6f8b8();
  param_1 = unaff_x19;
  func_0x000108c6f744();
  unaff_x21 = param_1;
LAB_108c6eac8:
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x000108c6f7cc();
    unaff_x21 = (long *)0x38;
    func_0x000107c280a8(0x38,param_1);
    func_0x000108c6fabc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000108c6f8c8();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8_00 + 8);
    param_3 = *(ulong *)(extraout_x8_00 + 0x10);
  }
  else {
    lVar3 = extraout_x8_00 + 8;
  }
  if (*unaff_x19 - (long)unaff_x21 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
      iVar4 = (int)param_3;
      uVar1 = iVar4 - iVar5;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      unaff_x21 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x21 + (long)iVar4);
  }
  _memcpy(unaff_x21,lVar3,param_3 & 0xffffffff);
  return (long *)((long)unaff_x21 + (long)(int)param_3);
}



/* Entry: 108c6eb24; end: 108c6ed17;  */

long FUN_108c6eb24(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x000108c6f614();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c28098();
    lVar2 = param_1 + 1;
  }
  func_0x000108c6f8ec(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x000108c6f91c();
  }
  func_0x000108c6f888();
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x000108c6f91c();
  }
  func_0x000108c6f808();
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x000108c6f91c();
  }
  func_0x000108c6f8ec(*(undefined8 *)(unaff_x19 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x000108c6f91c();
  }
  func_0x000108c6f8ec(*(undefined8 *)(unaff_x19 + 0x38));
  lVar1 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x000108c6f91c();
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    func_0x000108c6f69c();
    lVar2 = extraout_x8_05 + lVar2;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108c6f9dc();
    lVar1 = extraout_x8_06;
    if (extraout_x8_06 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x48) = (int)lVar2;
  return lVar2;
}



/* Entry: 108c6ed18; end: 108c6ed3f;  */

undefined8 FUN_108c6ed18(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  return param_1;
}



/* Entry: 108c6ed40; end: 108c6ed43;  */

undefined8 FUN_108c6ed40(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  return param_1;
}



/* Entry: 108c6ed44; end: 108c6ed57;  */

void FUN_108c6ed44(void)

{
  FUN_108c6ed18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6ed58; end: 108c6ed63;  */

undefined ** FUN_108c6ed58(void)

{
  return &PTR_DAT_110abcd00;
}



/* Entry: 108c6ed64; end: 108c6ed8f;  */

void FUN_108c6ed64(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f72c();
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



/* Entry: 108c6ed90; end: 108c6ee0f;  */

long * FUN_108c6ed90(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  plVar2 = param_2;
  func_0x000108c6f704();
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_108c6eddc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_108c6eddc;
  param_4 = (long *)&UNK_10f50e886;
  func_0x000108c6f8b8();
  func_0x000108c6f788();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_108c6eddc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x000108c6f8c8();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000108c6fc44();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 108c6ee10; end: 108c6eeaf;  */

void FUN_108c6ee10(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108c6f614();
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
    func_0x000108c6f9dc();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 108c6eeb0; end: 108c6ef27;  */

void FUN_108c6eeb0(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    func_0x000108c6f9e8();
  }
  else {
    func_0x000108c6f848();
  }
  func_0x000108c6f778(&PTR_FUN_110abc3e0);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined8 *)(param_2 + 0x18) = extraout_x8;
  *(undefined4 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 108c6ef28; end: 108c6ef47;  */

void FUN_108c6ef28(void)

{
  func_0x000108c6f79c();
  FUN_108c6cd6c();
  return;
}



/* Entry: 108c6ef48; end: 108c6ef6f;  */

void FUN_108c6ef48(void)

{
  long extraout_x8;
  
  func_0x000108c6fae8();
  if (extraout_x8 != 0) {
    func_0x000108c6f9f8();
  }
  return;
}



/* Entry: 108c6ef70; end: 108c6ef97;  */

void FUN_108c6ef70(void)

{
  long extraout_x8;
  
  func_0x000108c6fae8();
  if (extraout_x8 != 0) {
    func_0x000108c6f9f8();
  }
  return;
}



/* Entry: 108c6ef98; end: 108c6efbf;  */

long * FUN_108c6ef98(long *param_1)

{
  FUN_108c6efc0(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000100069100(param_1);
  }
  return param_1;
}



/* Entry: 108c6efc0; end: 108c6efe7;  */

void FUN_108c6efc0(void)

{
  long extraout_x8;
  
  func_0x000108c6fae8();
  if (extraout_x8 != 0) {
    func_0x000108c6f9f8();
  }
  return;
}



/* Entry: 108c6efe8; end: 108c6f007;  */

void FUN_108c6efe8(void)

{
  func_0x000108c6f79c();
  FUN_108c6d6c0();
  return;
}



/* Entry: 108c6f008; end: 108c6f02f;  */

void FUN_108c6f008(void)

{
  long extraout_x8;
  
  func_0x000108c6fae8();
  if (extraout_x8 != 0) {
    func_0x000108c6f9f8();
  }
  return;
}



/* Entry: 108c6f030; end: 108c6f04f;  */

void FUN_108c6f030(void)

{
  func_0x000108c6f79c();
  FUN_108c6e1c4();
  return;
}



/* Entry: 108c6f050; end: 108c6f077;  */

void FUN_108c6f050(void)

{
  long extraout_x8;
  
  func_0x000108c6fae8();
  if (extraout_x8 != 0) {
    func_0x000108c6f9f8();
  }
  return;
}



/* Entry: 108c6f078; end: 108c6f097;  */

void FUN_108c6f078(void)

{
  func_0x000108c6f79c();
  FUN_108c6e82c();
  return;
}



/* Entry: 108c6f098; end: 108c6f0bf;  */

void FUN_108c6f098(void)

{
  long extraout_x8;
  
  func_0x000108c6fae8();
  if (extraout_x8 != 0) {
    func_0x000108c6f9f8();
  }
  return;
}



/* Entry: 108c6f0c0; end: 108c6f447;  */

void FUN_108c6f0c0(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x000108c6f9e8();
  }
  else {
    func_0x000108c6f848();
  }
  func_0x000108c6f778(&PTR_FUN_110abc3e0);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 108c6f448; end: 108c6f46f;  */

void FUN_108c6f448(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 108c6f470; end: 108c6f49f;  */

undefined8 * FUN_108c6f470(undefined8 *param_1,undefined8 param_2)

{
  func_0x000108c6f9bc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108c6f9e8();
  }
  else {
    func_0x000108c6fbf8();
  }
  func_0x000108c6fb48();
  *param_1 = &PTR_DAT_110d012b8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b535e30();
  return param_1;
}



/* Entry: 108c6f4a0; end: 108c6f507;  */

undefined8 * FUN_108c6f4a0(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108c6f9bc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108c6f938();
  }
  else {
    func_0x000108c6fbec();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110abc660;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108c6f738();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = unaff_x20;
  FUN_108c6d300(param_1 + 2,unaff_x19 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 108c6f508; end: 108c6fc6f;  */

void FUN_108c6f508(void)

{
  return;
}



/* Entry: 108c6fc70; end: 108c6fca3;  */

undefined8 * FUN_108c6fc70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abcec8;
  param_1[2] = 0;
  param_1[1] = 0;
  func_0x000107c280bc();
  return param_1;
}



/* Entry: 108c6fca4; end: 108c6fdb3;  */

void FUN_108c6fca4(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  func_0x000108c706ec();
  func_0x000108c707b0();
  if (param_1 == 0) {
    func_0x000108c70704();
    func_0x000108c70660();
    func_0x000108c7073c();
    func_0x000108c706ac();
    func_0x000108c707ec();
    func_0x000108c7067c();
    func_0x000108c70764();
    func_0x000108c70794();
    func_0x000108c7079c();
  }
  else {
    func_0x000108c70720();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000108c7086c();
    func_0x000108c708b0();
    func_0x000108c708c8(&PTR_FUN_110abcef8);
    if (lVar1 != 0) {
      do {
        func_0x000108c706bc();
      } while (extraout_w10 != 0);
      do {
        func_0x000108c706bc();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108c7076c();
    func_0x000108c7074c(&PTR_DAT_110abcf48);
    func_0x000108c70690();
    func_0x000108c707bc();
    func_0x000108c707c4();
    FUN_108c70248(auStack_58);
    func_0x000108c707dc();
  }
  func_0x000108c707cc();
  return;
}



/* Entry: 108c6fdb4; end: 108c6fec3;  */

void FUN_108c6fdb4(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  func_0x000108c706ec();
  func_0x000108c707b0();
  if (param_1 == 0) {
    func_0x000108c70704();
    func_0x000108c70660();
    func_0x000108c7073c();
    func_0x000108c706ac();
    func_0x000108c707ec();
    func_0x000108c7067c();
    func_0x000108c70764();
    func_0x000108c70794();
    func_0x000108c7079c();
  }
  else {
    func_0x000108c70720();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000108c7086c();
    func_0x000108c708b0();
    func_0x000108c708c8(&PTR_FUN_110abcfb0);
    if (lVar1 != 0) {
      do {
        func_0x000108c706bc();
      } while (extraout_w10 != 0);
      do {
        func_0x000108c706bc();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108c7076c();
    func_0x000108c7074c(&PTR_DAT_110abd000);
    func_0x000108c70690();
    func_0x000108c707bc();
    func_0x000108c707c4();
    FUN_108c70390(auStack_58);
    func_0x000108c707dc();
  }
  func_0x000108c707cc();
  return;
}



/* Entry: 108c6fec4; end: 108c6ffd3;  */

void FUN_108c6fec4(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  func_0x000108c706ec();
  func_0x000108c707b0();
  if (param_1 == 0) {
    func_0x000108c70704();
    func_0x000108c70660();
    func_0x000108c7073c();
    func_0x000108c706ac();
    func_0x000108c707ec();
    func_0x000108c7067c();
    func_0x000108c70764();
    func_0x000108c70794();
    func_0x000108c7079c();
  }
  else {
    func_0x000108c70720();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000108c7086c();
    func_0x000108c708b0();
    func_0x000108c708c8(&PTR_FUN_110abd068);
    if (lVar1 != 0) {
      do {
        func_0x000108c706bc();
      } while (extraout_w10 != 0);
      do {
        func_0x000108c706bc();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108c7076c();
    func_0x000108c7074c(&PTR_DAT_110abd0b8);
    func_0x000108c70690();
    func_0x000108c707bc();
    func_0x000108c707c4();
    FUN_108c704d8(auStack_58);
    func_0x000108c707dc();
  }
  func_0x000108c707cc();
  return;
}



/* Entry: 108c6ffd4; end: 108c700e3;  */

void FUN_108c6ffd4(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  func_0x000108c706ec();
  func_0x000108c707b0();
  if (param_1 == 0) {
    func_0x000108c70704();
    func_0x000108c70660();
    func_0x000108c7073c();
    func_0x000108c706ac();
    func_0x000108c707ec();
    func_0x000108c7067c();
    func_0x000108c70764();
    func_0x000108c70794();
    func_0x000108c7079c();
  }
  else {
    func_0x000108c70720();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000108c7086c();
    func_0x000108c708b0();
    func_0x000108c708c8(&PTR_FUN_110abd120);
    if (lVar1 != 0) {
      do {
        func_0x000108c706bc();
      } while (extraout_w10 != 0);
      do {
        func_0x000108c706bc();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108c7076c();
    func_0x000108c7074c(&PTR_DAT_110abd170);
    func_0x000108c70690();
    func_0x000108c707bc();
    func_0x000108c707c4();
    FUN_108c7063c(auStack_58);
    func_0x000108c707dc();
  }
  func_0x000108c707cc();
  return;
}



/* Entry: 108c700e4; end: 108c7011f;  */

void FUN_108c700e4(void)

{
  func_0x000108c708a4();
  return;
}



/* Entry: 108c70120; end: 108c70123;  */

void FUN_108c70120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abcef8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c70124; end: 108c70137;  */

void FUN_108c70124(void)

{
  FUN_108c7023c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c70138; end: 108c70143;  */

void FUN_108c70138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c70780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c70144; end: 108c70157;  */

void FUN_108c70144(void)

{
  func_0x000107c2811c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c70158; end: 108c7023b;  */

void FUN_108c70158(int param_1)

{
  int extraout_w10;
  long unaff_x20;
  undefined8 uStack_158;
  long lStack_150;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108c708e0();
  ppuStack_58 = &PTR_FUN_110abc7f0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  func_0x000108c70884();
  if (param_1 == 0) {
    func_0x000108c70714();
    func_0x000108c70660();
    func_0x000108c70814();
    func_0x000108c706ac();
    func_0x000108c707ec();
    func_0x000108c7067c();
    func_0x000108c70764();
    func_0x000108c70794();
    func_0x000108c7079c();
  }
  else {
    uStack_158 = *(undefined8 *)(unaff_x20 + 8);
    lStack_150 = *(long *)(unaff_x20 + 0x10);
    if (lStack_150 != 0) {
      do {
        func_0x000108c706bc();
      } while (extraout_w10 != 0);
    }
    func_0x000108c708bc();
    func_0x000108c70864();
    func_0x000108c68f6c(&uStack_158);
  }
  FUN_108c6cefc(&ppuStack_58);
  return;
}



/* Entry: 108c7023c; end: 108c70247;  */

void FUN_108c7023c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abcef8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c70248; end: 108c7026b;  */

void FUN_108c70248(long param_1)

{
  func_0x000108c708d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108c7026c; end: 108c7026f;  */

void FUN_108c7026c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abcfb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c70270; end: 108c70283;  */

void FUN_108c70270(void)

{
  FUN_108c70384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c70284; end: 108c7028f;  */

void FUN_108c70284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c70780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c70290; end: 108c702a3;  */

void FUN_108c70290(void)

{
  func_0x000107c2811c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c702a4; end: 108c70383;  */

void FUN_108c702a4(int param_1)

{
  int extraout_w10;
  long unaff_x20;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 auStack_60 [48];
  
  func_0x000108c708e0();
  func_0x000108c7088c(&UNK_110abc830);
  func_0x000108c70884();
  if (param_1 == 0) {
    func_0x000108c70834();
    func_0x000108c707f8();
    func_0x000108c70824();
    func_0x000108c70844();
    func_0x000108c707ec();
    func_0x000108c706e0();
    func_0x000108c70854();
    func_0x000108c7085c();
    func_0x000108c70874();
  }
  else {
    uStack_160 = *(undefined8 *)(unaff_x20 + 8);
    lStack_158 = *(long *)(unaff_x20 + 0x10);
    if (lStack_158 != 0) {
      do {
        func_0x000108c706bc();
      } while (extraout_w10 != 0);
    }
    func_0x000108c708bc();
    func_0x000108c70864();
    func_0x000108c691e8(&uStack_160);
  }
  FUN_108c6d548(auStack_60);
  return;
}



/* Entry: 108c70384; end: 108c7038f;  */

void FUN_108c70384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abcfb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c70390; end: 108c703b3;  */

void FUN_108c70390(long param_1)

{
  func_0x000108c708d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108c703b4; end: 108c703b7;  */

void FUN_108c703b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abd068;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c703b8; end: 108c703cb;  */

void FUN_108c703b8(void)

{
  FUN_108c704cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c703cc; end: 108c703d7;  */

void FUN_108c703cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c70780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c703d8; end: 108c703eb;  */

void FUN_108c703d8(void)

{
  func_0x000107c2811c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c703ec; end: 108c704cb;  */

void FUN_108c703ec(int param_1)

{
  int extraout_w10;
  long unaff_x20;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 auStack_60 [48];
  
  func_0x000108c708e0();
  func_0x000108c7088c(&UNK_110abc6a0);
  func_0x000108c70884();
  if (param_1 == 0) {
    func_0x000108c70834();
    func_0x000108c707f8();
    func_0x000108c70824();
    func_0x000108c70844();
    func_0x000108c707ec();
    func_0x000108c706e0();
    func_0x000108c70854();
    func_0x000108c7085c();
    func_0x000108c70874();
  }
  else {
    uStack_160 = *(undefined8 *)(unaff_x20 + 8);
    lStack_158 = *(long *)(unaff_x20 + 0x10);
    if (lStack_158 != 0) {
      do {
        func_0x000108c706bc();
      } while (extraout_w10 != 0);
    }
    func_0x000108c708bc();
    func_0x000108c70864();
    func_0x000108c69464(&uStack_160);
  }
  FUN_108c6e04c(auStack_60);
  return;
}



/* Entry: 108c704cc; end: 108c704d7;  */

void FUN_108c704cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abd068;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c704d8; end: 108c704fb;  */

void FUN_108c704d8(long param_1)

{
  func_0x000108c708d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108c704fc; end: 108c704ff;  */

void FUN_108c704fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abd120;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c70500; end: 108c70513;  */

void FUN_108c70500(void)

{
  FUN_108c70630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c70514; end: 108c7051f;  */

void FUN_108c70514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c70780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c70520; end: 108c70533;  */

void FUN_108c70520(void)

{
  func_0x000107c2811c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c70534; end: 108c7062f;  */

void FUN_108c70534(int param_1)

{
  int extraout_w10;
  long unaff_x20;
  undefined8 uStack_168;
  long lStack_160;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined4 uStack_38;
  
  func_0x000108c708e0();
  ppuStack_68 = &PTR_FUN_110abc750;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_40 = &DAT_11383d918;
  uStack_38 = 0;
  func_0x000108c70884();
  if (param_1 == 0) {
    func_0x000108c70714();
    func_0x000108c70660();
    func_0x000108c70814();
    func_0x000108c706ac();
    func_0x000108c707ec();
    func_0x000108c7067c();
    func_0x000108c70764();
    func_0x000108c70794();
    func_0x000108c7079c();
  }
  else {
    uStack_168 = *(undefined8 *)(unaff_x20 + 8);
    lStack_160 = *(long *)(unaff_x20 + 0x10);
    if (lStack_160 != 0) {
      do {
        func_0x000108c706bc();
      } while (extraout_w10 != 0);
    }
    func_0x000108c708bc();
    func_0x000108c70864();
    func_0x000108c69704(&uStack_168);
  }
  FUN_108c6e60c(&ppuStack_68);
  return;
}



/* Entry: 108c70630; end: 108c7063b;  */

void FUN_108c70630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abd120;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c7063c; end: 108c7065f;  */

void FUN_108c7063c(long param_1)

{
  func_0x000108c708d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108c70660; end: 108c708f3;  */

void FUN_108c70660(void)

{
  return;
}



/* Entry: 108c708f4; end: 108c7092f;  */

float FUN_108c708f4(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3[1];
  fVar2 = fVar1 - *param_3;
  FUN_108c70930(fVar1,param_2);
  return *param_3 + fVar1 * fVar2;
}



/* Entry: 108c70930; end: 108c70947;  */

float FUN_108c70930(ulong param_1)

{
  FUN_108c70948();
  return (float)param_1 / 1.0;
}



/* Entry: 108c70948; end: 108c709f3;  */

ulong FUN_108c70948(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x9c0);
  uVar2 = (lVar1 + 1U) % 0x138;
  uVar3 = *(ulong *)(param_1 + uVar2 * 8);
  uVar4 = 0xb5026f5aa96619e9;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  uVar4 = uVar4 ^ *(ulong *)(param_1 + ((lVar1 + 0x9cU) % 0x138) * 8) ^
          (uVar3 & 0x7ffffffe | *(ulong *)(param_1 + lVar1 * 8) & 0xffffffff80000000) >> 1;
  *(ulong *)(param_1 + lVar1 * 8) = uVar4;
  uVar4 = uVar4 >> 0x1d & 0x5555555555555555 ^ uVar4;
  *(ulong *)(param_1 + 0x9c0) = uVar2;
  uVar4 = (uVar4 & 0x38eb3ffff6d3) << 0x11 ^ uVar4;
  uVar4 = (uVar4 & 0x7ffbf77) << 0x25 ^ uVar4;
  return uVar4 ^ uVar4 >> 0x2b;
}



/* Entry: 108c709f4; end: 108c70a3f;  */

void FUN_108c709f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  func_0x000107c2a890(auStack_50,param_2);
  func_0x000107c2a8a4(param_1,auStack_50);
  func_0x000107c34cb4();
  return;
}



/* Entry: 108c70a40; end: 108c70a6b;  */

undefined8 * FUN_108c70a40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abd1d8;
  func_0x000107c2a8a0(param_1 + 1);
  return param_1;
}



/* Entry: 108c70a6c; end: 108c70a6f;  */

undefined8 * FUN_108c70a6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abd1d8;
  func_0x000107c2a8a0(param_1 + 1);
  return param_1;
}



/* Entry: 108c70a70; end: 108c70a83;  */

void FUN_108c70a70(void)

{
  FUN_108c70a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c70a84; end: 108c70aa3;  */

void FUN_108c70a84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c70a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  return;
}



/* Entry: 108c70aa4; end: 108c70b67;  */

void FUN_108c70aa4(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_58 [24];
  
  plVar1 = (long *)*param_3;
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    param_3 = (long *)*param_3;
    if (param_3 != (long *)0x0) {
      (**(code **)(*param_3 + 0x18))();
      goto LAB_108c70b0c;
    }
  }
  param_3 = (long *)0x0;
LAB_108c70b0c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
            (auStack_58,plVar1,param_3);
  (**(code **)(**(long **)(param_1 + 8) + 0x30))
            (*(long **)(param_1 + 8),param_2,auStack_58,param_4,param_5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 108c70b68; end: 108c70b77;  */

void FUN_108c70b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c70b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x58))();
  return;
}



/* Entry: 108c70b78; end: 108c70cbf;  */

undefined8 ** FUN_108c70b78(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 extraout_x8;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  ppuVar5 = &puStack_70;
  func_0x000107c34cb8();
  puStack_58 = (undefined8 *)0x1;
  puVar3 = (undefined8 *)0x28;
  uStack_48 = extraout_x8;
  __Znwm();
  plVar7 = puVar3 + 1;
  *plVar7 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110abd300;
  puVar8 = puVar3 + 3;
  *puVar8 = &PTR_FUN_110abd350;
  puVar6 = puVar3 + 4;
  *puVar6 = 0;
  puStack_50 = puVar3;
  __ZNSt3__17promiseIvEC1Ev(puVar6);
  puStack_50 = (undefined8 *)0x0;
  puStack_70 = puVar8;
  puStack_68 = puVar3;
  FUN_108c70d68(&puStack_60);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_60 = puVar8;
  puStack_58 = puVar3;
  (**(code **)(*param_1 + 0x58))(param_1,&puStack_60);
  FUN_108c48174(&puStack_60);
  __ZNSt3__17promiseIvE10get_futureEv(&puStack_60,puVar6);
  __ZNSt3__117__assoc_sub_state4waitEv(puStack_60);
  __ZNSt3__16futureIvED1Ev(&puStack_60);
  FUN_108c70cc0();
  func_0x000107c34cb0(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  __ZNSt3__16futureIvED1Ev(&puStack_60);
  FUN_108c70cc0();
  func_0x000108c70e00();
  func_0x000107c34cbc();
  if (ppuVar5 != (undefined8 **)0x0) {
    func_0x000107c278a0();
  }
  return (undefined8 **)(undefined1 *)ppuVar4;
}



/* Entry: 108c70cc0; end: 108c70ce3;  */

void FUN_108c70cc0(long param_1)

{
  func_0x000107c34cbc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}


