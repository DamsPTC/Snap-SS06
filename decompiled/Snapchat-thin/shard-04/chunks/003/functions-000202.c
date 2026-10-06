/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032ed7d0; end: 1032ed7ef;  */

void FUN_1032ed7d0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032ed7f0; end: 1032ed80b;  */

void FUN_1032ed7f0(long param_1,long param_2)

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



/* Entry: 1032ed80c; end: 1032ed83b;  */

void FUN_1032ed80c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1032ed83c; end: 1032ed84b;  */

void FUN_1032ed83c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = 0;
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1032ed17c(uVar6,uVar7);
    if (lVar2 != 0) {
      lVar5 = *(long *)(lVar1 + 0xe8);
      lStack_80 = lVar1;
      lStack_78 = lVar2;
      uStack_70 = uVar3;
      uStack_68 = uVar4;
      func_0x000107c6157c(lVar5);
      func_0x000100087bd4(FUN_1032ed84c,auStack_90,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(lVar1);
      lVar1 = lVar5;
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1032ed84c; end: 1032ed88b;  */

void FUN_1032ed84c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(lVar1 + 0xf0) = uVar2;
  *(undefined8 *)(lVar1 + 0x100) = uVar5;
  *(undefined8 *)(lVar1 + 0xf8) = uVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c61174(uVar2);
  return;
}



/* Entry: 1032ed88c; end: 1032ed89b;  */

void FUN_1032ed88c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1032ed89c; end: 1032ed967;  */

/* WARNING: Possible PIC construction at 0x0001032ed8c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ed8c4) */

void FUN_1032ed89c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(param_3);
    return;
  }
  return;
}



/* Entry: 1032ed968; end: 1032ed97b;  */

void FUN_1032ed968(void)

{
  FUN_1032ed79c();
  return;
}



/* Entry: 1032ed97c; end: 1032ed99f;  */

void FUN_1032ed97c(long param_1,long param_2)

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



/* Entry: 1032ed9a0; end: 1032ee85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ed9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x80) + _DAT_113083f78);
  uVar4 = param_2;
  uVar2 = param_3;
  func_0x000107c5d984(uVar1);
  uVar5 = (uint)uVar2;
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126afad0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000103ee34e0(uVar2,uVar4);
  if ((uVar5 & 0xff) != 1) {
    func_0x000107c55138(puVar3);
    func_0x000107c5616c(puVar3);
  }
  func_0x000107c6142c(uVar4);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  *(undefined8 *)(unaff_x20 + 0x20) = param_7;
  *(undefined8 *)(unaff_x20 + 0x28) = param_8;
  *(undefined **)(unaff_x20 + 0x30) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  *(undefined8 *)(unaff_x20 + 0x48) = param_3;
  *(undefined8 *)(unaff_x20 + 0x50) = param_4;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x00010006c00c(param_7,param_8);
  FUN_1032eedec(&uStack_b0);
  return;
}



/* Entry: 1032ee85c; end: 1032ee8bb;  */

void FUN_1032ee85c(void)

{
  long unaff_x20;
  
  FUN_1032eeeb0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  func_0x0001032eee74(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032ee8bc; end: 1032ee8eb;  */

void FUN_1032ee8bc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1032ee8ec; end: 1032ee9c3;  */

undefined8 * FUN_1032ee8ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 1032ee9c4; end: 1032eea17;  */

undefined8 * FUN_1032ee9c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 1032eea18; end: 1032eeab7;  */

int FUN_1032eea18(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032eeab8; end: 1032eeaf7;  */

/* WARNING: Possible PIC construction at 0x0001032eeacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032eeae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032eead0) */
/* WARNING: Removing unreachable block (ram,0x0001032eeae8) */

void FUN_1032eeab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1032eeaf8; end: 1032eec2f;  */

undefined8 * FUN_1032eeaf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  uVar2 = param_2[8];
  param_1[8] = uVar2;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1032eec30; end: 1032eeca3;  */

undefined8 * FUN_1032eec30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61170(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1032eeca4; end: 1032eed4b;  */

int FUN_1032eeca4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032eed4c; end: 1032eedcb;  */

void FUN_1032eed4c(void)

{
  FUN_1032ed9a0();
  return;
}



/* Entry: 1032eedcc; end: 1032eedeb;  */

void FUN_1032eedcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4afb0(uVar1);
  func_0x000107c61180();
  func_0x000107c55cb8(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1032eedec; end: 1032eeeaf;  */

undefined8 FUN_1032eedec(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f56e18;
  func_0x0001000285a8(0x112f56e18,&UNK_10dbae638);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1032eeeb0; end: 1032eef1b;  */

void FUN_1032eeeb0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
    func_0x00010006c090(param_3,param_4);
    func_0x000107c6142c(param_9);
    func_0x000107c6142c(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 1032eef1c; end: 1032eef47;  */

void FUN_1032eef1c(long param_1,long param_2)

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



/* Entry: 1032eef48; end: 1032ef377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032eef48(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c613fc();
  lVar4 = param_4;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f13c9a0);
    lVar3 = lVar4;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    if ((int)lVar3 == 0) {
      func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
      uVar2 = param_3;
      func_0x000107c4aeb0();
      func_0x000107c61180();
      uVar6 = uVar2;
      func_0x000107c4aeb4();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      uVar2 = uVar6;
      func_0x0001000bda74();
      func_0x000107c61170(uVar6);
      func_0x0001000285a8(0x112d5a608,&UNK_10d921390);
      uVar6 = param_5;
      func_0x000107c4af30();
      func_0x000107c61180();
      uVar5 = uVar6;
      func_0x0001000bda74();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      uVar6 = *(undefined8 *)(param_1 + _DAT_112f710d8);
      func_0x000107c615f0(uVar6);
      func_0x000107c61170(param_1);
      uVar7 = *(undefined8 *)(param_2 + _DAT_112fcab58);
      func_0x000107c6157c(uVar7);
      func_0x000107c61170(param_2);
      lVar4 = 0;
      func_0x0001032f1de8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x48) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x58) = 0;
      *(undefined8 *)(lVar4 + 0x50) = 0;
      *(undefined8 *)(lVar4 + 0x68) = 0;
      *(undefined8 *)(lVar4 + 0x60) = 0;
      *(undefined8 *)(lVar4 + 0x78) = 0;
      *(undefined8 *)(lVar4 + 0x70) = 0;
      *(undefined8 *)(lVar4 + 0x88) = 0;
      *(undefined8 *)(lVar4 + 0x80) = 0;
      *(undefined8 *)(lVar4 + 0x98) = 0;
      *(undefined8 *)(lVar4 + 0x90) = 0;
      *(undefined8 *)(lVar4 + 0xa0) = 0;
      *(undefined8 *)(lVar4 + 0x10) = uVar7;
      *(undefined8 *)(lVar4 + 0x18) = uVar6;
      *(undefined8 *)(lVar4 + 0x20) = uVar2;
      *(undefined8 *)(lVar4 + 0x28) = uVar5;
    }
    else {
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      lVar4 = 0;
    }
    *(long *)(unaff_x20 + 0x10) = lVar4;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ef168);
  (*pcVar1)();
}



/* Entry: 1032ef378; end: 1032ef40b;  */

void FUN_1032ef378(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    FUN_1032f1360();
  }
  return;
}



/* Entry: 1032ef40c; end: 1032ef42f;  */

void FUN_1032ef40c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032ef430; end: 1032ef4b7;  */

void FUN_1032ef430(void)

{
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    FUN_1032f1360();
  }
  return;
}



/* Entry: 1032ef4b8; end: 1032ef4d7;  */

void FUN_1032ef4b8(void)

{
  func_0x000107c61168(&PTR_PTR_112f56e60);
  return;
}



/* Entry: 1032ef4d8; end: 1032ef61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032ef4d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x0001000285a8(0x112d5ce60,&UNK_10d923870);
  func_0x000107c61174(param_1);
  uVar1 = param_2;
  func_0x000107c4f598();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
  uVar2 = *(undefined8 *)(param_3 + _DAT_1130344b8);
  func_0x000107c61174();
  uVar1 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  uVar1 = param_4;
  func_0x000107c5c800();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  uVar1 = param_5;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  return unaff_x20;
}



/* Entry: 1032ef61c; end: 1032ef683;  */

void FUN_1032ef61c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010067c4bc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x80) = param_2;
  *(undefined8 *)(lVar1 + 0x88) = param_3;
  *param_1 = lVar1;
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 1032ef684; end: 1032ef68f;  */

void FUN_1032ef684(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x00010067c4bc(0,uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x80) = uVar1;
  *(undefined8 *)(lVar3 + 0x88) = uVar2;
  *param_1 = lVar3;
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 1032ef690; end: 1032ef6fb;  */

void FUN_1032ef690(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010067c4dc(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  FUN_1032eab40(param_2,param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 1032ef6fc; end: 1032ef703;  */

void FUN_1032ef6fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00010067c4dc(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  FUN_1032eab40(uVar1,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032ef704; end: 1032ef743;  */

void FUN_1032ef704(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010067c4fc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032ef744; end: 1032ef7bf;  */

void FUN_1032ef744(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x00010067c51c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  func_0x0001000285a8(0x112f57008,&UNK_10dbae728);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032ef7c0; end: 1032ef803;  */

void FUN_1032ef7c0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010067c53c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined1 *)(lVar1 + 0x40) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032ef804; end: 1032ef82b;  */

void FUN_1032ef804(long param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = 0;
  (*(code *)&SUB_10067c4bc)();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11063a578;
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*(code *)&SUB_100075034)(param_1,&UNK_1000ca6b0,auStack_50);
  return;
}



/* Entry: 1032ef82c; end: 1032ef85f;  */

void FUN_1032ef82c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1032ef860; end: 1032ef887;  */

void FUN_1032ef860(long param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = 0;
  (*(code *)&SUB_10067c51c)();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110639d30;
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*(code *)&SUB_100075034)(param_1,&UNK_1000ca6b0,auStack_50);
  return;
}



/* Entry: 1032ef888; end: 1032ef8c3;  */

void FUN_1032ef888(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = 0;
  (*param_2)();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*(code *)&SUB_100075034)(param_1,&UNK_1000ca6b0,auStack_50);
  return;
}



/* Entry: 1032ef8c4; end: 1032ef94b;  */

/* WARNING: Possible PIC construction at 0x0001032ef918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032ef928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ef91c) */
/* WARNING: Removing unreachable block (ram,0x0001032ef92c) */

void FUN_1032ef8c4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001032e7a8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1032ef94c; end: 1032ef95b;  */

/* WARNING: Possible PIC construction at 0x0001032ef918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032ef928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ef91c) */
/* WARNING: Removing unreachable block (ram,0x0001032ef92c) */

void FUN_1032ef94c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = 0;
  func_0x0001032e7a8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  *(undefined8 *)(lVar5 + 0x30) = uVar6;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1032ef95c; end: 1032ef98f;  */

/* WARNING: Possible PIC construction at 0x0001032ef968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032ef980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ef96c) */
/* WARNING: Removing unreachable block (ram,0x0001032ef984) */

void FUN_1032ef95c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032ef990; end: 1032efa17;  */

void FUN_1032ef990(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032efa18; end: 1032efbab;  */

void FUN_1032efa18(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1032f1320(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1032efbac; end: 1032efbcf;  */

undefined * FUN_1032efbac(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)0x112f56b48;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1032efa18(0x112f56b48,&PTR_PTR_1126e05f8,0x112f57018,&UNK_10dbae738);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    puVar3 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar3 = puVar2 + -0x20;
    }
    *(long *)(puVar1 + 0x10) = param_1;
    *(ulong *)(puVar1 + 0x18) = ((long)puVar3 >> 3) << 1 | 1;
    puVar3 = puVar1;
  }
  return puVar3;
}



/* Entry: 1032efbd0; end: 1032efc5f;  */

undefined *
FUN_1032efbd0(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1032efa18(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1032efc60; end: 1032efd5f;  */

void FUN_1032efc60(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1032f081c();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      func_0x00010145228c(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_1032efd60(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_1032f00fc(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1032efd60; end: 1032f00fb;  */

void FUN_1032efd60(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long unaff_x21;
  ulong *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar10 = 0;
    do {
      puVar7 = puStack_58;
      lVar21 = lVar10 + 1;
      if (lVar21 < lVar8) {
        lVar11 = *param_3;
        lVar15 = *(long *)(lVar11 + lVar21 * 0x10);
        plVar14 = (long *)(lVar11 + lVar10 * 0x10);
        lVar17 = *plVar14;
        plVar14 = plVar14 + 4;
        lVar16 = lVar10 + 2;
        lVar20 = lVar15;
        do {
          lVar18 = lVar16;
          lVar21 = lVar8;
          if (lVar8 == lVar18) break;
          lVar21 = *plVar14;
          bVar4 = lVar20 <= lVar21;
          plVar14 = plVar14 + 2;
          lVar16 = lVar18 + 1;
          lVar20 = lVar21;
          lVar21 = lVar18;
        } while (lVar15 < lVar17 != bVar4);
        if (lVar15 < lVar17) {
          if (lVar21 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00d0);
            (*pcVar3)();
          }
          if (lVar10 < lVar21) {
            puVar13 = (undefined8 *)(lVar11 + lVar10 * 0x10);
            lVar16 = lVar21;
            lVar8 = lVar10;
            puVar2 = (undefined8 *)(lVar11 + lVar21 * 0x10);
            do {
              puVar9 = puVar2 + -2;
              lVar16 = lVar16 + -1;
              if (lVar8 != lVar16) {
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00f0);
                  (*pcVar3)();
                }
                uVar25 = puVar13[1];
                uVar24 = *puVar13;
                uVar26 = *puVar9;
                puVar13[1] = puVar2[-1];
                *puVar13 = uVar26;
                puVar2[-1] = uVar25;
                *puVar9 = uVar24;
              }
              lVar8 = lVar8 + 1;
              puVar13 = puVar13 + 2;
              puVar2 = puVar9;
            } while (lVar8 < lVar16);
            lVar8 = param_3[1];
          }
        }
      }
      lVar16 = lVar21;
      if (lVar21 < lVar8) {
        if (SBORROW8(lVar21,lVar10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00cc);
          (*pcVar3)();
        }
        if (lVar21 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00d4);
            (*pcVar3)();
          }
          lVar20 = lVar10 + param_4;
          if (lVar8 <= lVar10 + param_4) {
            lVar20 = lVar8;
          }
          if (lVar20 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00d8);
            (*pcVar3)();
          }
          if (lVar21 != lVar20) {
            lVar8 = *param_3;
            plVar14 = (long *)(lVar8 + lVar21 * 0x10 + -0x10);
            lVar11 = lVar10 - lVar21;
            do {
              lVar15 = *(long *)(lVar8 + lVar21 * 0x10);
              lVar16 = lVar11;
              plVar19 = plVar14;
              do {
                if (*plVar19 <= lVar15) break;
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00dc);
                  (*pcVar3)();
                }
                lVar17 = plVar19[3];
                plVar19[3] = plVar19[1];
                plVar19[2] = *plVar19;
                *plVar19 = lVar15;
                plVar19[1] = lVar17;
                bVar4 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                plVar19 = plVar19 + -2;
              } while (bVar4);
              lVar21 = lVar21 + 1;
              plVar14 = plVar14 + 2;
              lVar11 = lVar11 + -1;
              lVar16 = lVar20;
            } while (lVar21 != lVar20);
          }
        }
      }
      if (lVar16 < lVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00bc);
        (*pcVar3)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar23 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar23) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar23 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar23 + 1;
      *(long *)(puVar7 + uVar23 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar7 + uVar23 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00f4);
        (*pcVar3)();
      }
      FUN_1032f0174(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1032f008c;
      lVar8 = param_3[1];
      lVar10 = lVar16;
    } while (lVar16 < lVar8);
  }
  puVar7 = puStack_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00fc);
    (*pcVar3)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar22 = (ulong *)(puVar7 + 0x10);
  uVar23 = *puVar22;
  while (1 < uVar23) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00f8);
      (*pcVar3)();
    }
    plVar14 = (long *)(puVar7 + uVar23 * 0x10);
    lVar21 = *plVar14;
    puVar1 = puVar22 + uVar23 * 2;
    uVar12 = puVar1[1];
    FUN_1032f03e4(lVar10 + lVar21 * 0x10,lVar10 + *puVar1 * 0x10,lVar10 + uVar12 * 0x10,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar12 < lVar21) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00c0);
      (*pcVar3)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00c4);
      (*pcVar3)();
    }
    *plVar14 = lVar21;
    plVar14[1] = uVar12;
    uVar12 = *puVar22;
    lVar10 = uVar12 - uVar23;
    if (uVar12 < uVar23) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1032f00c8);
      (*pcVar3)();
    }
    uVar23 = uVar12 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar10 * 0x10);
    *puVar22 = uVar23;
  }
LAB_1032f008c:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 1032f00fc; end: 1032f0173;  */

void FUN_1032f00fc(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    plVar4 = (long *)(lVar3 + param_3 * 0x10 + -0x10);
    param_1 = param_1 - param_3;
    do {
      lVar5 = *(long *)(lVar3 + param_3 * 0x10);
      lVar6 = param_1;
      plVar7 = plVar4;
      do {
        if (*plVar7 <= lVar5) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1032f0174);
          (*pcVar1)();
        }
        lVar8 = plVar7[3];
        plVar7[3] = plVar7[1];
        plVar7[2] = *plVar7;
        *plVar7 = lVar5;
        plVar7[1] = lVar8;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        plVar7 = plVar7 + -2;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar4 = plVar4 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1032f0174; end: 1032f03e3;  */

undefined8 FUN_1032f0174(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_1032f024c;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03c4);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1032f02ac:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03b4);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03bc);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f039c);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03a0);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03a8);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03b0);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_1032f024c:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03a4);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03ac);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03b8);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03c0);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1032f02ac;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03c8);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f038c);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f03e4);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_1032f03e4(lVar8 + lVar11 * 0x10,lVar8 + *plVar3 * 0x10,lVar8 + lVar9 * 0x10,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f0390);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f0394);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1032f0398);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 1032f03e4; end: 1032f05fb;  */

undefined8 FUN_1032f03e4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 4;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 0xf;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 4;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 * 2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 4);
    }
    plVar5 = param_4 + lVar2 * 2;
    plVar8 = param_1;
    if (0xf < lVar10) {
      do {
        if (param_3 <= param_2) break;
        if (*param_2 < *param_4) {
          plVar9 = param_4;
          plVar3 = param_2;
          param_2 = param_2 + 2;
        }
        else {
          plVar9 = param_4 + 2;
          plVar3 = param_4;
        }
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          lVar2 = *plVar3;
          plVar8[1] = plVar3[1];
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 2;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 * 2 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 4);
    }
    plVar3 = param_4 + lVar6 * 2;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (0xf < lVar11)) {
      do {
        plVar7 = param_2 + -2;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -2;
          plVar5 = plVar3 + -2;
          if (*plVar5 < *plVar7) break;
          if (plVar9 != plVar3) {
            lVar2 = *plVar5;
            plVar9[-1] = plVar3[-1];
            *param_3 = lVar2;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_1032f05a0;
        }
        if (plVar9 != param_2) {
          lVar2 = *plVar7;
          plVar9[-1] = param_2[-1];
          *param_3 = lVar2;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_1032f05a0:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 0xf;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Entry: 1032f05fc; end: 1032f081b;  */

undefined *
FUN_1032f05fc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032f0708);
        (*pcVar2)();
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f48450;
    func_0x0001000285a8(0x112f48450,&UNK_10db95418);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1032f081c; end: 1032f0847;  */

void FUN_1032f081c(long param_1)

{
  FUN_1032f05fc(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_release_11034f4c0);
  return;
}



/* Entry: 1032f0848; end: 1032f093f;  */

undefined * FUN_1032f0848(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112f57020);
    puVar2 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar3 = puVar9[-1];
      uVar4 = *puVar9;
      func_0x000107c61174();
      func_0x000107c61174();
      uVar5 = uVar3;
      func_0x000100121450();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032f093c);
        (*pcVar1)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar5 * 8) = uVar3;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar5 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032f0940);
        (*pcVar1)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 1032f0940; end: 1032f119f;  */

undefined * FUN_1032f0940(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5eb9c();
  lStack_c0 = *(long *)(lVar3 + -8);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  puVar14 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar3 = *(long *)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    lVar15 = 0;
    lStack_c8 = param_1 + 0x20;
    do {
      puVar6 = (undefined8 *)(lStack_c8 + lVar15 * 0x10);
      uStack_b0 = *puVar6;
      uVar2 = puVar6[1];
      uVar4 = uVar2;
      uStack_a8 = uVar2;
      func_0x000107c61434(uVar2);
      func_0x000107c5eb88(puVar14);
      func_0x000100e8b654();
      puVar5 = puVar14;
      puVar11 = PTR___sSSN_11034da80;
      func_0x000107c601f0(puVar14,PTR___sSSN_11034da80,uVar4);
      (**(code **)(lStack_c0 + 8))(puVar14,lStack_b8);
      func_0x000107c6142c(uVar2);
      puVar8 = puStack_68;
      uVar12 = (ulong)puVar5 & 0xffffffffffff;
      if (((ulong)puVar11 & 0x2000000000000000) != 0) {
        uVar12 = (ulong)puVar11 >> 0x38 & 0xf;
      }
      if (uVar12 == 0) {
LAB_1032f09c8:
        func_0x000107c6142c(puVar11);
      }
      else {
        if (*(long *)(puStack_68 + 0x10) != 0) {
          func_0x000107c6068c(&uStack_b0,*(undefined8 *)(puStack_68 + 0x28));
          puVar6 = &uStack_b0;
          func_0x000107c5fb58(puVar6,puVar5,puVar11);
          func_0x000107c606a8();
          uVar12 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
          uVar13 = (ulong)puVar6 & (uVar12 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar8 + (uVar13 >> 6) * 8 + 0x38) >> (uVar13 & 0x3f) & 1) != 0) {
            do {
              plVar1 = (long *)(*(long *)(puVar8 + 0x30) + uVar13 * 0x10);
              puVar7 = (undefined1 *)*plVar1;
              puVar9 = (undefined *)plVar1[1];
              if ((puVar7 == puVar5 && puVar9 == puVar11) ||
                 (func_0x000107c605b8(puVar7,puVar9,puVar5,puVar11,0), ((ulong)puVar7 & 1) != 0))
              goto LAB_1032f09c8;
              uVar13 = uVar13 + 1 & ~uVar12;
            } while ((*(ulong *)(puVar8 + (uVar13 >> 6) * 8 + 0x38) >> (uVar13 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c61434(puVar11);
        func_0x000100403b00(&uStack_b0,puVar5,puVar11);
        func_0x000107c6142c(uStack_a8);
        puVar8 = puVar10;
        func_0x000107c61558();
        puVar9 = puVar10;
        if (((ulong)puVar8 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          func_0x0001032f0708(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10,
                              PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar12 = *(ulong *)(puVar9 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar12) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          func_0x0001032f0708(puVar10,uVar12 + 1,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(ulong *)(puVar10 + 0x10) = uVar12 + 1;
        *(undefined1 **)(puVar10 + uVar12 * 0x10 + 0x20) = puVar5;
        *(undefined **)(puVar10 + uVar12 * 0x10 + 0x28) = puVar11;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar3);
  }
  func_0x000107c6142c(puStack_68);
  return puVar10;
}



/* Entry: 1032f11a0; end: 1032f131f;  */

undefined * FUN_1032f11a0(undefined8 param_1,undefined *param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cbf60;
  func_0x000107c61168(PTR_PTR_1126cbf60);
  puVar2 = PTR_PTR_1126cbf68;
  func_0x000107c61168(PTR_PTR_1126cbf68);
  func_0x000107c4239c();
  func_0x000107c61180();
  puVar3 = param_2;
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5bcec(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c532d4(param_1,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c43794(0x4031000000000000);
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c5c5fc(0x4031000000000000,puVar2);
    func_0x000107c61180();
    puVar3 = puVar2;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x0001032f0bbc(param_2,param_3,param_4,puVar3,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  if ((param_3 & 1) != 0) {
    func_0x000107c529c4(puVar1);
    puVar2 = param_2;
    param_2 = puVar3;
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  return puVar1;
}



/* Entry: 1032f1320; end: 1032f135f;  */

void FUN_1032f1320(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032f1360; end: 1032f1567;  */

void FUN_1032f1360(void)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  long alStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(alStack_88);
  if (alStack_88[0] != 0) {
    func_0x0001000d224c(alStack_88);
    pcVar1 = "begin()";
    func_0x0001000c10c0();
    func_0x000107c61180();
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar2 = alStack_88[0];
    func_0x000107c3d14c(alStack_88[0]);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    plVar4 = (long *)pcVar1;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c615e8(pcVar1);
    puVar8 = &UNK_11063a798;
    puVar5 = puVar8;
    func_0x000107c613fc(&UNK_11063a798,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    pcVar6 = FUN_1032f1e58;
    puVar10 = puVar5;
    (**(code **)(*plVar4 + 0x60))();
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar5);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
    *(code **)(unaff_x20 + 0x40) = pcVar6;
    *(undefined **)(unaff_x20 + 0x48) = puVar10;
    func_0x000107c615e8(uVar7);
    func_0x0001000a8868(alStack_88,uStack_70);
    uVar9 = uStack_70;
    (**(code **)(lStack_68 + 8))(uStack_70,lStack_68);
    plVar4 = (long *)pcVar1;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c615e8(pcVar1);
    func_0x000107c613fc(&UNK_11063a798,0x18,7);
    func_0x000107c61644(puVar8 + 0x10);
    uVar7 = 0x1032f1e60;
    puVar5 = puVar8;
    (**(code **)(*plVar4 + 0x60))();
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar8);
    func_0x000107c615e8(alStack_88[0]);
    func_0x000107c615e8(pcVar1);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar7;
    *(undefined **)(unaff_x20 + 0x38) = puVar5;
    func_0x000107c615e8(uVar9);
    func_0x0001000834e4(alStack_88);
  }
  return;
}



/* Entry: 1032f1568; end: 1032f1637;  */

void FUN_1032f1568(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c4dfe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1032f1a70(uVar1);
    func_0x000107c61574(param_2);
  }
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1032f1638; end: 1032f1a6f;  */

void FUN_1032f1638(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x20;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong auStack_90 [2];
  
  puVar11 = (undefined *)*param_1;
  uVar19 = param_1[1];
  uVar18 = param_1[2];
  uVar3 = param_1[3];
  uVar1 = param_1[4];
  auStack_90[0] = param_1[5];
  puVar14 = (ulong *)(unaff_x20 + 0x78);
  uVar13 = *puVar14;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xa0);
  *puVar14 = (ulong)puVar11;
  *(ulong *)(unaff_x20 + 0x80) = uVar19;
  *(ulong *)(unaff_x20 + 0x88) = uVar18;
  *(ulong *)(unaff_x20 + 0x90) = uVar3;
  *(ulong *)(unaff_x20 + 0x98) = uVar1;
  *(ulong *)(unaff_x20 + 0xa0) = auStack_90[0];
  func_0x000107c61434(uVar19);
  func_0x000107c61434(uVar1);
  FUN_1032f1e08(auStack_90,&puStack_c0);
  func_0x0001032ef47c(uVar13,uVar4,uVar12,uVar5,uVar2,uVar6);
  uVar13 = *(ulong *)(unaff_x20 + 0x70);
  if (uVar13 == 0) {
    return;
  }
  if (((uVar3 != *(ulong *)(unaff_x20 + 0x68)) || (uVar13 != uVar1)) &&
     (uVar8 = uVar3, func_0x000107c605b8(uVar3,uVar1,*(ulong *)(unaff_x20 + 0x68),uVar13,0),
     (uVar8 & 1) == 0)) {
    return;
  }
  uVar8 = auStack_90[0];
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar13 = (ulong)puVar11 & 0xffffffffffff;
  if ((uVar19 & 0x2000000000000000) != 0) {
    uVar13 = uVar19 >> 0x38 & 0xf;
  }
  if (uVar13 == 0) {
    func_0x000107c4ff34(*(undefined8 *)(unaff_x20 + 0x50));
    uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    func_0x000107c61170(uVar12);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar7 = *(undefined8 *)(unaff_x20 + 0xa0);
    *(undefined8 *)(unaff_x20 + 0x80) = 0;
    *puVar14 = 0;
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
    *(undefined8 *)(unaff_x20 + 0x88) = 0;
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    *(undefined8 *)(unaff_x20 + 0x98) = 0;
    func_0x0001032ef47c(uVar12,uVar5,uVar2,uVar6,uVar4,uVar7);
    return;
  }
  if (auStack_90[0] == 0) {
    func_0x000107c61434(uVar1);
    puVar16 = (undefined *)0x0;
LAB_1032f1810:
    puVar9 = PTR_PTR_1126cbf60;
    func_0x000107c61168(PTR_PTR_1126cbf60);
    puVar10 = PTR_PTR_1126cbf68;
    func_0x000107c61168(PTR_PTR_1126cbf68);
    func_0x000107c4239c();
    func_0x000107c61180();
    func_0x000107c5fadc(puVar11,uVar19);
    func_0x000107c5bcec(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar11);
  }
  else {
    lVar17 = *(long *)(auStack_90[0] + 0x10);
    if (lVar17 == 0) {
      lVar17 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      func_0x000107c61434(uVar1);
      if (lVar17 == 0) goto LAB_1032f1810;
    }
    else {
      puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61434(uVar1);
      func_0x000100403514(0,lVar17,0);
      puVar15 = (undefined8 *)(uVar8 + 0x38);
      puVar16 = puStack_c0;
      do {
        uVar12 = puVar15[-1];
        uVar2 = *puVar15;
        uVar13 = *(ulong *)(puVar16 + 0x10);
        uVar8 = *(ulong *)(puVar16 + 0x18);
        puStack_c0 = puVar16;
        func_0x000107c61434(uVar2);
        if (uVar8 >> 1 <= uVar13) {
          func_0x000100403514(1 < uVar8,uVar13 + 1,1);
          puVar16 = puStack_c0;
        }
        puVar15 = puVar15 + 4;
        *(ulong *)(puVar16 + 0x10) = uVar13 + 1;
        *(undefined8 *)(puVar16 + uVar13 * 0x10 + 0x20) = uVar12;
        *(undefined8 *)(puVar16 + uVar13 * 0x10 + 0x28) = uVar2;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    func_0x000107c61434(puVar16);
    FUN_1032f11a0(uVar18,puVar11,uVar19,puVar16);
    func_0x000107c6142c(puVar16);
    puVar9 = puVar11;
  }
  lVar17 = *(long *)(unaff_x20 + 0x50);
  if (lVar17 == 0) {
    func_0x000107c615f0(puVar9);
  }
  else {
    func_0x000107c615f0(puVar9);
    func_0x000107c4ff34(lVar17);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    func_0x000107c61170(uVar12);
  }
  func_0x000107c532d4(puVar9);
  func_0x000100841978();
  uVar13 = uVar18;
  func_0x00010084182c();
  uVar19 = uVar13;
  func_0x0001008418b8();
  if (puVar16 != (undefined *)0x0) {
    func_0x000107c6142c(puVar16);
  }
  puVar11 = PTR_PTR_1126dc0c0;
  func_0x000107c61168();
  puStack_c0 = (undefined *)0x3ff0000000000000;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x000107c3f54c(0,uVar18,uVar13,uVar19,0,uVar18,uVar13,uVar19);
  func_0x000107c61180();
  func_0x000107c615e8(puVar9);
  if (puVar11 == (undefined *)0x0) {
    func_0x000107c615e8(puVar9);
  }
  else {
    puVar16 = puVar11;
    func_0x000107c5de64();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61174();
    func_0x000107c4977c(uVar12);
    func_0x000107c61170(puVar16);
    func_0x000107c615e8(puVar11);
    func_0x000107c615e8(puVar9);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined **)(unaff_x20 + 0x50) = puVar16;
    func_0x000107c61170(uVar12);
  }
  uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
  *(ulong *)(unaff_x20 + 0x58) = uVar3;
  *(ulong *)(unaff_x20 + 0x60) = uVar1;
  func_0x000107c6142c(uVar12);
  return;
}



/* Entry: 1032f1a70; end: 1032f1d5b;  */

/* WARNING: Possible PIC construction at 0x0001032f1ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f1b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f1b64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f1d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f1c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032ef498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f1c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ef49c) */
/* WARNING: Removing unreachable block (ram,0x0001032f1c58) */
/* WARNING: Removing unreachable block (ram,0x0001032f1d30) */
/* WARNING: Removing unreachable block (ram,0x0001032f1b68) */
/* WARNING: Removing unreachable block (ram,0x0001032f1b7c) */
/* WARNING: Removing unreachable block (ram,0x0001032f1ca8) */
/* WARNING: Removing unreachable block (ram,0x0001032f1b9c) */
/* WARNING: Removing unreachable block (ram,0x0001032f1cb0) */
/* WARNING: Removing unreachable block (ram,0x0001032f1ce0) */
/* WARNING: Removing unreachable block (ram,0x0001032f1cc4) */
/* WARNING: Removing unreachable block (ram,0x0001032f1ce8) */
/* WARNING: Removing unreachable block (ram,0x0001032f1b58) */
/* WARNING: Removing unreachable block (ram,0x0001032f1ad8) */
/* WARNING: Removing unreachable block (ram,0x0001032f1ae0) */
/* WARNING: Removing unreachable block (ram,0x0001032f1ae8) */
/* WARNING: Removing unreachable block (ram,0x0001032f1b14) */
/* WARNING: Removing unreachable block (ram,0x0001032f1b1c) */
/* WARNING: Removing unreachable block (ram,0x0001032f1bb8) */
/* WARNING: Removing unreachable block (ram,0x0001032f1c24) */
/* WARNING: Removing unreachable block (ram,0x0001032f1bbc) */
/* WARNING: Removing unreachable block (ram,0x0001032f1c28) */
/* WARNING: Removing unreachable block (ram,0x0001032f1c2c) */
/* WARNING: Removing unreachable block (ram,0x0001032f1d40) */
/* WARNING: Removing unreachable block (ram,0x0001032f1bec) */
/* WARNING: Removing unreachable block (ram,0x0001032f1c30) */
/* WARNING: Removing unreachable block (ram,0x0001032f1bf0) */
/* WARNING: Removing unreachable block (ram,0x0001032f1bfc) */
/* WARNING: Removing unreachable block (ram,0x0001032f1c3c) */
/* WARNING: Removing unreachable block (ram,0x0001032f1c04) */
/* WARNING: Removing unreachable block (ram,0x0001032f1b2c) */
/* WARNING: Removing unreachable block (ram,0x0001032f1c38) */
/* WARNING: Removing unreachable block (ram,0x0001032f1c5c) */
/* WARNING: Removing unreachable block (ram,0x0001032ef47c) */
/* WARNING: Removing unreachable block (ram,0x0001032ef4b4) */
/* WARNING: Removing unreachable block (ram,0x0001032ef480) */

void FUN_1032f1a70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(long *)(unaff_x20 + 0x68) = lVar2;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1032f1d5c; end: 1032f1e07;  */

void FUN_1032f1d5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x0001032ef47c(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1032f1e08; end: 1032f1e57;  */

undefined8 FUN_1032f1e08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f571c8;
  func_0x0001000285a8(0x112f571c8,&UNK_10dbae7c0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1032f1e58; end: 1032f1e67;  */

void FUN_1032f1e58(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c4dfe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_1032f1a70(uVar1);
    func_0x000107c61574(lVar2);
  }
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1032f1e68; end: 1032f1ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f1e68(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032f225c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f571d8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1032f1ed4; end: 1032f1f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f1ed4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f571d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032f1f40; end: 1032f1f9f; -[_TtC45SingleLensFeatureScopedFactoryServiceProvider31SingleLensFeatureScopedServices init] */

void FUN_1032f1f40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SingleLensFeatureScopedFactoryServiceProvider.SingleLensFeatureScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032f1f6c);
  (*pcVar1)();
}



/* Entry: 1032f1fa0; end: 1032f1faf; -[_TtC45SingleLensFeatureScopedFactoryServiceProvider31SingleLensFeatureScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f1fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f571d8));
  return;
}



/* Entry: 1032f1fb0; end: 1032f201b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f1fb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11063a978;
  func_0x000107c613fc(&UNK_11063a978,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1032f22f4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032f201c; end: 1032f20b7;  */

void FUN_1032f201c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11063a888;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11063a888;
  return;
}



/* Entry: 1032f20b8; end: 1032f20ef;  */

void FUN_1032f20b8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032f20f0; end: 1032f20f7;  */

undefined8 FUN_1032f20f0(void)

{
  return 0x1b;
}



/* Entry: 1032f20f8; end: 1032f222b;  */

void FUN_1032f20f8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11063a9a0;
  func_0x000107c613fc(&UNK_11063a9a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032f22cc;
  func_0x00010058fa64(FUN_1032f22cc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032f222c; end: 1032f225b;  */

undefined ** FUN_1032f222c(void)

{
  return &PTR_DAT_113067120;
}



/* Entry: 1032f225c; end: 1032f227b;  */

void FUN_1032f225c(void)

{
  func_0x000107c61168(&PTR_PTR_1128cc0c8);
  return;
}



/* Entry: 1032f227c; end: 1032f22cb;  */

undefined1  [16] FUN_1032f227c(void)

{
  return ZEXT816(0x11063a8d8);
}



/* Entry: 1032f22cc; end: 1032f22f3;  */

void FUN_1032f22cc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1032f22f4; end: 1032f22f7;  */

void FUN_1032f22f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032f22f8; end: 1032f26cf;  */

void FUN_1032f22f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f57240,&UNK_10dbae9e0);
  puVar1 = &UNK_11063a9e0;
  func_0x000107c613fc(&UNK_11063a9e0,0xb8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_14;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_13;
  *(undefined8 *)(puVar1 + 0x30) = param_15;
  *(undefined8 *)(puVar1 + 0x38) = param_11;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_19;
  *(undefined8 *)(puVar1 + 0x50) = param_21;
  *(undefined8 *)(puVar1 + 0x58) = param_20;
  *(undefined8 *)(puVar1 + 0x60) = param_7;
  *(undefined8 *)(puVar1 + 0x68) = param_9;
  *(undefined8 *)(puVar1 + 0x70) = param_10;
  *(undefined8 *)(puVar1 + 0x78) = param_5;
  *(undefined8 *)(puVar1 + 0x80) = param_18;
  *(undefined8 *)(puVar1 + 0x88) = param_12;
  *(undefined8 *)(puVar1 + 0x90) = param_6;
  *(undefined8 *)(puVar1 + 0x98) = param_16;
  *(undefined8 *)(puVar1 + 0xa0) = param_1;
  *(undefined8 *)(puVar1 + 0xa8) = param_17;
  *(undefined8 *)(puVar1 + 0xb0) = param_4;
  func_0x000107c6157c();
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1032f26d0,puVar1);
  return;
}



/* Entry: 1032f26d0; end: 1032f271b;  */

void FUN_1032f26d0(void)

{
  long unaff_x20;
  
  func_0x0001032f24d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 1032f271c; end: 1032f272b;  */

undefined1  [16] FUN_1032f271c(void)

{
  return ZEXT816(0x11063aa08);
}



/* Entry: 1032f272c; end: 1032f2dbb;  */

void FUN_1032f272c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 auStack_70 [2];
  
  uVar13 = *param_2;
  func_0x0001000285a8(0x112f57250,&UNK_10dbaea28);
  puVar1 = auStack_70;
  auStack_70[0] = uVar13;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f57258,&UNK_10dbaea30);
  puVar2 = &UNK_11063aa50;
  func_0x000107c613fc(&UNK_11063aa50,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar3 = FUN_1032f2ed8;
  func_0x0001000823a8(FUN_1032f2ed8,puVar2);
  func_0x000100082720("CameraMatchmakingStatusDisclaimerEntryPointWrapperServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f57260,&UNK_10dbaebe0);
  puVar2 = &UNK_11063aa78;
  func_0x000107c613fc(&UNK_11063aa78,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  uVar13 = 0x1032f2ee4;
  func_0x0001000823a8(0x1032f2ee4,puVar2);
  func_0x000100082720("GamesConsentPresenterEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f57268,&UNK_10dbaea40);
  puVar2 = &UNK_11063aaa0;
  func_0x000107c613fc(&UNK_11063aaa0,0x90,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_9;
  *(undefined8 *)(puVar2 + 0x20) = param_10;
  *(undefined8 *)(puVar2 + 0x28) = param_11;
  *(undefined8 *)(puVar2 + 0x30) = param_12;
  *(undefined8 *)(puVar2 + 0x38) = param_13;
  *(undefined8 *)(puVar2 + 0x40) = param_14;
  *(undefined8 *)(puVar2 + 0x48) = param_15;
  *(undefined8 *)(puVar2 + 0x50) = param_16;
  *(undefined8 *)(puVar2 + 0x58) = param_17;
  *(undefined8 *)(puVar2 + 0x60) = param_18;
  *(undefined8 *)(puVar2 + 0x68) = param_4;
  *(undefined8 *)(puVar2 + 0x70) = param_8;
  *(undefined8 *)(puVar2 + 0x78) = param_19;
  *(undefined8 *)(puVar2 + 0x80) = param_20;
  *(undefined8 *)(puVar2 + 0x88) = param_21;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
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
  pcVar4 = FUN_1032f2ef4;
  func_0x0001000823a8(FUN_1032f2ef4,puVar2);
  func_0x000100082720("InLensCreationTrendingListEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f57270,&UNK_10dbaeef0);
  puVar2 = &UNK_11063aac8;
  func_0x000107c613fc(&UNK_11063aac8,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_9);
  pcVar5 = FUN_1032f2f38;
  func_0x0001000823a8(FUN_1032f2f38,puVar2);
  func_0x000100082720("LensPlusUpsellCardHostEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f57278,&UNK_10dbaea50);
  puVar2 = &UNK_11063aaf0;
  func_0x000107c613fc(&UNK_11063aaf0,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_22;
  *(undefined8 *)(puVar2 + 0x20) = param_23;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  pcVar6 = FUN_1032f2f74;
  func_0x0001000823a8(FUN_1032f2f74,puVar2);
  func_0x000100082720("LensPromptPrivacyDisclaimerEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar7 = FUN_1032f20b8;
  func_0x0001000823a8(FUN_1032f20b8,0);
  pcVar8 = "SingleLensFeatureScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SingleLensFeatureScopedServicesCleanupRelayServiceProvider",0x3a,2);
  FUN_1032f53c0();
  func_0x000100082720("SingleLensFeatureScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f57280,&UNK_10dbaea60);
  puVar2 = &UNK_11063ab18;
  func_0x000107c613fc(&UNK_11063ab18,0x50,7);
  *(code **)(puVar2 + 0x10) = pcVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar13;
  *(code **)(puVar2 + 0x20) = pcVar4;
  *(code **)(puVar2 + 0x28) = pcVar5;
  *(code **)(puVar2 + 0x30) = pcVar6;
  *(undefined8 **)(puVar2 + 0x38) = puVar1;
  *(char **)(puVar2 + 0x40) = pcVar8;
  *(code **)(puVar2 + 0x48) = pcVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(pcVar7);
  uVar9 = 0x1032f2f80;
  func_0x0001000823a8(0x1032f2f80,puVar2);
  func_0x000100082720("SingleLensFeatureScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f571e0,&UNK_10dbae7e0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1032f2f94;
  func_0x0001000823a8(0x1032f2f94,uVar9);
  func_0x000100082720("SingleLensFeatureScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f571d0,&UNK_10dbae7d0);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x1032f2f9c;
  func_0x0001000823a8(0x1032f2f9c,uVar10);
  func_0x000100082720("SingleLensFeatureScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_11063ab40;
  func_0x000107c613fc(&UNK_11063ab40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar11;
  *(code **)(puVar2 + 0x18) = pcVar7;
  func_0x000107c6157c(pcVar7);
  pcVar12 = FUN_1032f2fd0;
  func_0x0001000823a8(FUN_1032f2fd0,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SingleLensFeatureScopeEntryPointProvider",0x28,2);
  *param_1 = pcVar12;
  return;
}



/* Entry: 1032f2dbc; end: 1032f2ed7;  */

void FUN_1032f2dbc(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032f2ed8; end: 1032f2ef3;  */

void FUN_1032f2ed8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_1032f3314();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_1033cb65c(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x0001033cb2dc();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c6157c();
  func_0x0001033cb334();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 1032f2ef4; end: 1032f2f37;  */

void FUN_1032f2ef4(void)

{
  long unaff_x20;
  
  FUN_1032f3804(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1032f2f38; end: 1032f2f3f;  */

void FUN_1032f2f38(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  FUN_1032f44d0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_10330b328(0);
  func_0x000107c613fc();
  uVar2 = uStack_48;
  FUN_10330adfc(uStack_48,uStack_50);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  func_0x000107c61174(uStack_50);
  uVar3 = uStack_50;
  func_0x000107c61174();
  uVar4 = uStack_48;
  func_0x000107c61174(uStack_48);
  func_0x000107c6157c(uVar2);
  FUN_10330ae10();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar2);
  *param_1 = lVar1;
  return;
}



/* Entry: 1032f2f40; end: 1032f2f73;  */

void FUN_1032f2f40(void)

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



/* Entry: 1032f2f74; end: 1032f2fa3;  */

void FUN_1032f2f74(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_1032f4880();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_103418f94(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_1034185b8();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c6157c();
  FUN_1034185e8();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 1032f2fa4; end: 1032f2fcf;  */

void FUN_1032f2fa4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032f2fd0; end: 1032f2fd7;  */

void FUN_1032f2fd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11063a888;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11063a888;
  return;
}



/* Entry: 1032f2fd8; end: 1032f30fb;  */

void FUN_1032f2fd8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_1032f3314();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_1033cb65c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001033cb2dc();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  func_0x0001033cb334();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1032f30fc; end: 1032f31db;  */

long FUN_1032f30fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_1033cb65c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001033cb2dc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x0001033cb334();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 1032f31dc; end: 1032f320f;  */

void FUN_1032f31dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032f3210; end: 1032f3217;  */

undefined8 FUN_1032f3210(void)

{
  return 0x1b;
}



/* Entry: 1032f3218; end: 1032f329b;  */

void FUN_1032f3218(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032f3354,param_2,FUN_1032f3358,param_2,FUN_1032f3380,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032f329c; end: 1032f32e3;  */

undefined8 FUN_1032f329c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001033cb500();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1032f32e4; end: 1032f3313;  */

undefined ** FUN_1032f32e4(void)

{
  return &PTR_DAT_113067120;
}



/* Entry: 1032f3314; end: 1032f3333;  */

void FUN_1032f3314(void)

{
  func_0x000107c61168(&PTR_PTR_112f572f0);
  return;
}


