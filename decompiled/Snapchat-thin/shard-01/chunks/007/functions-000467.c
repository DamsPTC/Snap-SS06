/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013a64d0; end: 1013a6707;  */

undefined *
FUN_1013a64d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 != 0) {
      func_0x0001031c06dc();
      func_0x0001031c06dc();
      puVar4 = PTR_PTR_1126a6c58;
      func_0x000107c610f8(PTR_PTR_1126a6c58);
      puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103abe20;
      ppuVar5 = &puStack_90;
      uStack_70 = param_3;
      uStack_68 = param_4;
      func_0x000107c60bc4(ppuVar5);
      puStack_c0 = puVar7;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_1103abe48;
      ppuVar6 = &puStack_c0;
      uStack_a0 = param_1;
      uStack_98 = param_2;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c47c14(puVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61574(uStack_98);
      func_0x000107c61574(uStack_68);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c56918(puVar4);
      func_0x000107c61170(puVar7);
      puVar7 = PTR_PTR_1126a6c60;
      func_0x000107c610f8(PTR_PTR_1126a6c60);
      func_0x000107c49520();
      puVar8 = PTR_PTR_1126afcd0;
      func_0x000107c610f8(PTR_PTR_1126afcd0);
      func_0x000107c49460();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar7);
      return puVar8;
    }
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000022,0x800000010ef3aad0,
                      "GenAISelfieSettingsImpl/SelfieOnboardingSettingsScreenFactory.swift",0x43,2,
                      0x4c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013a6708);
  (*pcVar1)();
}



/* Entry: 1013a6708; end: 1013a675b;  */

void FUN_1013a6708(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013a675c; end: 1013a67af;  */

void FUN_1013a675c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 1013a67b0; end: 1013a67cb;  */

void FUN_1013a67b0(long param_1,long param_2)

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



/* Entry: 1013a67cc; end: 1013a6857;  */

void FUN_1013a67cc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1013a6858; end: 1013a6b57;  */

undefined *
FUN_1013a6858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = *(long *)(param_5 + 0x10);
  if (lVar13 != 0) {
    lVar9 = lVar13;
    func_0x0001013aa100(0,lVar13,0);
    puVar3 = PTR_PTR_1126a6c38;
    func_0x000107c61168();
    do {
      puVar4 = puVar3;
      func_0x000107c5cab8(puVar3);
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5faec();
      lVar10 = lVar9;
      func_0x000107c61170(puVar4);
      puVar4 = puVar3;
      func_0x000107c5c390(puVar3);
      func_0x000107c61180();
      puVar6 = puVar4;
      func_0x000107c5faec();
      lVar11 = lVar10;
      func_0x000107c61170(puVar4);
      puVar4 = puVar3;
      func_0x000107c3cf0c(puVar3);
      func_0x000107c61180();
      puVar7 = puVar4;
      func_0x000107c5faec();
      func_0x000107c61170(puVar4);
      puVar4 = PTR_PTR_1126a6c40;
      func_0x000107c610f8();
      func_0x000107c5fadc(puVar5,lVar9);
      func_0x000107c6142c(lVar9);
      func_0x000107c5fadc(puVar6,lVar10);
      func_0x000107c6142c(lVar10);
      lVar9 = lVar11;
      func_0x000107c5fadc(puVar7);
      func_0x000107c6142c(lVar11);
      func_0x000107c492c8();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013a6b58);
        (*pcVar2)();
      }
      uVar1 = *(ulong *)(puVar12 + 0x10);
      lVar10 = uVar1 + 1;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
        lVar9 = lVar10;
        func_0x0001013aa100(1 < *(ulong *)(puVar12 + 0x18),lVar10,1);
      }
      *(long *)(puVar12 + 0x10) = lVar10;
      *(undefined **)(puVar12 + uVar1 * 8 + 0x20) = puVar4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  puVar3 = PTR_PTR_1126a6c48;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(param_3,param_4);
  uVar8 = 0;
  FUN_1013a6b58(0,0x112d794f0,&PTR_PTR_1126a6c40);
  puVar4 = puVar12;
  func_0x000107c5fc48(puVar12,uVar8);
  func_0x000107c6142c(puVar12);
  func_0x000107c468ac();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar4);
  if (puVar3 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126a6c50;
    func_0x000107c610f8(PTR_PTR_1126a6c50);
    func_0x000107c463c8();
    func_0x000107c61170(puVar3);
  }
  return puVar12;
}



/* Entry: 1013a6b58; end: 1013a6b97;  */

void FUN_1013a6b58(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013a6b98; end: 1013a6baf;  */

void FUN_1013a6b98(long param_1,long param_2)

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



/* Entry: 1013a6bb0; end: 1013a6cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a6bb0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_170 [64];
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d79580);
  lVar4 = puVar1[1];
  uVar2 = *puVar1;
  lVar8 = puVar1[3];
  lVar6 = puVar1[2];
  lVar5 = puVar1[5];
  uVar3 = puVar1[4];
  lVar9 = puVar1[7];
  uVar7 = puVar1[6];
  uStack_b0 = uVar2;
  lStack_a8 = lVar4;
  lStack_a0 = lVar6;
  lStack_98 = lVar8;
  uStack_90 = uVar3;
  lStack_88 = lVar5;
  uStack_80 = uVar7;
  lStack_78 = lVar9;
  if (lVar4 == 0) {
    func_0x0001013ab538();
    uVar3 = param_2;
    lVar5 = param_3;
    func_0x0001013ab604();
    uVar7 = uVar3;
    lVar9 = lVar5;
    func_0x0001013ab6d0();
    lVar6 = lVar9;
    func_0x0001013ab79c();
    func_0x000107c6142c(lVar6);
    func_0x0001013ab868();
    func_0x000107c6142c(lVar6);
    func_0x0001013ab934();
    lVar8 = lVar6;
    func_0x000107c6142c();
    func_0x0001013aba00();
    uStack_e8 = puVar1[1];
    uStack_f0 = *puVar1;
    uStack_d8 = puVar1[3];
    uStack_e0 = puVar1[2];
    uStack_c8 = puVar1[5];
    uStack_d0 = puVar1[4];
    uStack_b8 = puVar1[7];
    uStack_c0 = puVar1[6];
    puVar1[5] = lVar5;
    puVar1[4] = uVar3;
    puVar1[7] = lVar9;
    puVar1[6] = uVar7;
    puVar1[1] = param_3;
    *puVar1 = param_2;
    puVar1[3] = lVar8;
    puVar1[2] = lVar6;
    uStack_130 = param_2;
    lStack_128 = param_3;
    lStack_120 = lVar6;
    lStack_118 = lVar8;
    uStack_110 = uVar3;
    lStack_108 = lVar5;
    uStack_100 = uVar7;
    lStack_f8 = lVar9;
    func_0x0001013aa774(&uStack_130,auStack_170);
    func_0x0001013aa7a8(&uStack_f0);
    lVar4 = param_3;
    uVar2 = param_2;
  }
  func_0x0001013aa7f0(&uStack_b0,&uStack_f0);
  *param_1 = uVar2;
  param_1[1] = lVar4;
  param_1[2] = lVar6;
  param_1[3] = lVar8;
  param_1[4] = uVar3;
  param_1[5] = lVar5;
  param_1[6] = uVar7;
  param_1[7] = lVar9;
  return;
}



/* Entry: 1013a6ce0; end: 1013a6e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013a6ce0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d79560;
  func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
  FUN_1013a4b14();
  lVar2 = lVar1;
  FUN_1013a6e40();
  lVar3 = lVar2;
  func_0x0001013a71d4();
  puVar4 = PTR_PTR_1126a6c68;
  func_0x000107c610f8(PTR_PTR_1126a6c68);
  uVar5 = 0;
  FUN_1013aa9d8(0,0x112d794e8,&PTR_PTR_1126a6c20);
  lVar6 = lVar1;
  func_0x000107c5fc48(lVar1,uVar5);
  func_0x000107c6142c(lVar1);
  uVar5 = 0;
  FUN_1013aa9d8(0,0x112d795b0,&PTR_PTR_1126a6c70);
  lVar1 = lVar2;
  func_0x000107c5fc48(lVar2,uVar5);
  func_0x000107c6142c(lVar2);
  uVar5 = 0;
  FUN_1013aa9d8(0,0x112d795b8,&PTR_PTR_1126a6c78);
  lVar2 = lVar3;
  func_0x000107c5fc48(lVar3,uVar5);
  func_0x000107c6142c(lVar3);
  func_0x000107c492cc(puVar4);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c56918(puVar4);
  func_0x000107c61170(puVar7);
  return puVar4;
}



/* Entry: 1013a6e40; end: 1013a755f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013a6e40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  ulong uVar17;
  long unaff_x20;
  undefined *puVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  lVar9 = unaff_x20 + _DAT_112d79568;
  func_0x0001000a8868(lVar9,*(undefined8 *)(lVar9 + 0x18));
  FUN_1013a4408();
  func_0x000107c61614(auStack_78);
  uVar19 = *(ulong *)(lVar9 + 0x10);
  if (uVar19 == 0) {
    func_0x000107c6142c(lVar9);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1013aa0c4(0,uVar19,0);
    puVar18 = puStack_80;
    func_0x000107c61428(auStack_78,auStack_98,0,0);
    uVar17 = 0;
    puVar20 = (undefined1 *)(lVar9 + 0x48);
    do {
      if (*(ulong *)(lVar9 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1013a71d4);
        (*pcVar8)();
      }
      uVar7 = puVar20[-0x28];
      uVar1 = *(undefined8 *)(puVar20 + -0x20);
      uVar4 = *(undefined8 *)(puVar20 + -0x18);
      uVar2 = *(undefined8 *)(puVar20 + -0x10);
      uVar5 = *(undefined8 *)(puVar20 + -8);
      uVar6 = *puVar20;
      puVar10 = PTR_PTR_1126a6c70;
      func_0x000107c610f8();
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      uVar11 = uVar1;
      func_0x000107c5fadc(uVar1,uVar4);
      uVar12 = uVar2;
      func_0x000107c5fadc(uVar2,uVar5);
      func_0x000107c468a8();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar12);
      puVar13 = &UNK_1103abf98;
      func_0x000107c613fc(&UNK_1103abf98,0x18,7);
      puVar14 = auStack_78;
      func_0x000107c61618(puVar14);
      func_0x000107c61614(puVar13 + 0x10,puVar14);
      func_0x000107c61170(puVar14);
      puVar15 = &UNK_1103ac218;
      func_0x000107c613fc(&UNK_1103ac218,0x41,7);
      *(undefined **)(puVar15 + 0x10) = puVar13;
      puVar15[0x18] = uVar7;
      *(undefined8 *)(puVar15 + 0x20) = uVar1;
      *(undefined8 *)(puVar15 + 0x28) = uVar4;
      *(undefined8 *)(puVar15 + 0x30) = uVar2;
      *(undefined8 *)(puVar15 + 0x38) = uVar5;
      puVar15[0x40] = uVar6;
      uStack_a8 = 0x1013aa870;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      puStack_b8 = (undefined *)0x1013a8da8;
      puStack_b0 = &UNK_1103ac230;
      ppuVar16 = &puStack_c8;
      puStack_a0 = puVar15;
      func_0x000107c60bc4(ppuVar16);
      puVar13 = puStack_a0;
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      func_0x000107c61574(puVar13);
      func_0x000107c59170(puVar10);
      func_0x000107c60bd0(ppuVar16);
      puVar13 = &UNK_1103abf98;
      func_0x000107c613fc(&UNK_1103abf98,0x18,7);
      puVar14 = auStack_78;
      func_0x000107c61618(puVar14);
      func_0x000107c61614(puVar13 + 0x10,puVar14);
      func_0x000107c61170(puVar14);
      puVar15 = &UNK_1103ac268;
      func_0x000107c613fc(&UNK_1103ac268,0x41,7);
      *(undefined **)(puVar15 + 0x10) = puVar13;
      puVar15[0x18] = uVar7;
      *(undefined8 *)(puVar15 + 0x20) = uVar1;
      *(undefined8 *)(puVar15 + 0x28) = uVar4;
      *(undefined8 *)(puVar15 + 0x30) = uVar2;
      *(undefined8 *)(puVar15 + 0x38) = uVar5;
      puVar15[0x40] = uVar6;
      uStack_a8 = 0x1013aa87c;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      puStack_b8 = &UNK_100288f10;
      puStack_b0 = &UNK_1103ac280;
      ppuVar16 = &puStack_c8;
      puStack_a0 = puVar15;
      func_0x000107c60bc4(ppuVar16);
      puVar13 = puStack_a0;
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      func_0x000107c61574(puVar13);
      func_0x000107c52f74(puVar10);
      func_0x000107c60bd0(ppuVar16);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar4);
      uVar3 = *(ulong *)(puVar18 + 0x10);
      puStack_80 = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar3) {
        FUN_1013aa0c4(1 < *(ulong *)(puVar18 + 0x18),uVar3 + 1,1);
      }
      puVar18 = puStack_80;
      uVar17 = uVar17 + 1;
      *(ulong *)(puStack_80 + 0x10) = uVar3 + 1;
      *(undefined **)(puStack_80 + uVar3 * 8 + 0x20) = puVar10;
      puVar20 = puVar20 + 0x30;
    } while (uVar19 != uVar17);
    func_0x000107c6142c(lVar9);
  }
  func_0x000107c61610(auStack_78);
  return puVar18;
}



/* Entry: 1013a7560; end: 1013a7977;  */

/* WARNING: Possible PIC construction at 0x0001013a7684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013a7710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013a7688) */
/* WARNING: Removing unreachable block (ram,0x0001013a7694) */
/* WARNING: Removing unreachable block (ram,0x0001013a7714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a7560(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d79550);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  puVar1[1] = 0;
  *puVar1 = 1;
  FUN_1013aa840(uVar2,uVar3);
  puVar4 = &UNK_1103ac3f8;
  func_0x000107c613fc(&UNK_1103ac3f8,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar5 = &UNK_1103ac420;
  func_0x000107c613fc(&UNK_1103ac420,0x18,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  func_0x000107c61174();
  func_0x000107c61174();
  lVar6 = 0x1013aaa18;
  FUN_1013a64d0(0x1013aaa18,puVar4,FUN_1013aaa3c,puVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  lVar7 = unaff_x20 + _DAT_112d79548;
  func_0x000107c61618();
  if (lVar7 == 0) {
    func_0x000107c61174(lVar6);
    func_0x000107c3e2c0(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d794f8) + _DAT_11302f298));
  }
  else {
    FUN_1013aa9d8(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c61174(lVar6);
    func_0x000107c61174(lVar7);
    func_0x000107c60118();
    lVar6 = lVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1013a7978; end: 1013a7bb7;  */

/* WARNING: Possible PIC construction at 0x0001013a79b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013a79b8) */
/* WARNING: Removing unreachable block (ram,0x0001013a79d0) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a04) */
/* WARNING: Removing unreachable block (ram,0x0001013a79f4) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a08) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a40) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a54) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a68) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a74) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a60) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a4c) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a38) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a78) */
/* WARNING: Removing unreachable block (ram,0x0001013a7aa0) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a84) */
/* WARNING: Removing unreachable block (ram,0x0001013a7ab4) */
/* WARNING: Removing unreachable block (ram,0x0001013a7b68) */
/* WARNING: Removing unreachable block (ram,0x0001013a7abc) */
/* WARNING: Removing unreachable block (ram,0x0001013a7a8c) */
/* WARNING: Removing unreachable block (ram,0x0001013a7acc) */
/* WARNING: Removing unreachable block (ram,0x0001013a7b50) */
/* WARNING: Removing unreachable block (ram,0x0001013a7b04) */

void FUN_1013a7978(undefined8 param_1)

{
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013a7bb8; end: 1013a7daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a7bb8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112d79578;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_11302f2a0;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      func_0x000107c61428(lVar3 + _DAT_11302f2a0,auStack_60,0,0);
      lVar3 = lVar3 + lVar1;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c51d24();
        func_0x000107c615e8(lVar2);
        lVar2 = lVar3;
      }
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1013a7db0; end: 1013a7fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a7db0(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
  puVar3 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (undefined *)0x0) {
    puVar1 = (undefined8 *)(puVar3 + _DAT_112d79550);
    uVar6 = *puVar1;
    uVar2 = puVar1[1];
    puVar1[1] = 0;
    *puVar1 = 1;
    FUN_1013aa840(uVar6,uVar2);
    func_0x0001000a8868(puVar3 + _DAT_112d79538,*(undefined8 *)(puVar3 + _DAT_112d79538 + 0x18));
    if ((param_1 & 1) == 0) {
      FUN_1013a5d04(1,1);
      puVar5 = PTR_PTR_1126afde0;
      func_0x000107c61168(PTR_PTR_1126afde0);
      FUN_1013a6bb0(auStack_80);
      func_0x000107c61434(uStack_48);
      func_0x0001013aa748(auStack_80);
      uVar6 = uStack_50;
      func_0x000107c5fadc(uStack_50,uStack_48);
      func_0x000107c6142c(uStack_48);
      func_0x000107c409d8(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      lVar4 = *(long *)(puVar3 + _DAT_112d79530);
      func_0x000107c5c734();
      func_0x000107c61180();
      puVar7 = puVar5;
      if (lVar4 != 0) {
        func_0x000107c5c2e0();
        func_0x000107c615e8(lVar4);
        puVar7 = puVar3;
        puVar3 = puVar5;
      }
    }
    else {
      FUN_1013a5d04(1,0);
      puVar5 = PTR_PTR_1126afde0;
      func_0x000107c61168(PTR_PTR_1126afde0);
      FUN_1013a6bb0(auStack_80);
      func_0x000107c61434(uStack_58);
      func_0x0001013aa748(auStack_80);
      uVar6 = uStack_60;
      func_0x000107c5fadc(uStack_60,uStack_58);
      func_0x000107c6142c(uStack_58);
      func_0x000107c40b14(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      lVar4 = *(long *)(puVar3 + _DAT_112d79530);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c5c2e0();
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c41864(*(undefined8 *)(*(long *)(puVar3 + _DAT_112d794f8) + _DAT_11302f298));
      puVar7 = puVar3;
      puVar3 = puVar5;
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 1013a7fdc; end: 1013a809b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a7fdc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001000a8868(param_1 + _DAT_112d79538,*(undefined8 *)(param_1 + _DAT_112d79538 + 0x18));
    FUN_1013a5d04(1,2);
    puVar1 = (undefined8 *)(param_1 + _DAT_112d79550);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    puVar1[1] = 0;
    *puVar1 = 1;
    FUN_1013aa840(uVar2,uVar3);
    lVar4 = param_1 + _DAT_112d79548;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c420a8();
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1013a809c; end: 1013a845b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a809c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  lVar3 = 0x6574656c6564;
  func_0x000107c5fadc(0x6574656c6564,0xe600000000000000);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar3;
  func_0x000107c312f4(lVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013a8458);
    (*pcVar2)();
  }
  puVar6 = &UNK_1103ac100;
  func_0x000107c613fc(&UNK_1103ac100,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_1;
  *(undefined8 *)(puVar6 + 0x18) = param_2;
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = (code *)0x1013aaad0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_100de205c;
  puStack_98 = &UNK_1103ac118;
  ppuVar7 = &puStack_b0;
  puStack_88 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  FUN_100caf008(param_1,param_2);
  puVar8 = puVar6;
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61574(puStack_88);
  lVar3 = 0x6c65636e6163;
  func_0x000107c5fadc(0x6c65636e6163,0xe600000000000000);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar3;
  func_0x000107c312f4(lVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    puVar9 = &UNK_1103ac150;
    func_0x000107c613fc(&UNK_1103ac150,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = param_3;
    *(undefined8 *)(puVar9 + 0x18) = param_4;
    pcStack_90 = FUN_1013aa71c;
    puStack_b0 = puVar10;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_100de205c;
    puStack_98 = &UNK_1103ac168;
    ppuVar7 = &puStack_b0;
    puStack_88 = puVar9;
    func_0x000107c60bc4(ppuVar7);
    func_0x000100caf00c(param_3,param_4);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c61574(puStack_88);
    FUN_1013a6bb0(&puStack_b0);
    uVar1 = uStack_a8;
    puVar10 = puStack_b0;
    func_0x000107c61434(uStack_a8);
    func_0x0001013aa748(&puStack_b0);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d79580 + 0x10);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d79580 + 0x18);
    lVar5 = 0x112d360a8;
    FUN_1013a9b14(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 5;
    *(undefined8 *)(lVar5 + 0x10) = 2;
    *(undefined **)(lVar5 + 0x20) = puVar8;
    *(undefined **)(lVar5 + 0x28) = puVar6;
    puVar9 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c61434(uVar11);
    func_0x000107c61174(puVar8);
    func_0x000107c61174(puVar6);
    func_0x000107c5fadc(puVar10,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c5fadc(uVar4,uVar11);
    func_0x000107c6142c(uVar11);
    uVar11 = 0;
    FUN_1013aa9d8(0,0x112d360a8,&PTR_PTR_1126aed70);
    lVar3 = lVar5;
    func_0x000107c5fc48(lVar5,uVar11);
    func_0x000107c61574(lVar5);
    func_0x000107c48d50(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar3);
    lVar5 = unaff_x20 + _DAT_112d79548;
    func_0x000107c61618();
    if (lVar5 != 0) {
      func_0x000107c4f018();
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013a845c);
  (*pcVar2)();
}



/* Entry: 1013a845c; end: 1013a8637;  */

/* WARNING: Possible PIC construction at 0x0001013a8608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013a8618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013a860c) */
/* WARNING: Removing unreachable block (ram,0x0001013a861c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a845c(ulong param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112d79508);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar7 = lVar4;
      func_0x000107c49e78();
      func_0x000107c615e8(lVar4);
      uVar8 = (uint)lVar7 ^ 1;
      goto LAB_1013a84b8;
    }
  }
  uVar8 = 0;
LAB_1013a84b8:
  plVar1 = (long *)(unaff_x20 + _DAT_112d79550);
  if (*plVar1 == 1) {
    lVar4 = unaff_x20 + _DAT_112d79548;
    func_0x000107c61618();
    if (lVar4 != 0) {
      if ((param_1 & 1) == 0) {
        puVar6 = &UNK_1103abf98;
        func_0x000107c613fc(&UNK_1103abf98,0x18,7);
        func_0x000107c61614(puVar6 + 0x10);
        puVar5 = &UNK_1103ac1c8;
        func_0x000107c613fc(&UNK_1103ac1c8,0x20,7);
        puVar5[0x10] = (char)uVar8;
        *(undefined **)(puVar5 + 0x18) = puVar6;
        lVar7 = 0x1013aa85c;
      }
      else {
        puVar5 = (undefined *)0x0;
        lVar7 = 2;
      }
      lVar2 = *plVar1;
      lVar3 = plVar1[1];
      *plVar1 = lVar7;
      plVar1[1] = (long)puVar5;
      FUN_1013aa840(lVar2,lVar3);
      puVar6 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      puVar5 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      func_0x000103f2e0d4(0);
      func_0x000107c610f8();
      func_0x000107c61174(puVar6);
      func_0x000107c61174(puVar5);
      func_0x000107c61174();
      func_0x000103f2de64(puVar6,puVar5,unaff_x20,1,uVar8);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d79518));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar4);
      return;
    }
  }
  return;
}



/* Entry: 1013a8638; end: 1013a877f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a8638(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if ((param_2 & 1) == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112d79548;
    if (param_3 != 0) {
      if ((param_1 & 1) == 0) {
        func_0x000107c61170(param_3);
      }
      else {
        lVar2 = param_3 + _DAT_112d79548;
        func_0x000107c61618();
        if (lVar2 != 0) {
          func_0x000107c61170();
          func_0x000107c61604(param_3 + lVar1,0);
        }
        uVar5 = *(undefined8 *)(*(long *)(param_3 + _DAT_112d794f8) + _DAT_11302f298);
        puVar3 = &UNK_1103abf98;
        func_0x000107c613fc(&UNK_1103abf98,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,param_3);
        uStack_58 = 0x1013aa868;
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0x42000000;
        puStack_68 = &UNK_1000b0c7c;
        puStack_60 = &UNK_1103ac1e0;
        ppuVar4 = &puStack_78;
        puStack_50 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        puVar3 = puStack_50;
        func_0x000107c615f0(uVar5);
        func_0x000107c61574(puVar3);
        func_0x000107c41864(uVar5);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(param_3);
        func_0x000107c615e8(uVar5);
      }
    }
  }
  return;
}



/* Entry: 1013a8780; end: 1013a87d3;  */

void FUN_1013a8780(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001013a7740();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1013a87d4; end: 1013a8903;  */

/* WARNING: Possible PIC construction at 0x0001013a88c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013a88d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013a88c8) */
/* WARNING: Removing unreachable block (ram,0x0001013a88d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a87d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = _DAT_112d79550;
  if (*(long *)(param_1 + _DAT_112d79550) == 1) {
    lVar2 = param_1 + _DAT_112d79548;
    func_0x000107c61618();
    if (lVar2 != 0) {
      ((undefined8 *)(param_1 + lVar1))[1] = 0;
      *(undefined8 *)(param_1 + lVar1) = 2;
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      puVar4 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      func_0x000103f2e0d4(0);
      func_0x000107c610f8();
      func_0x000107c61174(puVar3);
      func_0x000107c61174(puVar4);
      func_0x000107c61174();
      func_0x000103f2de64(puVar3,puVar4,param_1,1,0);
      func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112d79518));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1013a8904; end: 1013a89d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a8904(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + _DAT_112d79550) == 1) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112d79550);
    puVar1[1] = 0;
    *puVar1 = 3;
    puVar3 = &UNK_1103abf98;
    puVar2 = puVar3;
    func_0x000107c613fc(&UNK_1103abf98,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    func_0x000107c613fc(&UNK_1103abf98,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(puVar3);
    FUN_1013a809c(0x1013aa6e0,puVar2,0x1013aa6e8,puVar3);
    func_0x000107c61578(puVar2,2);
    func_0x000107c61578(puVar3,2);
  }
  return;
}



/* Entry: 1013a89d4; end: 1013a8cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013a89d4(ulong param_1,long param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [16];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112d79548;
    func_0x000107c61618();
    if (lVar1 != 0) {
      if ((*param_3 == '\0') && ((param_1 & 1) == 0)) {
        pcVar2 = "featureToggles()";
        func_0x0001000c10c0("featureToggles()");
        func_0x000107c61180();
        uStack_48 = *(undefined8 *)(param_3 + 0x10);
        uStack_50 = *(undefined8 *)(param_3 + 8);
        uStack_58 = *(undefined8 *)(param_3 + 0x20);
        uStack_60 = *(undefined8 *)(param_3 + 0x18);
        puVar3 = &UNK_1103ac358;
        func_0x000107c613fc(&UNK_1103ac358,0x49,7);
        *(long *)(puVar3 + 0x10) = lVar1;
        *(long *)(puVar3 + 0x18) = param_2;
        uVar5 = *(undefined8 *)param_3;
        uVar7 = *(undefined8 *)(param_3 + 0x18);
        uVar6 = *(undefined8 *)(param_3 + 0x10);
        *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(puVar3 + 0x20) = uVar5;
        *(undefined8 *)(puVar3 + 0x38) = uVar7;
        *(undefined8 *)(puVar3 + 0x30) = uVar6;
        uVar5 = *(undefined8 *)(param_3 + 0x19);
        *(undefined8 *)(puVar3 + 0x41) = *(undefined8 *)(param_3 + 0x21);
        *(undefined8 *)(puVar3 + 0x39) = uVar5;
        uStack_88 = 0x1013aa928;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1103ac370;
        ppuVar4 = &puStack_a8;
        puStack_80 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        puVar3 = puStack_80;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(param_2);
        func_0x000100402194(&uStack_50,auStack_b8);
        func_0x000100402194(&uStack_60,auStack_b8);
        func_0x000107c61574(puVar3);
        func_0x000107c4e524(pcVar2);
        func_0x000107c61170(param_2);
        func_0x000107c61170(lVar1);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c615e8(pcVar2);
        return 0;
      }
      func_0x000107c61170(param_2);
      param_2 = lVar1;
    }
    func_0x000107c61170(param_2);
  }
  return 1;
}



/* Entry: 1013a8cc4; end: 1013a8def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a8cc4(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((param_1 & 1) != 0) {
      lVar1 = param_2 + _DAT_112d79548;
      func_0x000107c61618();
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5de64();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        if (lVar2 != 0) {
          puVar3 = PTR_PTR_1126a6c30;
          func_0x000107c61168(PTR_PTR_1126a6c30);
          lVar1 = lVar2;
          func_0x000107c6148c(lVar2,puVar3);
          if (lVar1 != 0) {
            lVar4 = lVar1;
            FUN_1013a6ce0();
            func_0x000107c5a588(lVar1);
            func_0x000107c61170(lVar2);
            lVar2 = param_2;
            param_2 = lVar4;
          }
          func_0x000107c61170(param_2);
          param_2 = lVar2;
        }
      }
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1013a8df0; end: 1013a9113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a8df0(byte param_1,long param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long alStack_c0 [3];
  undefined8 uStack_a8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar6 = &puStack_f0;
  ppuVar8 = &puStack_f0;
  func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
  lVar10 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar10 != 0) {
    FUN_1013aa888(lVar10 + _DAT_112d79568,alStack_c0);
    func_0x000107c61170(lVar10);
    plVar2 = alStack_c0;
    func_0x0001000a8868(plVar2,uStack_a8);
    uVar1 = *(undefined1 *)param_3;
    uStack_68 = param_3[2];
    uStack_70 = param_3[1];
    uStack_78 = param_3[4];
    uStack_80 = param_3[3];
    puVar3 = &UNK_1103ac2b8;
    func_0x000107c613fc(&UNK_1103ac2b8,0x42,7);
    *(long *)(puVar3 + 0x10) = param_2;
    uVar7 = *param_3;
    uVar12 = param_3[3];
    uVar11 = param_3[2];
    *(undefined8 *)(puVar3 + 0x20) = param_3[1];
    *(undefined8 *)(puVar3 + 0x18) = uVar7;
    *(undefined8 *)(puVar3 + 0x30) = uVar12;
    *(undefined8 *)(puVar3 + 0x28) = uVar11;
    uVar7 = *(undefined8 *)((long)param_3 + 0x19);
    *(undefined8 *)(puVar3 + 0x39) = *(undefined8 *)((long)param_3 + 0x21);
    *(undefined8 *)(puVar3 + 0x31) = uVar7;
    puVar3[0x41] = param_1 & 1;
    lVar10 = *(long *)(*plVar2 + 0x18);
    func_0x000107c6157c(param_2);
    func_0x000100402194(&uStack_70,&puStack_f0);
    func_0x000100402194(&uStack_80,&puStack_f0);
    func_0x000107c6157c(param_2);
    func_0x000100402194(&uStack_70,&puStack_f0);
    func_0x000100402194(&uStack_80,&puStack_f0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar10 == 0) {
      func_0x000107c61428(param_2 + 0x10,&puStack_f0,0,0);
      lVar10 = param_2 + 0x10;
      func_0x000107c61618();
      if (lVar10 == 0) {
        func_0x000107c61574(param_2);
        func_0x000107c61574(puVar3);
      }
      else {
        lVar9 = lVar10 + _DAT_112d79578;
        func_0x000107c61618();
        func_0x000107c61574(param_2);
        func_0x000107c61574(puVar3);
        func_0x000107c61170(lVar10);
        if (lVar9 != 0) {
          func_0x000107c615e8(lVar9);
        }
      }
    }
    else {
      puVar4 = &UNK_1103abfc0;
      func_0x000107c613fc(&UNK_1103abfc0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar10);
      puVar5 = &UNK_1103ac2e0;
      func_0x000107c613fc(&UNK_1103ac2e0,0x2a,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(code **)(puVar5 + 0x18) = FUN_1013aa90c;
      *(undefined **)(puVar5 + 0x20) = puVar3;
      puVar5[0x28] = uVar1;
      puVar5[0x29] = param_1 & 1;
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_d0 = (code *)0x1013aa914;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0x42000000;
      puStack_e0 = &UNK_1000f6b44;
      puStack_d8 = &UNK_1103ac2f8;
      puStack_c8 = puVar5;
      func_0x000107c60bc4(&puStack_f0);
      puVar5 = puStack_c8;
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar5);
      uVar7 = 0;
      FUN_1013aa9d8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      pcStack_d0 = FUN_1013aa90c;
      puStack_f0 = puVar4;
      uStack_e8 = 0x42000000;
      puStack_e0 = &UNK_1000b0c7c;
      puStack_d8 = &UNK_1103ac320;
      puStack_c8 = puVar3;
      func_0x000107c60bc4(&puStack_f0);
      puVar4 = puStack_c8;
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c4e560(lVar10);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(param_2);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(lVar10);
    }
    func_0x000100bcb1dc(&uStack_70);
    func_0x000100bcb1dc(&uStack_80);
    func_0x0001000834e4(alStack_c0);
  }
  return;
}



/* Entry: 1013a9114; end: 1013a9167; -[_TtC23GenAISelfieSettingsImpl32SelfieOnboardingSettingsWorkflow generativeAIOnboardingScopeDidCompleteWithCancelled:genAIIdentity:] */

/* WARNING: Possible PIC construction at 0x0001013a9150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013a9154) */

void FUN_1013a9114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1013aa2f8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1013a9168; end: 1013a916b; -[_TtC23GenAISelfieSettingsImpl32SelfieOnboardingSettingsWorkflow generativeAIOnboardingScopeWillCompleteWithCancelled:] */

void FUN_1013a9168(void)

{
  return;
}



/* Entry: 1013a916c; end: 1013a9173; -[_TtC23GenAISelfieSettingsImpl32SelfieOnboardingSettingsWorkflow generativeAIOnboardingScopeGetSettingsExposer] */

void FUN_1013a916c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1013a9174; end: 1013a91d3; -[_TtC23GenAISelfieSettingsImpl32SelfieOnboardingSettingsWorkflow init] */

void FUN_1013a9174(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAISelfieSettingsImpl.SelfieOnboardingSettingsWorkflow",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013a91a0);
  (*pcVar1)();
}



/* Entry: 1013a91d4; end: 1013a930f; -[_TtC23GenAISelfieSettingsImpl32SelfieOnboardingSettingsWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013aa984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013aa994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013aa988) */
/* WARNING: Removing unreachable block (ram,0x0001013aa998) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1013a91d4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d794f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d79500));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d79508));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d79510));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d79518));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d79520));
  func_0x0001000834e4(param_1 + _DAT_112d79528);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d79530));
  func_0x0001000834e4(param_1 + _DAT_112d79538);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d79540));
  func_0x000107c61610(param_1 + _DAT_112d79548);
  FUN_1013aa840(*(undefined8 *)(param_1 + _DAT_112d79550),
                ((undefined8 *)(param_1 + _DAT_112d79550))[1]);
  func_0x0001000834e4(param_1 + _DAT_112d79560);
  func_0x0001000834e4(param_1 + _DAT_112d79568);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d79570));
  FUN_1013aa93c(param_1 + _DAT_112d79578);
  plVar1 = (long *)(param_1 + _DAT_112d79580);
  lVar2 = plVar1[1];
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
              (lVar2,lVar2,plVar1[2],plVar1[3],plVar1[4],plVar1[5],plVar1[6],plVar1[7]);
    return lVar2;
  }
  return *plVar1;
}



/* Entry: 1013a9310; end: 1013a932f;  */

void FUN_1013a9310(void)

{
  func_0x000107c61168(&PTR_PTR_1127cdc98);
  return;
}



/* Entry: 1013a9330; end: 1013a940b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a9330(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d79548;
    func_0x000107c61618();
    lVar4 = param_1;
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        puVar3 = PTR_PTR_1126a6c30;
        func_0x000107c61168(PTR_PTR_1126a6c30);
        lVar1 = lVar2;
        func_0x000107c6148c(lVar2,puVar3);
        lVar4 = lVar2;
        if (lVar1 != 0) {
          lVar4 = lVar1;
          FUN_1013a6ce0();
          func_0x000107c5a588(lVar1);
          func_0x000107c61170(param_1);
          param_1 = lVar2;
        }
        func_0x000107c61170(param_1);
      }
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1013a940c; end: 1013a9473; -[_TtC23GenAISelfieSettingsImpl32SelfieOnboardingSettingsWorkflow bloopsSettingsPolicyViewController:didSelectUserPolicyOption:] */

/* WARNING: Possible PIC construction at 0x0001013a9454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013a9458) */

void FUN_1013a940c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1013aa3bc(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013a9474; end: 1013a94db; -[_TtC23GenAISelfieSettingsImpl32SelfieOnboardingSettingsWorkflow bloopsSettingsPolicyViewController:willSelectUserPolicyOption:] */

/* WARNING: Possible PIC construction at 0x0001013a94bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013a94c0) */

void FUN_1013a9474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1013aa5e0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013a94dc; end: 1013a94ff; -[_TtC23GenAISelfieSettingsImpl32SelfieOnboardingSettingsWorkflow bloopsSettingsPolicyViewControllerWantsToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a94dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + _DAT_112d794f8) + _DAT_11302f298),
             PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1013a9500; end: 1013a95af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a9500(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d79520);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1013a95b0; end: 1013a96bf;  */

undefined8 * FUN_1013a95b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1013a96c0; end: 1013a9723;  */

undefined8 * FUN_1013a96c0(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1013a9724; end: 1013a97f3;  */

int FUN_1013a9724(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1013a97f4; end: 1013a99f3;  */

ulong * FUN_1013a97f4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (((int)uVar1 + -1 < 0) && (uVar2 != 0)) {
    uVar1 = param_2[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
    func_0x000107c6157c(uVar1);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 1013a99f4; end: 1013a9b13;  */

int FUN_1013a99f4(ulong *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffb < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7ffffffc;
  }
  uVar3 = *param_1;
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < uVar2 + 1) {
    iVar1 = uVar2 - 2;
  }
  return iVar1;
}



/* Entry: 1013a9b14; end: 1013a9ca3;  */

void FUN_1013a9b14(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1013aa9d8(0,param_1,param_2);
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



/* Entry: 1013a9ca4; end: 1013a9cc7;  */

ulong FUN_1013a9ca4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013a9f18);
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
  FUN_1013a9f18(uVar2,uVar4,0x112d794e8,&PTR_PTR_1126a6c20,0x112d795e0,&UNK_10d938ae0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013a9f14);
      (*pcVar1)();
    }
    FUN_1013a9fa8(0,uVar2,uVar3 + 0x20,param_4,0x112d794e8,&PTR_PTR_1126a6c20);
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



/* Entry: 1013a9cc8; end: 1013a9db7;  */

undefined * FUN_1013a9cc8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013a9db8);
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
    puVar3 = (undefined *)0x112d795e8;
    func_0x0001000285a8(0x112d795e8,&UNK_10d938ae8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1013a9db8; end: 1013a9f17;  */

ulong FUN_1013a9db8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013a9f18);
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
  FUN_1013a9f18(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013a9f14);
      (*pcVar1)();
    }
    FUN_1013a9fa8(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 1013a9f18; end: 1013a9fa7;  */

undefined *
FUN_1013a9f18(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1013a9b14(param_3,param_4,param_5,param_6);
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



/* Entry: 1013a9fa8; end: 1013aa0c3;  */

long FUN_1013a9fa8(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1013aa0c0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1013aa0c4);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1013aa9d8(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1013aa9d8(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1013aa0bc);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1013aa0c4; end: 1013aa13b;  */

void FUN_1013aa0c4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1013aa13c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1013aa13c; end: 1013aa287;  */

undefined *
FUN_1013aa13c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013aa288);
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
    puVar3 = param_5;
    FUN_1013a9b14(param_5,param_6,param_7,param_8);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1013aa9d8(0,param_5,param_6);
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



/* Entry: 1013aa288; end: 1013aa2f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013aa288(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d79578;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1013aa2f8; end: 1013aa3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013aa2f8(uint param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d79518);
  lVar2 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  plVar1 = (long *)(unaff_x20 + _DAT_112d79550);
  pcVar4 = (code *)*plVar1;
  if ((code *)0x2 < pcVar4 + -1) {
    lVar2 = plVar1[1];
    if (pcVar4 == (code *)0x0) {
      func_0x000100caf00c(0,lVar2);
    }
    else {
      FUN_100caf008(pcVar4,lVar2);
      (*pcVar4)((param_1 ^ 0xffffffff) & 1);
      FUN_1013aa840(pcVar4,lVar2);
    }
  }
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  plVar1[1] = 0;
  *plVar1 = 1;
  if (lVar2 - 1U < 3) {
    return;
  }
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1013aa3bc; end: 1013aa5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013aa3bc(undefined8 param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  ppuVar8 = &puStack_80;
  cVar1 = *(char *)(unaff_x20 + _DAT_112d79558);
  if (cVar1 != '\x04') {
    plVar2 = (long *)(unaff_x20 + _DAT_112d79560);
    func_0x0001000a8868(plVar2,plVar2[3]);
    func_0x000107c5da18();
    uVar3 = 0;
    FUN_1013aa9d8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar4 = &UNK_1103abf98;
    func_0x000107c613fc(&UNK_1103abf98,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    lVar9 = *(long *)(*plVar2 + 0x18);
    func_0x000107c6157c(puVar4);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 == 0) {
      FUN_1013a9330(puVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c61578(puVar4,2);
    }
    else {
      puVar5 = &UNK_1103abfc0;
      func_0x000107c613fc(&UNK_1103abfc0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,lVar9);
      puVar6 = &UNK_1103abfe8;
      func_0x000107c613fc(&UNK_1103abfe8,0x28,7);
      puVar6[0x10] = cVar1;
      *(undefined8 *)(puVar6 + 0x18) = param_1;
      *(undefined **)(puVar6 + 0x20) = puVar5;
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_60 = (code *)0x1013aa6a8;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1103ac000;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      pcStack_60 = FUN_1013aa6a0;
      puStack_80 = puVar5;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000b0c7c;
      puStack_68 = &UNK_1103ac028;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar5 = puStack_58;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c4e560(lVar9);
      func_0x000107c61170(uVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(lVar9);
    }
  }
  return;
}



/* Entry: 1013aa5e0; end: 1013aa69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013aa5e0(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c5da18();
  if (param_1 == 6) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112d794f8) + _DAT_11302f298);
    func_0x000103f2e3c0(0);
    func_0x000107c610f8();
    func_0x000107c615f0(lVar2);
    func_0x000103f2e220();
    lVar1 = _DAT_11302f1c8;
    func_0x000107c61428(lVar2 + _DAT_11302f1c8,auStack_48,1,0);
    func_0x000107c61604(lVar2 + lVar1);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d79520));
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1013aa6a0; end: 1013aa6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013aa6a0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d79548;
    func_0x000107c61618();
    lVar5 = lVar1;
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126a6c30;
        func_0x000107c61168(PTR_PTR_1126a6c30);
        lVar2 = lVar3;
        func_0x000107c6148c(lVar3,puVar4);
        lVar5 = lVar3;
        if (lVar2 != 0) {
          lVar5 = lVar2;
          FUN_1013a6ce0();
          func_0x000107c5a588(lVar2);
          func_0x000107c61170(lVar1);
          lVar1 = lVar3;
        }
        func_0x000107c61170(lVar1);
      }
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 1013aa6f0; end: 1013aa71b;  */

void FUN_1013aa6f0(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013aa71c; end: 1013aa71f;  */

void FUN_1013aa71c(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1013aa720; end: 1013aa83f;  */

void FUN_1013aa720(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1013aa840; end: 1013aa887;  */

void FUN_1013aa840(long param_1,undefined8 param_2)

{
  if (param_1 - 1U < 3) {
    return;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1013aa888; end: 1013aa90b;  */

long FUN_1013aa888(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1013aa90c; end: 1013aa93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013aa90c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar1 = lVar2 + _DAT_112d79578;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1013aa93c; end: 1013aa95f;  */

undefined8 FUN_1013aa93c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1013aa960; end: 1013aa9af;  */

/* WARNING: Possible PIC construction at 0x0001013aa984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013aa994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013aa988) */
/* WARNING: Removing unreachable block (ram,0x0001013aa998) */

void FUN_1013aa960(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1013aa9b0; end: 1013aa9cf;  */

void FUN_1013aa9b0(void)

{
  FUN_1013a7978();
  return;
}



/* Entry: 1013aa9d0; end: 1013aa9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013aa9d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d79578;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_11302f2a0;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      func_0x000107c61428(lVar3 + _DAT_11302f2a0,auStack_60,0,0);
      lVar3 = lVar3 + lVar1;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c51d24();
        func_0x000107c615e8(lVar2);
        lVar2 = lVar3;
      }
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1013aa9d8; end: 1013aaa3b;  */

void FUN_1013aa9d8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013aaa3c; end: 1013aaac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013aaa3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)
              (*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d794f8) + _DAT_11302f298),
             PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1013aaac8; end: 1013aaacb; -[_TtC23GenAISelfieSettingsImpl32SelfieOnboardingSettingsWorkflow selfieCustomSharingPolicySettingsScopeDidCommitUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013aaac8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d79520);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1013aaacc; end: 1013aaadb; -[_TtC23GenAISelfieSettingsImpl32SelfieOnboardingSettingsWorkflow selfieCustomSharingPolicySettingsScopeWantsToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013aaacc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d79520);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1013aaadc; end: 1013abacb;  */

undefined1  [16] FUN_1013aaadc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe3;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef3b0c0);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3ac70);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013aaba8);
  (*pcVar1)();
}



/* Entry: 1013abacc; end: 1013abad7; -[SCSelfieOnboardingSettingsEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abacc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d79648;
  func_0x000107c61428(param_1 + _DAT_112d79648,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013abad8; end: 1013abae3; -[SCSelfieOnboardingSettingsEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d79648;
  func_0x000107c61428(param_1 + _DAT_112d79648,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abae4; end: 1013abaef; -[SCSelfieOnboardingSettingsEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abae4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d79650;
  func_0x000107c61428(param_1 + _DAT_112d79650,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013abaf0; end: 1013abafb; -[SCSelfieOnboardingSettingsEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abaf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d79650;
  func_0x000107c61428(param_1 + _DAT_112d79650,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abafc; end: 1013abb07; -[SCSelfieOnboardingSettingsEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abafc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d79658;
  func_0x000107c61428(param_1 + _DAT_112d79658,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013abb08; end: 1013abb13; -[SCSelfieOnboardingSettingsEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d79658;
  func_0x000107c61428(param_1 + _DAT_112d79658,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abb14; end: 1013abb1f; -[SCSelfieOnboardingSettingsEntryPoint valdiCOFStoresServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d79660;
  func_0x000107c61428(param_1 + _DAT_112d79660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013abb20; end: 1013abb2b; -[SCSelfieOnboardingSettingsEntryPoint setValdiCOFStoresServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d79660;
  func_0x000107c61428(param_1 + _DAT_112d79660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abb2c; end: 1013abb37; -[SCSelfieOnboardingSettingsEntryPoint genAIIdentityServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d79668;
  func_0x000107c61428(param_1 + _DAT_112d79668,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013abb38; end: 1013abb43; -[SCSelfieOnboardingSettingsEntryPoint setGenAIIdentityServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d79668;
  func_0x000107c61428(param_1 + _DAT_112d79668,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abb44; end: 1013abb4f; -[SCSelfieOnboardingSettingsEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d79670;
  func_0x000107c61428(param_1 + _DAT_112d79670,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013abb50; end: 1013abb5b; -[SCSelfieOnboardingSettingsEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d79670;
  func_0x000107c61428(param_1 + _DAT_112d79670,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abb5c; end: 1013abb67; -[SCSelfieOnboardingSettingsEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d79678;
  func_0x000107c61428(param_1 + _DAT_112d79678,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013abb68; end: 1013abb73; -[SCSelfieOnboardingSettingsEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d79678;
  func_0x000107c61428(param_1 + _DAT_112d79678,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abb74; end: 1013abb7f; -[SCSelfieOnboardingSettingsEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d79680;
  func_0x000107c61428(param_1 + _DAT_112d79680,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013abb80; end: 1013abb8b; -[SCSelfieOnboardingSettingsEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d79680;
  func_0x000107c61428(param_1 + _DAT_112d79680,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abb8c; end: 1013abb97; -[SCSelfieOnboardingSettingsEntryPoint dreamsOnboardingScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d79688;
  func_0x000107c61428(param_1 + _DAT_112d79688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013abb98; end: 1013abba3; -[SCSelfieOnboardingSettingsEntryPoint setDreamsOnboardingScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abb98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d79688;
  func_0x000107c61428(param_1 + _DAT_112d79688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abba4; end: 1013abbaf; -[SCSelfieOnboardingSettingsEntryPoint bloopsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abba4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d79690;
  func_0x000107c61428(param_1 + _DAT_112d79690,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013abbb0; end: 1013abbbb; -[SCSelfieOnboardingSettingsEntryPoint setBloopsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abbb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d79690;
  func_0x000107c61428(param_1 + _DAT_112d79690,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abbbc; end: 1013abbc7; -[SCSelfieOnboardingSettingsEntryPoint ctpRepositoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abbbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d79698;
  func_0x000107c61428(param_1 + _DAT_112d79698,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013abbc8; end: 1013abc0b;  */

void FUN_1013abbc8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1013abc0c; end: 1013abc17; -[SCSelfieOnboardingSettingsEntryPoint setCtpRepositoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abc0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d79698;
  func_0x000107c61428(param_1 + _DAT_112d79698,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abc18; end: 1013abc6b;  */

void FUN_1013abc18(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013abc6c; end: 1013abcb3; -[SCSelfieOnboardingSettingsEntryPoint genAIOnboardingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abc6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d796a0;
  func_0x000107c61428(param_1 + _DAT_112d796a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1013abcb4; end: 1013abcbf; -[SCSelfieOnboardingSettingsEntryPoint setGenAIOnboardingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abcb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d796a0;
  func_0x000107c61428(param_1 + _DAT_112d796a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013abcc0; end: 1013abd07; -[SCSelfieOnboardingSettingsEntryPoint dreamsOnboardingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abcc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d796a8;
  func_0x000107c61428(param_1 + _DAT_112d796a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1013abd08; end: 1013abd13; -[SCSelfieOnboardingSettingsEntryPoint setDreamsOnboardingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abd08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d796a8;
  func_0x000107c61428(param_1 + _DAT_112d796a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013abd14; end: 1013abd5b; -[SCSelfieOnboardingSettingsEntryPoint customSharingPolicyScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abd14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d796b0;
  func_0x000107c61428(param_1 + _DAT_112d796b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1013abd5c; end: 1013abd67; -[SCSelfieOnboardingSettingsEntryPoint setCustomSharingPolicyScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d796b0;
  func_0x000107c61428(param_1 + _DAT_112d796b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013abd68; end: 1013abdaf; -[SCSelfieOnboardingSettingsEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abd68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d796b8;
  func_0x000107c61428(param_1 + _DAT_112d796b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}


