/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013bc6d0; end: 1013bc77b;  */

void FUN_1013bc6d0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1013bc77c; end: 1013bc7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1013bc77c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d7a198;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7a198);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 1013bc7f4; end: 1013bc81b; -[_TtC20SelfieOnboardingImpl37SelfieOnboardingOneShotViewController initWithCoder:] */

void FUN_1013bc7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x0001013be598();
  return;
}



/* Entry: 1013bc81c; end: 1013bc95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc81c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  code *pcVar8;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  FUN_1013bc95c();
  FUN_1013bd034();
  lVar1 = unaff_x20 + _DAT_112d7a158;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  (**(code **)(lVar2 + 0x20))(uVar3,lVar2);
  plVar4 = (long *)PTR___sSiSQsWP_11034ded0;
  func_0x000104884898();
  func_0x000107c61574(uVar3);
  puVar5 = &UNK_1103adb40;
  func_0x000107c613fc(&UNK_1103adb40,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcVar8 = *(code **)(*plVar4 + 0x68);
  func_0x000107c6157c(puVar5);
  pcVar6 = FUN_1013be490;
  puVar7 = puVar5;
  (*pcVar8)(FUN_1013be490);
  func_0x000107c61574(plVar4);
  func_0x000107c61578(puVar5,2);
  pcVar8 = pcVar6;
  func_0x000107c614f0(pcVar6);
  FUN_1013bc77c();
  (**(code **)(puVar7 + 0x10))();
  func_0x000107c615e8(pcVar6);
  func_0x000107c61574(pcVar8);
  return;
}



/* Entry: 1013bc95c; end: 1013bd033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bc95c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7a150);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8();
    if (lVar4 != 0) {
      func_0x0001013bc69c();
      lVar5 = lVar3;
      func_0x000107c610f8();
      *(undefined8 *)(lVar5 + _DAT_112d7a100) = 0x3fe999999999999a;
      *(undefined8 *)(lVar5 + _DAT_112d7a108) = 0x3ff0000000000000;
      *(undefined8 *)(lVar5 + _DAT_112d7a110) = 0x3fe0000000000000;
      *(undefined8 *)(lVar5 + _DAT_112d7a118) = 0x3fe0000000000000;
      plVar6 = &lStack_88;
      lStack_88 = lVar5;
      lStack_80 = lVar3;
      func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
      lVar3 = lVar4;
      FUN_1013bd2c8();
      puVar11 = &UNK_1103adb40;
      puVar7 = puVar11;
      func_0x000107c613fc(&UNK_1103adb40,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar8 = puVar11;
      func_0x000107c613fc(&UNK_1103adb40,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      lVar9 = 0;
      FUN_1013bc29c();
      lVar5 = lVar9;
      func_0x000107c610f8();
      pcVar2 = FUN_1013be52c;
      puVar14 = puVar7;
      func_0x0001031c06dc();
      puVar1 = (undefined8 *)(lVar5 + _DAT_112d7a088);
      *puVar1 = pcVar2;
      puVar1[1] = puVar14;
      uVar18 = 0x1013be534;
      puVar14 = puVar8;
      func_0x0001031c06dc();
      puVar1 = (undefined8 *)(lVar5 + _DAT_112d7a090);
      *puVar1 = uVar18;
      puVar1[1] = puVar14;
      puVar1 = (undefined8 *)(lVar5 + _DAT_112d7a098);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar5 + _DAT_112d7a0a0);
      *puVar1 = 0;
      puVar1[1] = 0;
      plVar10 = &lStack_98;
      lStack_98 = lVar5;
      lStack_90 = lVar9;
      func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar8);
      uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d7a178);
      *(long **)(unaff_x20 + _DAT_112d7a178) = plVar10;
      func_0x000107c61174();
      func_0x000107c61170(uVar18);
      uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d7a188) + _DAT_112fbabe0);
      func_0x000107c5c734(uVar18);
      func_0x000107c61180();
      func_0x000107c613fc(&UNK_1103adb40,0x18,7);
      func_0x000107c61614(puVar11 + 0x10);
      puVar8 = PTR_PTR_1126a6c98;
      func_0x000107c610f8(PTR_PTR_1126a6c98);
      puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x1013be53c;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      pcStack_b8 = FUN_1013be4e4;
      puStack_b0 = &UNK_1103adb58;
      ppuVar12 = &puStack_c8;
      puStack_a0 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      uStack_d8 = 0x1013be544;
      puStack_f8 = puVar7;
      uStack_f0 = 0x42000000;
      pcStack_e8 = FUN_1013be4e4;
      puStack_e0 = &UNK_1103adb80;
      ppuVar13 = &puStack_f8;
      puStack_d0 = puVar11;
      func_0x000107c60bc4(ppuVar13);
      func_0x000107c61580(puVar11,2);
      func_0x000107c45c2c(puVar8);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61574(puStack_d0);
      func_0x000107c61574(puStack_a0);
      func_0x000107c53548(puVar8);
      func_0x000107c53fcc(puVar8);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ecc();
      func_0x000107c541ec(puVar8);
      func_0x000107c61574(puVar11);
      func_0x000107c61170(puVar7);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar7 = PTR_PTR_1126a6ca0;
      func_0x000107c610f8();
      func_0x000107c61174(puVar8);
      func_0x000107c615f0(lVar4);
      puVar14 = puVar11;
      func_0x000107c5f9dc(puVar11,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(puVar11);
      func_0x000107c49520();
      func_0x000107c61170(puVar8);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar14);
      func_0x000107c61174();
      func_0x000107c5a050();
      lVar5 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013bd024);
        (*pcVar2)();
      }
      func_0x000107c3d89c();
      func_0x000107c61170();
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 9;
      *(undefined8 *)(lVar5 + 0x10) = 4;
      puVar11 = puVar7;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      lVar9 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013bd028);
        (*pcVar2)();
      }
      lVar15 = lVar9;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      puVar14 = puVar11;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(lVar15);
      *(undefined **)(lVar5 + 0x20) = puVar14;
      puVar11 = puVar7;
      func_0x000107c4acb0();
      func_0x000107c61180();
      lVar9 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013bd02c);
        (*pcVar2)();
      }
      lVar15 = lVar9;
      func_0x000107c4acb0();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      puVar14 = puVar11;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(lVar15);
      *(undefined **)(lVar5 + 0x28) = puVar14;
      puVar11 = puVar7;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      lVar9 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013bd030);
        (*pcVar2)();
      }
      lVar15 = lVar9;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      puVar14 = puVar11;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(lVar15);
      *(undefined **)(lVar5 + 0x30) = puVar14;
      puVar11 = puVar7;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013bd034);
        (*pcVar2)();
      }
      puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar9 = unaff_x20;
      func_0x000107c3ec1c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar16 = puVar11;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(lVar9);
      *(undefined **)(lVar5 + 0x38) = puVar16;
      uVar17 = 0;
      func_0x000100847984(0);
      lVar9 = lVar5;
      func_0x000107c5fc48(lVar5,uVar17);
      func_0x000107c61574(lVar5);
      func_0x000107c3d048(puVar14);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(plVar6);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(plVar10);
      func_0x000107c615e8(uVar18);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(lVar9);
    }
  }
  return;
}



/* Entry: 1013bd034; end: 1013bd29f;  */

/* WARNING: Possible PIC construction at 0x0001013bd0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bd0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bd14c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bd190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bd1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bd20c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bd23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bd280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013bd210) */
/* WARNING: Removing unreachable block (ram,0x0001013bd1e0) */
/* WARNING: Removing unreachable block (ram,0x0001013bd194) */
/* WARNING: Removing unreachable block (ram,0x0001013bd284) */
/* WARNING: Removing unreachable block (ram,0x0001013bd1a8) */
/* WARNING: Removing unreachable block (ram,0x0001013bd150) */
/* WARNING: Removing unreachable block (ram,0x0001013bd0f8) */
/* WARNING: Removing unreachable block (ram,0x0001013bd0e0) */
/* WARNING: Removing unreachable block (ram,0x0001013bd240) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bd034(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  code *pcVar6;
  
  lVar1 = unaff_x20 + _DAT_112d7a158;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  puVar4 = &UNK_1103adb40;
  func_0x000107c613fc(&UNK_1103adb40,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcVar6 = *(code **)(lVar3 + 8);
  func_0x000107c6157c(puVar4);
  uVar5 = 0x1013be494;
  (*pcVar6)(0x1013be494,puVar4,uVar2,lVar3);
  func_0x000107c61578(puVar4,2);
  FUN_1013be49c();
  func_0x0001000c2068();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar5);
  return;
}



/* Entry: 1013bd2a0; end: 1013bd2c7; -[_TtC20SelfieOnboardingImpl37SelfieOnboardingOneShotViewController viewDidLoad] */

void FUN_1013bd2a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013bc81c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013bd2c8; end: 1013bd3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013bd2c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d7a160);
  puVar2 = &UNK_1103adbb8;
  func_0x000107c613fc(&UNK_1103adbb8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1013be570;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)0x100f11710;
  puStack_68 = &UNK_1103adbd0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar2);
  pcStack_60 = FUN_1013bdf48;
  puStack_58 = (undefined *)0x0;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100f10508;
  puStack_68 = &UNK_1103adbf8;
  func_0x000107c60bc4(&puStack_80);
  FUN_1013bc5a0(0);
  func_0x000107c614e8();
  func_0x000107c4c214(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return param_1;
}



/* Entry: 1013bd3f4; end: 1013bd497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bd3f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112d7a148;
    func_0x000107c61428(lVar2,auStack_60,0,0);
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar2 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar2 + 8))();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1013bd498; end: 1013bd56b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bd498(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d7a158;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar2);
    puVar4 = &UNK_1103adb40;
    func_0x000107c613fc(&UNK_1103adb40,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_1);
    pcVar5 = *(code **)(lVar3 + 0x10);
    func_0x000107c6157c(puVar4);
    (*pcVar5)(0x1013be568,puVar4,uVar2,lVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61578(puVar4,2);
  }
  return;
}



/* Entry: 1013bd56c; end: 1013bd6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bd56c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d7a168;
  if (param_2 != 0) {
    uVar2 = *(ulong *)(param_2 + _DAT_112d7a168);
    func_0x000107c40404();
    if ((uVar2 & 1) == 0) {
      func_0x000107c3d798(*(undefined8 *)(param_2 + lVar1));
      if (*(char *)(param_2 + _DAT_112d7a170) == '\x01') {
        func_0x000107c4db60(param_1);
      }
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1013bd6f8; end: 1013bd75f;  */

void FUN_1013bd6f8(undefined8 *param_1,long param_2)

{
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1013bd760(&uStack_60);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1013bd760; end: 1013bda97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bd760(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  long extraout_x8;
  code *pcVar7;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ed50();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar5 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = puVar5 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x3e);
  if (uVar6 == 0) {
    FUN_1013bdb10();
    func_0x000107c600a8(puVar5);
    func_0x000107c5ed4c(auStack_80);
    puVar1 = PTR___sypN_11034f1a8;
    if (lStack_68 != 0) {
      do {
        func_0x000100102924(auStack_80,auStack_a0);
        func_0x0001000bb420(auStack_a0,auStack_c0);
        uVar3 = 0x112d7a1e0;
        func_0x0001000285a8(0x112d7a1e0,&UNK_10d939bc0);
        puVar4 = &uStack_c8;
        func_0x000107c6147c(puVar4,auStack_c0,puVar1 + 8,uVar3,6);
        uVar3 = uStack_c8;
        if ((int)puVar4 != 0) {
          func_0x000107c4dd88(uStack_c8);
          func_0x000107c615e8(uVar3);
        }
        FUN_1013be67c(auStack_a0);
        func_0x000107c5ed4c(auStack_80);
      } while (lStack_68 != 0);
    }
    pcVar7 = *(code **)(lVar9 + 8);
  }
  else if (uVar6 == 1) {
    FUN_1013bdb10();
    func_0x000107c600a8(puVar8);
    func_0x000107c5ed4c(auStack_80);
    puVar1 = PTR___sypN_11034f1a8;
    if (lStack_68 != 0) {
      do {
        func_0x000100102924(auStack_80,auStack_a0);
        func_0x0001000bb420(auStack_a0,auStack_c0);
        uVar3 = 0x112d7a1e0;
        func_0x0001000285a8(0x112d7a1e0,&UNK_10d939bc0);
        puVar4 = &uStack_c8;
        func_0x000107c6147c(puVar4,auStack_c0,puVar1 + 8,uVar3,6);
        uVar3 = uStack_c8;
        if ((int)puVar4 != 0) {
          func_0x000107c4dd8c(uStack_c8);
          func_0x000107c615e8(uVar3);
        }
        FUN_1013be67c(auStack_a0);
        func_0x000107c5ed4c(auStack_80);
      } while (lStack_68 != 0);
    }
    pcVar7 = *(code **)(lVar9 + 8);
    puVar5 = puVar8;
  }
  else {
    func_0x000107c600a8(puVar8 + -extraout_x12_00);
    func_0x000107c5ed4c(auStack_80);
    puVar1 = PTR___sypN_11034f1a8;
    if (lStack_68 != 0) {
      do {
        func_0x000100102924(auStack_80,auStack_a0);
        func_0x0001000bb420(auStack_a0,auStack_c0);
        uVar3 = 0x112d7a1e0;
        func_0x0001000285a8(0x112d7a1e0,&UNK_10d939bc0);
        puVar4 = &uStack_c8;
        func_0x000107c6147c(puVar4,auStack_c0,puVar1 + 8,uVar3,6);
        uVar3 = uStack_c8;
        if ((int)puVar4 != 0) {
          func_0x000107c4dd8c(uStack_c8);
          func_0x000107c615e8(uVar3);
        }
        FUN_1013be67c(auStack_a0);
        func_0x000107c5ed4c(auStack_80);
      } while (lStack_68 != 0);
    }
    pcVar7 = *(code **)(lVar9 + 8);
    puVar5 = puVar8 + -extraout_x12_00;
  }
  (*pcVar7)(puVar5,lVar2);
  func_0x0001013bdc60(param_1);
  return;
}



/* Entry: 1013bda98; end: 1013bdaaf;  */

void FUN_1013bda98(undefined8 param_1,long param_2)

{
  *(bool *)param_1 = *(ulong *)(param_2 + 0x38) >> 0x3e == 0;
  return;
}



/* Entry: 1013bdab0; end: 1013bdb0f;  */

void FUN_1013bdab0(char *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  if (*param_1 != '\x01') {
    return;
  }
  puVar2 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c4e57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013bdb10);
  (*pcVar1)();
}



/* Entry: 1013bdb10; end: 1013bdebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bdb10(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar2 = 0;
  func_0x000107c5ed50();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  if ((*(byte *)(unaff_x20 + _DAT_112d7a170) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d7a170) = 1;
    func_0x000107c600a8(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ed4c(auStack_70);
    puVar1 = PTR___sypN_11034f1a8;
    if (lStack_58 != 0) {
      do {
        func_0x000100102924(auStack_70,auStack_90);
        func_0x0001000bb420(auStack_90,auStack_b0);
        uVar3 = 0x112d7a1e0;
        func_0x0001000285a8(0x112d7a1e0,&UNK_10d939bc0);
        puVar4 = &uStack_b8;
        func_0x000107c6147c(puVar4,auStack_b0,puVar1 + 8,uVar3,6);
        uVar3 = uStack_b8;
        if ((int)puVar4 != 0) {
          func_0x000107c4db60(uStack_b8);
          func_0x000107c615e8(uVar3);
        }
        FUN_1013be67c(auStack_90);
        func_0x000107c5ed4c(auStack_70);
      } while (lStack_58 != 0);
    }
    (**(code **)(lVar5 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  }
  return;
}



/* Entry: 1013bdec0; end: 1013bdf47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1013bdec0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d7a1a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7a1a0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1013bbeb8();
    func_0x000107c610f8();
    func_0x000107c469a4(0,0,0,0);
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1013bdf48; end: 1013bdf4b;  */

void FUN_1013bdf48(void)

{
  return;
}



/* Entry: 1013bdf4c; end: 1013bdf8f;  */

void FUN_1013bdf4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  func_0x000107c61618(param_3 + 0x10);
  func_0x000107c61170();
  return;
}



/* Entry: 1013bdf90; end: 1013bdfef; -[_TtC20SelfieOnboardingImpl37SelfieOnboardingOneShotViewController initWithNibName:bundle:] */

void FUN_1013bdf90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingImpl.SelfieOnboardingOneShotViewController",0x3a,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013bdfbc);
  (*pcVar1)();
}



/* Entry: 1013bdff0; end: 1013be097; -[_TtC20SelfieOnboardingImpl37SelfieOnboardingOneShotViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013be01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013be03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013be05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013be040) */
/* WARNING: Removing unreachable block (ram,0x0001013be020) */
/* WARNING: Removing unreachable block (ram,0x0001013be060) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bdff0(long param_1)

{
  func_0x0001013be658(param_1 + _DAT_112d7a148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a150));
  return;
}



/* Entry: 1013be098; end: 1013be0b7;  */

void FUN_1013be098(void)

{
  func_0x000107c61168(&PTR_PTR_1127ce7c8);
  return;
}



/* Entry: 1013be0b8; end: 1013be107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013be0b8(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20 + _DAT_112d7a148;
  func_0x000107c61428(lVar1,auStack_38,0,0);
  func_0x000107c61618(lVar1);
  return;
}



/* Entry: 1013be108; end: 1013be277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013be108(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20 + _DAT_112d7a148;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1013be278; end: 1013be2bb; -[_TtC20SelfieOnboardingImpl37SelfieOnboardingOneShotViewController defaultProjectNameV3] */

void FUN_1013be278(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001040707c4();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013be2bc; end: 1013be2e7; -[_TtC20SelfieOnboardingImpl37SelfieOnboardingOneShotViewController defaultSubProjectName] */

void FUN_1013be2bc(void)

{
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3b700);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013be2e8; end: 1013be44f;  */

int FUN_1013be2e8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1013be364;
        goto LAB_1013be348;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1013be348:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1013be364:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1013be450; end: 1013be48f;  */

void FUN_1013be450(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7a1d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939b84;
  func_0x000107c61520(&UNK_10d939b84,&UNK_1103adb00);
  puRam0000000112d7a1d0 = puVar1;
  return;
}



/* Entry: 1013be490; end: 1013be49b;  */

void FUN_1013be490(void)

{
  return;
}



/* Entry: 1013be49c; end: 1013be4db;  */

void FUN_1013be49c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7a1d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac6b0;
  func_0x000107c61520(&UNK_10dcac6b0,&UNK_110723a90);
  puRam0000000112d7a1d8 = puVar1;
  return;
}



/* Entry: 1013be4dc; end: 1013be4e3;  */

void FUN_1013be4dc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1013bd760(&uStack_60);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1013be4e4; end: 1013be52b;  */

void FUN_1013be4e4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1013be52c; end: 1013be56f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013be52c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = lVar1 + _DAT_112d7a148;
    func_0x000107c61428(lVar3,auStack_60,0,0);
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar3 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar3 + 8))();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1013be570; end: 1013be67b;  */

undefined8 FUN_1013be570(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 1013be67c; end: 1013be6b3;  */

void FUN_1013be67c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001013be690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1013be6b4; end: 1013be6bf; -[_TtCC20SelfieOnboardingImpl50SelfieOnboardingOneShotPrivacyPolicyViewController27PrivacyPolicyScreenDelegate oneShotPrivacyPolicyScreenOnAgreeTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013be6b4(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7a238);
  if (pcVar1 != (code *)0x0) {
    func_0x000107c61174();
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013be6c0; end: 1013be6cb; -[_TtCC20SelfieOnboardingImpl50SelfieOnboardingOneShotPrivacyPolicyViewController27PrivacyPolicyScreenDelegate oneShotPrivacyPolicyScreenOnCancelTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013be6c0(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7a240);
  if (pcVar1 != (code *)0x0) {
    func_0x000107c61174();
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013be6cc; end: 1013be6d7; -[_TtCC20SelfieOnboardingImpl50SelfieOnboardingOneShotPrivacyPolicyViewController27PrivacyPolicyScreenDelegate oneShotPrivacyPolicyScreenOnSettingsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013be6cc(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7a248);
  if (pcVar1 != (code *)0x0) {
    func_0x000107c61174();
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013be6d8; end: 1013be72b;  */

void FUN_1013be6d8(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + *param_3);
  if (pcVar1 != (code *)0x0) {
    func_0x000107c61174();
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013be72c; end: 1013be757; -[_TtCC20SelfieOnboardingImpl50SelfieOnboardingOneShotPrivacyPolicyViewController27PrivacyPolicyScreenDelegate init] */

void FUN_1013be72c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingImpl.PrivacyPolicyScreenDelegate",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013be758);
  (*pcVar1)();
}



/* Entry: 1013be758; end: 1013be763;  */

void FUN_1013be758(void)

{
  (*(code *)0x1013bef6c)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013be764; end: 1013be7b7; -[_TtCC20SelfieOnboardingImpl50SelfieOnboardingOneShotPrivacyPolicyViewController27PrivacyPolicyScreenDelegate .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013be784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013be788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013be764(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d7a238) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d7a238))[1]);
    return;
  }
  return;
}



/* Entry: 1013be7b8; end: 1013be80f; -[_TtC20SelfieOnboardingImpl50SelfieOnboardingOneShotPrivacyPolicyViewController initWithCoder:] */

void FUN_1013be7b8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SelfieOnboardingImpl/SelfieOnboardingOneShotPrivacyPolicyViewController.swift"
                      ,0x4d,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013be810);
  (*pcVar1)();
}



/* Entry: 1013be810; end: 1013be86b; -[_TtC20SelfieOnboardingImpl50SelfieOnboardingOneShotPrivacyPolicyViewController viewDidLoad] */

void FUN_1013be810(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  FUN_1013bef4c();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1013be86c();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1013be86c; end: 1013bee8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013be86c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long unaff_x20;
  undefined1 *puVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 auStack_a0 [7];
  undefined1 auStack_68 [8];
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar13 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar12 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar12 - extraout_x12_00;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d7a1e8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      lVar1 = 0;
      func_0x000107c5ede0();
      pcVar15 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
      (*pcVar15)(lVar14,1,1,lVar1);
      (*pcVar15)(lVar13,1,1,lVar1);
      lVar1 = 0;
      func_0x0001046305a8();
      (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar10,1,1,lVar1);
      *(undefined1 *)(lVar9 + -8) = 0;
      *(undefined8 *)(lVar9 + -0x10) = 0;
      *(undefined8 *)(lVar9 + -0x18) = 0;
      *(undefined8 *)(lVar9 + -0x20) = 0;
      *(undefined8 *)(lVar9 + -0x28) = 0;
      *(undefined8 *)(lVar9 + -0x30) = 0;
      *(undefined8 *)(lVar9 + -0x38) = 0;
      *(undefined1 **)(lVar9 + -0x40) = puVar10;
      func_0x000104638e24(lVar9,0x18,lVar14,0,lVar13,0,0,0,0);
      func_0x000103bda44c(0);
      puVar11 = *(ulong **)(unaff_x20 + _DAT_112d7a1f0);
      FUN_100e39298(lVar9,lVar12);
      func_0x000104652fec(0);
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000104651d90(lVar12);
      func_0x000103bda584(puVar11,0,lVar12);
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar11) + 0x80))();
      puVar3 = PTR_PTR_1126a6ca8;
      func_0x000107c610f8(PTR_PTR_1126a6ca8);
      func_0x000107c464a0();
      uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d7a1f8) + _DAT_112fbabe0);
      func_0x000107c5c734(uVar4);
      func_0x000107c61180();
      func_0x000107c53548(puVar3);
      func_0x000107c615e8(uVar4);
      func_0x000107c5a6a4(puVar3);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c55688(puVar3);
      func_0x000107c61170(puVar5);
      puVar5 = PTR_PTR_1126a6cb0;
      func_0x000107c610f8();
      func_0x000107c49520();
      func_0x000107c61180();
      func_0x000107c5a050();
      lVar1 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1013bee7c);
        (*pcVar15)();
      }
      func_0x000107c3d89c();
      func_0x000107c61170();
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x18) = 9;
      *(undefined8 *)(lVar1 + 0x10) = 4;
      puVar6 = puVar5;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      lVar12 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1013bee80);
        (*pcVar15)();
      }
      lVar13 = lVar12;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      puVar7 = puVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar13);
      *(undefined **)(lVar1 + 0x20) = puVar7;
      puVar6 = puVar5;
      func_0x000107c4acb0();
      func_0x000107c61180();
      lVar12 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1013bee84);
        (*pcVar15)();
      }
      lVar13 = lVar12;
      func_0x000107c4acb0();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      puVar7 = puVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar13);
      *(undefined **)(lVar1 + 0x28) = puVar7;
      puVar6 = puVar5;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      lVar12 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1013bee88);
        (*pcVar15)();
      }
      lVar13 = lVar12;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      puVar7 = puVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar13);
      *(undefined **)(lVar1 + 0x30) = puVar7;
      puVar6 = puVar5;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1013bee8c);
        (*pcVar15)();
      }
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar12 = unaff_x20;
      func_0x000107c3ec1c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar8 = puVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar12);
      *(undefined **)(lVar1 + 0x38) = puVar8;
      uVar4 = 0;
      func_0x000100847984(0);
      lVar12 = lVar1;
      func_0x000107c5fc48(lVar1,uVar4);
      func_0x000107c61574(lVar1);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar12);
      func_0x000100e392dc(lVar9);
    }
  }
  return;
}



/* Entry: 1013bee8c; end: 1013beeb7; -[_TtC20SelfieOnboardingImpl50SelfieOnboardingOneShotPrivacyPolicyViewController initWithNibName:bundle:] */

void FUN_1013bee8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingImpl.SelfieOnboardingOneShotPrivacyPolicyViewController",0x47
                      ,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013beeb8);
  (*pcVar1)();
}



/* Entry: 1013beeb8; end: 1013beec3;  */

void FUN_1013beeb8(void)

{
  FUN_1013bef4c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013beec4; end: 1013beef3;  */

void FUN_1013beec4(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013beef4; end: 1013bef4b; -[_TtC20SelfieOnboardingImpl50SelfieOnboardingOneShotPrivacyPolicyViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013bef10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bef30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013bef14) */
/* WARNING: Removing unreachable block (ram,0x0001013bef34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013beef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a1e8));
  return;
}



/* Entry: 1013bef4c; end: 1013bef8b;  */

void FUN_1013bef4c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ce8e0);
  return;
}



/* Entry: 1013bef8c; end: 1013bf283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bef8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d7a278) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a280) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a288) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a290) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a298) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a2a0) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013bf284; end: 1013bf2d7;  */

void FUN_1013bf284(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1013bf2d8();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1013bf2d8; end: 1013bf3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf2d8(void)

{
  code *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  pcVar2 = "oneShotPrivacyPolicyScreenOnAgreeTapped()";
  func_0x0001000c10c0("oneShotPrivacyPolicyScreenOnAgreeTapped()");
  func_0x000107c61180();
  puVar3 = &UNK_1103adc70;
  func_0x000107c613fc(&UNK_1103adc70,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  pcStack_40 = FUN_1013bf564;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103adc88;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar2);
  lVar5 = *(long *)(unaff_x20 + _DAT_112d7a298);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      func_0x000107c56914(lVar6);
      func_0x000107c61170(lVar6);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013bf3fc);
  (*pcVar1)();
}



/* Entry: 1013bf3fc; end: 1013bf4fb;  */

void FUN_1013bf3fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001000c10c0(param_2);
    func_0x000107c61180();
    func_0x000107c613fc(param_3,0x18,7);
    *(long *)(param_3 + 0x10) = param_1;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    ppuVar2 = &puStack_88;
    uStack_70 = param_5;
    uStack_68 = param_4;
    lStack_60 = param_3;
    func_0x000107c60bc4(ppuVar2);
    lVar1 = lStack_60;
    func_0x000107c61174(param_1);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(param_2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 1013bf4fc; end: 1013bf563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf4fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f2e0;
  lVar2 = *(long *)(param_1 + _DAT_112d7a278);
  func_0x000107c61428(lVar2 + _DAT_11302f2e0,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c51d28();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1013bf564; end: 1013bf587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf564(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f2e0;
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d7a278);
  func_0x000107c61428(lVar2 + _DAT_11302f2e0,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c51d28();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1013bf588; end: 1013bf5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf588(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f2e0;
  lVar2 = *(long *)(param_1 + _DAT_112d7a278);
  func_0x000107c61428(lVar2 + _DAT_11302f2e0,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c51d2c();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1013bf5f0; end: 1013bf5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf5f0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f2e0;
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d7a278);
  func_0x000107c61428(lVar2 + _DAT_11302f2e0,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c51d2c();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1013bf5f8; end: 1013bf65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf5f8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f2e0;
  lVar2 = *(long *)(param_1 + _DAT_112d7a278);
  func_0x000107c61428(lVar2 + _DAT_11302f2e0,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c51d30();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1013bf660; end: 1013bf667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf660(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f2e0;
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d7a278);
  func_0x000107c61428(lVar2 + _DAT_11302f2e0,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c51d30();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1013bf668; end: 1013bf6c7; -[_TtC20SelfieOnboardingImpl46SelfieOnboardingUnifiedPrivacyPolicyEntryPoint init] */

void FUN_1013bf668(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingImpl.SelfieOnboardingUnifiedPrivacyPolicyEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013bf694);
  (*pcVar1)();
}



/* Entry: 1013bf6c8; end: 1013bf75f; -[_TtC20SelfieOnboardingImpl46SelfieOnboardingUnifiedPrivacyPolicyEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013bf6e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bf704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bf724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013bf708) */
/* WARNING: Removing unreachable block (ram,0x0001013bf6e8) */
/* WARNING: Removing unreachable block (ram,0x0001013bf728) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf6c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a278));
  return;
}



/* Entry: 1013bf760; end: 1013bf79b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013bf760(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + _DAT_112d7a278) + _DAT_11302f2d0),
                      param_2,0);
  return 0;
}



/* Entry: 1013bf79c; end: 1013bf7a3; -[_TtC20SelfieOnboardingImpl46SelfieOnboardingUnifiedPrivacyPolicyEntryPoint presentationControllerShouldDismiss:] */

undefined8 FUN_1013bf79c(void)

{
  return 0;
}



/* Entry: 1013bf7a4; end: 1013bf7c3;  */

void FUN_1013bf7a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ceab0);
  return;
}



/* Entry: 1013bf7c4; end: 1013bf7d3; -[_TtC20SelfieOnboardingImpl46SelfieOnboardingUnifiedPrivacyPolicyEntryPoint adaptivePresentationStyleForPresentationController:] */

undefined8 FUN_1013bf7c4(void)

{
  return 0;
}



/* Entry: 1013bf7d4; end: 1013bf843;  */

void FUN_1013bf7d4(void)

{
  FUN_1013bf3fc();
  return;
}



/* Entry: 1013bf844; end: 1013bf85b;  */

void FUN_1013bf844(long param_1,long param_2)

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



/* Entry: 1013bf85c; end: 1013bf927;  */

undefined1  [16] FUN_1013bf85c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffda;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef3b9d0);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3ba00);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013bf928);
  (*pcVar1)();
}



/* Entry: 1013bf928; end: 1013bf957;  */

void FUN_1013bf928(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013bf958; end: 1013bf963; -[SCSelfieOnboardingCameraEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf958(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a368;
  func_0x000107c61428(param_1 + _DAT_112d7a368,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013bf964; end: 1013bf96f; -[SCSelfieOnboardingCameraEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf964(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a368;
  func_0x000107c61428(param_1 + _DAT_112d7a368,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013bf970; end: 1013bf97b; -[SCSelfieOnboardingCameraEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf970(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a370;
  func_0x000107c61428(param_1 + _DAT_112d7a370,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013bf97c; end: 1013bf987; -[SCSelfieOnboardingCameraEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf97c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a370;
  func_0x000107c61428(param_1 + _DAT_112d7a370,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013bf988; end: 1013bf993; -[SCSelfieOnboardingCameraEntryPoint valdiCOFStoresServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf988(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a378;
  func_0x000107c61428(param_1 + _DAT_112d7a378,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013bf994; end: 1013bf99f; -[SCSelfieOnboardingCameraEntryPoint setValdiCOFStoresServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a378;
  func_0x000107c61428(param_1 + _DAT_112d7a378,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013bf9a0; end: 1013bf9ab; -[SCSelfieOnboardingCameraEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf9a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a380;
  func_0x000107c61428(param_1 + _DAT_112d7a380,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013bf9ac; end: 1013bf9ef;  */

void FUN_1013bf9ac(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013bf9f0; end: 1013bf9fb; -[SCSelfieOnboardingCameraEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bf9f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a380;
  func_0x000107c61428(param_1 + _DAT_112d7a380,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013bf9fc; end: 1013bfa4f;  */

void FUN_1013bf9fc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013bfa50; end: 1013bfa97; -[SCSelfieOnboardingCameraEntryPoint selfieOnboardingLensLaunchServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bfa50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a388;
  func_0x000107c61428(param_1 + _DAT_112d7a388,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1013bfa98; end: 1013bfafb; -[SCSelfieOnboardingCameraEntryPoint setSelfieOnboardingLensLaunchServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bfa98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a388;
  func_0x000107c61428(param_1 + _DAT_112d7a388,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013bfafc; end: 1013bfd93;  */

/* WARNING: Possible PIC construction at 0x0001013bfcc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bfcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bfce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bfcf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bfd5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bfd6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013bfd4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013bfd70) */
/* WARNING: Removing unreachable block (ram,0x0001013bfd60) */
/* WARNING: Removing unreachable block (ram,0x0001013bfcf4) */
/* WARNING: Removing unreachable block (ram,0x0001013bfce4) */
/* WARNING: Removing unreachable block (ram,0x0001013bfcd4) */
/* WARNING: Removing unreachable block (ram,0x0001013bfcc4) */
/* WARNING: Removing unreachable block (ram,0x0001013bfd50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013bfafc(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar8 = &lStack_70;
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c5dbb4();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c40014();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          func_0x000107c51d20();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            lVar6 = 0;
            FUN_1013bafc0();
            lVar7 = lVar6;
            func_0x000107c610f8();
            puVar1 = (undefined8 *)(lVar7 + _DAT_112d79ed0);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(lVar7 + _DAT_112d79ed8) = 0;
            *(undefined8 *)(lVar7 + _DAT_112d79ee0) = 0;
            *(long *)(lVar7 + _DAT_112d79ee8) = lVar2;
            *(long *)(lVar7 + _DAT_112d79ef0) = lVar3;
            *(long *)(lVar7 + _DAT_112d79ef8) = lVar4;
            *(long *)(lVar7 + _DAT_112d79f00) = lVar5;
            *(long *)(lVar7 + _DAT_112d79f08) = unaff_x20;
            puVar9 = PTR_s_init_1125d9248;
            lStack_70 = lVar7;
            lStack_68 = lVar6;
            func_0x000107c61174(lVar2);
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar4);
            func_0x000107c61174(lVar5);
            func_0x000107c61174(unaff_x20);
            func_0x000107c61154(&lStack_70,puVar9);
            puVar9 = PTR_PTR_1126ae820;
            func_0x000107c610f8(PTR_PTR_1126ae820);
            func_0x000107c453e4();
            FUN_1013c0f4c(0);
            func_0x000107c610f8();
            func_0x000107c61174(puVar9);
            func_0x0001013c0e90();
            func_0x000107c42c20(*(undefined8 *)((long)plVar8 + _DAT_112d79f08));
            FUN_1013ba09c();
            lVar2 = unaff_x20;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1013bfd94; end: 1013bfe37; -[SCSelfieOnboardingCameraEntryPoint begin] */

void FUN_1013bfd94(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013bfafc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013bfe38; end: 1013bfe6b; -[SCSelfieOnboardingCameraEntryPoint end] */

void FUN_1013bfe38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001013bfdbc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013bfe6c; end: 1013c014b;  */

void FUN_1013bfe6c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_1013bfef8;
  }
  if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10d1d30)) ||
         (func_0x000107c605b8(0xd000000000000016,0x800000010ef2e2d0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a474();
      }
      else {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000029;
            if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef10c45e0)) &&
               (func_0x000107c605b8(0xd000000000000029,0x800000010ef3ba20,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SelfieOnboardingImpl/SCSelfieOnboardingCameraEntryPoint.swift",
                                  0x3d,2,0x3f,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c014c);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c58e5c();
            goto LAB_1013bfef8;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c536e0();
      }
      goto LAB_1013bfef8;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53414();
LAB_1013bfef8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1013c014c; end: 1013c01f7; -[SCSelfieOnboardingCameraEntryPoint setValue:forIvarName:] */

void FUN_1013c014c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1013bfe6c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1013c01f8; end: 1013c029f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c01f8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d7a368,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a370,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a378,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a380,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7a388) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a390) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013c02a0; end: 1013c02bf; -[SCSelfieOnboardingCameraEntryPoint init] */

void FUN_1013c02a0(void)

{
  FUN_1013c01f8();
  return;
}



/* Entry: 1013c02c0; end: 1013c02f3;  */

void FUN_1013c02c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013c02f4; end: 1013c036b; -[SCSelfieOnboardingCameraEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013c0350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c0354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c02f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7a368);
  func_0x000107c61610(param_1 + _DAT_112d7a370);
  func_0x000107c61610(param_1 + _DAT_112d7a378);
  func_0x000107c61610(param_1 + _DAT_112d7a380);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a388));
  return;
}



/* Entry: 1013c036c; end: 1013c038b;  */

void FUN_1013c036c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ceb98);
  return;
}



/* Entry: 1013c038c; end: 1013c0397; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c038c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a3c0;
  func_0x000107c61428(param_1 + _DAT_112d7a3c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013c0398; end: 1013c03a3; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c0398(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a3c0;
  func_0x000107c61428(param_1 + _DAT_112d7a3c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013c03a4; end: 1013c03af; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c03a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a3c8;
  func_0x000107c61428(param_1 + _DAT_112d7a3c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013c03b0; end: 1013c03bb; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c03b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a3c8;
  func_0x000107c61428(param_1 + _DAT_112d7a3c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013c03bc; end: 1013c03c7; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c03bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a3d0;
  func_0x000107c61428(param_1 + _DAT_112d7a3d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013c03c8; end: 1013c03d3; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c03c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a3d0;
  func_0x000107c61428(param_1 + _DAT_112d7a3d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013c03d4; end: 1013c03df; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint valdiCOFStoresServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c03d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a3d8;
  func_0x000107c61428(param_1 + _DAT_112d7a3d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013c03e0; end: 1013c03eb; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint setValdiCOFStoresServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c03e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a3d8;
  func_0x000107c61428(param_1 + _DAT_112d7a3d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


