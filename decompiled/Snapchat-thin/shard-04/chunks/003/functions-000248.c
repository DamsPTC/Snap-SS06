/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033bf3e0; end: 1033bf3ef;  */

undefined1  [16] FUN_1033bf3e0(void)

{
  return ZEXT816(0x11064cd48);
}



/* Entry: 1033bf3f0; end: 1033bf427;  */

void FUN_1033bf3f0(undefined8 param_1)

{
  if (lRam0000000112f624a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e761624);
  return;
}



/* Entry: 1033bf428; end: 1033bf49b;  */

long FUN_1033bf428(ulong param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = param_1;
  func_0x000107c5edac();
  if ((uVar3 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    plVar1 = (long *)(param_1 + (long)*(int *)(param_3 + 0x14));
    lVar4 = *plVar1;
    plVar2 = (long *)(param_2 + *(int *)(param_3 + 0x14));
    if (lVar4 != *plVar2 || plVar1[1] != plVar2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return lVar4;
    }
    lVar4 = 1;
  }
  return lVar4;
}



/* Entry: 1033bf49c; end: 1033bf4b7;  */

void FUN_1033bf49c(void)

{
  uRam0000000113807280 = 0;
  puRam0000000113807288 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return;
}



/* Entry: 1033bf4b8; end: 1033bf4f7;  */

undefined8 FUN_1033bf4b8(void)

{
  if (lRam0000000112f62440 != -1) {
    func_0x000107c61568(0x112f62440,FUN_1033bf49c);
  }
  return 0x113807280;
}



/* Entry: 1033bf4f8; end: 1033bf58b;  */

long * FUN_1033bf4f8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    func_0x000107c61434();
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1033bf58c; end: 1033bf5d3;  */

void FUN_1033bf58c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  return;
}



/* Entry: 1033bf5d4; end: 1033bf77f;  */

long FUN_1033bf5d4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1033bf780; end: 1033bf797;  */

void FUN_1033bf780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1033bf798; end: 1033bf807;  */

void FUN_1033bf798(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dbbeb20;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 1033bf808; end: 1033bf80f;  */

void FUN_1033bf808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1033bf810; end: 1033bf8cb;  */

undefined2 * FUN_1033bf810(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1033bf8cc; end: 1033bf967;  */

int FUN_1033bf8cc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033bf968; end: 1033bf9b7;  */

undefined8 FUN_1033bf968(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f1c258;
  func_0x0001000285a8(0x112f1c258,&UNK_10dbbeb60);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1033bf9b8; end: 1033bfac3;  */

long FUN_1033bf9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  func_0x000107c61614(unaff_x20 + 0x68,0);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined1 *)(unaff_x20 + 0x80) = 1;
  *(undefined8 *)(unaff_x20 + 0x88) = 2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return unaff_x20;
}



/* Entry: 1033bfac4; end: 1033bfb53;  */

ulong FUN_1033bfac4(ulong param_1)

{
  code *pcVar1;
  ulong uStack_28;
  
  if (5 < param_1) {
    uStack_28 = param_1;
    func_0x000107c60614(&UNK_1106a2d58,&uStack_28,&UNK_1106a2d58,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033bfb54);
    (*pcVar1)();
  }
  func_0x0001000d224c(&uStack_28);
  return uStack_28;
}



/* Entry: 1033bfb54; end: 1033c0363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1033bfb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *unaff_x20;
  undefined8 uVar23;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  uVar22 = *unaff_x20;
  puVar3 = param_5;
  FUN_1033bfac4();
  if (puVar3 == (undefined *)0x0) {
    func_0x0001007d6c6c(3,0xd000000000000023,0x800000010f148360,uVar22,&PTR_DAT_11064cf40);
  }
  else {
    unaff_x20[0xf] = param_5;
    *(undefined1 *)(unaff_x20 + 0x10) = 0;
    uVar6 = unaff_x20[5];
    puVar7 = (undefined *)unaff_x20[6];
    func_0x000107c615f0(uVar6);
    func_0x000107c6157c(puVar7);
    func_0x000107c61434(param_4);
    pcVar4 = "GamesExplorerQueryContextFeedAdapter";
    func_0x0001000c10c0("GamesExplorerQueryContextFeedAdapter");
    func_0x000107c61180();
    func_0x000107c614f0();
    uVar21 = 0xb;
    uVar5 = uVar6;
    puVar20 = puVar7;
    FUN_1033bbf20(0x4024000000000000);
    func_0x000107c615e8(uVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c615e8(pcVar4);
    uVar6 = 0;
    func_0x0001033be244();
    ppuStack_a0 = &PTR_DAT_11064ca50;
    puStack_c0 = puVar20;
    puStack_a8 = (undefined *)uVar6;
    func_0x000107c61428(unaff_x20 + 7,&puStack_f0,0x21,0);
    func_0x000107c6157c(puVar20);
    FUN_1033c09f8(&puStack_c0,unaff_x20 + 7);
    func_0x000107c614a8(&puStack_f0);
    uVar6 = unaff_x20[0xc];
    unaff_x20[0xc] = uVar21;
    func_0x000107c6157c(uVar21);
    func_0x000107c61574(uVar6);
    puVar7 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
    func_0x000107c61168();
    puVar8 = puVar7;
    func_0x000107c41030();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c5d9c8();
    func_0x000107c61170(puVar8);
    puVar8 = puVar7;
    func_0x000107c41030();
    func_0x000107c61180();
    puVar10 = puVar8;
    func_0x000107c5d9c8();
    func_0x000107c61170(puVar8);
    lVar12 = 1;
    if (puVar10 != (undefined *)0x2) {
      lVar12 = 2;
    }
    lVar13 = 2;
    if (puVar9 == (undefined *)0x0) {
      lVar13 = lVar12;
    }
    lVar12 = 1;
    if (puVar9 != (undefined *)0x2) {
      lVar12 = lVar13;
    }
    uVar6 = 1;
    func_0x000107c61428(unaff_x20 + 0x11,auStack_90,1,0);
    unaff_x20[0x11] = lVar12;
    uVar11 = 0;
    FUN_1033c1e7c(0);
    func_0x000107c610f8();
    func_0x0001033c1130(lVar12,uVar11);
    func_0x000107c61604(unaff_x20 + 0xd,lVar12);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c5677c();
    uVar11 = unaff_x20[0xe];
    unaff_x20[0xe] = param_1;
    func_0x000107c615e8(uVar11);
    func_0x000107c615f0(param_1);
    func_0x000107c3e2c0();
    lVar13 = lVar12;
    func_0x000107c5ce94();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    lVar14 = lVar13;
    func_0x000107c5d9c8();
    func_0x000107c61170(lVar13);
    func_0x000107c41030();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c5d9c8();
    func_0x000107c61170(puVar7);
    if (lVar14 != 2) {
      if (lVar14 == 0) {
        uVar6 = 1;
        if (puVar8 != (undefined *)0x2) {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 2;
      }
    }
    unaff_x20[0x11] = uVar6;
    *(undefined8 *)(lVar12 + _DAT_112f625e8) = uVar6;
    lVar13 = lVar12;
    func_0x000107c4a714();
    if ((int)lVar13 != 0) {
      lVar13 = lVar12;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c0340);
        (*pcVar2)();
      }
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c52b50(lVar13);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(puVar7);
      lVar13 = lVar12 + _DAT_112f625e0;
      func_0x000107c61618();
      if (lVar13 != 0) {
        puVar7 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
        func_0x000107c61168(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
        lVar14 = lVar13;
        func_0x000107c6148c(lVar13,puVar7);
        if (lVar14 != 0) {
          FUN_1033c14f0();
        }
        func_0x000107c61170(lVar13);
      }
    }
    puVar7 = &UNK_11064ce00;
    puVar15 = puVar7;
    func_0x000107c613fc(&UNK_11064ce00,0x18,7);
    func_0x000107c61614(puVar15 + 0x10,lVar12);
    puVar8 = &UNK_11064ce28;
    func_0x000107c613fc(&UNK_11064ce28,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,puVar3);
    puVar9 = &UNK_11064ce50;
    func_0x000107c613fc(&UNK_11064ce50,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar15;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    *(undefined8 *)(puVar9 + 0x20) = uVar22;
    func_0x000107c613fc(&UNK_11064ce00,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar12);
    func_0x000107c6157c(puVar15);
    func_0x000107c6157c(puVar8);
    func_0x000107c61170(lVar12);
    puVar10 = &UNK_11064ce78;
    func_0x000107c613fc(&UNK_11064ce78,0x18,7);
    func_0x000107c61644(puVar10 + 0x10);
    puVar16 = &UNK_11064cea0;
    func_0x000107c613fc(&UNK_11064cea0,0x28,7);
    *(undefined **)(puVar16 + 0x10) = puVar10;
    *(undefined **)(puVar16 + 0x18) = puVar7;
    *(undefined8 *)(puVar16 + 0x20) = uVar22;
    puVar17 = PTR_PTR_1126aeaf8;
    func_0x000107c610f8(PTR_PTR_1126aeaf8);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_a0 = (undefined **)FUN_1033c0a48;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100e1779c;
    puStack_a8 = &UNK_11064ceb8;
    ppuVar18 = &puStack_c0;
    puStack_98 = puVar9;
    func_0x000107c60bc4(ppuVar18);
    pcStack_d0 = FUN_1033c0a80;
    puStack_f0 = puVar1;
    uStack_e8 = 0x42000000;
    puStack_e0 = &UNK_100e17304;
    puStack_d8 = &UNK_11064cee0;
    ppuVar19 = &puStack_f0;
    puStack_c8 = puVar16;
    func_0x000107c60bc4(ppuVar19);
    func_0x000107c6157c(puVar10);
    func_0x000107c6157c(puVar7);
    func_0x000107c47be0(puVar17);
    func_0x000107c60bd0(ppuVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c61574(puStack_c8);
    puVar9 = puStack_98;
    func_0x000107c61574(puVar15);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar9);
    uVar11 = unaff_x20[0x11];
    func_0x00010436fe50(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar17);
    uVar6 = 0;
    func_0x00010436fbe4(0,0,0,0,uVar11);
    puVar7 = PTR_PTR_1126b1b50;
    func_0x000107c61168(PTR_PTR_1126b1b50);
    func_0x000107c41638();
    func_0x000107c61180();
    if ((long)param_5 < 3) {
      if (param_5 == (undefined *)0x0) {
        uVar23 = 0x800000010f10e7a0;
        uVar11 = 0xd000000000000012;
      }
      else if (param_5 == (undefined *)0x1) {
        uVar23 = 0xe800000000000000;
        uVar11 = 0x6b6e696c70656564;
      }
      else {
        if (param_5 != (undefined *)0x2) {
LAB_1033c0340:
          puStack_c0 = param_5;
          func_0x000107c60614(&UNK_1106a2d58,&puStack_c0,&UNK_1106a2d58,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c0364);
          (*pcVar2)();
        }
        uVar23 = 0x800000010f10e780;
        uVar11 = 0xd000000000000011;
      }
    }
    else if (param_5 == (undefined *)0x3) {
      uVar23 = 0xef796172745f7261;
      uVar11 = 0x625f6e6f69746361;
    }
    else if (param_5 == (undefined *)0x4) {
      uVar23 = 0xeb00000000726577;
      uVar11 = 0x6172645f74616863;
    }
    else {
      if (param_5 != (undefined *)0x5) goto LAB_1033c0340;
      uVar23 = 0x800000010f10e720;
      uVar11 = 0xd000000000000017;
    }
    func_0x000107c5fadc(uVar11,uVar23);
    func_0x000107c6142c(uVar23);
    func_0x000107c4ef0c(puVar3);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar11);
    func_0x0001007d6c6c(1,0xd000000000000018,0x800000010f148390,uVar22,&PTR_DAT_11064cf40);
    func_0x000107c61574(uVar21);
    func_0x000107c61574(puVar20);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar12);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(puVar17);
  }
  return puVar3 != (undefined *)0x0;
}



/* Entry: 1033c0364; end: 1033c0413;  */

void FUN_1033c0364(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_11064cfc0;
    func_0x000107c613fc(&UNK_11064cfc0,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    func_0x000107c6157c(param_3);
    FUN_1033c0b64(param_1,0x1033c0b1c,puVar1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 1033c0414; end: 1033c049b;  */

void FUN_1033c0414(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x0001007d6c6c(1,0xd000000000000015,0x800000010f148460,param_2,&PTR_DAT_11064cf40);
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c42058();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1033c049c; end: 1033c063f;  */

void FUN_1033c049c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  ppuVar3 = &puStack_b0;
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lVar4 = *(long *)(param_3 + 0x70);
    if (lVar4 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c615f0(lVar4);
      func_0x0001007d6c6c(1,0xd000000000000017,0x800000010f148440,param_5,&PTR_DAT_11064cf40);
      pcStack_90 = (code *)0x0;
      uStack_a8 = 0;
      puStack_b0 = (undefined *)0x0;
      puStack_98 = (undefined *)0x0;
      puStack_a0 = (undefined *)0x0;
      func_0x000107c61428(param_3 + 0x38,auStack_80,0x21,0);
      FUN_1033c09f8(&puStack_b0,param_3 + 0x38);
      func_0x000107c614a8(auStack_80);
      uVar1 = *(undefined8 *)(param_3 + 0x60);
      *(undefined8 *)(param_3 + 0x60) = 0;
      func_0x000107c61574(uVar1);
      *(undefined8 *)(param_3 + 0x78) = 0;
      *(undefined1 *)(param_3 + 0x80) = 1;
      puVar2 = &UNK_11064cf70;
      func_0x000107c613fc(&UNK_11064cf70,0x28,7);
      *(undefined8 *)(puVar2 + 0x10) = param_4;
      *(undefined8 *)(puVar2 + 0x18) = param_1;
      *(undefined8 *)(puVar2 + 0x20) = param_2;
      pcStack_90 = FUN_1033c0b10;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1000b0c7c;
      puStack_98 = &UNK_11064cf88;
      puStack_88 = puVar2;
      func_0x000107c60bc4(&puStack_b0);
      puVar2 = puStack_88;
      func_0x000107c6157c(param_4);
      func_0x000100b64c10(param_1,param_2);
      func_0x000107c61574(puVar2);
      func_0x000107c41864(lVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61574(param_3);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1033c0640; end: 1033c085b;  */

void FUN_1033c0640(long param_1,code *param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1033c0fe4(0,0);
    func_0x000107c61170(param_1);
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1033c085c; end: 1033c08d7;  */

void FUN_1033c085c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_1033c0aa8(unaff_x20 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61610(unaff_x20 + 0x68);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1033c08d8; end: 1033c08e3;  */

void FUN_1033c08d8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakLoadStrong_11034f590)(*unaff_x20 + 0x68);
  return;
}



/* Entry: 1033c08e4; end: 1033c09d3;  */

void FUN_1033c08e4(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x38,auStack_38,0,0);
  FUN_1033bf968(lVar1 + 0x38,param_1);
  return;
}



/* Entry: 1033c09d4; end: 1033c09f7;  */

void FUN_1033c09d4(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001033c09e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1033c09f8; end: 1033c0a47;  */

undefined8 FUN_1033c09f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f1c258;
  func_0x0001000285a8(0x112f1c258,&UNK_10dbbeb60);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1033c0a48; end: 1033c0a53;  */

void FUN_1033c0a48(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = &UNK_11064cfc0;
    func_0x000107c613fc(&UNK_11064cfc0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar1;
    *(undefined8 *)(puVar3 + 0x18) = uVar4;
    func_0x000107c6157c(uVar1);
    FUN_1033c0b64(param_1,0x1033c0b1c,puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 1033c0a54; end: 1033c0a7f;  */

void FUN_1033c0a54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033c0a80; end: 1033c0aa7;  */

void FUN_1033c0a80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_b0;
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar6 = *(long *)(lVar2 + 0x70);
    if (lVar6 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c615f0(lVar6);
      func_0x0001007d6c6c(1,0xd000000000000017,0x800000010f148440,uVar5,&PTR_DAT_11064cf40);
      pcStack_90 = (code *)0x0;
      uStack_a8 = 0;
      puStack_b0 = (undefined *)0x0;
      puStack_98 = (undefined *)0x0;
      puStack_a0 = (undefined *)0x0;
      func_0x000107c61428(lVar2 + 0x38,auStack_80,0x21,0);
      FUN_1033c09f8(&puStack_b0,lVar2 + 0x38);
      func_0x000107c614a8(auStack_80);
      uVar5 = *(undefined8 *)(lVar2 + 0x60);
      *(undefined8 *)(lVar2 + 0x60) = 0;
      func_0x000107c61574(uVar5);
      *(undefined8 *)(lVar2 + 0x78) = 0;
      *(undefined1 *)(lVar2 + 0x80) = 1;
      puVar3 = &UNK_11064cf70;
      func_0x000107c613fc(&UNK_11064cf70,0x28,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar1;
      *(undefined8 *)(puVar3 + 0x18) = param_1;
      *(undefined8 *)(puVar3 + 0x20) = param_2;
      pcStack_90 = FUN_1033c0b10;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1000b0c7c;
      puStack_98 = &UNK_11064cf88;
      puStack_88 = puVar3;
      func_0x000107c60bc4(&puStack_b0);
      puVar3 = puStack_88;
      func_0x000107c6157c(uVar1);
      func_0x000100b64c10(param_1,param_2);
      func_0x000107c61574(puVar3);
      func_0x000107c41864(lVar6);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar6);
    }
  }
  return;
}



/* Entry: 1033c0aa8; end: 1033c0aef;  */

undefined8 FUN_1033c0aa8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f1c258;
  func_0x0001000285a8(0x112f1c258,&UNK_10dbbeb60);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1033c0af0; end: 1033c0b0f;  */

void FUN_1033c0af0(void)

{
  func_0x000107c61168(&PTR_PTR_112f62518);
  return;
}



/* Entry: 1033c0b10; end: 1033c0b33;  */

void FUN_1033c0b10(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1033c0fe4(0,0);
    func_0x000107c61170(lVar2);
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 1033c0b34; end: 1033c0b63;  */

void FUN_1033c0b34(undefined8 param_1)

{
  func_0x000107c610f8();
  func_0x0001033c1130(param_1);
  return;
}



/* Entry: 1033c0b64; end: 1033c0fe3;  */

/* WARNING: Possible PIC construction at 0x0001033c0c38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0cb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0ea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c0f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c0f7c) */
/* WARNING: Removing unreachable block (ram,0x0001033c0f30) */
/* WARNING: Removing unreachable block (ram,0x0001033c0fe0) */
/* WARNING: Removing unreachable block (ram,0x0001033c0f34) */
/* WARNING: Removing unreachable block (ram,0x0001033c0edc) */
/* WARNING: Removing unreachable block (ram,0x0001033c0eac) */
/* WARNING: Removing unreachable block (ram,0x0001033c0e94) */
/* WARNING: Removing unreachable block (ram,0x0001033c0fdc) */
/* WARNING: Removing unreachable block (ram,0x0001033c0e98) */
/* WARNING: Removing unreachable block (ram,0x0001033c0e60) */
/* WARNING: Removing unreachable block (ram,0x0001033c0fd8) */
/* WARNING: Removing unreachable block (ram,0x0001033c0e74) */
/* WARNING: Removing unreachable block (ram,0x0001033c0e48) */
/* WARNING: Removing unreachable block (ram,0x0001033c0fd4) */
/* WARNING: Removing unreachable block (ram,0x0001033c0e4c) */
/* WARNING: Removing unreachable block (ram,0x0001033c0e2c) */
/* WARNING: Removing unreachable block (ram,0x0001033c0e0c) */
/* WARNING: Removing unreachable block (ram,0x0001033c0d94) */
/* WARNING: Removing unreachable block (ram,0x0001033c0fcc) */
/* WARNING: Removing unreachable block (ram,0x0001033c0dd4) */
/* WARNING: Removing unreachable block (ram,0x0001033c0fd0) */
/* WARNING: Removing unreachable block (ram,0x0001033c0dec) */
/* WARNING: Removing unreachable block (ram,0x0001033c0d1c) */
/* WARNING: Removing unreachable block (ram,0x0001033c0d64) */
/* WARNING: Removing unreachable block (ram,0x0001033c0d70) */
/* WARNING: Removing unreachable block (ram,0x0001033c0cbc) */
/* WARNING: Removing unreachable block (ram,0x0001033c0ce4) */
/* WARNING: Removing unreachable block (ram,0x0001033c0cf4) */
/* WARNING: Removing unreachable block (ram,0x0001033c0c9c) */
/* WARNING: Removing unreachable block (ram,0x0001033c0c3c) */
/* WARNING: Removing unreachable block (ram,0x0001033c0f8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c0b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f625d8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x00010058d43c(uVar2,uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112f625d0) = 0;
  puVar4 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x000107c6157c(param_3);
  func_0x000107c483f8(puVar4);
  func_0x000107c543a8(param_1);
  func_0x000107c547c8(param_1);
  func_0x000107c4d510(param_1);
  func_0x000107c61180();
  if (lRam0000000112f61eb8 != -1) {
    func_0x000107c61568(0x112f61eb8,FUN_1033b9798);
  }
  func_0x000107c5fadc(uRam0000000113807240,uRam0000000113807248);
  func_0x000107c59e18(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033c0fe4; end: 1033c10af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c0fe4(code *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112f625e0;
  lVar3 = unaff_x20 + _DAT_112f625e0;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c5e37c();
    func_0x000107c61170(lVar3);
  }
  lVar3 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c10b0);
      (*pcVar2)();
    }
    func_0x000107c4ff34(lVar4);
    func_0x000107c61170(lVar4);
  }
  lVar3 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c4ff2c();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61604(unaff_x20 + lVar1,0);
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1033c10b0; end: 1033c1217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033c10b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f625c8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f625c8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000107c30a40();
    func_0x000107c61180();
    func_0x000107c53224();
    func_0x000107c54b74(0x3ff0000000000000,lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0(lVar2);
    func_0x000107c615e8(uVar4);
    lVar3 = 0;
  }
  func_0x000107c615f0(lVar3);
  return lVar2;
}



/* Entry: 1033c1218; end: 1033c12ab; -[_TtC13GamesExplorer27GamesExplorerViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c1218(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  *(undefined8 *)(param_1 + _DAT_112f625c8) = 0;
  *(undefined1 *)(param_1 + _DAT_112f625d0) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f625d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61614(param_1 + _DAT_112f625e0,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "GamesExplorer/GamesExplorerViewController.swift",0x2f,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c12ac);
  (*pcVar2)();
}



/* Entry: 1033c12ac; end: 1033c13a7;  */

/* WARNING: Possible PIC construction at 0x0001033c133c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c1340) */
/* WARNING: Removing unreachable block (ram,0x0001033c135c) */
/* WARNING: Removing unreachable block (ram,0x0001033c137c) */
/* WARNING: Removing unreachable block (ram,0x0001033c1380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c12ac(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c4a714();
  if ((int)lVar2 == 0) {
    return;
  }
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c13a8);
  (*pcVar1)();
}



/* Entry: 1033c13a8; end: 1033c1403; -[_TtC13GamesExplorer27GamesExplorerViewController viewDidLoad] */

void FUN_1033c13a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1033c12ac();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1033c1404; end: 1033c14ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033c1404(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112f625e0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    func_0x000107c61168(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    lVar4 = lVar2;
    func_0x000107c6148c(lVar2,puVar3);
    if (lVar4 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c4d4bc();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      lVar2 = lVar4;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
  }
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c515ac();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    lVar4 = lVar2;
    func_0x000107c5cbe4(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    return lVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c14f0);
  (*pcVar1)();
}



/* Entry: 1033c14f0; end: 1033c1aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c14f0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 auStack_168 [72];
  undefined1 auStack_120 [192];
  
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___UINavigationBarAppearance_1126ad208;
  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationBarAppearance_1126ad208);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c401a8();
  func_0x000107c61174();
  func_0x000107c52b50(puVar4);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c59030(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  lVar6 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  lVar7 = lVar6;
  func_0x000107c61534();
  *(undefined8 *)(lVar7 + 0x18) = 4;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  uVar8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar7 + 0x20) = uVar8;
  func_0x000107c61174();
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(uVar8);
  uVar8 = 0;
  FUN_1033c1e9c(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar7 + 0x28) = uVar9;
  uVar13 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  *(undefined8 *)(lVar7 + 0x40) = uVar8;
  *(undefined8 *)(lVar7 + 0x48) = uVar13;
  uVar8 = 0;
  FUN_1033c1e9c(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined8 *)(lVar7 + 0x68) = uVar8;
  *(undefined **)(lVar7 + 0x50) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar10 = lVar7;
  func_0x000100ecbca8(lVar7);
  func_0x000107c61588(lVar7);
  uVar9 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  func_0x000107c61408((undefined8 *)(lVar7 + 0x20),2,uVar9);
  uVar11 = 0;
  func_0x000100eca28c(0);
  uVar9 = uVar11;
  func_0x000100ecbdec();
  lVar7 = lVar10;
  func_0x000107c5f9dc(lVar10,uVar11,PTR___sypN_11034f1a8 + 8,uVar9);
  func_0x000107c6142c(lVar10);
  func_0x000107c59e48(puVar4);
  func_0x000107c61170(lVar7);
  lVar7 = lVar6;
  func_0x000107c61534(lVar6,auStack_120);
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  *(undefined8 *)(lVar7 + 0x20) = uVar13;
  *(undefined8 *)(lVar7 + 0x40) = uVar8;
  *(undefined **)(lVar7 + 0x28) = puVar3;
  func_0x000107c61174();
  lVar10 = lVar7;
  func_0x000100ecbca8(lVar7);
  func_0x000107c61588(lVar7);
  func_0x000100ef0820((undefined8 *)(lVar7 + 0x20));
  lVar7 = lVar10;
  func_0x000107c5f9dc(lVar10,uVar11,PTR___sypN_11034f1a8 + 8,uVar9);
  func_0x000107c6142c(lVar10);
  func_0x000107c559ec(puVar4);
  func_0x000107c61170(lVar7);
  puVar5 = PTR__OBJC_CLASS___UIBarButtonItemAppearance_1126ad210;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIBarButtonItemAppearance_1126ad210);
  func_0x000107c48b08();
  puVar12 = puVar5;
  func_0x000107c4d748();
  func_0x000107c61180();
  func_0x000107c61534(lVar6,auStack_168);
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  *(undefined8 *)(lVar6 + 0x20) = uVar13;
  *(undefined8 *)(lVar6 + 0x40) = uVar8;
  *(undefined **)(lVar6 + 0x28) = puVar3;
  func_0x000107c61174(puVar3);
  lVar7 = lVar6;
  func_0x000100ecbca8(lVar6);
  func_0x000107c61588(lVar6);
  func_0x000100ef0820((undefined8 *)(lVar6 + 0x20));
  lVar6 = lVar7;
  func_0x000107c5f9dc(lVar7,uVar11,PTR___sypN_11034f1a8 + 8,uVar9);
  func_0x000107c6142c(lVar7);
  func_0x000107c59e48(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar6);
  func_0x000107c52ea4(puVar4);
  func_0x000107c52b34(puVar4);
  lVar6 = param_1;
  func_0x000107c4d4bc(param_1);
  func_0x000107c61180();
  func_0x000107c5977c();
  func_0x000107c61170(lVar6);
  lVar6 = param_1;
  func_0x000107c4d4bc(param_1);
  func_0x000107c61180();
  func_0x000107c61174(puVar4);
  func_0x000107c58cd4(lVar6);
  func_0x000107c61170(lVar6);
  lVar6 = param_1;
  func_0x000107c4d4bc(param_1);
  func_0x000107c61180();
  func_0x000107c53618();
  func_0x000107c61170(lVar6);
  lVar6 = param_1;
  func_0x000107c4d4bc(param_1);
  func_0x000107c61180();
  func_0x000107c5361c();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar4);
  lVar6 = param_1;
  func_0x000107c4d4bc(param_1);
  func_0x000107c61180();
  func_0x000107c61174(puVar3);
  func_0x000107c59e10(lVar6);
  func_0x000107c61170(lVar6);
  lVar6 = param_1;
  func_0x000107c4d4bc(param_1);
  func_0x000107c61180();
  func_0x000107c5a058();
  func_0x000107c61170(lVar6);
  lVar6 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x000107c52b50();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c5cc14();
    func_0x000107c61180();
    puVar12 = puVar2;
    puVar14 = puVar3;
    if (param_1 != 0) {
      lVar6 = param_1;
      func_0x000107c4d510();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar7 = lVar6;
      func_0x000107c4ace4(lVar6);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      lVar6 = lVar7;
      func_0x000107c41174(lVar7);
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c59e10(lVar6);
      func_0x000107c61170(lVar6);
      puVar12 = puVar3;
      puVar14 = puVar2;
    }
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar14);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c1af0);
  (*pcVar1)();
}



/* Entry: 1033c1af0; end: 1033c1b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c1af0(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if ((*(byte *)(unaff_x20 + _DAT_112f625d0) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f625d0) = 1;
    pcVar1 = *(code **)(unaff_x20 + _DAT_112f625d8);
    if (pcVar1 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f625d8))[1];
      func_0x000107c6157c(uVar2);
      (*pcVar1)();
      if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar2);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1033c1b58; end: 1033c1b7f; -[_TtC13GamesExplorer27GamesExplorerViewController didTapCloseButton] */

void FUN_1033c1b58(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033c1af0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033c1b80; end: 1033c1bdf; -[_TtC13GamesExplorer27GamesExplorerViewController initWithNibName:bundle:] */

void FUN_1033c1b80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorer.GamesExplorerViewController",0x29,"init(nibName:bundle:)",0x15,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c1bac);
  (*pcVar1)();
}



/* Entry: 1033c1be0; end: 1033c1c2b; -[_TtC13GamesExplorer27GamesExplorerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c1be0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f625c8));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112f625d8),
                      ((undefined8 *)(param_1 + _DAT_112f625d8))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f625e0);
  return;
}



/* Entry: 1033c1c2c; end: 1033c1d53;  */

void FUN_1033c1c2c(double param_1,double param_2,double param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x20;
  double dVar5;
  double dVar6;
  
  func_0x000107c44ec4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  do {
    if (unaff_x20 == 0) {
      PTR__OBJC_CLASS___UIScrollView_1126af098 = puVar1;
      return;
    }
    PTR__OBJC_CLASS___UIScrollView_1126af098 = puVar1;
    func_0x000107c61168(puVar1);
    uVar2 = unaff_x20;
    func_0x000107c6148c(unaff_x20,puVar1);
    dVar5 = param_2;
    if (uVar2 != 0) {
      uVar3 = unaff_x20;
      func_0x000107c61174(unaff_x20);
      uVar4 = uVar2;
      func_0x000107c3dc5c();
      if ((uVar4 & 1) == 0) {
        func_0x000107c404f0(uVar2);
        dVar5 = param_2;
        func_0x000107c3d9b4(uVar2);
        param_2 = param_2 + param_1;
        func_0x000107c3d9b4(uVar2);
        dVar6 = param_2 + param_3;
        func_0x000107c3ec60(uVar2);
        func_0x000107c609b0();
        param_2 = dVar5;
        if (dVar6 <= param_1) {
          func_0x000107c61170(uVar3);
          goto LAB_1033c1c90;
        }
      }
      func_0x000107c404a0(uVar2);
      dVar5 = param_2;
      func_0x000107c3d9b4(uVar2);
      func_0x000107c61170(uVar3);
      param_1 = -param_1;
      if (param_1 < param_2) {
        func_0x000107c61170(uVar3);
        return;
      }
    }
LAB_1033c1c90:
    uVar2 = unaff_x20;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    unaff_x20 = uVar2;
    param_2 = dVar5;
    puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  } while( true );
}



/* Entry: 1033c1d54; end: 1033c1da7; -[_TtC13GamesExplorer27GamesExplorerViewController cardTransitionShouldBeginWithView:touchLocation:] */

uint FUN_1033c1d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  uVar1 = param_5;
  FUN_1033c1c2c(param_1,param_2);
  func_0x000107c61170(param_5);
  return ((uint)uVar1 ^ 0xffffffff) & 1;
}



/* Entry: 1033c1da8; end: 1033c1db3; -[_TtC13GamesExplorer27GamesExplorerViewController cardTransitionWillBeginWithView:] */

void FUN_1033c1da8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1033c1db4; end: 1033c1db7; -[_TtC13GamesExplorer27GamesExplorerViewController cardToExpandTransition] */

void FUN_1033c1db4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1033c1db8; end: 1033c1e0b; -[_TtC13GamesExplorer27GamesExplorerViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Possible PIC construction at 0x0001033c1df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c1df8) */

void FUN_1033c1db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1033c1e0c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1033c1e0c; end: 1033c1e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c1e0c(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if ((param_1 == 1) && ((*(byte *)(unaff_x20 + _DAT_112f625d0) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112f625d0) = 1;
    pcVar1 = *(code **)(unaff_x20 + _DAT_112f625d8);
    if (pcVar1 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f625d8))[1];
      func_0x000107c6157c(uVar2);
      (*pcVar1)();
      if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar2);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1033c1e7c; end: 1033c1e9b;  */

void FUN_1033c1e7c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6278);
  return;
}



/* Entry: 1033c1e9c; end: 1033c1f17;  */

void FUN_1033c1e9c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033c1f18; end: 1033c1f37;  */

void FUN_1033c1f18(void)

{
  long unaff_x20;
  
  func_0x000107c61614(unaff_x20 + 0x10,0);
  return;
}



/* Entry: 1033c1f38; end: 1033c22eb;  */

/* WARNING: Possible PIC construction at 0x0001033c2074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c20a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c2170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c21c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c2200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c2220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c2254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c22a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c22c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c22a4) */
/* WARNING: Removing unreachable block (ram,0x0001033c2258) */
/* WARNING: Removing unreachable block (ram,0x0001033c2224) */
/* WARNING: Removing unreachable block (ram,0x0001033c2204) */
/* WARNING: Removing unreachable block (ram,0x0001033c21c8) */
/* WARNING: Removing unreachable block (ram,0x0001033c2174) */
/* WARNING: Removing unreachable block (ram,0x0001033c20a4) */
/* WARNING: Removing unreachable block (ram,0x0001033c2078) */
/* WARNING: Removing unreachable block (ram,0x0001033c22cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c1f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar5 = &lStack_70;
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    FUN_1033c3dec();
    lVar3 = lVar2;
    func_0x000107c610f8();
    lVar1 = _DAT_112f626e8;
    lVar4 = lVar3;
    FUN_1033c28d0();
    *(long *)(lVar3 + lVar1) = lVar4;
    *(undefined **)(lVar3 + _DAT_112f626f0) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined1 *)(lVar3 + _DAT_112f626f8) = 0;
    *(undefined8 *)(lVar3 + _DAT_112f62700) = param_3;
    lStack_70 = lVar3;
    lStack_68 = lVar2;
    func_0x000107c61154(0,0,0,0,&lStack_70,PTR_s_initWithFrame__1125e2948);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174(plVar5);
    func_0x000107c5af88(puVar6);
    func_0x000107c61180();
    func_0x000107c52b50(plVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1033c22ec; end: 1033c24ff;  */

/* WARNING: Possible PIC construction at 0x0001033c236c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c2484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c2370) */
/* WARNING: Removing unreachable block (ram,0x0001033c24c8) */
/* WARNING: Removing unreachable block (ram,0x0001033c24d4) */
/* WARNING: Removing unreachable block (ram,0x0001033c24dc) */
/* WARNING: Removing unreachable block (ram,0x0001033c2374) */
/* WARNING: Removing unreachable block (ram,0x0001033c2488) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c22ec(undefined8 param_1,code *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112f626f8) = 0;
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f626e8);
    uVar2 = 0x72656d6d696873;
    func_0x000107c5fadc(0x72656d6d696873,0xe700000000000000);
    func_0x000107c4fe90(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1033c2500; end: 1033c25a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c2500(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112f626f8) = 0;
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f626e8);
    uVar2 = 0x72656d6d696873;
    func_0x000107c5fadc(0x72656d6d696873,0xe700000000000000);
    func_0x000107c4fe90(uVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4ff34();
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + 0x10,0);
  return;
}



/* Entry: 1033c25a8; end: 1033c25cb;  */

void FUN_1033c25a8(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033c25cc; end: 1033c261f;  */

/* WARNING: Possible PIC construction at 0x0001033c2074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c20a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c2170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c21c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c2200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c2220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c2254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c22a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c22c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c22a4) */
/* WARNING: Removing unreachable block (ram,0x0001033c2258) */
/* WARNING: Removing unreachable block (ram,0x0001033c2224) */
/* WARNING: Removing unreachable block (ram,0x0001033c2204) */
/* WARNING: Removing unreachable block (ram,0x0001033c21c8) */
/* WARNING: Removing unreachable block (ram,0x0001033c2174) */
/* WARNING: Removing unreachable block (ram,0x0001033c20a4) */
/* WARNING: Removing unreachable block (ram,0x0001033c2078) */
/* WARNING: Removing unreachable block (ram,0x0001033c22cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c25cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar5 = &lStack_70;
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    FUN_1033c3dec();
    lVar3 = lVar2;
    func_0x000107c610f8();
    lVar1 = _DAT_112f626e8;
    lVar4 = lVar3;
    FUN_1033c28d0();
    *(long *)(lVar3 + lVar1) = lVar4;
    *(undefined **)(lVar3 + _DAT_112f626f0) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined1 *)(lVar3 + _DAT_112f626f8) = 0;
    *(undefined8 *)(lVar3 + _DAT_112f62700) = param_3;
    lStack_70 = lVar3;
    lStack_68 = lVar2;
    func_0x000107c61154(0,0,0,0,&lStack_70,PTR_s_initWithFrame__1125e2948);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174(plVar5);
    func_0x000107c5af88(puVar6);
    func_0x000107c61180();
    func_0x000107c52b50(plVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1033c2620; end: 1033c270b;  */

/* WARNING: Possible PIC construction at 0x0001033c2660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c2664) */
/* WARNING: Removing unreachable block (ram,0x0001033c2668) */

void FUN_1033c2620(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x1033c2664;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 1033c270c; end: 1033c2733;  */

void FUN_1033c270c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1033c2734; end: 1033c275f;  */

void FUN_1033c2734(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c4ff34(*(undefined8 *)(unaff_x20 + 0x10));
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 1033c2760; end: 1033c277f;  */

void FUN_1033c2760(void)

{
  func_0x000107c61168(&PTR_PTR_112f62658);
  return;
}



/* Entry: 1033c2780; end: 1033c27c7;  */

void FUN_1033c2780(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f626c8;
  plVar5 = (long *)&UNK_10dbbecb0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1033c27c8(0,0x112f626d0,&PTR__OBJC_CLASS___CAAnimation_1126c78d8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1033c27c8; end: 1033c2807;  */

void FUN_1033c27c8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033c2808; end: 1033c280f;  */

void FUN_1033c2808(long param_1,long param_2)

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



/* Entry: 1033c2810; end: 1033c28cf;  */

void FUN_1033c2810(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar2 = puVar1;
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar2);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  dVar3 = param_1;
  func_0x000107c4c194(puVar1);
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar1);
  dRam0000000112f62738 = (double)(long)(param_1 * 0.01543 * dVar3) / dVar3;
  return;
}



/* Entry: 1033c28d0; end: 1033c2b7b;  */

undefined * FUN_1033c28d0(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c610f8(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  func_0x000107c597c4(0xbfe6666666666666,0x3fe0000000000000,puVar1);
  func_0x000107c54598(0x3fd3333333333333,0x3fe0000000000000,puVar1);
  lVar2 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 6;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c5e2ac();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar5;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar6 = 0;
  func_0x000100ef8bfc();
  *(undefined8 *)(lVar2 + 0x38) = uVar6;
  *(undefined **)(lVar2 + 0x20) = puVar4;
  puVar4 = puVar3;
  func_0x000107c5e2ac();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3fe3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar5;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined8 *)(lVar2 + 0x58) = uVar6;
  *(undefined **)(lVar2 + 0x40) = puVar4;
  func_0x000107c5e2ac();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fdd0(0);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar2 + 0x78) = uVar6;
  *(undefined **)(lVar2 + 0x60) = puVar3;
  lVar7 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(lVar2);
  func_0x000107c535a0(puVar1);
  func_0x000107c61170();
  func_0x000100673624();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 7;
  *(undefined8 *)(lVar7 + 0x10) = 3;
  uVar8 = 0;
  FUN_1033c3e0c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar8;
  func_0x000107c60108(0x3fd999999999999a);
  *(undefined8 *)(lVar7 + 0x20) = uVar6;
  func_0x000107c60108(0x3fe0000000000000);
  *(undefined8 *)(lVar7 + 0x28) = uVar6;
  func_0x000107c60108(0x3fe3333333333333);
  *(undefined8 *)(lVar7 + 0x30) = uVar6;
  lVar2 = lVar7;
  func_0x000107c5fc48(lVar7,uVar8);
  func_0x000107c61574(lVar7);
  func_0x000107c56084(puVar1);
  func_0x000107c61170(lVar2);
  return puVar1;
}



/* Entry: 1033c2b7c; end: 1033c2ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033c2b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffff90;
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = _DAT_112f626e8;
  FUN_1033c28d0();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined **)(unaff_x20 + _DAT_112f626f0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112f626f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f62700) = 2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c5af88(puVar4);
  func_0x000107c61180();
  func_0x000107c52b50(puVar3);
  func_0x000107c61170(puVar4);
  FUN_1033c2da8();
  puVar5 = puVar3;
  func_0x000107c4aba4(puVar3);
  func_0x000107c61180();
  func_0x000107c3d894();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 1033c2ce8; end: 1033c2d07; -[_TtC13GamesExplorer25GamesExplorerSkeletonView initWithFrame:] */

void FUN_1033c2ce8(void)

{
  FUN_1033c2b7c();
  return;
}



/* Entry: 1033c2d08; end: 1033c2da7; -[_TtC13GamesExplorer25GamesExplorerSkeletonView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c2d08(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112f626e8;
  lVar3 = param_1;
  FUN_1033c28d0();
  *(long *)(param_1 + lVar1) = lVar3;
  *(undefined **)(param_1 + _DAT_112f626f0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(param_1 + _DAT_112f626f8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f62700) = 2;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "GamesExplorer/GamesExplorerSkeletonView.swift",0x2d,2,0x4b,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c2da8);
  (*pcVar2)();
}



/* Entry: 1033c2da8; end: 1033c372b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c2da8(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  undefined1 auStack_88 [24];
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c3d89c();
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  if (lRam0000000112f62730 != -1) {
    func_0x000107c61568(0x112f62730,FUN_1033c2810);
  }
  uVar10 = uRam0000000112f62738;
  func_0x000107c59594(uRam0000000112f62738,puVar3);
  func_0x000107c52610(puVar3);
  func_0x000107c54280(puVar3);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c3d89c(puVar2);
  lVar11 = _DAT_112f626f0;
  lVar14 = 6;
  do {
    puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c52b2c();
    func_0x000107c59594(uVar10,puVar4);
    func_0x000107c52610(puVar4);
    func_0x000107c54280(puVar4);
    func_0x000107c61174();
    func_0x000107c5a050();
    puVar5 = puVar4;
    func_0x000107c44d9c();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar6 = puVar5;
    func_0x000107c40290(0);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c521e8(puVar6);
    func_0x000107c61428(unaff_x20 + lVar11,auStack_88,0x21,0);
    func_0x000107c61174();
    func_0x000101e61a00();
    uVar12 = *(ulong *)(unaff_x20 + lVar11);
    uVar13 = uVar12 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar13 + 0x10);
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
      func_0x0001011d8f3c(uVar12,uVar1 + 1,1);
      uVar13 = uVar12 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
    *(undefined **)(uVar13 + uVar1 * 8 + 0x20) = puVar6;
    *(ulong *)(unaff_x20 + lVar11) = uVar12;
    func_0x000107c614a8(auStack_88);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c3fdd0(0x3fd0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c52b50(puVar5);
    func_0x000107c61170(puVar8);
    puVar7 = puVar5;
    func_0x000107c4aba4(puVar5);
    func_0x000107c61180();
    func_0x000107c539d4(0x4020000000000000);
    func_0x000107c61170(puVar7);
    puVar7 = puVar5;
    func_0x000107c4aba4(puVar5);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar7);
    func_0x000107c3d5b4(puVar4);
    func_0x000107c61170(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c3fdd0(0x3fd0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c52b50(puVar5);
    func_0x000107c61170(puVar8);
    puVar7 = puVar5;
    func_0x000107c4aba4(puVar5);
    func_0x000107c61180();
    func_0x000107c539d4(0x4020000000000000);
    func_0x000107c61170(puVar7);
    puVar7 = puVar5;
    func_0x000107c4aba4(puVar5);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar7);
    func_0x000107c3d5b4(puVar4);
    func_0x000107c61170(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c3fdd0(0x3fd0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c52b50(puVar5);
    func_0x000107c61170(puVar8);
    puVar7 = puVar5;
    func_0x000107c4aba4(puVar5);
    func_0x000107c61180();
    func_0x000107c539d4(0x4020000000000000);
    func_0x000107c61170(puVar7);
    puVar7 = puVar5;
    func_0x000107c4aba4(puVar5);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar7);
    func_0x000107c3d5b4(puVar4);
    func_0x000107c61170(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c3fdd0(0x3fd0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c52b50(puVar5);
    func_0x000107c61170(puVar8);
    puVar7 = puVar5;
    func_0x000107c4aba4(puVar5);
    func_0x000107c61180();
    func_0x000107c539d4(0x4020000000000000);
    func_0x000107c61170(puVar7);
    puVar7 = puVar5;
    func_0x000107c4aba4(puVar5);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar7);
    func_0x000107c3d5b4(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c3d5b4(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x0001008478a8();
  puVar6 = puVar5;
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 9;
  *(undefined8 *)(puVar6 + 0x10) = 4;
  puVar7 = puVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar8 = puVar2;
  func_0x000107c4acb0(puVar2);
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  *(undefined **)(puVar6 + 0x20) = puVar9;
  puVar7 = puVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar8 = puVar2;
  func_0x000107c5ce8c(puVar2);
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  *(undefined **)(puVar6 + 0x28) = puVar9;
  puVar7 = puVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar8 = puVar2;
  func_0x000107c5cbe4(puVar2);
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  *(undefined **)(puVar6 + 0x30) = puVar9;
  puVar7 = puVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar8 = puVar2;
  func_0x000107c3ec1c(puVar2);
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  *(undefined **)(puVar6 + 0x38) = puVar9;
  uVar10 = 0;
  FUN_1033c3e0c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar7 = puVar6;
  func_0x000107c5fc48(puVar6,uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c613fc(puVar5,((ulong)*(uint *)(puVar5 + 0x30) + 7 & 0x1fffffff8) + 0x18,
                      *(ushort *)(puVar5 + 0x34) | 7);
  *(undefined8 *)(puVar5 + 0x18) = 7;
  *(undefined8 *)(puVar5 + 0x10) = 3;
  puVar6 = puVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar14 = unaff_x20;
  func_0x000107c515ac(unaff_x20);
  func_0x000107c61180();
  lVar11 = lVar14;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  puVar7 = puVar6;
  func_0x000107c40284(0x4032000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar11);
  *(undefined **)(puVar5 + 0x20) = puVar7;
  puVar6 = puVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar14 = unaff_x20;
  func_0x000107c515ac(unaff_x20);
  func_0x000107c61180();
  lVar11 = lVar14;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  puVar7 = puVar6;
  func_0x000107c40284(0xc032000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar11);
  *(undefined **)(puVar5 + 0x28) = puVar7;
  puVar6 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c5cbe4(unaff_x20);
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(unaff_x20);
  *(undefined **)(puVar5 + 0x30) = puVar7;
  puVar6 = puVar5;
  func_0x000107c5fc48(puVar5,uVar10);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1033c372c; end: 1033c391f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c372c(double param_1,double param_2,undefined8 param_3,double param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_68 [24];
  
  func_0x000107c3ec60();
  func_0x000107c609cc();
  func_0x000107c515a0();
  func_0x000107c515a0();
  dVar9 = ((param_1 - param_2) - param_4) + -36.0;
  if (0.0 < dVar9) {
    if (lRam0000000112f62730 != -1) {
      func_0x000107c61568(0x112f62730,FUN_1033c2810);
    }
    dVar9 = dVar9 + dRam0000000112f62738 * -3.0;
    dVar10 = dVar9;
    if (dVar9 < 0.0) {
      dVar10 = 0.0;
    }
    puVar3 = unaff_x20;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
    }
    else {
      puVar4 = puVar3;
      func_0x000107c519d4();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
    }
    func_0x000107c51820(puVar4);
    func_0x000107c61170(puVar4);
    lVar1 = _DAT_112f626f0;
    func_0x000107c61428(unaff_x20 + _DAT_112f626f0,auStack_68,0,0);
    uVar6 = *(ulong *)(unaff_x20 + lVar1);
    if (uVar6 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar7 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c3920);
        (*pcVar2)();
      }
      func_0x000107c61434(uVar6);
      uVar8 = 0;
      do {
        if ((uVar6 & 0xc000000000000001) == 0) {
          uVar5 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
          func_0x000107c61174(uVar5);
        }
        else {
          uVar5 = uVar8;
          func_0x0001011d9334(uVar8,uVar6);
        }
        uVar8 = uVar8 + 1;
        func_0x000107c5378c((double)(long)(dVar10 * 0.25 * 1.5 * dVar9) / dVar9);
        func_0x000107c61170(uVar5);
      } while (uVar7 != uVar8);
      func_0x000107c6142c(uVar6);
    }
  }
  return;
}



/* Entry: 1033c3920; end: 1033c3c8b;  */

/* WARNING: Possible PIC construction at 0x0001033c3984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c39c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c3a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c3a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c3a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c3aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c3ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c3afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c3ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c3c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c3c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c3c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c3c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c3c44) */
/* WARNING: Removing unreachable block (ram,0x0001033c3c1c) */
/* WARNING: Removing unreachable block (ram,0x0001033c3c04) */
/* WARNING: Removing unreachable block (ram,0x0001033c3ba8) */
/* WARNING: Removing unreachable block (ram,0x0001033c3b00) */
/* WARNING: Removing unreachable block (ram,0x0001033c3ad4) */
/* WARNING: Removing unreachable block (ram,0x0001033c3aa8) */
/* WARNING: Removing unreachable block (ram,0x0001033c3a6c) */
/* WARNING: Removing unreachable block (ram,0x0001033c3a40) */
/* WARNING: Removing unreachable block (ram,0x0001033c3a14) */
/* WARNING: Removing unreachable block (ram,0x0001033c39c4) */
/* WARNING: Removing unreachable block (ram,0x0001033c39c8) */
/* WARNING: Removing unreachable block (ram,0x0001033c3988) */
/* WARNING: Removing unreachable block (ram,0x0001033c3c54) */
/* WARNING: Removing unreachable block (ram,0x0001033c3c58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c3920(double param_1)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112f626f8) == '\x01') {
    func_0x000107c3ec60();
    func_0x000107c609cc();
    if (0.0 < param_1) {
      func_0x000107c5e3f8();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)();
        return;
      }
    }
  }
  return;
}



/* Entry: 1033c3c8c; end: 1033c3d07; -[_TtC13GamesExplorer25GamesExplorerSkeletonView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c3c8c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f626e8);
  func_0x000107c3ec60(param_1);
  func_0x000107c54b80(uVar3);
  FUN_1033c372c();
  FUN_1033c3920();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1033c3d08; end: 1033c3d7f; -[_TtC13GamesExplorer25GamesExplorerSkeletonView didMoveToWindow] */

void FUN_1033c3d08(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_didMoveToWindow_112527020;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  lVar2 = param_1;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    FUN_1033c3920();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1033c3d80; end: 1033c3db3;  */

void FUN_1033c3d80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033c3db4; end: 1033c3deb; -[_TtC13GamesExplorer25GamesExplorerSkeletonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c3db4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f626e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f626f0));
  return;
}



/* Entry: 1033c3dec; end: 1033c3e0b;  */

void FUN_1033c3dec(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6358);
  return;
}



/* Entry: 1033c3e0c; end: 1033c3e4b;  */

void FUN_1033c3e0c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033c3e4c; end: 1033c3e7f; -[_TtC13GamesExplorer31GamesExplorerCategoriesProvider categoriesResponse] */

void FUN_1033c3e4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033c3e80();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033c3e80; end: 1033c413f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1033c3e80(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f62740);
  func_0x000107c3f6f0(uVar2);
  func_0x000107c61180();
  uVar6 = uVar2;
  func_0x0001000b637c();
  func_0x000107c61170(uVar2);
  puVar3 = &UNK_11064d128;
  func_0x000107c613fc(&UNK_11064d128,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  uVar2 = 0x112d657e8;
  func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
  pcVar4 = FUN_1033c6b4c;
  func_0x0001000bfde0(FUN_1033c6b4c,puVar3,uVar2);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f62748);
  puVar3 = &UNK_11064d150;
  func_0x000107c613fc(&UNK_11064d150,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(long *)(puVar3 + 0x18) = lVar1;
  func_0x000107c6157c(uVar6);
  pcVar5 = FUN_1033c6b78;
  func_0x00010487e4e0(FUN_1033c6b78,puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar3);
  uVar6 = 0x1033c5318;
  func_0x0001000bfde0(0x1033c5318,0,uVar2);
  func_0x000107c61574(pcVar5);
  func_0x0001004575f0();
  func_0x000107c61574(uVar6);
  return pcVar5;
}



/* Entry: 1033c4140; end: 1033c435b;  */

void FUN_1033c4140(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  uVar9 = *param_1;
  puVar3 = &UNK_11064d1a0;
  func_0x000107c613fc(&UNK_11064d1a0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar4 = &UNK_11064d1c8;
  func_0x000107c613fc(&UNK_11064d1c8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1033c6bdc;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1033c6be4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1033c52d8;
  puStack_88 = &UNK_11064d1e0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11064d218;
  func_0x000107c613fc(&UNK_11064d218,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_11064d240;
  func_0x000107c613fc(&UNK_11064d240,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x1033c6c04;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_1033c6c58;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100e27b38;
  puStack_88 = &UNK_11064d258;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(uVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x72,0x2a,0x25,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c4358);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x72,0x4e,0x1d,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c435c);
  (*pcVar2)();
}



/* Entry: 1033c435c; end: 1033c52d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c435c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  if (param_1 == 0) {
    func_0x0001007d6c6c(3,0xd00000000000002f,0x800000010f1486f0,param_3,&PTR_DAT_11064d0a8);
    FUN_1033bca24(1);
    return;
  }
  uVar8 = *(ulong *)(param_1 + _DAT_112f62778);
  uVar5 = *(ulong *)(param_1 + _DAT_112f62788);
  uVar1 = ((ulong *)(param_1 + _DAT_112f62788))[1];
  uVar10 = *(undefined8 *)(param_1 + _DAT_112f62790);
  func_0x000107c61434(uVar1);
  func_0x000107c61174();
  func_0x000107c61434(uVar10);
  func_0x000107c61174();
  func_0x0001033c4a88(uVar5,uVar1,uVar10,0x65736e6f70736572,0xe800000000000000);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar10);
  func_0x000107c602fc(0x45);
  func_0x000107c5fb78(0xd000000000000031,0x800000010f148720);
  uVar10 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar2 = uVar10;
  func_0x00010011d734();
  uVar6 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar10,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f148760);
  uVar3 = 0x6c696e;
  if (uVar1 != 0) {
    uVar3 = uVar5;
  }
  uVar9 = 0xe300000000000000;
  if (uVar1 != 0) {
    uVar9 = uVar1;
  }
  func_0x000107c61434(uVar1);
  func_0x000107c5fb78(uVar3,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x0001007d6c6c(1,0,0xe000000000000000,param_3,&PTR_DAT_11064d0a8);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c602fc(0x3e);
  func_0x000107c5fb78(0xd00000000000002b,0x800000010f148780);
  uVar3 = uVar8;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar9 = uVar3;
  func_0x000107c3f6e0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  uVar6 = 0;
  FUN_1033c6b9c(0,0x112f1dfa0,&PTR_PTR_1126cce38);
  uVar3 = uVar9;
  func_0x000107c5fc54(uVar9,uVar6);
  func_0x000107c61170(uVar9);
  uVar9 = uVar3;
  FUN_1033c5b78();
  func_0x000107c6142c(uVar3);
  uVar4 = 0x2c;
  uVar7 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar10,uVar2);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fb78(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb78(0x6f6974636573205d,0xee005b3d7364496e);
  uVar3 = uVar8;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar9 = uVar3;
  FUN_1033c5d44();
  func_0x000107c615e8(uVar3);
  uVar4 = 0x2c;
  uVar7 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar10,uVar2);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fb78(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  func_0x0001007d6c6c(1,0,0xe000000000000000,param_3,&PTR_DAT_11064d0a8);
  func_0x000107c6142c(0xe000000000000000);
  uVar3 = uVar8;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar9 = uVar3;
  func_0x000107c3f6e0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  uVar3 = uVar9;
  func_0x000107c5fc54(uVar9,uVar6);
  func_0x000107c61170(uVar9);
  if (uVar3 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    func_0x000107c6142c();
  }
  else {
    uVar9 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar9 = uVar3;
    }
    func_0x000107c60480();
    func_0x000107c6142c(uVar3);
  }
  if (uVar9 == 0) {
    func_0x0001007d6c6c(3,0xd000000000000031,0x800000010f1487b0,param_3,&PTR_DAT_11064d0a8);
    FUN_1033bca24(1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar8);
    return;
  }
  if (uVar1 != 0) {
    uVar3 = uVar5 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar3 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      uVar3 = uVar8;
      func_0x000107c3da44(uVar8);
      func_0x000107c61180();
      uVar10 = *(undefined8 *)(param_1 + _DAT_112f62780);
      func_0x000107c61434(uVar10);
      func_0x0001033c4eac(uVar3,uVar10,param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(uVar3);
      goto LAB_1033c49ec;
    }
  }
  func_0x000107c602fc(0x74);
  func_0x000107c5fb78(0xd000000000000048,0x800000010f148580);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f147fc0);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f1485d0);
  uVar3 = uVar8;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c3f6e0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  uVar3 = uVar5;
  func_0x000107c5fc54(uVar5,uVar6);
  func_0x000107c61170(uVar5);
  uVar5 = uVar3;
  FUN_1033c5b78();
  func_0x000107c6142c(uVar3);
  uVar6 = 0x2c;
  uVar4 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar10,uVar2);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x6f6974636573205d,0xee005b3d7364496e);
  uVar3 = uVar8;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar5 = uVar3;
  FUN_1033c5d44();
  func_0x000107c615e8(uVar3);
  uVar6 = 0x2c;
  uVar4 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar10,uVar2);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  uVar10 = 0xe000000000000000;
  func_0x0001007d6c6c(2,0,0xe000000000000000,param_3,&PTR_DAT_11064d0a8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar8);
LAB_1033c49ec:
  func_0x000107c6142c(uVar10);
  return;
}



/* Entry: 1033c52d8; end: 1033c544b;  */

void FUN_1033c52d8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1033c544c; end: 1033c547f; -[_TtC13GamesExplorer31GamesExplorerCategoriesProvider categoriesAggregator] */

void FUN_1033c544c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033c5480();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033c5480; end: 1033c55e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1033c5480(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001000285a8(0x112f46828,&UNK_10db93b70);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f62740);
  func_0x000107c3f6e4(uVar2);
  func_0x000107c61180();
  uVar6 = uVar2;
  func_0x0001000b637c();
  func_0x000107c61170(uVar2);
  puVar3 = &UNK_11064d0d8;
  func_0x000107c613fc(&UNK_11064d0d8,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  pcVar4 = FUN_1033c5b2c;
  func_0x0001000bfde0(FUN_1033c5b2c,puVar3,&UNK_11064d388);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f62748);
  puVar3 = &UNK_11064d100;
  func_0x000107c613fc(&UNK_11064d100,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(long *)(puVar3 + 0x18) = lVar1;
  func_0x000107c6157c(uVar6);
  pcVar5 = FUN_1033c5b70;
  func_0x00010487e4e0(FUN_1033c5b70,puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar3);
  uVar6 = 0x112f627c0;
  func_0x0001000285a8(0x112f627c0,&UNK_10dbbed68);
  pcVar4 = FUN_1033c564c;
  func_0x0001000bfde0(FUN_1033c564c,0,uVar6);
  func_0x000107c61574(pcVar5);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar4);
  return pcVar5;
}



/* Entry: 1033c55e8; end: 1033c564b;  */

void FUN_1033c55e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x0001033c4a88(param_1[2],param_1[3],param_1[4],0x7461676572676761,0xea0000000000726f);
  func_0x0001033c4eac(uVar1,uVar2,param_2);
  return;
}



/* Entry: 1033c564c; end: 1033c5657;  */

void FUN_1033c564c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1033c5658; end: 1033c58bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033c5658(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  plVar9 = &lStack_70;
  if (param_1 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    func_0x000107c61174();
    lVar10 = param_1;
    func_0x000107c3da44();
    func_0x000107c61180();
    lVar3 = lVar10;
    FUN_1033c660c();
    func_0x000107c615e8(lVar10);
    func_0x000107c615f0(lVar3);
    lVar10 = param_1;
    func_0x000107c4ce20(param_1);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126cd118;
    func_0x000107c610f8();
    func_0x000107c4564c();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar10);
    lVar10 = param_1;
    func_0x000107c3da44();
    func_0x000107c61180();
    lVar5 = lVar10;
    func_0x000107c3f6e0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    lVar6 = 0;
    FUN_1033c6b9c(0,0x112f1dfa0,&PTR_PTR_1126cce38);
    lVar10 = lVar5;
    lVar11 = lVar6;
    func_0x000107c5fc54();
    func_0x000107c61170(lVar5);
    lVar5 = lVar10;
    FUN_1033c67d8();
    func_0x000107c6142c(lVar10);
    lVar10 = param_1;
    func_0x000107c3da44();
    func_0x000107c61180();
    lVar7 = lVar10;
    func_0x000107c415a0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    if (lVar7 == 0) {
      lVar10 = 0;
      lVar11 = 0;
    }
    else {
      lVar10 = lVar7;
      func_0x000107c5faec();
      func_0x000107c61170(lVar7);
    }
    lVar7 = param_1;
    func_0x000107c3da44();
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c3f6e0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    lVar7 = lVar8;
    func_0x000107c5fc54(lVar8,lVar6);
    func_0x000107c61170(lVar8);
    lVar6 = lVar7;
    FUN_1033c5b78();
    func_0x000107c6142c(lVar7);
    lVar8 = 0;
    FUN_1033c5b0c();
    lVar7 = lVar8;
    func_0x000107c610f8();
    *(undefined **)(lVar7 + _DAT_112f62778) = puVar4;
    *(long *)(lVar7 + _DAT_112f62780) = lVar5;
    plVar1 = (long *)(lVar7 + _DAT_112f62788);
    *plVar1 = lVar10;
    plVar1[1] = lVar11;
    *(long *)(lVar7 + _DAT_112f62790) = lVar6;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar7;
    lStack_68 = lVar8;
    func_0x000107c61174(puVar4);
    func_0x000107c61154(&lStack_70,puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(param_1);
  }
  return (undefined1 *)plVar9;
}



/* Entry: 1033c58bc; end: 1033c59a3;  */

void FUN_1033c58bc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_60,param_2);
  func_0x000107c61170(uVar2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1033c59a4; end: 1033c59cf; -[_TtC13GamesExplorer31GamesExplorerCategoriesProvider init] */

void FUN_1033c59a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorer.GamesExplorerCategoriesProvider",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c59d0);
  (*pcVar1)();
}



/* Entry: 1033c59d0; end: 1033c59d3;  */

void FUN_1033c59d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033c59d4; end: 1033c5a0b; -[_TtC13GamesExplorer31GamesExplorerCategoriesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c59d4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f62740));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f62748));
  return;
}



/* Entry: 1033c5a0c; end: 1033c5a2b;  */

void FUN_1033c5a0c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6430);
  return;
}



/* Entry: 1033c5a2c; end: 1033c5a4f;  */

void FUN_1033c5a2c(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001033c5a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1033c5a50; end: 1033c5aaf; -[_TtC13GamesExplorerP33_2496163DEAD70A26E70BCD5A794D22C945GamesExplorerCollapsedCategoriesResponseState init] */

void FUN_1033c5a50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorer.GamesExplorerCollapsedCategoriesResponseState",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c5a7c);
  (*pcVar1)();
}



/* Entry: 1033c5ab0; end: 1033c5b0b; -[_TtC13GamesExplorerP33_2496163DEAD70A26E70BCD5A794D22C945GamesExplorerCollapsedCategoriesResponseState .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033c5adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c5ae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c5ab0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f62778));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f62780));
  return;
}



/* Entry: 1033c5b0c; end: 1033c5b2b;  */

void FUN_1033c5b0c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d64f8);
  return;
}



/* Entry: 1033c5b2c; end: 1033c5b6f;  */

void FUN_1033c5b2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1033c6a30(&uStack_48,*param_2);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  param_1[4] = uStack_28;
  return;
}


