/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101309c20; end: 101309d2b;  */

/* WARNING: Possible PIC construction at 0x000101309cd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101309cd4) */
/* WARNING: Removing unreachable block (ram,0x000101309d14) */

void FUN_101309c20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    unaff_x20 = puVar1;
    func_0x000107c5ed90();
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    unaff_x21 = puVar1;
    func_0x000107c4ff50(puVar1,param_2,unaff_x20,(undefined1 *)((long)register0x00000008 + -0x40));
    func_0x000107c61170(puVar1);
    func_0x000107c61170(unaff_x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x40);
    if (((int)unaff_x21 == 0) ||
       (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)))
    break;
    func_0x000107c60e78();
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_101309d2c;
    func_0x000107c5ede0();
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(unaff_x19);
  return;
}



/* Entry: 101309d2c; end: 101309d57;  */

/* WARNING: Possible PIC construction at 0x000101309cd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101309cd4) */
/* WARNING: Removing unreachable block (ram,0x000101309d14) */

void FUN_101309d2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c5ede0();
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    unaff_x20 = puVar1;
    func_0x000107c5ed90();
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    unaff_x21 = puVar1;
    func_0x000107c4ff50(puVar1,param_2,unaff_x20,(undefined1 *)((long)register0x00000008 + -0x40));
    func_0x000107c61170(puVar1);
    func_0x000107c61170(unaff_x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x40);
    if (((int)unaff_x21 == 0) ||
       (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)))
    break;
    unaff_x30 = FUN_101309d2c;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(unaff_x19);
  return;
}



/* Entry: 101309d58; end: 101309d73;  */

void FUN_101309d58(long param_1,long param_2)

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



/* Entry: 101309d74; end: 101309ddf;  */

void FUN_101309d74(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_101310670();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(long *)(lVar1 + 0x20) = param_1;
  lVar2 = *param_4;
  *param_4 = lVar1;
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 101309de0; end: 101309e53;  */

void FUN_101309de0(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101309e54; end: 101309edf;  */

/* WARNING: Possible PIC construction at 0x000101309ec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101309ecc) */

void FUN_101309e54(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = 0;
  FUN_10130ca78(0,0x112d71a88,&PTR_PTR_1126b5180);
  func_0x000107c5fc54(param_2,uVar2);
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  (*pcVar1)(param_2,param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101309ee0; end: 10130a0d7;  */

void FUN_101309ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar8 = &puStack_90;
  puVar3 = &UNK_1103a0a80;
  func_0x000107c613fc(&UNK_1103a0a80,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  puVar4 = &UNK_1103a0aa8;
  func_0x000107c613fc(&UNK_1103a0aa8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10130c92c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x10130cec0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10130d598;
  puStack_78 = &UNK_1103a0ac0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1103a0af8;
  func_0x000107c613fc(&UNK_1103a0af8,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_4;
  puVar7 = &UNK_1103a0b20;
  func_0x000107c613fc(&UNK_1103a0b20,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x10130c944;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_70 = 0x10130cec4;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10130d598;
  puStack_78 = &UNK_1103a0b38;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c664(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x62,0x2ff,0x1e,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10130a0d4);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x62,0x301,0x16,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10130a0d8);
  (*pcVar2)();
}



/* Entry: 10130a0d8; end: 10130a24b;  */

/* WARNING: Possible PIC construction at 0x00010130a140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010130a144) */

void FUN_10130a0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_4[1];
  *param_4 = param_2;
  param_4[1] = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar3);
  puVar1 = PTR_PTR_1126b07f0;
  func_0x000107c61168(PTR_PTR_1126b07f0);
  puVar2 = puVar1;
  func_0x00010130a15c();
  func_0x000107c5dd4c(0x3fe2000000000000,puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10130a24c; end: 10130a467;  */

/* WARNING: Possible PIC construction at 0x00010130a37c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010130a390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010130a3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010130a418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010130a3f8) */
/* WARNING: Removing unreachable block (ram,0x00010130a394) */
/* WARNING: Removing unreachable block (ram,0x00010130a380) */
/* WARNING: Removing unreachable block (ram,0x00010130a41c) */

void FUN_10130a24c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar6 = param_4[1];
  *param_4 = param_2;
  param_4[1] = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar6);
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR_PTR_1126ae720;
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    func_0x000107c60480();
    puVar5 = PTR_PTR_1126ae720;
  }
  PTR_PTR_1126ae720 = puVar5;
  if ((long)uVar2 < 2) {
    if (uVar2 != 1) {
      return;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10130a468);
        (*pcVar1)();
      }
      puVar5 = *(undefined **)(param_1 + 0x20);
      func_0x000107c61174(puVar5);
    }
    else {
      puVar5 = (undefined *)0x0;
      FUN_101310b60(0,param_1);
    }
    func_0x000107c61168(PTR_PTR_1126b07f0);
    func_0x00010130a15c();
  }
  else {
    func_0x000107c61168(puVar5);
    puVar3 = &UNK_1103a16b0;
    func_0x000107c613fc(&UNK_1103a16b0,0x18,7);
    *(ulong *)(puVar3 + 0x10) = param_1;
    pcStack_50 = FUN_10130cc54;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x100f11710;
    puStack_58 = &UNK_1103a16c8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c3e4fc(puVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    puVar5 = PTR_PTR_1126b07e8;
    func_0x000107c610f8(PTR_PTR_1126b07e8);
    func_0x000107c494fc();
    func_0x000107c61168(PTR_PTR_1126b07f0);
    func_0x000107c43b78();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10130a468; end: 10130a8db;  */

undefined8 FUN_10130a468(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined1 auStack_140 [4];
  undefined4 uStack_13c;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  lVar5 = 0;
  func_0x000107c5f7fc();
  lStack_e0 = *(long *)(lVar5 + -8);
  lStack_d8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar5 = 0;
  puStack_e8 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_f8 = *(long *)(lVar5 + -8);
  lStack_f0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar13 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_100 = lVar13;
  func_0x000107c5f804();
  lStack_110 = *(long *)(lVar5 + -8);
  lStack_108 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  lStack_118 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_1 >> 0x3e == 0) {
    uVar15 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar15 = param_1;
    }
    func_0x000107c60480();
  }
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101310eac(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar8 = puStack_80;
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10130a8dc);
      (*pcVar4)();
    }
    uStack_130 = param_1 & 0xc000000000000001;
    uVar6 = 0;
    FUN_10130ca78(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    puVar3 = puStack_e8;
    lVar5 = lStack_100;
    uVar14 = 0;
    uStack_13c = *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0;
    uStack_138 = uVar6;
    uStack_128 = uVar15;
    uStack_120 = param_1;
    do {
      puStack_c0 = puVar8;
      if (uStack_130 == 0) {
        uVar15 = *(ulong *)(uStack_120 + uVar14 * 8 + 0x20);
        func_0x000107c61174(uVar15);
      }
      else {
        uVar15 = uVar14;
        FUN_101310b60(uVar14);
      }
      puVar7 = PTR_PTR_1126ae568;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar8 = PTR_PTR_1126b0648;
      func_0x000107c610f8();
      func_0x000107c46e04();
      puStack_c8 = puVar8;
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c539d4(0x4014000000000000);
      func_0x000107c61170(puVar8);
      lVar2 = lStack_108;
      lVar1 = lStack_110;
      lVar13 = lStack_118;
      (**(code **)(lStack_110 + 0x68))(lStack_118,uStack_13c,lStack_108);
      lVar9 = lVar13;
      func_0x000107c5fff0();
      lStack_d0 = lVar9;
      (**(code **)(lVar1 + 8))(lVar13,lVar2);
      puVar8 = &UNK_1103a11d8;
      func_0x000107c613fc(&UNK_1103a11d8,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,uVar15);
      puVar10 = &UNK_1103a1700;
      func_0x000107c613fc(&UNK_1103a1700,0x20,7);
      *(undefined **)(puVar10 + 0x10) = puVar8;
      *(undefined **)(puVar10 + 0x18) = puVar7;
      uStack_90 = 0x10130cc5c;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1000b0c7c;
      puStack_98 = &UNK_1103a1718;
      ppuVar11 = &puStack_b0;
      puStack_88 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c6157c(puVar8);
      func_0x000107c61174(puVar7);
      puVar10 = puVar7;
      func_0x000107c5f808(lVar5);
      puStack_b8 = puVar16;
      func_0x0001001c7eec();
      uVar6 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar12 = uVar6;
      func_0x0001001c7f30();
      lVar13 = lStack_d8;
      func_0x000107c60264(puVar3,&puStack_b8,uVar6,uVar12,lStack_d8,puVar10);
      lVar1 = lStack_d0;
      func_0x000107c5ffe8(0,lVar5,puVar3,ppuVar11);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(lVar1);
      (**(code **)(lStack_e0 + 8))(puVar3,lVar13);
      (**(code **)(lStack_f8 + 8))(lVar5,lStack_f0);
      puVar16 = puStack_88;
      func_0x000107c61170(uVar15);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar16);
      puStack_80 = puStack_c0;
      uVar15 = *(ulong *)(puStack_c0 + 0x10);
      if (*(ulong *)(puStack_c0 + 0x18) >> 1 <= uVar15) {
        FUN_101310eac(1 < *(ulong *)(puStack_c0 + 0x18),uVar15 + 1,1);
      }
      uVar14 = uVar14 + 1;
      *(ulong *)(puStack_80 + 0x10) = uVar15 + 1;
      *(undefined **)(puStack_80 + uVar15 * 8 + 0x20) = puStack_c8;
      puVar8 = puStack_80;
      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    } while (uStack_128 != uVar14);
  }
  uVar6 = 0;
  FUN_101304afc(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_101304690(puVar8);
  func_0x000107c6142c(puVar8);
  return uVar6;
}



/* Entry: 10130a8dc; end: 10130abc3;  */

undefined * FUN_10130a8dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 unaff_x20;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_c0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar14 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar17 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126b0648;
  func_0x000107c610f8(PTR_PTR_1126b0648);
  func_0x000107c46e04();
  puVar6 = puVar5;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4014000000000000);
  func_0x000107c61170(puVar6);
  FUN_10130ca78(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar15 + 0x68))
            (lVar17,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
  lVar7 = lVar17;
  func_0x000107c5fff0(lVar17);
  (**(code **)(lVar15 + 8))(lVar17,lVar3);
  puVar6 = &UNK_1103a11d8;
  func_0x000107c613fc(&UNK_1103a11d8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,unaff_x20);
  puVar8 = &UNK_1103a1890;
  func_0x000107c613fc(&UNK_1103a1890,0x20,7);
  *(undefined **)(puVar8 + 0x10) = puVar6;
  *(undefined **)(puVar8 + 0x18) = puVar4;
  uStack_70 = 0x10130cf20;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103a18a8;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c6157c(puVar6);
  func_0x000107c61174(puVar4);
  puVar8 = puVar4;
  func_0x000107c5f808(lVar16);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar10 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar11 = uVar10;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar14,&puStack_98,uVar10,uVar11,lVar1,puVar8);
  func_0x000107c5ffe8(0,lVar16,puVar14,ppuVar9);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar7);
  (**(code **)(lVar12 + 8))(puVar14,lVar1);
  (**(code **)(lVar13 + 8))(lVar16,lVar2);
  puVar8 = puStack_68;
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar8);
  return puVar5;
}



/* Entry: 10130abc4; end: 10130abfb;  */

void FUN_10130abc4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10130abfc; end: 10130ae17;  */

void FUN_10130abfc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_a0 [8];
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      (**(code **)(lVar11 + 0x10))(auStack_a0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),param_1,lVar1);
      uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
      uVar12 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
      uVar10 = lVar9 + uVar12 + 7 & 0xfffffffffffffff8;
      puVar4 = &UNK_1103a1660;
      puStack_98 = param_4;
      func_0x000107c613fc(&UNK_1103a1660,uVar10 + 0x10,uVar8 | 7);
      (**(code **)(lVar11 + 0x20))
                (puVar4 + uVar12,auStack_a0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),lVar1);
      *(undefined8 *)(puVar4 + uVar10) = param_3;
      *(long *)(puVar4 + uVar10 + 8) = lVar2;
      pcStack_70 = FUN_10130cc08;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      uStack_80 = 0x100f11710;
      puStack_78 = &UNK_1103a1678;
      ppuVar5 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_68;
      func_0x000107c61174(param_3);
      func_0x000107c615f0(lVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c3e4fc(puVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      puVar4 = PTR_PTR_1126b07e8;
      func_0x000107c610f8(PTR_PTR_1126b07e8);
      func_0x000107c494fc();
      puVar6 = PTR_PTR_1126b07f0;
      func_0x000107c61168();
      func_0x000107c43b78();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar2);
      uVar7 = *puStack_98;
      *puStack_98 = puVar6;
      func_0x000107c61170(uVar7);
    }
  }
  return;
}



/* Entry: 10130ae18; end: 10130aeeb;  */

undefined * FUN_10130ae18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_2;
  func_0x000107c5ed70();
  puVar1 = PTR_PTR_1126a6a48;
  func_0x000107c610f8(PTR_PTR_1126a6a48);
  func_0x000107c5fadc(param_1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c49140(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c5c734(param_2);
  func_0x000107c61180();
  func_0x000107c5a278(puVar1);
  func_0x000107c615e8(param_2);
  puVar2 = PTR_PTR_1126a6a50;
  func_0x000107c610f8(PTR_PTR_1126a6a50);
  func_0x000107c49520();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 10130aeec; end: 10130af43;  */

void FUN_10130aeec(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  *param_3 = param_1;
  param_3[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar2);
  puVar1 = PTR_PTR_1126b07f0;
  func_0x000107c61168();
  func_0x000107c5c880();
  func_0x000107c61180();
  uVar2 = *param_4;
  *param_4 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10130af44; end: 10130afef;  */

void FUN_10130af44(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  FUN_10130aff0();
  uVar2 = param_1;
  FUN_10130b2b4();
  uVar3 = 0;
  func_0x000103f5fab8(0);
  func_0x000107c610f8();
  func_0x000103f5f888(0,param_1,uVar2,uVar3);
  FUN_10130bf98();
  uVar4 = *param_4 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar4 + 0x10);
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    func_0x000101310694(uVar4,uVar1 + 1,1);
    *param_4 = uVar4;
    uVar4 = uVar4 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar4 + uVar1 * 8 + 0x20) = param_1;
  return;
}



/* Entry: 10130aff0; end: 10130b2b3;  */

undefined * FUN_10130aff0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar10 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_10130ca78(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar11 + 0x68))
            (lVar13,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
  lVar2 = lVar13;
  func_0x000107c5fff0(lVar13);
  (**(code **)(lVar11 + 8))(lVar13,lVar3);
  puVar5 = &UNK_1103a11d8;
  func_0x000107c613fc(&UNK_1103a11d8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1103a1200;
  func_0x000107c613fc(&UNK_1103a1200,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  uStack_70 = 0x10130cb68;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103a1218;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c6157c(puVar5);
  func_0x000107c61174(puVar4);
  puVar6 = puVar4;
  func_0x000107c5f808(lVar12);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = uVar8;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar10,&puStack_98,uVar8,uVar9,lVar1,puVar6);
  func_0x000107c5ffe8(0,lVar12,lVar10,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar2);
  (**(code **)(lStack_a0 + 8))(lVar10,lVar1);
  (**(code **)(lStack_b0 + 8))(lVar12,lStack_a8);
  puVar6 = puStack_68;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  puVar5 = puVar4;
  func_0x000107c43bf4(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 10130b2b4; end: 10130b4bf;  */

undefined8 FUN_10130b2b4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = 0;
  puVar4 = &UNK_1103a10e8;
  func_0x000107c613fc(&UNK_1103a10e8,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_78;
  puVar5 = &UNK_1103a1110;
  func_0x000107c613fc(&UNK_1103a1110,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x10130cb4c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x10130ced4;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10130d598;
  puStack_90 = &UNK_1103a1128;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_80;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_1103a1160;
  func_0x000107c613fc(&UNK_1103a1160,0x18,7);
  *(undefined8 **)(puVar7 + 0x10) = &uStack_78;
  puVar8 = &UNK_1103a1188;
  func_0x000107c613fc(&UNK_1103a1188,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x10130cb58;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  uStack_88 = 0x10130ced8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10130d598;
  puStack_90 = &UNK_1103a11a0;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c4c664();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_78;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x62,0x380,0x14,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10130b4bc);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x62,0x382,0x13,1);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10130b4c0);
  (*pcVar3)();
}



/* Entry: 10130b4c0; end: 10130b797;  */

void FUN_10130b4c0(ulong param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    uVar11 = uVar10;
    if (uVar10 < 2) {
LAB_10130b680:
      if (uVar11 != 1) {
        return;
      }
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10130b798);
          (*pcVar2)();
        }
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c61174();
        uVar5 = uVar8;
        FUN_10130aff0();
        func_0x000107c61170(uVar8);
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c61174(uVar8);
      }
      else {
        uVar8 = 0;
        FUN_101310b60(0,param_1);
        uVar5 = uVar8;
        FUN_10130aff0();
        func_0x000107c61170(uVar8);
        uVar8 = 0;
        FUN_101310b60(0,param_1);
      }
      uVar9 = uVar8;
      FUN_10130b2b4();
      func_0x000107c61170(uVar8);
      func_0x000103f5fab8(0);
      func_0x000107c610f8();
      func_0x000103f5f888(0,uVar5,uVar9);
      FUN_10130bf98();
      uVar11 = *param_4 & 0xffffffffffffff8;
      uVar10 = *(ulong *)(uVar11 + 0x10);
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar10) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
        func_0x000101310694(uVar11,uVar10 + 1,1);
        *param_4 = uVar11;
        uVar11 = uVar11 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar11 + 0x10) = uVar10 + 1;
      *(undefined8 *)(uVar11 + uVar10 * 8 + 0x20) = uVar5;
      return;
    }
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    uVar11 = uVar10;
    func_0x000107c60480();
    if ((long)uVar11 < 2) goto LAB_10130b680;
    func_0x000107c60480();
    if (uVar10 == 0) {
      return;
    }
  }
  uVar11 = 0;
  while( true ) {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10130b64c);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(param_1 + uVar11 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar11;
      FUN_101310b60(uVar11,param_1);
    }
    uVar1 = uVar11 + 1;
    if (SCARRY8(uVar11,1)) break;
    uVar4 = uVar3;
    FUN_10130aff0();
    uVar7 = uVar4;
    FUN_10130b2b4();
    uVar5 = 0;
    func_0x000103f5fab8(0);
    func_0x000107c610f8();
    func_0x000103f5f888(0,uVar4,uVar7,uVar5);
    uVar12 = *param_4;
    uVar7 = uVar12;
    func_0x000107c61550();
    *param_4 = uVar12;
    if ((((int)uVar7 == 0) || ((long)uVar12 < 0)) || (uVar7 = uVar12, (uVar12 >> 0x3e & 1) != 0)) {
      if (uVar12 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar12 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar12) {
          uVar6 = uVar12;
        }
        func_0x000107c60480(uVar6);
      }
      uVar7 = 0;
      func_0x000101310694(0,uVar6 + 1,1,uVar12);
      *param_4 = uVar7;
    }
    uVar6 = uVar7 & 0xffffffffffffff8;
    uVar12 = *(ulong *)(uVar6 + 0x10);
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar12) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x000101310694(uVar6,uVar12 + 1,1,uVar7);
      *param_4 = uVar6;
      uVar6 = uVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar6 + 0x10) = uVar12 + 1;
    *(ulong *)(uVar6 + uVar12 * 8 + 0x20) = uVar4;
    func_0x000107c61170(uVar3);
    uVar11 = uVar11 + 1;
    if (uVar1 == uVar10) {
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10130b648);
  (*pcVar2)();
}



/* Entry: 10130b798; end: 10130b7fb;  */

long FUN_10130b798(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_10130a8dc();
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 10130b7fc; end: 10130b9b3;  */

void FUN_10130b7fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar2 = &UNK_1103a1750;
    func_0x000107c613fc(&UNK_1103a1750,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    puVar3 = &UNK_1103a1778;
    func_0x000107c613fc(&UNK_1103a1778,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10130cc64;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x10130cee8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_10130d598;
    puStack_90 = &UNK_1103a1790;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1103a17c8;
    func_0x000107c613fc(&UNK_1103a17c8,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    puVar5 = &UNK_1103a17f0;
    func_0x000107c613fc(&UNK_1103a17f0,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_10130cc6c;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    uStack_88 = 0x10130ceec;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_10130d598;
    puStack_90 = &UNK_1103a1808;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_80;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar5);
    func_0x000107c4c664(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10130b9b4; end: 10130bacf;  */

/* WARNING: Possible PIC construction at 0x00010130ba18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010130ba1c) */
/* WARNING: Removing unreachable block (ram,0x00010130ba44) */
/* WARNING: Removing unreachable block (ram,0x00010130ba20) */

void FUN_10130b9b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c5edc4();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c46110(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10130bad0; end: 10130bc87;  */

void FUN_10130bad0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar2 = &UNK_1103a1250;
    func_0x000107c613fc(&UNK_1103a1250,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    puVar3 = &UNK_1103a1278;
    func_0x000107c613fc(&UNK_1103a1278,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10130cb70;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x10130cedc;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_10130d598;
    puStack_90 = &UNK_1103a1290;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1103a12c8;
    func_0x000107c613fc(&UNK_1103a12c8,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    puVar5 = &UNK_1103a12f0;
    func_0x000107c613fc(&UNK_1103a12f0,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_10130cb78;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    uStack_88 = 0x10130cee0;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_10130d598;
    puStack_90 = &UNK_1103a1308;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_80;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar5);
    func_0x000107c4c664(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10130bc88; end: 10130beb3;  */

/* WARNING: Possible PIC construction at 0x00010130bcec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010130bd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010130bd8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010130bd74) */
/* WARNING: Removing unreachable block (ram,0x00010130bcf0) */
/* WARNING: Removing unreachable block (ram,0x00010130bd04) */
/* WARNING: Removing unreachable block (ram,0x00010130bcf4) */
/* WARNING: Removing unreachable block (ram,0x00010130bd90) */
/* WARNING: Removing unreachable block (ram,0x00010130bd9c) */

void FUN_10130bc88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c5edc4();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c46110(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10130beb4; end: 10130bf97;  */

/* WARNING: Possible PIC construction at 0x00010130bf58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010130bf74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010130bf5c) */
/* WARNING: Removing unreachable block (ram,0x00010130bf78) */

void FUN_10130beb4(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_completeWithValue__1125ae900,param_1);
    return;
  }
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010d9325a0);
  func_0x000107c5fadc(0xd00000000000002e,0x800000010ef35c30);
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10130bf98; end: 10130c007;  */

void FUN_10130bf98(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    func_0x000101310694(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 10130c008; end: 10130c013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130c008(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_88,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((param_1 != 0) && (lVar12 = *(long *)(lVar2 + _DAT_112d71a30), lVar12 != 0)) {
      func_0x000107c61428(lVar3 + 0x10,auStack_a0,0,0);
      func_0x000107c61174();
      func_0x000107c61174();
      lVar3 = param_1;
      func_0x00010130c6d0();
      lVar4 = lVar12;
      func_0x000107c40414();
      func_0x000107c61180();
      puVar5 = &UNK_1103a0800;
      func_0x000107c613fc(&UNK_1103a0800,0x30,7);
      *(long *)(puVar5 + 0x10) = lVar2;
      *(long *)(puVar5 + 0x18) = param_1;
      *(long *)(puVar5 + 0x20) = lVar3;
      *(undefined8 *)(puVar5 + 0x28) = uVar11;
      puVar6 = &UNK_1103a0828;
      func_0x000107c613fc(&UNK_1103a0828,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_10130c810;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_b0 = (code *)0x10130c81c;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0x42000000;
      pcStack_c0 = FUN_10130d598;
      puStack_b8 = &UNK_1103a0840;
      ppuVar7 = &puStack_d0;
      puStack_a8 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_a8;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61574(puVar6);
      puVar6 = &UNK_1103a0878;
      func_0x000107c613fc(&UNK_1103a0878,0x30,7);
      *(long *)(puVar6 + 0x10) = lVar2;
      *(long *)(puVar6 + 0x18) = param_1;
      *(long *)(puVar6 + 0x20) = lVar3;
      *(undefined8 *)(puVar6 + 0x28) = uVar11;
      puVar8 = &UNK_1103a08a0;
      func_0x000107c613fc(&UNK_1103a08a0,0x20,7);
      *(code **)(puVar8 + 0x10) = FUN_10130c860;
      *(undefined **)(puVar8 + 0x18) = puVar6;
      pcStack_b0 = FUN_10130c86c;
      puStack_d0 = puVar1;
      uStack_c8 = 0x42000000;
      pcStack_c0 = FUN_100de6bdc;
      puStack_b8 = &UNK_1103a08b8;
      ppuVar9 = &puStack_d0;
      puStack_a8 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar8 = puStack_a8;
      func_0x000107c61174(param_1);
      func_0x000107c61174(lVar3);
      func_0x000107c61174(uVar11);
      func_0x000107c61174();
      func_0x000107c61574(puVar8);
      func_0x000107c4c69c(lVar4);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar4);
      lVar10 = *(long *)(lVar2 + _DAT_112d71980);
      func_0x000107c61174();
      lVar4 = lVar10;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      func_0x000107c615e8();
      FUN_101304b74();
      if (lVar4 != 0) {
        puVar8 = &UNK_1103a08f0;
        func_0x000107c613fc(&UNK_1103a08f0,0x18,7);
        *(long *)(puVar8 + 0x10) = lVar2;
        pcStack_b0 = FUN_10130c88c;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0x42000000;
        pcStack_c0 = (code *)&UNK_1000b0c7c;
        puStack_b8 = &UNK_1103a0908;
        ppuVar7 = &puStack_d0;
        puStack_a8 = puVar8;
        func_0x000107c60bc4(ppuVar7);
        puVar8 = puStack_a8;
        func_0x000107c61174(lVar2);
        func_0x000107c61574(puVar8);
        func_0x000107c41864(lVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(param_1);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar5);
        func_0x000107c615e8(lVar4);
        return;
      }
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10130c014; end: 10130c4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130c014(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_b0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar10 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_b8 = lVar10;
  func_0x000107c5f824();
  lStack_c8 = *(long *)(lVar2 + -8);
  lStack_c0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_d0 = lVar10;
  func_0x000107c5f804();
  lStack_e8 = *(long *)(lVar2 + -8);
  lStack_e0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar10 - extraout_x8_02;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar2 + -8);
  lVar14 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar13 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_d8 = lVar18 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (lVar18 - extraout_x12) - extraout_x12_00;
  func_0x000107c3abfc();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c4f7a0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      lStack_f0 = lVar1;
      func_0x000107c5faec(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000100029394(unaff_x20 + _DAT_112d71a00,lVar13);
      lVar1 = lVar13;
      (**(code **)(lVar17 + 0x30))(lVar13,1,lVar2);
      if ((int)lVar1 == 1) {
        func_0x000107c6142c(puVar5);
        FUN_10130c98c(lVar13,0x112d36580,&UNK_10d9016d0);
      }
      else {
        pcVar16 = *(code **)(lVar17 + 0x20);
        lStack_f8 = lVar11;
        (*pcVar16)(lVar11,lVar13,lVar2);
        lVar13 = lStack_d8;
        func_0x000107c5ed9c(lStack_d8,lVar4,puVar5);
        func_0x000107c6142c(puVar5);
        FUN_10130ca78(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        lVar11 = lStack_e0;
        lVar1 = lStack_e8;
        (**(code **)(lStack_e8 + 0x68))
                  (lVar10,*(undefined4 *)
                           PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
                   lStack_e0);
        lVar3 = lVar10;
        func_0x000107c5fff0();
        lStack_100 = lVar3;
        (**(code **)(lVar1 + 8))(lVar10,lVar11);
        puVar5 = &UNK_1103a0788;
        func_0x000107c613fc(&UNK_1103a0788,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,unaff_x20);
        (**(code **)(lVar17 + 0x10))(lVar18,lVar13,lVar2);
        uVar12 = (ulong)*(byte *)(lVar17 + 0x50);
        uVar15 = uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff);
        puVar6 = &UNK_1103a0bc0;
        func_0x000107c613fc(&UNK_1103a0bc0,uVar15 + lVar14,uVar12 | 7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        (*pcVar16)(puVar6 + uVar15,lVar18,lVar2);
        pcStack_78 = FUN_10130c95c;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_1000b0c7c;
        puStack_80 = &UNK_1103a0bd8;
        ppuVar7 = &puStack_98;
        puStack_70 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puVar5;
        func_0x000107c6157c(puVar5);
        lVar11 = lStack_d0;
        func_0x000107c5f808(lStack_d0);
        puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001c7eec();
        uVar8 = 0x112d4af90;
        func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
        uVar9 = uVar8;
        func_0x0001001c7f30();
        lVar14 = lStack_b8;
        lVar10 = lStack_f0;
        func_0x000107c60264(lStack_b8,&puStack_a0,uVar8,uVar9,lStack_f0,puVar6);
        lVar1 = lStack_100;
        func_0x000107c5ffe8(0,lVar11,lVar14,ppuVar7);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(lVar1);
        (**(code **)(lStack_b0 + 8))(lVar14,lVar10);
        (**(code **)(lStack_c8 + 8))(lVar11,lStack_c0);
        pcVar16 = *(code **)(lVar17 + 8);
        (*pcVar16)(lVar13,lVar2);
        (*pcVar16)(lStack_f8,lVar2);
        puVar6 = puStack_70;
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar6);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10130c4a4);
  (*pcVar16)();
}



/* Entry: 10130c4a4; end: 10130c563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10130c4a4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c45424();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  ppuVar3 = &puStack_b0;
  FUN_101304b74();
  if (lVar1 != 0) {
    puVar2 = &UNK_1103a0b70;
    func_0x000107c613fc(&UNK_1103a0b70,0x18,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    uStack_90 = 0x10130ce14;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000b0c7c;
    puStack_98 = &UNK_1103a0b88;
    puStack_88 = puVar2;
    func_0x000107c60bc4(&puStack_b0);
    puVar2 = puStack_88;
    func_0x000107c61174(unaff_x20);
    func_0x000107c61574(puVar2);
    func_0x000107c41864(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d71a08);
  uVar4 = 0x616964656d;
  lVar5 = -0x1b00000000000000;
  func_0x000107c5fadc(0x616964656d);
  lVar1 = *(long *)(unaff_x20 + _DAT_112d71a30);
  if (lVar1 != 0) {
    func_0x000107c40414();
    func_0x000107c61180();
    lVar7 = lVar1;
    FUN_1013085a8();
    func_0x000107c61170(lVar1);
    if (lVar5 != 0) {
      func_0x000107c5fadc(lVar7,lVar5);
      func_0x000107c6142c(lVar5);
      goto LAB_10130c694;
    }
  }
  lVar7 = 0;
LAB_10130c694:
  func_0x0001051366f0(uVar6,uVar4,lVar7,1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar7);
  return lVar7;
}



/* Entry: 10130c564; end: 10130c80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130c564(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  FUN_101304b74();
  if (param_1 != 0) {
    puVar1 = &UNK_1103a0b70;
    func_0x000107c613fc(&UNK_1103a0b70,0x18,7);
    *(long *)(puVar1 + 0x10) = unaff_x20;
    uStack_50 = 0x10130ce14;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_1103a0b88;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c61174();
    func_0x000107c61574(puVar1);
    func_0x000107c41864(param_1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(param_1);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d71a08);
  uVar3 = 0x616964656d;
  lVar5 = -0x1b00000000000000;
  func_0x000107c5fadc(0x616964656d);
  lVar4 = *(long *)(unaff_x20 + _DAT_112d71a30);
  if (lVar4 != 0) {
    func_0x000107c40414();
    func_0x000107c61180();
    lVar7 = lVar4;
    FUN_1013085a8();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      func_0x000107c5fadc(lVar7,lVar5);
      func_0x000107c6142c(lVar5);
      goto LAB_10130c694;
    }
  }
  lVar7 = 0;
LAB_10130c694:
  func_0x0001051366f0(uVar6,uVar3,lVar7,1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 10130c810; end: 10130c823;  */

/* WARNING: Possible PIC construction at 0x000101309788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010130978c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130c810(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  lVar7 = lVar2;
  func_0x000107c5ed70();
  puVar1 = (undefined8 *)(lVar8 + _DAT_113034f40);
  lVar8 = puVar1[1];
  puVar5 = (undefined *)0x0;
  if (lVar8 != 0) {
    uVar9 = *puVar1;
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x000107c5fadc(uVar9,lVar8);
    func_0x000107c48af4(puVar4);
    func_0x000107c61170(uVar9);
    func_0x000108604db4(uVar6);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126be800;
    func_0x000107c610f8(PTR_PTR_1126be800);
    func_0x000107c48cc8();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
  }
  uVar9 = *(undefined8 *)(lVar2 + _DAT_112d71a08);
  uVar6 = 0x6c7275;
  func_0x000107c5fadc(0x6c7275,0xe300000000000000);
  func_0x0001051366f0(uVar9,uVar6,0,1);
  func_0x000107c61170(uVar6);
  lVar8 = *(long *)(lVar2 + _DAT_112d719e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 == 0) {
    func_0x000107c61170(puVar5);
  }
  else {
    func_0x000107c5fadc(param_1,lVar7);
    func_0x000107c5fc48(*(undefined8 *)(lVar3 + _DAT_11307fc78),PTR___sSSN_11034da80);
    puVar4 = &UNK_1103a0788;
    func_0x000107c613fc(&UNK_1103a0788,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar2);
    uStack_60 = 0x10130c8c8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    uStack_70 = 0x100f5c588;
    puStack_68 = &UNK_1103a0958;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c51ee4(lVar8);
    func_0x000107c61170(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar7);
  return;
}



/* Entry: 10130c824; end: 10130c85f;  */

void FUN_10130c824(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10130c860; end: 10130c86b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130c860(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_113034f40);
  lVar4 = puVar1[1];
  if (lVar4 == 0) {
    uVar5 = 0;
    lVar6 = -0x2000000000000000;
  }
  else {
    uVar5 = *puVar1;
    lVar6 = lVar4;
  }
  func_0x000107c61434(lVar4,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10130986c(uVar3,uVar2,uVar5,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar6);
  return;
}



/* Entry: 10130c86c; end: 10130c88b;  */

void FUN_10130c86c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10130c88c; end: 10130c8eb;  */

void FUN_10130c88c(void)

{
  long unaff_x20;
  
  FUN_101309a2c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10130c8ec; end: 10130c90b;  */

void FUN_10130c8ec(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar5 = &puStack_90;
  ppuVar8 = &puStack_90;
  puVar3 = &UNK_1103a0a80;
  func_0x000107c613fc(&UNK_1103a0a80,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  puVar4 = &UNK_1103a0aa8;
  func_0x000107c613fc(&UNK_1103a0aa8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10130c92c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x10130cec0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10130d598;
  puStack_78 = &UNK_1103a0ac0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1103a0af8;
  func_0x000107c613fc(&UNK_1103a0af8,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  puVar7 = &UNK_1103a0b20;
  func_0x000107c613fc(&UNK_1103a0b20,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x10130c944;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_70 = 0x10130cec4;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10130d598;
  puStack_78 = &UNK_1103a0b38;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c664(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x62,0x2ff,0x1e,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10130a0d4);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x62,0x301,0x16,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10130a0d8);
  (*pcVar2)();
}



/* Entry: 10130c90c; end: 10130c92b;  */

void FUN_10130c90c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10130c92c; end: 10130c95b;  */

void FUN_10130c92c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = puVar2[1];
  puVar2[1] = 0xe500000000000000;
  *puVar2 = 0x6567616d69;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10130c95c; end: 10130c98b;  */

void FUN_10130c95c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10130524c(unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10130c98c; end: 10130c9cb;  */

undefined8 FUN_10130c98c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10130c9cc; end: 10130ca0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130c9cc(undefined1 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long lVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == (undefined1 *)0x0) {
    func_0x000107c61428(unaff_x20 + 0x10,&puStack_d8,0,0);
    param_1 = (undefined1 *)(unaff_x20 + 0x10);
    func_0x000107c61618();
    if (param_1 == (undefined1 *)0x0) {
      return;
    }
    FUN_101305af4(0);
  }
  else {
    func_0x000107c61174();
    puVar3 = param_1;
    func_0x000107c49ea0();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
      lVar4 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(lVar4 + _DAT_112d719a8);
        uVar1 = ((undefined8 *)(lVar4 + _DAT_112d719a8))[1];
        func_0x000107c61434(uVar1);
        func_0x000107c61170(lVar4);
        func_0x000107c5fadc(uVar5,uVar1);
        func_0x000107c6142c(uVar1);
        puVar3 = param_1;
        func_0x000107c4fa6c();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (puVar3 != (undefined1 *)0x0) {
          func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
          lVar4 = unaff_x20 + 0x10;
          func_0x000107c61618();
          if (lVar4 != 0) {
            lVar9 = *(long *)(lVar4 + _DAT_112d719d8);
            func_0x000107c61174();
            func_0x000107c61170(lVar4);
            lVar4 = lVar9;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(lVar9);
            if (lVar4 != 0) {
              FUN_10130ca78(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
              (**(code **)(lVar11 + 0x68))
                        (puVar10,*(undefined4 *)
                                  PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
                         ,lVar2);
              puVar6 = puVar10;
              func_0x000107c5fff0(puVar10);
              (**(code **)(lVar11 + 8))(puVar10,lVar2);
              puVar7 = &UNK_1103a0788;
              func_0x000107c613fc(&UNK_1103a0788,0x18,7);
              func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
              lVar2 = unaff_x20 + 0x10;
              func_0x000107c61618(lVar2);
              func_0x000107c61614(puVar7 + 0x10,lVar2);
              func_0x000107c61170(lVar2);
              uStack_b8 = 0x10130c9d4;
              puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_d0 = 0x42000000;
              pcStack_c8 = (code *)0x101043a98;
              puStack_c0 = &UNK_1103a0c28;
              ppuVar8 = &puStack_d8;
              puStack_b0 = puVar7;
              func_0x000107c60bc4(ppuVar8);
              func_0x000107c61574(puStack_b0);
              func_0x000107c5b49c(lVar4);
              func_0x000107c61170(param_1);
              func_0x000107c60bd0(ppuVar8);
              func_0x000107c615e8(lVar4);
              func_0x000107c61170(puVar3);
              param_1 = puVar6;
              goto LAB_101305ac0;
            }
          }
          func_0x000107c61170(param_1);
          param_1 = puVar3;
          goto LAB_101305ac0;
        }
      }
      func_0x000107c61428(unaff_x20 + 0x10,&puStack_d8,0,0);
      lVar2 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar2 != 0) {
        FUN_101305af4(0);
        func_0x000107c61170(lVar2);
      }
    }
    else {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
      lVar4 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar4 != 0) {
        lVar9 = *(long *)(lVar4 + _DAT_112d719d0);
        func_0x000107c61174();
        func_0x000107c61170(lVar4);
        lVar4 = lVar9;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar9);
        if (lVar4 != 0) {
          puVar3 = param_1;
          func_0x000107c40674(param_1);
          func_0x000107c61180();
          puVar6 = puVar3;
          func_0x000107c5cb4c();
          func_0x000107c61180();
          func_0x000107c61170(puVar3);
          puVar7 = &UNK_1103a0788;
          func_0x000107c613fc(&UNK_1103a0788,0x18,7);
          func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
          lVar9 = unaff_x20 + 0x10;
          func_0x000107c61618(lVar9);
          func_0x000107c61614(puVar7 + 0x10,lVar9);
          func_0x000107c61170(lVar9);
          uStack_b8 = 0x10130c9dc;
          puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d0 = 0x42000000;
          pcStack_c8 = FUN_101306b38;
          puStack_c0 = &UNK_1103a0c50;
          ppuVar8 = &puStack_d8;
          puStack_b0 = puVar7;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c61574(puStack_b0);
          FUN_10130ca78(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
          (**(code **)(lVar11 + 0x68))
                    (puVar10,*(undefined4 *)
                              PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
                     lVar2);
          puVar3 = puVar10;
          func_0x000107c5fff0(puVar10);
          (**(code **)(lVar11 + 8))(puVar10,lVar2);
          func_0x000107c440a8(lVar4);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(param_1);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c615e8(lVar4);
          param_1 = puVar6;
        }
      }
    }
  }
LAB_101305ac0:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10130ca10; end: 10130ca5f;  */

void FUN_10130ca10(code *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c5ede0();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar3 = PTR_PTR_1126b25c0;
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x000107c453e4();
  func_0x000107c42428();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  cVar2 = *(char *)(lVar1 + 0x10);
  puVar3 = PTR_PTR_1126affc0;
  func_0x000107c61168(PTR_PTR_1126affc0);
  puVar5 = puVar3;
  func_0x000107c5ed90();
  if (cVar2 == '\x01') {
    func_0x000107c5dda4(puVar3);
  }
  else {
    func_0x000107c60a44(&puStack_a8,0x4008000000000000,1000);
    func_0x000107c45078(puVar3);
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126affc8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = PTR_PTR_1126affd0;
  func_0x000107c610f8(PTR_PTR_1126affd0);
  func_0x000107c453e4();
  func_0x000107c5645c(puVar5);
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126affe0;
  func_0x000107c61168();
  puVar7 = puVar6;
  FUN_100fe4224();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 3;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  *(undefined **)(puVar7 + 0x20) = puVar5;
  uVar8 = 0;
  FUN_10130ca78(0,0x112d530c8,&PTR_PTR_1126affc8);
  func_0x000107c615f0(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar5);
  puVar9 = puVar7;
  func_0x000107c5fc48(puVar7,uVar8);
  func_0x000107c61574(puVar7);
  func_0x000107c3d5d0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar9);
  if (puVar6 == (undefined *)0x0) {
    (*param_1)(0,0);
  }
  else {
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    puVar9 = puVar6;
    func_0x000100759c94(puVar6,0);
    puVar7 = &UNK_1103a0f08;
    func_0x000107c613fc(&UNK_1103a0f08,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar4;
    func_0x000107c615f0(uVar4);
    uVar8 = 0x112d62370;
    func_0x0001000285a8(0x112d62370,&UNK_10d9daed0);
    uVar10 = 0;
    func_0x000100775264(0,1,0x10130cab8,puVar7,uVar8);
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar7);
    func_0x00010488b298();
    func_0x000107c61574(uVar10);
    puVar9 = &UNK_1103a0f30;
    func_0x000107c613fc(&UNK_1103a0f30,0x20,7);
    *(code **)(puVar9 + 0x10) = param_1;
    *(undefined8 *)(puVar9 + 0x18) = param_2;
    uStack_88 = 0x10130cb00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x10130cf24;
    puStack_90 = &UNK_1103a0f48;
    ppuVar11 = &puStack_a8;
    puStack_80 = puVar9;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_80;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar9);
    func_0x000107c5dc64(puVar7);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    puVar5 = puVar7;
    puVar3 = puVar6;
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 10130ca60; end: 10130ca77;  */

void FUN_10130ca60(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10130c98c(uVar2,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x10))(uVar2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101307870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(uVar2,0,1,lVar1);
  return;
}



/* Entry: 10130ca78; end: 10130cb2b;  */

void FUN_10130ca78(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10130cb2c; end: 10130cb77;  */

void FUN_10130cb2c(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 10130cb78; end: 10130cba7;  */

void FUN_10130cb78(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010130bdb4(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_1103a1340,FUN_10130cba8,
                      &UNK_1103a1358);
  return;
}



/* Entry: 10130cba8; end: 10130cbb7;  */

/* WARNING: Possible PIC construction at 0x00010130bf58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010130bf74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010130bf5c) */
/* WARNING: Removing unreachable block (ram,0x00010130bf78) */

void FUN_10130cba8(long param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if ((param_1 != 0) && (param_2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_completeWithValue__1125ae900,param_1);
    return;
  }
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010d9325a0);
  func_0x000107c5fadc(0xd00000000000002e,0x800000010ef35c30);
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10130cbb8; end: 10130cbe3;  */

void FUN_10130cbb8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10130cbe4; end: 10130cc07;  */

/* WARNING: Possible PIC construction at 0x00010130a140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010130a144) */

void FUN_10130cbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar4 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar4);
  puVar2 = PTR_PTR_1126b07f0;
  func_0x000107c61168(PTR_PTR_1126b07f0);
  puVar3 = puVar2;
  func_0x00010130a15c();
  func_0x000107c5dd4c(0x3fe2000000000000,puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10130cc08; end: 10130cc53;  */

undefined * FUN_10130cc08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar6 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  uVar5 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8));
  lVar3 = unaff_x20 + uVar6;
  uVar4 = uVar5;
  func_0x000107c5ed70(lVar3);
  puVar1 = PTR_PTR_1126a6a48;
  func_0x000107c610f8(PTR_PTR_1126a6a48);
  func_0x000107c5fadc(lVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c49140(puVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  func_0x000107c5a278(puVar1);
  func_0x000107c615e8(uVar5);
  puVar2 = PTR_PTR_1126a6a50;
  func_0x000107c610f8(PTR_PTR_1126a6a50);
  func_0x000107c49520();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 10130cc54; end: 10130cc6b;  */

undefined8 FUN_10130cc54(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  ulong uVar15;
  long unaff_x20;
  ulong uVar16;
  undefined *puVar17;
  undefined1 auStack_140 [4];
  undefined4 uStack_13c;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  uVar13 = *(ulong *)(unaff_x20 + 0x10);
  lVar5 = 0;
  func_0x000107c5f7fc();
  lStack_e0 = *(long *)(lVar5 + -8);
  lStack_d8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar5 = 0;
  puStack_e8 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_f8 = *(long *)(lVar5 + -8);
  lStack_f0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar14 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_100 = lVar14;
  func_0x000107c5f804();
  lStack_110 = *(long *)(lVar5 + -8);
  lStack_108 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  lStack_118 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (uVar13 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar16 = uVar13;
    }
    func_0x000107c60480();
  }
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101310eac(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar8 = puStack_80;
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10130a8dc);
      (*pcVar4)();
    }
    uStack_130 = uVar13 & 0xc000000000000001;
    uVar6 = 0;
    FUN_10130ca78(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    puVar3 = puStack_e8;
    lVar5 = lStack_100;
    uVar15 = 0;
    uStack_13c = *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0;
    uStack_138 = uVar6;
    uStack_128 = uVar16;
    uStack_120 = uVar13;
    do {
      puStack_c0 = puVar8;
      if (uStack_130 == 0) {
        uVar13 = *(ulong *)(uStack_120 + uVar15 * 8 + 0x20);
        func_0x000107c61174(uVar13);
      }
      else {
        uVar13 = uVar15;
        FUN_101310b60(uVar15);
      }
      puVar7 = PTR_PTR_1126ae568;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar8 = PTR_PTR_1126b0648;
      func_0x000107c610f8();
      func_0x000107c46e04();
      puStack_c8 = puVar8;
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c539d4(0x4014000000000000);
      func_0x000107c61170(puVar8);
      lVar2 = lStack_108;
      lVar1 = lStack_110;
      lVar14 = lStack_118;
      (**(code **)(lStack_110 + 0x68))(lStack_118,uStack_13c,lStack_108);
      lVar9 = lVar14;
      func_0x000107c5fff0();
      lStack_d0 = lVar9;
      (**(code **)(lVar1 + 8))(lVar14,lVar2);
      puVar8 = &UNK_1103a11d8;
      func_0x000107c613fc(&UNK_1103a11d8,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,uVar13);
      puVar10 = &UNK_1103a1700;
      func_0x000107c613fc(&UNK_1103a1700,0x20,7);
      *(undefined **)(puVar10 + 0x10) = puVar8;
      *(undefined **)(puVar10 + 0x18) = puVar7;
      uStack_90 = 0x10130cc5c;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1000b0c7c;
      puStack_98 = &UNK_1103a1718;
      ppuVar11 = &puStack_b0;
      puStack_88 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c6157c(puVar8);
      func_0x000107c61174(puVar7);
      puVar10 = puVar7;
      func_0x000107c5f808(lVar5);
      puStack_b8 = puVar17;
      func_0x0001001c7eec();
      uVar6 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar12 = uVar6;
      func_0x0001001c7f30();
      lVar14 = lStack_d8;
      func_0x000107c60264(puVar3,&puStack_b8,uVar6,uVar12,lStack_d8,puVar10);
      lVar1 = lStack_d0;
      func_0x000107c5ffe8(0,lVar5,puVar3,ppuVar11);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(lVar1);
      (**(code **)(lStack_e0 + 8))(puVar3,lVar14);
      (**(code **)(lStack_f8 + 8))(lVar5,lStack_f0);
      puVar17 = puStack_88;
      func_0x000107c61170(uVar13);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar17);
      puStack_80 = puStack_c0;
      uVar13 = *(ulong *)(puStack_c0 + 0x10);
      if (*(ulong *)(puStack_c0 + 0x18) >> 1 <= uVar13) {
        FUN_101310eac(1 < *(ulong *)(puStack_c0 + 0x18),uVar13 + 1,1);
      }
      uVar15 = uVar15 + 1;
      *(ulong *)(puStack_80 + 0x10) = uVar13 + 1;
      *(undefined **)(puStack_80 + uVar13 * 8 + 0x20) = puStack_c8;
      puVar8 = puStack_80;
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    } while (uStack_128 != uVar15);
  }
  uVar6 = 0;
  FUN_101304afc(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_101304690(puVar8);
  func_0x000107c6142c(puVar8);
  return uVar6;
}



/* Entry: 10130cc6c; end: 10130cc9b;  */

void FUN_10130cc6c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010130bdb4(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_1103a1840,FUN_10130cc9c,
                      &UNK_1103a1858);
  return;
}



/* Entry: 10130cc9c; end: 10130ccb3;  */

void FUN_10130cc9c(long param_1,long param_2)

{
  long unaff_x20;
  
  if ((param_1 != 0) && (param_2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_next__112614028,param_1);
    return;
  }
  return;
}



/* Entry: 10130ccb4; end: 10130ccdf;  */

void FUN_10130ccb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10130cce0; end: 10130cf2f;  */

long FUN_10130cce0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_10130a8dc();
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 10130cf30; end: 10130d537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10130cf30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
             undefined8 param_10,undefined8 param_11,long param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             long param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long extraout_x8;
  undefined1 *puVar12;
  undefined8 unaff_x20;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar3 = 0x112d36580;
  uStack_88 = param_1;
  uStack_80 = param_2;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_180 + -extraout_x8;
  uVar11 = 0x10;
  func_0x000107c613fc();
  uVar6 = unaff_x20;
  func_0x00010451338c();
  uVar4 = *(undefined8 *)(param_4 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5faec();
  uStack_98 = uVar11;
  uStack_90 = uVar5;
  func_0x000107c61170(uVar4);
  uVar5 = param_5;
  func_0x000107c5db24();
  func_0x000107c61180();
  uVar4 = param_5;
  func_0x000107c4213c();
  func_0x000107c61180();
  uVar11 = param_6;
  uStack_a0 = uVar4;
  func_0x000107c40664();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_7 + _DAT_11307fc48);
  uStack_a8 = uVar11;
  func_0x000107c61174();
  lVar3 = param_8;
  uStack_b0 = uVar4;
  func_0x000107c4456c();
  func_0x000107c61180();
  lStack_b8 = lVar3;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10130d530);
    (*pcVar2)();
  }
  lStack_c0 = param_9;
  uStack_c8 = uVar5;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  lStack_d0 = param_9;
  if (param_9 != 0) {
    uStack_138 = param_10;
    uStack_110 = uVar6;
    uStack_108 = param_3;
    lStack_100 = param_4;
    uStack_f8 = param_5;
    uStack_f0 = param_6;
    lStack_e8 = param_7;
    lStack_e0 = param_8;
    uStack_d8 = unaff_x20;
    func_0x000107c5c894();
    func_0x000107c61180();
    uStack_130 = param_11;
    uStack_140 = param_10;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lStack_128 = param_12;
    uVar6 = *(undefined8 *)(param_12 + _DAT_11301afa0);
    uStack_148 = param_11;
    func_0x000107c61174();
    uStack_120 = param_13;
    uStack_150 = uVar6;
    func_0x000107c429f0();
    func_0x000107c61180();
    uVar6 = uStack_80;
    uStack_160 = param_13;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    lStack_118 = param_18;
    uStack_158 = uVar6;
    func_0x000107c3fa04();
    func_0x000107c61180();
    lStack_168 = param_18;
    if (param_18 != 0) {
      func_0x00010131354c(0);
      func_0x000107c61174();
      uStack_170 = param_19;
      func_0x000107c61174();
      uStack_178 = param_20;
      FUN_1013131a8(puVar12);
      puVar7 = PTR_PTR_1126a6a58;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar8 = 0;
      FUN_1013050e4();
      lVar9 = lVar8;
      func_0x000107c610f8();
      lVar3 = _DAT_112d719a0;
      func_0x000107c61614(lVar9 + _DAT_112d719a0,0);
      *(undefined8 *)(lVar9 + _DAT_112d71a30) = 0;
      *(undefined8 *)(lVar9 + _DAT_112d71a38) = 1;
      puVar1 = (undefined8 *)(lVar9 + _DAT_112d71a40);
      puVar1[1] = 1;
      *puVar1 = 0;
      *(undefined8 *)(lVar9 + _DAT_112d71980) = param_16;
      *(undefined8 *)(lVar9 + _DAT_112d71988) = param_15;
      *(undefined8 *)(lVar9 + _DAT_112d71990) = param_17;
      *(undefined8 *)(lVar9 + _DAT_112d71998) = param_14;
      func_0x000107c61604(lVar9 + lVar3,uStack_110);
      puVar1 = (undefined8 *)(lVar9 + _DAT_112d719a8);
      *puVar1 = uStack_90;
      puVar1[1] = uStack_98;
      *(undefined8 *)(lVar9 + _DAT_112d719b0) = uStack_c8;
      *(undefined8 *)(lVar9 + _DAT_112d719b8) = uStack_a0;
      *(undefined8 *)(lVar9 + _DAT_112d719c0) = uStack_a8;
      *(undefined8 *)(lVar9 + _DAT_112d719c8) = uStack_b0;
      *(long *)(lVar9 + _DAT_112d719d0) = lStack_b8;
      *(long *)(lVar9 + _DAT_112d719d8) = lStack_d0;
      *(undefined8 *)(lVar9 + _DAT_112d719e0) = uStack_140;
      *(undefined8 *)(lVar9 + _DAT_112d719e8) = uStack_148;
      *(undefined8 *)(lVar9 + _DAT_112d719f0) = uStack_150;
      *(undefined8 *)(lVar9 + _DAT_112d719f8) = uStack_160;
      func_0x000100029394(puVar12,lVar9 + _DAT_112d71a00);
      uVar6 = uStack_178;
      *(undefined **)(lVar9 + _DAT_112d71a08) = puVar7;
      *(undefined8 *)(lVar9 + _DAT_112d71a10) = uStack_158;
      *(long *)(lVar9 + _DAT_112d71a18) = lStack_168;
      *(undefined8 *)(lVar9 + _DAT_112d71a20) = param_19;
      *(undefined8 *)(lVar9 + _DAT_112d71a28) = uStack_178;
      puVar7 = PTR_s_init_1125d9248;
      lStack_78 = lVar9;
      lStack_70 = lVar8;
      func_0x000107c61174(param_14);
      func_0x000107c61174(param_15);
      func_0x000107c61174(param_16);
      func_0x000107c61174(param_17);
      func_0x000107c61174(param_16);
      func_0x000107c61174(param_15);
      func_0x000107c61174(param_17);
      func_0x000107c61174(param_14);
      plVar10 = &lStack_78;
      func_0x000107c61154(plVar10,puVar7);
      func_0x000107c61170(param_16);
      func_0x000107c61170(param_15);
      func_0x000107c61170(param_17);
      func_0x000107c61170(param_14);
      func_0x000107c61170(uStack_110);
      func_0x0001000293e4(puVar12);
      uVar5 = uStack_88;
      uVar4 = uStack_88;
      func_0x000107c4e9e4(uStack_88);
      func_0x000107c61180();
      func_0x000107c4fba8();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uStack_80);
      func_0x000107c61170(uStack_108);
      func_0x000107c61170(lStack_100);
      func_0x000107c61170(uStack_f8);
      func_0x000107c61170(uStack_f0);
      func_0x000107c61170(lStack_e8);
      func_0x000107c61170(lStack_e0);
      func_0x000107c61170(lStack_c0);
      func_0x000107c61170(uStack_138);
      func_0x000107c61170(uStack_130);
      func_0x000107c61170(lStack_128);
      func_0x000107c61170(uStack_120);
      func_0x000107c61170(param_14);
      func_0x000107c61170(param_15);
      func_0x000107c61170(param_16);
      func_0x000107c61170(param_17);
      func_0x000107c61170(lStack_118);
      func_0x000107c61170(uStack_170);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(plVar10);
      func_0x000107c61170(uVar4);
      return uStack_d8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10130d538);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10130d534);
  (*pcVar2)();
}



/* Entry: 10130d538; end: 10130d553;  */

void FUN_10130d538(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10130d554; end: 10130d573;  */

void FUN_10130d554(void)

{
  func_0x000107c61168(&PTR_PTR_112d71ad8);
  return;
}



/* Entry: 10130d574; end: 10130d577;  */

void FUN_10130d574(void)

{
  return;
}



/* Entry: 10130d578; end: 10130d597;  */

void FUN_10130d578(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 10130d598; end: 10130d763;  */

void FUN_10130d598(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c5edb4(puVar3,param_2);
  (*pcVar1)(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}



/* Entry: 10130d764; end: 10130d7df;  */

/* WARNING: Possible PIC construction at 0x00010130d7c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010130d7c8) */

void FUN_10130d764(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c5edc4();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c46110(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10130d7e0; end: 10130d9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130d7e0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d71bc8;
  func_0x0001000285a8(0x112d71bc8,&UNK_10d932780);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_112d71b58;
  func_0x000107c61428(unaff_x20 + _DAT_112d71b58,auStack_78,0,0);
  func_0x00010130f4c0(unaff_x20 + lVar1,lVar5,0x112d71bc8,&UNK_10d932780);
  lVar3 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x00010130f480(lVar5,0x112d71bc8,&UNK_10d932780);
    FUN_10130d9b0(param_1);
    func_0x00010130f4c0(param_1,puVar4,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar6 + 0x38))(puVar4,0,1,lVar2);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_90,0x21,0);
    func_0x00010130f508(puVar4,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_90);
  }
  else {
    func_0x0001001021cc(lVar5,lVar5 - extraout_x8_00);
    func_0x0001001021cc(lVar5 - extraout_x8_00,param_1);
  }
  return;
}



/* Entry: 10130d9b0; end: 10130dd9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130d9b0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar7 = &puStack_80;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,1,1,lVar3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar9 = *(undefined8 *)(param_2 + _DAT_112d71b40);
  pcStack_60 = FUN_10130d574;
  puStack_58 = (undefined *)0x0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10130d598;
  puStack_68 = &UNK_1103a1b70;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  puVar5 = &UNK_1103a1ba8;
  func_0x000107c613fc(&UNK_1103a1ba8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  puVar6 = &UNK_1103a1bd0;
  func_0x000107c613fc(&UNK_1103a1bd0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x10130f9f0;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_60 = FUN_10130f574;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10130d598;
  puStack_68 = &UNK_1103a1be8;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c4c664(uVar9);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar4);
  uVar8 = 0;
  func_0x000107c61544(0,"",0x68,0x20,0x28,1);
  func_0x000107c61574(puVar5);
  if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10130db70);
    (*pcVar2)();
  }
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x68,0x21,0x12,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10130db74);
  (*pcVar2)();
}



/* Entry: 10130dd9c; end: 10130e07b;  */

long FUN_10130dd9c(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar2 = *(long *)(unaff_x20 + lVar4);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    (*param_2)();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar1;
    func_0x000107c61174();
    (*param_3)(uVar3);
  }
  (*param_4)(lVar2);
  return lVar1;
}



/* Entry: 10130e07c; end: 10130e46f;  */

/* WARNING: Removing unreachable block (ram,0x00010130e350) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10130e07c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_e0 [8];
  ulong uStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar15 = 0x112d36580;
  puStack_b0 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  lVar15 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar15 - extraout_x12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d71b78);
  puVar14 = (undefined1 *)*puVar1;
  uVar17 = puVar1[1];
  puVar12 = puVar14;
  uVar13 = uVar17;
  if (uVar17 >> 0x3c == 0xb) {
    uStack_d8 = uVar17;
    puStack_d0 = puVar14;
    (**(code **)(lVar18 + 0x38))(lVar16,1,1,lVar5);
    uStack_c8 = *(undefined8 *)(unaff_x20 + _DAT_112d71b40);
    puVar6 = &UNK_1103a1c20;
    func_0x000107c613fc(&UNK_1103a1c20,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar16;
    puVar7 = &UNK_1103a1c48;
    func_0x000107c613fc(&UNK_1103a1c48,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x10130f9f4;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    uStack_80 = 0x10130f9b8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10130d598;
    puStack_88 = &UNK_1103a1c60;
    ppuVar8 = &puStack_a0;
    puStack_b8 = puVar6;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_78;
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_1103a1c98;
    func_0x000107c613fc(&UNK_1103a1c98,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar16;
    puVar9 = &UNK_1103a1cc0;
    func_0x000107c613fc(&UNK_1103a1cc0,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_10130f594;
    *(undefined **)(puVar9 + 0x18) = puVar6;
    uStack_80 = 0x10130f9bc;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10130d598;
    puStack_88 = &UNK_1103a1cd8;
    ppuVar10 = &puStack_a0;
    puStack_c0 = puVar6;
    puStack_78 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar6 = puStack_78;
    func_0x000107c6157c(puVar9);
    func_0x000107c61574(puVar6);
    func_0x000107c4c664(uStack_c8);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x00010130f4c0(lVar16,lVar15,0x112d36580,&UNK_10d9016d0);
    lVar11 = lVar15;
    (**(code **)(lVar18 + 0x30))(lVar15,1,lVar5);
    puVar12 = puStack_b0;
    if ((int)lVar11 == 1) {
      func_0x00010130f480(lVar15,0x112d36580,&UNK_10d9016d0);
      puVar14 = (undefined1 *)0x0;
      uVar17 = 0xf000000000000000;
    }
    else {
      (**(code **)(lVar18 + 0x20))(puStack_b0,lVar15,lVar5);
      uVar17 = 0;
      puVar14 = puVar12;
      func_0x000107c5ede8();
      (**(code **)(lVar18 + 8))(puVar12,lVar5);
    }
    func_0x00010130f480(lVar16,0x112d36580,&UNK_10d9016d0);
    func_0x000107c61574(puStack_b8);
    puVar6 = puVar7;
    func_0x000107c61544(puVar7,"",0x68,0x39,0x28,1);
    func_0x000107c61574(puStack_c0);
    func_0x000107c61574(puVar7);
    if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10130e46c);
      (*pcVar4)();
    }
    puVar6 = puVar9;
    func_0x000107c61544(puVar9,"",0x68,0x3b,0x12,1);
    func_0x000107c61574(puVar9);
    if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10130e470);
      (*pcVar4)();
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = puVar14;
    puVar1[1] = uVar17;
    FUN_100de78a0(puVar14,uVar17);
    FUN_10130f5ac(uVar2,uVar3);
    puVar12 = puStack_d0;
    uVar13 = uStack_d8;
  }
  func_0x00010130f5c0(puVar12,uVar13);
  auVar19._8_8_ = uVar17;
  auVar19._0_8_ = puVar14;
  return auVar19;
}



/* Entry: 10130e470; end: 10130e4e7;  */

void FUN_10130e470(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010130f480(param_2,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010130e4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,lVar1);
  return;
}



/* Entry: 10130e4e8; end: 10130e547; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider init] */

void FUN_10130e4e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCExternalSendToDeepLinkPlugin.ExternalSendToMediaContentProvider",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10130e514);
  (*pcVar1)();
}



/* Entry: 10130e548; end: 10130e5fb; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130e548(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d71b30 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d71b38 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71b40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71b48));
  func_0x000100cac600(*(undefined8 *)(param_1 + _DAT_112d71b50));
  func_0x00010130f480(param_1 + _DAT_112d71b58,0x112d71bc8,&UNK_10d932780);
  func_0x000100cac600(*(undefined8 *)(param_1 + _DAT_112d71b70));
  uVar2 = *(ulong *)(param_1 + _DAT_112d71b78);
  uVar1 = ((ulong *)(param_1 + _DAT_112d71b78))[1];
  if (uVar1 >> 0x3c == 0xb) {
    return;
  }
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = (uint)(uVar1 >> 0x3e);
    if (uVar3 == 1) {
      uVar2 = uVar1 & 0x3fffffffffffffff;
    }
    else if (uVar3 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10130e5fc; end: 10130e603;  */

void FUN_10130e5fc(void)

{
  if (lRam0000000112d71ba8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e62d838);
  return;
}



/* Entry: 10130e604; end: 10130e63b;  */

void FUN_10130e604(undefined8 param_1)

{
  if (lRam0000000112d71ba8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62d838);
  return;
}



/* Entry: 10130e63c; end: 10130e6f7;  */

void FUN_10130e63c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_70 = &UNK_10d9326e8;
  puStack_68 = &UNK_10d9326e8;
  puStack_60 = PTR___sBOWV_11034d658 + 0x40;
  puStack_58 = &UNK_10d932700;
  puStack_50 = &UNK_10d932718;
  lVar1 = 0x13f;
  func_0x00010006a248();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10d932738;
    puStack_38 = &UNK_10d932750;
    puStack_30 = &UNK_10d932718;
    puStack_28 = &UNK_10d932768;
    func_0x000107c61630(param_1,0x100,10,&puStack_70,param_1 + 0x50);
  }
  return;
}



/* Entry: 10130e6f8; end: 10130e7c7;  */

void FUN_10130e6f8(long param_1,code *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar2,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_10130e07c();
    func_0x000107c61170(param_1);
    if ((ulong)puVar2 >> 0x3c < 0xf) {
      if (param_2 != (code *)0x0) {
        func_0x00010006c00c(lVar1,puVar2);
        (*param_2)(lVar1,puVar2);
        func_0x0001000b44c0(lVar1,puVar2);
      }
      func_0x0001000b44c0(lVar1,puVar2);
      return;
    }
  }
  if (param_2 != (code *)0x0) {
    (*param_2)(0,0xf000000000000000);
  }
  return;
}



/* Entry: 10130e7c8; end: 10130e86b; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider prepareDataToUploadForMediaId:completionHandler:] */

void FUN_10130e7c8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  uVar1 = 0;
  if (param_3 != 0) {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar3 = &UNK_1103a2058;
    func_0x000107c613fc(&UNK_1103a2058,0x18,7);
    *(long *)(puVar3 + 0x10) = param_4;
    uVar2 = 0x10130f8fc;
  }
  func_0x000107c61174(param_1);
  FUN_10130f650(uVar2,puVar3);
  FUN_10130f8ec(uVar2,puVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10130e86c; end: 10130e8b7;  */

void FUN_10130e86c(undefined8 param_1,ulong param_2,long param_3)

{
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10130e8b8; end: 10130eacf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10130e8b8(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = 0xffffffffffffffff;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d71b40);
  puVar3 = &UNK_1103a1d10;
  func_0x000107c613fc(&UNK_1103a1d10,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = &uStack_78;
  puVar4 = &UNK_1103a1d38;
  func_0x000107c613fc(&UNK_1103a1d38,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10130f5d4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x10130f9c0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10130d598;
  puStack_90 = &UNK_1103a1d50;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_80;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1103a1d88;
  func_0x000107c613fc(&UNK_1103a1d88,0x18,7);
  *(undefined8 **)(puVar6 + 0x10) = &uStack_78;
  puVar7 = &UNK_1103a1db0;
  func_0x000107c613fc(&UNK_1103a1db0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x10130f5e0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_88 = 0x10130f9c4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10130d598;
  puStack_90 = &UNK_1103a1dc8;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c664(uVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  uVar9 = uStack_78;
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x68,0x5d,0x28,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10130eacc);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x68,0x5f,0x12,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return uVar9;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10130ead0);
  (*pcVar2)();
}



/* Entry: 10130ead0; end: 10130eb03; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider mediaContentType] */

undefined8 FUN_10130ead0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10130e8b8();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10130eb04; end: 10130ed2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10130eb04(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d71b40);
  puVar3 = &UNK_1103a1f68;
  func_0x000107c613fc(&UNK_1103a1f68,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = &uStack_78;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  puVar4 = &UNK_1103a1f90;
  func_0x000107c613fc(&UNK_1103a1f90,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10130f624;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x10130f9d4;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10130d598;
  puStack_90 = &UNK_1103a1fa8;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1103a1fe0;
  func_0x000107c613fc(&UNK_1103a1fe0,0x20,7);
  *(undefined8 **)(puVar6 + 0x10) = &uStack_78;
  *(long *)(puVar6 + 0x18) = unaff_x20;
  puVar7 = &UNK_1103a2008;
  func_0x000107c613fc(&UNK_1103a2008,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10130f62c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_88 = 0x10130f9d8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10130d598;
  puStack_90 = &UNK_1103a2020;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_80;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c664(uVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  uVar9 = uStack_78;
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x68,0x67,0x28,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10130ed2c);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x68,0x69,0x12,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return uVar9;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10130ed30);
  (*pcVar2)();
}



/* Entry: 10130ed30; end: 10130eda3;  */

void FUN_10130ed30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112d71b50;
  FUN_10130dd9c(&DAT_112d71b50,0x10130d62c,0x100f01e18,0x100f01e38);
  if (puVar1 == (undefined *)0x0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5b078();
    func_0x000107c61170(puVar1);
  }
  *param_3 = param_1;
  return;
}



/* Entry: 10130eda4; end: 10130eddf; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider width] */

undefined8 FUN_10130eda4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_10130eb04();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10130ede0; end: 10130f00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10130ede0(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d71b40);
  puVar3 = &UNK_1103a1e00;
  func_0x000107c613fc(&UNK_1103a1e00,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = &uStack_78;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  puVar4 = &UNK_1103a1e28;
  func_0x000107c613fc(&UNK_1103a1e28,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10130f5f0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x10130f9c8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10130d598;
  puStack_90 = &UNK_1103a1e40;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1103a1e78;
  func_0x000107c613fc(&UNK_1103a1e78,0x20,7);
  *(undefined8 **)(puVar6 + 0x10) = &uStack_78;
  *(long *)(puVar6 + 0x18) = unaff_x20;
  puVar7 = &UNK_1103a1ea0;
  func_0x000107c613fc(&UNK_1103a1ea0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10130f5f8;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_88 = 0x10130f9cc;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10130d598;
  puStack_90 = &UNK_1103a1eb8;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_80;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c664(uVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  uVar9 = uStack_78;
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x68,0x71,0x28,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10130f008);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x68,0x73,0x12,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return uVar9;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10130f00c);
  (*pcVar2)();
}



/* Entry: 10130f00c; end: 10130f07f;  */

void FUN_10130f00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112d71b50;
  FUN_10130dd9c(&DAT_112d71b50,0x10130d62c,0x100f01e18,0x100f01e38);
  if (puVar1 == (undefined *)0x0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5b078();
    func_0x000107c61170(puVar1);
  }
  *param_4 = param_2;
  return;
}



/* Entry: 10130f080; end: 10130f0bb; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider height] */

undefined8 FUN_10130f080(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_10130ede0();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10130f0bc; end: 10130f0c3; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider isZipped] */

undefined8 FUN_10130f0bc(void)

{
  return 0;
}



/* Entry: 10130f0c4; end: 10130f0ff; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider duration] */

undefined8 FUN_10130f0c4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  func_0x00010130dc8c();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10130f100; end: 10130f10b; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider chatKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130f100(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d71b30);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d71b30))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10130f10c; end: 10130f117; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider chatIV] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10130f10c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d71b38);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d71b38))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10130f118; end: 10130f15f;  */

void FUN_10130f118(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10130f160; end: 10130f167; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider isInfiniteDuration] */

undefined8 FUN_10130f160(void)

{
  return 0;
}



/* Entry: 10130f168; end: 10130f16f; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider isRotationLocked] */

undefined8 FUN_10130f168(void)

{
  return 1;
}



/* Entry: 10130f170; end: 10130f44b;  */

void FUN_10130f170(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = &DAT_112d71b70;
  uVar10 = 0x10130de14;
  FUN_10130dd9c(&DAT_112d71b70,0x10130de14,0x10130f9e8,0x10130f9ec);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c448f0();
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = puVar2;
      func_0x000107c49708();
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126c4918;
        func_0x000107c610f8(PTR_PTR_1126c4918);
        func_0x000107c453e4();
        puVar5 = puVar3;
        func_0x000107c4b1f4();
        if (puVar5 != (undefined *)0x0) {
          puVar5 = puVar3;
          func_0x000107c4b1f0();
          func_0x000107c61180();
          if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10130f448);
            (*pcVar1)();
          }
          func_0x000107c5dc14();
          func_0x000107c61170(puVar5);
          puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
          func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                              PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar5);
          uVar9 = 0;
          uVar10 = 0xe000000000000000;
          func_0x000107c5fadc(0,0xe000000000000000);
          func_0x000107c6142c(0xe000000000000000);
          puVar5 = puVar4;
          func_0x000107c5e650(puVar4);
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          func_0x000107c61170(puVar5);
        }
        puVar5 = puVar3;
        func_0x000107c4d2a8();
        if (puVar5 != (undefined *)0x0) {
          puVar5 = PTR_PTR_1126b2378;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar6 = PTR_PTR_1126b5c10;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar7 = PTR_PTR_1126bfac0;
          func_0x000107c610f8(PTR_PTR_1126bfac0);
          func_0x000107c453e4();
          func_0x000107c56890(puVar6);
          func_0x000107c61170(puVar7);
          puVar7 = puVar6;
          func_0x000107c4d2a4();
          func_0x000107c61180();
          if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10130f44c);
            (*pcVar1)();
          }
          func_0x000107c4d2a8(puVar3);
          func_0x000107c59fd0(puVar7);
          func_0x000107c61170(puVar7);
          func_0x000107c5a16c(puVar5);
          puVar7 = puVar5;
          func_0x000107c41214();
          func_0x000107c61180();
          if (puVar7 == (undefined *)0x0) {
            uVar9 = 0;
          }
          else {
            puVar8 = puVar7;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar7);
            uVar9 = 0;
            puVar7 = puVar8;
            func_0x000107c5ee24(0,puVar8,uVar10);
            func_0x00010006c090(puVar8,uVar10);
            func_0x000107c5fadc(uVar9,puVar7);
            func_0x000107c6142c(puVar7);
          }
          puVar7 = puVar4;
          func_0x000107c5e4e0(puVar4);
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(puVar7);
        }
        func_0x000107c3ecc8(puVar4);
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
        return;
      }
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 10130f44c; end: 10130f557; -[_TtC30SCExternalSendToDeepLinkPlugin34ExternalSendToMediaContentProvider snapMetadata] */

void FUN_10130f44c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10130f170();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10130f558; end: 10130f573;  */

void FUN_10130f558(long param_1,long param_2)

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



/* Entry: 10130f574; end: 10130f593;  */

void FUN_10130f574(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10130f594; end: 10130f5ab;  */

void FUN_10130f594(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10130e470(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10130f5ac; end: 10130f5f7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10130f5ac(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (param_2 >> 0x3c == 0xb) {
    return;
  }
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_2 >> 0x3e);
    if (uVar1 == 1) {
      param_1 = param_2 & 0x3fffffffffffffff;
    }
    else if (uVar1 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  return;
}



/* Entry: 10130f5f8; end: 10130f61b;  */

void FUN_10130f5f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x00010130db74();
  *puVar1 = param_2;
  return;
}



/* Entry: 10130f61c; end: 10130f62b;  */

/* WARNING: Possible PIC construction at 0x00010130d7c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010130d7c8) */

void FUN_10130f61c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5edc4(param_1,uVar2);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5fadc(param_1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c46110(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10130f62c; end: 10130f64f;  */

void FUN_10130f62c(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x00010130db74();
  *puVar1 = param_1;
  return;
}



/* Entry: 10130f650; end: 10130f8eb;  */

void FUN_10130f650(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 unaff_x20;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_c0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar12 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_10130f904(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar15 + 0x68))
            (lVar13,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
  lVar4 = lVar13;
  func_0x000107c5fff0(lVar13);
  (**(code **)(lVar15 + 8))(lVar13,lVar3);
  puVar5 = &UNK_1103a2080;
  func_0x000107c613fc(&UNK_1103a2080,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,unaff_x20);
  puVar6 = &UNK_1103a20a8;
  func_0x000107c613fc(&UNK_1103a20a8,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  uStack_70 = 0x10130f944;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103a20c0;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c6157c(puVar5);
  func_0x00010130f950(param_1,param_2);
  func_0x000107c5f808(lVar14);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = uVar8;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar12,&puStack_98,uVar8,uVar9,lVar1,param_1);
  func_0x000107c5ffe8(0,lVar14,puVar12,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar4);
  (**(code **)(lVar10 + 8))(puVar12,lVar1);
  (**(code **)(lVar11 + 8))(lVar14,lVar2);
  puVar6 = puStack_68;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  return;
}


