/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10066b9f0; end: 10066b9fb;  */

void FUN_10066b9f0(void)

{
  return;
}



/* Entry: 10066b9fc; end: 10066ba17;  */

void FUN_10066b9fc(long param_1)

{
  func_0x00010066b3d8();
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  return;
}



/* Entry: 10066ba18; end: 10066ba37;  */

void FUN_10066ba18(long param_1)

{
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    FUN_10066b5d4();
  }
  return;
}



/* Entry: 10066ba38; end: 10066ba8b;  */

void FUN_10066ba38(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_210 [480];
  
  func_0x00010066ba28();
  FUN_10066ba8c();
  FUN_10066baa4(unaff_x19 + 8,auStack_210);
  FUN_10066b97c(unaff_x20 + 8);
  FUN_10066bb10();
  FUN_10054cac4();
  FUN_10066b97c(unaff_x19 + 0x10);
  return;
}



/* Entry: 10066ba8c; end: 10066baa3;  */

void FUN_10066ba8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_1,0x1e0);
  return;
}



/* Entry: 10066baa4; end: 10066bac3;  */

void FUN_10066baa4(void)

{
  func_0x00010066ba94();
  FUN_10066baec();
  return;
}



/* Entry: 10066bac4; end: 10066baeb;  */

void FUN_10066bac4(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0x1d0);
  if (cVar1 != *(char *)(param_2 + 0x1d0)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x1d0) == '\x01') {
        FUN_10066b5d4();
        *(undefined1 *)(param_1 + 0x1d0) = 0;
      }
      return;
    }
    func_0x00010066b3d8();
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    return;
  }
  if (cVar1 != '\0') {
    FUN_100658238();
    func_0x00010065acbc();
    FUN_10066b4d4(unaff_x20 + 0x18,unaff_x19 + 0x18);
    FUN_100066230(unaff_x20 + 0x130,unaff_x19 + 0x130);
    func_0x000107c610b4(unaff_x20 + 0x148,unaff_x19 + 0x148,0x48);
    FUN_10065ad64(unaff_x20 + 400,unaff_x19 + 400);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x1b0);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x1a8);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x1c0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x1b8);
    *(undefined8 *)(unaff_x20 + 0x1c5) = *(undefined8 *)(unaff_x19 + 0x1c5);
    *(undefined8 *)(unaff_x20 + 0x1b0) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x1a8) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x1c0) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x1b8) = uVar4;
    return;
  }
  return;
}



/* Entry: 10066baec; end: 10066bb0f;  */

undefined8 FUN_10066baec(undefined8 param_1)

{
  FUN_10066bac4();
  return param_1;
}



/* Entry: 10066bb10; end: 10066bb1b;  */

undefined8 FUN_10066bb10(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  
  uVar1 = *unaff_x19;
  *unaff_x19 = 0;
  return uVar1;
}



/* Entry: 10066bb1c; end: 10066bb5f; -[SCNNetworkTypesAppStateChangeListener .cxx_construct] */

undefined8 * FUN_10066bb1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10066ac50();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10066bb60; end: 10066bbfb; -[SCNNetworkTypesAppStateChangeListener initWithCpp:] */

undefined1 * FUN_10066bb60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127063f0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10066ac50();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010066bbd8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10066bbfc; end: 10066bc13;  */

void FUN_10066bbfc(void)

{
  return;
}



/* Entry: 10066bc14; end: 10066bc7f; -[SCNQEAppStateChangeNotifier registerListener:] */

undefined8 FUN_10066bc14(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c55fa8();
  puVar2 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c49a34();
  uVar1 = 1;
  if ((int)puVar3 != 0) {
    uVar1 = 2;
  }
  func_0x000107c61170(puVar2);
  return uVar1;
}



/* Entry: 10066bc80; end: 10066bc9f;  */

void FUN_10066bc80(void)

{
  return;
}



/* Entry: 10066bca0; end: 10066bccb;  */

undefined1 * FUN_10066bca0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x1d0] = 0;
  func_0x00010066bc8c();
  return param_1;
}



/* Entry: 10066bccc; end: 10066bd13;  */

byte FUN_10066bccc(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x1d0) == '\x01') {
    if (((*(byte *)(param_1 + 0x29) >> 2 & 1) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0xd0) + 0x10) & 1) == 0)) {
      bVar1 = 0;
    }
    else {
      bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0xd0) + 0x20) + 0x40);
    }
    return bVar1 & 1;
  }
  return 0;
}



/* Entry: 10066bd14; end: 10066bd3f;  */

undefined8 FUN_10066bd14(undefined8 param_1)

{
  func_0x00010066bd0c();
  FUN_10066bd40(param_1);
  return param_1;
}



/* Entry: 10066bd40; end: 10066bd4f;  */

void FUN_10066bd40(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10066bd50();
      }
      func_0x000107c60e14();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10066bd50; end: 10066bd73;  */

undefined8 FUN_10066bd50(undefined8 param_1)

{
  func_0x00010066bd0c();
  return param_1;
}



/* Entry: 10066bd74; end: 10066bdcb;  */

void FUN_10066bd74(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10066bd50();
      }
      func_0x000107c60e14();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10066bdcc; end: 10066bdd3;  */

void FUN_10066bdcc(void)

{
  return;
}



/* Entry: 10066bdd4; end: 10066bdff;  */

undefined8 FUN_10066bdd4(undefined8 param_1)

{
  FUN_10066b60c();
  FUN_10066be2c(param_1);
  return param_1;
}



/* Entry: 10066be00; end: 10066be2b;  */

undefined8 FUN_10066be00(undefined8 param_1)

{
  FUN_10066b60c();
  FUN_10066be80(param_1);
  return param_1;
}



/* Entry: 10066be2c; end: 10066be5b;  */

long FUN_10066be2c(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10066be00();
  }
  func_0x000107c60e14();
  FUN_10066beb8(param_1 + 0x30);
  FUN_10066beb8(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10066be5c; end: 10066be7f;  */

undefined8 FUN_10066be5c(undefined8 param_1)

{
  FUN_10066b60c();
  return param_1;
}



/* Entry: 10066be80; end: 10066beb7;  */

/* WARNING: Possible PIC construction at 0x00010066be9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010066bea0) */
/* WARNING: Removing unreachable block (ram,0x00010066bea8) */
/* WARNING: Removing unreachable block (ram,0x00010066beac) */

void FUN_10066be80(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10066be5c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10066beb8; end: 10066beeb;  */

long * FUN_10066beb8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1000681a0(param_1);
  }
  return param_1;
}



/* Entry: 10066beec; end: 10066bf17;  */

long FUN_10066beec(long param_1)

{
  FUN_10066beb8(param_1 + 0x20);
  FUN_10066beb8(param_1 + 8);
  return param_1;
}



/* Entry: 10066bf18; end: 10066bf47;  */

long FUN_10066bf18(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_10066bf48(param_1);
  return param_1;
}



/* Entry: 10066bf48; end: 10066bf7f;  */

/* WARNING: Possible PIC construction at 0x00010066bf64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010066bf68) */
/* WARNING: Removing unreachable block (ram,0x00010066bf70) */
/* WARNING: Removing unreachable block (ram,0x00010066bf74) */

void FUN_10066bf48(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2d4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10066bf80; end: 10066bf97; -[SCNQEAppStateChangeNotifier setListener:] */

void FUN_10066bf80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10066bf98; end: 10066bfc3;  */

undefined8 FUN_10066bf98(undefined8 param_1)

{
  func_0x00010066bf90();
  FUN_10066bfc4(param_1);
  return param_1;
}



/* Entry: 10066bfc4; end: 10066c00b;  */

/* WARNING: Possible PIC construction at 0x00010066bfe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010066bff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010066bfe4) */
/* WARNING: Removing unreachable block (ram,0x00010066bfec) */
/* WARNING: Removing unreachable block (ram,0x00010066bff0) */
/* WARNING: Removing unreachable block (ram,0x00010066bff4) */
/* WARNING: Removing unreachable block (ram,0x00010066bffc) */
/* WARNING: Removing unreachable block (ram,0x00010066c000) */

void FUN_10066bfc4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1005f73a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10066c00c; end: 10066c037;  */

undefined8 FUN_10066c00c(undefined8 param_1)

{
  func_0x00010066bf90();
  FUN_10066c038(param_1);
  return param_1;
}



/* Entry: 10066c038; end: 10066c047;  */

void FUN_10066c038(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10066c048();
      }
      func_0x000107c60e14();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10066c048; end: 10066c073;  */

undefined8 FUN_10066c048(undefined8 param_1)

{
  func_0x00010066bf90();
  func_0x00010066c0c8(param_1);
  return param_1;
}



/* Entry: 10066c074; end: 10066c0f7;  */

void FUN_10066c074(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10066c048();
      }
      func_0x000107c60e14();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10066c0f8; end: 10066c0ff;  */

void FUN_10066c0f8(void)

{
  return;
}



/* Entry: 10066c100; end: 10066c123;  */

undefined8 FUN_10066c100(undefined8 param_1)

{
  func_0x00010066bf90();
  return param_1;
}



/* Entry: 10066c124; end: 10066c147;  */

undefined8 FUN_10066c124(undefined8 param_1)

{
  FUN_10066b60c();
  return param_1;
}



/* Entry: 10066c148; end: 10066c14f;  */

void FUN_10066c148(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong uVar3;
  
  if (unaff_x19[2] == 0) {
    puVar2 = unaff_x19;
    func_0x00010006818c();
    puVar1 = unaff_x19;
    if ((*unaff_x19 & 1) != 0) {
      puVar1 = (ulong *)(*unaff_x19 + 7);
    }
    for (uVar3 = (ulong)((uint)puVar2 & ((int)(uint)puVar2 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
        uVar3 = uVar3 - 1) {
      if ((long *)*puVar1 != (long *)0x0) {
        (**(code **)(*(long *)*puVar1 + 8))();
      }
      puVar1 = puVar1 + 1;
    }
    if ((*unaff_x19 & 1) != 0) {
      func_0x000107c60e14(*unaff_x19 - 1);
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 10066c150; end: 10066c17b;  */

undefined8 FUN_10066c150(undefined8 param_1)

{
  FUN_10066b60c();
  func_0x00010066c190(param_1);
  return param_1;
}



/* Entry: 10066c17c; end: 10066c1ab;  */

void FUN_10066c17c(void)

{
  FUN_10066c150();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10066c1ac; end: 10066c1b3;  */

void FUN_10066c1ac(void)

{
  return;
}



/* Entry: 10066c1b4; end: 10066c20f;  */

int FUN_10066c1b4(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_10069be14();
    iVar2 = 0;
    if (param_1 != 0) {
      iVar2 = 0;
      plVar3 = (long *)(param_1 + 0x38);
      while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
        uVar1 = *(byte *)((long)plVar3 + 0x19) ^ 1;
        if (*(char *)(plVar3 + 3) == '\0') {
          uVar1 = 0;
        }
        iVar2 = uVar1 + iVar2;
      }
    }
    return iVar2;
  }
  return 0;
}



/* Entry: 10066c210; end: 10066c21b;  */

void FUN_10066c210(void)

{
  bool bVar1;
  bool bVar2;
  long *in_stack_00000650;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  if ((in_stack_00000650 == (long *)0x0) || (*in_stack_00000650 == in_stack_00000650[1])) {
    bVar2 = false;
    auStack_50[0] = 0;
    uStack_38 = 0;
    bVar1 = true;
  }
  else {
    FUN_10069fff8(auStack_50);
    bVar1 = false;
    bVar2 = true;
  }
  FUN_10066c2e8();
  if (bVar1) {
    FUN_10066c37c(auStack_50);
  }
  if (bVar2) {
    FUN_10066c37c(auStack_50);
  }
  return;
}



/* Entry: 10066c21c; end: 10066c2bf;  */

void FUN_10066c21c(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  plVar3 = (long *)*param_2;
  if ((plVar3 == (long *)0x0) || (*plVar3 == plVar3[1])) {
    bVar2 = false;
    auStack_50[0] = 0;
    uStack_38 = 0;
    bVar1 = true;
  }
  else {
    FUN_10069fff8(auStack_50);
    bVar1 = false;
    bVar2 = true;
  }
  FUN_10066c2e8(param_1,auStack_50,*(undefined4 *)(param_2 + 2),
                *(undefined4 *)((long)param_2 + 0x14),*(undefined4 *)(param_2 + 3),
                *(undefined1 *)((long)param_2 + 0x1c),*(undefined4 *)(param_2 + 4),
                *(undefined1 *)((long)param_2 + 0x24),*(undefined2 *)((long)param_2 + 0x25),
                *(undefined4 *)(param_2 + 5));
  if (bVar1) {
    FUN_10066c37c(auStack_50);
  }
  if (bVar2) {
    FUN_10066c37c(auStack_50);
  }
  return;
}



/* Entry: 10066c2c0; end: 10066c2e7;  */

void FUN_10066c2c0(long param_1)

{
  FUN_10061fb20();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10066c368();
  return;
}



/* Entry: 10066c2e8; end: 10066c367;  */

void FUN_10066c2e8(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  FUN_10066c2c0();
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  *(undefined1 *)(param_1 + 0x2c) = param_6;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  *(undefined1 *)(param_1 + 0x34) = param_8;
  *(undefined1 *)(param_1 + 0x35) = (undefined1)param_9;
  *(undefined1 *)(param_1 + 0x36) = param_9._1_1_;
  *(undefined4 *)(param_1 + 0x38) = param_10;
  return;
}



/* Entry: 10066c368; end: 10066c37b;  */

void FUN_10066c368(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 10066c37c; end: 10066c39b;  */

void FUN_10066c37c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010066c3e8();
  }
  return;
}



/* Entry: 10066c39c; end: 10066c3c3;  */

void FUN_10066c39c(void)

{
  return;
}



/* Entry: 10066c3c4; end: 10066c437;  */

undefined8 FUN_10066c3c4(undefined8 param_1)

{
  func_0x00010066c3ac(param_1,0);
  return param_1;
}



/* Entry: 10066c438; end: 10066c443;  */

void FUN_10066c438(void)

{
  return;
}



/* Entry: 10066c444; end: 10066c813;  */

void FUN_10066c444(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  long lStack_120;
  char cStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  char cStack_e0;
  char cStack_d8;
  char cStack_d0;
  byte bStack_c8;
  char cStack_b8;
  char cStack_78;
  undefined1 auStack_70 [24];
  char cStack_58;
  
  FUN_10007847c(auStack_110,&UNK_10f4b280c);
  FUN_10065e964(&iStack_130,*(undefined8 *)(param_1 + 0x28),param_2);
  if ((cStack_118 == '\x01') && (*(ulong *)(param_2 + 0x20) < (ulong)(lStack_120 / 1000))) {
    *(long *)(param_2 + 0x20) = lStack_120 / 1000;
    *(uint *)(param_2 + 0x340) = (uint)(iStack_128 != 2);
  }
  if (((*(int *)(param_1 + 0x38) == 0) && (cStack_118 != '\0')) && (iStack_130 == 2)) {
    uVar7 = CONCAT44(uStack_124,iStack_128);
LAB_10066c4e4:
    func_0x000107c29728(param_2,iStack_130,uStack_12c,uVar7,lStack_120,param_1 + 0x40);
    goto LAB_10066c7ac;
  }
  FUN_10066c814(auStack_f8,*(undefined8 *)(param_1 + 8),param_2);
  if (cStack_78 == '\x01') {
    uVar5 = 5;
    if (cStack_d0 == '\0') {
      uVar5 = 1;
    }
    *(undefined4 *)(param_2 + 0x30) = uVar5;
    *(undefined8 *)(param_2 + 0x38) = 8;
    *(undefined1 *)(param_2 + 0x40) = 1;
    func_0x000107c29d58(auStack_70,*(undefined8 *)(param_1 + 8),param_2);
    func_0x000107c28dc0(param_2 + 0xe8,auStack_70);
    func_0x000107c32fcc();
    func_0x00010066c864();
    goto LAB_10066c7ac;
  }
  func_0x00010066c864();
  FUN_10066c88c(auStack_f8,*(undefined8 *)(param_1 + 8),param_2);
  if (cStack_d8 == '\x01') {
    FUN_10054f8dc(auStack_70,auStack_f8);
    cStack_58 = cStack_e0;
    *(undefined1 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x38) = 1;
    uVar5 = 5;
    if (cStack_e0 == '\0') {
      uVar5 = 1;
    }
    *(undefined4 *)(param_2 + 0x30) = uVar5;
    func_0x000107c29068(param_2 + 0xe8,auStack_70);
    func_0x000107c32fcc();
    func_0x00010066c9a0();
    goto LAB_10066c7ac;
  }
  func_0x00010066c9a0();
  if ((*(uint *)(param_2 + 0x30) | 4) == 5) {
    lVar4 = param_2 + 0xe8;
    FUN_10069ffbc(lVar4,param_1 + 0x40);
    if ((((uint)lVar4 | (uint)*(byte *)(param_2 + 0x40)) & 1) == 0) {
      if (*(long **)(param_2 + 0x168) == *(long **)(param_2 + 0x170)) {
        lVar4 = 0x7fffffffffffffff;
      }
      else {
        lVar4 = **(long **)(param_2 + 0x168);
      }
      lVar6 = lVar4;
      if ((*(long **)(param_2 + 0x150) != *(long **)(param_2 + 0x158)) &&
         (lVar6 = **(long **)(param_2 + 0x150), lVar4 <= lVar6)) {
        lVar6 = lVar4;
      }
      if (lVar6 != 0x7fffffffffffffff) {
        plVar3 = *(long **)(param_1 + 0x18);
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
        iVar1 = (int)plVar3;
        if (iVar1 == 0) {
          uVar7 = 10;
        }
        else if (iVar1 == 2) {
          uVar7 = 9;
        }
        else {
          if (iVar1 != 3) goto LAB_10066c63c;
          uVar7 = 0xb;
        }
        *(undefined8 *)(param_2 + 0x38) = uVar7;
        goto LAB_10066c7ac;
      }
    }
  }
LAB_10066c63c:
  if (cStack_118 != '\0') {
    uVar7 = CONCAT44(uStack_124,iStack_128);
    uVar2 = param_2;
    func_0x000107c2946c(param_2,param_1 + 0x40);
    if ((uVar2 & 1) == 0) goto LAB_10066c4e4;
  }
  if (*(int *)(param_2 + 0x30) != 0x1a) goto LAB_10066c7ac;
  plVar3 = *(long **)(param_1 + 0x78);
  (**(code **)(*plVar3 + 0x10))();
  if ((((int)plVar3 == 0) ||
      ((**(code **)(**(long **)(param_1 + 0x78) + 0x20))
                 (auStack_f8,*(long **)(param_1 + 0x78),param_2), cStack_b8 != '\x01')) ||
     ((bStack_c8 & 1) != 0)) goto LAB_10066c7ac;
  if (*(long *)(param_2 + 0x150) == *(long *)(param_2 + 0x158) &&
      *(long *)(param_2 + 0x168) == *(long *)(param_2 + 0x170)) {
    lVar4 = *(long *)(param_2 + 0x110);
    if (*(char *)(param_2 + 0x118) == '\0') {
      lVar4 = 0;
    }
    lVar6 = *(long *)(param_2 + 0x120);
    if (*(char *)(param_2 + 0x128) == '\0') {
      lVar6 = 0;
    }
    if (1 < lVar4 - lVar6) {
      lVar4 = *(long *)(param_1 + 0x58);
      func_0x000107c29fa4(lVar4,param_2);
      if (lVar4 != 0) {
        *(undefined4 *)(param_2 + 0x30) = 2;
        *(undefined8 *)(param_2 + 0x38) = 1;
        *(undefined1 *)(param_2 + 0x40) = 0;
        uVar7 = 0x15;
        goto LAB_10066c7a8;
      }
    }
    *(undefined4 *)(param_2 + 0x30) = 2;
    if (*(char *)(param_2 + 0x268) == '\x01') {
      uVar7 = 0xb;
      *(undefined8 *)(param_2 + 0x38) = 0xb;
      *(undefined1 *)(param_2 + 0x40) = 0;
    }
    else {
      *(undefined8 *)(param_2 + 0x38) = 0;
      uVar7 = 1;
      *(undefined1 *)(param_2 + 0x40) = 1;
    }
  }
  else {
    uVar5 = 5;
    if (*(long *)(param_2 + 0x168) == *(long *)(param_2 + 0x170)) {
      uVar5 = 1;
    }
    *(undefined4 *)(param_2 + 0x30) = uVar5;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined1 *)(param_2 + 0x40) = 0;
    uVar7 = 1;
  }
LAB_10066c7a8:
  *(undefined8 *)(param_2 + 0x108) = uVar7;
LAB_10066c7ac:
  FUN_100078bd8(auStack_110);
  return;
}



/* Entry: 10066c814; end: 10066c85b;  */

void FUN_10066c814(undefined1 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 + 0x10;
  FUN_10065ea58();
  if (param_2 + 0x10 != lVar1) {
    func_0x00010883a5c8(param_1,lVar1 + 0x10);
    param_1[0x80] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x80] = 0;
  return;
}



/* Entry: 10066c85c; end: 10066c86b;  */

void FUN_10066c85c(void)

{
  return;
}



/* Entry: 10066c86c; end: 10066c88b;  */

void FUN_10066c86c(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x000107c2972c();
  }
  return;
}



/* Entry: 10066c88c; end: 10066c997;  */

void FUN_10066c88c(ulong param_1)

{
  undefined1 *extraout_x8;
  long lVar1;
  long lVar2;
  byte bVar3;
  long unaff_x21;
  long *plVar4;
  undefined1 auStack_70 [24];
  byte bStack_58;
  undefined1 auStack_50 [24];
  byte bStack_38;
  
  func_0x00010065ebe4();
  FUN_10065ecb8();
  if ((param_1 & 1) == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x20] = 0;
  }
  else {
    auStack_50[0] = 0;
    bStack_38 = 0;
    lVar1 = unaff_x21 + 0x28;
    func_0x000107c33d20();
    bVar3 = 0;
    plVar4 = (long *)(lVar1 + 0x10);
    lVar1 = 0x7fffffffffffffff;
    while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
      lVar2 = plVar4[3];
      if ((*(int *)(lVar2 + 0x18) == 2) && ((*(byte *)(lVar2 + 0x78) & 1) == 0)) {
        if ((bStack_38 != 1) || (plVar4[2] < lVar1)) {
          func_0x000107c29068(auStack_50,lVar2 + 0x20);
          lVar1 = plVar4[2];
          lVar2 = plVar4[3];
        }
        bVar3 = *(byte *)(lVar2 + 0x38) | bVar3;
      }
    }
    if ((bStack_38 & 1) == 0) {
      *extraout_x8 = 0;
      extraout_x8[0x20] = 0;
    }
    else {
      FUN_10054f8dc(auStack_70,auStack_50);
      bStack_58 = bVar3 & 1;
      func_0x000107c29d64(extraout_x8,auStack_70);
      FUN_100100fec(auStack_70);
    }
    FUN_1005fce88(auStack_50);
  }
  return;
}



/* Entry: 10066c998; end: 10066c9a7;  */

void FUN_10066c998(void)

{
  return;
}



/* Entry: 10066c9a8; end: 10066c9c7;  */

void FUN_10066c9a8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10066c9c8; end: 10066ca47;  */

void FUN_10066c9c8(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  
  FUN_1005ee630();
  if ((bool)in_ZR) {
    FUN_1005ecc68();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c34184();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3423c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_10066cbdc(*(undefined8 *)(unaff_x21 + 0x20));
  FUN_10066cbec();
  return;
}



/* Entry: 10066ca48; end: 10066cbdb;  */

void FUN_10066ca48(undefined1 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_670 [32];
  undefined1 auStack_650 [32];
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 auStack_610 [632];
  undefined1 auStack_398 [32];
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  uint uStack_340;
  byte bStack_33c;
  uint uStack_308;
  int iStack_300;
  undefined1 auStack_2d8 [64];
  undefined1 auStack_298 [84];
  int iStack_244;
  undefined1 uStack_238;
  char cStack_138;
  undefined1 auStack_130 [216];
  undefined1 uStack_58;
  
  auStack_130[0] = 0;
  uStack_58 = 0;
  FUN_10066c9c8(auStack_610,*param_3,param_2);
  FUN_10066d5e4(auStack_398,auStack_610);
  FUN_10062b84c(auStack_610);
  if (cStack_138 == '\x01') {
    uVar2 = (ulong)uStack_308;
    uVar1 = 0;
    if (iStack_244 == 1) {
      uVar1 = uStack_238;
    }
    uStack_628 = uStack_370;
    uStack_630 = uStack_378;
    uStack_620 = uStack_368;
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    FUN_100672080(uVar2,param_4);
    uVar3 = (ulong)uStack_340;
    FUN_100606fd8(auStack_650,auStack_2d8);
    FUN_10028af84(auStack_670,auStack_298);
    if (bStack_33c == 0) {
      uVar3 = 0;
    }
    FUN_1006720bc(auStack_610,&uStack_630,uVar2,uVar3 | (ulong)bStack_33c << 0x20,auStack_650,
                  auStack_670,uVar1,iStack_300 == 1);
    FUN_1006721f4(param_1,auStack_610);
    FUN_100672210(auStack_610);
    FUN_1001148fc(auStack_670);
    FUN_1005fce88(auStack_650);
    FUN_100100fec(&uStack_630);
  }
  else {
    *param_1 = 0;
    param_1[0x70] = 0;
  }
  FUN_10062b820(auStack_398);
  FUN_10066d68c(auStack_130);
  return;
}



/* Entry: 10066cbdc; end: 10066cbeb;  */

long FUN_10066cbdc(long param_1)

{
  long in_x9;
  
  return param_1 + in_x9;
}



/* Entry: 10066cbec; end: 10066cc0f;  */

void FUN_10066cbec(void)

{
  func_0x0001005ed940();
  FUN_10062184c();
  func_0x0001005edc50();
  func_0x0001005edc5c();
  FUN_10065f1e8();
  func_0x0001005edd60();
  FUN_100621964();
  return;
}



/* Entry: 10066cc10; end: 10066cc67;  */

void FUN_10066cc10(void)

{
  func_0x0001005edc5c();
  FUN_10065f1e8();
  func_0x0001005edd60();
  FUN_100621964();
  return;
}



/* Entry: 10066cc68; end: 10066cc73;  */

void FUN_10066cc68(void)

{
  return;
}



/* Entry: 10066cc74; end: 10066cd5b;  */

undefined2 * FUN_10066cc74(undefined2 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 *extraout_x8;
  undefined2 auStack_d0 [52];
  char cStack_68;
  undefined2 *puStack_60;
  undefined2 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0x100;
  uStack_40 = 0x800000000;
  FUN_10066cc68();
  FUN_10066cfa4();
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  FUN_10066d240(param_1 + 0x2c,&uStack_40,1);
  *(undefined1 *)(param_1 + 0x40) = 1;
  puVar2 = param_1 + 0x44;
  FUN_10002b838(puVar2,&UNK_10f770b2c);
  *(undefined1 *)(param_1 + 0x50) = 0;
  func_0x00010066d4c8(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  func_0x000107c60e78();
  func_0x0001006700e8(param_1 + 0x2c);
  FUN_1001ba7c0(param_1 + 0x18);
  func_0x00010060f240(param_1 + 4);
  func_0x000107c39770();
  puVar3 = auStack_d0;
  pcStack_48 = FUN_10066cd5c;
  puStack_60 = puVar2;
  puStack_58 = param_1 + 4;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10066cc74(extraout_x8);
  uVar1 = 200;
  FUN_10066d4dc();
  *extraout_x8 = uVar1;
  uVar1 = 0xe0;
  FUN_10066d56c();
  extraout_x8[0xa0] = uVar1;
  FUN_10066d968(auStack_d0,&PTR_DAT_110cee1f8);
  if (cStack_68 == '\x01') {
    FUN_10066cc68();
    FUN_10066fb38();
  }
  FUN_10066fe88(auStack_d0);
  return puVar3;
}



/* Entry: 10066cd5c; end: 10066cdf7;  */

void FUN_10066cd5c(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 auStack_90 [104];
  char cStack_28;
  
  FUN_10066cc74(param_1);
  uVar1 = 200;
  FUN_10066d4dc();
  *param_1 = uVar1;
  uVar1 = 0xe0;
  FUN_10066d56c();
  param_1[0xa0] = uVar1;
  FUN_10066d968(auStack_90,&PTR_DAT_110cee1f8);
  if (cStack_28 == '\x01') {
    FUN_10066cc68();
    FUN_10066fb38();
  }
  FUN_10066fe88(auStack_90);
  return;
}



/* Entry: 10066cdf8; end: 10066cf5b;  */

void FUN_10066cdf8(long param_1,int param_2)

{
  undefined4 uVar1;
  int extraout_w10;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  char cStack_d8;
  undefined7 uStack_d7;
  
  if ((param_2 == 1) && ((*(byte *)(param_1 + 200) & 1) == 0)) {
    *(undefined1 *)(param_1 + 200) = 1;
    FUN_10066cd5c(&cStack_d8);
    if (cStack_d8 == '\x01') {
      FUN_10066fea8(&uStack_f0,&cStack_d8);
      uStack_100 = uStack_f0;
      uVar1 = 4;
      if (*(int *)(param_1 + 0x54) != 1) {
        uVar1 = 0;
      }
      if (*(int *)(param_1 + 0x54) == 0) {
        uVar1 = 1;
      }
      FUN_100670158(uStack_f0,uVar1);
      lStack_f8 = lStack_e8;
      if (lStack_e8 != 0) {
        do {
          FUN_10060fc34();
        } while (extraout_w10 != 0);
      }
      FUN_100670274(param_1 + 0xb8,&uStack_100);
      FUN_1006108b8(&uStack_100);
      lStack_108 = lStack_e8;
      uStack_110 = uStack_f0;
      uStack_f0 = 0;
      lStack_e8 = 0;
      FUN_10067033c(*(undefined8 *)(param_1 + 0xa0),&uStack_110);
      func_0x0001006108b0();
      FUN_1006108b8(&uStack_f0);
    }
    FUN_1006700ac(&cStack_d8);
  }
  FUN_100610858(&cStack_d8,param_1 + 0xb8);
  if (CONCAT71(uStack_d7,cStack_d8) != 0) {
    if (param_2 == 2) {
      func_0x000107c30114();
    }
    else if (param_2 == 1) {
      FUN_10067038c();
    }
  }
  FUN_1006108b8(&cStack_d8);
  return;
}



/* Entry: 10066cf5c; end: 10066cfa3;  */

void FUN_10066cf5c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    func_0x000100650164(param_1,param_2);
  }
  return;
}



/* Entry: 10066cfa4; end: 10066cfeb;  */

undefined8 * FUN_10066cfa4(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_10066cf5c(param_1,param_2,param_2 + param_3 * 4);
  return param_1;
}



/* Entry: 10066cfec; end: 10066d1cb;  */

undefined1  [16]
FUN_10066cfec(float param_1,float param_2,long *param_3,int *param_4,undefined4 *param_5)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 auVar12 [16];
  
  uVar11 = (ulong)*param_4;
  uVar10 = param_3[1];
  if (uVar10 != 0) {
    uVar5 = uVar10 - 1;
    if ((uVar10 & uVar5) == 0) {
      unaff_x23 = uVar5 & uVar11;
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar7 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10066d09c;
          uVar7 = plVar9[1];
          if (uVar7 != uVar11) break;
          if ((int)plVar9[2] == *param_4) {
            uVar4 = 0;
            goto LAB_10066d1b4;
          }
        }
        if ((uVar10 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar10 <= uVar7) {
          uVar3 = 0;
          if (uVar10 != 0) {
            uVar3 = uVar7 / uVar10;
          }
          uVar7 = uVar7 - uVar3 * uVar10;
        }
      } while (uVar7 == unaff_x23);
    }
  }
LAB_10066d09c:
  uVar2 = *param_5;
  plVar1 = param_3 + 2;
  plVar9 = (long *)0x18;
  func_0x000107c60e20();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  *(undefined4 *)(plVar9 + 2) = uVar2;
  FUN_10066d284();
  if ((uVar10 == 0) || (param_2 * (float)uVar10 < param_1)) {
    func_0x00010066d298(uVar10 << 1);
    FUN_10066d2b0(param_3);
    uVar10 = param_3[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x23 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar5 * uVar10;
      }
    }
  }
  lVar6 = *param_3;
  plVar8 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar9 = *plVar1;
    *plVar1 = (long)plVar9;
    *(long **)(lVar6 + unaff_x23 * 8) = plVar1;
    if (*plVar9 != 0) {
      uVar11 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar5 * uVar10;
      }
      *(long **)(lVar6 + uVar11 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar8;
    *plVar8 = (long)plVar9;
  }
  param_3[3] = param_3[3] + 1;
  func_0x00010066d474();
  uVar4 = 1;
LAB_10066d1b4:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 10066d1cc; end: 10066d1ff;  */

void FUN_10066d1cc(undefined8 param_1,undefined8 param_2)

{
  FUN_10066cfec(param_1,param_2,param_2);
  return;
}



/* Entry: 10066d200; end: 10066d23f;  */

void FUN_10066d200(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    func_0x00010066d1e8(param_1,param_2);
  }
  return;
}



/* Entry: 10066d240; end: 10066d283;  */

undefined8 * FUN_10066d240(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_10066d200(param_1,param_2,param_2 + param_3 * 4);
  return param_1;
}



/* Entry: 10066d284; end: 10066d2af;  */

float FUN_10066d284(void)

{
  long unaff_x19;
  
  return (float)(*(long *)(unaff_x19 + 0x18) + 1);
}



/* Entry: 10066d2b0; end: 10066d44f;  */

void FUN_10066d2b0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10066d450(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    func_0x000107c60e20(lVar2);
    FUN_10066d450(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10066d450; end: 10066d47b;  */

void FUN_10066d450(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10066d47c; end: 10066d4a7;  */

long * FUN_10066d47c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10066d4a8; end: 10066d4db;  */

void FUN_10066d4a8(void)

{
  return;
}



/* Entry: 10066d4dc; end: 10066d553;  */

undefined1 FUN_10066d4dc(int param_1)

{
  undefined1 uVar1;
  undefined1 uStack_28;
  
  if ((bRam0000000113374c68 & 1) == 0) {
    FUN_10066d554(0x113374c68);
    if (param_1 != 0) {
      uVar1 = uStack_28;
      FUN_1005ec950();
      uRam0000000113374c60 = uVar1;
      func_0x000107c60e4c(0x113374c68);
    }
  }
  return uRam0000000113374c60;
}



/* Entry: 10066d554; end: 10066d56b;  */

void FUN_10066d554(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_guard_acquire_110346be0)(param_1);
  return;
}



/* Entry: 10066d56c; end: 10066d5e3;  */

undefined1 FUN_10066d56c(int param_1)

{
  undefined1 uVar1;
  undefined1 uStack_28;
  
  if ((bRam0000000113374c78 & 1) == 0) {
    FUN_10066d554(0x113374c78);
    if (param_1 != 0) {
      uVar1 = uStack_28;
      FUN_1005ec950();
      uRam0000000113374c70 = uVar1;
      func_0x000107c60e4c(0x113374c78);
    }
  }
  return uRam0000000113374c70;
}



/* Entry: 10066d5e4; end: 10066d677;  */

void FUN_10066d5e4(undefined1 *param_1)

{
  long *plVar1;
  undefined1 auStack_510 [624];
  long lStack_2a0;
  undefined1 auStack_298 [608];
  char cStack_38;
  
  func_0x00010062b470(&lStack_2a0);
  func_0x000107c60ee4(auStack_510,0x270);
  if (cStack_38 == '\x01') {
    FUN_10066d678();
    if (lStack_2a0 != 0) {
      plVar1 = &lStack_2a0;
      FUN_10062b56c(plVar1);
      FUN_100672064(param_1,plVar1);
      goto LAB_10066d654;
    }
  }
  else {
    FUN_10066d678();
  }
  *param_1 = 0;
  param_1[0x260] = 0;
LAB_10066d654:
  FUN_10062b820(auStack_298);
  return;
}



/* Entry: 10066d678; end: 10066d68b;  */

void FUN_10066d678(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x268) == '\x01') {
    FUN_10062b3e0();
  }
  return;
}



/* Entry: 10066d68c; end: 10066d6ab;  */

void FUN_10066d68c(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_10066dfa0();
  }
  return;
}



/* Entry: 10066d6ac; end: 10066d6d7;  */

void FUN_10066d6ac(void)

{
  return;
}



/* Entry: 10066d6d8; end: 10066d777;  */

void FUN_10066d6d8(void)

{
  undefined1 in_ZR;
  undefined1 auStack_90 [96];
  
  func_0x00010066d6c0();
  if ((bool)in_ZR) {
    FUN_1005ecc68();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c34184();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3423c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_10066d778();
  FUN_10066d784();
  FUN_10066daac();
  FUN_10066dad0();
  FUN_10066dcb8(auStack_90);
  return;
}



/* Entry: 10066d778; end: 10066d783;  */

long FUN_10066d778(void)

{
  long in_x9;
  long in_x10;
  
  return in_x9 + in_x10;
}



/* Entry: 10066d784; end: 10066d7a7;  */

void FUN_10066d784(void)

{
  func_0x0001005ed940();
  FUN_10066d7a8();
  func_0x0001005edc50();
  func_0x0001005edc5c();
  FUN_10065f1e8();
  func_0x0001005edd60();
  FUN_10066d8a8();
  return;
}



/* Entry: 10066d7a8; end: 10066d84f;  */

long FUN_10066d7a8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_10066d81c;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_10066d81c:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  func_0x0001005edc5c();
  FUN_10065f1e8();
  func_0x0001005edd60();
  FUN_10066d8a8();
  return param_1;
}



/* Entry: 10066d850; end: 10066d8a7;  */

void FUN_10066d850(void)

{
  func_0x0001005edc5c();
  FUN_10065f1e8();
  func_0x0001005edd60();
  FUN_10066d8a8();
  return;
}



/* Entry: 10066d8a8; end: 10066d8cb;  */

void FUN_10066d8a8(void)

{
  FUN_1005ec7e4();
  FUN_10066d8cc();
  return;
}



/* Entry: 10066d8cc; end: 10066d8fb;  */

void FUN_10066d8cc(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_10066d8fc();
  return;
}



/* Entry: 10066d8fc; end: 10066d967;  */

void FUN_10066d8fc(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_40 [32];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_10054c3a4(), (int)lVar1 != 0)) {
    func_0x000107c298bc(auStack_40,*param_1);
    func_0x000107c334d8();
    func_0x000107c298b8();
    FUN_100100fec(auStack_40);
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[5] == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(plVar2 + 4) = 0;
  }
  return;
}



/* Entry: 10066d968; end: 10066d977;  */

void FUN_10066d968(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  long lStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  uVar2 = 0;
  FUN_1005e774c(&lStack_38,*param_2,param_2[1],param_2[4],param_2[5]);
  if (lStack_38 == CONCAT44(uStack_2c,iStack_30)) {
    *param_1 = 0;
    param_1[0x68] = 0;
  }
  else {
    FUN_10066f78c(auStack_a0,0);
    FUN_10006369c(auStack_a0,lStack_38,iStack_30 - (int)lStack_38);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
      *param_1 = 0;
    }
    else {
      FUN_10066f78c(param_1,0);
      if (param_1 != auStack_a0) {
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uStack_98 & 1) != 0) {
          uStack_98 = *(ulong *)(uStack_98 & 0xfffffffffffffffe);
        }
        if (uVar2 == uStack_98) {
          FUN_10066cc68();
          FUN_10066fa34();
        }
        else {
          FUN_10066cc68();
          func_0x000107c30554();
        }
      }
      uVar1 = 1;
    }
    param_1[0x68] = uVar1;
    FUN_10066faac(auStack_a0);
  }
  FUN_100100fec(&lStack_38);
  return;
}



/* Entry: 10066d978; end: 10066da87;  */

void FUN_10066d978(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  long lStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  uVar2 = 0;
  FUN_1005e774c(&lStack_38,param_2,param_3,*(undefined8 *)(param_4 + 0x10),
                *(undefined8 *)(param_4 + 0x18));
  if (lStack_38 == CONCAT44(uStack_2c,iStack_30)) {
    *param_1 = 0;
    param_1[0x68] = 0;
  }
  else {
    FUN_10066f78c(auStack_a0,0);
    FUN_10006369c(auStack_a0,lStack_38,iStack_30 - (int)lStack_38);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
      *param_1 = 0;
    }
    else {
      FUN_10066f78c(param_1,0);
      if (param_1 != auStack_a0) {
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uStack_98 & 1) != 0) {
          uStack_98 = *(ulong *)(uStack_98 & 0xfffffffffffffffe);
        }
        if (uVar2 == uStack_98) {
          FUN_10066cc68();
          FUN_10066fa34();
        }
        else {
          FUN_10066cc68();
          func_0x000107c30554();
        }
      }
      uVar1 = 1;
    }
    param_1[0x68] = uVar1;
    FUN_10066faac(auStack_a0);
  }
  FUN_100100fec(&lStack_38);
  return;
}



/* Entry: 10066da88; end: 10066daab;  */

void FUN_10066da88(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10066daac; end: 10066dacf;  */

undefined1 * FUN_10066daac(void)

{
  return &stack0x00000030;
}


