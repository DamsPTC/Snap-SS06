/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e4b4e4; end: 101e4b547;  */

void FUN_101e4b4e4(void)

{
  FUN_101e418ec();
  return;
}



/* Entry: 101e4b548; end: 101e4b557;  */

void FUN_101e4b548(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101e4b558; end: 101e4b5a7;  */

void FUN_101e4b558(code *param_1,code *param_2)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e4b5a8; end: 101e4b5c7;  */

long FUN_101e4b5a8(long param_1,long param_2)

{
  long unaff_x20;
  
  if (param_1 != *(long *)(unaff_x20 + 0x10) || param_2 != *(long *)(unaff_x20 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return param_1;
  }
  return 1;
}



/* Entry: 101e4b5c8; end: 101e4b5fb;  */

uint FUN_101e4b5c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_1;
  (**(code **)(unaff_x20 + 0x10))
            (uVar1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return (uint)uVar1 & 1;
}



/* Entry: 101e4b5fc; end: 101e4b63b;  */

void FUN_101e4b5fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e324f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc55730;
  func_0x000107c61520(&UNK_10dc55730,&UNK_1106d42b0);
  puRam0000000112e324f8 = puVar1;
  return;
}



/* Entry: 101e4b63c; end: 101e4b643;  */

uint FUN_101e4b63c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  lVar5 = 0;
  func_0x000103b2dc40();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = 0x112e32320;
  func_0x0001000285a8(0x112e32320,&UNK_10da1b8d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar10 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  uVar6 = *param_1;
  if ((uVar6 != uVar1) || (param_1[1] != uVar2)) {
    func_0x000107c605b8(uVar6,param_1[1],uVar1,uVar2,0);
    uVar8 = 0;
    if ((uVar6 & 1) == 0) goto LAB_101e3abf4;
  }
  lVar7 = 0x112e32348;
  puStack_68 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112e32348,&UNK_10da1b778);
  iVar3 = *(int *)(lVar7 + 0x30);
  (**(code **)(lVar14 + 0x38))(lVar11,1,1,lVar5);
  lVar13 = (long)*(int *)(lVar13 + 0x30);
  func_0x000101e3e000((long)param_1 + (long)iVar3,lVar9,0x112e32328,&UNK_10da1b750);
  func_0x000101e3e000(lVar11,lVar9 + lVar13,0x112e32328,&UNK_10da1b750);
  pcVar12 = *(code **)(lVar14 + 0x30);
  lVar14 = lVar9;
  (*pcVar12)(lVar9,1,lVar5);
  if ((int)lVar14 == 1) {
    func_0x000101e3dfc0(lVar11,0x112e32328,&UNK_10da1b750);
    lVar13 = lVar9 + lVar13;
    (*pcVar12)(lVar13,1,lVar5);
    if ((int)lVar13 == 1) {
      func_0x000101e3dfc0(lVar9,0x112e32328,&UNK_10da1b750);
      uVar8 = 0;
      goto LAB_101e3abf4;
    }
  }
  else {
    func_0x000101e3e000(lVar9,lVar10,0x112e32328,&UNK_10da1b750);
    lVar14 = lVar9 + lVar13;
    (*pcVar12)(lVar14,1,lVar5);
    puVar4 = puStack_68;
    if ((int)lVar14 != 1) {
      func_0x000101e3cf20(lVar9 + lVar13,puStack_68);
      lVar13 = lVar10;
      func_0x000103b2dc78(lVar10,puVar4);
      FUN_101e3cee4(puVar4);
      func_0x000101e3dfc0(lVar11,0x112e32328,&UNK_10da1b750);
      FUN_101e3cee4(lVar10);
      func_0x000101e3dfc0(lVar9,0x112e32328,&UNK_10da1b750);
      uVar8 = (uint)lVar13 ^ 1;
      goto LAB_101e3abf4;
    }
    func_0x000101e3dfc0(lVar11,0x112e32328,&UNK_10da1b750);
    FUN_101e3cee4(lVar10);
  }
  func_0x000101e3dfc0(lVar9,0x112e32320,&UNK_10da1b8d0);
  uVar8 = 1;
LAB_101e3abf4:
  return uVar8 & 1;
}



/* Entry: 101e4b644; end: 101e4b68b;  */

void FUN_101e4b644(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000103b25e5c();
  func_0x000101e3cf64(param_2,(long)param_1 + (long)*(int *)(lVar1 + 0x14));
  *param_1 = uVar2;
  return;
}



/* Entry: 101e4b68c; end: 101e4b6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101e4b68c(ulong param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  long unaff_x20;
  
  puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fecae8);
  if ((param_1 != *puVar1 || param_2 != puVar1[1]) && (func_0x000107c605b8(), (param_1 & 1) == 0)) {
    return false;
  }
  return param_3 == 0;
}



/* Entry: 101e4b6e8; end: 101e4b6eb;  */

uint FUN_101e4b6e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_1;
  (**(code **)(unaff_x20 + 0x10))(param_1[3],param_1[4],uVar1,param_1[1],param_1[2]);
  return (uint)uVar1 & 1;
}



/* Entry: 101e4b6ec; end: 101e4b7bb;  */

void FUN_101e4b6ec(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101e4b7bc; end: 101e4b7ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e4b7bc(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fecae8);
  if (param_1 != *plVar1 || param_2 != plVar1[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return param_1;
  }
  return 1;
}



/* Entry: 101e4b7f0; end: 101e4b81f;  */

uint FUN_101e4b7f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_1;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_1[1],param_1[2]);
  return (uint)uVar1 & 1;
}



/* Entry: 101e4b820; end: 101e4b827;  */

void FUN_101e4b820(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e4b828; end: 101e4b853;  */

void FUN_101e4b828(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e4b854; end: 101e4b857;  */

void FUN_101e4b854(void)

{
  return;
}



/* Entry: 101e4b858; end: 101e4b967;  */

void FUN_101e4b858(void)

{
  FUN_101e3bbe4();
  return;
}



/* Entry: 101e4b968; end: 101e4b9e7;  */

void FUN_101e4b968(long param_1,long param_2)

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



/* Entry: 101e4b9e8; end: 101e4ba4f;  */

void FUN_101e4b9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 101e4ba50; end: 101e4bb07;  */

void FUN_101e4ba50(long *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 == 0) {
    lVar1 = 0;
    ppuVar2 = (undefined **)0x0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar1 = 0;
    func_0x000100bf2b28();
    ppuVar2 = &PTR_DAT_11048d990;
  }
  *param_1 = lStack_28;
  param_1[3] = lVar1;
  param_1[4] = (long)ppuVar2;
  return;
}



/* Entry: 101e4bb08; end: 101e4bb0f;  */

void FUN_101e4bb08(long *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 == 0) {
    lVar1 = 0;
    ppuVar2 = (undefined **)0x0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar1 = 0;
    func_0x000100bf2b28();
    ppuVar2 = &PTR_DAT_11048d990;
  }
  *param_1 = lStack_28;
  param_1[3] = lVar1;
  param_1[4] = (long)ppuVar2;
  return;
}



/* Entry: 101e4bb10; end: 101e4bf47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e4bb10(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3e23c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c408ec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  lVar2 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c4e934();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = _DAT_11305e778;
    if (lVar4 != 0) {
      lVar14 = *(long *)(unaff_x20 + 0x10);
      uVar11 = *(undefined8 *)(lVar14 + _DAT_11305e778);
      func_0x000107c6157c(uVar11);
      func_0x0001000d224c(auStack_88);
      func_0x000107c61574(uVar11);
      uVar12 = uStack_68;
      uVar11 = uStack_70;
      puVar5 = auStack_88;
      func_0x0001000a8868(puVar5,uStack_70);
      uVar6 = 1;
      func_0x00010043c5e4(1,0x27,0,0xd00000000000001c,0x800000010f014fa0,uVar11,uVar12,puVar5);
      func_0x0001000d224c(&uStack_90);
      func_0x000107c61574(uVar6);
      uVar11 = uStack_90;
      func_0x0001000834e4(auStack_88);
      uVar12 = *(undefined8 *)(lVar14 + lVar3);
      func_0x000107c6157c(uVar12);
      func_0x0001000d224c(auStack_88);
      func_0x000107c61574(uVar12);
      puVar5 = auStack_88;
      func_0x0001000a8868(puVar5,uStack_70);
      uVar12 = 2;
      func_0x00010043c5e4(2,0x27,1,0xd00000000000001c,0x800000010f014fa0,uStack_70,uStack_68,puVar5)
      ;
      func_0x0001000d224c(&uStack_90);
      func_0x000107c61574(uVar12);
      func_0x0001000834e4(auStack_88);
      lVar14 = *(long *)(unaff_x20 + 0x38);
      lVar3 = lVar14;
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar3 != 0) {
        uVar12 = 0xd000000000000025;
        func_0x000107c5fadc(0xd000000000000025,0x800000010f014fc0);
        lVar8 = lVar3;
        func_0x000107c4980c();
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(uVar12);
        lVar7 = 0;
        func_0x000101e3a6f0();
        func_0x000107c613fc();
        func_0x0001000285a8(0x112e32618,&UNK_10da1b9b8);
        func_0x000107c613fc();
        func_0x000107c615f0(lVar2);
        uVar12 = 1;
        func_0x00010008747c();
        puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        *(undefined8 *)(lVar7 + 0x18) = uVar12;
        *(undefined **)(lVar7 + 0x20) = puVar10;
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        *(undefined **)(lVar7 + 0x28) = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar6 = 0;
        func_0x00010006a340();
        uVar12 = uVar6;
        func_0x000107c613fc();
        func_0x00010006a360();
        *(long *)(lVar7 + 0x10) = lVar2;
        *(undefined8 *)(lVar7 + 0x30) = uVar12;
        *(long *)(lVar7 + 0x38) = (long)(int)lVar8;
        uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
        func_0x000107c61174();
        uVar12 = uStack_90;
        func_0x000107c61174();
        func_0x000107c40430();
        func_0x000107c61180();
        lVar8 = 0;
        func_0x000100bf2b28();
        func_0x000107c613fc();
        *(undefined **)(lVar8 + 0x40) = PTR___swiftEmptySetSingleton_11034f1d8;
        *(undefined2 *)(lVar8 + 0x50) = 0x202;
        func_0x000107c613fc(uVar6,0x18,7);
        func_0x000107c61174();
        lVar3 = lVar14;
        func_0x00010006a360();
        *(long *)(lVar8 + 0x58) = lVar3;
        puVar9 = puVar10;
        FUN_101e4c124();
        *(undefined **)(lVar8 + 0x60) = puVar9;
        FUN_101690820();
        *(undefined **)(lVar8 + 0x68) = puVar10;
        func_0x0001000285a8(0x112e32620,&UNK_10da1b9c0);
        func_0x000107c613fc();
        uVar6 = 1;
        func_0x00010008747c();
        *(undefined8 *)(lVar8 + 0x70) = uVar6;
        func_0x0001000285a8(0x112e32628,&UNK_10da1b9c8);
        func_0x000107c613fc();
        uVar6 = 1;
        func_0x00010008747c();
        *(undefined8 *)(lVar8 + 0x78) = uVar6;
        func_0x0001000285a8(0x112e32630,&UNK_10da1b9d0);
        func_0x000107c613fc();
        uVar6 = 1;
        func_0x00010008747c();
        *(undefined8 *)(lVar8 + 0x80) = uVar6;
        *(long *)(lVar8 + 0x10) = lVar4;
        *(long *)(lVar8 + 0x18) = lVar2;
        *(long *)(lVar8 + 0x20) = lVar7;
        *(undefined8 *)(lVar8 + 0x30) = uVar11;
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar12);
        *(undefined8 *)(lVar8 + 0x38) = uVar12;
        *(undefined8 *)(lVar8 + 0x28) = uVar13;
        *(long *)(lVar8 + 0x48) = lVar14;
        return lVar8;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4bf48);
      (*pcVar1)();
    }
    func_0x000107c615e8(lVar2);
  }
  return 0;
}



/* Entry: 101e4bf48; end: 101e4bf83;  */

/* WARNING: Possible PIC construction at 0x000101e4bf54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4bf64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4bf74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e4bf68) */
/* WARNING: Removing unreachable block (ram,0x000101e4bf58) */
/* WARNING: Removing unreachable block (ram,0x000101e4bf78) */

void FUN_101e4bf48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e4bf84; end: 101e4bfef;  */

void FUN_101e4bf84(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e4bff0; end: 101e4c123;  */

void FUN_101e4bff0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112e32508,&UNK_10da1b940);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar1 = FUN_101e4c220;
  func_0x0001000bdd8c(FUN_101e4c220);
  func_0x0001000285a8(0x112e32510,&UNK_10da1b948);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar1);
  uVar2 = 0x101e4c224;
  func_0x0001000bdd8c(0x101e4c224,pcVar1);
  func_0x0001000285a8(0x112e32518,&UNK_10da1b950);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar1);
  uVar3 = 0x101e4c228;
  func_0x0001000bdd8c(0x101e4c228,pcVar1);
  uVar4 = uVar3;
  func_0x0001000bf56c();
  uVar5 = 0;
  func_0x0001002bd210(0);
  func_0x000107c610f8();
  func_0x000100bf334c(uVar4,uVar3,uVar5);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(uVar2);
  *param_1 = uVar4;
  return;
}



/* Entry: 101e4c124; end: 101e4c21f;  */

undefined * FUN_101e4c124(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e32340,&UNK_10da1b770);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101e4c21c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101e4c220);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101e4c220; end: 101e4c22b;  */

void FUN_101e4c220(undefined8 *param_1,undefined8 param_2)

{
  FUN_101e4bb10();
  *param_1 = param_2;
  return;
}



/* Entry: 101e4c22c; end: 101e4c497;  */

/* WARNING: Possible PIC construction at 0x000101e4c2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4c37c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e4c2e0) */
/* WARNING: Removing unreachable block (ram,0x000101e4c380) */

void FUN_101e4c22c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  plVar1 = (long *)(unaff_x20 + 0x28);
  func_0x000107c61604(plVar1,param_1);
  FUN_101e4c728();
  func_0x000104884898();
  puVar2 = &UNK_11048e488;
  func_0x000107c613fc(&UNK_11048e488,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  (**(code **)(*plVar1 + 0x60))(FUN_101e4c768,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar1);
  return;
}



/* Entry: 101e4c498; end: 101e4c537;  */

void FUN_101e4c498(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      lVar3 = *(long *)(param_2 + 0x30);
      func_0x000107c61574(param_2);
      lVar2 = lVar1;
      func_0x000107c614f0(lVar1);
      (**(code **)(lVar3 + 0x10))(param_1,lVar2,lVar3);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 101e4c538; end: 101e4c58f;  */

void FUN_101e4c538(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    func_0x000100c82230();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61574(uVar1);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + 0x28,0);
  return;
}



/* Entry: 101e4c590; end: 101e4c5cf;  */

void FUN_101e4c590(void)

{
  long unaff_x20;
  
  FUN_101e4c538();
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_101e4c7b8(unaff_x20 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e4c5d0; end: 101e4c62f;  */

void FUN_101e4c5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x0001002a64a8(&uStack_40);
  return;
}



/* Entry: 101e4c630; end: 101e4c67b;  */

void FUN_101e4c630(void)

{
  func_0x000107c61168(&PTR_PTR_112e32680);
  return;
}



/* Entry: 101e4c67c; end: 101e4c727;  */

void FUN_101e4c67c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e4c728; end: 101e4c767;  */

void FUN_101e4c728(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e32700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc564ec;
  func_0x000107c61520(&UNK_10dc564ec,&UNK_1106d52d0);
  puRam0000000112e32700 = puVar1;
  return;
}



/* Entry: 101e4c768; end: 101e4c76f;  */

void FUN_101e4c768(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar6 = param_1[2];
  uVar3 = *(undefined1 *)(param_1 + 3);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    lVar5 = lVar4 + 0x28;
    func_0x000107c61618();
    if (lVar5 == 0) {
      func_0x000107c61574(lVar4);
    }
    else {
      lVar7 = *(long *)(lVar4 + 0x30);
      func_0x000107c61574(lVar4);
      lVar4 = lVar5;
      func_0x000107c614f0(lVar5);
      (**(code **)(lVar7 + 8))(uVar1,uVar2,uVar6,uVar3,lVar4,lVar7);
      func_0x000107c615e8(lVar5);
    }
  }
  return;
}



/* Entry: 101e4c770; end: 101e4c7af;  */

void FUN_101e4c770(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101e4c7b0; end: 101e4c7b7;  */

void FUN_101e4c7b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x28;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      lVar3 = *(long *)(lVar1 + 0x30);
      func_0x000107c61574(lVar1);
      lVar1 = lVar2;
      func_0x000107c614f0(lVar2);
      (**(code **)(lVar3 + 0x10))(param_1,lVar1,lVar3);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 101e4c7b8; end: 101e4c7db;  */

undefined8 FUN_101e4c7b8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101e4c7dc; end: 101e4c7e7;  */

void FUN_101e4c7dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101e4c7e8; end: 101e4c8af;  */

void FUN_101e4c7e8(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_70 [24];
  long lStack_58;
  undefined1 auStack_48 [40];
  
  func_0x000101e4cf68(unaff_x20 + 0x10,auStack_70);
  if (lStack_58 == 0) {
    func_0x000101e4cf20(auStack_70);
    lVar2 = *(long *)(unaff_x20 + 0x38);
    if (lVar2 == 0) {
      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000022,0x800000010f015030,
                          "SingleSnapPlayerImplementation/SingleSnapPlayerFactoryImp.swift",0x3f,2,
                          0x35,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4c8b0);
      (*pcVar1)();
    }
    func_0x000107c6157c(lVar2);
    func_0x0001000d224c(param_1);
    func_0x000107c61574(lVar2);
  }
  else {
    func_0x000101e4cea4(auStack_70,auStack_48);
    func_0x000101e4cea4(auStack_48,param_1);
  }
  return;
}



/* Entry: 101e4c8b0; end: 101e4c8fb;  */

void FUN_101e4c8b0(void)

{
  long unaff_x20;
  
  func_0x000101e4cf20(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e4c8fc; end: 101e4c98f;  */

undefined1  [16] FUN_101e4c8fc(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  FUN_101e4c7e8(auStack_58);
  if (lStack_40 == 0) {
    func_0x000101e4cf20(auStack_58);
    param_1 = 0;
    lStack_40 = 0;
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 8))(param_1,lStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  auVar1._8_8_ = lStack_40;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 101e4c990; end: 101e4ca2b;  */

void FUN_101e4c990(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [24];
  long lStack_50;
  long lStack_48;
  
  FUN_101e4c7e8(auStack_68);
  if (lStack_50 == 0) {
    func_0x000101e4cf20(auStack_68);
  }
  else {
    func_0x0001000a8868(auStack_68,lStack_50);
    (**(code **)(lStack_48 + 0x10))(param_1,param_2,lStack_50,lStack_48);
    func_0x0001000834e4(auStack_68);
  }
  return;
}



/* Entry: 101e4ca2c; end: 101e4cadb;  */

void FUN_101e4ca2c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
    ppuVar2 = (undefined **)0x0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = 0;
  }
  else {
    FUN_101e4cadc(param_3,param_4,param_5 & 1);
    func_0x000107c61574(param_2);
    uVar1 = 0;
    func_0x000101e4db5c();
    ppuVar2 = &PTR_DAT_11048e5f0;
  }
  *param_1 = param_3;
  param_1[3] = uVar1;
  param_1[4] = ppuVar2;
  return;
}



/* Entry: 101e4cadc; end: 101e4cc9b;  */

long FUN_101e4cadc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  puVar5 = &UNK_11048e538;
  func_0x000107c613fc(&UNK_11048e538,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar6 = &UNK_11048e588;
  func_0x000107c613fc(&UNK_11048e588,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  lVar7 = 0;
  func_0x000101e4c8dc();
  lVar8 = lVar7;
  func_0x000107c613fc();
  if ((param_3 & 1) == 0) {
    func_0x000107c6157c(puVar5);
    FUN_101e4cc9c(lVar8 + 0x10);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
    pcVar9 = (code *)0x0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    puVar5 = &UNK_11048e5b0;
    func_0x000107c613fc(&UNK_11048e5b0,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x101e4ce98;
    *(undefined **)(puVar5 + 0x18) = puVar6;
    func_0x0001000285a8(0x112e32888,&UNK_10da1bbb8);
    func_0x000107c613fc();
    pcVar9 = FUN_101e4cebc;
    func_0x0001000bdd8c(FUN_101e4cebc,puVar5);
  }
  *(code **)(lVar8 + 0x38) = pcVar9;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuStack_58 = &PTR_DAT_11048e500;
  lVar10 = 0;
  alStack_78[0] = lVar8;
  lStack_60 = lVar7;
  func_0x000101e4db5c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x60) = 0;
  *(undefined8 *)(lVar10 + 0x10) = uVar11;
  func_0x000101e4cea4(alStack_78,lVar10 + 0x18);
  *(undefined8 *)(lVar10 + 0x40) = uVar1;
  *(undefined8 *)(lVar10 + 0x48) = uVar3;
  *(undefined8 *)(lVar10 + 0x50) = uVar2;
  *(undefined8 *)(lVar10 + 0x58) = uVar4;
  func_0x000107c61174(uVar11);
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  return lVar10;
}



/* Entry: 101e4cc9c; end: 101e4cd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e4cc9c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x18);
    func_0x000107c61174(lVar1);
    func_0x000107c61574(param_2);
    func_0x000101e4cedc(lVar1 + _DAT_112ff7a70,auStack_80);
    func_0x000107c61170(lVar1);
    func_0x0001000a8868(auStack_80,uStack_68);
    (**(code **)(lStack_60 + 8))(param_1,param_3,param_4,uStack_68,lStack_60);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 101e4cd84; end: 101e4cdcf;  */

void FUN_101e4cd84(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e4cdd0; end: 101e4ce87;  */

void FUN_101e4cdd0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_11048e538;
  func_0x000107c613fc(&UNK_11048e538,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_11048e560;
  func_0x000107c613fc(&UNK_11048e560,0x29,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar2[0x28] = param_3;
  uVar3 = 0x112e32880;
  func_0x0001000285a8(0x112e32880,&UNK_10da1bbb0);
  func_0x000107c613fc();
  func_0x0001000bdd8c(FUN_101e4ce88,puVar2,uVar3);
  return;
}



/* Entry: 101e4ce88; end: 101e4cebb;  */

void FUN_101e4ce88(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar1 = *(byte *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    uVar5 = 0;
    ppuVar4 = (undefined **)0x0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar3 = 0;
  }
  else {
    FUN_101e4cadc(uVar5,uVar3,bVar1 & 1);
    func_0x000107c61574(lVar2);
    uVar3 = 0;
    func_0x000101e4db5c();
    ppuVar4 = &PTR_DAT_11048e5f0;
  }
  *param_1 = uVar5;
  param_1[3] = uVar3;
  param_1[4] = ppuVar4;
  return;
}



/* Entry: 101e4cebc; end: 101e4cfb7;  */

void FUN_101e4cebc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101e4cfb8; end: 101e4d047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e4cfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  uVar1 = *(undefined8 *)(param_5 + _DAT_113091b70);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return unaff_x20;
}



/* Entry: 101e4d048; end: 101e4d083;  */

/* WARNING: Possible PIC construction at 0x000101e4d054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4d06c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e4d058) */
/* WARNING: Removing unreachable block (ram,0x000101e4d070) */

void FUN_101e4d048(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e4d084; end: 101e4d113;  */

void FUN_101e4d084(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e4d114; end: 101e4d2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101e4d114(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_40;
  long lStack_38;
  
  plVar6 = &lStack_40;
  puVar3 = *(undefined1 **)(unaff_x20 + 0x60);
  puVar7 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    FUN_101e4dd8c();
    func_0x000107c613fc();
    *(undefined8 *)(puVar3 + 0x10) = 0;
    lVar4 = 0;
    FUN_101e5e78c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e33138) = 0;
    *(undefined8 *)(lVar5 + _DAT_112e33140) = 0;
    puVar1 = (undefined8 *)(lVar5 + _DAT_112e33148);
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61644(lVar5 + _DAT_112e33150,0);
    lVar2 = lVar5 + _DAT_112e33158;
    *(undefined8 *)(lVar2 + 8) = 0;
    func_0x000107c61614(lVar2,0);
    *(undefined **)(lVar5 + _DAT_112e33160) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined1 *)(lVar5 + _DAT_112e33168) = 0;
    *(undefined1 *)(lVar5 + _DAT_112e33170) = 0;
    puVar1 = (undefined8 *)(lVar5 + _DAT_112e33110);
    *puVar1 = puVar3;
    puVar1[1] = &PTR_DAT_11048e630;
    puVar1 = (undefined8 *)(lVar5 + _DAT_112e33118);
    *puVar1 = FUN_101e5e078;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar5 + _DAT_112e33120);
    *puVar1 = FUN_101e5e07c;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar5 + _DAT_112e33128);
    *puVar1 = FUN_101e5e0a8;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar5 + _DAT_112e33130);
    *puVar1 = FUN_101e5e160;
    puVar1[1] = 0;
    lStack_40 = lVar5;
    lStack_38 = lVar4;
    func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
    *(long **)(unaff_x20 + 0x60) = plVar6;
    func_0x000107c61174();
    func_0x000107c61170(uVar8);
    puVar3 = (undefined1 *)0x0;
    puVar7 = (undefined1 *)plVar6;
  }
  func_0x000107c61174(puVar3);
  return puVar7;
}



/* Entry: 101e4d2a8; end: 101e4db07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e4d2a8(undefined8 *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  code *pcVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  ulong auStack_170 [2];
  undefined1 *puStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [48];
  
  lVar3 = 0;
  FUN_101e4c630();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = 0;
  uVar17 = 0x112e32a60;
  func_0x0001000285a8(0x112e32a60,&UNK_10da1bcb0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar4 + 0x18) = uVar17;
  uVar17 = 0x112e32a68;
  func_0x0001000285a8(0x112e32a68,&UNK_10da1bcb8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar4 + 0x20) = uVar17;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  func_0x000107c61614(lVar4 + 0x28,0);
  lVar20 = *(long *)(unaff_x20 + 0x10);
  lVar5 = unaff_x20 + 0x18;
  func_0x000101e4dbe0(lVar5,auStack_90);
  lStack_150 = 0;
  plStack_158 = *(long **)(unaff_x20 + 0x40);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar8 = *(long *)(unaff_x20 + 0x50);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x58);
  auStack_170[0] = CONCAT44(auStack_170[0]._4_4_,(uint)*(byte *)((long)param_1 + 0x3e));
  if ((*(byte *)((long)param_1 + 0x3e) & 1) != 0) {
    FUN_101e4d114();
    lStack_150 = lVar5;
  }
  ppuStack_98 = &PTR_DAT_11048e450;
  lVar6 = 0;
  alStack_b8[0] = lVar4;
  lStack_a0 = lVar3;
  func_0x000101e54278();
  auStack_170[1] = lVar6;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_b8,lVar3);
  puStack_160 = (undefined1 *)auStack_170;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)auStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar7);
  auStack_e0[0] = *puVar7;
  ppuStack_c0 = &PTR_DAT_11048e450;
  *(undefined1 *)(lVar6 + _DAT_112e32c68) = 0;
  *(undefined1 *)(lVar6 + _DAT_112e32c70) = 0;
  *(undefined1 *)(lVar6 + _DAT_112e32c78) = 0;
  *(undefined1 *)(lVar6 + _DAT_112e32c80) = 0;
  *(undefined1 *)(lVar6 + _DAT_112e32c88) = 0;
  uVar2 = _DAT_112e32c90;
  lStack_c8 = lVar3;
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  lVar5 = lVar4;
  func_0x000107c6157c();
  func_0x0001005f60d4();
  *(long *)(lVar6 + uVar2) = lVar5;
  *(undefined8 *)(lVar6 + _DAT_112e32c98) = 0;
  puVar7 = (undefined8 *)(lVar6 + _DAT_112e32ca8);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)(lVar6 + _DAT_112e32cb0);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)(lVar6 + _DAT_112e32cb8);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)(lVar6 + _DAT_112e32cd0);
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  *(undefined2 *)(puVar7 + 6) = 0;
  *(undefined **)(lVar6 + _DAT_112e32cd8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined1 *)(lVar6 + _DAT_112e32ce0) = 0;
  *(undefined1 *)(lVar6 + _DAT_112e32ce8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112e32cf0) = 0;
  puVar7 = (undefined8 *)(lVar6 + _DAT_112e32cf8);
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[4] = 0;
  puVar7 = (undefined8 *)(lVar6 + _DAT_112e32d00);
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[4] = 0;
  puVar7 = (undefined8 *)(lVar6 + _DAT_112e32d08);
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[4] = 0;
  *(undefined1 *)(lVar6 + _DAT_112e32d18) = 2;
  puVar1 = (undefined4 *)(lVar6 + _DAT_112e32d20);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar6 + _DAT_112e32d28) = 0;
  *(undefined8 *)(lVar6 + _DAT_112e32d30) = 0;
  puVar7 = (undefined8 *)(lVar6 + _DAT_112e32d38);
  *puVar7 = 0;
  *(undefined1 *)(puVar7 + 1) = 1;
  *(undefined1 *)(lVar6 + _DAT_112e32d40) = 0;
  puVar7 = (undefined8 *)(lVar6 + _DAT_112e32c30);
  uVar24 = param_1[5];
  uVar23 = param_1[4];
  uVar22 = param_1[7];
  uVar16 = param_1[6];
  uVar27 = *param_1;
  uVar26 = param_1[3];
  uVar25 = param_1[2];
  puVar7[1] = param_1[1];
  *puVar7 = uVar27;
  puVar7[3] = uVar26;
  puVar7[2] = uVar25;
  puVar7[5] = uVar24;
  puVar7[4] = uVar23;
  puVar7[7] = uVar22;
  puVar7[6] = uVar16;
  func_0x000101e4dbe0(auStack_e0,lVar6 + _DAT_112e32c38);
  lVar5 = _DAT_112fec8a8;
  func_0x000107c61428(lVar20 + _DAT_112fec8a8,auStack_f8,0,0);
  uVar16 = *(undefined8 *)(lVar20 + lVar5);
  func_0x000101e4dba4(param_1,&uStack_138);
  func_0x000107c6157c(uVar16);
  func_0x0001000d224c(&uStack_138);
  func_0x000107c61574(uVar16);
  puVar7 = (undefined8 *)(lVar6 + _DAT_112e32c40);
  puVar7[4] = uStack_118;
  puVar7[1] = uStack_130;
  *puVar7 = uStack_138;
  puVar7[3] = uStack_120;
  puVar7[2] = uStack_128;
  func_0x000101e4dbe0(auStack_90,lVar6 + _DAT_112e32c48);
  plVar9 = plStack_158;
  *(long **)(lVar6 + _DAT_112e32c50) = plStack_158;
  *(undefined8 *)(lVar6 + _DAT_112e32c58) = uVar17;
  *(undefined8 *)(lVar6 + _DAT_112e32c60) = uVar21;
  FUN_101e69464(0);
  func_0x000107c610f8();
  func_0x000101e4dba4(param_1,&uStack_138);
  func_0x000107c615f0(plVar9);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar21);
  puVar7 = param_1;
  FUN_101e68e0c();
  *(undefined8 **)(lVar6 + _DAT_112e32cc0) = puVar7;
  lVar5 = _DAT_112fec9c0;
  func_0x000107c61428(lVar8 + _DAT_112fec9c0,&uStack_138,0,0);
  func_0x000101e4dbe0(lVar8 + lVar5,lVar6 + _DAT_112e32ca0);
  lVar5 = lStack_150;
  *(undefined1 *)(lVar6 + _DAT_112e32d10) = 0;
  if (((auStack_170[0] & 1) == 0) || (lStack_150 == 0)) {
    *(undefined8 *)(lVar6 + _DAT_112e32cc8) = 0;
  }
  else {
    uVar17 = param_1[6];
    lVar8 = 0;
    func_0x000101e5db04();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 0;
    func_0x000107c61614(lVar8 + 0x10,0);
    func_0x000107c61614(lVar8 + 0x20,0);
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x28) = uVar17;
    func_0x000107c61604(lVar8 + 0x20,puVar7);
    *(long *)(lVar8 + 0x30) = lVar5;
    *(long *)(lVar6 + _DAT_112e32cc8) = lVar8;
    func_0x000107c61174(lVar5);
  }
  lStack_140 = auStack_170[1];
  plVar9 = &lStack_148;
  lStack_148 = lVar6;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  lVar8 = _DAT_112e32cc8;
  lVar20 = *(long *)((long)plVar9 + _DAT_112e32cc8);
  lVar3 = lVar4;
  if (lVar20 != 0) {
    *(undefined ***)(lVar20 + 0x18) = &PTR_DAT_11048e730;
    func_0x000107c61604(lVar20 + 0x10,plVar9);
    if (*(long *)((long)plVar9 + lVar8) != 0) {
      lVar5 = 0x112d51030;
      func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
      plVar14 = plStack_158;
      plVar10 = plStack_158;
      auStack_170[1] = lVar5;
      func_0x000107c5e39c();
      func_0x000107c61180();
      plVar11 = plVar10;
      func_0x0001000b637c();
      func_0x000107c61170(plVar10);
      puVar12 = &UNK_11048e610;
      func_0x000107c613fc(&UNK_11048e610,0x18,7);
      func_0x000107c61614(puVar12 + 0x10,plVar9);
      pcVar18 = *(code **)(*plVar11 + 0x60);
      plVar10 = plVar9;
      func_0x000107c61174();
      pcVar19 = FUN_101e4dc24;
      puVar15 = puVar12;
      (*pcVar18)(FUN_101e4dc24);
      func_0x000107c61574(plVar11);
      func_0x000107c61574(puVar12);
      func_0x000107c614f0(pcVar19);
      auStack_170[0] = _DAT_112e32c90;
      uVar17 = *(undefined8 *)((long)plVar10 + _DAT_112e32c90);
      pcVar18 = *(code **)(puVar15 + 0x18);
      func_0x000107c6157c(uVar17);
      (*pcVar18)();
      func_0x000107c615e8(pcVar19);
      func_0x000107c61574(uVar17);
      plVar11 = plVar14;
      func_0x000107c419f0();
      func_0x000107c61180();
      plVar13 = plVar11;
      func_0x0001000b637c();
      func_0x000107c61170(plVar11);
      puVar12 = &UNK_11048e610;
      func_0x000107c613fc(&UNK_11048e610,0x18,7);
      func_0x000107c61614(puVar12 + 0x10,plVar10);
      uVar17 = 0x101e4dc2c;
      puVar15 = puVar12;
      (**(code **)(*plVar13 + 0x60))(0x101e4dc2c);
      func_0x000107c61574(plVar13);
      func_0x000107c61574(puVar12);
      func_0x000107c614f0(uVar17);
      uVar21 = *(undefined8 *)((long)plVar10 + auStack_170[0]);
      pcVar19 = *(code **)(puVar15 + 0x18);
      func_0x000107c6157c(uVar21);
      (*pcVar19)();
      func_0x000107c615e8(uVar17);
      func_0x000107c61574(uVar21);
      func_0x000107c41b80();
      func_0x000107c61180();
      plVar11 = plVar14;
      func_0x0001000b637c();
      func_0x000107c61170(plVar14);
      puVar12 = &UNK_11048e610;
      func_0x000107c613fc(&UNK_11048e610,0x18,7);
      func_0x000107c61614(puVar12 + 0x10,plVar10);
      func_0x000107c61170(plVar10);
      uVar17 = 0x101e4dc34;
      puVar15 = puVar12;
      (**(code **)(*plVar11 + 0x60))(0x101e4dc34);
      func_0x000107c61574(plVar11);
      func_0x000107c61574(puVar12);
      func_0x000107c614f0(uVar17);
      lVar3 = *(long *)((long)plVar10 + auStack_170[0]);
      pcVar19 = *(code **)(puVar15 + 0x18);
      func_0x000107c6157c(lVar3);
      (*pcVar19)();
      func_0x000107c61574(lVar4);
      func_0x000107c615e8(uVar17);
      lVar5 = lStack_150;
    }
  }
  func_0x000107c61574(lVar3);
  func_0x000107c61170(lVar5);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_e0);
  func_0x0001000834e4(alStack_b8);
  auVar28._8_8_ = &PTR_DAT_11048e848;
  auVar28._0_8_ = plVar9;
  return auVar28;
}



/* Entry: 101e4db08; end: 101e4db7b;  */

void FUN_101e4db08(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e4db7c; end: 101e4dc23;  */

void FUN_101e4db7c(void)

{
  FUN_101e4d2a8();
  return;
}



/* Entry: 101e4dc24; end: 101e4dc3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e4dc24(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112e32c78) = 1;
    if (((*(char *)(lVar2 + _DAT_112e32c80) == '\x01') &&
        (lVar7 = *(long *)(lVar2 + _DAT_112e32cc8), lVar7 != 0)) &&
       (*(char *)(*(long *)(lVar7 + 0x30) + _DAT_112e33168) == '\x01')) {
      lVar3 = *(long *)(lVar7 + 0x30) + _DAT_112e33150;
      func_0x000107c61648();
      if ((lVar3 != 0) && (func_0x000107c61574(lVar3), lVar1 = _DAT_112e32d08, lVar3 == lVar7)) {
        func_0x000107c61428(lVar2 + _DAT_112e32d08,auStack_88,0,0);
        FUN_101e5966c(lVar2 + lVar1,auStack_70,0x112e32d70,&UNK_10da1be90);
        if (lStack_58 == 0) {
          func_0x000107c61170(lVar2);
          func_0x000101e59ec0(auStack_70,0x112e32d70,&UNK_10da1be90);
          return;
        }
        uVar4 = 0x112e32d78;
        func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
        uVar5 = 0x112e32d80;
        func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
        puVar6 = &uStack_98;
        func_0x000107c6147c(puVar6,auStack_70,uVar4,uVar5,6);
        if (((ulong)puVar6 & 1) != 0) {
          func_0x000107c614f0(uStack_98);
          (**(code **)(lStack_90 + 0x28))();
          func_0x000107c615e8(uStack_98);
          *(undefined1 *)(lVar2 + _DAT_112e32c68) = 1;
          *(undefined1 *)(lVar2 + _DAT_112e32c70) = 1;
          *(undefined1 *)(lVar2 + _DAT_112e32c88) = 1;
        }
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101e4dc3c; end: 101e4dd8b;  */

/* WARNING: Possible PIC construction at 0x000101e4dcb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e4dcb4) */

void FUN_101e4dc3c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 == 0) {
    return;
  }
  puVar2 = PTR_PTR_1126aed60;
  func_0x000107c61168();
  func_0x000107c61174(lVar4);
  puVar3 = puVar2;
  func_0x000107c4a0c0();
  if ((int)puVar3 != 0) {
    func_0x000107c4d2e4();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4dce0);
      (*pcVar1)();
    }
    func_0x000107c4fd6c();
    func_0x000107c615e8(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 101e4dd8c; end: 101e4ddab;  */

void FUN_101e4dd8c(void)

{
  func_0x000107c61168(&PTR_PTR_112e32ab0);
  return;
}



/* Entry: 101e4ddac; end: 101e4de83;  */

/* WARNING: Possible PIC construction at 0x000101e4de50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e4de54) */

void FUN_101e4ddac(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    puVar2 = PTR_PTR_1126aed60;
    func_0x000107c61168();
    puVar3 = puVar2;
    func_0x000107c4a0c0();
    if ((int)puVar3 != 0) {
      puVar3 = puVar2;
      func_0x000107c40114();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4de80);
        (*pcVar1)();
      }
      puVar4 = puVar3;
      func_0x000107c40980();
      func_0x000107c61180();
      func_0x000107c615e8(puVar3);
      func_0x000107c4d2e4();
      func_0x000107c61180();
      if (puVar2 != (undefined *)0x0) {
        func_0x000107c40188();
        func_0x000107c61180();
        func_0x000107c615e8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4de84);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 101e4de84; end: 101e4df0f;  */

undefined * FUN_101e4de84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined **)(unaff_x20 + 0x18);
  puVar1 = puVar3;
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar3 = (undefined *)0x0;
    puVar2 = *(undefined **)(unaff_x20 + 0x18);
  }
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___AVPictureInPictureControllerContentSource_1126a9660;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVPictureInPictureControllerContentSource_1126a9660);
  func_0x000107c47f68();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 101e4df10; end: 101e4df53;  */

void FUN_101e4df10(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e4df54; end: 101e4df73;  */

undefined1 FUN_101e4df54(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x10);
}



/* Entry: 101e4df74; end: 101e4dffb;  */

undefined8 FUN_101e4df74(ulong param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x10) + 8))();
  if (param_1 < 2) {
    FUN_101e4dffc();
    uVar1 = 2;
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x18);
    if (param_1 == uVar2) {
      FUN_101e4dffc();
      uVar1 = 1;
    }
    else {
      *(ulong *)(unaff_x20 + 0x18) = param_1;
      func_0x000107c61170(uVar2);
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 101e4dffc; end: 101e4e00b;  */

void FUN_101e4dffc(ulong param_1)

{
  if (param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101e4e00c; end: 101e4e047; -[_TtC30SingleSnapPlayerImplementation26SingleSnapPlayerErrorUtils init] */

void FUN_101e4e00c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e4e048; end: 101e4e07b;  */

void FUN_101e4e048(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e4e07c; end: 101e4e163;  */

ulong FUN_101e4e07c(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uStack_50;
  long lStack_48;
  char cStack_40;
  ulong uStack_38;
  
  iVar1 = (int)&uStack_50;
  uStack_38 = param_1;
  func_0x000107c614b0();
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(&uStack_50,&uStack_38,uVar2,&UNK_1106d42b0,6);
  if (iVar1 == 0) {
    func_0x000107c5ed2c(param_1);
    uVar3 = param_1;
    func_0x000107c51788();
    func_0x000107c61170(param_1);
  }
  else if (cStack_40 == '\0') {
    uVar3 = uStack_50;
    func_0x000107c51788();
    func_0x000101e49df8(uStack_50,lStack_48,0);
  }
  else {
    if (cStack_40 == '\x01') {
      func_0x000101e49df8(uStack_50,lStack_48,1);
    }
    else if (lStack_48 != 0 || CARRY8(lStack_48 - 1,(ulong)(4 < uStack_50))) {
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 101e4e164; end: 101e4e74f;  */

void FUN_101e4e164(long *param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  ulong uStack_58;
  
  iVar2 = (int)&uStack_70;
  uVar3 = param_2;
  lVar10 = param_3;
  FUN_101e4e07c();
  if ((uVar3 & 1) != 0) {
    lVar10 = -0x2fffffffffffffe3;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f0151a0);
    lVar4 = 0;
    func_0x000107c5fe40();
    lVar9 = lVar10;
    lVar11 = lVar4;
    func_0x000107c312f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4e738);
      (*pcVar1)();
    }
    lVar4 = lVar9;
    func_0x000107c5faec();
    func_0x000107c61170(lVar9);
    lVar10 = -0x2fffffffffffffe1;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f0151c0);
    lVar5 = 0;
    func_0x000107c5fe40();
    lVar9 = lVar10;
    lVar12 = lVar5;
    func_0x000107c312f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar5);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4e73c);
      (*pcVar1)();
    }
    lVar10 = lVar9;
    func_0x000107c5faec();
    func_0x000107c61170(lVar9);
    param_3 = 0;
    goto LAB_101e4e708;
  }
  uVar3 = param_2;
  func_0x000107c5ed2c();
  uVar7 = uVar3;
  func_0x000107c42210();
  func_0x000107c61180();
  uVar6 = uVar7;
  func_0x000107c5faec();
  lVar9 = lVar10;
  func_0x000107c61170(uVar7);
  uVar7 = *(ulong *)PTR__NSCocoaErrorDomain_1103453f8;
  func_0x000107c5faec();
  if (uVar6 == uVar7 && lVar10 == lVar9) {
    func_0x000107c6142c(lVar10);
    func_0x000107c6142c(lVar9);
LAB_101e4e318:
    uVar7 = uVar3;
    func_0x000107c3fcb0();
    func_0x000107c61170(uVar3);
    if (uVar7 != 0x280) goto LAB_101e4e3f8;
    lVar10 = -0x2fffffffffffffe0;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f015140);
    lVar4 = 0;
    func_0x000107c5fe40();
    lVar9 = lVar10;
    lVar11 = lVar4;
    func_0x000107c312f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4e740);
      (*pcVar1)();
    }
    lVar4 = lVar9;
    func_0x000107c5faec();
    func_0x000107c61170(lVar9);
    lVar10 = -0x2fffffffffffffdb;
    func_0x000107c5fadc(0xd000000000000025,0x800000010f015170);
    lVar5 = 0;
    func_0x000107c5fe40();
    lVar9 = lVar10;
    lVar12 = lVar5;
    func_0x000107c312f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar5);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4e3f8);
      (*pcVar1)();
    }
  }
  else {
    func_0x000107c605b8(uVar6,lVar10,uVar7,lVar9,0);
    func_0x000107c6142c(lVar10);
    func_0x000107c6142c(lVar9);
    if ((uVar6 & 1) != 0) goto LAB_101e4e318;
    func_0x000107c61170(uVar3);
LAB_101e4e3f8:
    uVar3 = param_2;
    func_0x000107c5ed2c();
    uVar7 = uVar3;
    func_0x000107c517b4();
    func_0x000107c61170(uVar3);
    if ((int)uVar7 == 0) {
      uStack_58 = param_2;
      func_0x000107c614b0(param_2);
      uVar8 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c(&uStack_70,&uStack_58,uVar8,&UNK_1106d42b0,6);
      if (iVar2 != 0) {
        uVar3 = uStack_70;
        func_0x000103b263a4(uStack_70,uStack_68,uStack_60,1,0,2);
        func_0x000101e49df8(uStack_70,uStack_68,uStack_60);
        if ((uVar3 & 1) != 0) {
          lVar9 = -0x2ffffffffffffff0;
          func_0x000107c5fadc(0xd000000000000010,0x800000010f0150b0);
          lVar4 = 0;
          func_0x000107c5fe40();
          lVar10 = lVar9;
          lVar11 = lVar4;
          func_0x000107c312f4();
          func_0x000107c61180();
          func_0x000107c61170(lVar9);
          func_0x000107c61170(lVar4);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4e750);
            (*pcVar1)();
          }
          lVar4 = lVar10;
          func_0x000107c5faec();
          func_0x000107c61170(lVar10);
          lVar10 = 0x78655f79726f7473;
          func_0x000107c5fadc(0x78655f79726f7473,0xed00006465726970);
          lVar5 = 0;
          func_0x000107c5fe40();
          lVar9 = lVar10;
          lVar12 = lVar5;
          func_0x000107c312f4();
          func_0x000107c61180();
          func_0x000107c61170(lVar10);
          func_0x000107c61170(lVar5);
          if (lVar9 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4e62c);
            (*pcVar1)();
          }
          goto LAB_101e4e6f0;
        }
      }
      lVar9 = -0x2ffffffffffffff0;
      func_0x000107c5fadc(0xd000000000000010,0x800000010f0150b0);
      lVar4 = 0;
      func_0x000107c5fe40();
      lVar10 = lVar9;
      lVar11 = lVar4;
      func_0x000107c312f4();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar4);
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4e748);
        (*pcVar1)();
      }
      lVar4 = lVar10;
      func_0x000107c5faec();
      func_0x000107c61170(lVar10);
      lVar10 = -0x2fffffffffffffdb;
      func_0x000107c5fadc(0xd000000000000025,0x800000010f0150d0);
      lVar5 = 0;
      func_0x000107c5fe40();
      lVar9 = lVar10;
      lVar12 = lVar5;
      func_0x000107c312f4();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar5);
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4e74c);
        (*pcVar1)();
      }
    }
    else {
      lVar10 = -0x2fffffffffffffef;
      func_0x000107c5fadc(0xd000000000000011,0x800000010f015100);
      lVar4 = 0;
      func_0x000107c5fe40();
      lVar9 = lVar10;
      lVar11 = lVar4;
      func_0x000107c312f4();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar4);
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4e744);
        (*pcVar1)();
      }
      lVar4 = lVar9;
      func_0x000107c5faec();
      func_0x000107c61170(lVar9);
      lVar10 = -0x2fffffffffffffe4;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010f015120);
      lVar5 = 0;
      func_0x000107c5fe40();
      lVar9 = lVar10;
      lVar12 = lVar5;
      func_0x000107c312f4();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar5);
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e4e4dc);
        (*pcVar1)();
      }
    }
  }
LAB_101e4e6f0:
  lVar10 = lVar9;
  func_0x000107c5faec();
  func_0x000107c61170(lVar9);
LAB_101e4e708:
  *param_1 = lVar4;
  param_1[1] = lVar11;
  param_1[2] = lVar10;
  param_1[3] = lVar12;
  *(byte *)(param_1 + 4) = (byte)param_3 & 1;
  return;
}



/* Entry: 101e4e750; end: 101e4e76f;  */

void FUN_101e4e750(void)

{
  func_0x000107c61168(&PTR_PTR_112805ec8);
  return;
}



/* Entry: 101e4e770; end: 101e4e797; +[_TtC30SingleSnapPlayerImplementation25SingleSnapPlayerErrorView layerClass] */

void FUN_101e4e770(void)

{
  func_0x000101e4f78c(0,0x112d57230,&PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 101e4e798; end: 101e4e8c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101e4e798(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112e32bf0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e32bf0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aea58;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    func_0x000107c5a100(puVar3,param_2,3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174();
    func_0x000107c5af88(puVar2,param_2,0xd5);
    func_0x000107c61180();
    func_0x000107c59c78(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c59c74(puVar3,param_2,1);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 101e4e8c4; end: 101e4e96f;  */

undefined * FUN_101e4e8c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1,param_2,0x14);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2,param_2,0xd5);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(puVar1,param_2,1);
  func_0x000107c56ba8(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 101e4e970; end: 101e4ea03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101e4e970(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e32c00;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e32c00);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aec40;
    func_0x000107c61168();
    func_0x000107c3ee98();
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c59a2c(puVar3,param_2,3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 101e4ea04; end: 101e4eae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101e4ea04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112e32be0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e32be8);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e32bf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e32bf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e32c00) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_101e4eae8();
  FUN_101e4ecf4();
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 101e4eae8; end: 101e4ecf3;  */

/* WARNING: Possible PIC construction at 0x000101e4eba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ebc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ec08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ec44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ec94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e4ec48) */
/* WARNING: Removing unreachable block (ram,0x000101e4ec0c) */
/* WARNING: Removing unreachable block (ram,0x000101e4ebc8) */
/* WARNING: Removing unreachable block (ram,0x000101e4ebac) */
/* WARNING: Removing unreachable block (ram,0x000101e4ec98) */

void FUN_101e4eae8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c61168(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  func_0x000107c61490(unaff_x20,puVar1,0,0,0);
  lVar2 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c3fdd0(0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101e4ecf4; end: 101e4f0bf;  */

/* WARNING: Possible PIC construction at 0x000101e4ed28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ed44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ed60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4edf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ee48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4eea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4eefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ef50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4efb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4f004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4f058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e4f008) */
/* WARNING: Removing unreachable block (ram,0x000101e4efb4) */
/* WARNING: Removing unreachable block (ram,0x000101e4ef54) */
/* WARNING: Removing unreachable block (ram,0x000101e4ef00) */
/* WARNING: Removing unreachable block (ram,0x000101e4eeac) */
/* WARNING: Removing unreachable block (ram,0x000101e4ee4c) */
/* WARNING: Removing unreachable block (ram,0x000101e4edf8) */
/* WARNING: Removing unreachable block (ram,0x000101e4ed64) */
/* WARNING: Removing unreachable block (ram,0x000101e4ed48) */
/* WARNING: Removing unreachable block (ram,0x000101e4ed2c) */
/* WARNING: Removing unreachable block (ram,0x000101e4f05c) */

void FUN_101e4ecf4(undefined8 param_1)

{
  FUN_101e4e798();
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e4f0c0; end: 101e4f0df; -[_TtC30SingleSnapPlayerImplementation25SingleSnapPlayerErrorView initWithFrame:] */

void FUN_101e4f0c0(void)

{
  FUN_101e4ea04();
  return;
}



/* Entry: 101e4f0e0; end: 101e4f193; -[_TtC30SingleSnapPlayerImplementation25SingleSnapPlayerErrorView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e4f0e0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_1 + _DAT_112e32be0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  puVar2 = (undefined8 *)(param_1 + _DAT_112e32be8);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  *(undefined8 *)(param_1 + _DAT_112e32bf0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e32bf8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e32c00) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SingleSnapPlayerImplementation/SingleSnapPlayerErrorView.swift",0x3e,2,0x40,0
                     );
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101e4f194);
  (*pcVar3)();
}



/* Entry: 101e4f194; end: 101e4f35f;  */

/* WARNING: Possible PIC construction at 0x000101e4f248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4f274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4f2a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4f2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4f31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ed28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ed44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ed60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4edf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ee48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4eea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4eefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4ef50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4efb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4f004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e4f058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e4f008) */
/* WARNING: Removing unreachable block (ram,0x000101e4efb4) */
/* WARNING: Removing unreachable block (ram,0x000101e4ef54) */
/* WARNING: Removing unreachable block (ram,0x000101e4ef00) */
/* WARNING: Removing unreachable block (ram,0x000101e4eeac) */
/* WARNING: Removing unreachable block (ram,0x000101e4ee4c) */
/* WARNING: Removing unreachable block (ram,0x000101e4edf8) */
/* WARNING: Removing unreachable block (ram,0x000101e4ed64) */
/* WARNING: Removing unreachable block (ram,0x000101e4ed48) */
/* WARNING: Removing unreachable block (ram,0x000101e4ed2c) */
/* WARNING: Removing unreachable block (ram,0x000101e4f320) */
/* WARNING: Removing unreachable block (ram,0x000101e4ecf4) */
/* WARNING: Removing unreachable block (ram,0x000101e4f300) */
/* WARNING: Removing unreachable block (ram,0x000101e4f2ac) */
/* WARNING: Removing unreachable block (ram,0x000101e4f278) */
/* WARNING: Removing unreachable block (ram,0x000101e4f24c) */
/* WARNING: Removing unreachable block (ram,0x000101e4f05c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e4f194(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined *puVar11;
  long unaff_x20;
  
  uVar5 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  bVar9 = *(byte *)(param_1 + 4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e32be8);
  uVar3 = *puVar1;
  uVar7 = puVar1[1];
  uVar4 = puVar1[2];
  uVar8 = puVar1[3];
  *puVar1 = *param_1;
  puVar1[1] = uVar5;
  puVar1[2] = uVar2;
  puVar1[3] = uVar6;
  uVar10 = *(undefined1 *)(puVar1 + 4);
  *(byte *)(puVar1 + 4) = bVar9 & 1;
  FUN_101e4f738(0x65736f6c63,uVar3,uVar7,uVar4,uVar8,uVar10);
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c5af88(puVar11);
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 101e4f360; end: 101e4f453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e4f360(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = unaff_x20 + _DAT_112e32be0;
  func_0x000107c61428(lVar3,auStack_58,0,0);
  lVar1 = lVar3;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar3 + 8);
    if ((*(long *)(unaff_x20 + _DAT_112e32be8 + 8) == 0) ||
       (*(char *)(unaff_x20 + _DAT_112e32be8 + 0x20) != '\x01')) {
      lVar2 = lVar1;
      func_0x000107c614f0();
      FUN_101e4e970();
      (**(code **)(lVar3 + 8))();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c614f0();
      FUN_101e4e970();
      (**(code **)(lVar3 + 0x10))();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 101e4f454; end: 101e4f47b; -[_TtC30SingleSnapPlayerImplementation25SingleSnapPlayerErrorView didTapButton] */

void FUN_101e4f454(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101e4f360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e4f47c; end: 101e4f4af;  */

void FUN_101e4f47c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e4f4b0; end: 101e4f547;  */

long FUN_101e4f4b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101e4f548; end: 101e4f5bb;  */

undefined8 * FUN_101e4f548(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 101e4f5bc; end: 101e4f607;  */

undefined8 * FUN_101e4f5bc(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 101e4f608; end: 101e4f6a3;  */

int FUN_101e4f608(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101e4f6a4; end: 101e4f717; -[_TtC30SingleSnapPlayerImplementation25SingleSnapPlayerErrorView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e4f6ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e4f6f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e4f6a4(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000101e4f768(param_1 + _DAT_112e32be0);
  puVar1 = (undefined8 *)(param_1 + _DAT_112e32be8);
  func_0x000101e4f738(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined1 *)(puVar1 + 4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e32bf0));
  return;
}



/* Entry: 101e4f718; end: 101e4f737;  */

void FUN_101e4f718(void)

{
  func_0x000107c61168(&PTR_PTR_112805f78);
  return;
}



/* Entry: 101e4f738; end: 101e4f7cb;  */

/* WARNING: Possible PIC construction at 0x000101e4f750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e4f754) */

void FUN_101e4f738(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 101e4f7cc; end: 101e4fb57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_101e4f7cc(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e32d30;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112e32d30);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainQueuePerformer";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 101e4fb58; end: 101e4fd7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e4fb58(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  *(undefined1 *)(param_2 + _DAT_112e32c78) = 0;
  lVar9 = _DAT_112e32cc8;
  lVar8 = *(long *)(param_2 + _DAT_112e32cc8);
  if (lVar8 != 0) {
    func_0x000107c6157c(lVar8);
    FUN_101e5ded0();
    func_0x000107c61574(lVar8);
  }
  lVar8 = _DAT_112e32c88;
  if ((*(char *)(param_2 + _DAT_112e32c88) != '\x01') ||
     (((lVar6 = *(long *)(param_2 + lVar9), lVar6 != 0 &&
       (uVar1 = *(ulong *)(*(long *)(lVar6 + 0x30) + _DAT_112e33140), uVar1 != 0)) &&
      (func_0x000107c4a1a8(), (uVar1 & 1) != 0)))) goto LAB_101e4fd58;
  lVar6 = _DAT_112e32d08;
  func_0x000107c61428(param_2 + _DAT_112e32d08,auStack_a8,0,0);
  FUN_101e5966c(param_2 + lVar6,auStack_90,0x112e32d70,&UNK_10da1be90);
  if (lStack_78 == 0) {
    func_0x000101e59ec0(auStack_90,0x112e32d70,&UNK_10da1be90);
    goto LAB_101e4fd58;
  }
  uVar2 = 0x112e32d78;
  func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
  uVar3 = 0x112e32d80;
  func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
  puVar4 = &uStack_b8;
  func_0x000107c6147c(puVar4,auStack_90,uVar2,uVar3,6);
  if (((ulong)puVar4 & 1) == 0) goto LAB_101e4fd58;
  uVar1 = uStack_b8;
  func_0x000107c614f0();
  (**(code **)(lStack_b0 + 8))();
  if ((uVar1 & 1) != 0) {
    FUN_101e4fd80();
    lVar6 = _DAT_112e33150;
    lVar9 = *(long *)(param_2 + lVar9);
    if (lVar9 != 0) {
      lVar7 = *(long *)(lVar9 + 0x30);
      lVar5 = lVar7 + _DAT_112e33150;
      func_0x000107c61648();
      func_0x000107c6157c(lVar9);
      if (lVar5 == 0) {
LAB_101e4fd08:
        FUN_101e5e450();
        func_0x000107c61634(lVar7 + lVar6,0);
        if (*(long *)(lVar7 + _DAT_112e33110) != 0) {
          FUN_101e4dc3c();
        }
      }
      else {
        func_0x000107c61574(lVar5);
        lVar5 = lVar7 + lVar6;
        func_0x000107c61648();
        if ((lVar5 != 0) && (func_0x000107c61574(), lVar5 == lVar9)) goto LAB_101e4fd08;
      }
      func_0x000107c61574(lVar9);
    }
  }
  func_0x000107c615e8(uStack_b8);
LAB_101e4fd58:
  *(undefined1 *)(param_2 + lVar8) = 0;
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 101e4fd80; end: 101e5009f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e4fd80(void)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar10 = *(long *)(unaff_x20 + _DAT_112e32cc8);
  if ((lVar10 == 0) || (*(char *)(*(long *)(lVar10 + 0x30) + _DAT_112e33168) != '\x01')) {
LAB_101e4fde8:
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(lVar10 + 0x30) + _DAT_112e33150;
    func_0x000107c61648();
    if ((lVar3 == 0) || (func_0x000107c61574(), lVar3 != lVar10)) goto LAB_101e4fde8;
    if ((*(byte *)(unaff_x20 + _DAT_112e32c78) & 1) != 0) {
LAB_101e50094:
      uVar2 = 1;
      plVar5 = (long *)&DAT_112e32c88;
      goto LAB_101e50028;
    }
    puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c3dfc0();
    func_0x000107c61170(puVar8);
    bVar1 = true;
    if (puVar9 != (undefined *)0x0) goto LAB_101e50094;
  }
  lVar10 = _DAT_112e32d08;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_58,0,0);
  FUN_101e5966c(unaff_x20 + lVar10,&puStack_98,0x112e32d70,&UNK_10da1be90);
  if (puStack_80 == (undefined *)0x0) {
    func_0x000101e59ec0(&puStack_98,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar4 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar7 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    plVar5 = &lStack_68;
    func_0x000107c6147c(plVar5,&puStack_98,uVar4,uVar7,6);
    lVar3 = lStack_68;
    if (((ulong)plVar5 & 1) != 0) {
      if (bVar1) {
        *(undefined1 *)(unaff_x20 + _DAT_112e32c80) = 1;
        FUN_101e4f7cc();
        puVar8 = &UNK_11048e8d0;
        func_0x000107c613fc(&UNK_11048e8d0,0x18,7);
        func_0x000107c61614(puVar8 + 0x10);
        pcStack_78 = FUN_101e585e8;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_1000f6b44;
        puStack_80 = &UNK_11048e8e8;
        ppuVar6 = &puStack_98;
        puStack_70 = puVar8;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_70);
        func_0x000107c4e524(plVar5);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(plVar5);
      }
      func_0x000107c614f0(lVar3);
      (**(code **)(lStack_60 + 0x30))();
      func_0x000107c615e8(lVar3);
    }
  }
  if (*(char *)(unaff_x20 + _DAT_112e32c30 + 0x3a) == '\x01') {
    FUN_101e5966c(unaff_x20 + lVar10,&puStack_98,0x112e32d70,&UNK_10da1be90);
    if (puStack_80 == (undefined *)0x0) {
      func_0x000101e59ec0(&puStack_98,0x112e32d70,&UNK_10da1be90);
    }
    else {
      uVar4 = 0x112e32d78;
      func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
      uVar7 = 0;
      func_0x000101e5a160(0);
      plVar5 = &lStack_68;
      func_0x000107c6147c(plVar5,&puStack_98,uVar4,uVar7,6);
      if (((ulong)plVar5 & 1) != 0) {
        func_0x000107c4e454(*(undefined8 *)(lStack_68 + 0x20));
        func_0x000107c4e454(*(undefined8 *)(lStack_68 + 0x30));
        func_0x000107c61574(lStack_68);
      }
    }
  }
  uVar2 = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e32c68) = 0;
  plVar5 = (long *)&DAT_112e32c70;
LAB_101e50028:
  *(undefined1 *)(unaff_x20 + *plVar5) = uVar2;
  return;
}



/* Entry: 101e500a0; end: 101e500f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e500a0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + _DAT_112e32c88) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101e500f4; end: 101e50193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e500f4(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e32ca8);
  if (lVar2 != 0) {
    lVar3 = ((long *)(unaff_x20 + _DAT_112e32ca8))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
    func_0x000107c615e8(lVar2);
  }
  FUN_101e50194();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e50194; end: 101e506fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e50194(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_150 [56];
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined1 auStack_e0 [24];
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e32cd0);
  lVar13 = puVar1[1];
  if (lVar13 != 0) {
    uVar11 = *puVar1;
    uVar9 = puVar1[2];
    uVar5 = puVar1[3];
    lVar15 = puVar1[4];
    uVar6 = puVar1[5];
    uVar8 = *(undefined2 *)(puVar1 + 6);
    bStack_70 = (byte)uVar8 & 1;
    bStack_6f = (byte)((ushort)uVar8 >> 8) & 1;
    uStack_a0 = uVar11;
    lStack_98 = lVar13;
    uStack_90 = uVar9;
    uStack_88 = uVar5;
    lStack_80 = lVar15;
    uStack_78 = uVar6;
    FUN_101e5966c(unaff_x20 + _DAT_112e32c40,auStack_e0,0x112e32170,&UNK_10da1b5c0);
    uStack_118 = uVar11;
    lStack_110 = lVar13;
    uStack_108 = uVar9;
    uStack_100 = uVar5;
    lStack_f8 = lVar15;
    uStack_f0 = uVar6;
    uStack_e8 = uVar8;
    if (lStack_c8 == 0) {
      FUN_101e3a290(&uStack_118,auStack_150);
      func_0x000101e59ec0(auStack_e0,0x112e32170,&UNK_10da1b5c0);
    }
    else {
      func_0x0001000a8868(auStack_e0,lStack_c8);
      pcVar10 = *(code **)(lStack_c0 + 0x20);
      FUN_101e3a290(&uStack_118,auStack_150);
      (*pcVar10)(&uStack_a0,lStack_c8,lStack_c0);
      func_0x000101e5976c(auStack_e0);
    }
    lVar14 = unaff_x20 + _DAT_112e32ca0;
    uVar4 = *(undefined8 *)(lVar14 + 0x18);
    lVar12 = *(long *)(lVar14 + 0x20);
    func_0x0001000a8868(lVar14,uVar4);
    (**(code **)(lVar12 + 0x30))
              (&uStack_a0,*(undefined8 *)(unaff_x20 + _DAT_112e32c30 + 0x30),uVar4,lVar12);
    FUN_101ad91a0(uVar11,lVar13,uVar9,uVar5,lVar15,uVar6,uVar8);
  }
  if (*(long *)(unaff_x20 + _DAT_112e32c98) != 0) {
    func_0x000107c3f474();
  }
  lVar13 = _DAT_112e33150;
  lVar15 = *(long *)(unaff_x20 + _DAT_112e32cc8);
  if (lVar15 != 0) {
    lVar12 = *(long *)(lVar15 + 0x30);
    lVar14 = lVar12 + _DAT_112e33150;
    func_0x000107c61648();
    if (lVar14 != 0) {
      func_0x000107c61574();
      lVar14 = lVar12 + lVar13;
      func_0x000107c61648();
      if ((lVar14 == 0) || (func_0x000107c61574(), lVar14 != lVar15)) goto LAB_101e50398;
    }
    FUN_101e5e450();
    func_0x000107c61634(lVar12 + lVar13,0);
    if (*(long *)(lVar12 + _DAT_112e33110) != 0) {
      FUN_101e4dc3c();
    }
  }
LAB_101e50398:
  lVar13 = unaff_x20 + _DAT_112e32d00;
  func_0x000107c61428(lVar13,auStack_150,0,0);
  if (*(long *)(lVar13 + 0x18) != 0) {
    func_0x000101e597dc(lVar13,&uStack_118);
    lVar13 = lStack_f8;
    uVar9 = uStack_100;
    func_0x0001000a8868(&uStack_118,uStack_100);
    (**(code **)(lVar13 + 0x30))(uVar9,lVar13);
    func_0x000101e5976c(&uStack_118);
  }
  lVar13 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar13,auStack_e0,0,0);
  if (*(long *)(lVar13 + 0x18) != 0) {
    func_0x000101e597dc(lVar13,&uStack_118);
    lVar13 = lStack_f8;
    uVar9 = uStack_100;
    func_0x0001000a8868(&uStack_118,uStack_100);
    (**(code **)(lVar13 + 0x30))(uVar9,lVar13);
    func_0x000101e5976c(&uStack_118);
  }
  lVar13 = unaff_x20 + _DAT_112e32cf8;
  func_0x000107c61428(lVar13,auStack_b8,0,0);
  if (*(long *)(lVar13 + 0x18) != 0) {
    func_0x000101e597dc(lVar13,&uStack_118);
    lVar13 = lStack_f8;
    uVar9 = uStack_100;
    func_0x0001000a8868(&uStack_118,uStack_100);
    (**(code **)(lVar13 + 0x30))(uVar9,lVar13);
    func_0x000101e5976c(&uStack_118);
  }
  FUN_101e68c58();
  lVar13 = _DAT_112e32ce0;
  if (*(char *)(unaff_x20 + _DAT_112e32ce0) == '\x01') {
    func_0x0001000a8868(unaff_x20 + _DAT_112e32c38,
                        *(undefined8 *)(unaff_x20 + _DAT_112e32c38 + 0x18));
    uVar9 = 0;
    FUN_101e4c630(0);
    FUN_101e4c5d0(4,0,0,10,uVar9,&PTR_DAT_11048e450);
  }
  *(undefined1 *)(unaff_x20 + lVar13) = 0;
  plVar2 = (long *)(unaff_x20 + _DAT_112e32cb0);
  lVar13 = *plVar2;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar14 = plVar2[1];
    lVar15 = lVar13;
    func_0x000107c614f0(lVar13);
    pcVar10 = *(code **)(lVar14 + 8);
    func_0x000107c615f0(lVar13);
    (*pcVar10)(lVar15,lVar14);
    func_0x000107c615e8(lVar13);
    lVar13 = *plVar2;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  func_0x000107c615e8(lVar13);
  plVar2 = (long *)(unaff_x20 + _DAT_112e32cb8);
  lVar13 = *plVar2;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar14 = plVar2[1];
    lVar15 = lVar13;
    func_0x000107c614f0(lVar13);
    pcVar10 = *(code **)(lVar14 + 8);
    func_0x000107c615f0(lVar13);
    (*pcVar10)(lVar15,lVar14);
    func_0x000107c615e8(lVar13);
    lVar13 = *plVar2;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  func_0x000107c615e8(lVar13);
  lVar13 = _DAT_112e32d28;
  lVar15 = *(long *)(unaff_x20 + _DAT_112e32d28);
  if (lVar15 == 0) {
    uVar9 = 0;
  }
  else {
    func_0x000107c6157c(lVar15);
    func_0x000107c5f848();
    func_0x000107c61574(lVar15);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar13);
  }
  *(undefined8 *)(unaff_x20 + lVar13) = 0;
  func_0x000107c61574(uVar9);
  uVar9 = *puVar1;
  uVar11 = puVar1[1];
  uVar5 = puVar1[2];
  uVar4 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  uVar8 = *(undefined2 *)(puVar1 + 6);
  *(undefined2 *)(puVar1 + 6) = 0;
  FUN_101ad91a0(uVar9,uVar11,uVar5,uVar4,uVar6,uVar7,uVar8);
  lVar13 = _DAT_112e32cd8;
  func_0x000107c61428(unaff_x20 + _DAT_112e32cd8,&uStack_118,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar13);
  *(undefined **)(unaff_x20 + lVar13) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar9);
  *(undefined1 *)(unaff_x20 + _DAT_112e32ce8) = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e32cf0);
  *(undefined8 *)(unaff_x20 + _DAT_112e32cf0) = 0;
  func_0x000107c614ac(uVar9);
  *(undefined1 *)(unaff_x20 + _DAT_112e32d10) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e32c68) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e32d18) = 2;
  puVar3 = (undefined4 *)(unaff_x20 + _DAT_112e32d20);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112e32c70) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e32c88) = 0;
  return;
}



/* Entry: 101e506fc; end: 101e507ab; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e506fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112e32ca8);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar4 = ((long *)(param_1 + _DAT_112e32ca8))[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
    func_0x000107c615e8(lVar3);
  }
  FUN_101e50194();
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e507ac; end: 101e50983; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e5081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e5087c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e5089c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e50880) */
/* WARNING: Removing unreachable block (ram,0x000101e50820) */
/* WARNING: Removing unreachable block (ram,0x000101e508a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e507ac(long param_1)

{
  FUN_101ad90b8(param_1 + _DAT_112e32c30);
  func_0x000101e5976c(param_1 + _DAT_112e32c38);
  func_0x000101e59ec0(param_1 + _DAT_112e32c40,0x112e32170,&UNK_10da1b5c0);
  func_0x000101e5976c(param_1 + _DAT_112e32c48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e32c50));
  return;
}


