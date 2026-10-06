/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b58a854; end: 10b58a9b7;  */

void FUN_10b58a854(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b58abc8();
  }
  else {
    func_0x00010b58abac();
  }
  *puVar1 = &PTR_FUN_110d0f1b8;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b58a9b8; end: 10b58aa27;  */

undefined8 * FUN_10b58a9b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b58abc8();
  }
  else {
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d0f1b8;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  FUN_10b589cfc();
  return puVar1;
}



/* Entry: 10b58aa28; end: 10b58aa67;  */

undefined8 * FUN_10b58aa28(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b58abc8();
  }
  else {
    FUN_10b4d80e0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d24b28;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_2 + 0x10;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[2] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x18);
  return puVar1;
}



/* Entry: 10b58aa68; end: 10b58ab5f;  */

undefined8 * FUN_10b58aa68(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b58ac34();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d0f258;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b58ac40();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[3] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000108c6f470(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar1[4] = param_1;
  return puVar1;
}



/* Entry: 10b58ab60; end: 10b58ac6b;  */

void FUN_10b58ab60(void)

{
  return;
}



/* Entry: 10b58ac6c; end: 10b58ac97;  */

long FUN_10b58ac6c(long param_1)

{
  func_0x00010b58c524();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b58ac98; end: 10b58ac9b;  */

long FUN_10b58ac98(long param_1)

{
  func_0x00010b58c524();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b58ac9c; end: 10b58acaf;  */

void FUN_10b58ac9c(void)

{
  FUN_10b58ac6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58acb0; end: 10b58acbb;  */

undefined ** FUN_10b58acb0(void)

{
  return &PTR_DAT_110d0f660;
}



/* Entry: 10b58acbc; end: 10b58acef;  */

void FUN_10b58acbc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b58c4e4();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b58acf0; end: 10b58adbf;  */

long * FUN_10b58acf0(undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  func_0x00010b58c418();
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b58ad3c;
  }
  else if ((int)param_2 == 0) goto LAB_10b58ad3c;
  func_0x00010b58c46c();
  unaff_x20 = unaff_x19;
  func_0x00010b58c400();
LAB_10b58ad3c:
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c28094();
    unaff_x20 = (long *)(ulong)*(uint *)(unaff_x21 + 0x20);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(unaff_x20,uVar3);
  }
  plVar2 = unaff_x20;
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    plVar2 = unaff_x19;
    func_0x00010599ccb0();
    param_3 = unaff_x20;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b58c5f8();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar2 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)plVar2) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        plVar2 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar5);
    }
    _memcpy(plVar2,lVar4,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)param_3);
  }
  return plVar2;
}



/* Entry: 10b58adc0; end: 10b58aebf;  */

void FUN_10b58adc0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b58c4b0(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b58c5cc();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 10b58aec0; end: 10b58aeeb;  */

undefined8 FUN_10b58aec0(undefined8 param_1)

{
  func_0x00010b58c524();
  FUN_10b58aeec(param_1);
  return param_1;
}



/* Entry: 10b58aeec; end: 10b58af13;  */

/* WARNING: Possible PIC construction at 0x00010b58af00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b58af04) */

void FUN_10b58aeec(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x00010b58c5a0();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
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



/* Entry: 10b58af14; end: 10b58af17;  */

undefined8 FUN_10b58af14(undefined8 param_1)

{
  func_0x00010b58c524();
  FUN_10b58aeec(param_1);
  return param_1;
}



/* Entry: 10b58af18; end: 10b58af2b;  */

void FUN_10b58af18(void)

{
  FUN_10b58aec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58af2c; end: 10b58af37;  */

undefined ** FUN_10b58af2c(void)

{
  return &PTR_DAT_110d0f6b8;
}



/* Entry: 10b58af38; end: 10b58af73;  */

void FUN_10b58af38(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b58c4e4();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x000107c3025c(unaff_x19 + 0x20);
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



/* Entry: 10b58af74; end: 10b58b077;  */

long * FUN_10b58af74(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00010b58c418();
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b58afa4;
  }
  else if ((int)param_2 != 0) {
LAB_10b58afa4:
    func_0x00010b58c46c();
    param_2 = 1;
    unaff_x20 = unaff_x19;
    func_0x00010b58c400();
  }
  func_0x00010b58c4a4(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b58afe4;
  }
  else if ((int)param_2 != 0) {
LAB_10b58afe4:
    func_0x00010b58c46c();
    param_2 = 2;
    unaff_x20 = unaff_x19;
    func_0x00010b58c400();
  }
  func_0x00010b58c4a4(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b58b040;
  }
  else if ((int)param_2 == 0) goto LAB_10b58b040;
  func_0x00010b58c46c();
  unaff_x20 = unaff_x19;
  func_0x00010b58c400();
LAB_10b58b040:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b58c5f8();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x20 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)unaff_x20) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x20 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)param_3);
}



/* Entry: 10b58b078; end: 10b58b113;  */

long FUN_10b58b078(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010b58c4b0(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x00010b58c4b0(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b58c5ec();
  }
  func_0x00010b58c4b0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b58c5ec();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b58c5cc();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b58b114; end: 10b58b117;  */

void FUN_10b58b114(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b58c474();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x00010b58c598();
  }
  func_0x00010b58c498(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b58c498(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58c550();
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



/* Entry: 10b58b118; end: 10b58b1af;  */

void FUN_10b58b118(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b58c474();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x00010b58c598();
  }
  func_0x00010b58c498(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b58c498(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58c550();
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



/* Entry: 10b58b1b0; end: 10b58b1db;  */

undefined8 FUN_10b58b1b0(undefined8 param_1)

{
  func_0x00010b58c524();
  FUN_10b58b1dc(param_1);
  return param_1;
}



/* Entry: 10b58b1dc; end: 10b58b203;  */

/* WARNING: Possible PIC construction at 0x00010b58b1f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b58b1f4) */

void FUN_10b58b1dc(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x00010b58c5a0();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
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



/* Entry: 10b58b204; end: 10b58b207;  */

undefined8 FUN_10b58b204(undefined8 param_1)

{
  func_0x00010b58c524();
  FUN_10b58b1dc(param_1);
  return param_1;
}



/* Entry: 10b58b208; end: 10b58b21b;  */

void FUN_10b58b208(void)

{
  FUN_10b58b1b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58b21c; end: 10b58b227;  */

undefined ** FUN_10b58b21c(void)

{
  return &PTR_DAT_110d0f718;
}



/* Entry: 10b58b228; end: 10b58b263;  */

void FUN_10b58b228(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b58c4e4();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x000107c3025c(unaff_x19 + 0x20);
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



/* Entry: 10b58b264; end: 10b58b367;  */

long * FUN_10b58b264(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00010b58c418();
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b58b294;
  }
  else if ((int)param_2 != 0) {
LAB_10b58b294:
    func_0x00010b58c46c();
    param_2 = 1;
    unaff_x20 = unaff_x19;
    func_0x00010b58c400();
  }
  func_0x00010b58c4a4(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b58b2d4;
  }
  else if ((int)param_2 != 0) {
LAB_10b58b2d4:
    func_0x00010b58c46c();
    param_2 = 2;
    unaff_x20 = unaff_x19;
    func_0x00010b58c400();
  }
  func_0x00010b58c4a4(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b58b330;
  }
  else if ((int)param_2 == 0) goto LAB_10b58b330;
  func_0x00010b58c46c();
  unaff_x20 = unaff_x19;
  func_0x00010b58c400();
LAB_10b58b330:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b58c5f8();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x20 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)unaff_x20) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x20 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)param_3);
}



/* Entry: 10b58b368; end: 10b58b403;  */

long FUN_10b58b368(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010b58c4b0(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x00010b58c4b0(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b58c5ec();
  }
  func_0x00010b58c4b0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b58c5ec();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b58c5cc();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b58b404; end: 10b58b407;  */

void FUN_10b58b404(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b58c474();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x00010b58c598();
  }
  func_0x00010b58c498(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b58c498(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58c550();
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



/* Entry: 10b58b408; end: 10b58b49f;  */

void FUN_10b58b408(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b58c474();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x00010b58c598();
  }
  func_0x00010b58c498(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b58c498(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58c550();
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



/* Entry: 10b58b4a0; end: 10b58b607;  */

undefined8 * FUN_10b58b4a0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0f620;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b58c4cc();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  FUN_10b58c138(param_1 + 3,param_3 + 0x18);
  func_0x00010598fd00(param_1 + 6,param_2,param_3 + 0x30);
  func_0x000107c282d4(param_1 + 9,param_2,param_3 + 0x48);
  *(undefined4 *)(param_1 + 0xb) = 0;
  lVar2 = param_3 + 0x60;
  func_0x00010b58c548();
  param_1[0xc] = lVar2;
  lVar2 = param_3 + 0x68;
  func_0x00010b58c548();
  param_1[0xd] = lVar2;
  lVar2 = param_3 + 0x70;
  func_0x00010b58c548();
  param_1[0xe] = lVar2;
  lVar2 = param_3 + 0x78;
  func_0x00010b58c548();
  param_1[0xf] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b575774(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  param_1[0x10] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b58c2fc(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b58c378(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  param_1[0x12] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0xa0);
  uVar3 = *(undefined8 *)(param_3 + 0x98);
  uVar6 = *(undefined8 *)(param_3 + 0xb0);
  uVar5 = *(undefined8 *)(param_3 + 0xa8);
  uVar8 = *(undefined8 *)(param_3 + 0xc0);
  uVar7 = *(undefined8 *)(param_3 + 0xb8);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_3 + 200);
  param_1[0x18] = uVar8;
  param_1[0x17] = uVar7;
  param_1[0x16] = uVar6;
  param_1[0x15] = uVar5;
  param_1[0x14] = uVar4;
  param_1[0x13] = uVar3;
  return param_1;
}



/* Entry: 10b58b608; end: 10b58b633;  */

undefined8 FUN_10b58b608(undefined8 param_1)

{
  func_0x00010b58c524();
  FUN_10b58b634(param_1);
  return param_1;
}



/* Entry: 10b58b634; end: 10b58b6a3;  */

long FUN_10b58b634(long param_1)

{
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c30258(param_1 + 0x70);
  func_0x000107c30258(param_1 + 0x78);
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b57423c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b58aec0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_10b58b1b0();
  }
  __ZdlPv();
  func_0x000107c282dc(param_1 + 0x48);
  func_0x000107c282b4(param_1 + 0x30);
  FUN_10b58c168(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b58b6a4; end: 10b58b6a7;  */

undefined8 FUN_10b58b6a4(undefined8 param_1)

{
  func_0x00010b58c524();
  FUN_10b58b634(param_1);
  return param_1;
}



/* Entry: 10b58b6a8; end: 10b58b6bb;  */

void FUN_10b58b6a8(void)

{
  FUN_10b58b608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58b6bc; end: 10b58b6c7;  */

undefined ** FUN_10b58b6bc(void)

{
  return &PTR_DAT_110d0f770;
}



/* Entry: 10b58b6c8; end: 10b58b783;  */

void FUN_10b58b6c8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c282c0(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x48) = 0;
  func_0x000107c3025c(param_1 + 0x60);
  func_0x000107c3025c(param_1 + 0x68);
  func_0x000107c3025c(param_1 + 0x70);
  func_0x000107c3025c(param_1 + 0x78);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5742d0(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b58af38(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b58b228(*(undefined8 *)(param_1 + 0x90));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b58b784; end: 10b58bc4f;  */

byte * FUN_10b58b784(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  ulong *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  int iVar10;
  uint uVar11;
  long unaff_x22;
  undefined8 *puVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  
  pbVar3 = param_1;
  pbVar5 = param_2;
  pbVar7 = param_3;
  func_0x00010b58c4a4(*(undefined8 *)(param_1 + 0x60));
  if ((long)pbVar5 < 0) {
    pbVar5 = (byte *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b58b7d4;
  }
  else if ((int)pbVar5 != 0) {
LAB_10b58b7d4:
    func_0x00010b58c46c();
    pbVar5 = (byte *)0x1;
    pbVar3 = param_3;
    func_0x00010b58c448();
    param_2 = pbVar3;
  }
  func_0x00010b58c4a4(*(undefined8 *)(param_1 + 0x68));
  if ((long)pbVar5 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b58b814;
  }
  else if ((int)pbVar5 != 0) {
LAB_10b58b814:
    func_0x00010b58c46c();
    pbVar3 = param_3;
    func_0x00010b58c448(param_3,2);
    param_2 = pbVar3;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    pbVar3 = param_3;
    func_0x00010599ccb0();
    pbVar7 = param_2;
    param_2 = pbVar3;
  }
  pbVar5 = *(byte **)(param_1 + 0xa0);
  if (pbVar5 != (byte *)0x0) {
    pbVar3 = param_3;
    func_0x000107c282e8();
    pbVar7 = param_2;
    param_2 = pbVar3;
  }
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uVar11 & 1) != 0) {
    pbVar5 = *(byte **)(param_1 + 0x80);
    pbVar7 = (byte *)(ulong)*(uint *)(pbVar5 + 0x20);
    pbVar3 = (byte *)0x5;
    func_0x00010b58c454();
    param_2 = pbVar3;
  }
  pbVar4 = pbVar3;
  if (*(int *)(param_1 + 0xa8) != 0) {
    func_0x00010b58c3f4();
    pbVar4 = (byte *)0x30;
    func_0x000107c280a8();
    func_0x00010b58c43c();
    pbVar5 = pbVar3;
    param_2 = pbVar4;
  }
  iVar10 = *(int *)(param_1 + 0x20);
  puVar12 = (undefined8 *)0x0;
  while (iVar14 = (int)puVar12, iVar10 != iVar14) {
    uVar8 = *(ulong *)(param_1 + 0x18);
    puVar2 = (ulong *)(param_1 + 0x18);
    if ((uVar8 & 1) != 0) {
      puVar2 = (ulong *)(uVar8 + (long)iVar14 * 8 + 7);
    }
    pbVar5 = (byte *)*puVar2;
    pbVar7 = (byte *)(ulong)*(uint *)(pbVar5 + 0x24);
    pbVar4 = (byte *)0x7;
    func_0x00010b58c454();
    param_2 = pbVar4;
    puVar12 = (undefined8 *)(ulong)(iVar14 + 1);
  }
  func_0x00010b58c4a4(*(undefined8 *)(param_1 + 0x70));
  if ((long)pbVar5 < 0) {
    pbVar5 = (byte *)0x0;
    if (puVar12[1] != 0) {
      puVar12 = (undefined8 *)*puVar12;
      goto LAB_10b58b90c;
    }
  }
  else if ((int)pbVar5 != 0) {
LAB_10b58b90c:
    func_0x00010b58c46c(puVar12);
    pbVar5 = (byte *)0x8;
    pbVar4 = param_3;
    func_0x00010b58c448();
    param_2 = pbVar4;
  }
  lVar15 = 8;
  puVar12 = (undefined8 *)&UNK_10f77d105;
  for (uVar8 = (ulong)(*(uint *)(param_1 + 0x38) &
                      ((int)*(uint *)(param_1 + 0x38) >> 0x1f ^ 0xffffffffU)); uVar8 != 0;
      uVar8 = uVar8 - 1) {
    uVar9 = *(ulong *)(param_1 + 0x30);
    puVar2 = (ulong *)(param_1 + 0x30);
    if ((uVar9 & 1) != 0) {
      puVar2 = (ulong *)(uVar9 + lVar15 + -1);
    }
    pbVar7 = (byte *)*puVar2;
    lVar6 = (long)(char)pbVar7[0x17];
    pbVar5 = pbVar7;
    if (lVar6 < 0) {
      lVar6 = *(long *)(pbVar7 + 8);
      pbVar5 = *(byte **)pbVar7;
    }
    func_0x000107c303d4(pbVar5,lVar6,1,&UNK_10f77d105);
    pbVar3 = (byte *)(long)(char)pbVar7[0x17];
    if ((((long)pbVar3 < 0) && (pbVar3 = *(byte **)(pbVar7 + 8), 0x7f < (long)pbVar3)) ||
       ((*(long *)param_3 - (long)param_2) + 0xe < (long)pbVar3)) {
      pbVar5 = (byte *)0x9;
      pbVar4 = param_3;
      func_0x00010b4d5120();
      param_2 = pbVar4;
    }
    else {
      *param_2 = 0x4a;
      param_2[1] = (byte)pbVar3;
      pbVar5 = pbVar7;
      if ((char)pbVar7[0x17] < '\0') {
        pbVar5 = *(byte **)pbVar7;
      }
      pbVar4 = param_2 + 2;
      pbVar7 = pbVar3;
      _memcpy();
      param_2 = param_2 + 2 + (long)pbVar3;
    }
    lVar15 = lVar15 + 8;
  }
  pbVar3 = pbVar4;
  if (*(long *)(param_1 + 0xb0) != 0) {
    func_0x00010b58c3f4();
    puVar12 = *(undefined8 **)(param_1 + 0xb0);
    pbVar3 = (byte *)0x51;
    func_0x000107c280a8();
    param_2 = pbVar3 + 8;
    *(undefined8 **)pbVar3 = puVar12;
    pbVar5 = pbVar4;
  }
  func_0x00010b58c4a4(*(undefined8 *)(param_1 + 0x78));
  if ((long)pbVar5 < 0) {
    if (puVar12[1] == 0) goto LAB_10b58ba64;
    puVar12 = (undefined8 *)*puVar12;
  }
  else if ((int)pbVar5 == 0) goto LAB_10b58ba64;
  func_0x00010b58c46c(puVar12);
  pbVar3 = param_3;
  func_0x00010b58c448(param_3,0xb);
  param_2 = pbVar3;
LAB_10b58ba64:
  pbVar5 = pbVar3;
  if (*(int *)(param_1 + 0xac) != 0) {
    func_0x00010b58c3f4();
    pbVar5 = (byte *)0x60;
    func_0x000107c280a8(0x60,pbVar3);
    func_0x00010b58c43c();
    param_2 = pbVar5;
  }
  pbVar3 = pbVar5;
  if (param_1[0xc4] == 1) {
    func_0x00010b58c3f4();
    pbVar3 = (byte *)0x68;
    func_0x000107c280a8(0x68,pbVar5);
    func_0x00010b58c584();
    param_2 = pbVar3;
  }
  pbVar5 = pbVar3;
  if (*(int *)(param_1 + 0xc0) != 0) {
    func_0x00010b58c3f4();
    pbVar5 = (byte *)0x70;
    func_0x000107c280a8(0x70,pbVar3);
    func_0x00010b58c43c();
    param_2 = pbVar5;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    pbVar5 = param_3;
    func_0x000106af6998();
    pbVar7 = param_2;
    param_2 = pbVar5;
  }
  if ((uVar11 >> 1 & 1) != 0) {
    pbVar7 = (byte *)(ulong)*(uint *)(*(long *)(param_1 + 0x88) + 0x28);
    pbVar5 = (byte *)0x10;
    func_0x00010b58c454();
    param_2 = pbVar5;
  }
  pbVar3 = pbVar5;
  if (*(int *)(param_1 + 200) != 0) {
    func_0x00010b58c3f4();
    pbVar3 = (byte *)0x88;
    func_0x000107c280a8(0x88,pbVar5);
    func_0x00010b58c43c();
    param_2 = pbVar3;
  }
  if ((uVar11 >> 2 & 1) != 0) {
    pbVar7 = (byte *)(ulong)*(uint *)(*(long *)(param_1 + 0x90) + 0x28);
    pbVar3 = (byte *)0x12;
    func_0x00010b58c454();
    param_2 = pbVar3;
  }
  uVar11 = *(uint *)(param_1 + 0x58);
  if (uVar11 != 0) {
    func_0x00010b58c3f4();
    pbVar5 = pbVar3 + 3;
    pbVar3[0] = 0x9a;
    pbVar3[1] = 1;
    for (; 0x7f < uVar11; uVar11 = uVar11 >> 7) {
      pbVar5[-1] = (byte)uVar11 | 0x80;
      pbVar5 = pbVar5 + 1;
    }
    pbVar5[-1] = (byte)uVar11;
    piVar13 = *(int **)(param_1 + 0x50);
    piVar1 = piVar13 + *(int *)(param_1 + 0x48);
    do {
      func_0x00010b58c3f4();
      uVar8 = (ulong)*piVar13;
      pbVar5 = pbVar3;
      while( true ) {
        param_2 = pbVar5 + 1;
        if (uVar8 < 0x80) break;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar8 = uVar8 >> 7;
        pbVar5 = param_2;
      }
      piVar13 = piVar13 + 1;
      *pbVar5 = (byte)uVar8;
    } while (piVar13 < piVar1);
  }
  if (param_1[0xc5] == 1) {
    func_0x00010b58c3f4();
    param_2 = (byte *)0xa0;
    func_0x000107c280a8(0xa0,pbVar3);
    func_0x00010b58c584();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b58c5f8();
  if ((long)pbVar7 < 0) {
    lVar15 = *(long *)(extraout_x8 + 8);
    pbVar7 = *(byte **)(extraout_x8 + 0x10);
  }
  else {
    lVar15 = extraout_x8 + 8;
  }
  if ((long)(int)pbVar7 <= *(long *)param_3 - (long)param_2) {
    _memcpy(param_2,lVar15,(ulong)pbVar7 & 0xffffffff);
    return param_2 + (int)pbVar7;
  }
  while( true ) {
    iVar14 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
    iVar10 = (int)pbVar7;
    pbVar7 = (byte *)(ulong)(uint)(iVar10 - iVar14);
    if (iVar10 - iVar14 == 0 || iVar10 < iVar14) break;
    func_0x00010b4d5738();
    pbVar5 = param_2 + iVar14;
    param_2 = param_3;
    func_0x000107c303e4(param_3,pbVar5);
  }
  func_0x00010b4d5738();
  return param_2 + iVar10;
}



/* Entry: 10b58bc50; end: 10b58bee7;  */

void FUN_10b58bc50(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_w8;
  undefined4 uVar4;
  int extraout_w8_00;
  int iVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w9;
  int extraout_w9_00;
  ulong uVar6;
  long lVar7;
  long extraout_x9;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  uVar6 = *(ulong *)(param_1 + 0x18);
  lVar9 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar6 & 1) != 0) {
    puVar1 = (ulong *)(uVar6 + 7);
  }
  uVar6 = param_1;
  for (lVar11 = lVar9 << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
    uVar6 = *puVar1;
    FUN_10b58adc0();
    lVar9 = uVar6 + lVar9 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  lVar9 = lVar9 + (ulong)uVar2;
  lVar11 = 8;
  for (uVar10 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar6 = *(ulong *)(param_1 + 0x30);
    puVar1 = (ulong *)(param_1 + 0x30);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + lVar11 + -1);
    }
    uVar6 = *puVar1;
    func_0x000107c282a0();
    lVar9 = uVar6 + lVar9;
    lVar11 = lVar11 + 8;
  }
  lVar7 = 0;
  lVar11 = 0;
  for (lVar8 = (long)*(int *)(param_1 + 0x48); lVar8 != 0; lVar8 = lVar8 + -1) {
    lVar11 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x50) + (lVar7 >> 0x1e))) * -9
                     + 0x280U >> 6) + lVar11;
    lVar7 = lVar7 + 0x100000000;
  }
  iVar5 = (int)lVar11 + (int)lVar9;
  uVar4 = 0;
  if (lVar11 != 0) {
    func_0x00010b58c5d8();
    iVar5 = iVar5 + extraout_w9 + 2;
    uVar4 = extraout_w8;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  func_0x00010b58c4b0(*(undefined8 *)(param_1 + 0x60));
  lVar9 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar9 = *(long *)(uVar6 + 8);
  }
  if (lVar9 != 0) {
    func_0x000107c282a0();
    func_0x00010b58c560();
  }
  func_0x00010b58c4b0(*(undefined8 *)(param_1 + 0x68));
  lVar9 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar9 = *(long *)(uVar6 + 8);
  }
  if (lVar9 != 0) {
    func_0x000107c282a0();
    func_0x00010b58c560();
  }
  func_0x00010b58c4b0(*(undefined8 *)(param_1 + 0x70));
  lVar9 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar9 = *(long *)(uVar6 + 8);
  }
  if (lVar9 != 0) {
    func_0x000107c282a0();
    func_0x00010b58c560();
  }
  func_0x00010b58c4b0(*(undefined8 *)(param_1 + 0x78));
  lVar9 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar9 = *(long *)(uVar6 + 8);
  }
  if (lVar9 != 0) {
    func_0x000107c282a0();
    func_0x00010b58c560();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_10b5744fc(*(undefined8 *)(param_1 + 0x80));
      func_0x00010b58c560();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_10b58b078(*(undefined8 *)(param_1 + 0x88));
      func_0x00010b58c4f0();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_10b58b368(*(undefined8 *)(param_1 + 0x90));
      func_0x00010b58c4f0();
    }
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    func_0x00010b58c56c();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x00010b58c56c();
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    func_0x00010b58c52c();
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    func_0x00010b58c52c();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    iVar5 = iVar5 + 9;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    iVar5 = ((int)LZCOUNT(*(long *)(param_1 + 0xb8)) * -9 + 0x2c0U >> 6) + iVar5;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    func_0x00010b58c5d8();
    iVar5 = extraout_w8_00 + extraout_w9_00 + 1;
  }
  iVar5 = iVar5 + (uint)*(byte *)(param_1 + 0xc4) * 2;
  iVar3 = iVar5 + 3;
  if (*(char *)(param_1 + 0xc5) == '\0') {
    iVar3 = iVar5;
  }
  if (*(int *)(param_1 + 200) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 200)) * -9 + 0x280U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b58c5cc();
    lVar9 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar9 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar9 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10b58bee8; end: 10b58beeb;  */

void FUN_10b58bee8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b58c138(param_1 + 0x18,param_2 + 0x18);
  func_0x00010598fce8(param_1 + 0x30,param_2 + 0x30);
  lVar3 = param_2 + 0x48;
  func_0x000107c282d0(param_1 + 0x48);
  func_0x00010b58c498(*(undefined8 *)(param_2 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x000107c30248(param_1 + 0x60);
  }
  func_0x00010b58c498(*(undefined8 *)(param_2 + 0x68));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x000107c30248(param_1 + 0x68);
  }
  func_0x00010b58c498(*(undefined8 *)(param_2 + 0x70));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x000107c30248(param_1 + 0x70);
  }
  func_0x00010b58c498(*(undefined8 *)(param_2 + 0x78));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x000107c30248(param_1 + 0x78);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar5;
        FUN_10b575774(uVar5,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        func_0x00010b574200();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar5;
        func_0x00010b58c2fc(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        FUN_10b58b118();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        func_0x00010b58c378(uVar5,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar5;
      }
      else {
        FUN_10b58b408();
      }
    }
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_2 + 0x98);
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_2 + 0xa0);
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_2 + 0xa8);
  }
  if (*(int *)(param_2 + 0xac) != 0) {
    *(int *)(param_1 + 0xac) = *(int *)(param_2 + 0xac);
  }
  if (*(long *)(param_2 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_2 + 0xb0);
  }
  if (*(long *)(param_2 + 0xb8) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_2 + 0xb8);
  }
  if (*(int *)(param_2 + 0xc0) != 0) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
  }
  if (*(char *)(param_2 + 0xc4) == '\x01') {
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  if (*(char *)(param_2 + 0xc5) == '\x01') {
    *(undefined1 *)(param_1 + 0xc5) = 1;
  }
  if (*(int *)(param_2 + 200) != 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b58beec; end: 10b58c137;  */

void FUN_10b58beec(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b58c138(param_1 + 0x18,param_2 + 0x18);
  func_0x00010598fce8(param_1 + 0x30,param_2 + 0x30);
  lVar3 = param_2 + 0x48;
  func_0x000107c282d0(param_1 + 0x48);
  func_0x00010b58c498(*(undefined8 *)(param_2 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x000107c30248(param_1 + 0x60);
  }
  func_0x00010b58c498(*(undefined8 *)(param_2 + 0x68));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x000107c30248(param_1 + 0x68);
  }
  func_0x00010b58c498(*(undefined8 *)(param_2 + 0x70));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x000107c30248(param_1 + 0x70);
  }
  func_0x00010b58c498(*(undefined8 *)(param_2 + 0x78));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b58c48c();
    }
    func_0x000107c30248(param_1 + 0x78);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar5;
        FUN_10b575774(uVar5,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        func_0x00010b574200();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar5;
        func_0x00010b58c2fc(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        FUN_10b58b118();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        func_0x00010b58c378(uVar5,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar5;
      }
      else {
        FUN_10b58b408();
      }
    }
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_2 + 0x98);
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_2 + 0xa0);
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_2 + 0xa8);
  }
  if (*(int *)(param_2 + 0xac) != 0) {
    *(int *)(param_1 + 0xac) = *(int *)(param_2 + 0xac);
  }
  if (*(long *)(param_2 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_2 + 0xb0);
  }
  if (*(long *)(param_2 + 0xb8) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_2 + 0xb8);
  }
  if (*(int *)(param_2 + 0xc0) != 0) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
  }
  if (*(char *)(param_2 + 0xc4) == '\x01') {
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  if (*(char *)(param_2 + 0xc5) == '\x01') {
    *(undefined1 *)(param_1 + 0xc5) = 1;
  }
  if (*(int *)(param_2 + 200) != 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b58c138; end: 10b58c167;  */

void FUN_10b58c138(long *param_1,long param_2)

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



/* Entry: 10b58c168; end: 10b58c197;  */

long * FUN_10b58c168(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b58c198; end: 10b58c2fb;  */

long FUN_10b58c198(long param_1)

{
  func_0x000107c282dc(param_1 + 0x38);
  func_0x000107c282b4(param_1 + 0x20);
  FUN_10b58c168(param_1 + 8);
  return param_1;
}



/* Entry: 10b58c2fc; end: 10b58c3f3;  */

undefined8 * FUN_10b58c2fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b58c514();
  }
  else {
    func_0x00010b58c460();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d0f530;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b58c4cc();
  }
  lVar2 = param_2 + 0x10;
  func_0x00010b58c4c4();
  puVar1[2] = lVar2;
  lVar2 = param_2 + 0x18;
  func_0x00010b58c4c4();
  puVar1[3] = lVar2;
  param_2 = param_2 + 0x20;
  func_0x00010b58c4c4();
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



/* Entry: 10b58c3f4; end: 10b58c603;  */

ulong * FUN_10b58c3f4(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 10b58c604; end: 10b58c63b;  */

long FUN_10b58c604(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b58c63c; end: 10b58c63f;  */

long FUN_10b58c63c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b58c640; end: 10b58c653;  */

void FUN_10b58c640(void)

{
  FUN_10b58c604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58c654; end: 10b58c65f;  */

undefined ** FUN_10b58c654(void)

{
  return &PTR_DAT_110d0f8c0;
}



/* Entry: 10b58c660; end: 10b58c6a7;  */

void FUN_10b58c660(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
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



/* Entry: 10b58c6a8; end: 10b58c85b;  */

long * FUN_10b58c6a8(long *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  plVar2 = param_1;
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_10b58c6ec;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_10b58c6ec:
    func_0x000107c303d4(puVar8,lVar3,1,&UNK_10f77d171);
    param_2 = param_3;
    func_0x00010b58ce40(param_3,1);
    plVar2 = param_2;
  }
  plVar6 = plVar2;
  if ((int)param_1[6] != 0) {
    func_0x00010b58ce18();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 6);
    uVar1 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(plVar6,uVar1);
    param_2 = plVar6;
  }
  plVar2 = plVar6;
  if (param_1[4] != 0) {
    func_0x00010b58ce18();
    lVar3 = param_1[4];
    plVar2 = (long *)0x19;
    func_0x000107c280a8(0x19,plVar6);
    param_2 = plVar2 + 1;
    *plVar2 = lVar3;
  }
  plVar6 = plVar2;
  if (param_1[5] != 0) {
    func_0x00010b58ce18();
    lVar3 = param_1[5];
    plVar6 = (long *)0x21;
    func_0x000107c280a8(0x21,plVar2);
    param_2 = plVar6 + 1;
    *plVar6 = lVar3;
  }
  plVar2 = plVar6;
  if (*(char *)((long)param_1 + 0x34) == '\x01') {
    func_0x00010b58ce18();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar6);
    func_0x00010b58ce4c();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x35) == '\x01') {
    func_0x00010b58ce18();
    param_2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010b58ce4c();
  }
  puVar8 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_10b58c818;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b58c818;
  func_0x000107c303d4(puVar8,lVar3,1,&UNK_10f77d1a5);
  param_2 = param_3;
  func_0x00010b58ce40(param_3,7);
LAB_10b58c818:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar5 = param_1[1] & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar4) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar7 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar9;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar7);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b58c85c; end: 10b58ca1f;  */

void FUN_10b58c85c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b58c894;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b58c894:
    iVar1 = 0;
    goto LAB_10b58c898;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b58c898:
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    iVar1 = iVar1 + (int)uVar2 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + 9;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = iVar1 + 9;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x34) * 2 + (uint)*(byte *)(param_1 + 0x35) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x38) = iVar1;
  return;
}



/* Entry: 10b58ca20; end: 10b58ca7f;  */

undefined8 * FUN_10b58ca20(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0f880;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b58cd18(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b58ca80; end: 10b58caaf;  */

long FUN_10b58ca80(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b58cd44(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b58cab0; end: 10b58cab3;  */

long FUN_10b58cab0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b58cd44(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b58cab4; end: 10b58cac7;  */

void FUN_10b58cab4(void)

{
  FUN_10b58ca80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58cac8; end: 10b58cad3;  */

undefined ** FUN_10b58cac8(void)

{
  return &PTR_DAT_110d0f910;
}



/* Entry: 10b58cad4; end: 10b58cb17;  */

void FUN_10b58cad4(long param_1)

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



/* Entry: 10b58cb18; end: 10b58cbcf;  */

long * FUN_10b58cb18(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x38),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b58cbd0; end: 10b58cc47;  */

long FUN_10b58cbd0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b58cc48();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b58cc48; end: 10b58cc73;  */

long FUN_10b58cc48(long param_1)

{
  FUN_10b58c85c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b58cc74; end: 10b58cc77;  */

void FUN_10b58cc74(long param_1,long param_2)

{
  FUN_10b58ccc0(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b58cc78; end: 10b58ccbf;  */

void FUN_10b58cc78(long param_1,long param_2)

{
  FUN_10b58ccc0(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b58ccc0; end: 10b58cccf;  */

void FUN_10b58ccc0(long *param_1,long param_2)

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



/* Entry: 10b58ccd0; end: 10b58cd07;  */

void FUN_10b58ccd0(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  FUN_10b58cad4();
  FUN_10b58ccc0(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b58cd08; end: 10b58cd17;  */

void FUN_10b58cd08(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_FUN_110d0f830;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x2e) = 0;
  return;
}



/* Entry: 10b58cd18; end: 10b58cd43;  */

undefined8 * FUN_10b58cd18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b58ccc0(param_1,param_3);
  return param_1;
}



/* Entry: 10b58cd44; end: 10b58cd73;  */

long * FUN_10b58cd44(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b58cd74; end: 10b58ce17;  */

void FUN_10b58cd74(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110d0f830;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x2e) = 0;
  return;
}



/* Entry: 10b58ce18; end: 10b58ce57;  */

ulong * FUN_10b58ce18(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 10b58ce58; end: 10b58cf07;  */

undefined * FUN_10b58ce58(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam000000011383e190 & 1) == 0) {
    iVar2 = 0x1383e190;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      func_0x00010b58e854();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam000000011383e188 = uVar1;
      param_1 = 0x1383e190;
      ___cxa_guard_release();
    }
  }
  func_0x00010b58e854();
  FUN_10b4c59b8();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x11383e198);
  }
  return puVar3;
}



/* Entry: 10b58cf08; end: 10b58cf33;  */

long FUN_10b58cf08(long param_1)

{
  func_0x00010b58e73c();
  FUN_10b58e300(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b58cf34; end: 10b58cf37;  */

long FUN_10b58cf34(long param_1)

{
  func_0x00010b58e73c();
  FUN_10b58e300(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b58cf38; end: 10b58cf4b;  */

void FUN_10b58cf38(void)

{
  FUN_10b58cf08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58cf4c; end: 10b58cf57;  */

undefined ** FUN_10b58cf4c(void)

{
  return &PTR_DAT_110d0fc00;
}



/* Entry: 10b58cf58; end: 10b58cfab;  */

void FUN_10b58cf58(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
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



/* Entry: 10b58cfac; end: 10b58d117;  */

long * FUN_10b58cfac(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b58e70c();
  iVar4 = *(int *)(param_1 + 0x18);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010b58e7e0();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x1;
    func_0x00010b58e750();
  }
  iVar4 = *(int *)(unaff_x20 + 0x30);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010b58e7e0();
    param_3 = (ulong)*(uint *)(param_2 + 0x34);
    param_4 = (long *)0x2;
    func_0x00010b58e750();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58e76c();
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



/* Entry: 10b58d118; end: 10b58d11b;  */

void FUN_10b58d118(long param_1,long param_2)

{
  FUN_10b58d170(param_1 + 0x10,param_2 + 0x10);
  func_0x00010b58d180(param_1 + 0x28,param_2 + 0x28);
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



/* Entry: 10b58d11c; end: 10b58d16f;  */

void FUN_10b58d11c(long param_1,long param_2)

{
  FUN_10b58d170(param_1 + 0x10,param_2 + 0x10);
  func_0x00010b58d180(param_1 + 0x28,param_2 + 0x28);
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



/* Entry: 10b58d170; end: 10b58d18f;  */

void FUN_10b58d170(long *param_1,long param_2)

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



/* Entry: 10b58d190; end: 10b58d203;  */

void FUN_10b58d190(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b58e83c();
  FUN_10b58cf58();
  FUN_10b58d170(unaff_x20 + 0x10,unaff_x19 + 0x10);
  func_0x00010b58d180(unaff_x20 + 0x28,unaff_x19 + 0x28);
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
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



/* Entry: 10b58d204; end: 10b58d237;  */

long FUN_10b58d204(long param_1)

{
  func_0x00010b58e73c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b58d930();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b58d238; end: 10b58d23b;  */

long FUN_10b58d238(long param_1)

{
  func_0x00010b58e73c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b58d930();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b58d23c; end: 10b58d24f;  */

void FUN_10b58d23c(void)

{
  FUN_10b58d204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58d250; end: 10b58d25b;  */

undefined ** FUN_10b58d250(void)

{
  return &PTR_DAT_110d0fc60;
}



/* Entry: 10b58d25c; end: 10b58d2f3;  */

void FUN_10b58d25c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b58d2a0(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b58d2f4; end: 10b58d39f;  */

long * FUN_10b58d2f4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b58e70c();
  plVar2 = param_1;
  if ((int)param_1[4] != 0) {
    func_0x00010b58e6dc();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b58e760();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b58e6dc();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b58e760();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_4 = (long *)0xa;
    func_0x00010b58e750();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58e76c();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b58d3a0; end: 10b58d443;  */

void FUN_10b58d3a0(long param_1)

{
  int iVar1;
  int extraout_w8;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010b58da84();
    func_0x00010b58e6f4();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b58d444; end: 10b58d4df;  */

void FUN_10b58d444(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b58e82c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x00010b58e4b8();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_10b58d4e0();
      puVar2 = puVar3;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58e81c();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 10b58d4e0; end: 10b58d587;  */

void FUN_10b58d4e0(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b58e82c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b58e4f0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b58db44();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b58e564();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b58db9c();
      }
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b58e81c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b58d588; end: 10b58d5b7;  */

long FUN_10b58d588(long param_1)

{
  func_0x00010b58e73c();
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return param_1;
}



/* Entry: 10b58d5b8; end: 10b58d5bb;  */

long FUN_10b58d5b8(long param_1)

{
  func_0x00010b58e73c();
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return param_1;
}



/* Entry: 10b58d5bc; end: 10b58d5cf;  */

void FUN_10b58d5bc(void)

{
  FUN_10b58d588();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58d5d0; end: 10b58d5fb;  */

undefined ** FUN_10b58d5d0(void)

{
  return &PTR_DAT_110d0fcc0;
}



/* Entry: 10b58d5fc; end: 10b58d76f;  */

long * FUN_10b58d5fc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b58e70c();
  iVar6 = (int)param_1[7];
  if (iVar6 == 3) {
    func_0x00010b58e6dc();
    if (*(int *)(unaff_x20 + 0x38) == 3) {
      plVar3 = (long *)(ulong)*(byte *)(unaff_x20 + 0x30);
    }
    else {
      plVar3 = (long *)0x0;
    }
    uVar2 = 0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x000107c280a8(plVar3,uVar2);
    param_4 = plVar3;
  }
  else {
    if (iVar6 == 2) {
      func_0x00010b58e6dc();
      plVar3 = (long *)0x10;
    }
    else {
      plVar3 = param_1;
      if (iVar6 != 1) goto LAB_10b58d6bc;
      func_0x00010b58e6dc();
      plVar3 = (long *)0x8;
    }
    func_0x000107c280a8(plVar3,param_1);
    func_0x00010b58e760();
    param_4 = plVar3;
  }
LAB_10b58d6bc:
  plVar4 = plVar3;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x00010b58e6dc();
    plVar4 = (long *)0x59;
    func_0x000107c280a8(0x59,plVar3);
    func_0x00010b58e744();
  }
  plVar3 = plVar4;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b58e6dc();
    plVar3 = (long *)0x61;
    func_0x000107c280a8(0x61,plVar4);
    func_0x00010b58e744();
  }
  plVar4 = plVar3;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b58e6dc();
    plVar4 = (long *)0x69;
    func_0x000107c280a8(0x69,plVar3);
    func_0x00010b58e744();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b58e6dc();
    func_0x000107c280a8(0x71,plVar4);
    func_0x00010b58e744();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58e76c();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
      _memcpy(param_4,lVar5,param_3 & 0xffffffff);
      return (long *)((long)param_4 + (long)(int)param_3);
    }
    while( true ) {
      iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar6 = (int)param_3;
      uVar1 = iVar6 - iVar7;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar6);
  }
  return param_4;
}



/* Entry: 10b58d770; end: 10b58d8ab;  */

long FUN_10b58d770(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = lVar2 + 9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = lVar2 + 9;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = lVar2 + 9;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 3) {
    lVar2 = lVar2 + 2;
  }
  else if ((iVar1 == 2) || (iVar1 == 1)) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x34) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b58d8ac; end: 10b58d92f;  */

undefined8 * FUN_10b58d8ac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0fb20;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b58e848();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10b58e4f0(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b58e564(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}


