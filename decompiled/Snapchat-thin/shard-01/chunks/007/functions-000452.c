/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101358a14; end: 101358a43;  */

void FUN_101358a14(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = *(undefined1 *)(param_1 + 4);
  FUN_10135b230(&uStack_40);
  return;
}



/* Entry: 101358a44; end: 101358ac3;  */

/* WARNING: Possible PIC construction at 0x000101358a80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101358a84) */

void FUN_101358a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if (param_5 < 4) {
    if (((param_5 != 1) && (param_5 != 2)) && (param_2 = param_4, param_5 != 3)) {
      return;
    }
  }
  else if (param_5 != 4) {
    if (param_5 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    if (param_5 != 6) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 101358ac4; end: 101358ad7;  */

/* WARNING: Possible PIC construction at 0x000101358b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101358b14) */

void FUN_101358ac4(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 4) {
    if ((bVar1 != 1) && (bVar1 != 2)) {
      if (bVar1 != 3) {
        return;
      }
_objc_release:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(*param_1,param_1[1],param_1[2],param_1[3]);
      return;
    }
  }
  else if (bVar1 != 4) {
    if (bVar1 == 5) goto _objc_release;
    if (bVar1 != 6) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 101358ad8; end: 101358b53;  */

/* WARNING: Possible PIC construction at 0x000101358b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101358b14) */

void FUN_101358ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if (param_5 < 4) {
    if ((param_5 != 1) && (param_5 != 2)) {
      if (param_5 != 3) {
        return;
      }
_objc_release:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  else if (param_5 != 4) {
    if (param_5 == 5) goto _objc_release;
    if (param_5 != 6) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101358b54; end: 101358c23;  */

undefined8 * FUN_101358b54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_101358a44(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 101358c24; end: 101358c6b;  */

undefined8 * FUN_101358c24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_101358ad8(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 101358c6c; end: 101358d43;  */

int FUN_101358c6c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf8 < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xf9;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 8) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101358d44; end: 101358d7b;  */

/* WARNING: Possible PIC construction at 0x000101358d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101358d5c) */

void FUN_101358d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 101358d7c; end: 101358e83;  */

undefined1 * FUN_101358d7c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 101358e84; end: 101358eef;  */

undefined1 * FUN_101358e84(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101358ef0; end: 101358fbb;  */

int FUN_101358ef0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101358fbc; end: 10135912f;  */

undefined1  [16] FUN_101358fbc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar6 = *(ulong *)(unaff_x20 + 0x58);
  uVar3 = uVar6;
  func_0x000107c4d98c(uVar6);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  uStack_58 = param_2;
  func_0x000107c61170(uVar3);
  uVar3 = uVar6;
  func_0x000107c4c06c();
  if (((uVar3 & 1) == 0) && (func_0x000107c3e448(), uVar3 = uVar6, (uVar6 & 1) == 0)) {
    func_0x000108ed0680();
    func_0x000107c61180();
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101359130);
      (*pcVar2)();
    }
    uStack_60 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    func_0x000107c5fb78(uVar4,param_2);
  }
  else {
    func_0x000108ed0668();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101359128);
      (*pcVar2)();
    }
    uStack_60 = uVar3;
    func_0x000107c5faec();
    uVar5 = uStack_58;
    func_0x000107c61170();
    func_0x000108ed06e0();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10135912c);
      (*pcVar2)();
    }
    uVar6 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    func_0x000107c5fb78(uVar4,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c5fb78(uVar6,uVar5);
    param_2 = uVar5;
  }
  func_0x000107c6142c(param_2);
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = uStack_60;
  return auVar1;
}



/* Entry: 101359130; end: 1013591cb;  */

undefined1  [16] FUN_101359130(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  uVar3 = *(ulong *)(unaff_x20 + 0x58);
  uVar2 = uVar3;
  func_0x000107c49970();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar3;
    func_0x000107c4c06c();
    if (((uVar2 & 1) == 0) && (func_0x000107c3e448(), uVar2 = uVar3, (uVar3 & 1) == 0)) {
      func_0x000108ed0698();
      func_0x000107c61180();
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013591cc);
        (*pcVar1)();
      }
    }
    else {
      uVar3 = uVar2;
      func_0x000108ed06b0();
      func_0x000107c61180();
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101359188);
        (*pcVar1)();
      }
    }
    uVar2 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
  }
  else {
    uVar2 = 0;
    param_2 = 0xe000000000000000;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1013591cc; end: 101359357;  */

undefined8 FUN_1013591cc(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  
  puVar2 = &stack0xffffffffffffff90;
  puVar4 = &stack0xffffffffffffff90;
  uVar1 = 0x112d755f8;
  func_0x0001000285a8(0x112d755f8,&UNK_10d9358f0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  lVar7 = *(long *)(unaff_x20 + 0x98);
  if (lVar7 != 0) {
    func_0x000107c60bc4(&stack0xffffffffffffff90);
    func_0x000107c615f0(lVar7);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(uVar1);
    uVar3 = 0;
    func_0x0001013588c8(0);
    func_0x000107c6157c();
    func_0x000107c5fb18(&stack0xffffffffffffff90,uVar3);
    uVar5 = 0;
    func_0x0001048b0ec8(0);
    func_0x000107c610f8();
    func_0x0001048b0b48(puVar4,uVar3,0x2a,uVar5);
    uVar3 = 0;
    FUN_10135b6e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    lVar6 = lVar7;
    func_0x000107c43124(lVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c60bd0(puVar2);
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8(lVar7);
  }
  return uVar1;
}



/* Entry: 101359358; end: 10135939f;  */

void FUN_101359358(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2;
    func_0x000107c61174(param_2);
    func_0x0001002a64a8(&lStack_28);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1013593a0; end: 101359817;  */

undefined1 * FUN_1013593a0(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  undefined1 *puVar13;
  undefined1 auStack_68 [24];
  
  puVar6 = &stack0xffffffffffffff60;
  puVar8 = &stack0xffffffffffffff60;
  puVar9 = &stack0xffffffffffffff60;
  puVar13 = &stack0xffffffffffffff60;
  func_0x000107c61428(unaff_x20 + 0xa8,auStack_68,0,0);
  lVar12 = *(long *)(unaff_x20 + 0xa8);
  if (*(long *)(lVar12 + 0x10) != 0) {
    func_0x000107c61434(lVar12);
    lVar2 = param_1;
    uVar10 = param_2;
    func_0x000100029284();
    if ((uVar10 & 1) != 0) {
      puVar13 = *(undefined1 **)(*(long *)(lVar12 + 0x38) + lVar2 * 8);
      func_0x000107c6157c(puVar13);
      func_0x000107c6142c(lVar12);
      return puVar13;
    }
    func_0x000107c6142c(lVar12);
  }
  puVar3 = PTR_PTR_1126b08b0;
  func_0x000107c61168(PTR_PTR_1126b08b0);
  lVar12 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c3f71c(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  puVar4 = PTR_PTR_1126b08a8;
  func_0x000107c610f8(PTR_PTR_1126b08a8);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c460f4(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  lVar12 = *(long *)(unaff_x20 + 0x90);
  func_0x000107c423b0();
  func_0x000107c61180();
  if (lVar12 != 0) {
    lVar2 = lVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    if (lVar2 == 0) {
      func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
      func_0x000100854cb0(&stack0xffffffffffffff60);
      func_0x000107c61170(puVar4);
    }
    else {
      puVar3 = PTR_PTR_1126b08b8;
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      lVar12 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c4766c(puVar3);
      func_0x000107c61170(lVar12);
      lVar12 = lVar2;
      func_0x000107c409f4(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar3);
      func_0x0001000285a8(0x112d755d8,&UNK_10d9358d0);
      func_0x000107c613fc();
      func_0x00010042e6a0();
      func_0x000107c61428(unaff_x20 + 0xa8,&stack0xffffffffffffff60,0x21,0);
      func_0x000107c61434(param_2);
      func_0x000107c6157c(puVar6);
      uVar7 = *(undefined8 *)(unaff_x20 + 0xa8);
      func_0x000107c61558(uVar7);
      uVar11 = *(undefined8 *)(unaff_x20 + 0xa8);
      *(undefined8 *)(unaff_x20 + 0xa8) = 0x8000000000000000;
      func_0x00010135a37c(puVar6,param_1,param_2,uVar7);
      func_0x000107c6142c(param_2);
      *(undefined8 *)(unaff_x20 + 0xa8) = uVar11;
      func_0x000107c614a8(&stack0xffffffffffffff60);
      func_0x000107c61428(unaff_x20 + 0xa0,&stack0xffffffffffffff60,0x21,0);
      func_0x000107c61434(param_2);
      func_0x000107c615f0(lVar12);
      uVar7 = *(undefined8 *)(unaff_x20 + 0xa0);
      func_0x000107c61558(uVar7);
      uVar11 = *(undefined8 *)(unaff_x20 + 0xa0);
      *(undefined8 *)(unaff_x20 + 0xa0) = 0x8000000000000000;
      func_0x00010135a260(lVar12,param_1,param_2,uVar7);
      func_0x000107c6142c(param_2);
      *(undefined8 *)(unaff_x20 + 0xa0) = uVar11;
      func_0x000107c614a8(&stack0xffffffffffffff60);
      puVar3 = &UNK_1103a65b0;
      func_0x000107c613fc(&UNK_1103a65b0,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar5 = &UNK_1103a65d8;
      func_0x000107c613fc(&UNK_1103a65d8,0x30,7);
      *(undefined **)(puVar5 + 0x10) = puVar3;
      *(long *)(puVar5 + 0x18) = param_1;
      *(ulong *)(puVar5 + 0x20) = param_2;
      *(undefined1 **)(puVar5 + 0x28) = puVar6;
      func_0x000107c60bc4(&stack0xffffffffffffff60);
      func_0x000107c61434(param_2);
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(puVar5);
      uVar7 = 0;
      func_0x0001013588c8(0);
      func_0x000107c6157c();
      func_0x000107c5fb18(&stack0xffffffffffffff60,uVar7);
      uVar11 = 0;
      func_0x0001048b0ec8(0);
      func_0x000107c610f8();
      func_0x0001048b0b48(puVar9,uVar7,0x2a,uVar11);
      uVar7 = 0;
      FUN_10135b6e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      lVar2 = lVar12;
      func_0x000107c43124(lVar12);
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      func_0x000107c61170(uVar7);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(puVar4);
      func_0x000107c60bd0(puVar8);
      puVar13 = puVar6;
    }
    return puVar13;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101359818);
  (*pcVar1)();
}



/* Entry: 101359818; end: 1013598cf;  */

void FUN_101359818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 auStack_70 [3];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 != 0) {
    func_0x000107c61428(param_5 + 0xa0,auStack_70,0x21,0);
    FUN_10135a1a4(param_6,param_7);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(param_5);
    func_0x000107c615e8(param_6);
  }
  auStack_70[0] = param_2;
  func_0x0001007d6d78(auStack_70);
  return;
}



/* Entry: 1013598d0; end: 101359987;  */

undefined ** FUN_1013598d0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_38;
  
  ppuVar3 = *(undefined ***)(unaff_x20 + 0x70);
  if ((ppuVar3 == (undefined **)0x0) || (lVar4 = *(long *)(unaff_x20 + 0x78), lVar4 == 0)) {
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar2 = &puStack_38;
    puStack_38 = puVar1;
    func_0x000100854cb0(ppuVar2);
    func_0x000107c61170(puVar1);
  }
  else {
    func_0x000107c615f0(ppuVar3);
    func_0x000107c615f0(lVar4);
    ppuVar2 = ppuVar3;
    FUN_101371580(ppuVar3,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c615e8(ppuVar3);
  }
  return ppuVar2;
}



/* Entry: 101359988; end: 1013599bf;  */

void FUN_101359988(byte *param_1,byte *param_2)

{
  *param_1 = *param_2 < 8 & (byte)(0x92 >> (ulong)(*param_2 & 0x1f));
  return;
}



/* Entry: 1013599c0; end: 101359b53;  */

bool FUN_1013599c0(void)

{
  code *pcVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *apuStack_78 [3];
  
  ppuVar4 = apuStack_78;
  func_0x000107c61428(unaff_x20 + 0xd0,ppuVar4,0,0);
  ppuVar9 = *(undefined ***)(unaff_x20 + 0xd0);
  ppuVar12 = (undefined **)((ulong)ppuVar9 & 0xffffffffffffff8);
  if ((ulong)ppuVar9 >> 0x3e == 0) {
    ppuVar10 = (undefined **)ppuVar12[2];
  }
  else {
    ppuVar10 = ppuVar12;
    if ((undefined **)0x7fffffffffffffff < ppuVar9) {
      ppuVar10 = ppuVar9;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(ppuVar9);
  ppuVar11 = (undefined **)0x0;
  do {
    bVar2 = ppuVar10 == ppuVar11;
    if (bVar2) break;
    if (((ulong)ppuVar9 & 0xc000000000000001) == 0) {
      if (ppuVar12[2] <= ppuVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101359b40);
        (*pcVar1)();
      }
      ppuVar3 = (undefined **)ppuVar9[(long)ppuVar11 + 4];
      func_0x000107c61174();
      ppuVar8 = ppuVar4;
    }
    else {
      ppuVar3 = ppuVar11;
      ppuVar8 = ppuVar9;
      func_0x00010136f448();
    }
    if (SCARRY8((long)ppuVar11,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101359b3c);
      (*pcVar1)();
    }
    ppuVar4 = ppuVar3;
    func_0x000107c4e620();
    func_0x000107c61180();
    ppuVar5 = ppuVar4;
    func_0x000107c5faec();
    ppuVar7 = ppuVar8;
    func_0x000107c61170(ppuVar4);
    ppuVar6 = &PTR____CFConstantStringClassReference_110da03d8;
    func_0x000107c5faec();
    if ((ppuVar5 == ppuVar6) && (ppuVar8 == ppuVar7)) {
      func_0x000107c6142c(ppuVar9);
      func_0x000107c61170(ppuVar3);
      func_0x000107c6142c(ppuVar8);
      bVar2 = false;
      ppuVar9 = ppuVar7;
      break;
    }
    ppuVar4 = ppuVar8;
    func_0x000107c605b8(ppuVar5,ppuVar8,ppuVar6,ppuVar7,0);
    func_0x000107c61170(ppuVar3);
    func_0x000107c6142c(ppuVar8);
    func_0x000107c6142c(ppuVar7);
    ppuVar11 = (undefined **)((long)ppuVar11 + 1);
  } while (((ulong)ppuVar5 & 1) == 0);
  func_0x000107c6142c(ppuVar9);
  return bVar2;
}



/* Entry: 101359b54; end: 101359b9f;  */

void FUN_101359b54(undefined8 *param_1,byte *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2 - 3;
  if (uVar1 < 7) {
    uVar2 = *(undefined8 *)(&UNK_10d935988 + ((ulong)uVar1 & 0xff) * 8);
    uVar3 = (undefined1)(0x10100010100 >> (((ulong)uVar1 & 7) << 3));
  }
  else {
    uVar2 = 0;
    uVar3 = 1;
  }
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}



/* Entry: 101359ba0; end: 101359f8b;  */

undefined8 FUN_101359ba0(undefined **param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_58 [24];
  
  puVar6 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0xd0,puVar6,0,0);
  puVar9 = *(undefined1 **)(unaff_x20 + 0xd0);
  if (((ulong)puVar9 & 0xc000000000000001) == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101359f28);
      (*pcVar1)();
    }
    if (*(undefined ***)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101359f2c);
      (*pcVar1)();
    }
    ppuVar2 = *(undefined ***)(puVar9 + (long)param_1 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    func_0x000107c61434(puVar9);
    ppuVar2 = param_1;
    puVar6 = puVar9;
    func_0x00010136f448();
    func_0x000107c6142c(puVar9);
  }
  ppuVar3 = ppuVar2;
  func_0x000107c4e620();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  ppuVar4 = ppuVar3;
  func_0x000107c5faec();
  puVar9 = puVar6;
  func_0x000107c61170(ppuVar3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110da03b8;
  func_0x000107c5faec();
  if (ppuVar4 == ppuVar2 && puVar6 == puVar9) {
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(puVar9);
  }
  else {
    func_0x000107c605b8(ppuVar4,puVar6,ppuVar2,puVar9,0);
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(puVar9);
    if (((ulong)ppuVar4 & 1) == 0) goto LAB_101359d4c;
  }
  uVar11 = *(ulong *)(unaff_x20 + 0xd0);
  if ((uVar11 & 0xc000000000000001) == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101359f58);
      (*pcVar1)();
    }
    if (*(undefined ***)((uVar11 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101359f5c);
      (*pcVar1)();
    }
    ppuVar2 = *(undefined ***)(uVar11 + (long)param_1 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    func_0x000107c61434(uVar11);
    ppuVar2 = param_1;
    func_0x00010136f448(param_1,uVar11);
    func_0x000107c6142c(uVar11);
  }
  ppuVar3 = ppuVar2;
  func_0x000107c3ea18();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  if (ppuVar3 != (undefined **)0x0) {
    func_0x000107c615e8(ppuVar3);
    lVar10 = *(long *)(unaff_x20 + 0x70);
    if (lVar10 != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x88);
      func_0x000107c615f0(lVar10);
      func_0x000107c61174(uVar7);
      func_0x000107c61174(uVar5);
      uVar8 = uVar7;
      FUN_101371898(uVar7,lVar10,uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(uVar7);
      return uVar8;
    }
  }
LAB_101359d4c:
  uVar5 = 0x112d755f0;
  func_0x0001000285a8(0x112d755f0,&UNK_10d9358e8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  uVar11 = *(ulong *)(unaff_x20 + 0xd0);
  if ((uVar11 & 0xc000000000000001) == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101359f88);
      (*pcVar1)();
    }
    if (*(undefined ***)((uVar11 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101359f8c);
      (*pcVar1)();
    }
    param_1 = *(undefined ***)(uVar11 + (long)param_1 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    func_0x000107c61434(uVar11);
    func_0x00010136f448(param_1,uVar11);
    func_0x000107c6142c(uVar11);
  }
  ppuVar2 = param_1;
  func_0x000107c450f0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (ppuVar2 != (undefined **)0x0) {
    puVar6 = &stack0xffffffffffffff78;
    func_0x000107c60bc4(puVar6);
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(uVar5);
    uVar7 = 0;
    func_0x0001013588c8(0);
    func_0x000107c6157c();
    puVar9 = &stack0xffffffffffffff78;
    func_0x000107c5fb18(puVar9,uVar7);
    uVar8 = 0;
    func_0x0001048b0ec8(0);
    func_0x000107c610f8();
    func_0x0001048b0b48(puVar9,uVar7,0x2a,uVar8);
    uVar7 = 0;
    FUN_10135b6e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    ppuVar3 = ppuVar2;
    func_0x000107c43124(ppuVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar7);
    func_0x000107c60bd0(puVar6);
    func_0x000107c615e8(ppuVar3);
    func_0x000107c615e8(ppuVar2);
  }
  return uVar5;
}



/* Entry: 101359f8c; end: 101359fe7;  */

void FUN_101359f8c(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c45154(param_2,param_2,2);
    func_0x000107c61180();
  }
  lStack_28 = param_2;
  func_0x0001002a64a8(&lStack_28);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 101359fe8; end: 101359fff;  */

undefined * FUN_101359fe8(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  pcVar1 = FUN_101359988;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_101359988,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x000104884898(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar1);
  return puVar2;
}



/* Entry: 10135a000; end: 10135a0db;  */

undefined * FUN_10135a000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  puVar1 = PTR___sSbSQsWP_11034dd50;
  func_0x000104884898(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(param_3);
  return puVar1;
}



/* Entry: 10135a0dc; end: 10135a153;  */

/* WARNING: Possible PIC construction at 0x00010135a138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010135a13c) */

void FUN_10135a0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10135a154; end: 10135a1a3;  */

/* WARNING: Removing unreachable block (ram,0x00010136f838) */
/* WARNING: Removing unreachable block (ram,0x00010136f85c) */
/* WARNING: Removing unreachable block (ram,0x00010136f840) */
/* WARNING: Removing unreachable block (ram,0x00010136f948) */
/* WARNING: Removing unreachable block (ram,0x00010136f84c) */
/* WARNING: Removing unreachable block (ram,0x00010136f854) */
/* WARNING: Removing unreachable block (ram,0x00010136f8b8) */
/* WARNING: Removing unreachable block (ram,0x00010136f8cc) */
/* WARNING: Removing unreachable block (ram,0x00010136f8d8) */
/* WARNING: Removing unreachable block (ram,0x00010136f8e0) */

ulong FUN_10135a154(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_10136f62c(uVar4,uVar3,0x112d76068,&PTR_PTR_1126a6b58,0x112d76070,&UNK_10d9360e8);
  if (-1 < (long)uVar4) {
    func_0x00010136fa64(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10136f948);
  (*pcVar1)();
}



/* Entry: 10135a1a4; end: 10135a25f;  */

undefined8 FUN_10135a1a4(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10135a4c0();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x00010135acd8(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 10135a260; end: 10135a497;  */

void FUN_10135a260(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10135a338);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    FUN_10135a7a0(lVar4,param_4 & 1);
    uVar7 = param_3;
    func_0x000100029284();
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10135a300);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10135a4c0();
    lVar4 = *unaff_x20;
    goto joined_r0x00010135a34c;
  }
  lVar4 = *unaff_x20;
joined_r0x00010135a34c:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
    return;
  }
  func_0x000101372d7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10135a498; end: 10135a4bf;  */

void FUN_10135a498(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_70 [3];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + 0xa0,auStack_70,0x21,0);
    FUN_10135a1a4(uVar3,uVar1);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(uVar3);
  }
  auStack_70[0] = param_2;
  func_0x0001007d6d78(auStack_70);
  return;
}



/* Entry: 10135a4c0; end: 10135a79f;  */

void FUN_10135a4c0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112d755e0,&UNK_10d9358d8);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10135a59c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c615f0(uVar12);
        if (uVar8 != 0) break;
LAB_10135a59c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10135a630);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10135a608;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10135a608:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10135a7a0; end: 10135ae87;  */

void FUN_10135a7a0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112d755e0;
  func_0x0001000285a8(0x112d755e0,&UNK_10d9358d8);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10135aa08:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10135aa38);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10135aa08;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10135aa3c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10135ae88; end: 10135ae8f;  */

void FUN_10135ae88(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c45154(param_2,param_2,2);
    func_0x000107c61180();
  }
  lStack_28 = param_2;
  func_0x0001002a64a8(&lStack_28);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10135ae90; end: 10135b02f;  */

void FUN_10135ae90(undefined1 *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_2;
  lVar9 = param_2[1];
  bVar1 = *(byte *)(param_2 + 4);
  if (bVar1 < 4) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        func_0x000107c61434(lVar9);
        func_0x000107c61174(lVar8);
        lVar5 = 0;
        lVar7 = 0;
        lVar2 = 0;
        lVar6 = 0;
        uVar3 = 5;
        goto LAB_10135af70;
      }
      func_0x000107c61434(lVar9);
      uVar3 = 3;
      goto LAB_10135af40;
    }
    if (bVar1 == 0) {
      uVar3 = 0;
      lVar2 = 0;
      lVar5 = 0;
      lVar6 = 0;
      lVar7 = 0;
      lVar8 = 0;
      lVar9 = 0;
      goto LAB_10135af70;
    }
    func_0x000107c61434(lVar9);
    uVar3 = 2;
    lVar2 = lVar8;
    lVar5 = 0;
    lVar6 = lVar9;
    lVar7 = 0;
  }
  else {
    if (bVar1 < 6) {
      if (bVar1 != 4) {
        func_0x000107c61174(lVar8);
        lVar5 = 0;
        lVar7 = 0;
        lVar2 = 0;
        lVar6 = 0;
        lVar9 = 0;
        uVar3 = 10;
        goto LAB_10135af70;
      }
      func_0x000107c61434(lVar9);
      uVar3 = 6;
    }
    else {
      if (bVar1 != 6) {
        lVar5 = 0;
        lVar7 = 0;
        lVar2 = 0;
        lVar6 = 0;
        uVar4 = 4;
        if (((param_2[3] != 0 || lVar9 != 0) || param_2[2] != 0) || lVar8 != 1) {
          uVar4 = 0xc;
        }
        uVar3 = 1;
        if ((lVar8 != 0 || lVar9 != 0) || (param_2[3] != 0 || param_2[2] != 0)) {
          uVar3 = uVar4;
        }
        lVar8 = 0;
        lVar9 = 0;
        goto LAB_10135af70;
      }
      func_0x000107c61434(lVar9);
      uVar3 = 9;
    }
LAB_10135af40:
    lVar6 = 0;
    lVar2 = 0;
    lVar5 = lVar8;
    lVar7 = lVar9;
  }
  lVar8 = 0;
  lVar9 = 0;
LAB_10135af70:
  *param_1 = uVar3;
  *(long *)(param_1 + 8) = lVar5;
  *(long *)(param_1 + 0x10) = lVar7;
  *(long *)(param_1 + 0x18) = lVar2;
  *(long *)(param_1 + 0x20) = lVar6;
  *(long *)(param_1 + 0x28) = lVar8;
  *(long *)(param_1 + 0x30) = lVar9;
  return;
}



/* Entry: 10135b030; end: 10135b22f;  */

/* WARNING: Possible PIC construction at 0x00010135b0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135b120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135b130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135b1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135b1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135b1fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010135b1f0) */
/* WARNING: Removing unreachable block (ram,0x00010135b1b4) */
/* WARNING: Removing unreachable block (ram,0x00010135b134) */
/* WARNING: Removing unreachable block (ram,0x00010135b124) */
/* WARNING: Removing unreachable block (ram,0x00010135b0fc) */
/* WARNING: Removing unreachable block (ram,0x00010135b100) */
/* WARNING: Removing unreachable block (ram,0x00010135b108) */
/* WARNING: Removing unreachable block (ram,0x00010135b110) */
/* WARNING: Removing unreachable block (ram,0x00010135b11c) */
/* WARNING: Removing unreachable block (ram,0x00010135b200) */

void FUN_10135b030(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x000107c4fb0c();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10135b228);
    (*pcVar1)();
  }
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  uVar2 = param_1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  if (uVar2 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    func_0x000107c3fcb0();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170();
      func_0x000108ed089c();
      if ((param_1 & 1) == 0) {
        func_0x0001013564c8();
        func_0x000101371300();
      }
      else {
        func_0x0001013564c8();
        func_0x000101371300();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10135b230);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10135b22c);
  (*pcVar1)();
}



/* Entry: 10135b230; end: 10135b5b7;  */

/* WARNING: Possible PIC construction at 0x00010135b598: Changing call to branch */

void FUN_10135b230(long *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar4 = param_1[2];
  lVar1 = param_1[3];
  cVar2 = (char)param_1[4];
  if (cVar2 == '\x03') {
    iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x58);
    func_0x000107c49970();
    if (iVar3 == 0) {
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar5 = 0;
    if (lVar1 != 0) {
      func_0x000107c5fadc(uVar4,lVar1);
      uVar5 = uVar4;
    }
    func_0x000107c4b99c(uVar7);
    goto code_r0x000107c61170;
  }
  if (cVar2 == '\x04') {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
    func_0x0001013564c8();
    func_0x000101371300();
    func_0x000107c6142c(param_1);
    uVar4 = *(ulong *)(unaff_x20 + 0x58);
    func_0x000107c49970(uVar4);
    func_0x0001013562fc();
    uVar5 = uVar4;
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar4);
    func_0x0001013567f0();
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar4);
    func_0x000107c4bf84(uVar7);
    goto code_r0x000107c61170;
  }
  if (cVar2 != '\a') {
    return;
  }
  if ((lVar1 == 0 && uVar4 == 0) && (*param_1 == 0 && param_1[1] == 0)) {
    uVar6 = *(ulong *)(unaff_x20 + 0x58);
    uVar4 = uVar6;
    func_0x000107c4c06c();
    if (((uVar4 & 1) == 0) && (uVar4 = uVar6, func_0x000107c3e448(), (uVar4 & 1) == 0)) {
      uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
      func_0x0001013564c8();
      func_0x000101371300();
      func_0x000107c6142c(uVar4);
      func_0x000107c49970(uVar6);
      func_0x0001013562fc();
      uVar5 = uVar6;
      func_0x000107c5fc48();
      func_0x000107c6142c(uVar6);
      func_0x0001013567f0();
      func_0x000107c5fc48();
      func_0x000107c6142c(uVar6);
      goto LAB_10135b584;
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
    func_0x0001013564c8();
    func_0x000101371300();
    func_0x000107c6142c(uVar4);
    func_0x000107c49970(uVar6);
    func_0x0001013562fc();
    uVar5 = uVar6;
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar6);
    func_0x0001013567f0();
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar6);
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    if ((lVar1 != 0 || uVar4 != 0) || param_1[1] != 0) {
      return;
    }
    uVar6 = *(ulong *)(unaff_x20 + 0x58);
    uVar4 = uVar6;
    func_0x000107c4c06c();
    if (((uVar4 & 1) == 0) && (uVar4 = uVar6, func_0x000107c3e448(), (uVar4 & 1) == 0)) {
      uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
      func_0x0001013564c8();
      func_0x000101371300();
      func_0x000107c6142c(uVar4);
      func_0x000107c49970(uVar6);
      func_0x0001013562fc();
      uVar5 = uVar6;
      func_0x000107c5fc48();
      func_0x000107c6142c(uVar6);
      func_0x0001013567f0();
      func_0x000107c5fc48();
      func_0x000107c6142c(uVar6);
LAB_10135b584:
      func_0x000107c4bfa0(uVar7);
      goto code_r0x000107c61170;
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
    func_0x0001013564c8();
    func_0x000101371300();
    func_0x000107c6142c(uVar4);
    func_0x000107c49970(uVar6);
    func_0x0001013562fc();
    uVar5 = uVar6;
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar6);
    func_0x0001013567f0();
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c4bf7c(uVar7);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10135b5b8; end: 10135b5c7;  */

void FUN_10135b5b8(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2;
    func_0x000107c61174(param_2);
    func_0x0001002a64a8(&lStack_28);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10135b5c8; end: 10135b64f;  */

void FUN_10135b5c8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar4);
  puVar2 = (undefined8 *)(unaff_x20 + uVar4 + 0x20);
  FUN_101370c60(unaff_x20 + uVar5,*puVar1,*(undefined1 *)(puVar1 + 1),
                *(undefined1 *)((long)puVar1 + 9),*(undefined1 *)((long)puVar1 + 10),
                *(undefined8 *)(unaff_x20 + uVar4 + 0x10),*(undefined8 *)(unaff_x20 + uVar4 + 0x18),
                *puVar2,puVar2[1]);
  return;
}



/* Entry: 10135b650; end: 10135b68f;  */

undefined8 FUN_10135b650(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10135b690; end: 10135b6a7;  */

void FUN_10135b690(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10135b6a8; end: 10135b6db;  */

void FUN_10135b6a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10136e2f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10135b6dc; end: 10135b6e3;  */

void FUN_10135b6dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10135b6e4; end: 10135b723;  */

void FUN_10135b6e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10135b724; end: 10135b88b;  */

int FUN_10135b724(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc) {
      iVar2 = 4;
    }
    if (param_2 + 0xc >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10135b7a0;
        goto LAB_10135b784;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10135b784:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_10135b7a0:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10135b88c; end: 10135b8cb;  */

void FUN_10135b88c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d75620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d935958;
  func_0x000107c61520(&UNK_10d935958,&UNK_1103a6878);
  puRam0000000112d75620 = puVar1;
  return;
}



/* Entry: 10135b8cc; end: 10135b903;  */

void FUN_10135b8cc(long param_1,long param_2)

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



/* Entry: 10135b904; end: 10135b9cb;  */

undefined * FUN_10135b904(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c4179c(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c54adc(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c56ba8(puVar1,param_2,0);
  func_0x000107c55f80(puVar1,param_2,0);
  func_0x000107c59c74(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 10135b9cc; end: 10135bc3f;  */

undefined * FUN_10135b9cc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x000107c453e4();
  func_0x000107c58cd8();
  FUN_10136d7a0(0);
  func_0x000107c614e8();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef38850);
  func_0x000107c4fbd4(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c58f5c(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c58f54(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4024000000000000);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 10135bc40; end: 10135bc53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10135bc40(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d75698;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d75698);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10135bc54();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10135bc54; end: 10135bdeb;  */

undefined * FUN_10135bc54(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000108ed05d8();
  func_0x000107c61180();
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c30a38(0xd5,0x6a);
  func_0x000107c59e34(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c30a34(0x6a);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_1103a6a10;
  func_0x000107c613fc(&UNK_1103a6a10,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_40 = 0x10135f3dc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103a6a28;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c5b09c(puVar1);
  func_0x000107c5a050(puVar1);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 10135bdec; end: 10135bdff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10135bdec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d756a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d756a0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    (*(code *)0x10135be60)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10135be00; end: 10135bff7;  */

long FUN_10135be00(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 10135bff8; end: 10135c073; -[_TtC15SCOAuth2Feature34OAuth2ApprovalScreenViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135bff8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_10135f0ec();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  lVar2 = _DAT_112d75688;
  func_0x000107c53fcc(*(undefined8 *)(param_1 + _DAT_112d75688));
  func_0x000107c53e08(*(undefined8 *)(param_1 + lVar2));
  FUN_10135c074();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10135c074; end: 10135c31b;  */

/* WARNING: Possible PIC construction at 0x00010135c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135c0e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135c114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135c144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135c178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135c1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135c1e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135c218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135c268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135c298: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010135c21c) */
/* WARNING: Removing unreachable block (ram,0x00010135c228) */
/* WARNING: Removing unreachable block (ram,0x00010135c22c) */
/* WARNING: Removing unreachable block (ram,0x00010135c26c) */
/* WARNING: Removing unreachable block (ram,0x00010135c314) */
/* WARNING: Removing unreachable block (ram,0x00010135c280) */
/* WARNING: Removing unreachable block (ram,0x00010135c230) */
/* WARNING: Removing unreachable block (ram,0x00010135c318) */
/* WARNING: Removing unreachable block (ram,0x00010135c244) */
/* WARNING: Removing unreachable block (ram,0x00010135c1e8) */
/* WARNING: Removing unreachable block (ram,0x00010135c1b4) */
/* WARNING: Removing unreachable block (ram,0x00010135c310) */
/* WARNING: Removing unreachable block (ram,0x00010135c1c8) */
/* WARNING: Removing unreachable block (ram,0x00010135c17c) */
/* WARNING: Removing unreachable block (ram,0x00010135c30c) */
/* WARNING: Removing unreachable block (ram,0x00010135c198) */
/* WARNING: Removing unreachable block (ram,0x00010135c148) */
/* WARNING: Removing unreachable block (ram,0x00010135c308) */
/* WARNING: Removing unreachable block (ram,0x00010135c15c) */
/* WARNING: Removing unreachable block (ram,0x00010135c118) */
/* WARNING: Removing unreachable block (ram,0x00010135c304) */
/* WARNING: Removing unreachable block (ram,0x00010135c12c) */
/* WARNING: Removing unreachable block (ram,0x00010135c0e8) */
/* WARNING: Removing unreachable block (ram,0x00010135c300) */
/* WARNING: Removing unreachable block (ram,0x00010135c0fc) */
/* WARNING: Removing unreachable block (ram,0x00010135c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010135c2fc) */
/* WARNING: Removing unreachable block (ram,0x00010135c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010135c29c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135c074(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10135c2fc);
  (*pcVar1)();
}



/* Entry: 10135c31c; end: 10135d34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135c31c(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  long *plVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_e0 [24];
  long alStack_c8 [3];
  long lStack_b0;
  long alStack_a0 [3];
  undefined8 uStack_88;
  
  lVar3 = _DAT_112d75628;
  func_0x000107c61428(unaff_x20 + _DAT_112d75628,auStack_e0,0,0);
  func_0x00010135f1c8(unaff_x20 + lVar3,alStack_c8);
  if (lStack_b0 == 0) {
    func_0x00010135f218(alStack_c8);
    return;
  }
  func_0x00010135f2ec(alStack_c8,alStack_a0);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d75670);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61174(uVar18);
    plVar13 = (long *)0x0;
  }
  else {
    uVar4 = 0;
    alStack_c8[0] = lVar3;
    FUN_10135f350(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61174(uVar18);
    plVar13 = alStack_c8;
    func_0x000107c605b0(plVar13,uVar4);
    func_0x000107c61170(alStack_c8[0]);
  }
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar14 = puVar5;
  func_0x000107c402b4(0x3ff0000000000000,0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar18);
  func_0x000107c615e8(plVar13);
  lVar3 = _DAT_112d75640;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d75640);
  *(undefined **)(unaff_x20 + _DAT_112d75640) = puVar14;
  func_0x000107c61170(uVar4);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d75688);
  uVar4 = uVar15;
  func_0x000107c44d9c();
  func_0x000107c61180();
  plVar13 = alStack_a0;
  func_0x0001000a8868(plVar13,uStack_88);
  lVar11 = *plVar13;
  uVar6 = *(ulong *)(lVar11 + 0x58);
  func_0x000107c49970();
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((uVar6 & 1) == 0) {
    func_0x000107c61428(lVar11 + 0xd0,alStack_c8,0,0);
    puVar14 = *(undefined **)(lVar11 + 0xd0);
    func_0x000107c61434(puVar14);
  }
  if ((ulong)puVar14 >> 0x3e == 0) {
    puVar16 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar16 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar14) {
      puVar16 = puVar14;
    }
    func_0x000107c60480(puVar16);
  }
  func_0x000107c6142c(puVar14);
  uVar7 = uVar4;
  func_0x000107c40290((double)(long)puVar16 * 56.0);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  lVar11 = _DAT_112d75648;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d75648);
  *(undefined8 *)(unaff_x20 + _DAT_112d75648) = uVar7;
  func_0x000107c61170(uVar4);
  FUN_10135bdec();
  lVar17 = *(long *)(unaff_x20 + _DAT_112d75690);
  puVar14 = puVar5;
  func_0x000107c402b4(0x3ff0000000000000,0xc02e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  lVar1 = _DAT_112d75650;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d75650);
  *(undefined **)(unaff_x20 + _DAT_112d75650) = puVar14;
  func_0x000107c61170(uVar4);
  plVar13 = alStack_a0;
  func_0x0001000a8868(plVar13,uStack_88);
  lVar12 = *plVar13;
  uVar6 = *(ulong *)(lVar12 + 0x58);
  func_0x000107c4c06c();
  if ((uVar6 & 1) == 0) {
    uVar6 = *(ulong *)(lVar12 + 0x58);
    func_0x000107c3e448();
    if ((uVar6 & 1) == 0) {
      puVar14 = puVar5;
      func_0x000107c402b4(0x3ff0000000000000,0xc02e000000000000);
      func_0x000107c61180();
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined **)(unaff_x20 + lVar1) = puVar14;
      func_0x000107c61170(uVar4);
      lVar12 = lVar17;
      func_0x000107c550d8();
      FUN_10135bc40();
      func_0x000107c550d8();
      func_0x000107c61170();
      goto LAB_10135c6b8;
    }
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d756a0);
  func_0x000107c61174(uVar7);
  uVar4 = uVar7;
  FUN_10135bc40();
  func_0x000107c61174(uVar7);
  puVar14 = puVar5;
  func_0x000107c402b4(0x3ff0000000000000,0xc02e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar14;
  func_0x000107c61170(uVar4);
  func_0x000107c550d8(lVar17);
  lVar12 = *(long *)(unaff_x20 + _DAT_112d75698);
  func_0x000107c550d8();
LAB_10135c6b8:
  func_0x0001008478a8();
  lVar8 = lVar12;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 0x35;
  *(undefined8 *)(lVar8 + 0x10) = 0x1a;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d75668);
  uVar4 = uVar7;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d314);
    (*pcVar2)();
  }
  lVar10 = lVar9;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar19 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar10);
  *(undefined8 *)(lVar8 + 0x20) = uVar19;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d318);
    (*pcVar2)();
  }
  lVar10 = lVar9;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar4 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar10);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(lVar8 + 0x28) = uVar4;
  *(undefined8 *)(lVar8 + 0x30) = uVar7;
  func_0x000107c61174();
  uVar4 = uVar18;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar7 = uVar4;
  func_0x000107c40290(0x4050000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar8 + 0x38) = uVar7;
  uVar4 = uVar18;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar7 = uVar4;
  func_0x000107c40290(0x4050000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar8 + 0x40) = uVar7;
  uVar4 = uVar18;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d31c);
    (*pcVar2)();
  }
  lVar9 = lVar3;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar7 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar9);
  *(undefined8 *)(lVar8 + 0x48) = uVar7;
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d75678);
  uVar4 = uVar19;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c3ec1c(uVar18);
  func_0x000107c61180();
  uVar7 = uVar4;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar18);
  *(undefined8 *)(lVar8 + 0x50) = uVar7;
  uVar18 = uVar19;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d320);
    (*pcVar2)();
  }
  lVar9 = lVar3;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar4 = uVar18;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar18);
  func_0x000107c61170(lVar9);
  *(undefined8 *)(lVar8 + 0x58) = uVar4;
  uVar18 = uVar19;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d324);
    (*pcVar2)();
  }
  lVar9 = lVar3;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar4 = uVar18;
  func_0x000107c40284(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar18);
  func_0x000107c61170(lVar9);
  *(undefined8 *)(lVar8 + 0x60) = uVar4;
  uVar18 = uVar19;
  func_0x000107c50890();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d328);
    (*pcVar2)();
  }
  lVar9 = lVar3;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar4 = uVar18;
  func_0x000107c40284(0xc038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar18);
  func_0x000107c61170(lVar9);
  *(undefined8 *)(lVar8 + 0x68) = uVar4;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d75680);
  uVar18 = uVar7;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c3ec1c(uVar19);
  func_0x000107c61180();
  uVar4 = uVar18;
  func_0x000107c40284(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  *(undefined8 *)(lVar8 + 0x70) = uVar4;
  uVar18 = uVar7;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d32c);
    (*pcVar2)();
  }
  lVar9 = lVar3;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar4 = uVar18;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar18);
  func_0x000107c61170(lVar9);
  *(undefined8 *)(lVar8 + 0x78) = uVar4;
  uVar18 = uVar7;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar9 = lVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    uVar4 = uVar18;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(lVar9);
    *(undefined8 *)(lVar8 + 0x80) = uVar4;
    uVar18 = uVar7;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d334);
      (*pcVar2)();
    }
    lVar9 = lVar3;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    uVar4 = uVar18;
    func_0x000107c40284(0xc038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(lVar9);
    *(undefined8 *)(lVar8 + 0x88) = uVar4;
    uVar18 = uVar15;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c3ec1c(uVar7);
    func_0x000107c61180();
    uVar4 = uVar18;
    func_0x000107c40284(0x4028000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar7);
    *(undefined8 *)(lVar8 + 0x90) = uVar4;
    uVar18 = uVar15;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d338);
      (*pcVar2)();
    }
    lVar9 = lVar3;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    uVar4 = uVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(lVar9);
    uVar18 = *(undefined8 *)(unaff_x20 + lVar11);
    *(undefined8 *)(lVar8 + 0x98) = uVar4;
    *(undefined8 *)(lVar8 + 0xa0) = uVar18;
    func_0x000107c61174();
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar18 = uVar15;
    func_0x000107c40290(0x4072000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    *(undefined8 *)(lVar8 + 0xa8) = uVar18;
    lVar3 = lVar17;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar11 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d33c);
      (*pcVar2)();
    }
    lVar9 = lVar11;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    puVar14 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c517cc();
    dVar20 = -15.0 - param_3;
    dVar21 = dVar20 + -30.0;
    func_0x000107c517cc(puVar14);
    lVar11 = lVar3;
    func_0x000107c40284((dVar21 - dVar20) + -24.0 + -8.0 + -20.0);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar9);
    *(long *)(lVar8 + 0xb0) = lVar11;
    lVar3 = lVar17;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar11 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar11 != 0) {
      lVar9 = lVar11;
      func_0x000107c3f75c();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      lVar11 = lVar3;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar9);
      *(long *)(lVar8 + 0xb8) = lVar11;
      func_0x000107c5e308();
      func_0x000107c61180();
      lVar3 = lVar17;
      func_0x000107c40290(0x406bc00000000000);
      func_0x000107c61180();
      func_0x000107c61170();
      *(long *)(lVar8 + 0xc0) = lVar3;
      FUN_10135bc40();
      lVar3 = lVar17;
      func_0x000107c3f75c();
      func_0x000107c61180();
      func_0x000107c61170(lVar17);
      lVar11 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d344);
        (*pcVar2)();
      }
      lVar17 = lVar11;
      func_0x000107c3f75c();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      lVar11 = lVar3;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar17);
      *(long *)(lVar8 + 200) = lVar11;
      lVar3 = _DAT_112d75698;
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d75698);
      func_0x000107c5e308();
      func_0x000107c61180();
      uVar18 = uVar4;
      func_0x000107c40290(0x406bc00000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      *(undefined8 *)(lVar8 + 0xd0) = uVar18;
      uVar18 = *(undefined8 *)(unaff_x20 + lVar3);
      func_0x000107c3ec1c();
      func_0x000107c61180();
      lVar3 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar11 = lVar3;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c517cc(puVar14);
        param_3 = -15.0 - param_3;
        dVar20 = param_3 + -30.0;
        func_0x000107c517cc(puVar14);
        uVar4 = uVar18;
        func_0x000107c40284((dVar20 - param_3) + -24.0 + -8.0 + -20.0);
        func_0x000107c61180();
        func_0x000107c61170(uVar18);
        func_0x000107c61170(lVar11);
        *(undefined8 *)(lVar8 + 0xd8) = uVar4;
        lVar3 = _DAT_112d756a0;
        uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d756a0);
        func_0x000107c3f75c();
        func_0x000107c61180();
        lVar11 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d34c);
          (*pcVar2)();
        }
        lVar17 = lVar11;
        func_0x000107c3f75c();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        uVar4 = uVar18;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(uVar18);
        func_0x000107c61170(lVar17);
        uVar15 = *(undefined8 *)(unaff_x20 + lVar1);
        *(undefined8 *)(lVar8 + 0xe0) = uVar4;
        *(undefined8 *)(lVar8 + 0xe8) = uVar15;
        uVar18 = 0;
        FUN_10135f350(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        func_0x000107c61174(uVar15);
        lVar11 = lVar8;
        func_0x000107c5fc48(lVar8,uVar18);
        func_0x000107c61574(lVar8);
        func_0x000107c3d048(puVar5);
        func_0x000107c61170(lVar11);
        func_0x000107c4c194(puVar14);
        func_0x000107c61180();
        func_0x000107c3ec60();
        func_0x000107c61170(puVar14);
        if (620.0 < param_4) {
          func_0x000107c613fc(lVar12,((ulong)*(uint *)(lVar12 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                              *(ushort *)(lVar12 + 0x34) | 7);
          *(undefined8 *)(lVar12 + 0x18) = 9;
          *(undefined8 *)(lVar12 + 0x10) = 4;
          uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d756a8);
          uVar4 = uVar19;
          func_0x000107c3ec1c();
          func_0x000107c61180();
          uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
          func_0x000107c5cbe4(uVar7);
          func_0x000107c61180();
          uVar15 = uVar4;
          func_0x000107c40284(0x4024000000000000);
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar7);
          *(undefined8 *)(lVar12 + 0x20) = uVar15;
          uVar4 = uVar19;
          func_0x000107c5e308();
          func_0x000107c61180();
          uVar15 = uVar4;
          func_0x000107c40290(0x4062c00000000000);
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          *(undefined8 *)(lVar12 + 0x28) = uVar15;
          uVar4 = uVar19;
          func_0x000107c44d9c();
          func_0x000107c61180();
          uVar15 = uVar4;
          func_0x000107c40290(0x405e000000000000);
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          *(undefined8 *)(lVar12 + 0x30) = uVar15;
          func_0x000107c3f75c();
          func_0x000107c61180();
          func_0x000107c5de64();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d350);
            (*pcVar2)();
          }
          lVar3 = unaff_x20;
          func_0x000107c3f75c();
          func_0x000107c61180();
          func_0x000107c61170(unaff_x20);
          uVar4 = uVar19;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c61170(lVar3);
          *(undefined8 *)(lVar12 + 0x38) = uVar4;
          lVar3 = lVar12;
          func_0x000107c5fc48(lVar12,uVar18);
          func_0x000107c61574(lVar12);
          func_0x000107c3d048(puVar5);
          func_0x000107c61170(lVar3);
        }
        func_0x0001000834e4(alStack_a0);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d348);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d340);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10135d330);
  (*pcVar2)();
}



/* Entry: 10135d350; end: 10135db03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135d350(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long lStack_a0;
  long alStack_90 [3];
  undefined8 uStack_78;
  
  lVar12 = _DAT_112d75628;
  func_0x000107c61428(unaff_x20 + _DAT_112d75628,auStack_d0,0,0);
  func_0x00010135f1c8(unaff_x20 + lVar12,auStack_b8);
  if (lStack_a0 == 0) {
    func_0x00010135f218(auStack_b8);
  }
  else {
    func_0x00010135f2ec(auStack_b8,alStack_90);
    lVar12 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10135dafc);
      (*pcVar1)();
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    puVar3 = puVar2;
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(lVar12);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puVar3);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d75678);
    plVar4 = alStack_90;
    uVar14 = uStack_78;
    func_0x0001000a8868(plVar4,uStack_78);
    FUN_101358fbc();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar14);
    func_0x000107c59c6c(uVar13);
    func_0x000107c61170(plVar4);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c61168();
    func_0x000107c4179c(0x4028000000000000);
    func_0x000107c61180();
    plVar4 = alStack_90;
    uVar14 = uStack_78;
    func_0x0001000a8868(plVar4,uStack_78);
    FUN_101359130();
    lVar12 = 0x112d48380;
    func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
    func_0x000107c61534();
    *(undefined8 *)(lVar12 + 0x18) = 6;
    *(undefined8 *)(lVar12 + 0x10) = 3;
    uVar13 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    *(undefined8 *)(lVar12 + 0x20) = uVar13;
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10135db00);
      (*pcVar1)();
    }
    uVar5 = 0;
    FUN_10135f350(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
    *(undefined **)(lVar12 + 0x28) = puVar3;
    uVar16 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    *(undefined8 *)(lVar12 + 0x40) = uVar5;
    *(undefined8 *)(lVar12 + 0x48) = uVar16;
    func_0x000107c61174(uVar13);
    func_0x000107c61174();
    func_0x000107c61174(uVar16);
    func_0x000107c5af88();
    func_0x000107c61180();
    uVar13 = 0;
    FUN_10135f350(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
    *(undefined **)(lVar12 + 0x50) = puVar2;
    uVar5 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
    *(undefined8 *)(lVar12 + 0x68) = uVar13;
    *(undefined8 *)(lVar12 + 0x70) = uVar5;
    *(undefined **)(lVar12 + 0x90) = PTR___s12CoreGraphics7CGFloatVN_1103513a8;
    *(undefined8 *)(lVar12 + 0x78) = 0x3ff8000000000000;
    func_0x000107c61174(uVar5);
    lVar6 = lVar12;
    func_0x000100ecbca8(lVar12);
    func_0x000107c61588(lVar12);
    uVar13 = 0x112d48398;
    func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
    func_0x000107c61408((undefined8 *)(lVar12 + 0x20),3,uVar13);
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x000107c5fadc(plVar4,uVar14);
    func_0x000107c6142c(uVar14);
    uVar13 = 0;
    FUN_100eca28c(0);
    uVar14 = uVar13;
    FUN_100ecbdec();
    lVar12 = lVar6;
    func_0x000107c5f9dc(lVar6,uVar13,PTR___sypN_11034f1a8 + 8,uVar14);
    func_0x000107c6142c(lVar6);
    func_0x000107c48af8(puVar2);
    func_0x000107c61170(plVar4);
    func_0x000107c61170(lVar12);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d75680);
    func_0x000107c529c4(uVar14);
    func_0x0001000a8868(alStack_90,uStack_78);
    FUN_1013599c0();
    func_0x000107c550d8(uVar14);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d75688);
    func_0x0001000a8868(alStack_90,uStack_78);
    FUN_1013599c0();
    func_0x000107c550d8(uVar14);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d75690);
    plVar4 = alStack_90;
    uVar14 = uStack_78;
    func_0x0001000a8868(plVar4,uStack_78);
    uVar15 = *(ulong *)(*plVar4 + 0x58);
    uVar7 = uVar15;
    func_0x000107c4c06c();
    if (((uVar7 & 1) == 0) && (func_0x000107c3e448(), uVar7 = uVar15, (int)uVar15 == 0)) {
      func_0x000108ed06c8();
      func_0x000107c61180();
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10135db04);
        (*pcVar1)();
      }
    }
    else {
      uVar15 = uVar7;
      func_0x000108ed05f0();
      func_0x000107c61180();
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10135d6e8);
        (*pcVar1)();
      }
    }
    uVar7 = uVar15;
    func_0x000107c5faec();
    func_0x000107c61170(uVar15);
    func_0x000107c5fadc(uVar7,uVar14);
    func_0x000107c6142c(uVar14);
    func_0x000107c59c6c(uVar13);
    func_0x000107c61170(uVar7);
    plVar4 = alStack_90;
    func_0x0001000a8868(plVar4,uStack_78);
    lVar12 = *plVar4;
    uVar7 = *(ulong *)(lVar12 + 0x58);
    func_0x000107c49970();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar7 & 1) == 0) {
      func_0x000107c61428(lVar12 + 0xd0,auStack_b8,0,0);
      puVar8 = *(undefined **)(lVar12 + 0xd0);
      func_0x000107c61434();
    }
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d75660);
    *(undefined **)(unaff_x20 + _DAT_112d75660) = puVar8;
    func_0x000107c6142c(uVar14);
    func_0x0001000a8868(alStack_90,uStack_78);
    plVar9 = (long *)0x0;
    func_0x0001013588c8();
    plVar4 = plVar9;
    FUN_101359fe8();
    puVar8 = &UNK_1103a6948;
    puVar10 = puVar8;
    func_0x000107c613fc(&UNK_1103a6948,0x18,7);
    func_0x000107c61614(puVar10 + 0x10);
    uVar14 = 0x10135f304;
    puVar11 = puVar10;
    (**(code **)(*plVar4 + 0x60))(0x10135f304);
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar10);
    uVar13 = uVar14;
    func_0x000107c614f0(uVar14);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d75638);
    (**(code **)(puVar11 + 0x10))(uVar5,uVar13,puVar11);
    func_0x000107c615e8(uVar14);
    plVar4 = alStack_90;
    func_0x0001000a8868(plVar4,uStack_78);
    FUN_1013591cc();
    puVar10 = puVar8;
    func_0x000107c613fc(&UNK_1103a6948,0x18,7);
    func_0x000107c61614(puVar10 + 0x10);
    uVar14 = 0x10135f30c;
    puVar11 = puVar10;
    (**(code **)(*plVar4 + 0x60))(0x10135f30c);
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar10);
    uVar13 = uVar14;
    func_0x000107c614f0(uVar14);
    (**(code **)(puVar11 + 0x10))(uVar5,uVar13,puVar11);
    func_0x000107c615e8(uVar14);
    func_0x0001000a8868(alStack_90,uStack_78);
    plVar4 = plVar9;
    (*(code *)(undefined *)0x101359ff4)(plVar9,&PTR_DAT_1103a6528);
    puVar10 = puVar8;
    func_0x000107c613fc(&UNK_1103a6948,0x18,7);
    func_0x000107c61614(puVar10 + 0x10);
    uVar14 = 0x10135f314;
    puVar11 = puVar10;
    (**(code **)(*plVar4 + 0x60))(0x10135f314);
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar10);
    uVar13 = uVar14;
    func_0x000107c614f0(uVar14);
    (**(code **)(puVar11 + 0x10))(uVar5,uVar13,puVar11);
    func_0x000107c615e8(uVar14);
    plVar4 = alStack_90;
    func_0x0001000a8868(plVar4,uStack_78);
    FUN_1013598d0();
    puVar10 = puVar8;
    func_0x000107c613fc(&UNK_1103a6948,0x18,7);
    func_0x000107c61614(puVar10 + 0x10);
    uVar14 = 0x10135f31c;
    puVar11 = puVar10;
    (**(code **)(*plVar4 + 0x60))(0x10135f31c);
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar10);
    uVar13 = uVar14;
    func_0x000107c614f0(uVar14);
    (**(code **)(puVar11 + 0x10))(uVar5,uVar13,puVar11);
    func_0x000107c615e8(uVar14);
    func_0x0001000a8868(alStack_90,uStack_78);
    (*(code *)(undefined *)0x10135a068)(plVar9,&PTR_DAT_1103a6528);
    func_0x000107c613fc(&UNK_1103a6948,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    uVar14 = 0x10135f324;
    puVar10 = puVar8;
    (**(code **)(*plVar9 + 0x60))(0x10135f324);
    func_0x000107c61574(plVar9);
    func_0x000107c61574(puVar8);
    uVar13 = uVar14;
    func_0x000107c614f0(uVar14);
    (**(code **)(puVar10 + 0x10))(uVar5,uVar13,puVar10);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(uVar14);
    func_0x0001000834e4(alStack_90);
  }
  return;
}



/* Entry: 10135db04; end: 10135dbcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135db04(char *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d75668);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c5ba54(uVar1);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d75668);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c5be00(uVar1);
  }
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10135dbd0; end: 10135de77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135dbd0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d75670);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c55258(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10135de78; end: 10135deff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135de78(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d75630);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_1);
    uStack_60 = 2;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 7;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 10135df00; end: 10135df57; -[_TtC15SCOAuth2Feature34OAuth2ApprovalScreenViewController didEnterBackgroundWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135df00(undefined8 param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_48 = 2;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 7;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10135df58; end: 10135dfab; -[_TtC15SCOAuth2Feature34OAuth2ApprovalScreenViewController otherButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135df58(undefined8 param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 7;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10135dfac; end: 10135e003; -[_TtC15SCOAuth2Feature34OAuth2ApprovalScreenViewController continueButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135dfac(undefined8 param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_48 = 1;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 7;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10135e004; end: 10135e087; -[_TtC15SCOAuth2Feature34OAuth2ApprovalScreenViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_10135e004(void)

{
  long lVar1;
  undefined8 in_x3;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),in_x3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return 0x404c000000000000;
}



/* Entry: 10135e088; end: 10135e0df; -[_TtC15SCOAuth2Feature34OAuth2ApprovalScreenViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_10135e088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_10135f424();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10135e0e0; end: 10135e737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10135e0e0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined1 *puVar14;
  undefined1 *puVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_e0 [8];
  undefined1 *puStack_d8;
  long lStack_d0;
  long alStack_c8 [3];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar4 = 0;
  func_0x000107c5eff8();
  lVar18 = *(long *)(lVar4 + -8);
  lVar17 = *(long *)(lVar18 + 0x40);
  lStack_d0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_d8 = auStack_e0 + -(lVar17 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &UNK_1103a6920;
  func_0x000107c613fc(&UNK_1103a6920,0x18,7);
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef38850);
  func_0x000107c417d8();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  if (param_1 != 0) {
    uVar6 = 0;
    FUN_10136d7a0(0);
    lVar4 = param_1;
    func_0x000107c61480(param_1,uVar6);
    if (lVar4 != 0) {
      *(long *)(puVar5 + 0x10) = lVar4;
      goto LAB_10135e21c;
    }
    func_0x000107c61170(param_1);
  }
  *(undefined8 *)(puVar5 + 0x10) = 0;
  uVar7 = 0;
  FUN_10136d7a0();
  func_0x000107c610f8();
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef38850);
  func_0x000107c48b1c();
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(puVar5 + 0x10);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  func_0x000107c61170(uVar6);
LAB_10135e21c:
  lVar4 = _DAT_112d75628;
  func_0x000107c61428(unaff_x20 + _DAT_112d75628,auStack_a0,0,0);
  func_0x00010135f1c8(unaff_x20 + lVar4,auStack_88);
  if (lStack_70 == 0) {
    func_0x00010135f218(auStack_88);
  }
  else {
    func_0x00010135f2a0(auStack_88,alStack_c8);
    func_0x00010135f218(auStack_88);
    plVar8 = alStack_c8;
    func_0x0001000a8868(plVar8,uStack_b0);
    func_0x000107c5efe4();
    FUN_101359ba0();
    pcVar16 = *(code **)(*plVar8 + 0x60);
    func_0x000107c6157c(puVar5);
    pcVar3 = FUN_10135f2e4;
    puVar9 = puVar5;
    (*pcVar16)(FUN_10135f2e4);
    func_0x000107c61574(plVar8);
    func_0x000107c61574(puVar5);
    func_0x0001000834e4(alStack_c8);
    pcVar16 = pcVar3;
    func_0x000107c614f0(pcVar3);
    (**(code **)(puVar9 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d75638),pcVar16,puVar9);
    func_0x000107c615e8(pcVar3);
  }
  puVar15 = auStack_88;
  func_0x000107c61428(puVar5 + 0x10,puVar15,0,0);
  lVar4 = *(long *)(puVar5 + 0x10);
  if (lVar4 != 0) {
    func_0x000107c45130();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c53840();
      func_0x000107c61170(lVar4);
    }
    lVar4 = *(long *)(puVar5 + 0x10);
    if (lVar4 != 0) {
      func_0x000107c40510();
      func_0x000107c61180();
      puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c52b50(lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar9);
      if (*(long *)(puVar5 + 0x10) != 0) {
        uVar10 = *(ulong *)(*(long *)(puVar5 + 0x10) + _DAT_112d75e98);
        func_0x000107c61174();
        uVar11 = uVar10;
        func_0x000107c5efe4();
        puVar14 = *(undefined1 **)(unaff_x20 + _DAT_112d75660);
        if (((ulong)puVar14 & 0xc000000000000001) == 0) {
          if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10135e6cc);
            (*pcVar3)();
          }
          if (*(ulong *)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10135e6d0);
            (*pcVar3)();
          }
          uVar11 = *(ulong *)(puVar14 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          func_0x000107c61434(puVar14);
          puVar15 = puVar14;
          func_0x00010136f448(uVar11,puVar14);
          func_0x000107c6142c(puVar14);
        }
        uVar12 = uVar11;
        func_0x000107c4e61c();
        func_0x000107c61180();
        func_0x000107c61170(uVar11);
        puVar14 = puVar15;
        if (uVar12 == 0) {
          uVar12 = 0;
          func_0x000107c5faec(0);
          puVar14 = puVar15;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar15);
        }
        func_0x000107c59c6c(uVar10);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar12);
        if (*(long *)(puVar5 + 0x10) != 0) {
          uVar10 = *(ulong *)(*(long *)(puVar5 + 0x10) + _DAT_112d75ea0);
          func_0x000107c61174();
          uVar11 = uVar10;
          func_0x000107c5efe4();
          puVar15 = *(undefined1 **)(unaff_x20 + _DAT_112d75660);
          if (((ulong)puVar15 & 0xc000000000000001) == 0) {
            if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10135e700);
              (*pcVar3)();
            }
            if (*(ulong *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10135e704);
              (*pcVar3)();
            }
            uVar11 = *(ulong *)(puVar15 + uVar11 * 8 + 0x20);
            func_0x000107c61174(uVar11);
          }
          else {
            func_0x000107c61434(puVar15);
            puVar14 = puVar15;
            func_0x00010136f448(uVar11,puVar15);
            func_0x000107c6142c(puVar15);
          }
          func_0x000107c4a5ec(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c550d8(uVar10);
          func_0x000107c61170(uVar10);
          if (*(long *)(puVar5 + 0x10) != 0) {
            func_0x000107c56c24(*(undefined8 *)(*(long *)(puVar5 + 0x10) + _DAT_112d75ea0));
            if (*(long *)(puVar5 + 0x10) != 0) {
              uVar10 = *(ulong *)(*(long *)(puVar5 + 0x10) + _DAT_112d75ea0);
              func_0x000107c61174();
              uVar11 = uVar10;
              func_0x000107c5efe4();
              puVar15 = *(undefined1 **)(unaff_x20 + _DAT_112d75660);
              if (((ulong)puVar15 & 0xc000000000000001) == 0) {
                if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10135e730);
                  (*pcVar3)();
                }
                if (*(ulong *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10135e734);
                  (*pcVar3)();
                }
                uVar11 = *(ulong *)(puVar15 + uVar11 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                func_0x000107c61434(puVar15);
                puVar14 = puVar15;
                func_0x00010136f448(uVar11,puVar15);
                func_0x000107c6142c(puVar15);
              }
              uVar12 = uVar11;
              func_0x000107c4e620();
              func_0x000107c61180();
              func_0x000107c61170(uVar11);
              if (uVar12 == 0) {
                uVar12 = 0;
                func_0x000107c5faec(0);
                func_0x000107c5fadc();
                func_0x000107c6142c(puVar14);
              }
              func_0x000107c520ec(uVar10);
              func_0x000107c61170(uVar10);
              func_0x000107c61170(uVar12);
              lVar4 = *(long *)(puVar5 + 0x10);
              if (lVar4 != 0) {
                puVar9 = &UNK_1103a6948;
                func_0x000107c613fc(&UNK_1103a6948,0x18,7);
                func_0x000107c61614(puVar9 + 0x10);
                lVar2 = lStack_d0;
                puVar15 = puStack_d8;
                (**(code **)(lVar18 + 0x10))(puStack_d8,param_2,lStack_d0);
                uVar11 = (ulong)*(byte *)(lVar18 + 0x50);
                uVar10 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
                puVar13 = &UNK_1103a6970;
                func_0x000107c613fc(&UNK_1103a6970,uVar10 + lVar17,uVar11 | 7);
                *(undefined **)(puVar13 + 0x10) = puVar9;
                (**(code **)(lVar18 + 0x20))(puVar13 + uVar10,puVar15,lVar2);
                puVar1 = (undefined8 *)(lVar4 + _DAT_112d75ea8);
                uVar6 = *puVar1;
                uVar7 = puVar1[1];
                *puVar1 = 0x10135f260;
                puVar1[1] = puVar13;
                func_0x000107c61174(lVar4);
                func_0x000107c6157c(puVar9);
                func_0x000101237350(uVar6,uVar7);
                func_0x000107c61574(puVar9);
                func_0x000107c61170(lVar4);
                lVar4 = *(long *)(puVar5 + 0x10);
                if (lVar4 != 0) {
                  func_0x000107c61174();
                  func_0x000107c61574(puVar5);
                  return lVar4;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10135e738);
  (*pcVar3)();
}



/* Entry: 10135e738; end: 10135e793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135e738(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x000107c55258(*(undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_112d75e90));
  }
  return;
}



/* Entry: 10135e794; end: 10135e827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135e794(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long alStack_70 [4];
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d75630);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170();
    func_0x000107c5efe4();
    alStack_70[1] = 0;
    alStack_70[2] = 0;
    alStack_70[3] = 0;
    uStack_50 = 0;
    alStack_70[0] = param_2;
    func_0x0001002a64a8(alStack_70);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 10135e828; end: 10135e8ef; -[_TtC15SCOAuth2Feature34OAuth2ApprovalScreenViewController tableView:cellForRowAtIndexPath:] */

void FUN_10135e828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_10135e0e0(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10135e8f0; end: 10135ec1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10135e8f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffa0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75628);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112d75630;
  uVar3 = 0x112d756e0;
  func_0x0001000285a8(0x112d756e0,&UNK_10d935a10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75638;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75640;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75648;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75650;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d75658) = 0;
  *(undefined **)(unaff_x20 + _DAT_112d75660) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = _DAT_112d75668;
  puVar4 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c55130();
  func_0x000107c5a050(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75670;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4026666666666666);
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar5);
  func_0x000107c53840(puVar4);
  func_0x000107c5a050(puVar4);
  puVar5 = puVar4;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75678;
  FUN_10135b904();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75680;
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56ba8();
  func_0x000107c55f80(puVar4);
  func_0x000107c59c74(puVar4);
  puVar5 = puVar4;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75688;
  FUN_10135b9cc();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75690;
  func_0x00010135bb08();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d75698) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d756a0) = 0;
  lVar2 = _DAT_112d756a8;
  puVar4 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c53840();
  func_0x000107c5a050(puVar4);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c();
  }
  FUN_10135f0ec();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithNibName_bundle__1125e9850,param_1,
                      param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar6;
}



/* Entry: 10135ec1c; end: 10135ec7b; -[_TtC15SCOAuth2Feature34OAuth2ApprovalScreenViewController initWithNibName:bundle:] */

void FUN_10135ec1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_10135e8f0(param_3,param_2,param_4);
  return;
}



/* Entry: 10135ec7c; end: 10135ef7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10135ec7c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffb0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75628);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112d75630;
  uVar3 = 0x112d756e0;
  func_0x0001000285a8(0x112d756e0,&UNK_10d935a10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75638;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75640;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75648;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75650;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d75658) = 0;
  *(undefined **)(unaff_x20 + _DAT_112d75660) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = _DAT_112d75668;
  puVar4 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c55130();
  func_0x000107c5a050(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75670;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4026666666666666);
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar5);
  func_0x000107c53840(puVar4);
  func_0x000107c5a050(puVar4);
  puVar5 = puVar4;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75678;
  FUN_10135b904();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75680;
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56ba8();
  func_0x000107c55f80(puVar4);
  func_0x000107c59c74(puVar4);
  puVar5 = puVar4;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75688;
  FUN_10135b9cc();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75690;
  func_0x00010135bb08();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d75698) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d756a0) = 0;
  lVar2 = _DAT_112d756a8;
  puVar4 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c53840();
  func_0x000107c5a050(puVar4);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  FUN_10135f0ec();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar6 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar6);
  }
  return puVar6;
}



/* Entry: 10135ef7c; end: 10135efa3; -[_TtC15SCOAuth2Feature34OAuth2ApprovalScreenViewController initWithCoder:] */

void FUN_10135ef7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10135ec7c();
  return;
}



/* Entry: 10135efa4; end: 10135efd3;  */

void FUN_10135efa4(void)

{
  FUN_10135f0ec();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10135efd4; end: 10135f0eb; -[_TtC15SCOAuth2Feature34OAuth2ApprovalScreenViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010135f020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135f040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135f060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135f080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135f0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135f0c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010135f0a4) */
/* WARNING: Removing unreachable block (ram,0x00010135f084) */
/* WARNING: Removing unreachable block (ram,0x00010135f064) */
/* WARNING: Removing unreachable block (ram,0x00010135f044) */
/* WARNING: Removing unreachable block (ram,0x00010135f024) */
/* WARNING: Removing unreachable block (ram,0x00010135f0c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135efd4(long param_1)

{
  func_0x00010135f218(param_1 + _DAT_112d75628);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d75630));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d75638));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d75640));
  return;
}



/* Entry: 10135f0ec; end: 10135f10b;  */

void FUN_10135f0ec(void)

{
  func_0x000107c61168(&PTR_PTR_1127caa50);
  return;
}



/* Entry: 10135f10c; end: 10135f11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135f10c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112d75630));
  return;
}



/* Entry: 10135f11c; end: 10135f177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135f11c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d75628;
  func_0x000107c61428(unaff_x20 + _DAT_112d75628,auStack_48,0x21,0);
  FUN_10135f178(param_1,unaff_x20 + lVar1);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 10135f178; end: 10135f2e3;  */

undefined8 FUN_10135f178(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d756d8;
  func_0x0001000285a8(0x112d756d8,&UNK_10d935a90);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10135f2e4; end: 10135f34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135f2e4(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c55258(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d75e90));
  }
  return;
}



/* Entry: 10135f350; end: 10135f423;  */

void FUN_10135f350(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10135f424; end: 10135f543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135f424(void)

{
  ulong uVar1;
  long extraout_x8;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long lStack_50;
  
  lVar3 = _DAT_112d75628;
  func_0x000107c61428(unaff_x20 + _DAT_112d75628,auStack_80,0,0);
  func_0x00010135f1c8(unaff_x20 + lVar3,auStack_68);
  if (lStack_50 == 0) {
    func_0x00010135f218(auStack_68);
  }
  else {
    func_0x0001000a8868(auStack_68,lStack_50);
    lVar3 = *(long *)(lStack_50 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    (**(code **)(lVar3 + 0x10))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    uVar2 = 0;
    func_0x00010135f218();
    FUN_1013599c0();
    (**(code **)(lVar3 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_50);
    if (((uVar2 & 1) != 0) && (uVar2 = *(ulong *)(unaff_x20 + _DAT_112d75660), uVar2 >> 0x3e != 0))
    {
      uVar1 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar1 = uVar2;
      }
      func_0x000107c60480(uVar1);
    }
  }
  return;
}



/* Entry: 10135f544; end: 10135f553;  */

void FUN_10135f544(long param_1,long param_2)

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



/* Entry: 10135f554; end: 10135f623;  */

undefined * FUN_10135f554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  func_0x000107c61174(puVar1);
  func_0x000107c56ba8();
  func_0x000107c55f80(puVar1,param_2,0);
  func_0x000107c59c74(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5a050(puVar1,param_2,0);
  func_0x000108ed0728();
  func_0x000107c61180();
  func_0x000107c59c6c(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 10135f624; end: 10135f737;  */

undefined * FUN_10135f624(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x000107c469d8(0,0,0,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c3fa94(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c58f5c(puVar1,param_2,0);
  func_0x000107c58cd8(puVar1,param_2,0);
  func_0x000107c5a050(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  func_0x000107c57f34(*(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8,puVar1);
  func_0x000107c54680(0x4049000000000000,puVar1);
  func_0x000107c5381c(0x447a0000,puVar1,param_2,1);
  func_0x000107c537fc(0x447a0000,puVar1,param_2,1);
  func_0x000107c58d78(0,puVar1);
  return puVar1;
}



/* Entry: 10135f738; end: 10135f95b;  */

undefined * FUN_10135f738(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_PTR_1126b0ac8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c59c78(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar2);
  func_0x000107c5a100(puVar2);
  func_0x000107c59c7c(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar2);
  puVar3 = puVar2;
  func_0x000107c5c83c(puVar2);
  func_0x000107c61180();
  func_0x000107c55f8c(0);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c59c74();
  func_0x000108ed0740();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10135f954);
    (*pcVar1)();
  }
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar8 = 0x40;
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  lVar6 = lVar5;
  func_0x000108ed0770();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c5faec();
    uVar9 = uVar8;
    func_0x000107c61170();
    *(long *)(lVar5 + 0x20) = lVar7;
    *(undefined8 *)(lVar5 + 0x28) = uVar8;
    func_0x000108ed0758();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar7 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      *(long *)(lVar5 + 0x30) = lVar7;
      *(undefined8 *)(lVar5 + 0x38) = uVar9;
      lVar6 = lVar5;
      func_0x000107c5fc48(lVar5,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar5);
      func_0x000107c61538(lVar4,0x112d75808);
      func_0x000107c5fc48();
      func_0x000107c59c70(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar4);
      func_0x000107c54400(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c58cd8(puVar2);
      return puVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10135f95c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10135f958);
  (*pcVar1)();
}



/* Entry: 10135f95c; end: 10135f96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10135f95c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d75728;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d75728);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10135f970();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10135f970; end: 10135fbcb;  */

undefined * FUN_10135f970(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000108ed05c0();
  func_0x000107c61180();
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c59a2c(puVar1);
  puVar2 = &UNK_1103a6be8;
  func_0x000107c613fc(&UNK_1103a6be8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_40 = 0x101363f90;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103a6c00;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61174(puVar1);
  func_0x000107c5b09c();
  func_0x000107c5a050(puVar1);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 10135fbcc; end: 10135fbdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10135fbcc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d75738;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d75738);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    (*(code *)0x10135fc40)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10135fbe0; end: 10135fd7f;  */

long FUN_10135fbe0(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 10135fd80; end: 10135fddb; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController viewDidLoad] */

void FUN_10135fd80(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  FUN_101362700();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_10135fddc();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10135fddc; end: 1013600bb;  */

/* WARNING: Possible PIC construction at 0x00010135fe1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135fe4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135fe80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135feb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135fee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135ff20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135ff54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135ff8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010135ffe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101360030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010135ffec) */
/* WARNING: Removing unreachable block (ram,0x00010135ff90) */
/* WARNING: Removing unreachable block (ram,0x00010135ff58) */
/* WARNING: Removing unreachable block (ram,0x0001013600b8) */
/* WARNING: Removing unreachable block (ram,0x00010135ff74) */
/* WARNING: Removing unreachable block (ram,0x00010135ff24) */
/* WARNING: Removing unreachable block (ram,0x0001013600b4) */
/* WARNING: Removing unreachable block (ram,0x00010135ff38) */
/* WARNING: Removing unreachable block (ram,0x00010135feec) */
/* WARNING: Removing unreachable block (ram,0x0001013600b0) */
/* WARNING: Removing unreachable block (ram,0x00010135ff08) */
/* WARNING: Removing unreachable block (ram,0x00010135feb8) */
/* WARNING: Removing unreachable block (ram,0x0001013600ac) */
/* WARNING: Removing unreachable block (ram,0x00010135fecc) */
/* WARNING: Removing unreachable block (ram,0x00010135fe84) */
/* WARNING: Removing unreachable block (ram,0x0001013600a8) */
/* WARNING: Removing unreachable block (ram,0x00010135fe98) */
/* WARNING: Removing unreachable block (ram,0x00010135fe50) */
/* WARNING: Removing unreachable block (ram,0x0001013600a4) */
/* WARNING: Removing unreachable block (ram,0x00010135fe64) */
/* WARNING: Removing unreachable block (ram,0x00010135fe20) */
/* WARNING: Removing unreachable block (ram,0x0001013600a0) */
/* WARNING: Removing unreachable block (ram,0x00010135fe34) */
/* WARNING: Removing unreachable block (ram,0x000101360034) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10135fddc(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013600a0);
  (*pcVar1)();
}



/* Entry: 1013600bc; end: 101360f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013600bc(undefined8 param_1,undefined8 param_2,double param_3)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long lStack_98;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  lVar4 = _DAT_112d756e8;
  func_0x000107c61428(unaff_x20 + _DAT_112d756e8,auStack_c8,0,0);
  func_0x00010135f1c8(unaff_x20 + lVar4,auStack_b0);
  if (lStack_98 == 0) {
    func_0x00010135f218(auStack_b0);
  }
  else {
    func_0x00010135f2ec(auStack_b0,alStack_88);
    plVar2 = alStack_88;
    func_0x0001000a8868(plVar2,uStack_70);
    uVar3 = *(ulong *)(*plVar2 + 0x58);
    func_0x000107c4c06c();
    if ((uVar3 & 1) == 0) {
      func_0x000107c3e448();
    }
    lVar12 = *(long *)(unaff_x20 + _DAT_112d75730);
    lVar4 = lVar12;
    func_0x000107c550d8();
    FUN_10135fbcc();
    func_0x000107c550d8();
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 0x3b;
    *(undefined8 *)(lVar4 + 0x10) = 0x1d;
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d75700);
    uVar7 = uVar13;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360ee4);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar15 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x20) = uVar15;
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360ee8);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar7 = uVar13;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x28) = uVar7;
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d75708);
    uVar7 = uVar13;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360eec);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar15 = uVar7;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x30) = uVar15;
    uVar7 = uVar13;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar15 = uVar7;
    func_0x000107c40290(0x405a800000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    *(undefined8 *)(lVar4 + 0x38) = uVar15;
    uVar7 = uVar13;
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360ef0);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar15 = uVar7;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x40) = uVar15;
    uVar7 = uVar13;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360ef4);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar15 = uVar7;
    func_0x000107c40284(0xc038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x48) = uVar15;
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d75710);
    uVar7 = uVar14;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c3ec1c(uVar13);
    func_0x000107c61180();
    uVar15 = uVar7;
    func_0x000107c40284(0x4018000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar13);
    *(undefined8 *)(lVar4 + 0x50) = uVar15;
    uVar7 = uVar14;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360ef8);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar13 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x58) = uVar13;
    uVar7 = uVar14;
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360efc);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar13 = uVar7;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x60) = uVar13;
    uVar7 = uVar14;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f00);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar13 = uVar7;
    func_0x000107c40284(0xc038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x68) = uVar13;
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d75718);
    uVar7 = uVar15;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c3ec1c(uVar14);
    func_0x000107c61180();
    uVar13 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar14);
    *(undefined8 *)(lVar4 + 0x70) = uVar13;
    uVar7 = uVar15;
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f04);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar13 = uVar7;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x78) = uVar13;
    uVar7 = uVar15;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f08);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar13 = uVar7;
    func_0x000107c40284(0xc038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x80) = uVar13;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d75720);
    uVar7 = uVar14;
    func_0x000107c5cbe4(uVar14);
    func_0x000107c61180();
    uVar13 = uVar15;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar7);
    *(undefined8 *)(lVar4 + 0x88) = uVar13;
    uVar7 = uVar14;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar13 = uVar7;
    FUN_10135f95c();
    uVar15 = uVar13;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    uVar13 = uVar7;
    func_0x000107c40284(0xc024000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar15);
    *(undefined8 *)(lVar4 + 0x90) = uVar13;
    uVar7 = uVar14;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f0c);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar13 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x98) = uVar13;
    uVar7 = uVar14;
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f10);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar13 = uVar7;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0xa0) = uVar13;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f14);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar7 = uVar14;
    func_0x000107c40284(0xc038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0xa8) = uVar7;
    lVar5 = _DAT_112d75728;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d75728);
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f18);
      (*pcVar1)();
    }
    lVar8 = lVar6;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar13 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar8);
    *(undefined8 *)(lVar4 + 0xb0) = uVar13;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f1c);
      (*pcVar1)();
    }
    lVar8 = lVar6;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar13 = uVar7;
    func_0x000107c40284(0x4040800000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar8);
    *(undefined8 *)(lVar4 + 0xb8) = uVar13;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c50890();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f20);
      (*pcVar1)();
    }
    lVar8 = lVar6;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar13 = uVar7;
    func_0x000107c40284(0xc040800000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar8);
    *(undefined8 *)(lVar4 + 0xc0) = uVar13;
    uVar13 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar6 = lVar12;
    func_0x000107c5cbe4(lVar12);
    func_0x000107c61180();
    uVar7 = uVar13;
    func_0x000107c40284(0xc024000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 200) = uVar7;
    uVar15 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar7 = uVar15;
    FUN_10135fbcc();
    uVar13 = uVar7;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    uVar7 = uVar15;
    func_0x000107c40284(0xc024000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar13);
    *(undefined8 *)(lVar4 + 0xd0) = uVar7;
    lVar6 = lVar12;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar8 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f24);
      (*pcVar1)();
    }
    lVar9 = lVar8;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    lVar8 = lVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar9);
    *(long *)(lVar4 + 0xd8) = lVar8;
    lVar6 = lVar12;
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c5e308(uVar7);
    func_0x000107c61180();
    lVar8 = lVar6;
    func_0x000107c40284(0xc020000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar7);
    *(long *)(lVar4 + 0xe0) = lVar8;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f28);
      (*pcVar1)();
    }
    lVar8 = lVar6;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c517cc();
    lVar6 = lVar12;
    func_0x000107c40284((-30.0 - param_3) + -24.0 + -24.0 + -8.0 + -6.0);
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar8);
    *(long *)(lVar4 + 0xe8) = lVar6;
    lVar12 = _DAT_112d75738;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d75738);
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f2c);
      (*pcVar1)();
    }
    lVar8 = lVar6;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar13 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar8);
    *(undefined8 *)(lVar4 + 0xf0) = uVar13;
    uVar13 = *(undefined8 *)(unaff_x20 + lVar12);
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar15 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c5e308(uVar15);
    func_0x000107c61180();
    uVar7 = uVar13;
    func_0x000107c40284(0xc020000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar15);
    *(undefined8 *)(lVar4 + 0xf8) = uVar7;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar12);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101360f30);
      (*pcVar1)();
    }
    puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = unaff_x20;
    func_0x000107c3ec1c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    func_0x000107c517cc(puVar10);
    uVar13 = uVar7;
    func_0x000107c40284((-30.0 - param_3) + -24.0 + -24.0 + -8.0 + -6.0);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar4 + 0x100) = uVar13;
    uVar7 = 0;
    func_0x000100847984(0);
    lVar5 = lVar4;
    func_0x000107c5fc48(lVar4,uVar7);
    func_0x000107c61574(lVar4);
    func_0x000107c3d048(puVar11);
    func_0x000107c61170(lVar5);
    func_0x0001000834e4(alStack_88);
  }
  return;
}



/* Entry: 101360f30; end: 10136135f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101360f30(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long lStack_98;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  lVar2 = _DAT_112d756e8;
  func_0x000107c61428(unaff_x20 + _DAT_112d756e8,auStack_c8,0,0);
  func_0x00010135f1c8(unaff_x20 + lVar2,auStack_b0);
  if (lStack_98 == 0) {
    func_0x00010135f218(auStack_b0);
  }
  else {
    func_0x00010135f2ec(auStack_b0,alStack_88);
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136135c);
      (*pcVar1)();
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d75730);
    plVar8 = alStack_88;
    uVar7 = uStack_70;
    func_0x0001000a8868(plVar8,uStack_70);
    uVar11 = *(ulong *)(*plVar8 + 0x58);
    uVar4 = uVar11;
    func_0x000107c4c06c();
    if (((uVar4 & 1) == 0) && (func_0x000107c3e448(), uVar4 = uVar11, (int)uVar11 == 0)) {
      func_0x000108ed06c8();
      func_0x000107c61180();
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101361360);
        (*pcVar1)();
      }
    }
    else {
      uVar11 = uVar4;
      func_0x000108ed05f0();
      func_0x000107c61180();
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101361030);
        (*pcVar1)();
      }
    }
    uVar4 = uVar11;
    func_0x000107c5faec();
    func_0x000107c61170(uVar11);
    func_0x000107c5fadc(uVar4,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c59c6c(uVar10);
    func_0x000107c61170(uVar4);
    func_0x0001000a8868(alStack_88,uStack_70);
    plVar5 = (long *)0x0;
    func_0x0001013588c8();
    plVar8 = plVar5;
    FUN_101359fe8();
    puVar3 = &UNK_1103a6b48;
    puVar6 = puVar3;
    func_0x000107c613fc(&UNK_1103a6b48,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar7 = 0x101363f04;
    puVar9 = puVar6;
    (**(code **)(*plVar8 + 0x60))(0x101363f04);
    func_0x000107c61574(plVar8);
    func_0x000107c61574(puVar6);
    uVar10 = uVar7;
    func_0x000107c614f0(uVar7);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d756f8);
    (**(code **)(puVar9 + 0x10))(uVar12,uVar10,puVar9);
    func_0x000107c615e8(uVar7);
    func_0x0001000a8868(alStack_88,uStack_70);
    plVar8 = (long *)0xd000000000000051;
    FUN_1013593a0(0xd000000000000051,0x800000010ef389f0);
    puVar6 = puVar3;
    func_0x000107c613fc(&UNK_1103a6b48,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar7 = 0x101363f0c;
    puVar9 = puVar6;
    (**(code **)(*plVar8 + 0x60))(0x101363f0c);
    func_0x000107c61574(plVar8);
    func_0x000107c61574(puVar6);
    uVar10 = uVar7;
    func_0x000107c614f0(uVar7);
    (**(code **)(puVar9 + 0x10))(uVar12,uVar10,puVar9);
    func_0x000107c615e8(uVar7);
    func_0x0001000a8868(alStack_88,uStack_70);
    plVar8 = plVar5;
    (*(code *)(undefined *)0x101359ff4)(plVar5,&PTR_DAT_1103a6528);
    puVar6 = puVar3;
    func_0x000107c613fc(&UNK_1103a6b48,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar7 = 0x101363f14;
    puVar9 = puVar6;
    (**(code **)(*plVar8 + 0x60))(0x101363f14);
    func_0x000107c61574(plVar8);
    func_0x000107c61574(puVar6);
    uVar10 = uVar7;
    func_0x000107c614f0(uVar7);
    (**(code **)(puVar9 + 0x10))(uVar12,uVar10,puVar9);
    func_0x000107c615e8(uVar7);
    func_0x0001000a8868(alStack_88,uStack_70);
    (*(code *)(undefined *)0x10135a068)(plVar5,&PTR_DAT_1103a6528);
    func_0x000107c613fc(&UNK_1103a6b48,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar7 = 0x101363f1c;
    puVar6 = puVar3;
    (**(code **)(*plVar5 + 0x60))(0x101363f1c);
    func_0x000107c61574(plVar5);
    func_0x000107c61574(puVar3);
    uVar10 = uVar7;
    func_0x000107c614f0(uVar7);
    (**(code **)(puVar6 + 0x10))(uVar12,uVar10,puVar6);
    func_0x000107c615e8(uVar7);
    func_0x0001000834e4(alStack_88);
  }
  return;
}



/* Entry: 101361360; end: 10136142b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101361360(char *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d75700);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c5ba54(uVar1);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d75700);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c5be00(uVar1);
  }
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10136142c; end: 10136164b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136142c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d75708);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c55258(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10136164c; end: 1013616d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136164c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d756f0);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_1);
    uStack_60 = 2;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 7;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1013616d4; end: 10136172b; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController didEnterBackgroundWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013616d4(undefined8 param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_48 = 2;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 7;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10136172c; end: 10136177f; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController otherButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136172c(undefined8 param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 7;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101361780; end: 1013617d7; -[_TtC15SCOAuth2Feature40OAuth2SaturnApprovalScreenViewController continueButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101361780(undefined8 param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_48 = 1;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 7;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1013617d8; end: 101361a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1013617d8(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  lVar1 = _DAT_112d75740;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d75740);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = 0x112d757f8;
    func_0x0001000285a8(0x112d757f8,&UNK_10d935a98);
    uVar6 = 0x170;
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 0xc;
    *(undefined8 *)(lVar4 + 0x10) = 6;
    lVar3 = lVar4;
    func_0x000108ed0788();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101361a50);
      (*pcVar2)();
    }
    lVar5 = lVar3;
    func_0x000107c5faec();
    uVar7 = uVar6;
    func_0x000107c61170();
    *(long *)(lVar4 + 0x20) = lVar5;
    *(undefined8 *)(lVar4 + 0x28) = uVar6;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined1 *)(lVar4 + 0x50) = 0;
    func_0x000108ed07d0();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101361a54);
      (*pcVar2)();
    }
    lVar5 = lVar3;
    func_0x000107c5faec();
    uVar6 = uVar7;
    func_0x000107c61170();
    func_0x000108ed07b8();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lVar9 = 0;
      uVar10 = 0;
      uVar8 = uVar6;
    }
    else {
      lVar9 = lVar3;
      func_0x000107c5faec();
      uVar8 = uVar6;
      func_0x000107c61170();
      uVar10 = uVar6;
    }
    *(long *)(lVar4 + 0x58) = lVar5;
    *(undefined8 *)(lVar4 + 0x60) = uVar7;
    *(long *)(lVar4 + 0x68) = lVar9;
    *(undefined8 *)(lVar4 + 0x70) = uVar10;
    *(undefined8 *)(lVar4 + 0x78) = 0xd000000000000053;
    *(undefined8 *)(lVar4 + 0x80) = 0x800000010ef38870;
    *(undefined1 *)(lVar4 + 0x88) = 1;
    func_0x000108ed07a0();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101361a58);
      (*pcVar2)();
    }
    lVar5 = lVar3;
    func_0x000107c5faec();
    uVar6 = uVar8;
    func_0x000107c61170();
    *(long *)(lVar4 + 0x90) = lVar5;
    *(undefined8 *)(lVar4 + 0x98) = uVar8;
    *(undefined8 *)(lVar4 + 0xa8) = 0;
    *(undefined8 *)(lVar4 + 0xa0) = 0;
    *(undefined8 *)(lVar4 + 0xb8) = 0;
    *(undefined8 *)(lVar4 + 0xb0) = 0;
    *(undefined1 *)(lVar4 + 0xc0) = 0;
    func_0x000108ed07e8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101361a5c);
      (*pcVar2)();
    }
    lVar5 = lVar3;
    func_0x000107c5faec();
    uVar7 = uVar6;
    func_0x000107c61170();
    *(long *)(lVar4 + 200) = lVar5;
    *(undefined8 *)(lVar4 + 0xd0) = uVar6;
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    *(undefined8 *)(lVar4 + 0xe0) = 0;
    *(undefined8 *)(lVar4 + 0xe8) = 0xd000000000000053;
    *(undefined8 *)(lVar4 + 0xf0) = 0x800000010ef388d0;
    *(undefined1 *)(lVar4 + 0xf8) = 1;
    func_0x000108ed0800();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101361a60);
      (*pcVar2)();
    }
    lVar5 = lVar3;
    func_0x000107c5faec();
    uVar6 = uVar7;
    func_0x000107c61170();
    *(long *)(lVar4 + 0x100) = lVar5;
    *(undefined8 *)(lVar4 + 0x108) = uVar7;
    *(undefined8 *)(lVar4 + 0x110) = 0;
    *(undefined8 *)(lVar4 + 0x118) = 0;
    *(undefined8 *)(lVar4 + 0x120) = 0xd000000000000053;
    *(undefined8 *)(lVar4 + 0x128) = 0x800000010ef38930;
    *(undefined1 *)(lVar4 + 0x130) = 1;
    func_0x000108ed0818();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101361a64);
      (*pcVar2)();
    }
    lVar5 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    *(long *)(lVar4 + 0x138) = lVar5;
    *(undefined8 *)(lVar4 + 0x140) = uVar6;
    *(undefined8 *)(lVar4 + 0x148) = 0;
    *(undefined8 *)(lVar4 + 0x150) = 0;
    *(undefined8 *)(lVar4 + 0x158) = 0xd000000000000053;
    *(undefined8 *)(lVar4 + 0x160) = 0x800000010ef38990;
    *(undefined1 *)(lVar4 + 0x168) = 1;
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar4;
    func_0x000107c6157c(lVar4);
    func_0x000107c6142c(uVar6);
    lVar3 = 0;
  }
  func_0x000107c61434(lVar3);
  return lVar4;
}


