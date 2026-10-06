/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4d6184; end: 10b4d6197;  */

void FUN_10b4d6184(void)

{
  func_0x000106e5f6d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4d6198; end: 10b4d619f;  */

undefined8 FUN_10b4d6198(void)

{
  return 1;
}



/* Entry: 10b4d61a0; end: 10b4d61db;  */

void FUN_10b4d61a0(void)

{
  func_0x00010b4d6248();
  return;
}



/* Entry: 10b4d61dc; end: 10b4d629b;  */

undefined1 * FUN_10b4d61dc(void)

{
  func_0x000106e5c56c(&stack0x00000000,&UNK_10f7744b3);
  return &stack0x00000000;
}



/* Entry: 10b4d629c; end: 10b4d6357;  */

long FUN_10b4d629c(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    func_0x00010ae6a960((long)*(int *)(param_1 + 0x1c),0,&UNK_10f7744bf);
    func_0x00010b4d7080();
    func_0x00010b4d6fa4();
    func_0x00010bdb2a08();
    FUN_10b4d6358(auStack_30,&UNK_10f77451f);
  }
  else {
    lVar1 = param_1;
    func_0x00010b4d7050();
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010b4d7018();
      if (lVar1 == 0) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (int)param_2;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 0;
      }
      func_0x00010802bcb8();
      func_0x00010b4d6f78();
    }
    else {
      func_0x00010802bcb8();
      func_0x00010b4d6f78();
    }
    func_0x00010bdb2a88();
  }
  func_0x00010b4d7020();
  func_0x00010b4d6fd8();
  func_0x00010b4d6fc8();
  return param_2;
}



/* Entry: 10b4d6358; end: 10b4d6377;  */

void FUN_10b4d6358(void)

{
  func_0x00010b4d6fd8();
  func_0x00010b4d6fc8();
  return;
}



/* Entry: 10b4d6378; end: 10b4d6397;  */

void FUN_10b4d6378(void)

{
  func_0x00010b4d7110();
  func_0x00010b4d6f40();
  return;
}



/* Entry: 10b4d6398; end: 10b4d63f3;  */

ulong FUN_10b4d6398(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010b4d6fb4();
  if (lVar3 == 0) {
    iVar2 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x18) + param_2;
    if (iVar2 < param_2) {
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x18) = iVar1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return (ulong)(param_2 <= iVar2);
  }
  func_0x00010802bcb8();
  func_0x00010b4d6f78();
  func_0x00010bdb2a88();
  func_0x00010b4d7020();
  return (long)*(int *)(lVar3 + 0x18);
}



/* Entry: 10b4d63f4; end: 10b4d6423;  */

long FUN_10b4d63f4(long param_1)

{
  return (long)*(int *)(param_1 + 0x18);
}



/* Entry: 10b4d6424; end: 10b4d64af;  */

undefined1 * FUN_10b4d6424(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_30 [16];
  
  puVar2 = auStack_30;
  lVar1 = param_1;
  func_0x00010b4d7050(param_1,*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 == 0) {
    puVar2 = param_2;
    func_0x00010b4d7018();
    if (puVar2 == (undefined1 *)0x0) {
      *(ulong *)(param_1 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) - (int)param_2,
                    (int)*(undefined8 *)(param_1 + 0x18) - (int)param_2);
      return (undefined1 *)0x0;
    }
    func_0x00010802bcb8();
    func_0x00010b4d6f78();
    func_0x00010bdb2a88();
  }
  else {
    func_0x00010b4d7080();
    func_0x00010b4d6fa4();
    func_0x00010bdb2a08();
    FUN_10b4d64b0(auStack_30);
  }
  func_0x00010b4d7020();
  func_0x00010ae6bd08();
  return puVar2;
}



/* Entry: 10b4d64b0; end: 10b4d64db;  */

undefined8 FUN_10b4d64b0(undefined8 param_1)

{
  func_0x00010ae6bd08(param_1,&UNK_10f77457e,0x39);
  return param_1;
}



/* Entry: 10b4d64dc; end: 10b4d64e3;  */

long FUN_10b4d64dc(long param_1)

{
  return (long)*(int *)(param_1 + 0x18);
}



/* Entry: 10b4d64e4; end: 10b4d65bf;  */

long FUN_10b4d64e4(long param_1,long *param_2,int *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long alStack_90 [2];
  long alStack_80 [2];
  long lStack_70;
  undefined1 auStack_40 [16];
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    func_0x00010b4d7000();
    iVar6 = (int)param_2;
    func_0x00010b4d6ff4();
    puVar3 = auStack_40;
    func_0x00010bdb2a88();
    func_0x00010b4d70d0();
    puVar4 = puVar3;
    lStack_70 = param_1;
    func_0x00010b4d6fb4();
    if (puVar4 != (undefined1 *)0x0) goto LAB_10b4d6654;
    lVar2 = *(long *)(puVar3 + 8);
    if (lVar2 == 0) {
      func_0x00010b4d7000();
      func_0x00010b4d6ff4();
    }
    else {
      alStack_90[0] = (long)*(char *)(lVar2 + 0x17);
      if (alStack_90[0] < 0) {
        alStack_90[0] = *(long *)(lVar2 + 8);
      }
      plVar5 = alStack_80;
      alStack_80[0] = (long)iVar6;
      func_0x0001053abb00(plVar5,alStack_90,&UNK_10f7745cb);
      if (plVar5 == (long *)0x0) {
        lVar2 = *(long *)(puVar3 + 8);
        lVar9 = (long)*(char *)(lVar2 + 0x17);
        if (lVar9 < 0) {
          lVar9 = *(long *)(lVar2 + 8);
        }
        func_0x000107c281b8(lVar2,lVar9 - iVar6);
        return lVar2;
      }
      func_0x00010802bcb8();
      func_0x00010b4d6f90();
    }
    do {
      func_0x00010bdb2a88(alStack_80);
      func_0x00010b4d70d0();
LAB_10b4d6654:
      func_0x00010802bcb8();
      func_0x00010b4d6f90();
    } while( true );
  }
  uVar10 = (ulong)(char)*(byte *)(lVar2 + 0x17);
  if ((long)uVar10 < 0) {
    uVar10 = *(ulong *)(lVar2 + 8);
    uVar7 = (*(ulong *)(lVar2 + 0x10) & 0x7fffffffffffffff) - 1;
    if (uVar10 < uVar7) goto LAB_10b4d653c;
  }
  else if (*(byte *)(lVar2 + 0x17) < 0x16) {
    uVar7 = 0x16;
    goto LAB_10b4d653c;
  }
  uVar7 = uVar10 << 1;
LAB_10b4d653c:
  uVar1 = uVar10 + 0x7fffffff;
  if (uVar7 <= uVar10 + 0x7fffffff) {
    uVar1 = uVar7;
  }
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  func_0x000107c3026c(lVar2,uVar1);
  puVar8 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)puVar8 + 0x17) < '\0') {
    puVar8 = (undefined8 *)*puVar8;
  }
  *param_2 = (long)puVar8 + uVar10;
  lVar2 = (long)*(char *)(*(long *)(param_1 + 8) + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 8);
  }
  *param_3 = (int)lVar2 - (int)uVar10;
  return 1;
}



/* Entry: 10b4d65c0; end: 10b4d667b;  */

void FUN_10b4d65c0(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long alStack_40 [2];
  long alStack_30 [2];
  
  lVar2 = param_1;
  func_0x00010b4d6fb4();
  if (lVar2 != 0) goto LAB_10b4d6654;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    func_0x00010b4d7000();
    func_0x00010b4d6ff4();
  }
  else {
    alStack_40[0] = (long)*(char *)(lVar2 + 0x17);
    if (alStack_40[0] < 0) {
      alStack_40[0] = *(long *)(lVar2 + 8);
    }
    plVar1 = alStack_30;
    alStack_30[0] = (long)param_2;
    func_0x0001053abb00(plVar1,alStack_40,&UNK_10f7745cb);
    if (plVar1 == (long *)0x0) {
      lVar2 = *(long *)(param_1 + 8);
      lVar3 = (long)*(char *)(lVar2 + 0x17);
      if (lVar3 < 0) {
        lVar3 = *(long *)(lVar2 + 8);
      }
      func_0x000107c281b8(lVar2,lVar3 - param_2);
      return;
    }
    func_0x00010802bcb8();
    func_0x00010b4d6f90();
  }
  do {
    func_0x00010bdb2a88(alStack_30);
    func_0x00010b4d70d0();
LAB_10b4d6654:
    func_0x00010802bcb8();
    func_0x00010b4d6f90();
  } while( true );
}



/* Entry: 10b4d667c; end: 10b4d66bf;  */

long * FUN_10b4d667c(long param_1,undefined1 *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *extraout_x8;
  long *plVar10;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined1 auStack_1078 [4096];
  undefined8 uStack_78;
  long alStack_20 [2];
  
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != 0) {
    if (-1 < (long)*(char *)(lVar9 + 0x17)) {
      return (long *)(long)*(char *)(lVar9 + 0x17);
    }
    return *(long **)(lVar9 + 8);
  }
  func_0x00010b4d7000();
  func_0x00010b4d6ff4();
  plVar3 = alStack_20;
  uVar6 = 0x9d;
  func_0x00010bdb2a88();
  func_0x00010b4d70d0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar4 = plVar3;
  puVar5 = param_2;
  func_0x00010b4d708c(0);
  plVar2 = extraout_x8;
  uStack_78 = extraout_x9;
  do {
    plVar10 = plVar2;
    iVar8 = (int)uVar6;
    iVar7 = (int)plVar10;
    uVar1 = (int)param_2 - iVar7;
    if (uVar1 == 0 || (int)param_2 < iVar7) break;
    if (0xfff < (int)uVar1) {
      uVar1 = 0x1000;
    }
    uVar6 = (ulong)uVar1;
    puVar5 = auStack_1078;
    plVar4 = plVar3;
    (**(code **)(*plVar3 + 0x10))();
    iVar8 = (int)uVar6;
    plVar2 = (long *)(ulong)(uint)((int)plVar4 + iVar7);
  } while (0 < (int)plVar4);
  func_0x00010b4d708c(uStack_78);
  if (extraout_x9_00 == extraout_x8_00) {
    return plVar10;
  }
  ___stack_chk_fail();
  *plVar4 = (long)&PTR_FUN_110cf1000;
  plVar4[1] = (long)puVar5;
  *(undefined2 *)(plVar4 + 2) = 0;
  if (iVar8 < 1) {
    iVar8 = 0x2000;
  }
  plVar4[3] = 0;
  plVar4[4] = 0;
  *(undefined4 *)((long)plVar4 + 0x2c) = 0;
  *(undefined4 *)(plVar4 + 6) = 0;
  *(int *)(plVar4 + 5) = iVar8;
  return plVar4;
}



/* Entry: 10b4d66c0; end: 10b4d676b;  */

long * FUN_10b4d66c0(long *param_1,undefined1 *param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  long *extraout_x8;
  long *plVar7;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined1 auStack_1048 [4096];
  undefined8 uStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar3 = param_1;
  puVar4 = param_2;
  func_0x00010b4d708c(0);
  plVar2 = extraout_x8;
  uStack_48 = extraout_x9;
  do {
    plVar7 = plVar2;
    iVar6 = (int)param_3;
    iVar5 = (int)plVar7;
    uVar1 = (int)param_2 - iVar5;
    if (uVar1 == 0 || (int)param_2 < iVar5) break;
    if (0xfff < (int)uVar1) {
      uVar1 = 0x1000;
    }
    param_3 = (ulong)uVar1;
    puVar4 = auStack_1048;
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x10))();
    iVar6 = (int)param_3;
    plVar2 = (long *)(ulong)(uint)((int)plVar3 + iVar5);
  } while (0 < (int)plVar3);
  func_0x00010b4d708c(uStack_48);
  if (extraout_x9_00 == extraout_x8_00) {
    return plVar7;
  }
  ___stack_chk_fail();
  *plVar3 = (long)&PTR_FUN_110cf1000;
  plVar3[1] = (long)puVar4;
  *(undefined2 *)(plVar3 + 2) = 0;
  if (iVar6 < 1) {
    iVar6 = 0x2000;
  }
  plVar3[3] = 0;
  plVar3[4] = 0;
  *(undefined4 *)((long)plVar3 + 0x2c) = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  *(int *)(plVar3 + 5) = iVar6;
  return plVar3;
}



/* Entry: 10b4d676c; end: 10b4d6797;  */

void FUN_10b4d676c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  *param_1 = &PTR_FUN_110cf1000;
  param_1[1] = param_2;
  *(undefined2 *)(param_1 + 2) = 0;
  if (param_3 < 1) {
    param_3 = 0x2000;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(int *)(param_1 + 5) = param_3;
  return;
}



/* Entry: 10b4d6798; end: 10b4d67df;  */

undefined8 * FUN_10b4d6798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf1000;
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[1] != 0)) {
    func_0x00010b4d70f8();
  }
  func_0x00010724e5b8(param_1 + 4);
  return param_1;
}



/* Entry: 10b4d67e0; end: 10b4d67e3;  */

undefined8 * FUN_10b4d67e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf1000;
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[1] != 0)) {
    func_0x00010b4d70f8();
  }
  func_0x00010724e5b8(param_1 + 4);
  return param_1;
}



/* Entry: 10b4d67e4; end: 10b4d67f7;  */

void FUN_10b4d67e4(void)

{
  FUN_10b4d6798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4d67f8; end: 10b4d689f;  */

undefined8 FUN_10b4d67f8(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    return 0;
  }
  func_0x00010b4d7040();
  FUN_10b4d68a0();
  uVar2 = *(uint *)(unaff_x19 + 0x30);
  if ((int)uVar2 < 1) {
    uVar3 = *(ulong *)(unaff_x19 + 8);
    func_0x00010b4d7104(uVar3,*(undefined8 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x28));
    uVar2 = (uint)uVar3;
    *(uint *)(unaff_x19 + 0x2c) = uVar2;
    if ((int)uVar2 < 1) {
      if ((int)uVar2 < 0) {
        *(undefined1 *)(unaff_x19 + 0x11) = 1;
      }
      func_0x00010b4d68e0();
      return 0;
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    *(ulong *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + (uVar3 & 0xffffffff);
    *unaff_x20 = uVar2;
    *unaff_x21 = lVar1;
  }
  else {
    *unaff_x21 = (*(long *)(unaff_x19 + 0x20) + (long)*(int *)(unaff_x19 + 0x2c)) - (ulong)uVar2;
    *unaff_x20 = uVar2;
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return 1;
}



/* Entry: 10b4d68a0; end: 10b4d693b;  */

void FUN_10b4d68a0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x20);
  if (*plVar3 != 0) {
    return;
  }
  lVar2 = (long)*(int *)(param_1 + 0x28);
  __Znam();
  lVar1 = *plVar3;
  *plVar3 = lVar2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10b4d693c; end: 10b4d6a17;  */

long FUN_10b4d693c(long param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  if ((*(int *)(param_1 + 0x30) == 0) && (unaff_x20 = param_1, *(long *)(param_1 + 0x20) != 0)) {
    lVar1 = param_2;
    FUN_10b4d6378(param_2,*(undefined4 *)(param_1 + 0x2c),&UNK_10f774650);
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010b4d7018();
      if (lVar1 == 0) {
        *(int *)(param_1 + 0x30) = (int)param_2;
        return 0;
      }
      func_0x00010b4d7080();
      func_0x00010b4d6fa4();
      func_0x00010bdb2a08();
      func_0x00010b4d6a58(auStack_30,&UNK_10f7746b4);
    }
    else {
      func_0x00010b4d7080();
      func_0x00010b4d6fa4();
      func_0x00010bdb2a08();
      func_0x00010b4d7070();
    }
  }
  else {
    func_0x00010b4d6ff4();
    func_0x00010bdb2a08(auStack_30);
    func_0x00010b4d7060();
  }
  func_0x00010b4d7020();
  func_0x00010b4d6fd8();
  func_0x00010b4d6fc8();
  return unaff_x20;
}



/* Entry: 10b4d6a18; end: 10b4d6b0b;  */

void FUN_10b4d6a18(void)

{
  func_0x00010b4d6fd8();
  func_0x00010b4d6fc8();
  return;
}



/* Entry: 10b4d6b0c; end: 10b4d6b1b;  */

long FUN_10b4d6b0c(long param_1)

{
  return *(long *)(param_1 + 0x18) - (long)*(int *)(param_1 + 0x30);
}



/* Entry: 10b4d6b1c; end: 10b4d6b3b;  */

void FUN_10b4d6b1c(void)

{
  func_0x00010b4d7110();
  func_0x00010b4d6f5c();
  return;
}



/* Entry: 10b4d6b3c; end: 10b4d6b8b;  */

undefined8 * FUN_10b4d6b3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf1048;
  FUN_10b4d6b8c();
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[1] != 0)) {
    func_0x00010b4d70f8();
  }
  func_0x00010724e5b8(param_1 + 4);
  return param_1;
}



/* Entry: 10b4d6b8c; end: 10b4d6bfb;  */

undefined8 FUN_10b4d6b8c(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010b4d7104(uVar1,*(undefined8 *)(param_1 + 0x20));
    if ((int)uVar1 == 0) {
      *(undefined1 *)(param_1 + 0x11) = 1;
      func_0x00010b4d6f18(param_1);
      return 0;
    }
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return 1;
}



/* Entry: 10b4d6bfc; end: 10b4d6bff;  */

undefined8 * FUN_10b4d6bfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf1048;
  FUN_10b4d6b8c();
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[1] != 0)) {
    func_0x00010b4d70f8();
  }
  func_0x00010724e5b8(param_1 + 4);
  return param_1;
}



/* Entry: 10b4d6c00; end: 10b4d6c13;  */

void FUN_10b4d6c00(void)

{
  FUN_10b4d6b3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4d6c14; end: 10b4d6c77;  */

void FUN_10b4d6c14(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  
  func_0x00010b4d7040();
  if ((*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) ||
     (lVar3 = unaff_x19, FUN_10b4d6b8c(), (int)lVar3 != 0)) {
    FUN_10b4d6c78();
    iVar1 = *(int *)(unaff_x19 + 0x28);
    iVar2 = *(int *)(unaff_x19 + 0x2c);
    *unaff_x21 = *(long *)(unaff_x19 + 0x20) + (long)iVar2;
    *unaff_x20 = iVar1 - iVar2;
    *(undefined4 *)(unaff_x19 + 0x2c) = *(undefined4 *)(unaff_x19 + 0x28);
  }
  return;
}



/* Entry: 10b4d6c78; end: 10b4d6cb7;  */

void FUN_10b4d6c78(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x20);
  if (*plVar3 != 0) {
    return;
  }
  lVar2 = (long)*(int *)(param_1 + 0x28);
  __Znam();
  lVar1 = *plVar3;
  *plVar3 = lVar2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10b4d6cb8; end: 10b4d6d8b;  */

long FUN_10b4d6cb8(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  if (iVar3 != 0) {
    uVar2 = param_1;
    func_0x00010b4d6fb4();
    if (uVar2 == 0) {
      uVar2 = (ulong)*(uint *)(param_1 + 0x2c);
      FUN_10b4d6b1c(uVar2,*(undefined4 *)(param_1 + 0x28),&UNK_10f7746f1);
      if (uVar2 == 0) {
        FUN_10b4d6378(param_2,*(undefined4 *)(param_1 + 0x2c),&UNK_10f774650);
        if (param_2 == 0) {
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - iVar3;
          return 0;
        }
        func_0x00010b4d7080();
        func_0x00010b4d6fa4();
        func_0x00010bdb2a08();
        func_0x00010b4d7070();
        uVar2 = param_2;
      }
      else {
        func_0x00010b4d7080();
        func_0x00010b4d6fa4();
        func_0x00010bdb2a08();
        func_0x00010b4d7060();
      }
    }
    else {
      func_0x00010802bcb8();
      func_0x00010b4d6f78();
      func_0x00010bdb2a88();
    }
    func_0x00010b4d7020();
    return *(long *)(uVar2 + 0x18) + (long)*(int *)(uVar2 + 0x2c);
  }
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010b4d7104(uVar1,*(undefined8 *)(param_1 + 0x20));
      if ((int)uVar1 == 0) {
        *(undefined1 *)(param_1 + 0x11) = 1;
        func_0x00010b4d6f18(param_1);
        return 0;
      }
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    return 1;
  }
  return 0;
}



/* Entry: 10b4d6d8c; end: 10b4d6d9b;  */

long FUN_10b4d6d8c(long param_1)

{
  return *(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x2c);
}



/* Entry: 10b4d6d9c; end: 10b4d6e8f;  */

long * FUN_10b4d6d9c(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  int iStack_3c;
  undefined8 uStack_38;
  
  if ((int)param_3 < (int)param_1[5]) {
    while (plVar1 = param_1, (**(code **)(*param_1 + 0x10))(param_1,&uStack_38,&iStack_3c),
          (int)plVar1 != 0) {
      iVar2 = (int)param_3;
      if (iVar2 <= iStack_3c) {
        _memcpy(uStack_38,param_2,(long)iVar2);
        (**(code **)(*param_1 + 0x18))(param_1,iStack_3c - iVar2);
        return plVar1;
      }
      _memcpy(uStack_38,param_2);
      param_2 = param_2 + iStack_3c;
      param_3 = (ulong)(uint)(iVar2 - iStack_3c);
    }
  }
  else {
    plVar1 = param_1;
    FUN_10b4d6b8c();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_1[1];
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
      if ((int)plVar1 != 0) {
        param_1[3] = param_1[3] + (long)(int)param_3;
        return (long *)0x1;
      }
    }
    plVar1 = (long *)0x0;
  }
  return plVar1;
}



/* Entry: 10b4d6e90; end: 10b4d6f17;  */

void FUN_10b4d6e90(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long lStack_a8;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b4d538c(&uStack_c0);
  while ((lVar1 = lStack_a8, lStack_a8 != 0 &&
         (plVar2 = param_1, (**(code **)(*param_1 + 0x28))(param_1,uStack_c0,uStack_b8),
         (int)plVar2 != 0))) {
    func_0x00010b4d5358(&uStack_c0);
  }
  uVar3 = (ulong)(lVar1 == 0);
  func_0x00010b4d708c(uStack_28);
  if (extraout_x9 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  *(undefined4 *)(uVar3 + 0x2c) = 0;
  lVar1 = *(long *)(uVar3 + 0x20);
  *(long *)(uVar3 + 0x20) = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1,0);
    return;
  }
  return;
}



/* Entry: 10b4d6f18; end: 10b4d7123;  */

void FUN_10b4d6f18(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1,0);
    return;
  }
  return;
}



/* Entry: 10b4d7124; end: 10b4d7147;  */

void FUN_10b4d7124(int param_1)

{
  FUN_10b4d7148();
  func_0x00010b4d82f0();
  FUN_10b4d755c();
  if (param_1 == 0) {
    func_0x00010b4d82cc();
  }
  return;
}



/* Entry: 10b4d7148; end: 10b4d73a3;  */

undefined8 * FUN_10b4d7148(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puStack_48;
  
  puVar7 = param_1;
  func_0x00010b4d8254();
  if (puVar7 == (undefined8 *)param_1[5]) {
    puVar16 = param_1 + 6;
    goto LAB_10b4d736c;
  }
  puVar16 = (undefined8 *)0x0;
  plVar12 = (long *)param_1[4];
LAB_10b4d7184:
  plVar11 = plVar12;
  uVar2 = *(uint *)(plVar11 + 1);
  if (uVar2 != 0) {
    plVar12 = (long *)*plVar11;
    Hint_Prefetch(plVar12,0,0,0);
    uVar6 = 0;
    uVar3 = *(uint *)((long)plVar11 + 0xc);
    if (uVar2 <= *(uint *)((long)plVar11 + 0xc)) {
      uVar3 = uVar2;
    }
    do {
      uVar15 = uVar6;
      if (uVar3 == uVar15) goto LAB_10b4d7184;
      uVar6 = uVar15 + 1;
    } while (puVar7 != (undefined8 *)plVar11[(ulong)uVar15 + 2]);
    puVar16 = (undefined8 *)plVar11[(ulong)uVar2 + (ulong)uVar15 + 2];
    goto LAB_10b4d7184;
  }
  if (puVar16 != (undefined8 *)0x0) goto LAB_10b4d736c;
  puVar8 = (undefined8 *)(param_1[1] & 0xfffffffffffffff8);
  uVar10 = 0;
  FUN_10b4d7ae0(puVar8,0,param_2 + 0x60);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = uVar10;
  lVar17 = (long)puVar8 + (uVar10 & 0xfffffffffffffff8);
  puVar8[4] = lVar17;
  puVar8[5] = puVar8 + 0xf;
  puVar8[6] = lVar17;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = puVar8;
  puVar8[10] = 0;
  puVar8[0xb] = uVar10;
  puVar8[0xc] = param_1;
  *(undefined1 *)(puVar8 + 0xd) = 0;
  puVar8[0xe] = 0;
  puVar16 = puVar8 + 3;
  *puVar16 = puVar8 + 0xf;
  lVar17 = param_1[4];
  uVar2 = *(uint *)(lVar17 + 8);
  if (uVar2 != 0) {
    puVar1 = (uint *)(lVar17 + 0xc);
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uVar3 < uVar2) {
      lVar17 = lVar17 + (ulong)uVar3 * 8;
      *(undefined8 **)(lVar17 + 0x10) = puVar7;
      *(undefined8 **)(lVar17 + (ulong)uVar2 * 8 + 0x10) = puVar16;
      goto LAB_10b4d736c;
    }
    *puVar1 = uVar2;
  }
  puStack_48 = param_1 + 3;
  func_0x000107c2b9f0();
  iVar9 = (int)uVar10;
  lVar13 = param_1[4];
  if (lVar13 == lVar17) {
    uVar10 = (ulong)*(uint *)(lVar17 + 8);
    lVar13 = lVar17;
LAB_10b4d72e0:
    uVar10 = uVar10 << 6;
    if (0xfbf < uVar10) {
      uVar10 = 0xfc0;
    }
    plVar12 = (long *)(uVar10 + 0x40);
    func_0x000107c282a8();
    uVar2 = iVar9 - 0x10U >> 4;
    uVar10 = (ulong)uVar2;
    *plVar12 = 0;
    *(uint *)(plVar12 + 1) = uVar2;
    *(undefined4 *)((long)plVar12 + 0xc) = 1;
    plVar12[2] = (long)puVar7;
    for (lVar17 = 3; lVar17 - 2U < uVar10; lVar17 = lVar17 + 1) {
      plVar12[lVar17] = 0;
    }
    plVar12[uVar10 + 2] = (long)puVar16;
    lVar17 = uVar10 * 8 + 0x18;
    for (uVar14 = 1; uVar14 < uVar10; uVar14 = uVar14 + 1) {
      *(undefined8 *)((long)plVar12 + lVar17) = 0;
      lVar17 = lVar17 + 8;
    }
    *plVar12 = lVar13;
    param_1[4] = plVar12;
  }
  else {
    puVar1 = (uint *)(lVar13 + 0xc);
    do {
      uVar2 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar3 = *(uint *)(lVar13 + 8);
    uVar10 = (ulong)uVar3;
    if (uVar3 <= uVar2) {
      *(uint *)(lVar13 + 0xc) = uVar3;
      goto LAB_10b4d72e0;
    }
    lVar13 = lVar13 + (ulong)uVar2 * 8;
    *(undefined8 **)(lVar13 + 0x10) = puVar7;
    *(undefined8 **)(lVar13 + uVar10 * 8 + 0x10) = puVar16;
  }
  func_0x000107c30384(&puStack_48);
LAB_10b4d736c:
  puVar7[1] = *param_1;
  puVar7[2] = puVar16;
  return puVar16;
}



/* Entry: 10b4d73a4; end: 10b4d7467;  */

void FUN_10b4d73a4(int param_1)

{
  func_0x00010b4d82f0();
  FUN_10b4d755c();
  if (param_1 == 0) {
    func_0x00010b4d82cc();
  }
  return;
}



/* Entry: 10b4d7468; end: 10b4d7497;  */

undefined8 * FUN_10b4d7468(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined1 in_ZR;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *extraout_x8;
  ulong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puStack_48;
  
  FUN_10b4d81f4();
  func_0x00010b4d8214();
  if ((bool)in_ZR) {
    return *(undefined8 **)(param_1 + 0x10);
  }
  lVar11 = 0x10;
  puVar7 = extraout_x8;
  func_0x00010b4d8254(extraout_x8,0x10);
  if (puVar7 == (undefined8 *)extraout_x8[5]) {
    puVar17 = extraout_x8 + 6;
    goto LAB_10b4d736c;
  }
  puVar17 = (undefined8 *)0x0;
  plVar13 = (long *)extraout_x8[4];
LAB_10b4d7184:
  plVar12 = plVar13;
  uVar2 = *(uint *)(plVar12 + 1);
  if (uVar2 != 0) {
    plVar13 = (long *)*plVar12;
    Hint_Prefetch(plVar13,0,0,0);
    uVar6 = 0;
    uVar3 = *(uint *)((long)plVar12 + 0xc);
    if (uVar2 <= *(uint *)((long)plVar12 + 0xc)) {
      uVar3 = uVar2;
    }
    do {
      uVar16 = uVar6;
      if (uVar3 == uVar16) goto LAB_10b4d7184;
      uVar6 = uVar16 + 1;
    } while (puVar7 != (undefined8 *)plVar12[(ulong)uVar16 + 2]);
    puVar17 = (undefined8 *)plVar12[(ulong)uVar2 + (ulong)uVar16 + 2];
    goto LAB_10b4d7184;
  }
  if (puVar17 != (undefined8 *)0x0) goto LAB_10b4d736c;
  puVar8 = (undefined8 *)(extraout_x8[1] & 0xfffffffffffffff8);
  uVar10 = 0;
  FUN_10b4d7ae0(puVar8,0,lVar11 + 0x60);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = uVar10;
  lVar11 = (long)puVar8 + (uVar10 & 0xfffffffffffffff8);
  puVar8[4] = lVar11;
  puVar8[5] = puVar8 + 0xf;
  puVar8[6] = lVar11;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = puVar8;
  puVar8[10] = 0;
  puVar8[0xb] = uVar10;
  puVar8[0xc] = extraout_x8;
  *(undefined1 *)(puVar8 + 0xd) = 0;
  puVar8[0xe] = 0;
  puVar17 = puVar8 + 3;
  *puVar17 = puVar8 + 0xf;
  lVar11 = extraout_x8[4];
  uVar2 = *(uint *)(lVar11 + 8);
  if (uVar2 != 0) {
    puVar1 = (uint *)(lVar11 + 0xc);
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uVar3 < uVar2) {
      lVar11 = lVar11 + (ulong)uVar3 * 8;
      *(undefined8 **)(lVar11 + 0x10) = puVar7;
      *(undefined8 **)(lVar11 + (ulong)uVar2 * 8 + 0x10) = puVar17;
      goto LAB_10b4d736c;
    }
    *puVar1 = uVar2;
  }
  puStack_48 = extraout_x8 + 3;
  func_0x000107c2b9f0();
  iVar9 = (int)uVar10;
  lVar14 = extraout_x8[4];
  if (lVar14 == lVar11) {
    uVar10 = (ulong)*(uint *)(lVar11 + 8);
    lVar14 = lVar11;
LAB_10b4d72e0:
    uVar10 = uVar10 << 6;
    if (0xfbf < uVar10) {
      uVar10 = 0xfc0;
    }
    plVar13 = (long *)(uVar10 + 0x40);
    func_0x000107c282a8();
    uVar2 = iVar9 - 0x10U >> 4;
    uVar10 = (ulong)uVar2;
    *plVar13 = 0;
    *(uint *)(plVar13 + 1) = uVar2;
    *(undefined4 *)((long)plVar13 + 0xc) = 1;
    plVar13[2] = (long)puVar7;
    for (lVar11 = 3; lVar11 - 2U < uVar10; lVar11 = lVar11 + 1) {
      plVar13[lVar11] = 0;
    }
    plVar13[uVar10 + 2] = (long)puVar17;
    lVar11 = uVar10 * 8 + 0x18;
    for (uVar15 = 1; uVar15 < uVar10; uVar15 = uVar15 + 1) {
      *(undefined8 *)((long)plVar13 + lVar11) = 0;
      lVar11 = lVar11 + 8;
    }
    *plVar13 = lVar14;
    extraout_x8[4] = plVar13;
  }
  else {
    puVar1 = (uint *)(lVar14 + 0xc);
    do {
      uVar2 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar3 = *(uint *)(lVar14 + 8);
    uVar10 = (ulong)uVar3;
    if (uVar3 <= uVar2) {
      *(uint *)(lVar14 + 0xc) = uVar3;
      goto LAB_10b4d72e0;
    }
    lVar14 = lVar14 + (ulong)uVar2 * 8;
    *(undefined8 **)(lVar14 + 0x10) = puVar7;
    *(undefined8 **)(lVar14 + uVar10 * 8 + 0x10) = puVar17;
  }
  func_0x000107c30384(&puStack_48);
LAB_10b4d736c:
  puVar7[1] = *extraout_x8;
  puVar7[2] = puVar17;
  return puVar17;
}



/* Entry: 10b4d7498; end: 10b4d755b;  */

undefined8 FUN_10b4d7498(void)

{
  func_0x00010b4d82f0();
  func_0x00010b4d74c4();
  func_0x00010b4d8244();
  return 0;
}



/* Entry: 10b4d755c; end: 10b4d75cf;  */

bool FUN_10b4d755c(ulong *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *param_1 + param_2;
  uVar3 = param_1[1];
  if (uVar1 <= uVar3) {
    *param_3 = *param_1;
    *param_1 = uVar1;
    uVar4 = param_1[2];
    if (((long)(uVar4 - uVar1) < 0x401) && (uVar5 = param_1[3], uVar4 < uVar5)) {
      if (uVar4 <= uVar1) {
        uVar4 = uVar1;
      }
      uVar2 = uVar4 + 0x400;
      if (uVar5 <= uVar4 + 0x400) {
        uVar2 = uVar5;
      }
      for (; uVar4 < uVar2; uVar4 = uVar4 + 0x40) {
        Hint_Prefetch(uVar4,2,0,0);
      }
      param_1[2] = uVar4;
    }
  }
  return uVar1 <= uVar3;
}



/* Entry: 10b4d75d0; end: 10b4d7723;  */

long FUN_10b4d75d0(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  long lVar5;
  long *plVar6;
  short sVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_38;
  
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    uVar8 = 0x100;
  }
  else {
    *(ulong *)(param_1 + 0x38) = (ulong)*(ushort *)(lVar9 + 8) + *(long *)(param_1 + 0x38) + -0x10;
    uVar8 = (ulong)*(ushort *)(lVar9 + 10);
  }
  lVar5 = param_1;
  FUN_10b4d755c(param_1,uVar8,&plStack_38);
  if ((int)lVar5 == 0) {
    if (lVar9 == 0) {
      sVar7 = 0x100;
      uVar8 = 0x100;
    }
    else {
      uVar4 = *(ushort *)(lVar9 + 10);
      uVar8 = (ulong)uVar4;
      sVar7 = uVar4 << 1;
      if ((uVar4 & 0x7000) != 0) {
        sVar7 = 0x2000;
      }
    }
    uVar1 = ((int)uVar8 - (int)(uVar8 - 0x10)) + (int)((uVar8 - 0x10) / 0x18) * 0x18;
    plVar6 = (long *)((ulong)uVar1 & 0xffff);
    __Znwm();
    *plVar6 = lVar9;
    uVar4 = (ushort)uVar1;
    *(ushort *)(plVar6 + 1) = uVar4;
    *(short *)((long)plVar6 + 10) = sVar7;
    *(undefined1 *)((long)plVar6 + 0xc) = 1;
    *(ulong *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + (ulong)uVar4;
  }
  else {
    *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) - uVar8;
    uVar2 = (undefined2)(((uint)uVar8 & 0x7fff) << 1);
    if ((uVar8 & 0x7000) != 0) {
      uVar2 = 0x2000;
    }
    *plStack_38 = lVar9;
    *(short *)(plStack_38 + 1) =
         (short)uVar8 + ((short)((uVar8 - 0x10) / 0x18) * 0x18 - (short)(uVar8 - 0x10));
    uVar3 = 0x100;
    if (lVar9 != 0) {
      uVar3 = uVar2;
    }
    *(undefined2 *)((long)plStack_38 + 10) = uVar3;
    *(undefined1 *)((long)plStack_38 + 0xc) = 0;
    plVar6 = plStack_38;
  }
  *(long **)(param_1 + 0x20) = plVar6;
  uVar4 = *(ushort *)(plVar6 + 1);
  *(ulong *)(param_1 + 0x28) = (ulong)uVar4 - 0x28;
  return (long)plVar6 + ((ulong)uVar4 - 0x18);
}



/* Entry: 10b4d7724; end: 10b4d785b;  */

void FUN_10b4d7724(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  do {
    uVar6 = param_2 + 7 & 0xfffffffffffffff8;
    uVar1 = uVar6;
    if (8 < param_3) {
      uVar1 = (param_3 - 8) + param_2;
    }
    func_0x00010b4d74c4(param_1,uVar1 + 0x10);
    uVar1 = (param_3 - 1) + *param_1 & -param_3;
    uVar2 = param_1[1];
    param_2 = uVar6;
  } while (uVar2 < uVar6 + uVar1 + 0x10);
  uVar6 = uVar1 + uVar6;
  *param_1 = uVar6;
  uVar3 = uVar2 - 0x10;
  param_1[1] = uVar3;
  uVar4 = param_1[3];
  if (((long)(uVar3 - uVar4) < 0x181) && (uVar5 = param_1[2], uVar5 < uVar4)) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    uVar3 = uVar4 - 0x180;
    if (uVar4 - 0x180 <= uVar5) {
      uVar3 = uVar5;
    }
    for (; uVar3 < uVar4; uVar4 = uVar4 - 0x40) {
      Hint_Prefetch(uVar4,2,0,0);
    }
    param_1[3] = uVar4;
  }
  *(ulong *)(uVar2 - 0x10) = uVar1;
  *(undefined8 *)(uVar2 - 8) = param_4;
  uVar1 = param_1[2];
  if (((long)(uVar1 - uVar6) < 0x401) && (uVar2 = param_1[3], uVar1 < uVar2)) {
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    uVar6 = uVar1 + 0x400;
    if (uVar2 <= uVar1 + 0x400) {
      uVar6 = uVar2;
    }
    for (; uVar1 < uVar6; uVar1 = uVar1 + 0x40) {
      Hint_Prefetch(uVar1,2,0,0);
    }
    param_1[2] = uVar1;
  }
  return;
}



/* Entry: 10b4d785c; end: 10b4d796f;  */

void FUN_10b4d785c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  ulong extraout_x9;
  ulong uVar2;
  ulong extraout_x10;
  
  func_0x00010b4d74c4(param_1,0x10);
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar1 + -0x10;
  if (((long)((lVar1 + -0x10) - *(ulong *)(param_1 + 0x18)) < 0x181) &&
     (*(ulong *)(param_1 + 0x10) < *(ulong *)(param_1 + 0x18))) {
    func_0x00010b4d826c();
    for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
      Hint_Prefetch(uVar2,2,0,0);
    }
    *(ulong *)(param_1 + 0x18) = uVar2;
    lVar1 = extraout_x8;
  }
  *(undefined8 *)(lVar1 + -0x10) = param_2;
  *(undefined8 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 10b4d7970; end: 10b4d79a7;  */

undefined2 FUN_10b4d7970(long param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar1 = *(undefined2 *)(param_1 + 8);
    __ZdlPv();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10b4d79a8; end: 10b4d7a3f;  */

void FUN_10b4d79a8(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (puVar3[2] != 0) {
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    do {
      puVar4 = (undefined8 *)puVar3[1];
      puVar1 = (undefined8 *)((long)puVar3 + (puVar3[2] & 0xfffffffffffffff8));
      puVar5 = puVar4;
      for (iVar2 = -7; (puVar5 < puVar1 && (iVar2 != 0)); iVar2 = iVar2 + 1) {
        Hint_Prefetch(*puVar5,0,0,1);
        puVar5 = puVar5 + 2;
      }
      while (puVar5 < puVar1) {
        (*(code *)puVar4[1])(*puVar4);
        Hint_Prefetch(*puVar5,0,0,1);
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      }
      Hint_Prefetch(*puVar3,0,0,1);
      for (; puVar4 < puVar1; puVar4 = puVar4 + 2) {
        (*(code *)puVar4[1])(*puVar4);
      }
      puVar3 = (undefined8 *)*puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  return;
}



/* Entry: 10b4d7a40; end: 10b4d7adf;  */

undefined8 * FUN_10b4d7a40(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = &DAT_110cf1110;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  func_0x00010b4d7a90();
  return param_1;
}



/* Entry: 10b4d7ae0; end: 10b4d7bbf;  */

undefined1  [16] FUN_10b4d7ae0(ulong *param_1,long param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong auStack_58 [2];
  undefined8 uStack_48;
  
  if (param_1 == (ulong *)0x0) {
    pcVar8 = (code *)0x0;
    puVar10 = (undefined8 *)0x8000;
    puVar9 = (undefined8 *)0x100;
  }
  else {
    puVar9 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
    pcVar8 = (code *)param_1[2];
  }
  uStack_48 = 0xffffffffffffffe7;
  puVar4 = auStack_58;
  puVar5 = &uStack_48;
  auStack_58[0] = param_3;
  func_0x0001053abb00(puVar4,puVar5,&UNK_10f77473e);
  if (puVar4 != (ulong *)0x0) {
    func_0x00010802bcb8();
    puVar6 = &UNK_10f77470e;
    func_0x00010bdb2a88(auStack_58,&UNK_10f77470e,0x4d,puVar4,puVar5);
    puVar4 = auStack_58;
    func_0x00010ae6c700();
    func_0x00010b4d8254();
    uVar7 = *puVar4;
    if ((uVar7 & 0xff) == 0) {
      do {
        lVar3 = lRam000000011383d948;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x11383d948,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          lRam000000011383d948 = lRam000000011383d948 + 1;
        }
      } while (cVar1 != '\0');
      uVar7 = lVar3 << 8;
    }
    *puVar4 = uVar7 + 1;
    auVar12._8_8_ = puVar6;
    auVar12._0_8_ = uVar7;
    return auVar12;
  }
  if ((undefined8 *)(param_2 << 1) <= puVar10) {
    puVar10 = (undefined8 *)(param_2 << 1);
  }
  if (param_2 != 0) {
    puVar9 = puVar10;
  }
  if (puVar9 <= (undefined8 *)(param_3 + 0x18)) {
    puVar9 = (undefined8 *)(param_3 + 0x18);
  }
  if (pcVar8 == (code *)0x0) {
    func_0x000107c282a8(puVar9);
    puVar10 = puVar9;
  }
  else {
    puVar10 = puVar9;
    (*pcVar8)(puVar9);
    puVar5 = puVar9;
  }
  auVar11._8_8_ = puVar5;
  auVar11._0_8_ = puVar10;
  return auVar11;
}



/* Entry: 10b4d7bc0; end: 10b4d7c0b;  */

ulong FUN_10b4d7bc0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  func_0x00010b4d8254();
  uVar4 = *param_1;
  if ((uVar4 & 0xff) == 0) {
    do {
      lVar3 = lRam000000011383d948;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11383d948,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam000000011383d948 = lRam000000011383d948 + 1;
      }
    } while (cVar1 != '\0');
    uVar4 = lVar3 << 8;
  }
  *param_1 = uVar4 + 1;
  return uVar4;
}



/* Entry: 10b4d7c0c; end: 10b4d7c8b;  */

long FUN_10b4d7c0c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_10b4d7c8c();
  uStack_28 = 0;
  puVar3 = &uStack_28;
  lVar2 = param_1;
  FUN_10b4d7cf0(param_1);
  if (((*(ulong *)(param_1 + 8) & 1) == 0) && (puVar3 != (undefined8 *)0x0)) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffff8;
    uStack_38 = 0;
    if (uVar1 != 0) {
      uStack_38 = *(undefined8 *)(uVar1 + 0x18);
    }
    puStack_30 = &uStack_28;
    FUN_10b4d7dbc(&uStack_38,lVar2,puVar3);
  }
  func_0x00010ae7c720(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4d7c8c; end: 10b4d7cef;  */

void FUN_10b4d7c8c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar2 = (long *)*(long *)(param_1 + 0x20);
  while (*(int *)(plVar2 + 1) != 0) {
    lVar6 = *plVar2;
    Hint_Prefetch(lVar6,0,0,0);
    FUN_10b4d8190();
    lVar7 = (long)plVar2 + -8;
    for (lVar9 = param_2 << 3; plVar2 = (long *)lVar6, lVar9 != 0; lVar9 = lVar9 + -8) {
      FUN_10b4d79a8(*(undefined8 *)(lVar7 + lVar9));
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4[2] != 0) {
    puVar4[1] = *(undefined8 *)(param_1 + 0x38);
    do {
      puVar5 = (undefined8 *)puVar4[1];
      puVar1 = (undefined8 *)((long)puVar4 + (puVar4[2] & 0xfffffffffffffff8));
      puVar8 = puVar5;
      for (iVar3 = -7; (puVar8 < puVar1 && (iVar3 != 0)); iVar3 = iVar3 + 1) {
        Hint_Prefetch(*puVar8,0,0,1);
        puVar8 = puVar8 + 2;
      }
      while (puVar8 < puVar1) {
        (*(code *)puVar5[1])(*puVar5);
        Hint_Prefetch(*puVar8,0,0,1);
        puVar5 = puVar5 + 2;
        puVar8 = puVar8 + 2;
      }
      Hint_Prefetch(*puVar4,0,0,1);
      for (; puVar5 < puVar1; puVar5 = puVar5 + 2) {
        (*(code *)puVar5[1])(*puVar5);
      }
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return;
}



/* Entry: 10b4d7cf0; end: 10b4d7dbb;  */

/* WARNING: Possible PIC construction at 0x00010b4d7d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4d7d64) */

undefined1  [16] FUN_10b4d7cf0(long param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x19;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar8 [16];
  undefined8 uStack_60;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010b4d82f0();
  uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffff8;
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(uVar2 + 0x18);
  }
  plVar4 = (long *)*(long *)(unaff_x20 + 0x20);
  uStack_60 = uVar6;
  do {
    if (*(int *)(plVar4 + 1) == 0) {
      lVar7 = unaff_x20 + 0x30;
SUB_10b4d7e08:
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar6;
      *(long **)((long)register0x00000008 + -0x28) = unaff_x19;
      lVar3 = lVar7;
      func_0x00010b4d817c();
      *unaff_x19 = *unaff_x19 + lVar3;
      plVar4 = *(long **)(lVar7 + 0x30);
      while( true ) {
        plVar5 = (long *)*plVar4;
        if (plVar5 == (long *)0x0) break;
        func_0x00010b4d7dbc((undefined1 *)((long)register0x00000008 + -0x30));
        plVar4 = plVar5;
      }
      auVar8._8_8_ = plVar4[2];
      auVar8._0_8_ = plVar4;
      return auVar8;
    }
    lVar7 = *plVar4;
    Hint_Prefetch(lVar7,0,0,0);
    plVar5 = plVar4;
    FUN_10b4d8190();
    if (param_2 * 8 != 0) {
      lVar7 = *(long *)((long)plVar5 + -8 + param_2 * 8);
      unaff_x30 = 0x10b4d7d64;
      register0x00000008 = (BADSPACEBASE *)&uStack_60;
      unaff_x29 = puVar1;
      goto SUB_10b4d7e08;
    }
    __ZdlPv(plVar4);
    plVar4 = (long *)lVar7;
  } while( true );
}



/* Entry: 10b4d7dbc; end: 10b4d7e6b;  */

void FUN_10b4d7dbc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  if ((code *)*param_1 == (code *)0x0) {
    __ZdlPv(param_2);
  }
  else {
    (*(code *)*param_1)(param_2,param_3);
  }
  *(long *)param_1[1] = *(long *)param_1[1] + param_3;
  return;
}



/* Entry: 10b4d7e6c; end: 10b4d7f37;  */

ulong FUN_10b4d7e6c(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar4;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long lVar5;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong uVar6;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long lVar7;
  long extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar8;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong extraout_x12_02;
  ulong uVar9;
  
  FUN_10b4d81f4();
  func_0x00010b4d8214();
  if ((bool)in_ZR) {
    puVar2 = *(ulong **)(param_1 + 0x10);
    uVar3 = param_2 + 7U & 0xfffffffffffffff8;
    func_0x00010b4d829c(param_3 + *puVar2 + -1);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010b4d8224();
      uVar3 = extraout_x8_00;
      lVar5 = extraout_x9;
      lVar7 = extraout_x10;
      if (((bool)in_ZR || in_NG != in_OV) && (puVar2[2] < extraout_x12)) {
        func_0x00010b4d8284();
        for (uVar3 = extraout_x11; extraout_x12_00 < uVar3; uVar3 = uVar3 - 0x40) {
          Hint_Prefetch(uVar3,2,0,0);
        }
        puVar2[3] = uVar3;
        uVar3 = extraout_x8_01;
        lVar5 = extraout_x9_00;
        lVar7 = extraout_x10_00;
      }
      *(ulong *)(lVar7 + -0x10) = uVar3;
      *(undefined8 *)(lVar7 + -8) = param_4;
      if (((long)(puVar2[2] - lVar5) < 0x401) && (puVar2[2] < puVar2[3])) {
        func_0x00010b4d82b4();
        for (uVar3 = extraout_x9_01; uVar3 < extraout_x10_01; uVar3 = uVar3 + 0x40) {
          Hint_Prefetch(uVar3,2,0,0);
        }
        puVar2[2] = uVar3;
        uVar3 = extraout_x8_02;
      }
      return uVar3;
    }
  }
  else {
    puVar2 = extraout_x8;
    FUN_10b4d7148(extraout_x8,param_2 + 0x10);
    uVar3 = param_2 + 7U & 0xfffffffffffffff8;
    func_0x00010b4d829c(param_3 + *puVar2 + -1);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010b4d8224();
      uVar3 = extraout_x8_03;
      lVar5 = extraout_x9_02;
      lVar7 = extraout_x10_02;
      if (((bool)in_ZR || in_NG != in_OV) && (puVar2[2] < extraout_x12_01)) {
        func_0x00010b4d8284();
        for (uVar3 = extraout_x11_00; extraout_x12_02 < uVar3; uVar3 = uVar3 - 0x40) {
          Hint_Prefetch(uVar3,2,0,0);
        }
        puVar2[3] = uVar3;
        uVar3 = extraout_x8_04;
        lVar5 = extraout_x9_03;
        lVar7 = extraout_x10_03;
      }
      *(ulong *)(lVar7 + -0x10) = uVar3;
      *(undefined8 *)(lVar7 + -8) = param_4;
      if (((long)(puVar2[2] - lVar5) < 0x401) && (puVar2[2] < puVar2[3])) {
        func_0x00010b4d82b4();
        for (uVar3 = extraout_x9_04; uVar3 < extraout_x10_04; uVar3 = uVar3 + 0x40) {
          Hint_Prefetch(uVar3,2,0,0);
        }
        puVar2[2] = uVar3;
        uVar3 = extraout_x8_05;
      }
      return uVar3;
    }
  }
  do {
    uVar9 = uVar3 + 7 & 0xfffffffffffffff8;
    uVar1 = uVar9;
    if (8 < param_3) {
      uVar1 = (param_3 - 8) + uVar3;
    }
    func_0x00010b4d74c4(puVar2,uVar1 + 0x10);
    uVar1 = (param_3 - 1) + *puVar2 & -param_3;
    uVar4 = puVar2[1];
    uVar3 = uVar9;
  } while (uVar4 < uVar9 + uVar1 + 0x10);
  uVar9 = uVar1 + uVar9;
  *puVar2 = uVar9;
  uVar6 = uVar4 - 0x10;
  puVar2[1] = uVar6;
  uVar3 = puVar2[3];
  if (((long)(uVar6 - uVar3) < 0x181) && (uVar8 = puVar2[2], uVar8 < uVar3)) {
    if (uVar6 <= uVar3) {
      uVar3 = uVar6;
    }
    uVar6 = uVar3 - 0x180;
    if (uVar3 - 0x180 <= uVar8) {
      uVar6 = uVar8;
    }
    for (; uVar6 < uVar3; uVar3 = uVar3 - 0x40) {
      Hint_Prefetch(uVar3,2,0,0);
    }
    puVar2[3] = uVar3;
  }
  *(ulong *)(uVar4 - 0x10) = uVar1;
  *(undefined8 *)(uVar4 - 8) = param_4;
  uVar3 = puVar2[2];
  if (((long)(uVar3 - uVar9) < 0x401) && (uVar4 = puVar2[3], uVar3 < uVar4)) {
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    uVar9 = uVar3 + 0x400;
    if (uVar4 <= uVar3 + 0x400) {
      uVar9 = uVar4;
    }
    for (; uVar3 < uVar9; uVar3 = uVar3 + 0x40) {
      Hint_Prefetch(uVar3,2,0,0);
    }
    puVar2[2] = uVar3;
  }
  return uVar1;
}



/* Entry: 10b4d7f38; end: 10b4d8013;  */

ulong FUN_10b4d7f38(ulong *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar3;
  long extraout_x9;
  long lVar4;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar5;
  long extraout_x10;
  long lVar6;
  long extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong uVar7;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar8;
  
  FUN_10b4d7148(param_1,param_2 + 0x10);
  uVar2 = param_2 + 7U & 0xfffffffffffffff8;
  func_0x00010b4d829c(param_3 + *param_1 + -1);
  if ((bool)in_CY && !(bool)in_ZR) {
    do {
      uVar8 = uVar2 + 7 & 0xfffffffffffffff8;
      uVar1 = uVar8;
      if (8 < param_3) {
        uVar1 = (param_3 - 8) + uVar2;
      }
      func_0x00010b4d74c4(param_1,uVar1 + 0x10);
      uVar1 = (param_3 - 1) + *param_1 & -param_3;
      uVar3 = param_1[1];
      uVar2 = uVar8;
    } while (uVar3 < uVar8 + uVar1 + 0x10);
    uVar8 = uVar1 + uVar8;
    *param_1 = uVar8;
    uVar5 = uVar3 - 0x10;
    param_1[1] = uVar5;
    uVar2 = param_1[3];
    if (((long)(uVar5 - uVar2) < 0x181) && (uVar7 = param_1[2], uVar7 < uVar2)) {
      if (uVar5 <= uVar2) {
        uVar2 = uVar5;
      }
      uVar5 = uVar2 - 0x180;
      if (uVar2 - 0x180 <= uVar7) {
        uVar5 = uVar7;
      }
      for (; uVar5 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_1[3] = uVar2;
    }
    *(ulong *)(uVar3 - 0x10) = uVar1;
    *(undefined8 *)(uVar3 - 8) = param_4;
    uVar2 = param_1[2];
    if (((long)(uVar2 - uVar8) < 0x401) && (uVar3 = param_1[3], uVar2 < uVar3)) {
      if (uVar2 <= uVar8) {
        uVar2 = uVar8;
      }
      uVar8 = uVar2 + 0x400;
      if (uVar3 <= uVar2 + 0x400) {
        uVar8 = uVar3;
      }
      for (; uVar2 < uVar8; uVar2 = uVar2 + 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_1[2] = uVar2;
    }
    return uVar1;
  }
  func_0x00010b4d8224();
  uVar2 = extraout_x8;
  lVar4 = extraout_x9;
  lVar6 = extraout_x10;
  if (((bool)in_ZR || in_NG != in_OV) && (param_1[2] < extraout_x12)) {
    func_0x00010b4d8284();
    for (uVar2 = extraout_x11; extraout_x12_00 < uVar2; uVar2 = uVar2 - 0x40) {
      Hint_Prefetch(uVar2,2,0,0);
    }
    param_1[3] = uVar2;
    uVar2 = extraout_x8_00;
    lVar4 = extraout_x9_00;
    lVar6 = extraout_x10_00;
  }
  *(ulong *)(lVar6 + -0x10) = uVar2;
  *(undefined8 *)(lVar6 + -8) = param_4;
  if (((long)(param_1[2] - lVar4) < 0x401) && (param_1[2] < param_1[3])) {
    func_0x00010b4d82b4();
    for (uVar2 = extraout_x9_01; uVar2 < extraout_x10_01; uVar2 = uVar2 + 0x40) {
      Hint_Prefetch(uVar2,2,0,0);
    }
    param_1[2] = uVar2;
    uVar2 = extraout_x8_01;
  }
  return uVar2;
}



/* Entry: 10b4d8014; end: 10b4d80a3;  */

void FUN_10b4d8014(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  ulong extraout_x10;
  ulong extraout_x10_00;
  
  FUN_10b4d7468();
  lVar1 = param_1[1];
  if (0xf < (ulong)(lVar1 - *param_1)) {
    param_1[1] = lVar1 + -0x10;
    if (((lVar1 + -0x10) - param_1[3] < 0x181) && ((ulong)param_1[2] < (ulong)param_1[3])) {
      func_0x00010b4d826c();
      for (uVar2 = extraout_x9_00; extraout_x10_00 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_1[3] = uVar2;
      lVar1 = extraout_x8_00;
    }
    *(undefined8 *)(lVar1 + -0x10) = param_2;
    *(undefined8 *)(lVar1 + -8) = param_3;
    return;
  }
  func_0x00010b4d74c4();
  lVar1 = param_1[1];
  param_1[1] = lVar1 + -0x10;
  if (((lVar1 + -0x10) - param_1[3] < 0x181) && ((ulong)param_1[2] < (ulong)param_1[3])) {
    func_0x00010b4d826c();
    for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
      Hint_Prefetch(uVar2,2,0,0);
    }
    param_1[3] = uVar2;
    lVar1 = extraout_x8;
  }
  *(undefined8 *)(lVar1 + -0x10) = param_2;
  *(undefined8 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 10b4d80a4; end: 10b4d80db;  */

long FUN_10b4d80a4(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  ulong uVar9;
  long *plStack_38;
  
  FUN_10b4d7468();
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar7 = *(long *)(param_1 + 0x28) + -0x18;
    *(long *)(param_1 + 0x28) = lVar7;
    return *(long *)(param_1 + 0x20) + lVar7 + 0x10;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 == 0) {
    uVar9 = 0x100;
  }
  else {
    *(ulong *)(param_1 + 0x38) = (ulong)*(ushort *)(lVar7 + 8) + *(long *)(param_1 + 0x38) + -0x10;
    uVar9 = (ulong)*(ushort *)(lVar7 + 10);
  }
  lVar5 = param_1;
  FUN_10b4d755c(param_1,uVar9,&plStack_38);
  if ((int)lVar5 == 0) {
    if (lVar7 == 0) {
      sVar8 = 0x100;
      uVar9 = 0x100;
    }
    else {
      uVar4 = *(ushort *)(lVar7 + 10);
      uVar9 = (ulong)uVar4;
      sVar8 = uVar4 << 1;
      if ((uVar4 & 0x7000) != 0) {
        sVar8 = 0x2000;
      }
    }
    uVar1 = ((int)uVar9 - (int)(uVar9 - 0x10)) + (int)((uVar9 - 0x10) / 0x18) * 0x18;
    plVar6 = (long *)((ulong)uVar1 & 0xffff);
    __Znwm();
    *plVar6 = lVar7;
    uVar4 = (ushort)uVar1;
    *(ushort *)(plVar6 + 1) = uVar4;
    *(short *)((long)plVar6 + 10) = sVar8;
    *(undefined1 *)((long)plVar6 + 0xc) = 1;
    *(ulong *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + (ulong)uVar4;
  }
  else {
    *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) - uVar9;
    uVar2 = (undefined2)(((uint)uVar9 & 0x7fff) << 1);
    if ((uVar9 & 0x7000) != 0) {
      uVar2 = 0x2000;
    }
    *plStack_38 = lVar7;
    *(short *)(plStack_38 + 1) =
         (short)uVar9 + ((short)((uVar9 - 0x10) / 0x18) * 0x18 - (short)(uVar9 - 0x10));
    uVar3 = 0x100;
    if (lVar7 != 0) {
      uVar3 = uVar2;
    }
    *(undefined2 *)((long)plStack_38 + 10) = uVar3;
    *(undefined1 *)((long)plStack_38 + 0xc) = 0;
    plVar6 = plStack_38;
  }
  *(long **)(param_1 + 0x20) = plVar6;
  uVar4 = *(ushort *)(plVar6 + 1);
  *(ulong *)(param_1 + 0x28) = (ulong)uVar4 - 0x28;
  return (long)plVar6 + ((ulong)uVar4 - 0x18);
}



/* Entry: 10b4d80dc; end: 10b4d80df;  */

void FUN_10b4d80dc(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  int extraout_w8;
  
  FUN_10b4d81f4();
  func_0x00010b4d8214();
  if ((bool)in_ZR) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  }
  else {
    iVar1 = extraout_w8;
    FUN_10b4d7148();
  }
  func_0x00010b4d82f0();
  FUN_10b4d755c();
  if (iVar1 == 0) {
    func_0x00010b4d82cc();
  }
  return;
}



/* Entry: 10b4d80e0; end: 10b4d8137;  */

void FUN_10b4d80e0(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  int extraout_w8;
  
  FUN_10b4d81f4();
  func_0x00010b4d8214();
  if ((bool)in_ZR) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  }
  else {
    iVar1 = extraout_w8;
    FUN_10b4d7148();
  }
  func_0x00010b4d82f0();
  FUN_10b4d755c();
  if (iVar1 == 0) {
    func_0x00010b4d82cc();
  }
  return;
}



/* Entry: 10b4d8138; end: 10b4d8163;  */

undefined8 FUN_10b4d8138(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b4d8164(&uStack_28);
  return param_1;
}



/* Entry: 10b4d8164; end: 10b4d818f;  */

void FUN_10b4d8164(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b4d8190; end: 10b4d81f3;  */

void FUN_10b4d8190(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lStack_20;
  ulong uStack_18;
  
  uVar2 = *(uint *)(param_1 + 8);
  uStack_18 = (ulong)uVar2;
  lStack_20 = param_1 + uStack_18 * 8 + 0x10;
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar2 <= *(uint *)(param_1 + 0xc)) {
    uVar1 = uVar2;
  }
  func_0x00010b4d81cc(&lStack_20,uVar1);
  return;
}



/* Entry: 10b4d81f4; end: 10b4d82fb;  */

void FUN_10b4d81f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4d8204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340dac8)(param_1);
  return;
}



/* Entry: 10b4d82fc; end: 10b4d831f;  */

void FUN_10b4d82fc(void)

{
  func_0x00010b4d83c8();
  func_0x00010b4d83b8();
  return;
}



/* Entry: 10b4d8320; end: 10b4d8393;  */

long FUN_10b4d8320(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined1 auStack_98 [64];
  long lStack_58;
  
  func_0x00010ae6c484(auStack_98,*(undefined8 *)(param_1 + 8));
  puVar1 = &UNK_10e52b558;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x00010549023c(lStack_58 + 0x118,puVar1);
  func_0x00010ae6c56c(auStack_98);
  return param_1;
}



/* Entry: 10b4d8394; end: 10b4d83b7;  */

void FUN_10b4d8394(void)

{
  func_0x00010b4d83c8();
  func_0x00010b4d83b8();
  return;
}



/* Entry: 10b4d83b8; end: 10b4d83d7;  */

void FUN_10b4d83b8(long param_1)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  long unaff_x20;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(*(long *)(unaff_x20 + 8) + 0x3c58);
  pbStack_50 = *(byte **)(*(long *)(unaff_x20 + 8) + 0x3c50);
  param_1 = param_1 + 0x14;
  pbVar2 = (byte *)0x7;
  func_0x00010ae6b200(7,param_1,&pbStack_50);
  iVar1 = 6;
  func_0x00010ae6b0b4();
  if (iVar1 == 0) {
    *(undefined8 *)(*(long *)(unaff_x20 + 8) + 0x3c58) = 0;
  }
  else {
    if ((pbVar2 != (byte *)0x0) && (pbVar2 <= pbStack_50 && param_1 != 0)) {
      uVar3 = (long)pbStack_50 - (long)(pbVar2 + param_1);
      do {
        param_1 = param_1 + -1;
        bVar5 = 0;
        if (param_1 != 0) {
          bVar5 = 0x80;
        }
        *pbVar2 = bVar5 | (byte)uVar3 & 0x7f;
        uVar3 = uVar3 >> 7;
        pbVar2 = pbVar2 + 1;
      } while (param_1 != 0);
    }
    lVar4 = *(long *)(unaff_x20 + 8);
    *(undefined8 *)(lVar4 + 0x3c58) = uStack_48;
    *(byte **)(lVar4 + 0x3c50) = pbStack_50;
  }
  return;
}



/* Entry: 10b4d83d8; end: 10b4d85c7;  */

void FUN_10b4d83d8(void)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c39cdc();
  func_0x000107c39cc8();
  lVar1 = *(long *)(unaff_x20 + 200);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xc0);
  unaff_x19[1] = *(undefined8 *)(unaff_x20 + 200);
  *unaff_x19 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c39cd4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c39ce4();
  return;
}



/* Entry: 10b4d85c8; end: 10b4d85cb;  */

undefined8 * FUN_10b4d85c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf1148;
  func_0x000107c27d08(param_1 + 0x20);
  func_0x000107c27d08(param_1 + 0x1e);
  func_0x000107c27d08(param_1 + 0x1c);
  func_0x000107c27d08(param_1 + 0x1a);
  func_0x000107c27d08(param_1 + 0x18);
  func_0x000107c27d08(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 10b4d85cc; end: 10b4d85df;  */

void FUN_10b4d85cc(void)

{
  FUN_10b4d85e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4d85e0; end: 10b4d8643;  */

undefined8 * FUN_10b4d85e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf1148;
  func_0x000107c27d08(param_1 + 0x20);
  func_0x000107c27d08(param_1 + 0x1e);
  func_0x000107c27d08(param_1 + 0x1c);
  func_0x000107c27d08(param_1 + 0x1a);
  func_0x000107c27d08(param_1 + 0x18);
  func_0x000107c27d08(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 10b4d8644; end: 10b4d8733;  */

void FUN_10b4d8644(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char cStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [80];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b4d98b4(auStack_88);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  do {
    puVar1 = auStack_88;
    FUN_10b4d97e0(puVar1,&uStack_e0);
    if ((int)puVar1 == 0) {
      param_1[1] = uStack_30;
      *param_1 = uStack_38;
      param_1[2] = uStack_28;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
LAB_10b4d870c:
      FUN_10b4d950c(&uStack_38);
      return;
    }
    FUN_10b4d97f8(&uStack_f8,auStack_88);
    uStack_128 = uStack_f0;
    uStack_130 = uStack_f8;
    uStack_120 = uStack_e8;
    FUN_10b4d9838(&uStack_110,&uStack_130);
    if (cStack_100 != '\x01') {
      param_1[1] = uStack_108;
      *param_1 = uStack_110;
      *(undefined1 *)(param_1 + 3) = 0;
      goto LAB_10b4d870c;
    }
    puVar2 = &uStack_110;
    FUN_10b4d985c();
    FUN_10b4d9324(&uStack_38,*(undefined4 *)puVar2);
    FUN_10b4d9890(auStack_88);
  } while( true );
}



/* Entry: 10b4d8734; end: 10b4d8767;  */

void FUN_10b4d8734(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  FUN_10b4d9fc0();
  func_0x00010b4da034();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b4d8760);
  (*pcVar1)();
}



/* Entry: 10b4d8768; end: 10b4d88a3;  */

void FUN_10b4d8768(undefined8 *param_1,long param_2,int ****param_3)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  uint ****ppppuVar4;
  int iVar5;
  int ***pppiVar6;
  undefined **ppuVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint ****ppppuVar11;
  code *pcVar12;
  char in_NG;
  char in_OV;
  char cVar13;
  bool bVar14;
  char cVar15;
  uint *puVar16;
  uint *puVar17;
  int ****ppppiVar18;
  uint ****ppppuVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  int ****extraout_x8;
  ulong *extraout_x8_00;
  long extraout_x8_01;
  uint *puVar23;
  ulong uVar24;
  uint *extraout_x10;
  int ****extraout_x10_00;
  int ****extraout_x11;
  long extraout_x11_00;
  uint uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  uint ****ppppuVar29;
  ulong uVar30;
  uint uVar31;
  int ****ppppiVar32;
  int ****ppppiVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined **ppuStack_2c8;
  int ***pppiStack_2c0;
  uint *puStack_298;
  int ***pppiStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  uint ***pppuStack_258;
  undefined **ppuStack_250;
  undefined8 uStack_248;
  int ***pppiStack_240;
  undefined **ppuStack_238;
  ulong uStack_230;
  byte bStack_228;
  uint *puStack_218;
  uint *puStack_210;
  undefined8 uStack_208;
  int ***pppiStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  byte bStack_1e8;
  uint ***pppuStack_1e0;
  uint ***pppuStack_1d8;
  int iStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_140;
  undefined1 uStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined1 uStack_120;
  ulong uStack_11f;
  undefined8 uStack_117;
  undefined8 uStack_10f;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  ulong uStack_cf;
  undefined8 uStack_c7;
  undefined8 uStack_bf;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  uint auStack_98 [6];
  byte bStack_80;
  uint7 uStack_76;
  undefined1 uStack_6f;
  undefined7 uStack_6e;
  undefined1 uStack_67;
  undefined7 uStack_66;
  undefined1 uStack_5f;
  undefined7 uStack_5e;
  undefined1 uStack_57;
  undefined7 uStack_56;
  uint7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_3f = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_30 = 0;
  uStack_2f = 0;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_67 = 0;
  uStack_66 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  uStack_57 = 0;
  uStack_56 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_117 = 0;
  uStack_11f = (ulong)uStack_4f;
  uStack_10f = 0;
  lStack_130 = param_2 + (long)param_3;
  uStack_138 = 1;
  uStack_128 = 1;
  uStack_120 = 1;
  uStack_107 = 0;
  uStack_100 = 0;
  uStack_ff = 0;
  uStack_f8 = 1;
  uStack_e8 = 1;
  uStack_d8 = 1;
  uStack_d0 = 1;
  uStack_c7 = 0;
  uStack_cf = (ulong)uStack_76;
  uStack_bf = 0;
  uStack_b7 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_a8 = 1;
  uStack_a0 = 1;
  lStack_140 = param_2;
  lStack_f0 = lStack_130;
  lStack_e0 = lStack_130;
  FUN_10b4d8644(auStack_98,&lStack_140);
  if ((bStack_80 & 1) == 0) {
    *param_1 = 4;
    param_1[1] = &PTR_PTR_110cf11c8;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    puVar16 = auStack_98;
    FUN_10b4d8734(puVar16);
    func_0x00010b4da0b4();
    param_3 = extraout_x11;
    puVar17 = extraout_x10;
    if (in_NG == in_OV) {
      param_3 = extraout_x8;
      puVar17 = puVar16;
    }
    FUN_10b4d88a4(param_1,puVar17);
  }
  FUN_10b4d92b0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar17 = auStack_98;
  FUN_10b4d92b0();
  func_0x00010b4da000();
  pppiStack_240 = (int ***)0x0;
  ppuStack_238 = (undefined **)0x0;
  uStack_230 = 0;
  pppiStack_200 = pppiStack_240;
  ppuStack_1f8 = ppuStack_238;
  uStack_1f0 = uStack_230;
  for (lVar27 = (long)param_3 << 2; lVar27 != 0; lVar27 = lVar27 + -4) {
    param_3 = (int ****)(ulong)*puVar17;
    pppiStack_240 = pppiStack_200;
    ppuStack_238 = ppuStack_1f8;
    uStack_230 = uStack_1f0;
    FUN_10b4d9324(&pppiStack_240);
    puVar17 = puVar17 + 1;
    pppiStack_200 = pppiStack_240;
    ppuStack_1f8 = ppuStack_238;
    uStack_1f0 = uStack_230;
  }
  ppuStack_238 = (undefined **)0x0;
  uStack_230 = 0;
  pppiStack_240 = (int ***)0x0;
  bStack_1e8 = 1;
  func_0x00010b4da064();
  if ((bStack_1e8 & 1) == 0) {
    pppiStack_280 = pppiStack_200;
    ppuStack_278 = ppuStack_1f8;
    uStack_268 = 0;
    pppiStack_2c0 = pppiStack_200;
    ppuStack_2c8 = ppuStack_1f8;
LAB_10b4d9168:
    func_0x00010b4da054();
  }
  else {
    ppppiVar18 = &pppiStack_200;
    FUN_10b4d8734();
    bVar9 = *(byte *)((long)ppppiVar18 + 0x17);
    pppiVar6 = ppppiVar18[1];
    if (-1 < (char)bVar9) {
      pppiVar6 = (int ***)(ulong)bVar9;
    }
    puStack_218 = (uint *)0x0;
    puStack_210 = (uint *)0x0;
    uStack_208 = 0;
    puVar16 = puStack_218;
    puVar17 = puStack_210;
    if (pppiVar6 != (int ***)0x0) {
      ppppiVar33 = (int ****)*ppppiVar18;
      if (-1 < (char)bVar9) {
        ppppiVar33 = ppppiVar18;
      }
      ppppiVar18 = (int ****)((long)ppppiVar33 + (long)pppiVar6 * 4);
      param_3 = ppppiVar33;
      while (ppppiVar33 != ppppiVar18) {
        if (*(int *)ppppiVar33 == 0x2e) {
          FUN_10b4d9538(&puStack_218,param_3,ppppiVar33);
          ppppiVar33 = (int ****)((long)ppppiVar33 + 4);
          param_3 = ppppiVar33;
        }
        else {
          ppppiVar33 = (int ****)((long)ppppiVar33 + 4);
        }
      }
      FUN_10b4d9538(&puStack_218,param_3,ppppiVar18);
      puVar16 = puStack_218;
      puVar17 = puStack_210;
    }
    for (; puVar23 = puStack_210, puVar16 != puVar17; puVar16 = puVar16 + 6) {
      uVar30 = (ulong)*(char *)((long)puVar16 + 0x17);
      puVar23 = puVar16;
      uVar24 = uVar30;
      if ((long)uVar30 < 0) {
        puVar23 = *(uint **)puVar16;
        uVar24 = *(ulong *)(puVar16 + 2);
      }
      lVar27 = uVar24 << 2;
      do {
        if (lVar27 == 0) goto LAB_10b4d8d14;
        uVar8 = *puVar23;
        lVar27 = lVar27 + -4;
        puVar23 = puVar23 + 1;
      } while (uVar8 < 0x7f);
      puStack_298 = puVar16;
      if (*(char *)((long)puVar16 + 0x17) < '\0') {
        uVar30 = *(ulong *)(puVar16 + 2);
        puStack_298 = *(uint **)puVar16;
      }
      pppiStack_280 = (int ***)0x0;
      ppuStack_278 = (undefined **)0x0;
      uStack_270 = 0;
      param_3 = (int ****)0x100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&pppiStack_280);
      puVar23 = puStack_298;
      uVar24 = uStack_270;
      for (lVar27 = uVar30 << 2; uStack_270 = uVar24, lVar27 != 0; lVar27 = lVar27 + -4) {
        param_3 = (int ****)(ulong)*puVar23;
        if (*puVar23 < 0x80) {
          func_0x00010b4da084();
        }
        puVar23 = puVar23 + 1;
        uVar24 = uStack_270;
      }
      uStack_270._7_1_ = (byte)(uVar24 >> 0x38);
      uVar8 = (uint)ppuStack_278;
      if (-1 < (long)uVar24) {
        uVar8 = (uint)uStack_270._7_1_;
      }
      if (uVar8 != 0) {
        param_3 = (int ****)0x2d;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&pppiStack_280)
        ;
      }
      uVar21 = 0;
      uVar36 = 0x80;
      uVar28 = 0x48;
      uVar25 = uVar8;
      while (uVar25 < uVar30) {
        uVar31 = 0xffffffff;
        puVar23 = puStack_298;
        for (lVar27 = uVar30 << 2; lVar27 != 0; lVar27 = lVar27 + -4) {
          uVar26 = *puVar23;
          uVar37 = uVar26;
          if (uVar31 <= uVar26) {
            uVar37 = uVar31;
          }
          if (uVar36 <= uVar26) {
            uVar31 = uVar37;
          }
          puVar23 = puVar23 + 1;
        }
        uVar37 = uVar25 + 1;
        uVar26 = 0;
        if (uVar37 != 0) {
          uVar26 = ~uVar21 / uVar37;
        }
        if (uVar26 < uVar31 - uVar36) {
LAB_10b4d8bfc:
          pppiStack_240 = (int ***)0x3;
          ppuStack_238 = &PTR_PTR_110cf11c8;
          bStack_228 = 0;
          goto LAB_10b4d8c14;
        }
        uVar21 = uVar21 + (uVar31 - uVar36) * uVar37;
        for (puVar23 = puStack_298; puVar23 != puStack_298 + uVar30; puVar23 = puVar23 + 1) {
          if ((*puVar23 < uVar31) && (bVar14 = 0xfffffffe < uVar21, uVar21 = uVar21 + 1, bVar14))
          goto LAB_10b4d8bfc;
          if (*puVar23 == uVar31) {
            uVar36 = 0x24;
            uVar26 = -uVar28;
            uVar37 = uVar21;
            while( true ) {
              uVar26 = uVar26 + 0x24;
              uVar35 = uVar26;
              if (uVar28 + 0x1a <= uVar36) {
                uVar35 = 0x1a;
              }
              if (uVar36 <= uVar28) {
                uVar35 = 1;
              }
              uVar10 = uVar37 - uVar35;
              cVar15 = 'K';
              if (uVar37 < uVar35) break;
              uVar37 = 0;
              if (0x24 - uVar35 != 0) {
                uVar37 = uVar10 / (0x24 - uVar35);
              }
              func_0x00010b4da084();
              uVar36 = uVar36 + 0x24;
            }
            if (0x19 < uVar37) {
              cVar15 = '\0';
            }
            param_3 = (int ****)(ulong)(uint)(int)(char)((char)uVar37 + cVar15 + '\x16');
            func_0x00010b4da084();
            if (uVar25 == uVar8) {
              uVar21 = uVar21 / 700;
            }
            else {
              uVar21 = uVar21 >> 1;
            }
            iVar22 = 0;
            uVar25 = uVar25 + 1;
            uVar36 = 0;
            if (uVar25 != 0) {
              uVar36 = uVar21 / uVar25;
            }
            for (uVar36 = uVar36 + uVar21; 0x1c7 < uVar36; uVar36 = uVar36 / 0x23) {
              iVar22 = iVar22 + 0x24;
            }
            uVar21 = 0;
            uVar37 = uVar36 + 0x26 & 0xffff;
            uVar28 = 0;
            if (uVar37 != 0) {
              uVar28 = ((uVar36 * 9 & 0x3fff) << 2) / uVar37;
            }
            uVar28 = iVar22 + uVar28;
          }
        }
        uVar21 = uVar21 + 1;
        uVar36 = uVar31 + 1;
      }
      param_3 = &pppiStack_280;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_1c8,&UNK_10f6cfbc5);
      func_0x00010b4da03c();
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1c8 = 0;
      bStack_228 = 1;
      func_0x00010b4da02c();
LAB_10b4d8c14:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppiStack_280);
      bVar9 = bStack_228;
      if ((bStack_228 & 1) == 0) {
        ppuStack_2c8 = ppuStack_238;
        pppiStack_2c0 = pppiStack_240;
      }
      else {
        ppppiVar18 = &pppiStack_240;
        func_0x00010792d3e0();
        cVar15 = *(char *)((long)ppppiVar18 + 0x17);
        ppppiVar32 = (int ****)*ppppiVar18;
        ppppiVar33 = &pppiStack_240;
        func_0x00010792d3e0();
        cVar15 = cVar15 < '\0';
        cVar13 = '\0';
        if (!(bool)cVar15) {
          ppppiVar32 = ppppiVar18;
        }
        func_0x00010b4da0b4();
        lVar27 = extraout_x11_00;
        ppppiVar18 = extraout_x10_00;
        if (cVar15 == cVar13) {
          lVar27 = extraout_x8_01;
          ppppiVar18 = ppppiVar33;
        }
        ppppiVar33 = (int ****)(((long)ppppiVar18 + lVar27) - (long)ppppiVar32);
        lVar20 = (long)*(char *)((long)puVar16 + 0x17);
        puVar23 = puVar16;
        if (lVar20 < 0) {
          param_3 = (int ****)((*(ulong *)(puVar16 + 4) & 0x7fffffffffffffff) - 1);
          if (param_3 < ppppiVar33) {
            lVar20 = *(long *)(puVar16 + 2);
            goto LAB_10b4d8ca4;
          }
          cVar15 = (char)(*(ulong *)(puVar16 + 4) >> 0x38);
LAB_10b4d8ccc:
          if (cVar15 < '\0') {
            puVar23 = *(uint **)puVar16;
          }
        }
        else if ((int ****)0x4 < ppppiVar33) {
          param_3 = (int ****)0x4;
LAB_10b4d8ca4:
          func_0x00010b4d93c0(puVar16,param_3,(long)ppppiVar33 - (long)param_3,lVar20,0,lVar20,0);
          cVar15 = *(char *)((long)puVar16 + 0x17);
          goto LAB_10b4d8ccc;
        }
        for (; ppppiVar32 != (int ****)((long)ppppiVar18 + lVar27);
            ppppiVar32 = (int ****)((long)ppppiVar32 + 1)) {
          *puVar23 = (int)*(char *)ppppiVar32;
          puVar23 = puVar23 + 1;
        }
        *puVar23 = 0;
        if (*(char *)((long)puVar16 + 0x17) < '\0') {
          *(int *****)(puVar16 + 2) = ppppiVar33;
        }
        else {
          *(byte *)((long)puVar16 + 0x17) = (byte)ppppiVar33 & 0x7f;
        }
      }
      func_0x00010b4da05c();
      if ((bVar9 & 1) == 0) {
        pppiStack_280 = pppiStack_2c0;
        ppuStack_278 = ppuStack_2c8;
        uStack_268 = 0;
        func_0x00010b4da0ac();
        goto LAB_10b4d9168;
      }
LAB_10b4d8d14:
    }
    pppiStack_240 = (int ***)0x0;
    ppuStack_238 = (undefined **)0x0;
    uStack_230 = 0;
    for (puVar17 = puStack_218; puVar17 != puVar23; puVar17 = puVar17 + 6) {
      uVar30 = *(ulong *)(puVar17 + 2);
      if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) {
        uVar30 = (ulong)*(byte *)((long)puVar17 + 0x17);
      }
      ppuVar2 = (undefined **)(uVar30 + 1);
      if ((undefined **)0x3ffffffffffffff6 < ppuVar2) {
        func_0x00010b4d92d0();
        goto LAB_10b4d91b4;
      }
      if (ppuVar2 < (undefined **)0x5) {
        ppuStack_278 = (undefined **)0x0;
        pppiStack_280 = (int ***)0x0;
        ppppiVar18 = &pppiStack_280;
        uStack_270 = (long)ppuVar2 << 0x38;
        if (uVar30 != 0) goto LAB_10b4d8de0;
      }
      else {
        ppppiVar33 = (int ****)0x7;
        if (((ulong)ppuVar2 | 1) != 5) {
          ppppiVar33 = (int ****)(((ulong)ppuVar2 | 1) + 1);
        }
        ppppiVar18 = ppppiVar33;
        FUN_10b4d9308();
        uStack_270 = (ulong)ppppiVar33 | 0x8000000000000000;
        pppiStack_280 = (int ***)ppppiVar18;
        ppuStack_278 = ppuVar2;
LAB_10b4d8de0:
        func_0x00010b4da078(ppppiVar18);
      }
      piVar1 = (int *)((long)ppppiVar18 + uVar30 * 4);
      piVar1[0] = 0x2e;
      piVar1[1] = 0;
      ppuVar2 = ppuStack_278;
      if (-1 < (long)uStack_270) {
        ppuVar2 = (undefined **)(uStack_270 >> 0x38);
      }
      uVar30 = (uStack_230 & 0x7fffffffffffffff) - 1;
      ppuVar3 = ppuStack_238;
      if (-1 < (long)uStack_230) {
        uVar30 = 4;
        ppuVar3 = (undefined **)(uStack_230 >> 0x38);
      }
      if ((undefined **)(uVar30 - (long)ppuVar3) < ppuVar2) {
        ppuVar2 = (undefined **)((long)ppuVar3 + (long)ppuVar2);
        if (0x3ffffffffffffff6 - uVar30 < (long)ppuVar2 - uVar30) {
          func_0x00010b4d92d0();
          goto LAB_10b4d91b4;
        }
        ppppiVar18 = (int ****)pppiStack_240;
        if (-1 < (long)uStack_230) {
          ppppiVar18 = &pppiStack_240;
        }
        if (uVar30 < 0x1ffffffffffffff3) {
          ppuVar7 = ppuVar2;
          if (ppuVar2 <= (undefined **)(uVar30 * 2)) {
            ppuVar7 = (undefined **)(uVar30 << 1);
          }
          ppppiVar32 = (int ****)0x7;
          if (((ulong)ppuVar7 | 1) != 5) {
            ppppiVar32 = (int ****)(((ulong)ppuVar7 | 1) + 1);
          }
          ppppiVar33 = (int ****)0x5;
          if ((undefined **)0x4 < ppuVar7) {
            ppppiVar33 = ppppiVar32;
          }
        }
        else {
          ppppiVar33 = (int ****)0x3ffffffffffffff7;
        }
        FUN_10b4d92e4();
        ppppiVar32 = param_3;
        if (ppuVar3 != (undefined **)0x0) {
          ppppiVar32 = ppppiVar18;
          _memmove(ppppiVar33,ppppiVar18,(long)ppuVar3 << 2);
        }
        func_0x00010b4da0a0((int *)((long)ppppiVar33 + (long)ppuVar3 * 4));
        if (uVar30 != 4) {
          __ZdlPv(ppppiVar18);
        }
        uStack_230 = (ulong)param_3 | 0x8000000000000000;
        *(int *)((long)ppppiVar33 + (long)ppuVar2 * 4) = 0;
        param_3 = ppppiVar32;
        pppiStack_240 = (int ***)ppppiVar33;
        ppuStack_238 = ppuVar2;
      }
      else if (ppuVar2 != (undefined **)0x0) {
        ppppiVar18 = (int ****)pppiStack_240;
        if (-1 < (long)uStack_230) {
          ppppiVar18 = &pppiStack_240;
        }
        func_0x00010b4da0a0((int *)((long)ppppiVar18 + (long)ppuVar3 * 4));
        ppuVar3 = (undefined **)((long)ppuVar3 + (long)ppuVar2);
        ppuVar2 = ppuVar3;
        if (-1 < (long)uStack_230) {
          uStack_230 = CONCAT17((char)ppuVar3,(undefined7)uStack_230) & 0x7fffffffffffffff;
          ppuVar2 = ppuStack_238;
        }
        ppuStack_238 = ppuVar2;
        *(int *)((long)ppppiVar18 + (long)ppuVar3 * 4) = 0;
      }
      FUN_10b4d950c(&pppiStack_280);
    }
    ppppiVar18 = (int ****)pppiStack_240;
    ppuVar2 = ppuStack_238;
    if (-1 < (long)uStack_230) {
      ppppiVar18 = &pppiStack_240;
      ppuVar2 = (undefined **)(uStack_230 >> 0x38);
    }
    if ((undefined **)((long)ppuVar2 - 1U) <= ppuVar2) {
      ppuVar2 = (undefined **)((long)ppuVar2 - 1U);
    }
    if ((undefined **)0x3ffffffffffffff6 < ppuVar2) {
      func_0x00010b4d92d0();
LAB_10b4d91b4:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10b4d91b8);
      (*pcVar12)();
    }
    if (ppuVar2 < (undefined **)0x5) {
      uStack_248 = CONCAT17((char)ppuVar2,(undefined7)uStack_248);
      ppppuVar19 = &pppuStack_258;
      if (ppuVar2 != (undefined **)0x0) goto LAB_10b4d8fc0;
    }
    else {
      ppppuVar19 = (uint ****)0x7;
      if (((ulong)ppuVar2 | 1) != 5) {
        ppppuVar19 = (uint ****)(((ulong)ppuVar2 | 1) + 1);
      }
      FUN_10b4d92e4();
      uStack_248 = (ulong)param_3 | 0x8000000000000000;
      pppuStack_258 = (uint ***)ppppuVar19;
      ppuStack_250 = ppuVar2;
LAB_10b4d8fc0:
      _memmove(ppppuVar19,ppppiVar18,(long)ppuVar2 << 2);
    }
    *(uint *)((long)ppppuVar19 + (long)ppuVar2 * 4) = 0;
    func_0x00010b4da064();
    iVar22 = 0;
    ppppuVar19 = (uint ****)pppuStack_258;
    if (-1 < (long)uStack_248._7_1_) {
      ppppuVar19 = &pppuStack_258;
    }
    ppuVar2 = ppuStack_250;
    if (-1 < (long)uStack_248) {
      ppuVar2 = (undefined **)(long)uStack_248._7_1_;
    }
    ppppuVar4 = (uint ****)((long)ppppuVar19 + (long)ppuVar2 * 4);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    iStack_1d0 = 0;
    ppppuVar11 = ppppuVar19;
    pppuStack_1d8 = (uint ***)ppppuVar4;
    while( true ) {
      pppuStack_1e0 = (uint ***)ppppuVar11;
      ppppuVar29 = ppppuVar19;
      if ((ppppuVar29 == ppppuVar4) && (iVar22 == 0)) {
        func_0x00010b4da03c();
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        bVar14 = true;
        bStack_228 = 1;
        func_0x00010b4da02c();
        ppuStack_278 = ppuStack_238;
        pppiStack_280 = pppiStack_240;
        uStack_270 = uStack_230;
        pppiStack_240 = (int ***)0x0;
        ppuStack_238 = (undefined **)0x0;
        uStack_230 = 0;
        goto LAB_10b4d910c;
      }
      func_0x00010b4da08c();
      if ((char)uStack_270 != '\x01') break;
      ppppiVar18 = &pppiStack_280;
      FUN_10b4d9f58();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&uStack_1c8,(long)*(char *)ppppiVar18);
      func_0x00010b4da08c();
      ppppuVar19 = ppppuVar4;
      ppppuVar11 = ppppuVar4;
      if ((char)uStack_270 == '\x01') {
        iVar22 = iVar22 + 1;
        iStack_1d0 = iVar22;
        uVar8 = *(uint *)ppppuVar29;
        pppiStack_280 = (int ***)CONCAT44(pppiStack_280._4_4_,uVar8);
        uStack_270 = CONCAT71(uStack_270._1_7_,1);
        FUN_10b4d9f8c(&pppiStack_280);
        iVar34 = 3;
        if (0xffff < uVar8) {
          iVar34 = 4;
        }
        iVar5 = 2;
        if (0x7ff < uVar8) {
          iVar5 = iVar34;
        }
        iVar34 = 1;
        if (0x7f < uVar8) {
          iVar34 = iVar5;
        }
        ppppuVar19 = ppppuVar29;
        ppppuVar11 = (uint ****)pppuStack_1e0;
        if (iVar22 == iVar34) {
          iVar22 = 0;
          iStack_1d0 = 0;
          ppppuVar19 = (uint ****)((long)ppppuVar29 + 4);
          ppppuVar11 = (uint ****)((long)ppppuVar29 + 4);
        }
      }
    }
    ppuStack_238 = ppuStack_278;
    pppiStack_240 = pppiStack_280;
    bStack_228 = 0;
    func_0x00010b4da02c();
    bVar14 = false;
    pppiStack_280 = (int ***)0x4;
    ppuStack_278 = &PTR_PTR_110cf11c8;
LAB_10b4d910c:
    uStack_268 = bVar14;
    func_0x00010b4da05c();
    FUN_10b4d950c(&pppuStack_258);
    func_0x00010b4da0ac();
    func_0x00010b4da054();
    pppiStack_2c0 = pppiStack_280;
    ppuStack_2c8 = ppuStack_278;
    if (bVar14) {
      extraout_x8_00[1] = (ulong)ppuStack_278;
      *extraout_x8_00 = (ulong)pppiStack_280;
      extraout_x8_00[2] = uStack_270;
      ppuStack_278 = (undefined **)0x0;
      uStack_270 = 0;
      pppiStack_280 = (int ***)0x0;
      *(undefined1 *)(extraout_x8_00 + 3) = 1;
      goto LAB_10b4d9178;
    }
  }
  *extraout_x8_00 = (ulong)pppiStack_2c0;
  extraout_x8_00[1] = (ulong)ppuStack_2c8;
  *(undefined1 *)(extraout_x8_00 + 3) = 0;
LAB_10b4d9178:
  func_0x00010792d540(&pppiStack_280);
  return;
}



/* Entry: 10b4d88a4; end: 10b4d924b;  */

void FUN_10b4d88a4(ulong *param_1,uint *param_2,int ****param_3)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  uint ****ppppuVar4;
  int iVar5;
  int ***pppiVar6;
  undefined **ppuVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint ****ppppuVar11;
  code *pcVar12;
  char cVar13;
  bool bVar14;
  char cVar15;
  int ****ppppiVar16;
  uint ****ppppuVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  long extraout_x8;
  uint *puVar21;
  ulong uVar22;
  int ****extraout_x10;
  long extraout_x11;
  uint uVar23;
  uint uVar24;
  long lVar25;
  uint *puVar26;
  uint uVar27;
  uint ****ppppuVar28;
  ulong uVar29;
  uint uVar30;
  int ****ppppiVar31;
  int ****ppppiVar32;
  int iVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  uint uVar37;
  undefined **ppuStack_188;
  int ***pppiStack_180;
  uint *puStack_158;
  int ***pppiStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  uint ***pppuStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  int ***pppiStack_100;
  undefined **ppuStack_f8;
  ulong uStack_f0;
  byte bStack_e8;
  uint *puStack_d8;
  uint *puStack_d0;
  undefined8 uStack_c8;
  int ***pppiStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  byte bStack_a8;
  uint ***pppuStack_a0;
  uint ***pppuStack_98;
  int iStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  pppiStack_100 = (int ***)0x0;
  ppuStack_f8 = (undefined **)0x0;
  uStack_f0 = 0;
  pppiStack_c0 = pppiStack_100;
  ppuStack_b8 = ppuStack_f8;
  uStack_b0 = uStack_f0;
  for (lVar25 = (long)param_3 << 2; lVar25 != 0; lVar25 = lVar25 + -4) {
    param_3 = (int ****)(ulong)*param_2;
    pppiStack_100 = pppiStack_c0;
    ppuStack_f8 = ppuStack_b8;
    uStack_f0 = uStack_b0;
    FUN_10b4d9324(&pppiStack_100);
    param_2 = param_2 + 1;
    pppiStack_c0 = pppiStack_100;
    ppuStack_b8 = ppuStack_f8;
    uStack_b0 = uStack_f0;
  }
  ppuStack_f8 = (undefined **)0x0;
  uStack_f0 = 0;
  pppiStack_100 = (int ***)0x0;
  bStack_a8 = 1;
  func_0x00010b4da064();
  if ((bStack_a8 & 1) == 0) {
    pppiStack_140 = pppiStack_c0;
    ppuStack_138 = ppuStack_b8;
    uStack_128 = 0;
    pppiStack_180 = pppiStack_c0;
    ppuStack_188 = ppuStack_b8;
LAB_10b4d9168:
    func_0x00010b4da054();
  }
  else {
    ppppiVar16 = &pppiStack_c0;
    FUN_10b4d8734();
    bVar9 = *(byte *)((long)ppppiVar16 + 0x17);
    pppiVar6 = ppppiVar16[1];
    if (-1 < (char)bVar9) {
      pppiVar6 = (int ***)(ulong)bVar9;
    }
    puStack_d8 = (uint *)0x0;
    puStack_d0 = (uint *)0x0;
    uStack_c8 = 0;
    puVar26 = puStack_d8;
    puVar35 = puStack_d0;
    if (pppiVar6 != (int ***)0x0) {
      ppppiVar32 = (int ****)*ppppiVar16;
      if (-1 < (char)bVar9) {
        ppppiVar32 = ppppiVar16;
      }
      ppppiVar16 = (int ****)((long)ppppiVar32 + (long)pppiVar6 * 4);
      param_3 = ppppiVar32;
      while (ppppiVar32 != ppppiVar16) {
        if (*(int *)ppppiVar32 == 0x2e) {
          FUN_10b4d9538(&puStack_d8,param_3,ppppiVar32);
          ppppiVar32 = (int ****)((long)ppppiVar32 + 4);
          param_3 = ppppiVar32;
        }
        else {
          ppppiVar32 = (int ****)((long)ppppiVar32 + 4);
        }
      }
      FUN_10b4d9538(&puStack_d8,param_3,ppppiVar16);
      puVar26 = puStack_d8;
      puVar35 = puStack_d0;
    }
    for (; puVar21 = puStack_d0, puVar26 != puVar35; puVar26 = puVar26 + 6) {
      uVar29 = (ulong)*(char *)((long)puVar26 + 0x17);
      puVar21 = puVar26;
      uVar22 = uVar29;
      if ((long)uVar29 < 0) {
        puVar21 = *(uint **)puVar26;
        uVar22 = *(ulong *)(puVar26 + 2);
      }
      lVar25 = uVar22 << 2;
      do {
        if (lVar25 == 0) goto LAB_10b4d8d14;
        uVar8 = *puVar21;
        lVar25 = lVar25 + -4;
        puVar21 = puVar21 + 1;
      } while (uVar8 < 0x7f);
      puStack_158 = puVar26;
      if (*(char *)((long)puVar26 + 0x17) < '\0') {
        uVar29 = *(ulong *)(puVar26 + 2);
        puStack_158 = *(uint **)puVar26;
      }
      pppiStack_140 = (int ***)0x0;
      ppuStack_138 = (undefined **)0x0;
      uStack_130 = 0;
      param_3 = (int ****)0x100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&pppiStack_140);
      puVar21 = puStack_158;
      uVar22 = uStack_130;
      for (lVar25 = uVar29 << 2; uStack_130 = uVar22, lVar25 != 0; lVar25 = lVar25 + -4) {
        param_3 = (int ****)(ulong)*puVar21;
        if (*puVar21 < 0x80) {
          func_0x00010b4da084();
        }
        puVar21 = puVar21 + 1;
        uVar22 = uStack_130;
      }
      uStack_130._7_1_ = (byte)(uVar22 >> 0x38);
      uVar8 = (uint)ppuStack_138;
      if (-1 < (long)uVar22) {
        uVar8 = (uint)uStack_130._7_1_;
      }
      if (uVar8 != 0) {
        param_3 = (int ****)0x2d;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&pppiStack_140)
        ;
      }
      uVar19 = 0;
      uVar36 = 0x80;
      uVar27 = 0x48;
      uVar23 = uVar8;
      while (uVar23 < uVar29) {
        uVar30 = 0xffffffff;
        puVar21 = puStack_158;
        for (lVar25 = uVar29 << 2; lVar25 != 0; lVar25 = lVar25 + -4) {
          uVar24 = *puVar21;
          uVar37 = uVar24;
          if (uVar30 <= uVar24) {
            uVar37 = uVar30;
          }
          if (uVar36 <= uVar24) {
            uVar30 = uVar37;
          }
          puVar21 = puVar21 + 1;
        }
        uVar37 = uVar23 + 1;
        uVar24 = 0;
        if (uVar37 != 0) {
          uVar24 = ~uVar19 / uVar37;
        }
        if (uVar24 < uVar30 - uVar36) {
LAB_10b4d8bfc:
          pppiStack_100 = (int ***)0x3;
          ppuStack_f8 = &PTR_PTR_110cf11c8;
          bStack_e8 = 0;
          goto LAB_10b4d8c14;
        }
        uVar19 = uVar19 + (uVar30 - uVar36) * uVar37;
        for (puVar21 = puStack_158; puVar21 != puStack_158 + uVar29; puVar21 = puVar21 + 1) {
          if ((*puVar21 < uVar30) && (bVar14 = 0xfffffffe < uVar19, uVar19 = uVar19 + 1, bVar14))
          goto LAB_10b4d8bfc;
          if (*puVar21 == uVar30) {
            uVar36 = 0x24;
            uVar24 = -uVar27;
            uVar37 = uVar19;
            while( true ) {
              uVar24 = uVar24 + 0x24;
              uVar34 = uVar24;
              if (uVar27 + 0x1a <= uVar36) {
                uVar34 = 0x1a;
              }
              if (uVar36 <= uVar27) {
                uVar34 = 1;
              }
              uVar10 = uVar37 - uVar34;
              cVar15 = 'K';
              if (uVar37 < uVar34) break;
              uVar37 = 0;
              if (0x24 - uVar34 != 0) {
                uVar37 = uVar10 / (0x24 - uVar34);
              }
              func_0x00010b4da084();
              uVar36 = uVar36 + 0x24;
            }
            if (0x19 < uVar37) {
              cVar15 = '\0';
            }
            param_3 = (int ****)(ulong)(uint)(int)(char)((char)uVar37 + cVar15 + '\x16');
            func_0x00010b4da084();
            if (uVar23 == uVar8) {
              uVar19 = uVar19 / 700;
            }
            else {
              uVar19 = uVar19 >> 1;
            }
            iVar20 = 0;
            uVar23 = uVar23 + 1;
            uVar36 = 0;
            if (uVar23 != 0) {
              uVar36 = uVar19 / uVar23;
            }
            for (uVar36 = uVar36 + uVar19; 0x1c7 < uVar36; uVar36 = uVar36 / 0x23) {
              iVar20 = iVar20 + 0x24;
            }
            uVar19 = 0;
            uVar37 = uVar36 + 0x26 & 0xffff;
            uVar27 = 0;
            if (uVar37 != 0) {
              uVar27 = ((uVar36 * 9 & 0x3fff) << 2) / uVar37;
            }
            uVar27 = iVar20 + uVar27;
          }
        }
        uVar19 = uVar19 + 1;
        uVar36 = uVar30 + 1;
      }
      param_3 = &pppiStack_140;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_88,&UNK_10f6cfbc5);
      func_0x00010b4da03c();
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_88 = 0;
      bStack_e8 = 1;
      func_0x00010b4da02c();
LAB_10b4d8c14:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppiStack_140);
      bVar9 = bStack_e8;
      if ((bStack_e8 & 1) == 0) {
        ppuStack_188 = ppuStack_f8;
        pppiStack_180 = pppiStack_100;
      }
      else {
        ppppiVar16 = &pppiStack_100;
        func_0x00010792d3e0();
        cVar15 = *(char *)((long)ppppiVar16 + 0x17);
        ppppiVar31 = (int ****)*ppppiVar16;
        ppppiVar32 = &pppiStack_100;
        func_0x00010792d3e0();
        cVar15 = cVar15 < '\0';
        cVar13 = '\0';
        if (!(bool)cVar15) {
          ppppiVar31 = ppppiVar16;
        }
        func_0x00010b4da0b4();
        lVar25 = extraout_x11;
        ppppiVar16 = extraout_x10;
        if (cVar15 == cVar13) {
          lVar25 = extraout_x8;
          ppppiVar16 = ppppiVar32;
        }
        ppppiVar32 = (int ****)(((long)ppppiVar16 + lVar25) - (long)ppppiVar31);
        lVar18 = (long)*(char *)((long)puVar26 + 0x17);
        puVar21 = puVar26;
        if (lVar18 < 0) {
          param_3 = (int ****)((*(ulong *)(puVar26 + 4) & 0x7fffffffffffffff) - 1);
          if (param_3 < ppppiVar32) {
            lVar18 = *(long *)(puVar26 + 2);
            goto LAB_10b4d8ca4;
          }
          cVar15 = (char)(*(ulong *)(puVar26 + 4) >> 0x38);
LAB_10b4d8ccc:
          if (cVar15 < '\0') {
            puVar21 = *(uint **)puVar26;
          }
        }
        else if ((int ****)0x4 < ppppiVar32) {
          param_3 = (int ****)0x4;
LAB_10b4d8ca4:
          func_0x00010b4d93c0(puVar26,param_3,(long)ppppiVar32 - (long)param_3,lVar18,0,lVar18,0);
          cVar15 = *(char *)((long)puVar26 + 0x17);
          goto LAB_10b4d8ccc;
        }
        for (; ppppiVar31 != (int ****)((long)ppppiVar16 + lVar25);
            ppppiVar31 = (int ****)((long)ppppiVar31 + 1)) {
          *puVar21 = (int)*(char *)ppppiVar31;
          puVar21 = puVar21 + 1;
        }
        *puVar21 = 0;
        if (*(char *)((long)puVar26 + 0x17) < '\0') {
          *(int *****)(puVar26 + 2) = ppppiVar32;
        }
        else {
          *(byte *)((long)puVar26 + 0x17) = (byte)ppppiVar32 & 0x7f;
        }
      }
      func_0x00010b4da05c();
      if ((bVar9 & 1) == 0) {
        pppiStack_140 = pppiStack_180;
        ppuStack_138 = ppuStack_188;
        uStack_128 = 0;
        func_0x00010b4da0ac();
        goto LAB_10b4d9168;
      }
LAB_10b4d8d14:
    }
    pppiStack_100 = (int ***)0x0;
    ppuStack_f8 = (undefined **)0x0;
    uStack_f0 = 0;
    for (puVar35 = puStack_d8; puVar35 != puVar21; puVar35 = puVar35 + 6) {
      uVar29 = *(ulong *)(puVar35 + 2);
      if (-1 < (char)*(byte *)((long)puVar35 + 0x17)) {
        uVar29 = (ulong)*(byte *)((long)puVar35 + 0x17);
      }
      ppuVar2 = (undefined **)(uVar29 + 1);
      if ((undefined **)0x3ffffffffffffff6 < ppuVar2) {
        func_0x00010b4d92d0();
        goto LAB_10b4d91b4;
      }
      if (ppuVar2 < (undefined **)0x5) {
        ppuStack_138 = (undefined **)0x0;
        pppiStack_140 = (int ***)0x0;
        ppppiVar16 = &pppiStack_140;
        uStack_130 = (long)ppuVar2 << 0x38;
        if (uVar29 != 0) goto LAB_10b4d8de0;
      }
      else {
        ppppiVar32 = (int ****)0x7;
        if (((ulong)ppuVar2 | 1) != 5) {
          ppppiVar32 = (int ****)(((ulong)ppuVar2 | 1) + 1);
        }
        ppppiVar16 = ppppiVar32;
        FUN_10b4d9308();
        uStack_130 = (ulong)ppppiVar32 | 0x8000000000000000;
        pppiStack_140 = (int ***)ppppiVar16;
        ppuStack_138 = ppuVar2;
LAB_10b4d8de0:
        func_0x00010b4da078(ppppiVar16);
      }
      piVar1 = (int *)((long)ppppiVar16 + uVar29 * 4);
      piVar1[0] = 0x2e;
      piVar1[1] = 0;
      ppuVar2 = ppuStack_138;
      if (-1 < (long)uStack_130) {
        ppuVar2 = (undefined **)(uStack_130 >> 0x38);
      }
      uVar29 = (uStack_f0 & 0x7fffffffffffffff) - 1;
      ppuVar3 = ppuStack_f8;
      if (-1 < (long)uStack_f0) {
        uVar29 = 4;
        ppuVar3 = (undefined **)(uStack_f0 >> 0x38);
      }
      if ((undefined **)(uVar29 - (long)ppuVar3) < ppuVar2) {
        ppuVar2 = (undefined **)((long)ppuVar3 + (long)ppuVar2);
        if (0x3ffffffffffffff6 - uVar29 < (long)ppuVar2 - uVar29) {
          func_0x00010b4d92d0();
          goto LAB_10b4d91b4;
        }
        ppppiVar16 = (int ****)pppiStack_100;
        if (-1 < (long)uStack_f0) {
          ppppiVar16 = &pppiStack_100;
        }
        if (uVar29 < 0x1ffffffffffffff3) {
          ppuVar7 = ppuVar2;
          if (ppuVar2 <= (undefined **)(uVar29 * 2)) {
            ppuVar7 = (undefined **)(uVar29 << 1);
          }
          ppppiVar31 = (int ****)0x7;
          if (((ulong)ppuVar7 | 1) != 5) {
            ppppiVar31 = (int ****)(((ulong)ppuVar7 | 1) + 1);
          }
          ppppiVar32 = (int ****)0x5;
          if ((undefined **)0x4 < ppuVar7) {
            ppppiVar32 = ppppiVar31;
          }
        }
        else {
          ppppiVar32 = (int ****)0x3ffffffffffffff7;
        }
        FUN_10b4d92e4();
        ppppiVar31 = param_3;
        if (ppuVar3 != (undefined **)0x0) {
          ppppiVar31 = ppppiVar16;
          _memmove(ppppiVar32,ppppiVar16,(long)ppuVar3 << 2);
        }
        func_0x00010b4da0a0((int *)((long)ppppiVar32 + (long)ppuVar3 * 4));
        if (uVar29 != 4) {
          __ZdlPv(ppppiVar16);
        }
        uStack_f0 = (ulong)param_3 | 0x8000000000000000;
        *(int *)((long)ppppiVar32 + (long)ppuVar2 * 4) = 0;
        param_3 = ppppiVar31;
        pppiStack_100 = (int ***)ppppiVar32;
        ppuStack_f8 = ppuVar2;
      }
      else if (ppuVar2 != (undefined **)0x0) {
        ppppiVar16 = (int ****)pppiStack_100;
        if (-1 < (long)uStack_f0) {
          ppppiVar16 = &pppiStack_100;
        }
        func_0x00010b4da0a0((int *)((long)ppppiVar16 + (long)ppuVar3 * 4));
        ppuVar3 = (undefined **)((long)ppuVar3 + (long)ppuVar2);
        ppuVar2 = ppuVar3;
        if (-1 < (long)uStack_f0) {
          uStack_f0 = CONCAT17((char)ppuVar3,(undefined7)uStack_f0) & 0x7fffffffffffffff;
          ppuVar2 = ppuStack_f8;
        }
        ppuStack_f8 = ppuVar2;
        *(int *)((long)ppppiVar16 + (long)ppuVar3 * 4) = 0;
      }
      FUN_10b4d950c(&pppiStack_140);
    }
    ppppiVar16 = (int ****)pppiStack_100;
    ppuVar2 = ppuStack_f8;
    if (-1 < (long)uStack_f0) {
      ppppiVar16 = &pppiStack_100;
      ppuVar2 = (undefined **)(uStack_f0 >> 0x38);
    }
    if ((undefined **)((long)ppuVar2 - 1U) <= ppuVar2) {
      ppuVar2 = (undefined **)((long)ppuVar2 - 1U);
    }
    if ((undefined **)0x3ffffffffffffff6 < ppuVar2) {
      func_0x00010b4d92d0();
LAB_10b4d91b4:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10b4d91b8);
      (*pcVar12)();
    }
    if (ppuVar2 < (undefined **)0x5) {
      uStack_108 = CONCAT17((char)ppuVar2,(undefined7)uStack_108);
      ppppuVar17 = &pppuStack_118;
      if (ppuVar2 != (undefined **)0x0) goto LAB_10b4d8fc0;
    }
    else {
      ppppuVar17 = (uint ****)0x7;
      if (((ulong)ppuVar2 | 1) != 5) {
        ppppuVar17 = (uint ****)(((ulong)ppuVar2 | 1) + 1);
      }
      FUN_10b4d92e4();
      uStack_108 = (ulong)param_3 | 0x8000000000000000;
      pppuStack_118 = (uint ***)ppppuVar17;
      ppuStack_110 = ppuVar2;
LAB_10b4d8fc0:
      _memmove(ppppuVar17,ppppiVar16,(long)ppuVar2 << 2);
    }
    *(uint *)((long)ppppuVar17 + (long)ppuVar2 * 4) = 0;
    func_0x00010b4da064();
    iVar20 = 0;
    ppppuVar17 = (uint ****)pppuStack_118;
    if (-1 < (long)uStack_108._7_1_) {
      ppppuVar17 = &pppuStack_118;
    }
    ppuVar2 = ppuStack_110;
    if (-1 < (long)uStack_108) {
      ppuVar2 = (undefined **)(long)uStack_108._7_1_;
    }
    ppppuVar4 = (uint ****)((long)ppppuVar17 + (long)ppuVar2 * 4);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    iStack_90 = 0;
    ppppuVar11 = ppppuVar17;
    pppuStack_98 = (uint ***)ppppuVar4;
    while( true ) {
      pppuStack_a0 = (uint ***)ppppuVar11;
      ppppuVar28 = ppppuVar17;
      if ((ppppuVar28 == ppppuVar4) && (iVar20 == 0)) {
        func_0x00010b4da03c();
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        bVar14 = true;
        bStack_e8 = 1;
        func_0x00010b4da02c();
        ppuStack_138 = ppuStack_f8;
        pppiStack_140 = pppiStack_100;
        uStack_130 = uStack_f0;
        pppiStack_100 = (int ***)0x0;
        ppuStack_f8 = (undefined **)0x0;
        uStack_f0 = 0;
        goto LAB_10b4d910c;
      }
      func_0x00010b4da08c();
      if ((char)uStack_130 != '\x01') break;
      ppppiVar16 = &pppiStack_140;
      FUN_10b4d9f58();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&uStack_88,(long)*(char *)ppppiVar16);
      func_0x00010b4da08c();
      ppppuVar17 = ppppuVar4;
      ppppuVar11 = ppppuVar4;
      if ((char)uStack_130 == '\x01') {
        iVar20 = iVar20 + 1;
        iStack_90 = iVar20;
        uVar8 = *(uint *)ppppuVar28;
        pppiStack_140 = (int ***)CONCAT44(pppiStack_140._4_4_,uVar8);
        uStack_130 = CONCAT71(uStack_130._1_7_,1);
        FUN_10b4d9f8c(&pppiStack_140);
        iVar33 = 3;
        if (0xffff < uVar8) {
          iVar33 = 4;
        }
        iVar5 = 2;
        if (0x7ff < uVar8) {
          iVar5 = iVar33;
        }
        iVar33 = 1;
        if (0x7f < uVar8) {
          iVar33 = iVar5;
        }
        ppppuVar17 = ppppuVar28;
        ppppuVar11 = (uint ****)pppuStack_a0;
        if (iVar20 == iVar33) {
          iVar20 = 0;
          iStack_90 = 0;
          ppppuVar17 = (uint ****)((long)ppppuVar28 + 4);
          ppppuVar11 = (uint ****)((long)ppppuVar28 + 4);
        }
      }
    }
    ppuStack_f8 = ppuStack_138;
    pppiStack_100 = pppiStack_140;
    bStack_e8 = 0;
    func_0x00010b4da02c();
    bVar14 = false;
    pppiStack_140 = (int ***)0x4;
    ppuStack_138 = &PTR_PTR_110cf11c8;
LAB_10b4d910c:
    uStack_128 = bVar14;
    func_0x00010b4da05c();
    FUN_10b4d950c(&pppuStack_118);
    func_0x00010b4da0ac();
    func_0x00010b4da054();
    pppiStack_180 = pppiStack_140;
    ppuStack_188 = ppuStack_138;
    if (bVar14) {
      param_1[1] = (ulong)ppuStack_138;
      *param_1 = (ulong)pppiStack_140;
      param_1[2] = uStack_130;
      ppuStack_138 = (undefined **)0x0;
      uStack_130 = 0;
      pppiStack_140 = (int ***)0x0;
      *(undefined1 *)(param_1 + 3) = 1;
      goto LAB_10b4d9178;
    }
  }
  *param_1 = (ulong)pppiStack_180;
  param_1[1] = (ulong)ppuStack_188;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_10b4d9178:
  func_0x00010792d540(&pppiStack_140);
  return;
}



/* Entry: 10b4d924c; end: 10b4d924f;  */

void FUN_10b4d924c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114error_categoryD2Ev_110346540)();
  return;
}



/* Entry: 10b4d9250; end: 10b4d9263;  */

void FUN_10b4d9250(void)

{
  __ZNSt3__114error_categoryD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4d9264; end: 10b4d926f;  */

char * FUN_10b4d9264(void)

{
  return "domain";
}



/* Entry: 10b4d9270; end: 10b4d92af;  */

void FUN_10b4d9270(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_3 - 1U < 4) {
    puVar1 = (&PTR_DAT_110cf11e8)[param_3 - 1U];
  }
  else {
    puVar1 = &DAT_10f661992;
  }
  func_0x000107c278b8(param_1,puVar1);
  return;
}



/* Entry: 10b4d92b0; end: 10b4d92e3;  */

void FUN_10b4d92b0(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b4d950c();
  }
  return;
}



/* Entry: 10b4d92e4; end: 10b4d9307;  */

void FUN_10b4d92e4(void)

{
  FUN_10b4d9308();
  return;
}



/* Entry: 10b4d9308; end: 10b4d9323;  */

void FUN_10b4d9308(ulong *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((ulong)param_1 >> 0x3e == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_1 << 2);
    return;
  }
  func_0x000104bd35f4();
  bVar2 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar2 < '\0') {
    uVar3 = param_1[1];
    uVar4 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar3 == uVar4) goto LAB_10b4d936c;
  }
  else {
    if (bVar2 != 4) {
      uVar3 = (ulong)bVar2;
      *(byte *)((long)param_1 + 0x17) = bVar2 + 1 & 0x7f;
      goto LAB_10b4d93b0;
    }
    uVar4 = 4;
LAB_10b4d936c:
    uVar3 = uVar4;
    func_0x00010b4d93c0(param_1,uVar3,1,uVar3,uVar3,0,0);
  }
  param_1[1] = uVar3 + 1;
  param_1 = (ulong *)*param_1;
LAB_10b4d93b0:
  puVar1 = (undefined4 *)((long)param_1 + uVar3 * 4);
  *puVar1 = param_2;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4d9324; end: 10b4d93f7;  */

void FUN_10b4d9324(undefined8 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar2 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar2 < '\0') {
    uVar3 = param_1[1];
    uVar4 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar3 == uVar4) goto LAB_10b4d936c;
  }
  else {
    if (bVar2 != 4) {
      uVar3 = (ulong)bVar2;
      *(byte *)((long)param_1 + 0x17) = bVar2 + 1 & 0x7f;
      goto LAB_10b4d93b0;
    }
    uVar4 = 4;
LAB_10b4d936c:
    uVar3 = uVar4;
    func_0x00010b4d93c0(param_1,uVar3,1,uVar3,uVar3,0,0);
  }
  param_1[1] = uVar3 + 1;
  param_1 = (undefined8 *)*param_1;
LAB_10b4d93b0:
  puVar1 = (undefined4 *)((long)param_1 + uVar3 * 4);
  *puVar1 = param_2;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4d93f8; end: 10b4d950b;  */

long * FUN_10b4d93f8(long *param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                    long param_6,long param_7)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  if (param_3 <= 0x3ffffffffffffff6 - param_2) {
    plVar4 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      plVar4 = (long *)*param_1;
    }
    uVar3 = param_3 + param_2;
    if (param_3 + param_2 <= param_2 * 2) {
      uVar3 = param_2 << 1;
    }
    plVar2 = (long *)0x7;
    if ((uVar3 | 1) != 5) {
      plVar2 = (long *)((uVar3 | 1) + 1);
    }
    plVar1 = (long *)0x5;
    if (4 < uVar3) {
      plVar1 = plVar2;
    }
    if (0x1ffffffffffffff2 < param_2) {
      plVar1 = (long *)0x3ffffffffffffff7;
    }
    uVar3 = param_2;
    FUN_10b4d92e4();
    plVar2 = plVar1;
    if (param_5 != 0) {
      _memmove(plVar1,plVar4,param_5 << 2);
    }
    param_4 = param_4 - (param_6 + param_5);
    if (param_4 != 0) {
      plVar2 = (long *)((long)plVar1 + param_7 * 4 + param_5 * 4);
      _memmove(plVar2,(long)plVar4 + param_6 * 4 + param_5 * 4,param_4 * 4);
    }
    if (param_2 != 4) {
      __ZdlPv(plVar4);
      plVar2 = plVar4;
    }
    *param_1 = (long)plVar1;
    param_1[2] = uVar3 | 0x8000000000000000;
    return plVar2;
  }
  func_0x00010b4d92d0();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10b4d950c; end: 10b4d9537;  */

undefined8 * FUN_10b4d950c(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10b4d9538; end: 10b4d9697;  */

long * FUN_10b4d9538(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar2 = param_1 + 2;
  plVar6 = (long *)param_1[1];
  if (plVar6 < (long *)*plVar2) {
    plVar2 = plVar6;
    func_0x00010b4da06c(plVar6);
    plVar6 = plVar6 + 3;
    param_1[1] = (long)plVar6;
  }
  else {
    lVar7 = (long)plVar6 - *param_1;
    uVar5 = lVar7 / 0x18 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar5) {
      FUN_10b4d973c();
LAB_10b4d9674:
      func_0x000104bd35f4();
      FUN_10b4d9750(&lStack_68);
      __Unwind_Resume();
      uVar5 = param_3 - param_2;
      uVar4 = (long)uVar5 >> 2;
      if (0x3ffffffffffffff6 < uVar4) {
        func_0x00010b4d92d0();
        plVar6 = (long *)&DAT_10f62a4d8;
        func_0x000104bd47e8();
        lVar7 = plVar6[1];
        while (lVar7 != plVar6[2]) {
          plVar6[2] = plVar6[2] + -0x18;
          FUN_10b4d950c();
        }
        if (*plVar6 != 0) {
          __ZdlPv();
        }
        return plVar6;
      }
      if (uVar4 < 5) {
        *(char *)((long)param_1 + 0x17) = (char)(uVar5 >> 2);
        plVar6 = param_1;
      }
      else {
        plVar6 = (long *)0x7;
        if ((uVar4 | 1) != 5) {
          plVar6 = (long *)((uVar4 | 1) + 1);
        }
        uVar3 = param_2;
        FUN_10b4d92e4();
        param_1[1] = uVar4;
        param_1[2] = uVar3 | 0x8000000000000000;
        *param_1 = (long)plVar6;
      }
      if (param_3 != param_2) {
        func_0x00010b4da078(plVar6);
      }
      *(undefined4 *)((long)plVar6 + uVar5) = 0;
      return param_1;
    }
    uVar3 = (*plVar2 - *param_1) / 0x18;
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = uVar5;
    }
    if (0x555555555555554 < uVar3) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = plVar2;
    if (uVar4 == 0) {
      lVar1 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar4) goto LAB_10b4d9674;
      lVar1 = uVar4 * 0x18;
      __Znwm();
    }
    lVar7 = lVar1 + lVar7;
    lVar8 = lVar1 + uVar4 * 0x18;
    lStack_68 = lVar1;
    lStack_60 = lVar7;
    lStack_58 = lVar7;
    lStack_50 = lVar8;
    func_0x00010b4da06c();
    plVar6 = (long *)(lVar7 + 0x18);
    lVar1 = *param_1;
    lVar7 = lVar7 + ((param_1[1] - lVar1) / -0x18) * 0x18;
    _memcpy(lVar7,lVar1);
    *param_1 = lVar7;
    param_1[1] = (long)plVar6;
    lStack_50 = param_1[2];
    param_1[2] = lVar8;
    plVar2 = &lStack_68;
    lStack_68 = lVar1;
    lStack_60 = lVar1;
    lStack_58 = lVar1;
    FUN_10b4d9750(plVar2);
  }
  param_1[1] = (long)plVar6;
  return plVar2;
}



/* Entry: 10b4d9698; end: 10b4d973b;  */

long * FUN_10b4d9698(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = param_3 - param_2;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 < 0x3ffffffffffffff7) {
    if (uVar5 < 5) {
      *(char *)((long)param_1 + 0x17) = (char)(uVar3 >> 2);
      plVar1 = param_1;
    }
    else {
      plVar1 = (long *)0x7;
      if ((uVar5 | 1) != 5) {
        plVar1 = (long *)((uVar5 | 1) + 1);
      }
      uVar2 = param_2;
      FUN_10b4d92e4();
      param_1[1] = uVar5;
      param_1[2] = uVar2 | 0x8000000000000000;
      *param_1 = (long)plVar1;
    }
    if (param_3 != param_2) {
      func_0x00010b4da078(plVar1);
    }
    *(undefined4 *)((long)plVar1 + uVar3) = 0;
    return param_1;
  }
  func_0x00010b4d92d0();
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar4 = plVar1[1];
  while (lVar4 != plVar1[2]) {
    plVar1[2] = plVar1[2] + -0x18;
    FUN_10b4d950c();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10b4d973c; end: 10b4d974f;  */

long * FUN_10b4d973c(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = plVar1[1];
  while (lVar2 != plVar1[2]) {
    plVar1[2] = plVar1[2] + -0x18;
    FUN_10b4d950c();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10b4d9750; end: 10b4d97df;  */

long * FUN_10b4d9750(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    FUN_10b4d950c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4d97e0; end: 10b4d97f7;  */

uint FUN_10b4d97e0(uint param_1)

{
  FUN_10b4d9920();
  return param_1 ^ 1;
}



/* Entry: 10b4d97f8; end: 10b4d9837;  */

void FUN_10b4d97f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b4d999c();
  FUN_10b4d99b4();
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_10b4d9968(param_1,&uStack_30);
  return;
}



/* Entry: 10b4d9838; end: 10b4d985b;  */

void FUN_10b4d9838(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b4d9c8c(param_1,&uStack_11);
  return;
}



/* Entry: 10b4d985c; end: 10b4d988f;  */

void FUN_10b4d985c(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  FUN_10b4d9fc0();
  func_0x00010b4da034();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b4d9888);
  (*pcVar1)();
}



/* Entry: 10b4d9890; end: 10b4d98b3;  */

undefined8 FUN_10b4d9890(undefined8 param_1)

{
  FUN_10b4d9d0c();
  return param_1;
}



/* Entry: 10b4d98b4; end: 10b4d9907;  */

void FUN_10b4d98b4(undefined8 *param_1,long param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_10b4d9908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x50);
    return;
  }
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 10b4d9908; end: 10b4d991f;  */

long * FUN_10b4d9908(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  cVar1 = (char)param_1[4];
  bVar2 = cVar1 == (char)param_2[4];
  plVar3 = (long *)(ulong)bVar2;
  if ((bVar2 && cVar1 != '\0') &&
     (cVar1 = (char)param_1[1], bVar2 = cVar1 == (char)param_2[1], plVar3 = (long *)(ulong)bVar2,
     bVar2 && cVar1 != '\0')) {
    plVar3 = (long *)(ulong)(*param_1 == *param_2);
  }
  return plVar3;
}



/* Entry: 10b4d9920; end: 10b4d9967;  */

bool FUN_10b4d9920(long *param_1,long *param_2)

{
  bool bVar1;
  
  bVar1 = (char)param_1[4] == (char)param_2[4];
  if ((bVar1 && (char)param_1[4] != '\0') &&
     (bVar1 = (char)param_1[1] == (char)param_2[1], bVar1 && (char)param_1[1] != '\0')) {
    bVar1 = *param_1 == *param_2;
  }
  return bVar1;
}



/* Entry: 10b4d9968; end: 10b4d999b;  */

void FUN_10b4d9968(undefined8 param_1)

{
  undefined1 auStack_40 [31];
  undefined1 uStack_21;
  
  FUN_10b4d9a0c(auStack_40);
  func_0x00010b4d9aa0(param_1,auStack_40,&uStack_21);
  return;
}


