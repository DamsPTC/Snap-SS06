/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031ddc60; end: 1031ddcf3;  */

void FUN_1031ddc60(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1031dde3c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1031ddcf4; end: 1031dde17;  */

undefined * FUN_1031ddcf4(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031dde18);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1031de0c4();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1031ddbdc(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1031dde18; end: 1031dde3b;  */

undefined * FUN_1031dde18(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar3 = (undefined *)0x112f4b2e8;
  uVar5 = 0x112f4b2f0;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031ddf80);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    func_0x0001000285a8(0x112f4b2e8,&UNK_10db9a7c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    puVar4 = puVar3;
  }
  puVar3 = puVar4 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(0x112f4b2f0,&UNK_10db9a7c8);
    func_0x000107c6140c(puVar3,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar4 != param_4 || puVar1 + uVar7 * 0x28 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 1031dde3c; end: 1031ddf7f;  */

undefined *
FUN_1031dde3c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1031ddf80);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar4 = param_5;
    func_0x000107c610a4();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    func_0x000107c6140c(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x28 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar2,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 1031ddf80; end: 1031de0c3;  */

undefined * FUN_1031ddf80(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031de0c4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f4b308;
    func_0x0001000285a8(0x112f4b308,&UNK_10db9a7e0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f4b310;
    func_0x0001000285a8(0x112f4b310,&UNK_10db9fef0);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1031de0c4; end: 1031de11f;  */

void FUN_1031de0c4(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1031ddbdc();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f4b2d0;
  plVar5 = (long *)&UNK_10db9a7a0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1031de120; end: 1031de143;  */

undefined8 FUN_1031de120(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1031de144; end: 1031de1ab;  */

/* WARNING: Possible PIC construction at 0x0001031de174: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031de178) */
/* WARNING: Removing unreachable block (ram,0x0001031de17c) */

void FUN_1031de144(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112f4b2f8;
    plVar5 = (long *)&UNK_10db9a7d0;
  }
  else {
    puVar3 = (ulong *)0x112f4b300;
    plVar5 = (long *)&UNK_10db9a7d8;
    unaff_x30 = 0x1031de178;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1031de1ac; end: 1031de29b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031de1ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  puVar3 = *(undefined1 **)(unaff_x20 + 0x88);
  puVar9 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c4d80c();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
    lVar5 = 0;
    FUN_1031e1b24();
    lVar6 = lVar5;
    func_0x000107c610f8();
    *(undefined8 *)(lVar6 + _DAT_112f4b458) = uVar8;
    *(undefined8 *)(lVar6 + _DAT_112f4b460) = uVar4;
    *(undefined8 *)(lVar6 + _DAT_112f4b468) = uVar10;
    *(undefined8 *)(lVar6 + _DAT_112f4b470) = uVar1;
    puVar2 = PTR_s_init_1125d9248;
    lStack_50 = lVar6;
    lStack_48 = lVar5;
    func_0x000107c61174(uVar8);
    func_0x000107c61174(uVar10);
    func_0x000107c61174(uVar1);
    func_0x000107c61154(&lStack_50,puVar2);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x88);
    *(long **)(unaff_x20 + 0x88) = plVar7;
    func_0x000107c61174();
    func_0x000107c61170(uVar10);
    puVar3 = (undefined1 *)0x0;
    puVar9 = (undefined1 *)plVar7;
  }
  func_0x000107c61174(puVar3);
  return puVar9;
}



/* Entry: 1031de29c; end: 1031de413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031de29c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x90);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d5ec78,&UNK_10d9a0280);
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113077908);
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
    *(long *)(unaff_x20 + 0x90) = lVar2;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(uVar3);
    lVar1 = 0;
  }
  func_0x000107c6157c(lVar1);
  return lVar2;
}



/* Entry: 1031de414; end: 1031de467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031de414(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + _DAT_11307abc8);
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031de468; end: 1031de56b;  */

code * FUN_1031de468(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_48;
  
  pcVar1 = *(code **)(unaff_x20 + 0xa0);
  pcVar2 = pcVar1;
  if (pcVar1 == (code *)0x0) {
    func_0x0001031de33c();
    pcVar2 = pcVar1;
    func_0x0001031de29c();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar4 = &puStack_48;
    puStack_48 = puVar3;
    func_0x0001006c71a4(ppuVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61574(pcVar2);
    ppuVar5 = ppuVar4;
    func_0x0001006c733c(ppuVar4);
    func_0x000107c61574(pcVar1);
    func_0x000107c61574(ppuVar4);
    uVar6 = 0x112f4b4d0;
    func_0x0001000285a8(0x112f4b4d0,&UNK_10db9a948);
    pcVar2 = FUN_1031de56c;
    func_0x0001000bfde0(FUN_1031de56c,0,uVar6);
    func_0x000107c61574(ppuVar5);
    uVar6 = *(undefined8 *)(unaff_x20 + 0xa0);
    *(code **)(unaff_x20 + 0xa0) = pcVar2;
    func_0x000107c6157c(pcVar2);
    func_0x000107c61574(uVar6);
    pcVar1 = (code *)0x0;
  }
  func_0x000107c6157c(pcVar1);
  return pcVar2;
}



/* Entry: 1031de56c; end: 1031de597;  */

/* WARNING: Possible PIC construction at 0x0001031de584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031de588) */

void FUN_1031de56c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 1031de598; end: 1031dfcb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031de598(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_8;
  *(undefined8 *)(unaff_x20 + 0x20) = param_7;
  *(undefined8 *)(unaff_x20 + 0x28) = param_9;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  uVar1 = *(undefined8 *)(param_4 + _DAT_113078178);
  func_0x000107c61174();
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  uVar1 = *(undefined8 *)(param_6 + _DAT_112f4e1b0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_6);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  return unaff_x20;
}



/* Entry: 1031dfcb4; end: 1031dfde7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031dfcb4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_68 [40];
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130778f0);
    func_0x000107c52060();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c40570(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
  }
  func_0x0001000d224c(auStack_68);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + _DAT_1130190c8);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar4 = uVar3;
  FUN_1031de468();
  FUN_1031dff94(param_1,uVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  func_0x000107c61574(uVar5);
  FUN_1031e05b4();
  func_0x000107c615e8(uVar3);
  func_0x000107c61574(uVar4);
  func_0x0001031e3000(auStack_68,0x112f4b318,&UNK_10db9a7f0);
  return;
}



/* Entry: 1031dfde8; end: 1031dff8b;  */

void FUN_1031dfde8(undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_d0 [24];
  ulong uStack_b8;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar7 = *param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (cVar1 != '\x01') {
      lVar9 = *(long *)(param_3 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar9 != 0) {
        param_3 = param_3 + 0x20;
        do {
          func_0x0001031e3080(param_3,auStack_a8);
          uVar3 = uStack_88;
          uVar2 = uStack_90;
          puVar4 = auStack_a8;
          func_0x0001000a8868(puVar4,uStack_90);
          FUN_1031dca18(auStack_d0,uVar2,uVar3,puVar4);
          uVar5 = uStack_b8;
          func_0x0001000a8868(auStack_d0,uStack_b8);
          func_0x0001014f49b4(uVar5,uVar7);
          func_0x0001000834e4(auStack_d0);
          if ((uVar5 & 1) == 0) {
            func_0x0001000834e4(auStack_a8);
          }
          else {
            puVar6 = puVar8;
            func_0x000107c61558();
            puStack_80 = puVar8;
            if (((ulong)puVar6 & 1) == 0) {
              func_0x0001031ddc9c(0,*(long *)(puVar8 + 0x10) + 1,1);
            }
            uVar5 = *(ulong *)(puStack_80 + 0x10);
            if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar5) {
              func_0x0001031ddc9c(1 < *(ulong *)(puStack_80 + 0x18),uVar5 + 1,1);
            }
            puVar8 = puStack_80;
            *(ulong *)(puStack_80 + 0x10) = uVar5 + 1;
            func_0x000100d3b998(auStack_a8,puStack_80 + uVar5 * 0x28 + 0x20);
          }
          param_3 = param_3 + 0x28;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      FUN_1031dfcb4(puVar8);
      func_0x000107c61574(puVar8);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1031dff8c; end: 1031dff93;  */

void FUN_1031dff8c(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_d0 [24];
  ulong uStack_b8;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  uVar8 = *param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    if (cVar1 != '\x01') {
      lVar11 = *(long *)(lVar9 + 0x10);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar11 != 0) {
        lVar9 = lVar9 + 0x20;
        do {
          func_0x0001031e3080(lVar9,auStack_a8);
          uVar3 = uStack_88;
          uVar2 = uStack_90;
          puVar5 = auStack_a8;
          func_0x0001000a8868(puVar5,uStack_90);
          FUN_1031dca18(auStack_d0,uVar2,uVar3,puVar5);
          uVar6 = uStack_b8;
          func_0x0001000a8868(auStack_d0,uStack_b8);
          func_0x0001014f49b4(uVar6,uVar8);
          func_0x0001000834e4(auStack_d0);
          if ((uVar6 & 1) == 0) {
            func_0x0001000834e4(auStack_a8);
          }
          else {
            puVar7 = puVar10;
            func_0x000107c61558();
            puStack_80 = puVar10;
            if (((ulong)puVar7 & 1) == 0) {
              func_0x0001031ddc9c(0,*(long *)(puVar10 + 0x10) + 1,1);
            }
            uVar6 = *(ulong *)(puStack_80 + 0x10);
            if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar6) {
              func_0x0001031ddc9c(1 < *(ulong *)(puStack_80 + 0x18),uVar6 + 1,1);
            }
            puVar10 = puStack_80;
            *(ulong *)(puStack_80 + 0x10) = uVar6 + 1;
            func_0x000100d3b998(auStack_a8,puStack_80 + uVar6 * 0x28 + 0x20);
          }
          lVar9 = lVar9 + 0x28;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      FUN_1031dfcb4(puVar10);
      func_0x000107c61574(puVar10);
    }
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 1031dff94; end: 1031e05b3;  */

undefined8 FUN_1031dff94(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar12 = *(long *)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    param_1 = param_1 + 0x20;
    do {
      func_0x0001031e3080(param_1,auStack_88);
      uVar10 = uStack_68;
      uVar5 = uStack_70;
      puVar2 = auStack_88;
      func_0x0001000a8868(puVar2,uStack_70);
      lVar3 = param_2;
      FUN_1031dcb00(param_2,uVar5,uVar10,puVar2);
      if (lVar3 == 0) {
        func_0x0001000834e4(auStack_88);
      }
      else {
        puStack_90 = puVar9;
        func_0x000107c6157c();
        ppuVar4 = &puStack_90;
        func_0x0001006c71a4(&puStack_90);
        uVar5 = 0x1031e0194;
        func_0x00010487de38(0x1031e0194,0);
        func_0x000107c61578(lVar3,2);
        func_0x000107c61574(ppuVar4);
        func_0x0001000834e4(auStack_88);
        puVar7 = puVar8;
        func_0x000107c61550();
        if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
           (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar6 = puVar8;
            }
            func_0x000107c60480(puVar6);
          }
          puVar7 = (undefined *)0x0;
          FUN_1031e1d50(0,puVar6 + 1,1,puVar8);
        }
        uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar11 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_1031e1d50(puVar8,uVar1 + 1,1,puVar7);
          uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
        *(undefined8 *)(uVar11 + uVar1 * 8 + 0x20) = uVar5;
      }
      param_1 = param_1 + 0x28;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  func_0x0001000285a8(0x112f4b300,&UNK_10db9a7d8);
  puVar9 = puVar8;
  func_0x000100b658a4(puVar8);
  func_0x000107c6142c(puVar8);
  uVar5 = 0x112f4b4d8;
  func_0x0001000285a8(0x112f4b4d8,&UNK_10db9a950);
  uVar10 = 0x1031e02c4;
  func_0x0001000bfde0(0x1031e02c4,0,uVar5);
  func_0x000107c61574(puVar9);
  return uVar10;
}



/* Entry: 1031e05b4; end: 1031e075b;  */

/* WARNING: Possible PIC construction at 0x0001031e067c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e0724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031e0680) */
/* WARNING: Removing unreachable block (ram,0x0001031e0728) */

void FUN_1031e05b4(void)

{
  code *pcVar1;
  char *pcVar2;
  long lVar3;
  long unaff_x20;
  
  if ((*(long *)(unaff_x20 + 0x68) != 0) && (lVar3 = *(long *)(unaff_x20 + 0x60), lVar3 != 0)) {
    func_0x000107c61434(*(long *)(unaff_x20 + 0x68));
    func_0x000107c6157c(lVar3);
    func_0x0001031de33c();
    pcVar1 = FUN_1031e0c54;
    func_0x0001000bfde0(FUN_1031e0c54,0,&UNK_11076a640);
    func_0x000107c61574(lVar3);
    FUN_1031e2f20();
    func_0x0001000c2068();
    func_0x000107c61574(pcVar1);
    pcVar2 = "startIfReady()";
    func_0x0001000c10c0("startIfReady()");
    func_0x000107c61180();
    func_0x0001006c733c(lVar3);
    func_0x000107c615f0(pcVar2);
    func_0x000100471e0c();
    func_0x000107c61574(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar2);
    return;
  }
  return;
}



/* Entry: 1031e075c; end: 1031e0aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031e075c(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined *apuStack_b8 [3];
  ulong uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lVar12 = *(long *)(param_2 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    param_2 = param_2 + 0x20;
    do {
      func_0x0001031e3080(param_2,auStack_90);
      lVar10 = lStack_70;
      lVar3 = lStack_78;
      func_0x0001000a8868(auStack_90,lStack_78);
      (**(code **)(lVar10 + 0x30))(lVar3,lVar10);
      if (((uint)lVar3 & 0xff) == (param_3 & 0xff)) {
        puVar4 = puVar11;
        func_0x000107c61558();
        apuStack_b8[0] = puVar11;
        if (((ulong)puVar4 & 1) == 0) {
          FUN_1031ddc60(0,*(long *)(puVar11 + 0x10) + 1,1);
        }
        uVar5 = *(ulong *)(apuStack_b8[0] + 0x10);
        if (*(ulong *)(apuStack_b8[0] + 0x18) >> 1 <= uVar5) {
          FUN_1031ddc60(1 < *(ulong *)(apuStack_b8[0] + 0x18),uVar5 + 1,1);
        }
        puVar11 = apuStack_b8[0];
        *(ulong *)(apuStack_b8[0] + 0x10) = uVar5 + 1;
        func_0x000100d3b998(auStack_90,apuStack_b8[0] + uVar5 * 0x28 + 0x20);
      }
      else {
        func_0x0001000834e4(auStack_90);
      }
      param_2 = param_2 + 0x28;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (*(long *)(puVar11 + 0x10) == 0) {
    func_0x000107c61574(puVar11);
LAB_1031e08e0:
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  func_0x0001031e3080(puVar11 + 0x20,apuStack_b8);
  func_0x000107c61574(puVar11);
  func_0x000100d3b998(apuStack_b8,auStack_90);
  lVar3 = lStack_70;
  lVar12 = lStack_78;
  func_0x0001000a8868(auStack_90,lStack_78);
  (**(code **)(lVar3 + 0x28))(lVar12,lVar3);
  lVar10 = lStack_70;
  lVar3 = lStack_78;
  if (((uint)lVar12 & 0xff) == 2) {
    func_0x0001000834e4(auStack_90);
    goto LAB_1031e08e0;
  }
  func_0x0001000a8868(auStack_90,lStack_78);
  (**(code **)(lVar10 + 0x38))(lVar3,lVar10);
  lVar12 = *(long *)(lVar3 + 0x10);
  if (lVar12 != 0) {
    lVar10 = lVar3 + 0x20;
    do {
      func_0x0001031e3080(lVar10,apuStack_b8);
      func_0x000100d3b998(apuStack_b8,auStack_e0);
      uVar1 = uStack_c8;
      func_0x0001000a8868(auStack_e0,uStack_c8);
      func_0x00010125e974(auStack_68,uVar1);
      func_0x0001000834e4(auStack_e0);
      lVar10 = lVar10 + 0x28;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  func_0x000107c6142c(lVar3);
  func_0x0001000d224c(apuStack_b8);
  if (uStack_a0 == 0) {
    func_0x0001031e3000(apuStack_b8,0x112f4b318,&UNK_10db9a7f0);
LAB_1031e09e0:
    iVar2 = (int)*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130778f0);
    func_0x000108437d74();
    if (iVar2 == 0) {
      puVar9 = auStack_90;
      func_0x0001000a8868(puVar9,lStack_78);
      FUN_1031de1ac();
      func_0x0001031dcea4(param_1);
      func_0x000107c61170(puVar9);
      goto LAB_1031e0ac8;
    }
  }
  else {
    func_0x0001000a8868(apuStack_b8,uStack_a0);
    uVar5 = uStack_a0;
    (**(code **)(lStack_98 + 0x10))(uStack_a0,lStack_98);
    func_0x0001000834e4(apuStack_b8);
    if ((uVar5 & 1) == 0) goto LAB_1031e09e0;
  }
  puVar9 = auStack_90;
  func_0x0001000a8868(puVar9,lStack_78);
  FUN_1031de1ac();
  puVar6 = puVar9;
  FUN_1031de468();
  puVar7 = puVar6;
  func_0x0001031de33c();
  puVar8 = puVar7;
  func_0x0001031de29c();
  func_0x0001031dcfd4(param_1,puVar9,&PTR_DAT_1106206a0,puVar6,puVar7,puVar8,lStack_78,lStack_70);
  func_0x000107c61170(puVar9);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
LAB_1031e0ac8:
  func_0x0001000834e4(auStack_90);
  return;
}



/* Entry: 1031e0af0; end: 1031e0c53;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031e0af0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong auStack_68 [5];
  
  lVar6 = *(long *)(*param_1 + _DAT_11307abc8);
  func_0x000103b93c34();
  if (*(long *)(lVar6 + 0x10) == 0) {
    auStack_68[2] = 0;
    auStack_68[1] = 0;
    auStack_68[4] = 0;
    auStack_68[3] = 0;
  }
  else {
    lVar1 = *param_1;
    uVar4 = param_1[1];
    func_0x000107c61434(uVar4);
    func_0x000107c61434(lVar6);
    uVar5 = uVar4;
    func_0x000100029284(lVar1);
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(lVar6);
      auStack_68[2] = 0;
      auStack_68[1] = 0;
      auStack_68[4] = 0;
      auStack_68[3] = 0;
      func_0x000107c6142c(uVar4);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar1 * 0x20,auStack_68 + 1);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(lVar6);
      if (auStack_68[4] != 0) {
        uVar2 = 0;
        func_0x0001031e3040(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar3 = auStack_68;
        func_0x000107c6147c(puVar3,auStack_68 + 1,PTR___sypN_11034f1a8 + 8,uVar2,6);
        if (((ulong)puVar3 & 1) != 0) {
          uVar4 = auStack_68[0];
          func_0x000107c3ebcc();
          func_0x000107c61170(auStack_68[0]);
          if ((uVar4 & 1) != 0) {
            return;
          }
        }
        goto LAB_1031e0c14;
      }
    }
  }
  func_0x0001031e3000(auStack_68 + 1,0x112d387f8,&UNK_10d902650);
LAB_1031e0c14:
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar2);
  (**(code **)(lVar6 + 0x10))(param_3,uVar2,lVar6);
  return;
}



/* Entry: 1031e0c54; end: 1031e109b;  */

void FUN_1031e0c54(undefined1 *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long **pplVar9;
  undefined8 uVar10;
  long **pplVar11;
  long **pplVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 uVar16;
  long *plStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plVar8;
  
  pplVar9 = &plStack_c0;
  pplVar11 = &plStack_c0;
  pplVar12 = &plStack_c0;
  uVar14 = 0;
  lVar15 = *param_2;
  func_0x000103b93d40();
  lStack_b0 = *param_2;
  lVar1 = param_2[1];
  lStack_a8 = lVar1;
  func_0x000107c61438(lVar1,2);
  plVar5 = &lStack_b0;
  func_0x000107c6061c(plVar5,PTR___sSSN_11034da80);
  lVar6 = lVar15;
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(plVar5);
  if (lVar6 == 0) {
    func_0x000107c6142c(lVar1);
    lStack_a8 = 0;
    lStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c60234(&lStack_b0,lVar6);
    func_0x000107c615e8(lVar6);
    func_0x000107c6142c(lVar1);
  }
  puVar2 = PTR___sypN_11034f1a8;
  lStack_88 = lStack_a8;
  lStack_90 = lStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    pplVar9 = (long **)&lStack_90;
    func_0x0001031e3000(pplVar9,0x112d387f8,&UNK_10d902650);
LAB_1031e0d80:
    plVar5 = (long *)pplVar9;
    uVar3 = 2;
  }
  else {
    uVar7 = 0;
    func_0x0001031e3040(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c6147c(&plStack_c0,&lStack_90,puVar2 + 8,uVar7,6);
    plVar5 = plStack_c0;
    if (((ulong)pplVar9 & 1) == 0) goto LAB_1031e0d80;
    plVar8 = plStack_c0;
    func_0x000107c3ebcc();
    uVar3 = SUB81(plVar8,0);
    func_0x000107c61170();
  }
  func_0x000103b93d78();
  lStack_b0 = *plVar5;
  lVar1 = plVar5[1];
  lStack_a8 = lVar1;
  func_0x000107c61438(lVar1,2);
  plVar5 = &lStack_b0;
  func_0x000107c6061c(plVar5,PTR___sSSN_11034da80);
  lVar6 = lVar15;
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(plVar5);
  if (lVar6 == 0) {
    func_0x000107c6142c(lVar1);
    lStack_a8 = 0;
    lStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c60234(&lStack_b0,lVar6);
    func_0x000107c615e8(lVar6);
    func_0x000107c6142c(lVar1);
  }
  lStack_88 = lStack_a8;
  lStack_90 = lStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    pplVar11 = (long **)&lStack_90;
    func_0x0001031e3000(pplVar11,0x112d387f8,&UNK_10d902650);
LAB_1031e0e80:
    plVar5 = (long *)pplVar11;
    uVar16 = 1;
    uVar7 = 0;
  }
  else {
    uVar10 = 0;
    uVar7 = uStack_a0;
    func_0x0001031e3040(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c6147c(&plStack_c0,&lStack_90,puVar2 + 8,uVar10,6);
    plVar5 = plStack_c0;
    if (((ulong)pplVar11 & 1) == 0) goto LAB_1031e0e80;
    func_0x000107c4223c(plStack_c0);
    func_0x000107c61170();
    uVar16 = 0;
  }
  func_0x000103b93db0();
  lStack_90 = *plVar5;
  lVar1 = plVar5[1];
  lStack_88 = lVar1;
  func_0x000107c61438(lVar1,2);
  plVar5 = &lStack_90;
  func_0x000107c6061c(plVar5,PTR___sSSN_11034da80);
  lVar6 = lVar15;
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(plVar5);
  if (lVar6 == 0) {
    func_0x000107c6142c(lVar1);
    lStack_a8 = 0;
    lStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c60234(&lStack_b0,lVar6);
    func_0x000107c615e8(lVar6);
    func_0x000107c6142c(lVar1);
  }
  lStack_88 = lStack_a8;
  lStack_90 = lStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    pplVar12 = (long **)&lStack_90;
    func_0x0001031e3000(pplVar12,0x112d387f8,&UNK_10d902650);
    plVar5 = (long *)0x0;
    uVar10 = 0;
  }
  else {
    func_0x000107c6147c(&plStack_c0,&lStack_90,puVar2 + 8,PTR___sSSN_11034da80,6);
    plVar5 = plStack_c0;
    uVar10 = uStack_b8;
    if ((int)pplVar12 == 0) {
      plVar5 = (long *)0x0;
      uVar10 = 0;
    }
  }
  func_0x000103b93078();
  lStack_b0 = (long)*pplVar12;
  lVar1 = (long)pplVar12[1];
  lStack_a8 = lVar1;
  func_0x000107c61438(lVar1,2);
  plVar8 = &lStack_b0;
  func_0x000107c6061c(plVar8,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(plVar8);
  if (lVar15 == 0) {
    func_0x000107c6142c(lVar1);
    lStack_a8 = 0;
    lStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c60234(&lStack_b0,lVar15);
    func_0x000107c615e8(lVar15);
    func_0x000107c6142c(lVar1);
  }
  lStack_88 = lStack_a8;
  lStack_90 = lStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x0001031e3000(&lStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar13 = 0;
    func_0x0001031e3040(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c6147c(&plStack_c0,&lStack_90,puVar2 + 8,uVar13,6);
    if ((uVar14 & 1) != 0) {
      plVar8 = plStack_c0;
      func_0x000107c3ebcc();
      uVar4 = SUB81(plVar8,0);
      func_0x000107c61170(plStack_c0);
      goto LAB_1031e1064;
    }
  }
  uVar4 = 2;
LAB_1031e1064:
  *param_1 = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar7;
  param_1[0x10] = uVar16;
  *(long **)(param_1 + 0x18) = plVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  param_1[0x28] = uVar4;
  return;
}



/* Entry: 1031e109c; end: 1031e129b;  */

void FUN_1031e109c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [40];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [48];
  
  lVar9 = *(long *)(param_3 + 0x10);
  if (lVar9 != 0) {
    lVar10 = 0;
    lVar11 = *(long *)(param_1 + 0x10);
    do {
      func_0x0001031e3080(param_3 + 0x20 + lVar10 * 0x28,auStack_90);
      func_0x000100d3b998(auStack_90,auStack_b8);
      lVar5 = lStack_98;
      uVar4 = uStack_a0;
      func_0x0001000a8868();
      lVar1 = param_1 + 0x20;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      for (lVar3 = lVar11; lVar3 != 0; lVar3 = lVar3 + -1) {
        func_0x0001031e2fb0(lVar1,&uStack_e0);
        uStack_128 = uStack_d8;
        uStack_130 = uStack_e0;
        lStack_118 = lStack_c8;
        uStack_120 = uStack_d0;
        uStack_110 = uStack_c0;
        if (lStack_c8 == 0) {
          func_0x0001031e3000(&uStack_130,0x112f4b310,&UNK_10db9fef0);
        }
        else {
          func_0x000100d3b998(&uStack_130,auStack_108);
          puVar6 = puVar8;
          func_0x000107c61558();
          puVar7 = puVar8;
          if (((ulong)puVar6 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            FUN_1031e1e78(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8,0x112f4b4c8,&UNK_10db9a940,
                          0x112f4b210,&UNK_10dcf9f80);
          }
          uVar2 = *(ulong *)(puVar7 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            FUN_1031e1e78(puVar8,uVar2 + 1,1,puVar7,0x112f4b4c8,&UNK_10db9a940,0x112f4b210,
                          &UNK_10dcf9f80);
          }
          *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
          func_0x000100d3b998(auStack_108,puVar8 + uVar2 * 0x28 + 0x20);
        }
        lVar1 = lVar1 + 0x28;
      }
      lVar10 = lVar10 + 1;
      (**(code **)(lVar5 + 8))(puVar8,param_2,uVar4,lVar5);
      func_0x000107c6142c(puVar8);
      func_0x0001000834e4(auStack_b8);
    } while (lVar10 != lVar9);
  }
  return;
}



/* Entry: 1031e129c; end: 1031e1367;  */

void FUN_1031e129c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1031e1368; end: 1031e1387;  */

void FUN_1031e1368(void)

{
  func_0x0001031de790();
  return;
}



/* Entry: 1031e1388; end: 1031e138f;  */

undefined8 FUN_1031e1388(void)

{
  return 0;
}



/* Entry: 1031e1390; end: 1031e13af;  */

void FUN_1031e1390(void)

{
  func_0x000107c61168(&PTR_PTR_112f4b368);
  return;
}



/* Entry: 1031e13b0; end: 1031e17d3;  */

/* WARNING: Possible PIC construction at 0x0001031e140c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e1734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e1bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e1578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e15d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e1724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e16f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031e1728) */
/* WARNING: Removing unreachable block (ram,0x0001031e15d8) */
/* WARNING: Removing unreachable block (ram,0x0001031e157c) */
/* WARNING: Removing unreachable block (ram,0x0001031e16fc) */
/* WARNING: Removing unreachable block (ram,0x0001031e1700) */
/* WARNING: Removing unreachable block (ram,0x0001031e15b0) */
/* WARNING: Removing unreachable block (ram,0x0001031e1bb0) */
/* WARNING: Removing unreachable block (ram,0x0001031e1410) */
/* WARNING: Removing unreachable block (ram,0x0001031e151c) */
/* WARNING: Removing unreachable block (ram,0x0001031e1524) */
/* WARNING: Removing unreachable block (ram,0x0001031e16f0) */
/* WARNING: Removing unreachable block (ram,0x0001031e1560) */
/* WARNING: Removing unreachable block (ram,0x0001031e1434) */
/* WARNING: Removing unreachable block (ram,0x0001031e15dc) */
/* WARNING: Removing unreachable block (ram,0x0001031e15e8) */
/* WARNING: Removing unreachable block (ram,0x0001031e1770) */
/* WARNING: Removing unreachable block (ram,0x0001031e1774) */
/* WARNING: Removing unreachable block (ram,0x0001031e15f4) */
/* WARNING: Removing unreachable block (ram,0x0001031e1794) */
/* WARNING: Removing unreachable block (ram,0x0001031e1b78) */
/* WARNING: Removing unreachable block (ram,0x0001031e1b98) */
/* WARNING: Removing unreachable block (ram,0x0001031e1b84) */
/* WARNING: Removing unreachable block (ram,0x0001031e1b94) */
/* WARNING: Removing unreachable block (ram,0x0001031e1b8c) */
/* WARNING: Removing unreachable block (ram,0x0001031e1bc0) */
/* WARNING: Removing unreachable block (ram,0x0001031e1b90) */
/* WARNING: Removing unreachable block (ram,0x0001031e1600) */
/* WARNING: Removing unreachable block (ram,0x0001031e1758) */
/* WARNING: Removing unreachable block (ram,0x0001031e163c) */
/* WARNING: Removing unreachable block (ram,0x0001031e17c0) */
/* WARNING: Removing unreachable block (ram,0x0001031e164c) */
/* WARNING: Removing unreachable block (ram,0x0001031e17cc) */
/* WARNING: Removing unreachable block (ram,0x0001031e1650) */
/* WARNING: Removing unreachable block (ram,0x0001031e17d0) */
/* WARNING: Removing unreachable block (ram,0x0001031e165c) */
/* WARNING: Removing unreachable block (ram,0x0001031e1668) */
/* WARNING: Removing unreachable block (ram,0x0001031e1438) */
/* WARNING: Removing unreachable block (ram,0x0001031e16d8) */
/* WARNING: Removing unreachable block (ram,0x0001031e1474) */
/* WARNING: Removing unreachable block (ram,0x0001031e16f8) */
/* WARNING: Removing unreachable block (ram,0x0001031e1730) */
/* WARNING: Removing unreachable block (ram,0x0001031e1734) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1031e13b0(void)

{
  undefined8 in_x5;
  long in_x6;
  
  (**(code **)(in_x6 + 0x48))(in_x5);
  if (2 < in_x6 - 1U) {
    if (in_x6 == 0) {
      return;
    }
    FUN_1031e17d4();
  }
  if (2 < in_x6 - 1U) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x6);
    return;
  }
  return;
}



/* Entry: 1031e17d4; end: 1031e1873;  */

/* WARNING: Possible PIC construction at 0x0001031e182c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031e1830) */
/* WARNING: Removing unreachable block (ram,0x0001031e184c) */
/* WARNING: Removing unreachable block (ram,0x0001031e1860) */

void FUN_1031e17d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c409d8(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031e1874; end: 1031e19b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031e1874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_1130778e8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4b458);
  func_0x000107c61428(lVar2 + _DAT_1130778e8,auStack_58,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x0001031e1920(param_3,param_4);
    func_0x000107c4dea8(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1031e19b4; end: 1031e1a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031e19b4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f4b468);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112f4b458) + _DAT_1130778f0);
      func_0x000107c52060();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      func_0x000107c40578(lVar1);
      func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1031e1a6c; end: 1031e1acb; -[_TtC20SCContextOperaChromeP33_1BAFB8F1EFE8FC8DAEB4E5BB7524E9A827OperaChromeRendererDelegate init] */

void FUN_1031e1a6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextOperaChrome.OperaChromeRendererDelegate",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e1a98);
  (*pcVar1)();
}



/* Entry: 1031e1acc; end: 1031e1b23; -[_TtC20SCContextOperaChromeP33_1BAFB8F1EFE8FC8DAEB4E5BB7524E9A827OperaChromeRendererDelegate .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031e1ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e1b08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031e1aec) */
/* WARNING: Removing unreachable block (ram,0x0001031e1b0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031e1acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4b458));
  return;
}



/* Entry: 1031e1b24; end: 1031e1b43;  */

void FUN_1031e1b24(void)

{
  func_0x000107c61168(&PTR_PTR_1128c23d0);
  return;
}



/* Entry: 1031e1b44; end: 1031e1b77;  */

undefined1  [16] FUN_1031e1b44(void)

{
  return ZEXT816(0x110620688);
}



/* Entry: 1031e1b78; end: 1031e1c43;  */

/* WARNING: Possible PIC construction at 0x0001031e1bac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031e1bb0) */

void FUN_1031e1b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 != '\x02') && (param_2 = param_1, param_4 != '\x01')) {
    if (param_4 != '\0') {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1031e1c44; end: 1031e1d4f;  */

void FUN_1031e1c44(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1031e2e88();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112f4b2f0;
      func_0x0001000285a8(0x112f4b2f0,&UNK_10db9a7c8);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_1031e20e0(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_1031e2700(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1031e1d50; end: 1031e1e77;  */

ulong FUN_1031e1d50(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e1e78);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x0001031e1bc4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e1e74);
      (*pcVar1)();
    }
    func_0x0001031e1fbc(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1031e1e78; end: 1031e20df;  */

undefined *
FUN_1031e1e78(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1031e1fbc);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar4 = param_5;
    func_0x000107c610a4();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    func_0x000107c6140c(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x28 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar2,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1031e20e0; end: 1031e26ff;  */

void FUN_1031e20e0(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x21;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  long lStack_70;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_3[1];
  if (0 < lVar18) {
    lVar10 = 0;
    do {
      lVar24 = lVar10 + 1;
      if (lVar24 < lVar18) {
        lVar12 = *param_3;
        func_0x0001031e3080(lVar12 + lVar24 * 0x28,auStack_90);
        lVar19 = lVar10 * 0x28;
        lVar12 = lVar12 + lVar19;
        func_0x0001031e3080(lVar12,auStack_b8);
        lVar24 = lStack_70;
        uVar3 = uStack_78;
        func_0x0001000a8868(auStack_90,uStack_78);
        (**(code **)(lVar24 + 0x28))(uVar3,lVar24);
        lVar24 = lStack_98;
        uVar17 = uStack_a0;
        lVar7 = *(long *)(&UNK_10db9a998 + (uVar3 & 0xff) * 8);
        func_0x0001000a8868(auStack_b8,uStack_a0);
        (**(code **)(lVar24 + 0x28))(uVar17,lVar24);
        lVar8 = *(long *)(&UNK_10db9a998 + (uVar17 & 0xff) * 8);
        func_0x0001000834e4(auStack_b8);
        func_0x0001000834e4(auStack_90);
        lVar12 = lVar12 + 0x50;
        lVar20 = lVar10 + 2;
        lVar16 = 0;
        lVar11 = lVar19;
        do {
          lVar13 = lVar16;
          lVar24 = lVar20;
          lVar11 = lVar11 + 0x28;
          if (lVar18 <= lVar24) break;
          func_0x0001031e3080(lVar12,auStack_90);
          func_0x0001031e3080(lVar12 + -0x28,auStack_b8);
          lVar20 = lStack_70;
          uVar3 = uStack_78;
          func_0x0001000a8868(auStack_90,uStack_78);
          (**(code **)(lVar20 + 0x28))(uVar3,lVar20);
          lVar20 = lStack_98;
          uVar17 = uStack_a0;
          lVar23 = *(long *)(&UNK_10db9a998 + (uVar3 & 0xff) * 8);
          func_0x0001000a8868(auStack_b8,uStack_a0);
          (**(code **)(lVar20 + 0x28))(uVar17,lVar20);
          lVar14 = *(long *)(&UNK_10db9a998 + (uVar17 & 0xff) * 8);
          func_0x0001000834e4(auStack_b8);
          func_0x0001000834e4(auStack_90);
          lVar12 = lVar12 + 0x28;
          lVar20 = lVar24 + 1;
          lVar16 = lVar13 + 1;
        } while (lVar8 < lVar7 != lVar23 <= lVar14);
        if (lVar8 < lVar7) {
          if (lVar24 < lVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e26d4);
            (*pcVar1)();
          }
          if (lVar10 < lVar24) {
            lVar18 = 0;
            lVar12 = *param_3;
            puVar15 = (undefined8 *)(lVar12 + lVar11);
            puVar21 = (undefined8 *)(lVar12 + lVar19);
            do {
              if (lVar10 + lVar18 != lVar10 + lVar13 + 1) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e26f4);
                  (*pcVar1)();
                }
                func_0x000100d3b998(puVar21,auStack_90);
                uVar9 = puVar15[4];
                uVar27 = *puVar15;
                uVar26 = puVar15[3];
                uVar25 = puVar15[2];
                puVar21[1] = puVar15[1];
                *puVar21 = uVar27;
                puVar21[3] = uVar26;
                puVar21[2] = uVar25;
                puVar21[4] = uVar9;
                func_0x000100d3b998(auStack_90,puVar15);
              }
              lVar13 = lVar13 + -1;
              lVar18 = lVar18 + 1;
              puVar15 = puVar15 + -5;
              puVar21 = puVar21 + 5;
            } while (lVar18 + lVar10 < lVar10 + lVar13 + 2);
          }
        }
      }
      lVar18 = param_3[1];
      lVar12 = lVar24;
      if (lVar24 < lVar18) {
        if (SBORROW8(lVar24,lVar10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e26d0);
          (*pcVar1)();
        }
        if (lVar24 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e26d8);
            (*pcVar1)();
          }
          lVar11 = lVar10 + param_4;
          if (lVar18 <= lVar10 + param_4) {
            lVar11 = lVar18;
          }
          if (lVar11 < lVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e26dc);
            (*pcVar1)();
          }
          if (lVar24 != lVar11) {
            lVar16 = *param_3;
            puVar21 = (undefined8 *)(lVar16 + lVar24 * 0x28);
            lVar18 = lVar10 - lVar24;
            puVar15 = puVar21;
            lVar20 = lVar18;
LAB_1031e2428:
            do {
              func_0x0001031e3080(puVar21,auStack_90);
              puVar22 = puVar21 + -5;
              func_0x0001031e3080(puVar22,auStack_b8);
              lVar12 = lStack_70;
              uVar3 = uStack_78;
              func_0x0001000a8868(auStack_90,uStack_78);
              (**(code **)(lVar12 + 0x28))(uVar3,lVar12);
              lVar12 = lStack_98;
              uVar17 = uStack_a0;
              lVar7 = *(long *)(&UNK_10db9a998 + (uVar3 & 0xff) * 8);
              func_0x0001000a8868(auStack_b8,uStack_a0);
              (**(code **)(lVar12 + 0x28))(uVar17,lVar12);
              lVar12 = *(long *)(&UNK_10db9a998 + (uVar17 & 0xff) * 8);
              func_0x0001000834e4(auStack_b8);
              func_0x0001000834e4(auStack_90);
              if (lVar12 < lVar7) {
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e26e0);
                  (*pcVar1)();
                }
                func_0x000100d3b998(puVar21,auStack_90);
                puVar21[1] = puVar21[-4];
                *puVar21 = *puVar22;
                puVar21[3] = puVar21[-2];
                puVar21[2] = puVar21[-3];
                puVar21[4] = puVar21[-1];
                func_0x000100d3b998(auStack_90,puVar22);
                bVar2 = lVar18 != -1;
                lVar18 = lVar18 + 1;
                puVar21 = puVar22;
                if (bVar2) goto LAB_1031e2428;
              }
              lVar24 = lVar24 + 1;
              puVar21 = puVar15 + 5;
              lVar18 = lVar20 + -1;
              lVar12 = lVar11;
              puVar15 = puVar21;
              lVar20 = lVar18;
            } while (lVar24 != lVar11);
          }
        }
      }
      puVar6 = puStack_58;
      if (lVar12 < lVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e26c4);
        (*pcVar1)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar17 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar17) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar17 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar17 + 1;
      *(long *)(puVar6 + uVar17 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar6 + uVar17 * 0x10 + 0x28) = lVar12;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e26f8);
        (*pcVar1)();
      }
      FUN_1031e2860(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1031e2694;
      lVar18 = param_3[1];
      lVar10 = lVar12;
    } while (lVar12 < lVar18);
  }
  puVar6 = puStack_58;
  lVar18 = *param_1;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e2700);
    (*pcVar1)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar17 = *(ulong *)(puVar6 + 0x10);
  while (puStack_58 = puVar6, 1 < uVar17) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e26fc);
      (*pcVar1)();
    }
    lVar12 = uVar17 - 1;
    lVar11 = *(long *)(puVar6 + uVar17 * 0x10);
    lVar24 = *(long *)(puVar6 + lVar12 * 0x10 + 0x28);
    FUN_1031e2ad0(lVar10 + lVar11 * 0x28,lVar10 + *(long *)(puVar6 + lVar12 * 0x10 + 0x20) * 0x28,
                  lVar10 + lVar24 * 0x28,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar24 < lVar11) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e26c8);
      (*pcVar1)();
    }
    puVar4 = puVar6;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar17 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e26cc);
      (*pcVar1)();
    }
    *(long *)(puVar6 + uVar17 * 0x10) = lVar11;
    *(long *)((long)(puVar6 + uVar17 * 0x10) + 8) = lVar24;
    puStack_58 = puVar6;
    func_0x0001000a97cc(lVar12);
    puVar6 = puStack_58;
    uVar17 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1031e2694:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1031e2700; end: 1031e285f;  */

void FUN_1031e2700(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auStack_b0 [24];
  ulong uStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  if (param_3 != param_2) {
    lVar11 = *param_4;
    puVar8 = (undefined8 *)(lVar11 + param_3 * 0x28);
    param_1 = param_1 - param_3;
    puVar9 = puVar8;
    lVar7 = param_1;
LAB_1031e2794:
    do {
      func_0x0001031e3080(puVar8,auStack_88);
      puVar10 = puVar8 + -5;
      func_0x0001031e3080(puVar10,auStack_b0);
      lVar6 = lStack_68;
      uVar3 = uStack_70;
      func_0x0001000a8868(auStack_88,uStack_70);
      (**(code **)(lVar6 + 0x28))(uVar3,lVar6);
      lVar6 = lStack_90;
      uVar4 = uStack_98;
      lVar5 = *(long *)(&UNK_10db9a998 + (uVar3 & 0xff) * 8);
      func_0x0001000a8868(auStack_b0,uStack_98);
      (**(code **)(lVar6 + 0x28))(uVar4,lVar6);
      lVar6 = *(long *)(&UNK_10db9a998 + (uVar4 & 0xff) * 8);
      func_0x0001000834e4(auStack_b0);
      func_0x0001000834e4(auStack_88);
      if (lVar6 < lVar5) {
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e2860);
          (*pcVar1)();
        }
        func_0x000100d3b998(puVar8,auStack_88);
        puVar8[1] = puVar8[-4];
        *puVar8 = *puVar10;
        puVar8[3] = puVar8[-2];
        puVar8[2] = puVar8[-3];
        puVar8[4] = puVar8[-1];
        func_0x000100d3b998(auStack_88,puVar10);
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        puVar8 = puVar10;
        if (bVar2) goto LAB_1031e2794;
      }
      param_3 = param_3 + 1;
      puVar8 = puVar9 + 5;
      param_1 = lVar7 + -1;
      puVar9 = puVar8;
      lVar7 = param_1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1031e2860; end: 1031e2acf;  */

undefined8 FUN_1031e2860(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1031e2938;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2ab8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1031e299c:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2aa8);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2ab0);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2a90);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2a94);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2a9c);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2aa4);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1031e2938:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2a98);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2aa0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2aac);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2ab4);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1031e299c;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2abc);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2a84);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2ad0);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1031e2ad0(lVar9 + lVar12 * 0x28,lVar9 + *plVar1 * 0x28,lVar9 + lVar7 * 0x28,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2a88);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1031e2a8c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1031e2ad0; end: 1031e2e87;  */

undefined8
FUN_1031e2ad0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_b0 [24];
  ulong uStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  lVar7 = ((long)param_2 - (long)param_1) / 0x28;
  lVar8 = ((long)param_3 - (long)param_2) / 0x28;
  if (lVar7 < lVar8) {
    if (((param_4 < param_1) || (param_1 + lVar7 * 5 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar7 * 0x28);
    }
    puVar5 = param_4 + lVar7 * 5;
    puVar4 = param_1;
    if (0x27 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        func_0x0001031e3080(param_2,auStack_88);
        func_0x0001031e3080(param_4,auStack_b0);
        lVar7 = lStack_68;
        uVar2 = uStack_70;
        func_0x0001000a8868(auStack_88,uStack_70);
        (**(code **)(lVar7 + 0x28))(uVar2,lVar7);
        lVar7 = lStack_90;
        uVar3 = uStack_98;
        lVar8 = *(long *)(&UNK_10db9a998 + (uVar2 & 0xff) * 8);
        func_0x0001000a8868(auStack_b0,uStack_98);
        (**(code **)(lVar7 + 0x28))(uVar3,lVar7);
        lVar7 = *(long *)(&UNK_10db9a998 + (uVar3 & 0xff) * 8);
        func_0x0001000834e4(auStack_b0);
        func_0x0001000834e4(auStack_88);
        if (lVar7 < lVar8) {
          puVar9 = param_4;
          puVar1 = param_2;
          param_2 = param_2 + 5;
        }
        else {
          puVar9 = param_4 + 5;
          puVar1 = param_4;
        }
        param_4 = puVar9;
        if (puVar4 != puVar1) {
          uVar11 = puVar1[1];
          uVar10 = *puVar1;
          uVar13 = puVar1[3];
          uVar12 = puVar1[2];
          puVar4[4] = puVar1[4];
          puVar4[1] = uVar11;
          *puVar4 = uVar10;
          puVar4[3] = uVar13;
          puVar4[2] = uVar12;
        }
        puVar4 = puVar4 + 5;
      } while (param_4 < puVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar8 * 5 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar8 * 0x28);
    }
    puVar5 = param_4 + lVar8 * 5;
    puVar4 = param_2;
    if (0x27 < (long)param_3 - (long)param_2) {
      while (puVar4 = param_2, param_1 < param_2) {
        puVar6 = param_2 + -5;
        puVar9 = param_3;
        puVar1 = puVar5;
        while( true ) {
          puVar5 = puVar1 + -5;
          param_3 = puVar9 + -5;
          func_0x0001031e3080(puVar5,auStack_88);
          func_0x0001031e3080(puVar6,auStack_b0);
          lVar7 = lStack_68;
          uVar2 = uStack_70;
          func_0x0001000a8868(auStack_88,uStack_70);
          (**(code **)(lVar7 + 0x28))(uVar2,lVar7);
          lVar7 = lStack_90;
          uVar3 = uStack_98;
          lVar8 = *(long *)(&UNK_10db9a998 + (uVar2 & 0xff) * 8);
          func_0x0001000a8868(auStack_b0,uStack_98);
          (**(code **)(lVar7 + 0x28))(uVar3,lVar7);
          lVar7 = *(long *)(&UNK_10db9a998 + (uVar3 & 0xff) * 8);
          func_0x0001000834e4(auStack_b0);
          func_0x0001000834e4(auStack_88);
          if (lVar7 < lVar8) break;
          if (puVar9 != puVar1) {
            uVar11 = puVar1[-4];
            uVar10 = *puVar5;
            uVar13 = puVar1[-2];
            uVar12 = puVar1[-3];
            puVar9[-1] = puVar1[-1];
            puVar9[-4] = uVar11;
            *param_3 = uVar10;
            puVar9[-2] = uVar13;
            puVar9[-3] = uVar12;
          }
          puVar9 = param_3;
          puVar1 = puVar5;
          if (puVar5 <= param_4) goto LAB_1031e2e20;
        }
        if (puVar9 != param_2) {
          uVar11 = param_2[-4];
          uVar10 = *puVar6;
          uVar13 = param_2[-2];
          uVar12 = param_2[-3];
          puVar9[-1] = param_2[-1];
          puVar9[-4] = uVar11;
          *param_3 = uVar10;
          puVar9[-2] = uVar13;
          puVar9[-3] = uVar12;
        }
        puVar4 = puVar6;
        puVar5 = puVar1;
        param_2 = puVar6;
        if (puVar1 <= param_4) break;
      }
    }
  }
LAB_1031e2e20:
  lVar7 = ((long)puVar5 - (long)param_4) / 0x28;
  if ((puVar4 != param_4) || (param_4 + lVar7 * 5 <= puVar4)) {
    func_0x000107c610b8(puVar4,param_4,lVar7 * 0x28);
  }
  return 1;
}



/* Entry: 1031e2e88; end: 1031e2e9b;  */

/* WARNING: Removing unreachable block (ram,0x0001031dde68) */
/* WARNING: Removing unreachable block (ram,0x0001031dde78) */
/* WARNING: Removing unreachable block (ram,0x0001031ddf7c) */
/* WARNING: Removing unreachable block (ram,0x0001031dde84) */
/* WARNING: Removing unreachable block (ram,0x0001031dde8c) */
/* WARNING: Removing unreachable block (ram,0x0001031ddf08) */
/* WARNING: Removing unreachable block (ram,0x0001031ddf14) */
/* WARNING: Removing unreachable block (ram,0x0001031ddf18) */
/* WARNING: Removing unreachable block (ram,0x0001031ddf1c) */
/* WARNING: Removing unreachable block (ram,0x0001031ddf30) */

undefined * FUN_1031e2e88(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = (undefined *)0x112f4b2e8;
  uVar4 = 0x112f4b2f0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    func_0x0001000285a8(0x112f4b2e8,&UNK_10db9a7c0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x28) * 2;
    puVar3 = puVar2;
  }
  func_0x0001000285a8(0x112f4b2f0,&UNK_10db9a7c8);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar5,uVar4);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 1031e2e9c; end: 1031e2f13;  */

void FUN_1031e2e9c(long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_4;
  uStack_38 = param_5;
  func_0x0001000c5db4(auStack_58);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))();
  lVar1 = *param_3;
  *(long *)(lVar1 + 0x10) = param_1 + 1;
  func_0x000100d3b998(auStack_58,lVar1 + param_1 * 0x28 + 0x20);
  return;
}



/* Entry: 1031e2f14; end: 1031e2f1f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031e2f14(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  ulong auStack_68 [5];
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar7 = *(long *)(*param_1 + _DAT_11307abc8);
  func_0x000103b93c34();
  if (*(long *)(lVar7 + 0x10) == 0) {
    auStack_68[2] = 0;
    auStack_68[1] = 0;
    auStack_68[4] = 0;
    auStack_68[3] = 0;
  }
  else {
    lVar1 = *param_1;
    uVar4 = param_1[1];
    func_0x000107c61434(uVar4);
    func_0x000107c61434(lVar7);
    uVar5 = uVar4;
    func_0x000100029284(lVar1);
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      auStack_68[2] = 0;
      auStack_68[1] = 0;
      auStack_68[4] = 0;
      auStack_68[3] = 0;
      func_0x000107c6142c(uVar4);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar1 * 0x20,auStack_68 + 1);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(lVar7);
      if (auStack_68[4] != 0) {
        uVar2 = 0;
        func_0x0001031e3040(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar3 = auStack_68;
        func_0x000107c6147c(puVar3,auStack_68 + 1,PTR___sypN_11034f1a8 + 8,uVar2,6);
        if (((ulong)puVar3 & 1) != 0) {
          uVar4 = auStack_68[0];
          func_0x000107c3ebcc();
          func_0x000107c61170(auStack_68[0]);
          if ((uVar4 & 1) != 0) {
            return;
          }
        }
        goto LAB_1031e0c14;
      }
    }
  }
  func_0x0001031e3000(auStack_68 + 1,0x112d387f8,&UNK_10d902650);
LAB_1031e0c14:
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar2);
  (**(code **)(lVar7 + 0x10))(uVar6,uVar2,lVar7);
  return;
}



/* Entry: 1031e2f20; end: 1031e2f5f;  */

void FUN_1031e2f20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b4c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa6a0;
  func_0x000107c61520(&UNK_10dcfa6a0,&UNK_11076a640);
  puRam0000000112f4b4c0 = puVar1;
  return;
}



/* Entry: 1031e2f60; end: 1031e2f67;  */

void FUN_1031e2f60(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [40];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [48];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(lVar9 + 0x10);
  if (lVar10 != 0) {
    lVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x10);
    do {
      func_0x0001031e3080(lVar9 + 0x20 + lVar11 * 0x28,auStack_90);
      func_0x000100d3b998(auStack_90,auStack_b8);
      lVar5 = lStack_98;
      uVar4 = uStack_a0;
      func_0x0001000a8868();
      lVar1 = param_1 + 0x20;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      for (lVar3 = lVar12; lVar3 != 0; lVar3 = lVar3 + -1) {
        func_0x0001031e2fb0(lVar1,&uStack_e0);
        uStack_128 = uStack_d8;
        uStack_130 = uStack_e0;
        lStack_118 = lStack_c8;
        uStack_120 = uStack_d0;
        uStack_110 = uStack_c0;
        if (lStack_c8 == 0) {
          func_0x0001031e3000(&uStack_130,0x112f4b310,&UNK_10db9fef0);
        }
        else {
          func_0x000100d3b998(&uStack_130,auStack_108);
          puVar6 = puVar8;
          func_0x000107c61558();
          puVar7 = puVar8;
          if (((ulong)puVar6 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            FUN_1031e1e78(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8,0x112f4b4c8,&UNK_10db9a940,
                          0x112f4b210,&UNK_10dcf9f80);
          }
          uVar2 = *(ulong *)(puVar7 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            FUN_1031e1e78(puVar8,uVar2 + 1,1,puVar7,0x112f4b4c8,&UNK_10db9a940,0x112f4b210,
                          &UNK_10dcf9f80);
          }
          *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
          func_0x000100d3b998(auStack_108,puVar8 + uVar2 * 0x28 + 0x20);
        }
        lVar1 = lVar1 + 0x28;
      }
      lVar11 = lVar11 + 1;
      (**(code **)(lVar5 + 8))(puVar8,param_2,uVar4,lVar5);
      func_0x000107c6142c(puVar8);
      func_0x0001000834e4(auStack_b8);
    } while (lVar11 != lVar10);
  }
  return;
}



/* Entry: 1031e2f68; end: 1031e30c3;  */

void FUN_1031e2f68(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uStack_48 = param_1[2];
  uStack_50 = param_1[1];
  uStack_40 = param_1[3];
  uStack_38 = (undefined1)param_1[4];
  uStack_2f = *(undefined8 *)((long)param_1 + 0x29);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_1 + 0x21);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x21) >> 0x38);
  (**(code **)(unaff_x20 + 0x10))(*param_1,&uStack_50);
  return;
}



/* Entry: 1031e30c4; end: 1031e372b;  */

void FUN_1031e30c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b4e0,&UNK_10db9a9b0);
  puVar1 = &UNK_110620800;
  func_0x000107c613fc(&UNK_110620800,0x148,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  *(undefined8 *)(puVar1 + 0x140) = param_39;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x0001000823a8(FUN_1031e372c,puVar1);
  return;
}



/* Entry: 1031e372c; end: 1031e37a7;  */

void FUN_1031e372c(void)

{
  long unaff_x20;
  
  func_0x0001031e33dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                      *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140));
  return;
}



/* Entry: 1031e37a8; end: 1031e37b7;  */

undefined1  [16] FUN_1031e37a8(void)

{
  return ZEXT816(0x110620828);
}



/* Entry: 1031e37b8; end: 1031e3bdf;  */

void FUN_1031e37b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  uVar9 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *(undefined1 *)((long)param_2 + 9);
  uVar7 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar8 = param_2[4];
  uVar4 = *(undefined1 *)(param_2 + 5);
  func_0x0001000285a8(0x112f4b4f0,&UNK_10db9aa40);
  puVar5 = &uStack_98;
  uStack_98 = uVar9;
  uStack_90 = uVar1;
  uStack_8f = uVar2;
  uStack_88 = uVar7;
  uStack_80 = uVar3;
  uStack_78 = uVar8;
  uStack_70 = uVar4;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f4b4f8,&UNK_10db9aa48);
  puVar6 = &UNK_110620870;
  func_0x000107c613fc(&UNK_110620870,0x150,7);
  *(undefined8 *)(puVar6 + 0x10) = param_30;
  *(undefined8 *)(puVar6 + 0x18) = param_9;
  *(undefined8 *)(puVar6 + 0x20) = param_11;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  *(undefined8 *)(puVar6 + 0x30) = param_17;
  *(undefined8 *)(puVar6 + 0x38) = param_14;
  *(undefined8 *)(puVar6 + 0x40) = param_36;
  *(undefined8 *)(puVar6 + 0x48) = param_33;
  *(undefined8 *)(puVar6 + 0x50) = param_23;
  *(undefined8 *)(puVar6 + 0x58) = param_40;
  *(undefined8 *)(puVar6 + 0x60) = param_18;
  *(undefined8 *)(puVar6 + 0x68) = param_13;
  *(undefined8 *)(puVar6 + 0x70) = param_3;
  *(undefined8 *)(puVar6 + 0x78) = param_7;
  *(undefined8 *)(puVar6 + 0x80) = param_22;
  *(undefined8 *)(puVar6 + 0x88) = param_16;
  *(undefined8 *)(puVar6 + 0x90) = param_5;
  *(undefined8 *)(puVar6 + 0x98) = param_26;
  *(undefined8 *)(puVar6 + 0xa0) = param_12;
  *(undefined8 *)(puVar6 + 0xa8) = param_15;
  *(undefined8 *)(puVar6 + 0xb0) = param_29;
  *(undefined8 *)(puVar6 + 0xb8) = param_25;
  *(undefined8 *)(puVar6 + 0xc0) = param_37;
  *(undefined8 *)(puVar6 + 200) = param_24;
  *(undefined8 *)(puVar6 + 0xd0) = param_19;
  *(undefined8 *)(puVar6 + 0xd8) = param_10;
  *(undefined8 *)(puVar6 + 0xe0) = param_32;
  *(undefined8 *)(puVar6 + 0xe8) = param_20;
  *(undefined8 *)(puVar6 + 0xf0) = param_27;
  *(undefined8 *)(puVar6 + 0xf8) = param_34;
  *(undefined8 *)(puVar6 + 0x100) = param_31;
  *(undefined8 *)(puVar6 + 0x108) = param_4;
  *(undefined8 *)(puVar6 + 0x110) = param_6;
  *(undefined8 *)(puVar6 + 0x118) = param_35;
  *(undefined8 *)(puVar6 + 0x120) = param_38;
  *(undefined8 *)(puVar6 + 0x128) = param_28;
  *(undefined8 *)(puVar6 + 0x130) = param_39;
  *(undefined8 *)(puVar6 + 0x138) = param_8;
  *(undefined8 *)(puVar6 + 0x140) = param_41;
  *(undefined8 *)(puVar6 + 0x148) = param_21;
  func_0x000107c6157c();
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_21);
  uVar7 = 0x1031e3dd8;
  func_0x0001000823a8(0x1031e3dd8,puVar6);
  func_0x000100082720("SCContextActionItemPlugInRegistryServiceProvider",0x30,2);
  uVar8 = uVar7;
  func_0x0001032174f0();
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCContextActionItemPlugInSaberServiceEntryPointProvider",0x37,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 1031e3be0; end: 1031e3d33;  */

void FUN_1031e3be0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031e3d34; end: 1031e3e53;  */

void FUN_1031e3d34(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031e37b8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140));
  return;
}



/* Entry: 1031e3e54; end: 1031e4883;  */

/* WARNING: Possible PIC construction at 0x0001031e4060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e40a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e40b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e40c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e40d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e40e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e40f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e4190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031e4184) */
/* WARNING: Removing unreachable block (ram,0x0001031e4174) */
/* WARNING: Removing unreachable block (ram,0x0001031e4164) */
/* WARNING: Removing unreachable block (ram,0x0001031e4154) */
/* WARNING: Removing unreachable block (ram,0x0001031e4144) */
/* WARNING: Removing unreachable block (ram,0x0001031e4134) */
/* WARNING: Removing unreachable block (ram,0x0001031e4124) */
/* WARNING: Removing unreachable block (ram,0x0001031e4114) */
/* WARNING: Removing unreachable block (ram,0x0001031e4104) */
/* WARNING: Removing unreachable block (ram,0x0001031e40f4) */
/* WARNING: Removing unreachable block (ram,0x0001031e40e4) */
/* WARNING: Removing unreachable block (ram,0x0001031e40d4) */
/* WARNING: Removing unreachable block (ram,0x0001031e40c4) */
/* WARNING: Removing unreachable block (ram,0x0001031e40b4) */
/* WARNING: Removing unreachable block (ram,0x0001031e40a4) */
/* WARNING: Removing unreachable block (ram,0x0001031e4094) */
/* WARNING: Removing unreachable block (ram,0x0001031e4084) */
/* WARNING: Removing unreachable block (ram,0x0001031e4074) */
/* WARNING: Removing unreachable block (ram,0x0001031e4064) */
/* WARNING: Removing unreachable block (ram,0x0001031e4194) */

void FUN_1031e3e54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110620898;
  func_0x000107c613fc(&UNK_110620898,0x150,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  uVar2 = 0x112f4b500;
  func_0x0001000285a8(0x112f4b500,&UNK_10db9aaa8);
  func_0x000107c613fc();
  pcVar3 = FUN_1031e4884;
  func_0x0001000841fc(FUN_1031e4884,puVar1,uVar2);
  func_0x000100084214("SCContextActionItemPlugInRegistryServiceProvider",0x30,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1031e4884; end: 1031e492f;  */

void FUN_1031e4884(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001031e41b8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                      *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148));
  return;
}



/* Entry: 1031e4930; end: 1031e4a87;  */

void FUN_1031e4930(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110620968;
  func_0x000107c613fc(&UNK_110620968,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1031e49b0,puVar1);
  return;
}



/* Entry: 1031e4a88; end: 1031e4a97;  */

undefined1  [16] FUN_1031e4a88(void)

{
  return ZEXT816(0x110620990);
}



/* Entry: 1031e4a98; end: 1031e4ad7;  */

void FUN_1031e4a98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9ab58;
  func_0x000107c61520(&DAT_10db9ab58,&UNK_110620b70);
  puRam0000000112f4b510 = puVar1;
  return;
}



/* Entry: 1031e4ad8; end: 1031e4b97;  */

undefined8 FUN_1031e4ad8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f130a50);
  func_0x000107c3ebd4(param_1);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1031e4b98; end: 1031e4bb7;  */

bool FUN_1031e4b98(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1031e4bb8; end: 1031e4da3;  */

long FUN_1031e4bb8(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0xc;
  *(undefined8 *)(lVar1 + 0x10) = 6;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar3 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = 0x112f4b530;
  func_0x0001000285a8(0x112f4b530,&UNK_10db9ab28);
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  uVar2 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x20[7];
  *(undefined8 *)(lVar1 + 0x98) = uVar2;
  *(undefined8 *)(lVar1 + 0xd8) = uVar3;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 200) = uStack_a8;
  *(undefined8 *)(lVar1 + 0xc0) = uStack_b0;
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uVar3 = 0x112f4b540;
  func_0x0001000285a8(0x112f4b540,&UNK_10db9ab38);
  *(undefined8 *)(lVar1 + 0x100) = uVar3;
  *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[10];
  *(undefined8 *)(lVar1 + 0xf0) = unaff_x20[0xb];
  *(undefined8 *)(lVar1 + 0xe8) = uVar3;
  FUN_1031e5b24(&uStack_70,auStack_d0,0x112f4b520,&UNK_10db9b280);
  FUN_1031e5b24(&uStack_80,auStack_d0,0x112f4b528,&UNK_10db9ab20);
  FUN_1031e5b24(&uStack_90,auStack_d0,0x112f4b530,&UNK_10db9ab28);
  FUN_1031e5b24(&uStack_a0,auStack_d0,0x112f4b538,&UNK_10db9ab30);
  FUN_1031e5b24(&uStack_b0,auStack_d0,0x112f4b520,&UNK_10db9b280);
  FUN_1031e5b24(&uStack_c0,auStack_d0,0x112f4b540,&UNK_10db9ab38);
  return lVar1;
}



/* Entry: 1031e4da4; end: 1031e4de7;  */

void FUN_1031e4da4(undefined8 *param_1)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1031e5a48(&uStack_80);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[9] = uStack_38;
  param_1[8] = uStack_40;
  param_1[0xb] = uStack_28;
  param_1[10] = uStack_30;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1031e4de8; end: 1031e4deb;  */

long FUN_1031e4de8(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0xc;
  *(undefined8 *)(lVar1 + 0x10) = 6;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar3 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = 0x112f4b530;
  func_0x0001000285a8(0x112f4b530,&UNK_10db9ab28);
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  uVar2 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x20[7];
  *(undefined8 *)(lVar1 + 0x98) = uVar2;
  *(undefined8 *)(lVar1 + 0xd8) = uVar3;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 200) = uStack_a8;
  *(undefined8 *)(lVar1 + 0xc0) = uStack_b0;
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uVar3 = 0x112f4b540;
  func_0x0001000285a8(0x112f4b540,&UNK_10db9ab38);
  *(undefined8 *)(lVar1 + 0x100) = uVar3;
  *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[10];
  *(undefined8 *)(lVar1 + 0xf0) = unaff_x20[0xb];
  *(undefined8 *)(lVar1 + 0xe8) = uVar3;
  FUN_1031e5b24(&uStack_70,auStack_d0,0x112f4b520,&UNK_10db9b280);
  FUN_1031e5b24(&uStack_80,auStack_d0,0x112f4b528,&UNK_10db9ab20);
  FUN_1031e5b24(&uStack_90,auStack_d0,0x112f4b530,&UNK_10db9ab28);
  FUN_1031e5b24(&uStack_a0,auStack_d0,0x112f4b538,&UNK_10db9ab30);
  FUN_1031e5b24(&uStack_b0,auStack_d0,0x112f4b520,&UNK_10db9b280);
  FUN_1031e5b24(&uStack_c0,auStack_d0,0x112f4b540,&UNK_10db9ab38);
  return lVar1;
}



/* Entry: 1031e4dec; end: 1031e54c7;  */

undefined8 FUN_1031e4dec(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uStack_258;
  long lStack_250;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  puVar2 = &UNK_10db9ac08;
  func_0x000107c614e0(&UNK_10db9ac08);
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  lStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
    return 0;
  }
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_180 = uStack_1e0;
  uStack_178 = uStack_1d8;
  uStack_170 = uStack_1d0;
  uStack_168 = uStack_1c8;
  uStack_160 = uStack_1c0;
  uStack_158 = uStack_1b8;
  uStack_150 = uStack_1b0;
  uStack_148 = uStack_1a8;
  uStack_140 = uStack_1a0;
  uStack_138 = uStack_198;
  uStack_130 = uStack_190;
  uStack_128 = uStack_188;
  FUN_1031e6104(&uStack_1e0,&puStack_240);
  puVar3 = &uStack_180;
  FUN_1031e590c(puVar3,&uStack_120,puVar2,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x0001031e6138(&uStack_b0);
  func_0x000107c61574(puVar2);
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  func_0x000107c61170(puVar3);
  puVar2 = &UNK_10db9ac30;
  func_0x000107c614e0(&UNK_10db9ac30);
  FUN_1031e6104(&uStack_1e0,&puStack_240);
  puVar3 = &uStack_180;
  FUN_1031e590c(puVar3,&uStack_120,puVar2,0x112d7a520,&PTR_PTR_1126b2390);
  func_0x0001031e6138(&uStack_b0);
  func_0x000107c61574(puVar2);
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  puVar4 = puVar3;
  func_0x000107c42e84();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  uStack_258 = 0;
  lStack_250 = 0;
  puVar2 = &UNK_110620bc0;
  func_0x000107c613fc(&UNK_110620bc0,0x18,7);
  *(undefined8 **)(puVar2 + 0x10) = &uStack_258;
  puVar5 = &UNK_110620be8;
  func_0x000107c613fc(&UNK_110620be8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1031e6180;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  uStack_220 = 0x1031e61b0;
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_238 = 0x42000000;
  puStack_230 = &UNK_1013c53f4;
  puStack_228 = &UNK_110620c00;
  ppuVar6 = &puStack_240;
  puStack_218 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_218);
  func_0x000107c4c6a4(puVar4);
  func_0x000107c60bd0(ppuVar6);
  if (lStack_250 != 0) {
    puVar5 = &UNK_10db9ac50;
    func_0x000107c614e0(&UNK_10db9ac50);
    FUN_1031e6104(&uStack_1e0,&puStack_240);
    puVar3 = &uStack_180;
    FUN_1031e57ec(puVar3,&uStack_120,puVar5);
    func_0x0001031e6138(&uStack_b0);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar3 & 1) == 0) {
      puVar5 = &UNK_10db9ac30;
      func_0x000107c614e0(&UNK_10db9ac30);
      FUN_1031e6104(&uStack_1e0,&puStack_240);
      puVar3 = &uStack_180;
      FUN_1031e590c(puVar3,&uStack_120,puVar5,0x112d7a520,&PTR_PTR_1126b2390);
      func_0x0001031e6138(&uStack_b0);
      func_0x000107c61574(puVar5);
      if (puVar3 != (undefined8 *)0x0) {
        puVar7 = puVar3;
        func_0x000107c4ab80();
        func_0x000107c61170(puVar3);
        if ((puVar7 == (undefined8 *)0x14) || (puVar7 == (undefined8 *)0xf)) {
          if ((param_2 & 1) == 0) {
            puVar5 = &UNK_10db9acb0;
            func_0x000107c614e0(&UNK_10db9acb0);
            FUN_1031e6104(&uStack_1e0,&puStack_240);
            puVar3 = &uStack_180;
            FUN_1031e57ec(puVar3,&uStack_120,puVar5);
            func_0x0001031e6138(&uStack_b0);
            func_0x000107c61574(puVar5);
            if (((uint)puVar3 & 0xff) == 2) goto LAB_1031e51ec;
          }
          else {
            puVar5 = &UNK_10db9ac30;
            func_0x000107c614e0(&UNK_10db9ac30);
            FUN_1031e6104(&uStack_1e0,&puStack_240);
            puVar3 = &uStack_180;
            FUN_1031e590c(puVar3,&uStack_120,puVar5,0x112d7a520,&PTR_PTR_1126b2390);
            func_0x0001031e6138(&uStack_b0);
            func_0x000107c61574(puVar5);
            if (puVar3 == (undefined8 *)0x0) goto LAB_1031e5050;
            puVar7 = puVar3;
            func_0x000107c40110();
            func_0x000107c61180();
            func_0x000107c61170(puVar3);
            puVar3 = puVar7;
            func_0x000107c4a37c();
            func_0x000107c61170(puVar7);
          }
          if (((ulong)puVar3 & 1) == 0) goto LAB_1031e5050;
        }
      }
LAB_1031e51ec:
      puVar5 = &UNK_10db9ac70;
      func_0x000107c614e0(&UNK_10db9ac70);
      FUN_1031e6104(&uStack_1e0,&puStack_240);
      puVar3 = &uStack_120;
      FUN_1031e56cc(&uStack_180,puVar3,puVar5);
      func_0x0001031e6138(&uStack_b0);
      func_0x000107c61574(puVar5);
      if (puVar3 == (undefined8 *)0x0) {
        func_0x000107c61170(puVar4);
        uVar8 = 0;
      }
      else {
        func_0x000107c6142c(puVar3);
        puVar5 = &UNK_10db9ac90;
        func_0x000107c614e0(&UNK_10db9ac90);
        FUN_1031e6104(&uStack_1e0,&puStack_240);
        puVar3 = &uStack_180;
        FUN_1031e559c(puVar3,&uStack_120,puVar5);
        func_0x0001031e6138(&uStack_b0);
        func_0x000107c61574(puVar5);
        func_0x000107c61170(puVar4);
        uVar8 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          func_0x000107c615e8(puVar3);
          uVar8 = 1;
        }
      }
      lVar1 = lStack_250;
      func_0x000107c61574(puVar2);
      func_0x000107c6142c(lVar1);
      return uVar8;
    }
  }
LAB_1031e5050:
  func_0x000107c61170(puVar4);
  lVar1 = lStack_250;
  func_0x000107c61574(puVar2);
  func_0x000107c6142c(lVar1);
  return 0;
}



/* Entry: 1031e54c8; end: 1031e559b;  */

undefined8 FUN_1031e54c8(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *unaff_x20;
  
  uVar1 = *unaff_x20;
  puVar2 = &UNK_110620b98;
  func_0x000107c613fc(&UNK_110620b98,0x11,7);
  puVar2[0x10] = uVar1;
  pcVar3 = FUN_1031e626c;
  func_0x0001000c0ebc(FUN_1031e626c,puVar2);
  func_0x000107c61574(puVar2);
  uVar4 = 0x112f4b548;
  func_0x0001000285a8(0x112f4b548,&UNK_10db9ab40);
  uVar5 = 0x1031e52bc;
  func_0x0001000bfde0(0x1031e52bc,0,uVar4);
  func_0x000107c61574(pcVar3);
  return uVar5;
}



/* Entry: 1031e559c; end: 1031e56cb;  */

undefined8 FUN_1031e559c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_e0 [4];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_e0;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  lVar5 = *(long *)(param_2 + 0x60);
  func_0x000107c614bc(&uStack_a0,&uStack_90,param_3);
  uStack_c0 = uStack_a0;
  uStack_b8 = uStack_98;
  func_0x000107c61434(uStack_98);
  puVar2 = &uStack_c0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_98);
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(auStack_e0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_98);
    func_0x000100102924(auStack_e0,&uStack_c0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0x112d7a598;
  func_0x0001000285a8(0x112d7a598,&UNK_10d939e10);
  func_0x000107c6147c(auStack_e0,&uStack_c0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_e0[0] = 0;
  }
  return auStack_e0[0];
}



/* Entry: 1031e56cc; end: 1031e57eb;  */

undefined1  [16] FUN_1031e56cc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_e0;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  lVar4 = *(long *)(param_2 + 0x60);
  func_0x000107c614bc(&uStack_a0,&uStack_90,param_3);
  uStack_c0 = uStack_a0;
  uStack_b8 = uStack_98;
  func_0x000107c61434(uStack_98);
  puVar2 = &uStack_c0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_98);
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(&uStack_e0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_98);
    func_0x000100102924(&uStack_e0,&uStack_c0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_e0,&uStack_c0,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
  }
  auVar5._8_8_ = uStack_d8;
  auVar5._0_8_ = uStack_e0;
  return auVar5;
}



/* Entry: 1031e57ec; end: 1031e590b;  */

undefined1 FUN_1031e57ec(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_e0 [32];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_e0;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  lVar4 = *(long *)(param_2 + 0x60);
  func_0x000107c614bc(&uStack_a0,&uStack_90,param_3);
  uStack_c0 = uStack_a0;
  uStack_b8 = uStack_98;
  func_0x000107c61434(uStack_98);
  puVar2 = &uStack_c0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_98);
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(auStack_e0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_98);
    func_0x000100102924(auStack_e0,&uStack_c0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_e0,&uStack_c0,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_e0[0] = 2;
  }
  return auStack_e0[0];
}



/* Entry: 1031e590c; end: 1031e5a47;  */

undefined8
FUN_1031e590c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_f0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar1 = (int)auStack_f0;
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  lVar5 = *(long *)(param_2 + 0x60);
  func_0x000107c614bc(&uStack_b0,&uStack_a0,param_3);
  uStack_d0 = uStack_b0;
  uStack_c8 = uStack_a8;
  func_0x000107c61434(uStack_a8);
  puVar2 = &uStack_d0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_a8);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c60234(auStack_f0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_a8);
    func_0x000100102924(auStack_f0,&uStack_d0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  FUN_1031e622c(0,param_4,param_5);
  func_0x000107c6147c(auStack_f0,&uStack_d0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_f0[0] = 0;
  }
  return auStack_f0[0];
}



/* Entry: 1031e5a48; end: 1031e5b23;  */

void FUN_1031e5a48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0df18;
  func_0x000107c5faec();
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0c078;
  uVar8 = param_3;
  func_0x000107c5faec();
  ppuVar5 = &PTR____CFConstantStringClassReference_110f0c038;
  uVar9 = uVar8;
  func_0x000107c5faec();
  ppuVar6 = &PTR____CFConstantStringClassReference_110dcab38;
  uVar10 = uVar9;
  func_0x000107c5faec();
  ppuVar7 = ppuVar6;
  uVar11 = uVar10;
  FUN_1031fc628();
  puVar1 = *ppuVar7;
  puVar2 = ppuVar7[1];
  ppuVar7 = &PTR____CFConstantStringClassReference_110e56bf8;
  func_0x000107c5faec();
  *param_1 = ppuVar3;
  param_1[1] = param_3;
  param_1[2] = ppuVar4;
  param_1[3] = uVar8;
  param_1[4] = ppuVar5;
  param_1[5] = uVar9;
  param_1[6] = ppuVar6;
  param_1[7] = uVar10;
  param_1[8] = puVar1;
  param_1[9] = puVar2;
  param_1[10] = ppuVar7;
  param_1[0xb] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(puVar2);
  return;
}



/* Entry: 1031e5b24; end: 1031e5b6b;  */

undefined8 FUN_1031e5b24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1031e5b6c; end: 1031e5b73;  */

undefined8 FUN_1031e5b6c(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_258;
  long lStack_250;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  puVar3 = &UNK_10db9ac08;
  func_0x000107c614e0(&UNK_10db9ac08);
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  lStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
    return 0;
  }
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_180 = uStack_1e0;
  uStack_178 = uStack_1d8;
  uStack_170 = uStack_1d0;
  uStack_168 = uStack_1c8;
  uStack_160 = uStack_1c0;
  uStack_158 = uStack_1b8;
  uStack_150 = uStack_1b0;
  uStack_148 = uStack_1a8;
  uStack_140 = uStack_1a0;
  uStack_138 = uStack_198;
  uStack_130 = uStack_190;
  uStack_128 = uStack_188;
  FUN_1031e6104(&uStack_1e0,&puStack_240);
  puVar4 = &uStack_180;
  FUN_1031e590c(puVar4,&uStack_120,puVar3,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x0001031e6138(&uStack_b0);
  func_0x000107c61574(puVar3);
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  func_0x000107c61170(puVar4);
  puVar3 = &UNK_10db9ac30;
  func_0x000107c614e0(&UNK_10db9ac30);
  FUN_1031e6104(&uStack_1e0,&puStack_240);
  puVar4 = &uStack_180;
  FUN_1031e590c(puVar4,&uStack_120,puVar3,0x112d7a520,&PTR_PTR_1126b2390);
  func_0x0001031e6138(&uStack_b0);
  func_0x000107c61574(puVar3);
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  puVar5 = puVar4;
  func_0x000107c42e84();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  uStack_258 = 0;
  lStack_250 = 0;
  puVar3 = &UNK_110620bc0;
  func_0x000107c613fc(&UNK_110620bc0,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = &uStack_258;
  puVar6 = &UNK_110620be8;
  func_0x000107c613fc(&UNK_110620be8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x1031e6180;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  uStack_220 = 0x1031e61b0;
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_238 = 0x42000000;
  puStack_230 = &UNK_1013c53f4;
  puStack_228 = &UNK_110620c00;
  ppuVar7 = &puStack_240;
  puStack_218 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_218);
  func_0x000107c4c6a4(puVar5);
  func_0x000107c60bd0(ppuVar7);
  if (lStack_250 != 0) {
    puVar6 = &UNK_10db9ac50;
    func_0x000107c614e0(&UNK_10db9ac50);
    FUN_1031e6104(&uStack_1e0,&puStack_240);
    puVar4 = &uStack_180;
    FUN_1031e57ec(puVar4,&uStack_120,puVar6);
    func_0x0001031e6138(&uStack_b0);
    func_0x000107c61574(puVar6);
    if (((ulong)puVar4 & 1) == 0) {
      puVar6 = &UNK_10db9ac30;
      func_0x000107c614e0(&UNK_10db9ac30);
      FUN_1031e6104(&uStack_1e0,&puStack_240);
      puVar4 = &uStack_180;
      FUN_1031e590c(puVar4,&uStack_120,puVar6,0x112d7a520,&PTR_PTR_1126b2390);
      func_0x0001031e6138(&uStack_b0);
      func_0x000107c61574(puVar6);
      if (puVar4 != (undefined8 *)0x0) {
        puVar8 = puVar4;
        func_0x000107c4ab80();
        func_0x000107c61170(puVar4);
        if ((puVar8 == (undefined8 *)0x14) || (puVar8 == (undefined8 *)0xf)) {
          if ((bVar1 & 1) == 0) {
            puVar6 = &UNK_10db9acb0;
            func_0x000107c614e0(&UNK_10db9acb0);
            FUN_1031e6104(&uStack_1e0,&puStack_240);
            puVar4 = &uStack_180;
            FUN_1031e57ec(puVar4,&uStack_120,puVar6);
            func_0x0001031e6138(&uStack_b0);
            func_0x000107c61574(puVar6);
            if (((uint)puVar4 & 0xff) == 2) goto LAB_1031e51ec;
          }
          else {
            puVar6 = &UNK_10db9ac30;
            func_0x000107c614e0(&UNK_10db9ac30);
            FUN_1031e6104(&uStack_1e0,&puStack_240);
            puVar4 = &uStack_180;
            FUN_1031e590c(puVar4,&uStack_120,puVar6,0x112d7a520,&PTR_PTR_1126b2390);
            func_0x0001031e6138(&uStack_b0);
            func_0x000107c61574(puVar6);
            if (puVar4 == (undefined8 *)0x0) goto LAB_1031e5050;
            puVar8 = puVar4;
            func_0x000107c40110();
            func_0x000107c61180();
            func_0x000107c61170(puVar4);
            puVar4 = puVar8;
            func_0x000107c4a37c();
            func_0x000107c61170(puVar8);
          }
          if (((ulong)puVar4 & 1) == 0) goto LAB_1031e5050;
        }
      }
LAB_1031e51ec:
      puVar6 = &UNK_10db9ac70;
      func_0x000107c614e0(&UNK_10db9ac70);
      FUN_1031e6104(&uStack_1e0,&puStack_240);
      puVar4 = &uStack_120;
      FUN_1031e56cc(&uStack_180,puVar4,puVar6);
      func_0x0001031e6138(&uStack_b0);
      func_0x000107c61574(puVar6);
      if (puVar4 == (undefined8 *)0x0) {
        func_0x000107c61170(puVar5);
        uVar9 = 0;
      }
      else {
        func_0x000107c6142c(puVar4);
        puVar6 = &UNK_10db9ac90;
        func_0x000107c614e0(&UNK_10db9ac90);
        FUN_1031e6104(&uStack_1e0,&puStack_240);
        puVar4 = &uStack_180;
        FUN_1031e559c(puVar4,&uStack_120,puVar6);
        func_0x0001031e6138(&uStack_b0);
        func_0x000107c61574(puVar6);
        func_0x000107c61170(puVar5);
        uVar9 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          func_0x000107c615e8(puVar4);
          uVar9 = 1;
        }
      }
      lVar2 = lStack_250;
      func_0x000107c61574(puVar3);
      func_0x000107c6142c(lVar2);
      return uVar9;
    }
  }
LAB_1031e5050:
  func_0x000107c61170(puVar5);
  lVar2 = lStack_250;
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(lVar2);
  return 0;
}



/* Entry: 1031e5b74; end: 1031e5b97;  */

void FUN_1031e5b74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031e5b98();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031e5b98; end: 1031e5bd7;  */

void FUN_1031e5b98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9ab80;
  func_0x000107c61520(&DAT_10db9ab80,&UNK_110620b70);
  puRam0000000112f4b550 = puVar1;
  return;
}



/* Entry: 1031e5bd8; end: 1031e5bdb;  */

void FUN_1031e5bd8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b558 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b560;
  func_0x00010002969c(0x112f4b560,&UNK_10db9b890);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b558 = puVar2;
  return;
}



/* Entry: 1031e5bdc; end: 1031e5c2b;  */

void FUN_1031e5bdc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b558 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b560;
  func_0x00010002969c(0x112f4b560,&UNK_10db9b890);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b558 = puVar2;
  return;
}



/* Entry: 1031e5c2c; end: 1031e5c43;  */

undefined ** FUN_1031e5c2c(void)

{
  return &PTR_DAT_110620a48;
}



/* Entry: 1031e5c44; end: 1031e5cb7;  */

long FUN_1031e5c44(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031e5cb8; end: 1031e5d43;  */

undefined8 * FUN_1031e5cb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  return param_1;
}



/* Entry: 1031e5d44; end: 1031e5e2f;  */

undefined8 * FUN_1031e5d44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1031e5e30; end: 1031e5eb3;  */

undefined8 * FUN_1031e5e30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1031e5eb4; end: 1031e6103;  */

int FUN_1031e5eb4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031e6104; end: 1031e620f;  */

undefined8 FUN_1031e6104(undefined8 param_1,undefined8 param_2)

{
  FUN_1031e5cb8(param_2,param_1,&UNK_110620ae0);
  return param_2;
}



/* Entry: 1031e6210; end: 1031e622b;  */

void FUN_1031e6210(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1031e622c; end: 1031e626b;  */

void FUN_1031e622c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1031e626c; end: 1031e626f;  */

undefined8 FUN_1031e626c(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_258;
  long lStack_250;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  puVar3 = &UNK_10db9ac08;
  func_0x000107c614e0(&UNK_10db9ac08);
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  lStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
    return 0;
  }
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_180 = uStack_1e0;
  uStack_178 = uStack_1d8;
  uStack_170 = uStack_1d0;
  uStack_168 = uStack_1c8;
  uStack_160 = uStack_1c0;
  uStack_158 = uStack_1b8;
  uStack_150 = uStack_1b0;
  uStack_148 = uStack_1a8;
  uStack_140 = uStack_1a0;
  uStack_138 = uStack_198;
  uStack_130 = uStack_190;
  uStack_128 = uStack_188;
  FUN_1031e6104(&uStack_1e0,&puStack_240);
  puVar4 = &uStack_180;
  FUN_1031e590c(puVar4,&uStack_120,puVar3,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x0001031e6138(&uStack_b0);
  func_0x000107c61574(puVar3);
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  func_0x000107c61170(puVar4);
  puVar3 = &UNK_10db9ac30;
  func_0x000107c614e0(&UNK_10db9ac30);
  FUN_1031e6104(&uStack_1e0,&puStack_240);
  puVar4 = &uStack_180;
  FUN_1031e590c(puVar4,&uStack_120,puVar3,0x112d7a520,&PTR_PTR_1126b2390);
  func_0x0001031e6138(&uStack_b0);
  func_0x000107c61574(puVar3);
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  puVar5 = puVar4;
  func_0x000107c42e84();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  uStack_258 = 0;
  lStack_250 = 0;
  puVar3 = &UNK_110620bc0;
  func_0x000107c613fc(&UNK_110620bc0,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = &uStack_258;
  puVar6 = &UNK_110620be8;
  func_0x000107c613fc(&UNK_110620be8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x1031e6180;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  uStack_220 = 0x1031e61b0;
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_238 = 0x42000000;
  puStack_230 = &UNK_1013c53f4;
  puStack_228 = &UNK_110620c00;
  ppuVar7 = &puStack_240;
  puStack_218 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_218);
  func_0x000107c4c6a4(puVar5);
  func_0x000107c60bd0(ppuVar7);
  if (lStack_250 != 0) {
    puVar6 = &UNK_10db9ac50;
    func_0x000107c614e0(&UNK_10db9ac50);
    FUN_1031e6104(&uStack_1e0,&puStack_240);
    puVar4 = &uStack_180;
    FUN_1031e57ec(puVar4,&uStack_120,puVar6);
    func_0x0001031e6138(&uStack_b0);
    func_0x000107c61574(puVar6);
    if (((ulong)puVar4 & 1) == 0) {
      puVar6 = &UNK_10db9ac30;
      func_0x000107c614e0(&UNK_10db9ac30);
      FUN_1031e6104(&uStack_1e0,&puStack_240);
      puVar4 = &uStack_180;
      FUN_1031e590c(puVar4,&uStack_120,puVar6,0x112d7a520,&PTR_PTR_1126b2390);
      func_0x0001031e6138(&uStack_b0);
      func_0x000107c61574(puVar6);
      if (puVar4 != (undefined8 *)0x0) {
        puVar8 = puVar4;
        func_0x000107c4ab80();
        func_0x000107c61170(puVar4);
        if ((puVar8 == (undefined8 *)0x14) || (puVar8 == (undefined8 *)0xf)) {
          if ((bVar1 & 1) == 0) {
            puVar6 = &UNK_10db9acb0;
            func_0x000107c614e0(&UNK_10db9acb0);
            FUN_1031e6104(&uStack_1e0,&puStack_240);
            puVar4 = &uStack_180;
            FUN_1031e57ec(puVar4,&uStack_120,puVar6);
            func_0x0001031e6138(&uStack_b0);
            func_0x000107c61574(puVar6);
            if (((uint)puVar4 & 0xff) == 2) goto LAB_1031e51ec;
          }
          else {
            puVar6 = &UNK_10db9ac30;
            func_0x000107c614e0(&UNK_10db9ac30);
            FUN_1031e6104(&uStack_1e0,&puStack_240);
            puVar4 = &uStack_180;
            FUN_1031e590c(puVar4,&uStack_120,puVar6,0x112d7a520,&PTR_PTR_1126b2390);
            func_0x0001031e6138(&uStack_b0);
            func_0x000107c61574(puVar6);
            if (puVar4 == (undefined8 *)0x0) goto LAB_1031e5050;
            puVar8 = puVar4;
            func_0x000107c40110();
            func_0x000107c61180();
            func_0x000107c61170(puVar4);
            puVar4 = puVar8;
            func_0x000107c4a37c();
            func_0x000107c61170(puVar8);
          }
          if (((ulong)puVar4 & 1) == 0) goto LAB_1031e5050;
        }
      }
LAB_1031e51ec:
      puVar6 = &UNK_10db9ac70;
      func_0x000107c614e0(&UNK_10db9ac70);
      FUN_1031e6104(&uStack_1e0,&puStack_240);
      puVar4 = &uStack_120;
      FUN_1031e56cc(&uStack_180,puVar4,puVar6);
      func_0x0001031e6138(&uStack_b0);
      func_0x000107c61574(puVar6);
      if (puVar4 == (undefined8 *)0x0) {
        func_0x000107c61170(puVar5);
        uVar9 = 0;
      }
      else {
        func_0x000107c6142c(puVar4);
        puVar6 = &UNK_10db9ac90;
        func_0x000107c614e0(&UNK_10db9ac90);
        FUN_1031e6104(&uStack_1e0,&puStack_240);
        puVar4 = &uStack_180;
        FUN_1031e559c(puVar4,&uStack_120,puVar6);
        func_0x0001031e6138(&uStack_b0);
        func_0x000107c61574(puVar6);
        func_0x000107c61170(puVar5);
        uVar9 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          func_0x000107c615e8(puVar4);
          uVar9 = 1;
        }
      }
      lVar2 = lStack_250;
      func_0x000107c61574(puVar3);
      func_0x000107c6142c(lVar2);
      return uVar9;
    }
  }
LAB_1031e5050:
  func_0x000107c61170(puVar5);
  lVar2 = lStack_250;
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(lVar2);
  return 0;
}



/* Entry: 1031e6270; end: 1031e633b;  */

undefined1  [16] FUN_1031e6270(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe5;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f130aa0);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f130ac0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e633c);
  (*pcVar1)();
}



/* Entry: 1031e633c; end: 1031e6387;  */

void FUN_1031e633c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110620cf8;
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(&UNK_110620cf8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x1031e6350,puVar1);
  return;
}



/* Entry: 1031e6388; end: 1031e641f;  */

void FUN_1031e6388(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_2;
  *(undefined8 *)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_5,param_4);
  return;
}



/* Entry: 1031e6420; end: 1031e6453;  */

void FUN_1031e6420(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031e6454; end: 1031e6477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031e6454(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_68;
  
  uVar5 = 0x112f4b5b0;
  uVar6 = 0x112f4b5b8;
  puVar7 = &UNK_110620d88;
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar1 = *(long *)(lStack_68 + _DAT_112fbf810);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c3da70();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c3da94();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c5bcc0();
    func_0x000107c61170(lVar4);
    if (lVar3 != 0) {
      func_0x000100083b20(&lStack_68);
      lVar3 = lStack_68;
      func_0x000107c3fa04();
      func_0x000107c61180();
      func_0x000107c61170(lStack_68);
      if (lVar3 != 0) {
        if (lVar1 != 0) {
          uVar8 = *(undefined8 *)(lVar1 + _DAT_112fbf840);
          uVar9 = *(undefined8 *)(lVar1 + _DAT_112fbf850);
          func_0x0001000285a8(0x112f4b5b0,&UNK_10db9ad70);
          param_1[3] = uVar5;
          FUN_1031e66e4(0x112f4b5b8,0x112f4b5b0,&UNK_10db9ad70);
          param_1[4] = uVar6;
          func_0x000107c613fc(&UNK_110620d88,0x30,7);
          *param_1 = puVar7;
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61170(lVar1);
          *(undefined8 *)(puVar7 + 0x10) = uVar8;
          *(undefined8 *)(puVar7 + 0x18) = uVar9;
          *(long *)(puVar7 + 0x20) = lVar2;
          *(long *)(puVar7 + 0x28) = lVar3;
          return;
        }
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar2);
        goto LAB_1031e6684;
      }
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(lVar1);
LAB_1031e6684:
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1031e6478; end: 1031e66c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031e6478(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar1 = *(long *)(lStack_68 + _DAT_112fbf810);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c3da70();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c3da94();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c5bcc0();
    func_0x000107c61170(lVar4);
    if (lVar3 != 0) {
      func_0x000100083b20(&lStack_68);
      lVar3 = lStack_68;
      func_0x000107c3fa04();
      func_0x000107c61180();
      func_0x000107c61170(lStack_68);
      if (lVar3 != 0) {
        if (lVar1 != 0) {
          uVar5 = *(undefined8 *)(lVar1 + _DAT_112fbf840);
          uVar6 = *(undefined8 *)(lVar1 + _DAT_112fbf850);
          lVar4 = param_2;
          func_0x0001000285a8(param_2,param_3);
          param_1[3] = lVar4;
          FUN_1031e66e4(param_4,param_2,param_3);
          param_1[4] = param_4;
          func_0x000107c613fc(param_5,0x30,7);
          *param_1 = param_5;
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61170(lVar1);
          *(undefined8 *)(param_5 + 0x10) = uVar5;
          *(undefined8 *)(param_5 + 0x18) = uVar6;
          *(long *)(param_5 + 0x20) = lVar2;
          *(long *)(param_5 + 0x28) = lVar3;
          return;
        }
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar2);
        goto LAB_1031e6684;
      }
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(lVar1);
LAB_1031e6684:
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1031e66c4; end: 1031e66e3;  */

undefined1  [16] FUN_1031e66c4(void)

{
  return ZEXT816(0x110620d48);
}



/* Entry: 1031e66e4; end: 1031e6727;  */

void FUN_1031e66e4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = &DAT_10db9ad88;
    func_0x000107c61520(&DAT_10db9ad88,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1031e6728; end: 1031e6763;  */

void FUN_1031e6728(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031e6764; end: 1031e6a97;  */

code * FUN_1031e6764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110620e80;
  func_0x000107c613fc(&UNK_110620e80,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  uVar4 = 0x112f4b5d0;
  func_0x0001000285a8(0x112f4b5d0,&UNK_10db9ad80);
  pcVar2 = FUN_1031e6a98;
  func_0x0001000bfde0(FUN_1031e6a98,puVar1,uVar4);
  func_0x000107c61574(puVar1);
  pcVar3 = FUN_1031e6aa8;
  func_0x00010487de38(FUN_1031e6aa8,0);
  func_0x000107c61574(pcVar2);
  puVar1 = &UNK_110620ea8;
  func_0x000107c613fc(&UNK_110620ea8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  uVar4 = 0xff;
  func_0x00010440dfa8(0xff,param_6,param_7);
  uVar5 = 0;
  func_0x000107c60188(0,uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  pcVar2 = FUN_1031e6e04;
  func_0x0001000bfde0(FUN_1031e6e04,puVar1,uVar5);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar1);
  return pcVar2;
}



/* Entry: 1031e6a98; end: 1031e6aa7;  */

void FUN_1031e6a98(ulong *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  ulong uVar9;
  undefined1 auStack_1b0 [64];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  uStack_108 = param_2[5];
  uStack_110 = param_2[4];
  uStack_f8 = param_2[7];
  uStack_100 = param_2[6];
  uStack_f0 = param_2[8];
  uStack_128 = param_2[1];
  uStack_130 = *param_2;
  uStack_118 = param_2[3];
  uStack_120 = param_2[2];
  puVar1 = &UNK_10db9ae40;
  func_0x000107c614e0(&UNK_10db9ae40,uVar5,*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  lStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  if (lStack_98 == 0) {
    func_0x000107c61574();
LAB_1031e6a6c:
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  uStack_168 = param_2[1];
  uStack_170 = *param_2;
  uStack_158 = param_2[3];
  uStack_160 = param_2[2];
  uStack_148 = param_2[5];
  uStack_150 = param_2[4];
  uStack_138 = param_2[7];
  uStack_140 = param_2[6];
  uStack_e0 = uStack_170;
  uStack_d8 = uStack_168;
  uStack_d0 = uStack_160;
  uStack_c8 = uStack_158;
  uStack_c0 = uStack_150;
  uStack_b8 = uStack_148;
  uStack_b0 = uStack_140;
  uStack_a8 = uStack_138;
  FUN_1031e7474(&uStack_170,auStack_1b0);
  puVar2 = &uStack_e0;
  puVar7 = &uStack_130;
  FUN_1031e7358(puVar2,puVar7,puVar1);
  func_0x0001031e74b0(&uStack_a0);
  func_0x000107c61574(puVar1);
  if (puVar2 == (undefined8 *)0x0) goto LAB_1031e6a6c;
  puVar3 = puVar2;
  func_0x000107c5c060();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    func_0x000107c61170(puVar2);
    goto LAB_1031e6a6c;
  }
  puVar4 = puVar3;
  func_0x000107c5faec();
  puVar8 = puVar7;
  func_0x000107c61170();
  FUN_10326c384();
  if (((ulong)puVar3 & 1) != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar5 != 0) {
      uVar9 = uVar5;
      func_0x000107c49980();
      func_0x000107c615e8(uVar5);
      uVar9 = uVar9 & 0xffffffff;
      goto LAB_1031e6a24;
    }
  }
  uVar9 = 0;
LAB_1031e6a24:
  puVar3 = puVar2;
  func_0x000107c52060();
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c5faec();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  *param_1 = uVar9;
  param_1[1] = (ulong)puVar6;
  param_1[2] = (ulong)puVar8;
  param_1[3] = (ulong)puVar4;
  param_1[4] = (ulong)puVar7;
  return;
}



/* Entry: 1031e6aa8; end: 1031e6b57;  */

/* WARNING: Possible PIC construction at 0x0001031e6b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031e6b18) */

long FUN_1031e6aa8(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_1 + 4);
  if (((lVar5 == 0) || (lVar7 = param_2[2], lVar7 == 0)) || (((*param_1 ^ (uint)*param_2) & 1) != 0)
     ) {
    lVar5 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 2);
    lVar1 = *(long *)(param_1 + 6);
    lVar3 = *(long *)(param_1 + 8);
    lVar6 = param_2[1];
    lVar2 = param_2[3];
    lVar4 = param_2[4];
    if (((lVar8 != lVar6 || lVar5 != lVar7) ||
        (lVar8 = lVar1, lVar5 = lVar3, lVar6 = lVar2, lVar7 = lVar4, lVar1 != lVar2)) ||
       (lVar3 != lVar4)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(lVar8,lVar5,lVar6,lVar7,0);
      return lVar8;
    }
    lVar5 = 1;
  }
  return lVar5;
}


