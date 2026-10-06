/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012a337c; end: 1012a337f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a337c(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "handleTakeoverOutsideTapped()";
  func_0x0001000c10c0("handleTakeoverOutsideTapped()");
  func_0x000107c61180();
  puVar2 = &UNK_11039c790;
  func_0x000107c613fc(&UNK_11039c790,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  pcStack_40 = FUN_1012a32b0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11039c7a8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  lVar5 = unaff_x20 + _DAT_112d6f040;
  lVar4 = lVar5;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar5 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar5 + 0x20))();
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 1012a3380; end: 1012a339f;  */

void FUN_1012a3380(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2840);
  return;
}



/* Entry: 1012a33a0; end: 1012a33c3;  */

undefined8 FUN_1012a33a0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1012a33c4; end: 1012a33cf;  */

void FUN_1012a33c4(long param_1,long param_2)

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



/* Entry: 1012a33d0; end: 1012a3443; -[_TtC36SaturnPrivacySettingsTakeoverFeature37SaturnPrivacySettingsTakeoverProvider canShowCampaign:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1012a33d0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    if (param_3 == *(long *)(param_1 + _DAT_112d6f0e8) &&
        param_2 == ((long *)(param_1 + _DAT_112d6f0e8))[1]) {
      uVar1 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar1 = (uint)param_3;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 1012a3444; end: 1012a380b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a3444(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long unaff_x20;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d6f0c8);
  *(ulong *)(unaff_x20 + _DAT_112d6f0c8) = param_1;
  uVar6 = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar16);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6f0d0);
  uVar16 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000100b64c10(param_3,param_4);
  FUN_100caae78(uVar16,uVar3);
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1012a380c);
    (*pcVar5)();
  }
  func_0x000107c5db78();
  func_0x000107c61180();
  if (uVar6 == 0) {
    return;
  }
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  uVar8 = uVar6;
  func_0x000107c5c24c();
  func_0x000107c61180();
  uVar7 = 0;
  FUN_100dfa748();
  uVar18 = uVar8;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar8);
  if (uVar18 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar18 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar18) {
      uVar8 = uVar18;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    func_0x000107c6142c(uVar18);
    pcVar5 = (code *)0x0;
    puVar15 = (undefined *)0x0;
  }
  else {
    if ((uVar18 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1012a3808);
        (*pcVar5)();
      }
      uVar16 = *(undefined8 *)(uVar18 + 0x20);
      func_0x000107c61174(uVar16);
    }
    else {
      uVar16 = 0;
      FUN_100df9834(0,uVar18);
    }
    func_0x000107c6142c(uVar18);
    puVar15 = &UNK_11039c888;
    func_0x000107c613fc(&UNK_11039c888,0x18,7);
    *(undefined8 **)(puVar15 + 0x10) = &uStack_70;
    puVar9 = &UNK_11039c8b0;
    uVar7 = 0x20;
    func_0x000107c613fc(&UNK_11039c8b0,0x20,7);
    pcVar5 = FUN_1012a3f54;
    *(code **)(puVar9 + 0x10) = FUN_1012a3f54;
    *(undefined **)(puVar9 + 0x18) = puVar15;
    uStack_80 = 0x1012a3f84;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100df7adc;
    puStack_88 = &UNK_11039c8c8;
    ppuVar10 = &puStack_a0;
    puStack_78 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_78);
    func_0x000107c4c660(uVar16);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(uVar16);
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1012a37f4);
    (*pcVar5)();
  }
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d6f0a0);
  func_0x000107c615f0(param_2);
  uVar8 = uVar6;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (uVar8 == 0) {
    uVar18 = 0;
    uVar7 = 0;
  }
  else {
    uVar18 = uVar8;
    func_0x000107c5faec();
    func_0x000107c61170(uVar8);
  }
  uVar4 = uStack_68;
  uVar3 = uStack_70;
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d6f0b0);
  lVar11 = 0;
  FUN_1012a3380();
  lVar12 = lVar11;
  func_0x000107c610f8();
  lVar14 = lVar12 + _DAT_112d6f040;
  *(undefined8 *)(lVar14 + 8) = 0;
  func_0x000107c61614(lVar14,0);
  *(undefined8 *)(lVar12 + _DAT_112d6f048) = 0;
  *(long *)(lVar12 + _DAT_112d6f050) = param_2;
  *(undefined8 *)(lVar12 + _DAT_112d6f058) = uVar16;
  puVar2 = (ulong *)(lVar12 + _DAT_112d6f060);
  *puVar2 = uVar18;
  puVar2[1] = uVar7;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112d6f068);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(undefined ***)(lVar14 + 8) = &PTR_DAT_11039c800;
  func_0x000107c61604();
  *(undefined8 *)(lVar12 + _DAT_112d6f070) = uVar17;
  puVar9 = PTR_s_init_1125d9248;
  lStack_b0 = lVar12;
  lStack_a8 = lVar11;
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar17);
  plVar13 = &lStack_b0;
  func_0x000107c61154(plVar13,puVar9);
  lVar14 = _DAT_112d6f0d8;
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d6f0d8);
  *(long **)(unaff_x20 + _DAT_112d6f0d8) = plVar13;
  func_0x000107c61170(uVar16);
  lVar14 = *(long *)(unaff_x20 + lVar14);
  if (lVar14 != 0) {
    uVar16 = *(undefined8 *)(lVar14 + _DAT_112d6f050);
    func_0x000107c61174();
    lVar12 = lVar14;
    FUN_1012a2c38();
    func_0x000107c3e2c0(uVar16);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar12);
  }
  FUN_1012a380c();
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uStack_68);
  FUN_100caae78(pcVar5,puVar15);
  return;
}



/* Entry: 1012a380c; end: 1012a390b;  */

/* WARNING: Possible PIC construction at 0x0001012a3864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a38e4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a380c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6f0c8);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d6f0c0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d6f0a8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112d6f0e0);
      func_0x00010018cc3c(lVar2);
      lVar1 = lVar2;
      func_0x000107c5f9dc();
      func_0x000107c6142c(lVar2);
      func_0x000107c4c4bc(lVar3);
      func_0x000107c615e8(lVar3);
    }
  }
  else {
    func_0x000107c5a59c();
    lVar1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1012a390c; end: 1012a39d3; -[_TtC36SaturnPrivacySettingsTakeoverFeature37SaturnPrivacySettingsTakeoverProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x0001012a39b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a39b4) */

void FUN_1012a390c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_11039c860;
    func_0x000107c613fc(&UNK_11039c860,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x1012a3f48;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1012a3444(param_3,param_4,uVar3,puVar2);
  FUN_100caae78(uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1012a39d4; end: 1012a3a33; -[_TtC36SaturnPrivacySettingsTakeoverFeature37SaturnPrivacySettingsTakeoverProvider init] */

void FUN_1012a39d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnPrivacySettingsTakeoverFeature.SaturnPrivacySettingsTakeoverProvider",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a3a00);
  (*pcVar1)();
}



/* Entry: 1012a3a34; end: 1012a3af3; -[_TtC36SaturnPrivacySettingsTakeoverFeature37SaturnPrivacySettingsTakeoverProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012a3ad4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a3ad8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a3a34(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f0a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f0a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f0b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f0b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f0c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f0c8));
  FUN_100caae78(*(undefined8 *)(param_1 + _DAT_112d6f0d0),
                ((undefined8 *)(param_1 + _DAT_112d6f0d0))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f0d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d6f0e0));
  return;
}



/* Entry: 1012a3af4; end: 1012a3b13;  */

void FUN_1012a3af4(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2930);
  return;
}



/* Entry: 1012a3b14; end: 1012a3d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a3b14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  int iVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar6 = &puStack_80;
  lVar8 = *(long *)(unaff_x20 + _DAT_112d6f0c8);
  if (lVar8 != 0) {
    puVar1 = PTR_PTR_1126b8900;
    func_0x000107c61168(PTR_PTR_1126b8900);
    func_0x000107c61174();
    puVar2 = puVar1;
    func_0x000107c5b450(puVar1);
    func_0x000107c61180();
    lVar5 = lVar8;
    func_0x000107c4dd4c();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar3 = lVar5;
      func_0x000107c3cfdc();
      if ((int)lVar3 == 0x21) {
        lVar3 = lVar5;
        func_0x000107c58b98();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1012a3d84);
          (*pcVar10)();
        }
        lVar4 = lVar3;
        func_0x000107c4f270();
        func_0x000107c61170(lVar3);
        iVar11 = (int)lVar4;
        if (iVar11 == 1) {
          func_0x000107c51620(puVar1);
        }
        else if ((iVar11 == 2) || (iVar11 != 3)) {
          func_0x000107c5b450(puVar1);
        }
        else {
          func_0x000107c4d6e0(puVar1);
        }
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        puVar2 = puVar1;
      }
      func_0x000107c61170(lVar5);
    }
    lVar5 = *(long *)(unaff_x20 + _DAT_112d6f0b8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      pcStack_60 = FUN_1012a3d84;
      uStack_58 = 0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_1012a3d88;
      puStack_68 = &UNK_11039c828;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c5d5e8(lVar5);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lVar5);
    }
    lVar5 = *(long *)(unaff_x20 + _DAT_112d6f0a8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d6f0e0);
      func_0x00010018cc3c(uVar7);
      uVar9 = uVar7;
      func_0x000107c5f9dc();
      func_0x000107c6142c(uVar7);
      func_0x000107c4c4c0(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(uVar9);
    }
    pcVar10 = *(code **)(unaff_x20 + _DAT_112d6f0d0);
    if (pcVar10 == (code *)0x0) {
      func_0x000107c61170(lVar8);
    }
    else {
      uVar9 = ((undefined8 *)(unaff_x20 + _DAT_112d6f0d0))[1];
      func_0x000107c6157c(uVar9);
      (*pcVar10)();
      func_0x000107c61170(lVar8);
      FUN_100caae78(pcVar10,uVar9);
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1012a3d84; end: 1012a3d87;  */

void FUN_1012a3d84(void)

{
  return;
}



/* Entry: 1012a3d88; end: 1012a3f23;  */

/* WARNING: Possible PIC construction at 0x0001012a3de4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a3de8) */

void FUN_1012a3d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1012a3f24; end: 1012a3f53;  */

/* WARNING: Possible PIC construction at 0x0001012a3864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a38e4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a3f24(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6f0c8);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d6f0c0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d6f0a8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112d6f0e0);
      func_0x00010018cc3c(lVar2);
      lVar1 = lVar2;
      func_0x000107c5f9dc();
      func_0x000107c6142c(lVar2);
      func_0x000107c4c4bc(lVar3);
      func_0x000107c615e8(lVar3);
    }
  }
  else {
    func_0x000107c5a59c();
    lVar1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1012a3f54; end: 1012a3fa3;  */

void FUN_1012a3f54(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1012a3fa4; end: 1012a3fb3;  */

void FUN_1012a3fa4(long param_1,long param_2)

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



/* Entry: 1012a3fb4; end: 1012a401b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1012a3fb4(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d6f148;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d6f148);
  lVar3 = lVar2;
  if (lVar2 == 1) {
    FUN_1012a401c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = param_1;
    func_0x000107c61174();
    FUN_1012a4af4(uVar4);
    lVar3 = param_1;
  }
  func_0x0001012a4b04(lVar2);
  return lVar3;
}



/* Entry: 1012a401c; end: 1012a42f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a401c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6f118);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d6f128))[1];
      if (lVar1 == 0) {
        uVar12 = 0;
        lVar11 = -0x2000000000000000;
      }
      else {
        uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d6f128);
        lVar11 = lVar1;
      }
      lVar15 = ((undefined8 *)(unaff_x20 + _DAT_112d6f130))[1];
      if (lVar15 == 0) {
        uVar14 = 0;
        lVar13 = -0x2000000000000000;
      }
      else {
        uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d6f130);
        lVar13 = lVar15;
      }
      puVar3 = PTR_PTR_1126a68a8;
      func_0x000107c610f8(PTR_PTR_1126a68a8);
      func_0x000107c61434(lVar1);
      func_0x000107c61434(lVar15);
      func_0x000107c5fadc(uVar12,lVar11);
      func_0x000107c6142c(lVar11);
      func_0x000107c5fadc(uVar14,lVar13);
      func_0x000107c6142c(lVar13);
      func_0x000107c48d84(puVar3);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar14);
      pcVar4 = *(char **)(unaff_x20 + _DAT_112d6f138);
      func_0x000107c5c734();
      func_0x000107c61180();
      pcVar5 = pcVar4;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(pcVar4);
      if (pcVar5 == (char *)0x0) {
        FUN_1012a4b14(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
        pcVar5 = "";
        func_0x000107c60124("",0,2);
      }
      func_0x000107c52d0c(puVar3);
      func_0x000107c61170(pcVar5);
      puVar8 = &UNK_11039c908;
      puVar6 = puVar8;
      func_0x000107c613fc(&UNK_11039c908,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = puVar8;
      func_0x000107c613fc(&UNK_11039c908,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      func_0x000107c613fc(&UNK_11039c908,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      puVar9 = PTR_PTR_1126a68b0;
      func_0x000107c610f8(PTR_PTR_1126a68b0);
      pcVar10 = FUN_1012a4b54;
      FUN_1012a49d4(FUN_1012a4b54,puVar6,0x1012a4b5c,puVar7,0x1012a4b64,puVar8,puVar9);
      puVar8 = PTR_PTR_1126a68b8;
      func_0x000107c610f8(PTR_PTR_1126a68b8);
      func_0x000107c61174(puVar3);
      func_0x000107c61174(pcVar10);
      func_0x000107c49520(puVar8);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(pcVar10);
      func_0x000107c61170(pcVar10);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1012a42f4; end: 1012a436b; -[_TtC36SaturnPrivacySettingsTakeoverFeature43SaturnPrivacySettingsTakeoverViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012a42f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = param_1 + _DAT_112d6f120;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112d6f148;
  *(undefined8 *)(param_1 + _DAT_112d6f148) = 1;
  FUN_1012a33a0();
  FUN_1012a4af4(*(undefined8 *)(param_1 + lVar1));
  func_0x000107c61464(param_1,lVar2,0x58,7);
  return 0;
}



/* Entry: 1012a436c; end: 1012a46e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a436c(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  
  puVar2 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_loadView_112604be0);
  FUN_1012a3fb4();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a46d4);
      (*pcVar1)();
    }
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c3d89c(lVar9);
    func_0x000107c61170(lVar9);
    func_0x000107c5a050(puVar2);
    puVar3 = puVar2;
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar3 + 0x18) = 9;
    *(undefined8 *)(puVar3 + 0x10) = 4;
    puVar4 = puVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a46d8);
      (*pcVar1)();
    }
    lVar5 = lVar9;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    puVar6 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar5);
    *(undefined1 **)(puVar3 + 0x20) = puVar6;
    puVar4 = puVar2;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a46dc);
      (*pcVar1)();
    }
    lVar5 = lVar9;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    puVar6 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar5);
    *(undefined1 **)(puVar3 + 0x28) = puVar6;
    puVar4 = puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a46e0);
      (*pcVar1)();
    }
    lVar5 = lVar9;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    puVar6 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar5);
    *(undefined1 **)(puVar3 + 0x30) = puVar6;
    puVar4 = puVar2;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a46e4);
      (*pcVar1)();
    }
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = lVar9;
    func_0x000107c5cbe4(lVar9);
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    puVar6 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar5);
    *(undefined1 **)(puVar3 + 0x38) = puVar6;
    uVar8 = 0;
    FUN_1012a4b14(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar4 = puVar3;
    func_0x000107c5fc48(puVar3,uVar8);
    func_0x000107c61574(puVar3);
    func_0x000107c3d048(puVar7);
    func_0x000107c61170(puVar4);
    lVar9 = unaff_x20 + _DAT_112d6f120;
    lVar5 = lVar9;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar9 = *(long *)(lVar9 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar9 + 8))();
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1012a46e4; end: 1012a470b; -[_TtC36SaturnPrivacySettingsTakeoverFeature43SaturnPrivacySettingsTakeoverViewController loadView] */

void FUN_1012a46e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012a436c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012a470c; end: 1012a48bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a470c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112d6f120;
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar2 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar2 + 0x18))();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012a48bc; end: 1012a491b; -[_TtC36SaturnPrivacySettingsTakeoverFeature43SaturnPrivacySettingsTakeoverViewController initWithNibName:bundle:] */

void FUN_1012a48bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnPrivacySettingsTakeoverFeature.SaturnPrivacySettingsTakeoverViewController"
                      ,0x50,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a48e8);
  (*pcVar1)();
}



/* Entry: 1012a491c; end: 1012a49ab; -[_TtC36SaturnPrivacySettingsTakeoverFeature43SaturnPrivacySettingsTakeoverViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012a4938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a4980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a493c) */
/* WARNING: Removing unreachable block (ram,0x0001012a4984) */
/* WARNING: Removing unreachable block (ram,0x0001012a4af4) */
/* WARNING: Removing unreachable block (ram,0x0001012a4b00) */
/* WARNING: Removing unreachable block (ram,0x0001012a4afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a491c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6f118));
  return;
}



/* Entry: 1012a49ac; end: 1012a49cb;  */

void FUN_1012a49ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2a38);
  return;
}



/* Entry: 1012a49cc; end: 1012a49d3; -[_TtC36SaturnPrivacySettingsTakeoverFeature43SaturnPrivacySettingsTakeoverViewController pageViewName] */

undefined8 FUN_1012a49cc(void)

{
  return 0x8a;
}



/* Entry: 1012a49d4; end: 1012a4af3;  */

undefined8
FUN_1012a49d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11039c920;
  ppuVar2 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_11039c948;
  ppuVar3 = &puStack_c0;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  func_0x000107c60bc4(ppuVar3);
  puStack_f0 = puVar1;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1000f6b44;
  puStack_d8 = &UNK_11039c970;
  uStack_d0 = param_5;
  uStack_c8 = param_6;
  func_0x000107c60bc4(&puStack_f0);
  func_0x000107c47c54();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_68);
  return unaff_x20;
}



/* Entry: 1012a4af4; end: 1012a4b13;  */

void FUN_1012a4af4(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1012a4b14; end: 1012a4b53;  */

void FUN_1012a4b14(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012a4b54; end: 1012a4b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4b54(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = lVar1 + _DAT_112d6f120;
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar3 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar3 + 0x18))();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012a4b98; end: 1012a4ba3; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4b98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f178;
  func_0x000107c61428(param_1 + _DAT_112d6f178,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a4ba4; end: 1012a4baf; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f178;
  func_0x000107c61428(param_1 + _DAT_112d6f178,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a4bb0; end: 1012a4bbb; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4bb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f180;
  func_0x000107c61428(param_1 + _DAT_112d6f180,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a4bbc; end: 1012a4bc7; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f180;
  func_0x000107c61428(param_1 + _DAT_112d6f180,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a4bc8; end: 1012a4bd3; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4bc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f188;
  func_0x000107c61428(param_1 + _DAT_112d6f188,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a4bd4; end: 1012a4bdf; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f188;
  func_0x000107c61428(param_1 + _DAT_112d6f188,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a4be0; end: 1012a4beb; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4be0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f190;
  func_0x000107c61428(param_1 + _DAT_112d6f190,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a4bec; end: 1012a4bf7; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f190;
  func_0x000107c61428(param_1 + _DAT_112d6f190,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a4bf8; end: 1012a4c03; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint saturnExperimentProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4bf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f198;
  func_0x000107c61428(param_1 + _DAT_112d6f198,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a4c04; end: 1012a4c0f; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint setSaturnExperimentProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f198;
  func_0x000107c61428(param_1 + _DAT_112d6f198,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a4c10; end: 1012a4c1b; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4c10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f1a0;
  func_0x000107c61428(param_1 + _DAT_112d6f1a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a4c1c; end: 1012a4c5f;  */

void FUN_1012a4c1c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012a4c60; end: 1012a4c6b; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f1a0;
  func_0x000107c61428(param_1 + _DAT_112d6f1a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a4c6c; end: 1012a4cbf;  */

void FUN_1012a4c6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a4cc0; end: 1012a4feb;  */

/* WARNING: Possible PIC construction at 0x0001012a4ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a4ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a4f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a4f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a4fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a4fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a4f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a4f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a4f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a4f9c) */
/* WARNING: Removing unreachable block (ram,0x0001012a4f8c) */
/* WARNING: Removing unreachable block (ram,0x0001012a4fbc) */
/* WARNING: Removing unreachable block (ram,0x0001012a4fac) */
/* WARNING: Removing unreachable block (ram,0x0001012a4f14) */
/* WARNING: Removing unreachable block (ram,0x0001012a4f04) */
/* WARNING: Removing unreachable block (ram,0x0001012a4ef4) */
/* WARNING: Removing unreachable block (ram,0x0001012a4ee4) */
/* WARNING: Removing unreachable block (ram,0x0001012a4f7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a4cc0(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c3e8cc();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar6 = unaff_x20;
      func_0x000107c5d9b4();
      func_0x000107c61180();
      if (lVar6 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar7 = unaff_x20;
        func_0x000107c5161c();
        func_0x000107c61180();
        if (lVar7 != 0) {
          func_0x000107c42eb0();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            FUN_1012a2c18();
            func_0x000107c613fc();
            func_0x000107c5dbd4();
            func_0x000107c61180();
            func_0x000107c43b5c();
            func_0x000107c61180();
            lVar7 = lVar6;
            func_0x000107c3e980();
            func_0x000107c61180();
            func_0x000107c5162c();
            func_0x000107c61180();
            func_0x000107c42eac();
            func_0x000107c61180();
            if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012a4fec);
              (*pcVar2)();
            }
            lVar8 = 0;
            FUN_1012a3af4();
            lVar9 = lVar8;
            func_0x000107c610f8();
            *(undefined8 *)(lVar9 + _DAT_112d6f0c8) = 0;
            puVar1 = (undefined8 *)(lVar9 + _DAT_112d6f0d0);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(lVar9 + _DAT_112d6f0d8) = 0;
            *(undefined **)(lVar9 + _DAT_112d6f0e0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
            puVar1 = (undefined8 *)(lVar9 + _DAT_112d6f0e8);
            *puVar1 = 0xd000000000000028;
            puVar1[1] = 0x800000010ef33620;
            *(long *)(lVar9 + _DAT_112d6f0a0) = lVar4;
            *(long *)(lVar9 + _DAT_112d6f0a8) = lVar5;
            *(long *)(lVar9 + _DAT_112d6f0b0) = lVar7;
            *(long *)(lVar9 + _DAT_112d6f0b8) = lVar6;
            *(long *)(lVar9 + _DAT_112d6f0c0) = unaff_x20;
            lStack_70 = lVar9;
            lStack_68 = lVar8;
            func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
            func_0x000107c4e9e4(lVar3);
            func_0x000107c61180();
            func_0x000107c4fba8();
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1012a4fec; end: 1012a5013; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint begin] */

void FUN_1012a4fec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012a4cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012a5014; end: 1012a5057; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint end] */

void FUN_1012a5014(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a5058; end: 1012a539f;  */

void FUN_1012a5058(long param_1,long param_2,long param_3)

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
    goto LAB_1012a50e4;
  }
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000019;
      if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10eeea0)) ||
         (func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52c50();
      }
      else {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10ced70)) ||
               (func_0x000107c605b8(0xd000000000000020,0x800000010ef31290,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c58b94();
            }
            else {
              uVar2 = 0xd000000000000017;
              if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef230)) &&
                 (func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SaturnPrivacySettingsTakeoverFeature/SCSaturnPrivacySettingsTakeoverFeatureEntryPoint.swift"
                                    ,0x5b,2,0x3c,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a53a0);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5491c();
            }
            goto LAB_1012a50e4;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a368();
      }
      goto LAB_1012a50e4;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c536e0();
LAB_1012a50e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012a53a0; end: 1012a544b; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint setValue:forIvarName:] */

void FUN_1012a53a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012a5058(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012a544c; end: 1012a550f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a544c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d6f178,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6f180,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6f188,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6f190,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6f198,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6f1a0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6f1a8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012a5510; end: 1012a552f; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint init] */

void FUN_1012a5510(void)

{
  FUN_1012a544c();
  return;
}



/* Entry: 1012a5530; end: 1012a5563;  */

void FUN_1012a5530(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012a5564; end: 1012a55eb; -[SCSaturnPrivacySettingsTakeoverFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a5564(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6f178);
  func_0x000107c61610(param_1 + _DAT_112d6f180);
  func_0x000107c61610(param_1 + _DAT_112d6f188);
  func_0x000107c61610(param_1 + _DAT_112d6f190);
  func_0x000107c61610(param_1 + _DAT_112d6f198);
  func_0x000107c61610(param_1 + _DAT_112d6f1a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6f1a8));
  return;
}



/* Entry: 1012a55ec; end: 1012a560b;  */

void FUN_1012a55ec(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2b28);
  return;
}



/* Entry: 1012a560c; end: 1012a5613; -[_TtC46SetSaturnPrivacySettingsBillboardActionHandler46SetSaturnPrivacySettingsBillboardActionHandler actionHandlerType] */

undefined8 FUN_1012a560c(void)

{
  return 0x21;
}



/* Entry: 1012a5614; end: 1012a5757;  */

/* WARNING: Possible PIC construction at 0x0001012a56f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a56f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a5614(undefined1 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6f1d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c4db74();
    func_0x000107c61180();
    if (param_1 == (undefined1 *)0x0) {
      return;
    }
    (**(code **)(param_1 + 0x10))();
  }
  else {
    func_0x000107c61168(PTR_PTR_1126b8900);
    func_0x000107c5b450();
    func_0x000107c61180();
    puVar2 = &UNK_11039ca28;
    func_0x000107c613fc(&UNK_11039ca28,0x18,7);
    *(undefined1 **)(puVar2 + 0x10) = param_1;
    pcStack_50 = FUN_1012a5880;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1012a3d88;
    puStack_58 = &UNK_11039ca40;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c5d5e8(lVar1);
    param_1 = (undefined1 *)ppuVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_1);
  return;
}



/* Entry: 1012a5758; end: 1012a579f;  */

void FUN_1012a5758(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c4db74();
  func_0x000107c61180();
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(param_3);
    return;
  }
  return;
}



/* Entry: 1012a57a0; end: 1012a57ef; -[_TtC46SetSaturnPrivacySettingsBillboardActionHandler46SetSaturnPrivacySettingsBillboardActionHandler handleOnTapActionWithContext:] */

/* WARNING: Possible PIC construction at 0x0001012a57d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a57dc) */

void FUN_1012a57a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012a5614(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012a57f0; end: 1012a584f; -[_TtC46SetSaturnPrivacySettingsBillboardActionHandler46SetSaturnPrivacySettingsBillboardActionHandler init] */

void FUN_1012a57f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SetSaturnPrivacySettingsBillboardActionHandler.SetSaturnPrivacySettingsBillboardActionHandler"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a581c);
  (*pcVar1)();
}



/* Entry: 1012a5850; end: 1012a585f; -[_TtC46SetSaturnPrivacySettingsBillboardActionHandler46SetSaturnPrivacySettingsBillboardActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a5850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6f1d8));
  return;
}



/* Entry: 1012a5860; end: 1012a587f;  */

void FUN_1012a5860(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2c10);
  return;
}



/* Entry: 1012a5880; end: 1012a58a3;  */

void FUN_1012a5880(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4db74();
  func_0x000107c61180();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012a58a4; end: 1012a597b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012a58a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c5162c();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_1012a5860();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d6f1d8) = uVar1;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  uVar1 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 1012a597c; end: 1012a5997;  */

void FUN_1012a597c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012a5998; end: 1012a59b7;  */

void FUN_1012a5998(void)

{
  func_0x000107c61168(&PTR_PTR_112d6f248);
  return;
}



/* Entry: 1012a59b8; end: 1012a59c3; -[SCSetSaturnPrivacySettingsBillboardActionHandlerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a59b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f2a0;
  func_0x000107c61428(param_1 + _DAT_112d6f2a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a59c4; end: 1012a59cf; -[SCSetSaturnPrivacySettingsBillboardActionHandlerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a59c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f2a0;
  func_0x000107c61428(param_1 + _DAT_112d6f2a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a59d0; end: 1012a59db; -[SCSetSaturnPrivacySettingsBillboardActionHandlerEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a59d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f2a8;
  func_0x000107c61428(param_1 + _DAT_112d6f2a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a59dc; end: 1012a5a1f;  */

void FUN_1012a59dc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012a5a20; end: 1012a5a2b; -[SCSetSaturnPrivacySettingsBillboardActionHandlerEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a5a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f2a8;
  func_0x000107c61428(param_1 + _DAT_112d6f2a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a5a2c; end: 1012a5a7f;  */

void FUN_1012a5a2c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a5a80; end: 1012a5bc7; -[SCSetSaturnPrivacySettingsBillboardActionHandlerEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001012a5b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a5b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a5b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a5ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a5b64) */
/* WARNING: Removing unreachable block (ram,0x0001012a5b54) */
/* WARNING: Removing unreachable block (ram,0x0001012a5b84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a5a80(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  lVar4 = param_1;
  if (lVar1 != 0) {
    func_0x000107c5d9b4();
    func_0x000107c61180();
    lVar4 = lVar1;
    if (param_1 != 0) {
      FUN_1012a5998(0);
      func_0x000107c613fc();
      func_0x000107c5162c();
      func_0x000107c61180();
      lVar2 = 0;
      FUN_1012a5860();
      lVar3 = lVar2;
      func_0x000107c610f8();
      *(long *)(lVar3 + _DAT_112d6f1d8) = param_1;
      lStack_50 = lVar3;
      lStack_48 = lVar2;
      func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
      func_0x000107c4e9e4(lVar1);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1012a5bc8; end: 1012a5c0b; -[SCSetSaturnPrivacySettingsBillboardActionHandlerEntryPoint end] */

void FUN_1012a5bc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a5c0c; end: 1012a5da3;  */

void FUN_1012a5c0c(long param_1,long param_2,long param_3)

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
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SetSaturnPrivacySettingsBillboardActionHandler/SCSetSaturnPrivacySettingsBillboardActionHandlerEntryPoint.swift"
                            ,0x6f,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a5da4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a368();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012a5da4; end: 1012a5e4f; -[SCSetSaturnPrivacySettingsBillboardActionHandlerEntryPoint setValue:forIvarName:] */

void FUN_1012a5da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012a5c0c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012a5e50; end: 1012a5ec3; -[SCSetSaturnPrivacySettingsBillboardActionHandlerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a5e50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6f2a0,0);
  func_0x000107c61614(param_1 + _DAT_112d6f2a8,0);
  *(undefined8 *)(param_1 + _DAT_112d6f2b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012a5ec4; end: 1012a5ef7;  */

void FUN_1012a5ec4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012a5ef8; end: 1012a5f3f; -[SCSetSaturnPrivacySettingsBillboardActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a5ef8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6f2a0);
  func_0x000107c61610(param_1 + _DAT_112d6f2a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6f2b0));
  return;
}



/* Entry: 1012a5f40; end: 1012a5f5f;  */

void FUN_1012a5f40(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2cd0);
  return;
}



/* Entry: 1012a5f60; end: 1012a5f7b;  */

void FUN_1012a5f60(void)

{
  return;
}



/* Entry: 1012a5f7c; end: 1012a5fe3; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a5f7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d6f2e0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1012a5fe4; end: 1012a604b; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor setIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a5fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d6f2e0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1012a604c; end: 1012a608f; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor priority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012a604c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f2e8;
  func_0x000107c61428(param_1 + _DAT_112d6f2e8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1012a6090; end: 1012a60df; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor setPriority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a6090(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f2e8;
  func_0x000107c61428(param_1 + _DAT_112d6f2e8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1012a60e0; end: 1012a610b;  */

void FUN_1012a60e0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f84118;
  func_0x000107c5faec();
  ppuRam0000000112d6f2f8 = ppuVar1;
  uRam0000000112d6f300 = param_2;
  return;
}



/* Entry: 1012a610c; end: 1012a616b; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor init] */

void FUN_1012a610c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CalendarDeeplink.CalendarDeeplinkProcessor",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a6138);
  (*pcVar1)();
}



/* Entry: 1012a616c; end: 1012a61d7; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012a619c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a61a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a616c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6f2e0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6f308));
  return;
}



/* Entry: 1012a61d8; end: 1012a626b; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor canProvideProcessorForFeature:] */

uint FUN_1012a61d8(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  func_0x000107c5faec();
  if (lRam0000000112d6f2f0 != -1) {
    func_0x000107c61568(0x112d6f2f0,FUN_1012a60e0);
  }
  if (param_3 == lRam0000000112d6f2f8 && param_2 == lRam0000000112d6f300) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 1012a626c; end: 1012a633b; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor isValidDeepLink:] */

uint FUN_1012a626c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c615f0(param_3);
  lVar1 = param_3;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    if (lRam0000000112d6f2f0 != -1) {
      func_0x000107c61568(0x112d6f2f0,FUN_1012a60e0);
    }
    if (lVar2 == lRam0000000112d6f2f8 && param_2 == lRam0000000112d6f300) {
      uVar3 = 1;
    }
    else {
      func_0x000107c605b8(lVar2,param_2,lRam0000000112d6f2f8,lRam0000000112d6f300,0);
      uVar3 = (uint)lVar2;
    }
    func_0x000107c6142c(param_2);
  }
  func_0x000107c615e8(param_3);
  return uVar3 & 1;
}



/* Entry: 1012a633c; end: 1012a633f; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor makeDeepLinkProcessor] */

void FUN_1012a633c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1012a6340; end: 1012a63c7;  */

void FUN_1012a6340(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((param_1 & 1) == 0) {
      FUN_1012a63c8(param_3,param_4,param_5);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1012a63c8; end: 1012a699f;  */

void FUN_1012a63c8(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_150 [80];
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [80];
  
  puVar10 = auStack_150;
  uVar1 = param_1;
  uVar9 = param_2;
  func_0x000107c4e434(param_1,param_2,1);
  func_0x000107c61180();
  uVar3 = uVar9;
  if (uVar1 == 0) {
LAB_1012a6470:
    uVar1 = param_1;
    func_0x000107c4e434();
    func_0x000107c61180();
    uVar9 = uVar3;
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5faec();
      uVar9 = uVar3;
      func_0x000107c61170(uVar1);
      if ((uVar2 == 0x705f6c6961746564) && (uVar3 == 0xeb00000000656761)) {
        func_0x000107c6142c(0xeb00000000656761);
      }
      else {
        uVar9 = uVar3;
        func_0x000107c605b8(uVar2,uVar3,0x705f6c6961746564,0xeb00000000656761,0);
        func_0x000107c6142c(uVar3);
        if ((uVar2 & 1) == 0) goto LAB_1012a65a8;
      }
      func_0x000107c4e438();
      func_0x000107c61180();
      if (param_1 != 0) {
        uVar3 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        uVar1 = uVar3 & 0xffffffffffff;
        if ((uVar9 & 0x2000000000000000) != 0) {
          uVar1 = uVar9 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          FUN_1012a6b14(uVar3,uVar9,param_2);
          func_0x000107c6142c(uVar9);
          param_2 = uVar3;
          goto joined_r0x0001012a65a0;
        }
        func_0x000107c6142c(uVar9);
      }
      lVar5 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar5 + 0x20) = uVar4;
      puVar8 = PTR___sSSN_11034da80;
      *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
      *(undefined1 **)(lVar5 + 0x28) = puVar10;
      *(undefined8 *)(lVar5 + 0x30) = 0xd000000000000013;
      *(undefined8 *)(lVar5 + 0x38) = 0x800000010ef33950;
      lVar6 = lVar5;
      func_0x000100214a84(lVar5);
      func_0x000107c61588(lVar5);
      FUN_100f15a0c((undefined8 *)(lVar5 + 0x20));
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar4 = 0xd000000000000019;
      func_0x000107c5fadc(0xd000000000000019,0x800000010d930e60);
      lVar5 = lVar6;
      func_0x000107c5f9dc(lVar6,puVar8,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar6);
      goto LAB_1012a693c;
    }
LAB_1012a65a8:
    func_0x000107c4e434();
    func_0x000107c61180();
    if (param_1 == 0) {
LAB_1012a6740:
      lVar5 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar10 = auStack_b0;
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar5 + 0x20) = uVar4;
      puVar8 = PTR___sSSN_11034da80;
      *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
      *(undefined1 **)(lVar5 + 0x28) = puVar10;
      *(undefined8 *)(lVar5 + 0x30) = 0xd00000000000001a;
      *(undefined8 *)(lVar5 + 0x38) = 0x800000010ef33910;
      lVar6 = lVar5;
      func_0x000100214a84(lVar5);
      func_0x000107c61588(lVar5);
      FUN_100f15a0c((undefined8 *)(lVar5 + 0x20));
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar4 = 0xd000000000000019;
      func_0x000107c5fadc(0xd000000000000019,0x800000010d930e60);
      lVar5 = lVar6;
      func_0x000107c5f9dc(lVar6,puVar8,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar6);
      goto LAB_1012a693c;
    }
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    if ((uVar1 == 0x6761705f7473696c) && (uVar9 == 0xe900000000000065)) {
      func_0x000107c6142c(0xe900000000000065);
    }
    else {
      func_0x000107c605b8(uVar1,uVar9,0x6761705f7473696c,0xe900000000000065,0);
      func_0x000107c6142c(uVar9);
      if ((uVar1 & 1) == 0) goto LAB_1012a6740;
    }
    FUN_1012a6c38();
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    if (uVar2 == 0x705f657461657263 && uVar9 == 0xeb00000000656761) {
      func_0x000107c6142c(uVar9);
    }
    else {
      uVar3 = uVar9;
      func_0x000107c605b8(uVar2,uVar9,0x705f657461657263,0xeb00000000656761,0);
      func_0x000107c6142c(uVar9);
      if ((uVar2 & 1) == 0) goto LAB_1012a6470;
    }
    FUN_1012a6a14();
  }
joined_r0x0001012a65a0:
  if ((param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0a6890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_logFinalOutcomeOnDestinationPage_112607430,0);
    return;
  }
  lVar5 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar10 = auStack_100;
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar5 + 0x20) = uVar4;
  puVar8 = PTR___sSSN_11034da80;
  *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar5 + 0x28) = puVar10;
  *(undefined8 *)(lVar5 + 0x30) = 0xd00000000000001a;
  *(undefined8 *)(lVar5 + 0x38) = 0x800000010ef33930;
  lVar6 = lVar5;
  func_0x000100214a84(lVar5);
  func_0x000107c61588(lVar5);
  FUN_100f15a0c((undefined8 *)(lVar5 + 0x20));
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar4 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010d930e60);
  lVar5 = lVar6;
  func_0x000107c5f9dc(lVar6,puVar8,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
LAB_1012a693c:
  func_0x000107c466bc(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar5);
  puVar8 = puVar7;
  func_0x000107c5ed2c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c42808(param_3);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 1012a69a0; end: 1012a6a07; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1012a69a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1012a6e8c(param_3,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012a6a08; end: 1012a6a0f; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor shouldForceNavigation] */

undefined8 FUN_1012a6a08(void)

{
  return 0;
}



/* Entry: 1012a6a10; end: 1012a6a13; -[_TtC16CalendarDeeplink25CalendarDeeplinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1012a6a10(void)

{
  return;
}



/* Entry: 1012a6a14; end: 1012a6b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1012a6a14(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6f308) + _DAT_112febe30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_11039cb60;
    func_0x000107c613fc(&UNK_11039cb60,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    func_0x000103b1157c(0);
    func_0x000107c610f8();
    func_0x000107c615f0(param_1);
    uVar3 = 0;
    func_0x000103b108f8(0,0,4,param_1,0x1012a737c,puVar2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    func_0x000107c4eeb0(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 1012a6b14; end: 1012a6c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1012a6b14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6f308) + _DAT_112febe30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    puVar2 = &UNK_11039cb60;
    func_0x000107c613fc(&UNK_11039cb60,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_50 = 0x1012a7378;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11039cba0;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c4eeb8(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
  }
  return lVar1 != 0;
}



/* Entry: 1012a6c38; end: 1012a6d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1012a6c38(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6f308) + _DAT_112febe30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_11039cb60;
    func_0x000107c613fc(&UNK_11039cb60,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_40 = FUN_1012a7358;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11039cbc8;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4eebc(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c60bd0(ppuVar3);
  }
  return lVar1 != 0;
}



/* Entry: 1012a6d30; end: 1012a6da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a6d30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d6f318;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c42804(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}


