/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10277a384; end: 10277a3bf;  */

void FUN_10277a384(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010277a3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10277a3c0; end: 10277a527;  */

int FUN_10277a3c0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10277a43c;
        goto LAB_10277a420;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10277a420:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10277a43c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10277a528; end: 10277a567;  */

void FUN_10277a528(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad7894;
  func_0x000107c61520(&UNK_10dad7894,&UNK_110546d48);
  puRam0000000112ebd210 = puVar1;
  return;
}



/* Entry: 10277a568; end: 10277a5f3;  */

void FUN_10277a568(void)

{
  func_0x0001000285a8(0x112ebc8e0,&UNK_10dad6780);
  func_0x000107c613fc();
  func_0x0001002acf1c(0x10277a5b4,0);
  return;
}



/* Entry: 10277a5f4; end: 10277a617;  */

void FUN_10277a5f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 10277a618; end: 10277a67f;  */

void FUN_10277a618(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277a680,uVar1,uVar2);
  return;
}



/* Entry: 10277a680; end: 10277a6b3;  */

void FUN_10277a680(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010277a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277a6b4; end: 10277a72b;  */

/* WARNING: Possible PIC construction at 0x00010277a6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010277a6ec) */
/* WARNING: Removing unreachable block (ram,0x00010277a6f8) */
/* WARNING: Removing unreachable block (ram,0x00010277a6fc) */

void FUN_10277a6b4(void)

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
    puVar3 = (ulong *)0x112ebd2b8;
    plVar5 = (long *)&UNK_10dad79a0;
  }
  else {
    puVar3 = (ulong *)0x112ebd2c0;
    plVar5 = (long *)&UNK_10dad79a8;
    unaff_x30 = 0x10277a6ec;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
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



/* Entry: 10277a72c; end: 10277a827;  */

long FUN_10277a72c(ulong param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_80 [80];
  
  func_0x000102787a38();
  if ((param_1 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    lVar1 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar6 = auStack_80;
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0e2b8;
    func_0x000107c5faec();
    *(undefined8 *)(lVar1 + 0x20) = ppuVar2;
    *(undefined1 **)(lVar1 + 0x28) = puVar6;
    FUN_10277a6b4();
    func_0x000107c613fc();
    ppuVar2[3] = (undefined *)0x2;
    ppuVar2[2] = (undefined *)0x1;
    puVar3 = (undefined *)0x0;
    func_0x0001038eadec();
    ppuVar2[4] = puVar3;
    uVar4 = 0x112ebd2b0;
    func_0x0001000285a8(0x112ebd2b0,&UNK_10dad7998);
    *(undefined8 *)(lVar1 + 0x48) = uVar4;
    *(undefined ***)(lVar1 + 0x30) = ppuVar2;
    lVar5 = lVar1;
    func_0x000100214a84(lVar1);
    func_0x000107c61588(lVar1);
    func_0x000100f15a0c((undefined8 *)(lVar1 + 0x20));
  }
  return lVar5;
}



/* Entry: 10277a828; end: 10277a837;  */

undefined1  [16] FUN_10277a828(void)

{
  return ZEXT816(0x110546de8);
}



/* Entry: 10277a838; end: 10277a857;  */

void FUN_10277a838(void)

{
  func_0x000107c61168(&PTR_PTR_112ebd258);
  return;
}



/* Entry: 10277a858; end: 10277a8e3;  */

void FUN_10277a858(void)

{
  func_0x0001000285a8(0x112ebc8e0,&UNK_10dad6780);
  func_0x000107c613fc();
  func_0x0001002acf1c(0x10277a8a4,0);
  return;
}



/* Entry: 10277a8e4; end: 10277a907;  */

void FUN_10277a8e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 10277a908; end: 10277a96f;  */

void FUN_10277a908(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277a970,uVar1,uVar2);
  return;
}



/* Entry: 10277a970; end: 10277a9a3;  */

void FUN_10277a970(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010277a9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277a9a4; end: 10277aa1b;  */

/* WARNING: Possible PIC construction at 0x00010277a9d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010277a9dc) */
/* WARNING: Removing unreachable block (ram,0x00010277a9e8) */
/* WARNING: Removing unreachable block (ram,0x00010277a9ec) */

void FUN_10277a9a4(void)

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
    puVar3 = (ulong *)0x112ebd378;
    plVar5 = (long *)&UNK_10dad7a80;
  }
  else {
    puVar3 = (ulong *)0x112ebd380;
    plVar5 = (long *)&UNK_10dad7a88;
    unaff_x30 = 0x10277a9dc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
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



/* Entry: 10277aa1c; end: 10277ac47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10277aa1c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_180 [320];
  
  puVar8 = auStack_180;
  if (*(char *)(param_1 + _DAT_112ebda10 + 0x10) == '\x01' ||
      *(long *)(param_1 + _DAT_112ebda10 + 8) < 2) {
    lVar1 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b3af0;
    func_0x000107c610f8();
    func_0x000107c48df8();
    lVar3 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 0xc;
    *(undefined8 *)(lVar3 + 0x10) = 6;
    ppuVar4 = &PTR____CFConstantStringClassReference_110f0e2b8;
    func_0x000107c5faec();
    *(undefined8 *)(lVar3 + 0x20) = ppuVar4;
    *(undefined1 **)(lVar3 + 0x28) = puVar8;
    FUN_10277a9a4();
    func_0x000107c613fc();
    ppuVar4[3] = (undefined *)0x2;
    ppuVar4[2] = (undefined *)0x1;
    puVar5 = (undefined *)0x0;
    FUN_10277ac78(0,0x112ebd360,&PTR_PTR_1126b3b00);
    ppuVar4[4] = puVar5;
    uVar6 = 0x112ebd368;
    puVar5 = &UNK_10dad7a78;
    func_0x0001000285a8();
    *(undefined8 *)(lVar3 + 0x48) = uVar6;
    *(undefined ***)(lVar3 + 0x30) = ppuVar4;
    ppuVar4 = &PTR____CFConstantStringClassReference_110eb9618;
    func_0x000107c5faec();
    *(undefined ***)(lVar3 + 0x50) = ppuVar4;
    *(undefined **)(lVar3 + 0x58) = puVar5;
    uVar6 = 0x112ebd370;
    uVar7 = 0;
    FUN_10277ac78(0,0x112ebd370,&PTR_PTR_1126b3af0);
    *(undefined8 *)(lVar3 + 0x78) = uVar7;
    *(undefined **)(lVar3 + 0x60) = puVar2;
    ppuVar4 = &PTR____CFConstantStringClassReference_110eb9638;
    func_0x000107c5faec();
    *(undefined ***)(lVar3 + 0x80) = ppuVar4;
    *(undefined8 *)(lVar3 + 0x88) = uVar6;
    puVar2 = PTR___sSdN_11034dd90;
    *(undefined **)(lVar3 + 0xa8) = PTR___sSdN_11034dd90;
    *(undefined8 *)(lVar3 + 0x90) = 0x3ff0000000000000;
    ppuVar4 = &PTR____CFConstantStringClassReference_110eb9658;
    func_0x000107c5faec();
    *(undefined ***)(lVar3 + 0xb0) = ppuVar4;
    *(undefined8 *)(lVar3 + 0xb8) = uVar6;
    puVar5 = PTR___sSbN_11034dd40;
    *(undefined **)(lVar3 + 0xd8) = PTR___sSbN_11034dd40;
    *(undefined1 *)(lVar3 + 0xc0) = 1;
    ppuVar4 = &PTR____CFConstantStringClassReference_110f0d618;
    func_0x000107c5faec();
    *(undefined ***)(lVar3 + 0xe0) = ppuVar4;
    *(undefined8 *)(lVar3 + 0xe8) = uVar6;
    *(undefined **)(lVar3 + 0x108) = puVar5;
    *(undefined1 *)(lVar3 + 0xf0) = 1;
    ppuVar4 = &PTR____CFConstantStringClassReference_110f0d5f8;
    func_0x000107c5faec();
    *(undefined ***)(lVar3 + 0x110) = ppuVar4;
    *(undefined8 *)(lVar3 + 0x118) = uVar6;
    *(undefined **)(lVar3 + 0x138) = puVar2;
    *(undefined8 *)(lVar3 + 0x120) = 0x402e000000000000;
    lVar1 = lVar3;
    func_0x000100214a84(lVar3);
    func_0x000107c61588(lVar3);
    uVar6 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408((undefined8 *)(lVar3 + 0x20),6,uVar6);
  }
  return lVar1;
}



/* Entry: 10277ac48; end: 10277ac57;  */

undefined1  [16] FUN_10277ac48(void)

{
  return ZEXT816(0x110546ed0);
}



/* Entry: 10277ac58; end: 10277ac77;  */

void FUN_10277ac58(void)

{
  func_0x000107c61168(&PTR_PTR_112ebd308);
  return;
}



/* Entry: 10277ac78; end: 10277ad03;  */

void FUN_10277ac78(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10277ad04; end: 10277add3;  */

void FUN_10277ad04(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 unaff_x20;
  
  FUN_10277b05c();
  lVar2 = param_2;
  func_0x000107c613fc();
  puVar3 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar3[3] = 2;
  puVar3[2] = 1;
  puVar4 = puVar3;
  func_0x000103bb9c70();
  uVar1 = puVar4[1];
  puVar3[4] = *puVar4;
  puVar3[5] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar3;
  func_0x000100111634();
  func_0x000107c61588(puVar3);
  func_0x000100bcb1dc(puVar3 + 4);
  *(undefined8 **)(lVar2 + 0x10) = puVar4;
  *(undefined8 *)(lVar2 + 0x18) = unaff_x20;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110546f90;
  *param_1 = lVar2;
  func_0x000107c6157c();
  return;
}



/* Entry: 10277add4; end: 10277ae83;  */

long FUN_10277add4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x000103bb9c70();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar1;
  func_0x000107c61434();
  puVar3 = puVar2;
  func_0x000100111634();
  func_0x000107c61588(puVar2);
  func_0x000100bcb1dc(puVar2 + 4);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return unaff_x20;
}



/* Entry: 10277ae84; end: 10277aeaf;  */

void FUN_10277ae84(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10277aeb0; end: 10277aebb;  */

void FUN_10277aeb0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 10277aebc; end: 10277aedf;  */

void FUN_10277aebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10277aee0(param_1,param_2,param_4);
  return;
}



/* Entry: 10277aee0; end: 10277b04b;  */

void FUN_10277aee0(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (((ulong)param_1 & 1) == 0) {
    return;
  }
  if ((param_3 == 0) || (FUN_10278552c(), *(long *)(param_3 + 0x10) == 0)) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar1 = param_1[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_3);
    uVar4 = uVar1;
    func_0x000100029284(lVar2);
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(param_3);
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar2 * 0x20,&uStack_80);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_3);
      if (lStack_68 != 0) {
        plVar3 = &lStack_50;
        func_0x000107c6147c(plVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)plVar3 & 1) == 0) {
          return;
        }
        func_0x000100083b20(&uStack_80);
        func_0x0001000a8868(&uStack_80,lStack_68);
        lVar2 = lStack_50;
        (**(code **)(lStack_60 + 0x20))(lStack_50,uStack_48,lStack_68,lStack_60);
        func_0x000107c6142c(uStack_48);
        if (lVar2 != 0) {
          func_0x0001000834e4(&uStack_80);
          FUN_102788484();
          func_0x000107c61170(lVar2);
          return;
        }
        func_0x0001000834e4(&uStack_80);
        return;
      }
    }
  }
  func_0x00010006e7f4(&uStack_80);
  return;
}



/* Entry: 10277b04c; end: 10277b05b;  */

undefined1  [16] FUN_10277b04c(void)

{
  return ZEXT816(0x110546fb8);
}



/* Entry: 10277b05c; end: 10277b07b;  */

void FUN_10277b05c(void)

{
  func_0x000107c61168(&PTR_PTR_112ebd3c8);
  return;
}



/* Entry: 10277b07c; end: 10277b0c7;  */

void FUN_10277b07c(void)

{
  func_0x0001000285a8(0x112ebd430,&UNK_10dad7b50);
  func_0x000107c613fc();
  func_0x0001002acf1c(FUN_10277b0c8,0);
  return;
}



/* Entry: 10277b0c8; end: 10277b0ef;  */

void FUN_10277b0c8(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &UNK_1105470f8;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105470a8;
  return;
}



/* Entry: 10277b0f0; end: 10277b167;  */

void FUN_10277b0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10277c0cc;
                    /* WARNING: Could not recover jumptable at 0x00010277b164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10277b768(param_1,param_2,param_3);
  return;
}



/* Entry: 10277b168; end: 10277b23b;  */

void FUN_10277b168(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    **(long **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
    return;
  }
  func_0x000107c4b800();
  func_0x000107c61180();
  puVar1 = param_4;
  func_0x000107c5faec();
  func_0x000107c61170();
  FUN_10277bed4();
  puVar2 = &UNK_110547228;
  func_0x000107c613f8(&UNK_110547228,param_4,0,0);
  *param_4 = puVar1;
  param_4[1] = param_2;
  *(undefined1 *)(param_4 + 2) = 0;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar1 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar1 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar3);
  return;
}



/* Entry: 10277b23c; end: 10277b29b;  */

void FUN_10277b23c(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10277b29c;
                    /* WARNING: Could not recover jumptable at 0x00010277b298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10277bb18(param_1);
  return;
}



/* Entry: 10277b29c; end: 10277b2e3;  */

void FUN_10277b29c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010277b2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10277b2e4; end: 10277b4fb;  */

void FUN_10277b2e4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_1 != 0) {
    **(long **)(*(long *)(param_4 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_4);
    return;
  }
  if (param_3 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
LAB_10277b444:
    puVar2 = &uStack_60;
    func_0x00010006e7f4();
  }
  else {
    uVar1 = *(undefined8 *)PTR__PHImageErrorKey_1103481c0;
    func_0x000107c5faec();
    uStack_98 = uVar1;
    lStack_90 = param_2;
    func_0x000107c61434(param_2);
    puVar3 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&uStack_88,&uStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_3 + 0x10) == 0) {
LAB_10277b3c8:
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x000107c61434(param_3);
      puVar2 = &uStack_88;
      func_0x000100df95d0(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        func_0x000107c6142c(param_3);
        goto LAB_10277b3c8;
      }
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)puVar2 * 0x20,&uStack_60);
      func_0x000107c6142c(param_2);
      param_2 = param_3;
    }
    func_0x000107c6142c(param_2);
    func_0x0001007bbff0(&uStack_88);
    if (lStack_48 == 0) goto LAB_10277b444;
    puVar2 = &uStack_88;
    func_0x000107c6147c(puVar2,&uStack_60,PTR___sypN_11034f1a8 + 8,&UNK_110547228,6);
    if (((ulong)puVar2 & 1) != 0) {
      FUN_10277bed4();
      puVar3 = &UNK_110547228;
      func_0x000107c613f8(&UNK_110547228,puVar2,0,0);
      *puVar2 = uStack_88;
      puVar4 = puStack_80;
      uVar5 = uStack_78;
      goto LAB_10277b4a0;
    }
  }
  FUN_10277bed4();
  puVar3 = &UNK_110547228;
  func_0x000107c613f8(&UNK_110547228,puVar2,0,0);
  puVar4 = puVar2;
  func_0x000107c4b800();
  func_0x000107c61180();
  uVar1 = param_5;
  func_0x000107c5faec();
  func_0x000107c61170(param_5);
  *puVar2 = uVar1;
  uVar5 = 1;
LAB_10277b4a0:
  puVar2[1] = puVar4;
  *(undefined1 *)(puVar2 + 2) = uVar5;
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar2 = puVar3;
  func_0x000107c61454(param_4,uVar1);
  return;
}



/* Entry: 10277b4fc; end: 10277b5bb;  */

void FUN_10277b4fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 10277b5bc; end: 10277b68f;  */

undefined * FUN_10277b5bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x000107c61168(PTR__OBJC_CLASS___PHAsset_1126bd898);
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  func_0x000107c61434(param_2);
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
  func_0x000107c42fcc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  puVar4 = puVar1;
  func_0x000107c43638(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 10277b690; end: 10277b707;  */

void FUN_10277b690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10277c0d0;
                    /* WARNING: Could not recover jumptable at 0x00010277b704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10277b768(param_1,param_2,param_3);
  return;
}



/* Entry: 10277b708; end: 10277b767;  */

void FUN_10277b708(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10277c0d4;
                    /* WARNING: Could not recover jumptable at 0x00010277b764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10277bb18(param_1);
  return;
}



/* Entry: 10277b768; end: 10277b7df;  */

void FUN_10277b768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277b7e0,uVar1,uVar2);
  return;
}



/* Entry: 10277b7e0; end: 10277b883;  */

void FUN_10277b7e0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 200) = puVar1;
  func_0x000107c56a38();
  func_0x000107c53ff4(puVar1);
  func_0x000107c57e40();
  func_0x000107c5fce8();
  *(undefined **)(unaff_x22 + 0xd0) = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(undefined **)(unaff_x22 + 0xd8) = puVar1;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277b884,puVar1);
  return;
}



/* Entry: 10277b884; end: 10277b9b7;  */

void FUN_10277b884(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10277b9b8;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x000107c61168(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = &UNK_110547168;
  func_0x000107c613fc(&UNK_110547168,0x20,7);
  puVar5 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(code **)(unaff_x22 + 0x70) = FUN_10277bf14;
  *(undefined **)(unaff_x22 + 0x78) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_100f9eee0;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110547180;
  func_0x000107c60bc4(puVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c5037c(uVar8,uVar7,puVar2);
  func_0x000107c60bd0(puVar5);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10277b9b8; end: 10277ba23;  */

void FUN_10277b9b8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xe8) = *(long *)(lVar4 + 0x30);
  if (*(long *)(lVar4 + 0x30) == 0) {
    *(undefined8 *)(lVar4 + 0xf0) = *(undefined8 *)(lVar4 + 0x80);
    uVar2 = *(undefined8 *)(lVar4 + 0xd8);
    uVar3 = *(undefined8 *)(lVar4 + 0xe0);
    pcVar1 = FUN_10277ba24;
  }
  else {
    func_0x000107c61654();
    uVar2 = *(undefined8 *)(lVar4 + 0xd8);
    uVar3 = *(undefined8 *)(lVar4 + 0xe0);
    pcVar1 = (code *)0x10277baa0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10277ba24; end: 10277bb17;  */

void FUN_10277ba24(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10277ba5c,*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 10277bb18; end: 10277bb8b;  */

void FUN_10277bb18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277bb8c,uVar1,uVar2);
  return;
}



/* Entry: 10277bb8c; end: 10277bc13;  */

void FUN_10277bb8c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0xb8) = puVar1;
  func_0x000107c56a38();
  func_0x000107c5fce8();
  *(undefined **)(unaff_x22 + 0xc0) = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(undefined **)(unaff_x22 + 200) = puVar1;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277bc14,puVar1);
  return;
}



/* Entry: 10277bc14; end: 10277bd2f;  */

void FUN_10277bc14(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10277bd30;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x000107c61168(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = &UNK_110547118;
  func_0x000107c613fc(&UNK_110547118,0x20,7);
  puVar5 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x10277beb0;
  *(undefined **)(unaff_x22 + 0x78) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10277b4fc;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110547130;
  func_0x000107c60bc4(puVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c5030c(puVar2);
  func_0x000107c60bd0(puVar5);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10277bd30; end: 10277bd9b;  */

void FUN_10277bd30(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xd8) = *(long *)(lVar4 + 0x30);
  if (*(long *)(lVar4 + 0x30) == 0) {
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(lVar4 + 0x80);
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_10277bd9c;
  }
  else {
    func_0x000107c61654();
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = (code *)0x10277be18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10277bd9c; end: 10277be8f;  */

void FUN_10277bd9c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10277bdd4,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0));
  return;
}



/* Entry: 10277be90; end: 10277bed3;  */

undefined1  [16] FUN_10277be90(void)

{
  return ZEXT816(0x1105470d8);
}



/* Entry: 10277bed4; end: 10277bf13;  */

void FUN_10277bed4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad7c50;
  func_0x000107c61520(&UNK_10dad7c50,&UNK_110547228);
  puRam0000000112ebd438 = puVar1;
  return;
}



/* Entry: 10277bf14; end: 10277bf3b;  */

void FUN_10277bf14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    **(long **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar1);
    return;
  }
  func_0x000107c4b800();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5faec();
  func_0x000107c61170();
  FUN_10277bed4();
  puVar4 = &UNK_110547228;
  func_0x000107c613f8(&UNK_110547228,puVar2,0,0);
  *puVar2 = puVar3;
  puVar2[1] = param_2;
  *(undefined1 *)(puVar2 + 2) = 0;
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar2 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar1,uVar5);
  return;
}



/* Entry: 10277bf3c; end: 10277bfd7;  */

undefined8 * FUN_10277bf3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010277bf1c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10277bfd8; end: 10277c01b;  */

undefined8 * FUN_10277bfd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x00010277bf34(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10277c01c; end: 10277c0e7;  */

int FUN_10277c01c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10277c0e8; end: 10277c157; -[_TtC40MemTwoOperaSnapMediaPluginImplementation30MemTwoOperaSnapMediaImageStore imageForKey:completion:] */

/* WARNING: Possible PIC construction at 0x00010277c140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010277c144) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277c0e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebd440);
  func_0x000107c61174();
  func_0x000107c4d9c0(uVar1);
  func_0x000107c61180();
  (**(code **)(param_4 + 0x10))(param_4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10277c158; end: 10277c1bb; -[_TtC40MemTwoOperaSnapMediaPluginImplementation30MemTwoOperaSnapMediaImageStore init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277c158(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ebd440;
  puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10277c1bc; end: 10277c1ef;  */

void FUN_10277c1bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10277c1f0; end: 10277c1ff; -[_TtC40MemTwoOperaSnapMediaPluginImplementation30MemTwoOperaSnapMediaImageStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277c1f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebd440));
  return;
}



/* Entry: 10277c200; end: 10277c21f;  */

void FUN_10277c200(void)

{
  func_0x000107c61168(&PTR_PTR_112860060);
  return;
}



/* Entry: 10277c220; end: 10277c43f;  */

void FUN_10277c220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110547270;
  func_0x000107c613fc(&UNK_110547270,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x0001000285a8(0x112ebc8e0,&UNK_10dad6780);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001002acf1c(FUN_10277c440,puVar1);
  return;
}



/* Entry: 10277c440; end: 10277c473;  */

void FUN_10277c440(void)

{
  long unaff_x20;
  
  func_0x00010277c334(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10277c474; end: 10277c517;  */

long FUN_10277c474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x58) = 2;
  uVar1 = 0;
  FUN_10277c200();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x50) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_7;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_8;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  return unaff_x20;
}



/* Entry: 10277c518; end: 10277c5d3;  */

uint FUN_10277c518(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  uint uVar5;
  long lStack_38;
  
  uVar5 = (uint)*(byte *)(unaff_x20 + 0x58);
  if (*(byte *)(unaff_x20 + 0x58) == 2) {
    func_0x000100083b20(&lStack_38);
    lVar2 = lStack_38;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10277c5d4);
      (*pcVar1)();
    }
    uVar3 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f0bad70);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    uVar5 = (uint)lVar4;
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    *(char *)(unaff_x20 + 0x58) = (char)lVar4;
  }
  return uVar5 & 1;
}



/* Entry: 10277c5d4; end: 10277c89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10277c5d4(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined1 auStack_140 [224];
  
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5d9bc();
  func_0x000107c61170();
  FUN_102787314();
  puVar4 = puVar2;
  FUN_102782f78();
  param_3 = param_3 & 0xff;
  func_0x000107c61170(puVar2);
  puVar2 = (undefined *)0x0;
  if (param_3 != 1) {
    puVar2 = puVar4;
  }
  uVar7 = 0;
  if (param_3 != 1) {
    uVar7 = param_2;
  }
  FUN_10278309c(puVar2,uVar7);
  puVar2 = puVar3;
  FUN_102787314();
  puVar5 = puVar2;
  FUN_1027af494();
  func_0x000107c61170(puVar2);
  if (puVar5 != (undefined *)0x0) {
    if ((ulong)puVar5 >> 0x3e != 0) {
      puVar2 = puVar5;
      if (-1 < (long)puVar5) {
        puVar2 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      }
      func_0x000107c60480(puVar2);
    }
    func_0x000107c6142c(puVar5);
  }
  if (param_3 != 1) {
    puStack_158 = puVar4;
    uStack_150 = param_2;
    FUN_1027827a4(auStack_168,&puStack_158);
    func_0x000107c6142c(uStack_160);
  }
  puVar2 = (undefined *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar9 = auStack_140;
  func_0x000107c61534();
  *(undefined8 *)(puVar2 + 0x18) = 8;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c038;
  func_0x000107c5faec();
  *(undefined ***)(puVar2 + 0x20) = ppuVar6;
  *(undefined1 **)(puVar2 + 0x28) = puVar9;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar7 = 0;
  FUN_10277c200();
  *(undefined8 *)(puVar2 + 0x48) = uVar7;
  *(undefined8 *)(puVar2 + 0x30) = uVar10;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0e978;
  func_0x000107c5faec();
  *(undefined ***)(puVar2 + 0x50) = ppuVar6;
  *(undefined1 **)(puVar2 + 0x58) = puVar9;
  uVar7 = 0;
  func_0x0001044434c0();
  *(undefined8 *)(puVar2 + 0x78) = uVar7;
  *(undefined **)(puVar2 + 0x60) = puVar3;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0bd78;
  func_0x000107c5faec();
  *(undefined ***)(puVar2 + 0x80) = ppuVar6;
  *(undefined1 **)(puVar2 + 0x88) = puVar9;
  *(undefined **)(puVar2 + 0xa8) = PTR___sSbN_11034dd40;
  puVar2[0x90] = 1;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c998;
  func_0x000107c5faec();
  *(undefined ***)(puVar2 + 0xb0) = ppuVar6;
  *(undefined1 **)(puVar2 + 0xb8) = puVar9;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebd9d8);
  *(undefined **)(puVar2 + 0xd8) = PTR___sSSN_11034da80;
  lVar11 = puVar1[1];
  if (lVar11 == 0) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_112ebd9d0);
    lVar8 = ((undefined8 *)(param_1 + _DAT_112ebd9d0))[1];
    func_0x000107c61434();
  }
  else {
    uVar7 = *puVar1;
    lVar8 = lVar11;
  }
  *(undefined8 *)(puVar2 + 0xc0) = uVar7;
  *(long *)(puVar2 + 200) = lVar8;
  func_0x000107c61174(uVar10);
  func_0x000107c61174(puVar3);
  func_0x000107c61434(lVar11);
  puVar4 = puVar2;
  func_0x000100214a84();
  func_0x000107c61588(puVar2);
  uVar7 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(puVar2 + 0x20,4,uVar7);
  FUN_102783268(param_1);
  puVar2 = puVar4;
  func_0x000107c61558(puVar4);
  puStack_158 = puVar4;
  FUN_102783bfc(param_1,&UNK_100216600,0,puVar2,&puStack_158);
  func_0x000107c61170(puVar3);
  func_0x000107c6142c(param_1);
  return puStack_158;
}



/* Entry: 10277c8a0; end: 10277c933;  */

void FUN_10277c8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277c934,uVar2,uVar3);
  return;
}



/* Entry: 10277c934; end: 10277ca6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277c934(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  
  lVar12 = *(long *)(unaff_x22 + 0x38);
  FUN_102787314();
  *(ulong *)(unaff_x22 + 0x70) = param_1;
  plVar6 = (long *)(lVar12 + _DAT_112ebd9f0);
  lVar12 = plVar6[1];
  if (lVar12 != 0) {
    lVar13 = *plVar6;
    lVar4 = plVar6[2];
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar10 = *(long *)(unaff_x22 + 0x30);
    func_0x00010278471c(unaff_x22 + 0x10,uVar1);
    uVar9 = param_1;
    (**(code **)(lVar10 + 8))(param_1,uVar1,lVar10);
    FUN_1027846b8(unaff_x22 + 0x10);
    if ((uVar9 & 1) != 0) {
      plVar6 = (long *)0x1f0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x78) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_10277ca6c;
      lVar2 = *(long *)(unaff_x22 + 0x50);
      lVar10 = *(long *)(unaff_x22 + 0x38);
      lVar3 = *(long *)(unaff_x22 + 0x40);
      plVar6[0x2c] = *(long *)(unaff_x22 + 0x48);
      plVar6[0x2d] = lVar2;
      *(char *)(plVar6 + 0x3d) = (char)lVar4;
      plVar6[0x2a] = lVar12;
      plVar6[0x2b] = lVar3;
      plVar6[0x28] = lVar10;
      plVar6[0x29] = lVar13;
      lVar12 = 0;
      func_0x000107c5fcbc();
      plVar6[0x2e] = lVar12;
      lVar12 = *(long *)(lVar12 + -8);
      plVar6[0x2f] = lVar12;
      uVar9 = *(long *)(lVar12 + 0x40) + 0xf;
      uVar8 = uVar9 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar6[0x30] = uVar8;
      uVar9 = uVar9 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar6[0x31] = uVar9;
      lVar10 = 0;
      func_0x000107c5fcec();
      puVar5 = PTR___sScMMa_11034fc70;
      lVar12 = lVar10;
      func_0x000107c5fce8();
      plVar6[0x32] = lVar12;
      lVar12 = 0x112d45220;
      FUN_102784678(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
      func_0x000107c5fca8();
      plVar6[0x33] = lVar10;
      plVar6[0x34] = lVar12;
      pcVar11 = FUN_10277ccac;
      goto LAB_107c615e0;
    }
  }
  plVar7 = (long *)0x200;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10277cb04;
  plVar6 = *(long **)(unaff_x22 + 0x50);
  lVar12 = *(long *)(unaff_x22 + 0x38);
  lVar10 = *(long *)(unaff_x22 + 0x40);
  plVar7[0x2e] = *(long *)(unaff_x22 + 0x48);
  plVar7[0x2f] = (long)plVar6;
  plVar7[0x2c] = param_1;
  plVar7[0x2d] = lVar10;
  plVar7[0x2b] = lVar12;
  plVar7[0x30] = *plVar6;
  lVar10 = 0;
  func_0x000107c5fcec();
  puVar5 = PTR___sScMMa_11034fc70;
  plVar7[0x31] = lVar10;
  lVar12 = lVar10;
  func_0x000107c5fce8();
  plVar7[0x32] = lVar12;
  lVar12 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  plVar7[0x33] = lVar12;
  func_0x000107c5fca8();
  plVar7[0x34] = lVar10;
  plVar7[0x35] = lVar12;
  pcVar11 = FUN_10277d8c4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar11,lVar10,lVar12);
  return;
}



/* Entry: 10277ca6c; end: 10277cac3;  */

void FUN_10277ca6c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10277cac4;
  }
  else {
    pcVar1 = FUN_10277cb5c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
  return;
}



/* Entry: 10277cac4; end: 10277cb03;  */

void FUN_10277cac4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010277cb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277cb04; end: 10277cb5b;  */

void FUN_10277cb04(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102784f3c;
  }
  else {
    pcVar1 = FUN_10277cb9c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
  return;
}



/* Entry: 10277cb5c; end: 10277cb9b;  */

void FUN_10277cb5c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010277cb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277cb9c; end: 10277cbdb;  */

void FUN_10277cb9c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010277cbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277cbdc; end: 10277ccab;  */

void FUN_10277cbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_6;
  *(undefined8 *)(unaff_x22 + 0x168) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x1e8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x150) = param_3;
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x140) = param_1;
  *(undefined8 *)(unaff_x22 + 0x148) = param_2;
  lVar2 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x170) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x180) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x188) = uVar4;
  uVar5 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar6 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 400) = uVar6;
  uVar6 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x198) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277ccac,uVar5,uVar6);
  return;
}



/* Entry: 10277ccac; end: 10277d28f;  */

void FUN_10277ccac(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long unaff_x22;
  long alStack_70 [2];
  
  lVar5 = *(long *)(unaff_x22 + 0x148);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x150);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x1a8) = param_1;
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000021;
  func_0x000100029b28(0xd000000000000021,0x800000010f0bacb0);
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar4;
  func_0x000107c61170(uVar3);
  func_0x0001048580f8(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar7 = *(long *)(unaff_x22 + 0x80);
  func_0x00010278471c(unaff_x22 + 0x60,uVar3);
  (**(code **)(lVar7 + 8))(lVar5,uVar21,uVar3,lVar7);
  *(long *)(unaff_x22 + 0x1b8) = lVar5;
  if (lVar5 != 0) {
    FUN_1027846b8(unaff_x22 + 0x60);
    lVar20 = lVar5;
    func_0x000107c4e7a8(lVar5);
    lVar17 = lVar5;
    func_0x000107c4e798(lVar5);
    lVar7 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar18 = unaff_x22 + 0x10;
    func_0x000107c61534();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    ppuVar6 = &PTR____CFConstantStringClassReference_110f0e978;
    func_0x000107c5faec();
    puVar22 = (undefined8 *)(lVar7 + 0x20);
    *puVar22 = ppuVar6;
    *(long *)(lVar7 + 0x28) = lVar18;
    puVar9 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x000107c61168();
    func_0x000107c40efc();
    func_0x000107c61180();
    puVar11 = puVar9;
    func_0x000107c5d9bc();
    func_0x000107c61170(puVar9);
    FUN_10278309c((double)lVar20,(double)lVar17);
    uVar3 = 0;
    func_0x0001044434c0();
    *(undefined8 *)(lVar7 + 0x48) = uVar3;
    *(undefined **)(lVar7 + 0x30) = puVar11;
    lVar18 = lVar7;
    func_0x000100214a84();
    func_0x000107c61588(lVar7);
    FUN_1027848a4(puVar22,0x112d4b5f0,&UNK_10d9127d0);
    *(long *)(unaff_x22 + 0x138) = lVar18;
    func_0x000103b92a00();
    uVar3 = *puVar22;
    uVar21 = puVar22[1];
    lVar7 = 0;
    FUN_102784cf8(0,0x112d5dfc0,&PTR__OBJC_CLASS___PHAsset_1126bd898);
    *(long *)(unaff_x22 + 0xa8) = lVar5;
    *(long *)(unaff_x22 + 0xc0) = lVar7;
    if (lVar7 == 0) {
      func_0x000107c61434(uVar21);
      func_0x000107c61174(lVar5);
      FUN_1027848a4(unaff_x22 + 0xa8,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(unaff_x22 + 200,uVar3,uVar21);
      func_0x000107c6142c(uVar21);
      FUN_1027848a4(unaff_x22 + 200,0x112d387f8,&UNK_10d902650);
      lVar7 = *(long *)(unaff_x22 + 0x138);
    }
    else {
      func_0x000100102924(unaff_x22 + 0xa8,unaff_x22 + 0x88);
      func_0x000107c61434(uVar21);
      func_0x000107c61174(lVar5);
      lVar7 = lVar18;
      func_0x000107c61558(lVar18);
      alStack_70[0] = lVar18;
      func_0x0001001029e8(unaff_x22 + 0x88,uVar3,uVar21,lVar7);
      func_0x000107c6142c(uVar21);
      *(long *)(unaff_x22 + 0x138) = alStack_70[0];
      lVar7 = alStack_70[0];
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x158);
    cVar2 = *(char *)(unaff_x22 + 0x1e8);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar11 = puVar9;
    FUN_10278370c();
    func_0x000107c6142c(puVar9);
    lVar18 = lVar7;
    func_0x000107c61558(lVar7);
    alStack_70[0] = lVar7;
    FUN_102783bfc(puVar11,&UNK_100216600,0,lVar18,alStack_70);
    func_0x000107c6142c(puVar11);
    *(long *)(unaff_x22 + 0x1c0) = alStack_70[0];
    (*UNRECOVERED_JUMPTABLE)(alStack_70[0],0);
    if (cVar2 == '\x01') {
      plVar10 = (long *)0xe0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1d8) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_10277d384;
      lVar18 = *(long *)(unaff_x22 + 0x160);
      lVar20 = *(long *)(unaff_x22 + 0x168);
      lVar17 = *(long *)(unaff_x22 + 0x158);
      lVar19 = *(long *)(unaff_x22 + 0x140);
      plVar10[0x10] = lVar18;
      plVar10[0x11] = lVar20;
      plVar10[0xe] = lVar5;
      plVar10[0xf] = lVar17;
      lVar7 = 0x112ebd568;
      func_0x0001000285a8(0x112ebd568,&UNK_10dad7dc8);
      plVar10[0x12] = lVar7;
      uVar15 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
      uVar14 = uVar15 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar10[0x13] = uVar14;
      uVar15 = uVar15 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar10[0x14] = uVar15;
      lVar7 = 0;
      func_0x000107c5fcec();
      plVar10[0x15] = lVar7;
      func_0x000107c5fce8();
      plVar10[0x16] = lVar7;
      plVar16 = (long *)0xe0;
      func_0x000107c615b8();
      plVar10[0x17] = (long)plVar16;
      *plVar16 = (long)plVar10;
      plVar16[1] = (long)FUN_10277faa8;
      plVar16[0x14] = lVar18;
      plVar16[0x15] = lVar20;
      plVar16[0x12] = lVar5;
      plVar16[0x13] = lVar17;
      plVar16[0x11] = lVar19;
      lVar7 = 0;
      func_0x000107c5fcec();
      puVar9 = PTR___sScMMa_11034fc70;
      lVar5 = lVar7;
      func_0x000107c5fce8();
      plVar16[0x16] = lVar5;
      lVar5 = 0x112d45220;
      FUN_102784678(0x112d45220,puVar9,PTR___sScMScAsMc_11034fc78);
      func_0x000107c5fca8();
      plVar16[0x17] = lVar7;
      plVar16[0x18] = lVar5;
      UNRECOVERED_JUMPTABLE = FUN_10277ff94;
    }
    else {
      plVar10 = (long *)0x140;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1c8) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_10277d290;
      lVar7 = *(long *)(unaff_x22 + 0x168);
      lVar18 = *(long *)(unaff_x22 + 0x158);
      lVar20 = *(long *)(unaff_x22 + 0x140);
      plVar10[0x20] = *(long *)(unaff_x22 + 0x160);
      plVar10[0x21] = lVar7;
      plVar10[0x1e] = lVar5;
      plVar10[0x1f] = lVar18;
      plVar10[0x1d] = lVar20;
      lVar7 = 0;
      func_0x000107c5fcec();
      puVar9 = PTR___sScMMa_11034fc70;
      lVar5 = lVar7;
      func_0x000107c5fce8();
      plVar10[0x22] = lVar5;
      lVar5 = 0x112d45220;
      FUN_102784678(0x112d45220,puVar9,PTR___sScMScAsMc_11034fc78);
      func_0x000107c5fca8();
      plVar10[0x23] = lVar7;
      plVar10[0x24] = lVar5;
      UNRECOVERED_JUMPTABLE = FUN_10277f584;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,lVar7,lVar5);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 400));
  puVar8 = (undefined1 *)(unaff_x22 + 0x60);
  FUN_1027846b8();
  func_0x0001027836cc();
  puVar9 = &UNK_1105473e0;
  func_0x000107c613f8(&UNK_1105473e0,puVar8,0,0);
  *puVar8 = 0;
  func_0x000107c61654();
  uVar21 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined **)(unaff_x22 + 0x130) = puVar9;
  func_0x000107c614b0(puVar9);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar21,unaff_x22 + 0x130,uVar3,uVar4,0);
  if ((int)uVar21 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x158);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x130));
    puVar11 = puVar9;
    func_0x000107c5ed2c(puVar9);
    puVar12 = puVar11;
    FUN_1027841cc();
    func_0x000107c61170(puVar11);
    (*UNRECOVERED_JUMPTABLE)(puVar12,0);
    func_0x000107c6142c(puVar12);
    func_0x000107c614ac(puVar9);
    puVar22 = *(undefined8 **)(unaff_x22 + 0x1a8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x188);
    func_0x000107c61428(puVar22,unaff_x22 + 0x100,0,0);
    uVar13 = *puVar22;
    func_0x000107c61174(uVar13);
    func_0x000100069b5c(uVar21);
    func_0x000107c61170(uVar13);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar22 = *(undefined8 **)(unaff_x22 + 0x1a8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
    lVar5 = *(long *)(unaff_x22 + 0x178);
    func_0x000107c614ac(puVar9);
    (**(code **)(lVar5 + 0x20))(uVar21,uVar1,uVar4);
    uVar3 = 0x112d4e4a0;
    FUN_102784678(0x112d4e4a0,PTR___sScEMa_11034fba8,PTR___sScEs5ErrorsMc_11034fbb0);
    func_0x000107c613f8(uVar4,uVar3,0,0);
    (**(code **)(lVar5 + 0x10))(uVar3,uVar21,uVar4);
    func_0x000107c61654();
    (**(code **)(lVar5 + 8))(uVar21,uVar4);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x130));
    func_0x000107c61428(puVar22,unaff_x22 + 0x118,0,0);
    uVar3 = *puVar22;
    func_0x000107c61174(uVar3);
    func_0x000100069b5c(uVar13);
    func_0x000107c61170(uVar3);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar21);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010277d28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10277d290; end: 10277d2e7;  */

void FUN_10277d290(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1d0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1c8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10277d2e8;
  }
  else {
    pcVar1 = FUN_10277d3dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x198),*(undefined8 *)(lVar2 + 0x1a0));
  return;
}



/* Entry: 10277d2e8; end: 10277d383;  */

void FUN_10277d2e8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 400));
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar1);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x188);
  func_0x000107c61428(puVar2,unaff_x22 + 0x100,0,0);
  uVar5 = *puVar2;
  func_0x000107c61174(uVar5);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010277d380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277d384; end: 10277d3db;  */

void FUN_10277d384(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1e0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1d8));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x102784f50;
  }
  else {
    pcVar1 = FUN_10277d5fc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x198),*(undefined8 *)(lVar2 + 0x1a0));
  return;
}



/* Entry: 10277d3dc; end: 10277d5fb;  */

void FUN_10277d3dc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1c0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 400));
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar5);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x130) = uVar8;
  func_0x000107c614b0(uVar8);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar7,unaff_x22 + 0x130,uVar5,uVar6,0);
  if ((int)uVar7 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x158);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x130));
    uVar5 = uVar8;
    func_0x000107c5ed2c(uVar8);
    uVar7 = uVar5;
    FUN_1027841cc();
    func_0x000107c61170(uVar5);
    (*UNRECOVERED_JUMPTABLE)(uVar7,0);
    func_0x000107c6142c(uVar7);
    func_0x000107c614ac(uVar8);
    puVar1 = *(undefined8 **)(unaff_x22 + 0x1a8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x188);
    func_0x000107c61428(puVar1,unaff_x22 + 0x100,0,0);
    uVar8 = *puVar1;
    func_0x000107c61174(uVar8);
    func_0x000100069b5c(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar1 = *(undefined8 **)(unaff_x22 + 0x1a8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
    lVar4 = *(long *)(unaff_x22 + 0x178);
    func_0x000107c614ac(uVar8);
    (**(code **)(lVar4 + 0x20))(uVar7,uVar3,uVar6);
    uVar5 = 0x112d4e4a0;
    FUN_102784678(0x112d4e4a0,PTR___sScEMa_11034fba8,PTR___sScEs5ErrorsMc_11034fbb0);
    func_0x000107c613f8(uVar6,uVar5,0,0);
    (**(code **)(lVar4 + 0x10))(uVar5,uVar7,uVar6);
    func_0x000107c61654();
    (**(code **)(lVar4 + 8))(uVar7,uVar6);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x130));
    func_0x000107c61428(puVar1,unaff_x22 + 0x118,0,0);
    uVar5 = *puVar1;
    func_0x000107c61174(uVar5);
    func_0x000100069b5c(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010277d5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10277d5fc; end: 10277d81b;  */

void FUN_10277d5fc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1c0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 400));
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar5);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x130) = uVar8;
  func_0x000107c614b0(uVar8);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar7,unaff_x22 + 0x130,uVar5,uVar6,0);
  if ((int)uVar7 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x158);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x130));
    uVar5 = uVar8;
    func_0x000107c5ed2c(uVar8);
    uVar7 = uVar5;
    FUN_1027841cc();
    func_0x000107c61170(uVar5);
    (*UNRECOVERED_JUMPTABLE)(uVar7,0);
    func_0x000107c6142c(uVar7);
    func_0x000107c614ac(uVar8);
    puVar1 = *(undefined8 **)(unaff_x22 + 0x1a8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x188);
    func_0x000107c61428(puVar1,unaff_x22 + 0x100,0,0);
    uVar8 = *puVar1;
    func_0x000107c61174(uVar8);
    func_0x000100069b5c(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar1 = *(undefined8 **)(unaff_x22 + 0x1a8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
    lVar4 = *(long *)(unaff_x22 + 0x178);
    func_0x000107c614ac(uVar8);
    (**(code **)(lVar4 + 0x20))(uVar7,uVar3,uVar6);
    uVar5 = 0x112d4e4a0;
    FUN_102784678(0x112d4e4a0,PTR___sScEMa_11034fba8,PTR___sScEs5ErrorsMc_11034fbb0);
    func_0x000107c613f8(uVar6,uVar5,0,0);
    (**(code **)(lVar4 + 0x10))(uVar5,uVar7,uVar6);
    func_0x000107c61654();
    (**(code **)(lVar4 + 8))(uVar7,uVar6);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x130));
    func_0x000107c61428(puVar1,unaff_x22 + 0x118,0,0);
    uVar5 = *puVar1;
    func_0x000107c61174(uVar5);
    func_0x000100069b5c(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010277d818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10277d81c; end: 10277d8c3;  */

void FUN_10277d81c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x170) = param_4;
  *(undefined8 **)(unaff_x22 + 0x178) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x160) = param_2;
  *(undefined8 *)(unaff_x22 + 0x168) = param_3;
  *(undefined8 *)(unaff_x22 + 0x158) = param_1;
  *(undefined8 *)(unaff_x22 + 0x180) = *unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x188) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 400) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x198) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277d8c4,uVar2,uVar3);
  return;
}



/* Entry: 10277d8c4; end: 10277d9e7;  */

void FUN_10277d8c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x1b0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar5;
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar3 != 0) {
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1b8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10277d9e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )();
    return;
  }
  if (param_1 == 0) {
    param_1 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x198);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x1c0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277da54,param_1);
  return;
}



/* Entry: 10277d9e8; end: 10277da53;  */

void FUN_10277d9e8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar4 + 0x1b0);
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x1b8));
  func_0x000107c61574(uVar2);
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x1a0);
    uVar3 = *(undefined8 *)(lVar4 + 0x1a8);
    pcVar1 = FUN_10277dd30;
  }
  else {
    *(long *)(lVar4 + 0x1f0) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x1a0);
    uVar3 = *(undefined8 *)(lVar4 + 0x1a8);
    pcVar1 = (code *)0x10277dd64;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10277da54; end: 10277dac3;  */

void FUN_10277da54(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  
  func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x150) = unaff_x22 + 0x10;
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10277dac4;
  lVar6 = *(long *)(unaff_x22 + 0x178);
  lVar2 = *(long *)(unaff_x22 + 0x180);
  lVar8 = *(long *)(unaff_x22 + 0x168);
  lVar1 = *(long *)(unaff_x22 + 0x158);
  lVar3 = *(long *)(unaff_x22 + 0x160);
  plVar5[7] = *(long *)(unaff_x22 + 0x170);
  plVar5[8] = lVar2;
  plVar5[5] = lVar3;
  plVar5[6] = lVar8;
  plVar5[3] = lVar6;
  plVar5[4] = lVar1;
  plVar5[2] = unaff_x22 + 0x150;
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[9] = uVar7;
  lVar8 = 0;
  func_0x000107c5fcec();
  puVar4 = PTR___sScMMa_11034fc70;
  plVar5[10] = lVar8;
  lVar6 = lVar8;
  func_0x000107c5fce8();
  plVar5[0xb] = lVar6;
  lVar6 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar4,PTR___sScMScAsMc_11034fc78);
  plVar5[0xc] = lVar6;
  func_0x000107c5fca8();
  plVar5[0xd] = lVar8;
  plVar5[0xe] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277de68,lVar8,lVar6);
  return;
}



/* Entry: 10277dac4; end: 10277db6b;  */

void FUN_10277dac4(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x1d8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1d0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)
              (FUN_10277dbf4,*(undefined8 *)(lVar2 + 0x1c0),*(undefined8 *)(lVar2 + 0x1c8));
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x1e0) = plVar1;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_10277db6c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 10277db6c; end: 10277dbf3;  */

void FUN_10277db6c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10277dbb0,*(undefined8 *)(lVar1 + 0x1c0),*(undefined8 *)(lVar1 + 0x1c8));
  return;
}



/* Entry: 10277dbf4; end: 10277dc8f;  */

void FUN_10277dbf4(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(uVar3,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1e8) = plVar2;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10277dc90;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 10277dc90; end: 10277dcd3;  */

void FUN_10277dc90(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10277dcd4,*(undefined8 *)(lVar1 + 0x1c0),*(undefined8 *)(lVar1 + 0x1c8));
  return;
}



/* Entry: 10277dcd4; end: 10277dd2f;  */

void FUN_10277dcd4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
  func_0x000107c61574(uVar1);
  *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10277dd64,*(undefined8 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 0x1a8));
  return;
}



/* Entry: 10277dd30; end: 10277dd97;  */

void FUN_10277dd30(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010277dd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277dd98; end: 10277de67;  */

void FUN_10277dd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  uVar5 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar5;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277de68,uVar4,uVar5);
  return;
}



/* Entry: 10277de68; end: 10277e143;  */

void FUN_10277de68(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = 0;
  func_0x000107c5fd0c();
  pcVar11 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  (*pcVar11)(uVar4,1,1,lVar1);
  func_0x000107c6157c();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar10;
  func_0x000107c6157c();
  func_0x000107c5fce8();
  puVar3 = &UNK_1105472f8;
  func_0x000107c613fc(&UNK_1105472f8,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar12;
  *(undefined8 *)(puVar3 + 0x28) = uVar9;
  *(undefined8 *)(puVar3 + 0x30) = uVar7;
  *(undefined8 *)(puVar3 + 0x38) = uVar14;
  *(undefined8 *)(puVar3 + 0x40) = uVar10;
  func_0x000101e9558c(uVar4,&UNK_10dad7e18,puVar3);
  FUN_1027848a4(uVar4,0x112d453c8,&UNK_10d90ac60);
  (*pcVar11)(uVar4,1,1,lVar1);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar10;
  func_0x000107c6157c();
  func_0x000107c5fce8();
  puVar3 = &UNK_110547320;
  func_0x000107c613fc(&UNK_110547320,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar15;
  *(undefined8 *)(puVar3 + 0x20) = uVar14;
  *(undefined8 *)(puVar3 + 0x38) = uVar13;
  *(undefined8 *)(puVar3 + 0x30) = uVar12;
  *(undefined8 *)(puVar3 + 0x40) = uVar7;
  func_0x000101e9558c(uVar4,&UNK_10dad7e28,puVar3);
  FUN_1027848a4(uVar4,0x112d453c8,&UNK_10d90ac60);
  (*pcVar11)(uVar4,1,1,lVar1);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar10;
  func_0x000107c6157c();
  func_0x000107c5fce8();
  puVar3 = &UNK_110547348;
  func_0x000107c613fc(&UNK_110547348,0x50,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar14;
  *(undefined8 *)(puVar3 + 0x28) = uVar10;
  *(undefined8 *)(puVar3 + 0x30) = uVar12;
  *(undefined8 *)(puVar3 + 0x38) = uVar9;
  *(undefined8 *)(puVar3 + 0x40) = uVar7;
  *(undefined8 *)(puVar3 + 0x48) = uVar6;
  func_0x000101e9558c(uVar4,&UNK_10dad7e38,puVar3);
  FUN_1027848a4(uVar4,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10277e144;
                    /* WARNING: Could not recover jumptable at 0x00010277e140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101a2c0b4)(uVar4,uVar8);
  return;
}



/* Entry: 10277e144; end: 10277e1a7;  */

void FUN_10277e144(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x80));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar4 + 0x78));
    uVar2 = *(undefined8 *)(lVar4 + 0x68);
    uVar3 = *(undefined8 *)(lVar4 + 0x70);
    pcVar1 = FUN_10277e1a8;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x68);
    uVar3 = *(undefined8 *)(lVar4 + 0x70);
    pcVar1 = FUN_10277e1e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10277e1a8; end: 10277e1e7;  */

void FUN_10277e1a8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010277e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277e1e8; end: 10277e233;  */

void FUN_10277e1e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61574(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010277e230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277e234; end: 10277e2c7;  */

void FUN_10277e234(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x78) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x5;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277e2c8,uVar2,uVar3);
  return;
}



/* Entry: 10277e2c8; end: 10277e42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277e2c8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  if (*(long *)(lVar9 + _DAT_112ebd9f0 + 8) != 0) {
    pcVar1 = *(code **)(unaff_x22 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    FUN_102782f78(uVar3);
    bVar2 = (param_3 & 0xff) != 1;
    uVar7 = 0;
    if (bVar2) {
      uVar7 = uVar3;
    }
    uVar3 = 0;
    if (bVar2) {
      uVar3 = param_2;
    }
    lVar9 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar8 = unaff_x22 + 0x10;
    func_0x000107c61534();
    *(undefined8 *)(lVar9 + 0x18) = 2;
    *(undefined8 *)(lVar9 + 0x10) = 1;
    ppuVar4 = &PTR____CFConstantStringClassReference_110f0e978;
    func_0x000107c5faec();
    *(undefined8 *)(lVar9 + 0x20) = ppuVar4;
    *(long *)(lVar9 + 0x28) = lVar8;
    puVar5 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x000107c61168();
    func_0x000107c40efc();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5d9bc();
    func_0x000107c61170(puVar5);
    FUN_10278309c(uVar7,uVar3);
    uVar7 = 0;
    func_0x0001044434c0();
    *(undefined8 *)(lVar9 + 0x48) = uVar7;
    *(undefined **)(lVar9 + 0x30) = puVar6;
    lVar8 = lVar9;
    func_0x000100214a84(lVar9);
    func_0x000107c61588(lVar9);
    FUN_1027848a4((undefined8 *)(lVar9 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    (*pcVar1)(lVar8,0);
    func_0x000107c6142c(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010277e42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277e430; end: 10277e4d7;  */

void FUN_10277e430(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 in_x3;
  undefined8 in_x4;
  long in_x5;
  long in_x6;
  long in_x7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x4;
  lVar2 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  plVar5 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10277e4d8;
  plVar5[0x19] = in_x7;
  plVar5[0x1a] = in_x5;
  plVar5[0x18] = in_x6;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar2 = lVar6;
  func_0x000107c5fce8();
  plVar5[0x1b] = lVar2;
  lVar2 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar5[0x1c] = lVar6;
  plVar5[0x1d] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277e778,lVar6,lVar2);
  return;
}



/* Entry: 10277e4d8; end: 10277e5b3;  */

void FUN_10277e4d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x50));
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x60) = param_1;
    uVar1 = 0x112d45220;
    FUN_102784678(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_10277e5b4;
  }
  else {
    uVar1 = 0x112d45220;
    FUN_102784678(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_10277e614;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,uVar1);
  return;
}



/* Entry: 10277e5b4; end: 10277e613;  */

void FUN_10277e5b4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  pcVar1 = *(code **)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  (*pcVar1)(uVar2,0);
  func_0x000107c6142c(uVar2);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010277e610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277e614; end: 10277e6e3;  */

void FUN_10277e614(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  func_0x000107c614b0(uVar2);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar1,(undefined8 *)(unaff_x22 + 0x10),uVar2,uVar3,6);
  if ((int)uVar1 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x58));
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x28));
    func_0x000107c61654();
    func_0x000107c615c0(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010277e6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


