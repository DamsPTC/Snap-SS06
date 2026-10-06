/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013364e0; end: 1013364eb; -[SCShoppingPreviewProductLinkImplEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013364e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74150;
  func_0x000107c61428(param_1 + _DAT_112d74150,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013364ec; end: 10133653f;  */

void FUN_1013364ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101336540; end: 101336587; -[SCShoppingPreviewProductLinkImplEntryPoint shoppingPreviewProductLinkServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336540(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74158;
  func_0x000107c61428(param_1 + _DAT_112d74158,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101336588; end: 101336593; -[SCShoppingPreviewProductLinkImplEntryPoint setShoppingPreviewProductLinkServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74158;
  func_0x000107c61428(param_1 + _DAT_112d74158,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101336594; end: 1013365db; -[SCShoppingPreviewProductLinkImplEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336594(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74160;
  func_0x000107c61428(param_1 + _DAT_112d74160,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1013365dc; end: 1013365e7; -[SCShoppingPreviewProductLinkImplEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013365dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74160;
  func_0x000107c61428(param_1 + _DAT_112d74160,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013365e8; end: 101336647;  */

void FUN_1013365e8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101336648; end: 101336a2b;  */

/* WARNING: Possible PIC construction at 0x000101336878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101336888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101336898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013368a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013368b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013368c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013368d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013369e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013369f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101336a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013369b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013369c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101336984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101336994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101336964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101336974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101336954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101336978) */
/* WARNING: Removing unreachable block (ram,0x000101336968) */
/* WARNING: Removing unreachable block (ram,0x000101336998) */
/* WARNING: Removing unreachable block (ram,0x000101336988) */
/* WARNING: Removing unreachable block (ram,0x0001013369c8) */
/* WARNING: Removing unreachable block (ram,0x0001013369b8) */
/* WARNING: Removing unreachable block (ram,0x000101336a08) */
/* WARNING: Removing unreachable block (ram,0x0001013369f8) */
/* WARNING: Removing unreachable block (ram,0x0001013369e8) */
/* WARNING: Removing unreachable block (ram,0x0001013368dc) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001013368cc) */
/* WARNING: Removing unreachable block (ram,0x0001013368bc) */
/* WARNING: Removing unreachable block (ram,0x0001013368ac) */
/* WARNING: Removing unreachable block (ram,0x00010133689c) */
/* WARNING: Removing unreachable block (ram,0x00010133688c) */
/* WARNING: Removing unreachable block (ram,0x00010133687c) */
/* WARNING: Removing unreachable block (ram,0x000101336958) */

void FUN_101336648(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c4f198();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3fe44();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4d52c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c5b13c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5aadc();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c5e1d0();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = unaff_x20;
              func_0x000107c5c634();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                func_0x000107c3fa0c();
                func_0x000107c61180();
                if (unaff_x20 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  FUN_101332e60();
                  func_0x000107c613fc();
                  func_0x000107c3fe2c();
                  func_0x000107c61180();
                  lVar8 = lVar1;
                  func_0x000107c5b1fc();
                  func_0x000107c61180();
                  func_0x000107c5d2b0();
                  func_0x000107c61180();
                  puVar9 = &UNK_1103a44f8;
                  func_0x000107c613fc(&UNK_1103a44f8,0x48,7);
                  *(long *)(puVar9 + 0x10) = lVar8;
                  *(long *)(puVar9 + 0x18) = lVar3;
                  *(long *)(puVar9 + 0x20) = lVar4;
                  *(long *)(puVar9 + 0x28) = lVar2;
                  *(long *)(puVar9 + 0x30) = lVar7;
                  *(long *)(puVar9 + 0x38) = lVar6;
                  *(long *)(puVar9 + 0x40) = unaff_x20;
                  func_0x0001000285a8(0x112d73d50,&UNK_10d934440);
                  func_0x000107c613fc();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174(lVar6);
                  func_0x000107c61174(unaff_x20);
                  pcVar10 = FUN_101336a2c;
                  func_0x0001000bdd8c(FUN_101336a2c,puVar9);
                  FUN_10133e658(0);
                  func_0x000107c610f8();
                  func_0x000107c6157c(pcVar10);
                  func_0x00010133e59c();
                  func_0x000107c42c20(lVar5);
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101336a2c; end: 101336a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336a2c(undefined8 *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar17;
  undefined8 uVar18;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar19;
  long unaff_x20;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 auStack_108 [3];
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined8 auStack_e0 [3];
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *apuStack_b8 [3];
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *apuStack_90 [3];
  undefined *puStack_78;
  undefined **ppuStack_70;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar15 = *(long *)(unaff_x20 + 0x20);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar16 = *(long *)(unaff_x20 + 0x40);
  puVar5 = (undefined *)0x0;
  func_0x00010133350c(0,*(undefined8 *)(unaff_x20 + 0x18));
  puStack_170 = puVar5;
  func_0x000107c613fc();
  *(long *)(puVar5 + 0x10) = lVar6;
  func_0x000107c61174();
  func_0x00010451338c();
  lVar9 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lStack_150 = lVar9;
  if (lVar9 == 0) {
    pcVar1 = "Navigation delegate is unavailable";
    uVar18 = 0x23;
    uVar17 = 0xd000000000000022;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar15 != 0) {
      puVar7 = (undefined *)0x0;
      puStack_160 = param_1;
      FUN_1013333e8();
      puVar8 = puVar7;
      func_0x000107c613fc();
      lVar6 = _DAT_112d73df0;
      lVar9 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar8 + lVar6,1,1,lVar9);
      *(long *)(puVar8 + 0x10) = lVar15;
      uVar19 = *(undefined8 *)(lVar10 + _DAT_113091b70);
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(puVar8);
      lStack_168 = lVar15;
      func_0x000107c615f0(lVar15);
      func_0x000107c41b80(uVar19);
      func_0x000107c61180();
      func_0x000107c61174();
      uVar18 = uVar17;
      FUN_101332e80();
      uStack_178 = uVar18;
      func_0x000107c61170(uVar17);
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(puVar8);
      func_0x000107c41b80();
      func_0x000107c61180();
      uStack_188 = uVar19;
      func_0x000107c3fa04();
      func_0x000107c61180();
      puVar3 = puStack_170;
      if (lVar16 != 0) {
        puStack_78 = puStack_170;
        ppuStack_70 = &PTR_DAT_1103a4328;
        ppuStack_98 = &PTR_DAT_1103a4300;
        lVar9 = 0;
        puStack_158 = puVar8;
        apuStack_b8[0] = puVar8;
        puStack_a0 = puVar7;
        apuStack_90[0] = puVar5;
        FUN_101335b98();
        lVar10 = lVar9;
        lStack_1c8 = lVar9;
        func_0x000107c610f8();
        func_0x0001000c6518(apuStack_90,puVar3);
        uStack_198 = *(undefined8 *)(*(long *)(puVar3 + -8) + 0x40);
        puStack_1c0 = (undefined1 *)&puStack_1d0;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uStack_190 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
        puVar21 = (undefined8 *)((long)&puStack_1d0 - uStack_190);
        pcStack_1a0 = *(code **)(extraout_x8 + 0x10);
        (*pcStack_1a0)(puVar21);
        func_0x0001000c6518(apuStack_b8,puVar7);
        uStack_1b0 = *(undefined8 *)(*(long *)(puVar7 + -8) + 0x40);
        puStack_1d0 = puVar21;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uStack_1a8 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
        puVar20 = (undefined8 *)((long)puVar21 - uStack_1a8);
        pcStack_1b8 = *(code **)(extraout_x8_00 + 0x10);
        (*pcStack_1b8)(puVar20);
        lVar6 = _DAT_112d740c8;
        auStack_e0[0] = *puVar21;
        auStack_108[0] = *puVar20;
        puStack_c8 = puVar3;
        ppuStack_c0 = &PTR_DAT_1103a4328;
        ppuStack_e8 = &PTR_DAT_1103a4300;
        puVar11 = PTR_PTR_1126ae810;
        puStack_f0 = puVar7;
        func_0x000107c610f8();
        func_0x000107c6157c(puVar5);
        func_0x000107c6157c(puVar8);
        lVar15 = lStack_150;
        func_0x000107c615f0(lStack_150);
        func_0x000107c453e4();
        *(undefined **)(lVar10 + lVar6) = puVar11;
        lVar6 = _DAT_112d740d0;
        lVar12 = 0;
        FUN_10133e00c();
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar10 + lVar6,1,1,lVar12);
        *(undefined8 *)(lVar10 + _DAT_112d740d8) = 0;
        FUN_101333170(auStack_e0,lVar10 + _DAT_112d740a0);
        func_0x000107c615fc(lVar10 + _DAT_112d740a8,lVar15);
        uVar17 = uStack_180;
        *(undefined8 *)(lVar10 + _DAT_112d740b0) = uStack_180;
        FUN_101333170(auStack_108,lVar10 + _DAT_112d740b8);
        *(long *)(lVar10 + _DAT_112d740c0) = lVar16;
        puVar8 = PTR_s_init_1125d9248;
        lStack_118 = lVar10;
        lStack_110 = lVar9;
        func_0x000107c61174(uVar17);
        func_0x000107c615f0(lVar16);
        plVar13 = &lStack_118;
        func_0x000107c61154(plVar13,puVar8);
        puVar8 = &UNK_1103a4260;
        func_0x000107c613fc(&UNK_1103a4260,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,plVar13);
        ppuStack_128 = (undefined **)FUN_1013331b4;
        puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_140 = 0x42000000;
        pcStack_138 = FUN_100c1de60;
        puStack_130 = &UNK_1103a4278;
        ppuVar14 = &puStack_148;
        puStack_120 = puVar8;
        func_0x000107c60bc4(ppuVar14);
        puVar8 = puStack_120;
        func_0x000107c61174();
        func_0x000107c61574(puVar8);
        uVar17 = uStack_188;
        uVar18 = uStack_188;
        func_0x000107c5c320(uStack_188);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar14);
        uVar19 = *(undefined8 *)((long)plVar13 + _DAT_112d740c8);
        func_0x000107c61174(uVar19);
        func_0x000107c3e924(uVar18);
        func_0x000107c615e8(lVar16);
        func_0x000107c61170(plVar13);
        func_0x000107c615e8(lVar15);
        func_0x000107c61170(uVar17);
        func_0x000107c61170(uVar18);
        func_0x000107c61170(uVar19);
        func_0x000107c61574(puVar5);
        puVar8 = puStack_158;
        func_0x000107c61574(puStack_158);
        func_0x0001000834e4(auStack_108);
        func_0x0001000834e4(auStack_e0);
        func_0x0001000834e4(apuStack_b8);
        func_0x0001000834e4(apuStack_90);
        puVar2 = puStack_1c0;
        ppuStack_128 = &PTR_DAT_1103a4328;
        puStack_130 = puVar3;
        ppuStack_70 = &PTR_DAT_1103a4300;
        apuStack_90[0] = puVar8;
        lVar15 = 0;
        puStack_148 = puVar5;
        puStack_78 = puVar7;
        func_0x000101333ddc();
        lVar6 = lVar15;
        func_0x000107c613fc();
        func_0x0001000c6518(&puStack_148,puVar3);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar21 = (undefined8 *)(puVar2 + -uStack_190);
        (*pcStack_1a0)(puVar21);
        func_0x0001000c6518(apuStack_90,puVar7);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar20 = (undefined8 *)((long)puVar21 - uStack_1a8);
        (*pcStack_1b8)(puVar20);
        uVar17 = *puVar21;
        uVar18 = *puVar20;
        *(undefined **)(lVar6 + 0x28) = puVar3;
        *(undefined ***)(lVar6 + 0x30) = &PTR_DAT_1103a4328;
        *(undefined8 *)(lVar6 + 0x10) = uVar17;
        *(undefined **)(lVar6 + 0x58) = puVar7;
        *(undefined ***)(lVar6 + 0x60) = &PTR_DAT_1103a4300;
        *(long **)(lVar6 + 0x38) = plVar13;
        *(undefined8 *)(lVar6 + 0x40) = uVar18;
        func_0x000107c6157c(puVar5);
        puVar3 = puStack_158;
        func_0x000107c6157c(puStack_158);
        func_0x000107c61174();
        func_0x0001000834e4(apuStack_90);
        func_0x0001000834e4(&puStack_148);
        uVar18 = 0;
        FUN_101334d2c();
        puVar21 = puStack_160;
        uVar17 = uStack_178;
        puStack_160[3] = uVar18;
        puStack_160[4] = &PTR_DAT_1103a43f0;
        *puStack_160 = uStack_178;
        puStack_160[8] = lStack_1c8;
        puStack_160[9] = &PTR_DAT_1103a4408;
        puStack_160[5] = plVar13;
        puStack_160[0xd] = lVar15;
        puStack_160[0xe] = &PTR_DAT_1103a4338;
        func_0x000107c61174(plVar13);
        func_0x000107c61174(uVar17);
        func_0x000107c61170(plVar13);
        func_0x000107c615e8(lStack_150);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(puVar5);
        func_0x000107c615e8(lStack_168);
        puVar21[10] = lVar6;
        func_0x000107c61170(uVar17);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101332d3c);
      (*pcVar4)();
    }
    pcVar1 = "Unlockable Lens tracker is unavailable";
    uVar18 = 0x26;
    uVar17 = 0xd000000000000026;
  }
  func_0x000107c60450("Fatal error",0xb,2,uVar17,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                      "ShoppingPreviewProductLinkImpl/ShoppingPreviewProductLinkImplEntryPoint.swift"
                      ,0x4d,2,uVar18,0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101332dd8);
  (*pcVar4)();
}



/* Entry: 101336a40; end: 101336a67; -[SCShoppingPreviewProductLinkImplEntryPoint begin] */

void FUN_101336a40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101336648();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101336a68; end: 101336aab; -[SCShoppingPreviewProductLinkImplEntryPoint end] */

void FUN_101336a68(undefined8 param_1)

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



/* Entry: 101336aac; end: 101336ec7;  */

void FUN_101336aac(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffec && param_3 == -0x7ffffffef10cf600) ||
     (func_0x000107c605b8(0xd000000000000014,0x800000010ef30a00,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c577dc();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10c8770)) ||
       (func_0x000107c605b8(0xd000000000000016,0x800000010ef37890,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c535c4();
    }
    else {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd000000000000021;
          if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10c8750)) ||
             (func_0x000107c605b8(0xd000000000000021,0x800000010ef378b0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c59328();
          }
          else {
            uVar2 = 0x63536d6574737973;
            if (((param_2 == 0x63536d6574737973) && (param_3 == -0x14ffffffff9a8f91)) ||
               (func_0x000107c605b8(0x63536d6574737973,0xeb0000000065706f,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c59b6c();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
                 (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c53414();
              }
              else {
                uVar2 = 0xd000000000000029;
                if (((param_2 == -0x2fffffffffffffd7) && (param_3 == -0x7ffffffef10c8720)) ||
                   (func_0x000107c605b8(0xd000000000000029,0x800000010ef378e0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c59114();
                }
                else {
                  uVar2 = 0xd000000000000017;
                  if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) &&
                     (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "ShoppingPreviewProductLinkImpl/SCShoppingPreviewProductLinkImplEntryPoint.swift"
                                        ,0x4f,2,0x48,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x101336ec8);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5a68c();
                }
              }
            }
          }
          goto LAB_101336b3c;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c569f0();
    }
  }
LAB_101336b3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101336ec8; end: 101336f73; -[SCShoppingPreviewProductLinkImplEntryPoint setValue:forIvarName:] */

void FUN_101336ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101336aac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101336f74; end: 10133704f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336f74(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d74128,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d74130,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d74138,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d74140,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d74148,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d74150,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d74158) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d74160) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d74168) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101337050; end: 10133706f; -[SCShoppingPreviewProductLinkImplEntryPoint init] */

void FUN_101337050(void)

{
  FUN_101336f74();
  return;
}



/* Entry: 101337070; end: 1013370a3;  */

void FUN_101337070(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013370a4; end: 10133714b; -[SCShoppingPreviewProductLinkImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013370a4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d74128);
  func_0x000107c61610(param_1 + _DAT_112d74130);
  func_0x000107c61610(param_1 + _DAT_112d74138);
  func_0x000107c61610(param_1 + _DAT_112d74140);
  func_0x000107c61610(param_1 + _DAT_112d74148);
  func_0x000107c61610(param_1 + _DAT_112d74150);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74158));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74160));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d74168));
  return;
}



/* Entry: 10133714c; end: 10133716b;  */

void FUN_10133714c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c9590);
  return;
}



/* Entry: 10133716c; end: 1013379b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10133716c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  
  func_0x000107c613fc();
  uVar11 = *(undefined8 *)(param_2 + _DAT_112d746e8);
  func_0x000107c6157c(uVar11);
  uVar1 = param_3;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar2 = param_4;
  func_0x000107c4f07c();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_5 + _DAT_113083868);
  func_0x000107c61174();
  uVar4 = param_6;
  func_0x000107c4bff8();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_7 + _DAT_112d749f0);
  puVar5 = &UNK_1103a45f8;
  func_0x000107c613fc(&UNK_1103a45f8,0x40,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar4;
  *(undefined8 *)(puVar5 + 0x28) = uVar11;
  *(undefined8 *)(puVar5 + 0x30) = uVar2;
  *(undefined8 *)(puVar5 + 0x38) = uVar10;
  func_0x0001000285a8(0x112d74198,&UNK_10d934780);
  func_0x000107c613fc();
  func_0x000107c61580(uVar10,2);
  func_0x000107c6157c(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar2);
  pcVar6 = FUN_1013379b8;
  func_0x0001000bdd8c(FUN_1013379b8,puVar5);
  uVar7 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  uVar8 = 0x112d73a18;
  func_0x0001000285a8(0x112d73a18,&UNK_10d9341e0);
  uVar9 = 0x1013379bc;
  func_0x0001000cb480(0x1013379bc,0,uVar8);
  uVar8 = uVar9;
  func_0x0001003a5b88();
  func_0x000107c61574(uVar9);
  func_0x000107c4fba8(uVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61574(uVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  return unaff_x20;
}



/* Entry: 1013379b8; end: 1013379c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013379b8(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long extraout_x8;
  undefined8 uVar9;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long alStack_190 [4];
  long lStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 auStack_138 [3];
  long lStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined **ppuStack_f0;
  long alStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
    pcVar1 = "Composer runtime is missing";
    uVar14 = 0x22;
    uVar9 = 0xd00000000000001b;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 == 0) {
      pcVar1 = "Blizard User Tracked Logger is missing";
      uVar14 = 0x25;
      uVar9 = 0xd000000000000026;
    }
    else {
      lStack_170 = lVar11;
      puStack_168 = (undefined1 *)uVar14;
      uStack_158 = uVar9;
      puStack_150 = param_1;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = 0;
        func_0x000101337b88();
        lVar11 = lVar3;
        func_0x000107c613fc();
        *(long *)(lVar11 + 0x10) = lVar2;
        func_0x000107c615f0(lVar2);
        func_0x0001000d224c(&lStack_110);
        alStack_190[1] = uStack_108;
        alStack_190[0] = lStack_110;
        puVar4 = PTR_PTR_1126aeea8;
        func_0x000107c610f8();
        lStack_160 = lVar2;
        func_0x000107c615f0(lVar6);
        func_0x000107c453e4();
        ppuStack_c0 = &PTR_DAT_1103a4650;
        lVar5 = 0;
        alStack_190[2] = lVar11;
        alStack_190[3] = lVar6;
        alStack_e0[0] = lVar11;
        lStack_c8 = lVar3;
        func_0x000101338fb4();
        lVar2 = lVar5;
        func_0x000107c613fc();
        func_0x0001000c6518(alStack_e0,lVar3);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
        puVar13 = (undefined8 *)((long)alStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
        (**(code **)(extraout_x12 + 0x10))(puVar13);
        uVar9 = *puVar13;
        *(long *)(lVar2 + 0x48) = lVar3;
        *(undefined ***)(lVar2 + 0x50) = &PTR_DAT_1103a4650;
        *(undefined **)(lVar2 + 0x28) = puVar4;
        *(undefined8 *)(lVar2 + 0x30) = uVar9;
        *(undefined8 *)(lVar2 + 0x58) = 0;
        *(undefined8 *)(lVar2 + 0x60) = 0;
        *(long *)(lVar2 + 0x18) = alStack_190[1];
        *(long *)(lVar2 + 0x10) = alStack_190[0];
        *(long *)(lVar2 + 0x20) = lVar6;
        func_0x000107c6157c(lVar11);
        func_0x0001000834e4(alStack_e0);
        func_0x0001000d224c(&lStack_110);
        ppuStack_c0 = &PTR_DAT_1103a4668;
        lVar6 = 0;
        alStack_e0[0] = lVar2;
        lStack_c8 = lVar5;
        func_0x000101337d1c();
        func_0x000107c613fc();
        alStack_190[1] = uStack_108;
        alStack_190[0] = lStack_110;
        func_0x0001000c6518(alStack_e0,lVar5);
        lVar11 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar12 = lVar11 + 0xfU & 0xfffffffffffffff0;
        puVar13 = (undefined8 *)((long)alStack_190 - uVar12);
        pcVar10 = *(code **)(extraout_x8_00 + 0x10);
        (*pcVar10)(puVar13);
        uVar9 = *puVar13;
        *(long *)(lVar6 + 0x58) = lVar5;
        *(undefined ***)(lVar6 + 0x60) = &PTR_DAT_1103a4668;
        *(undefined8 *)(lVar6 + 0x40) = uVar9;
        *(undefined8 *)(lVar6 + 0x28) = 0;
        func_0x000107c61614(lVar6 + 0x20,0);
        *(undefined8 *)(lVar6 + 0x38) = 0;
        func_0x000107c61614(lVar6 + 0x30,0);
        func_0x0001000c6560(0);
        func_0x000107c613fc();
        lVar11 = lVar2;
        func_0x000107c6157c();
        func_0x0001000c6580();
        *(long *)(lVar6 + 0x68) = lVar11;
        *(long *)(lVar6 + 0x18) = alStack_190[1];
        *(long *)(lVar6 + 0x10) = alStack_190[0];
        func_0x0001000834e4(alStack_e0);
        lVar3 = 0;
        func_0x00010133ab34();
        func_0x000107c613fc();
        lVar11 = lStack_170;
        *(undefined8 *)(lVar3 + 0x28) = 1;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *(long *)(lVar3 + 0x10) = lVar6;
        *(long *)(lVar3 + 0x18) = lStack_170;
        func_0x000107c61580(lVar6,2);
        func_0x000107c615f0(lVar11);
        func_0x000107c6157c(lVar3);
        func_0x0001000d224c(alStack_e0);
        ppuStack_f0 = &PTR_DAT_1103a4668;
        lVar7 = 0;
        lStack_110 = lVar2;
        lStack_f8 = lVar5;
        FUN_101339328();
        lVar2 = lVar7;
        func_0x000107c610f8();
        func_0x0001000c6518(&lStack_110,lVar5);
        puStack_168 = (undefined1 *)alStack_190;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar13 = (undefined8 *)((long)alStack_190 - uVar12);
        (*pcVar10)(puVar13);
        uVar9 = uStack_158;
        auStack_138[0] = *puVar13;
        ppuStack_118 = &PTR_DAT_1103a4668;
        *(long *)(lVar2 + _DAT_112d74558) = lVar6;
        *(long *)(lVar2 + _DAT_112d74560) = lVar3;
        *(undefined8 *)(lVar2 + _DAT_112d74568) = uStack_158;
        lStack_120 = lVar5;
        FUN_101337a60(auStack_138,lVar2 + _DAT_112d74570);
        func_0x000101337aa4(alStack_e0,lVar2 + _DAT_112d74578);
        puVar4 = PTR_s_init_1125d9248;
        lStack_148 = lVar2;
        lStack_140 = lVar7;
        func_0x000107c61174(uVar9);
        plVar8 = &lStack_148;
        func_0x000107c61154(plVar8,puVar4);
        func_0x000107c61574(alStack_190[2]);
        func_0x000107c615e8(lStack_160);
        func_0x000107c615e8(alStack_190[3]);
        func_0x000107c615e8(lVar11);
        func_0x000101337ae0(alStack_e0);
        func_0x0001000834e4(auStack_138);
        func_0x0001000834e4(&lStack_110);
        *(undefined ***)(lVar6 + 0x28) = &PTR_DAT_1103a4830;
        func_0x000107c61604(lVar6 + 0x20,lVar3);
        func_0x000107c61174();
        func_0x000107c61574(lVar3);
        *(undefined ***)(lVar6 + 0x38) = &PTR_DAT_1103a4688;
        func_0x000107c61604(lVar6 + 0x30,plVar8);
        func_0x000107c61574(lVar6);
        func_0x000107c61170(plVar8);
        *puStack_150 = plVar8;
        return;
      }
      pcVar1 = "Preview Common Logging is missing";
      uVar14 = 0x28;
      uVar9 = 0xd000000000000021;
    }
  }
  func_0x000107c60450("Fatal error",0xb,2,uVar9,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                      "ShoppingPreviewShoppingLinkImpl/ShoppingPreviewShoppingLinkImplEntryPoint.swift"
                      ,0x4f,2,uVar14,0);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1013379b8);
  (*pcVar10)();
}



/* Entry: 1013379c8; end: 101337a13;  */

void FUN_1013379c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101337a14; end: 101337a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101337a14(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long extraout_x8;
  undefined8 uVar9;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long alStack_190 [4];
  long lStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 auStack_138 [3];
  long lStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined **ppuStack_f0;
  long alStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
    pcVar1 = "Composer runtime is missing";
    uVar14 = 0x22;
    uVar9 = 0xd00000000000001b;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 == 0) {
      pcVar1 = "Blizard User Tracked Logger is missing";
      uVar14 = 0x25;
      uVar9 = 0xd000000000000026;
    }
    else {
      lStack_170 = lVar11;
      puStack_168 = (undefined1 *)uVar14;
      uStack_158 = uVar9;
      puStack_150 = param_1;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = 0;
        func_0x000101337b88();
        lVar11 = lVar3;
        func_0x000107c613fc();
        *(long *)(lVar11 + 0x10) = lVar2;
        func_0x000107c615f0(lVar2);
        func_0x0001000d224c(&lStack_110);
        alStack_190[1] = uStack_108;
        alStack_190[0] = lStack_110;
        puVar4 = PTR_PTR_1126aeea8;
        func_0x000107c610f8();
        lStack_160 = lVar2;
        func_0x000107c615f0(lVar6);
        func_0x000107c453e4();
        ppuStack_c0 = &PTR_DAT_1103a4650;
        lVar5 = 0;
        alStack_190[2] = lVar11;
        alStack_190[3] = lVar6;
        alStack_e0[0] = lVar11;
        lStack_c8 = lVar3;
        func_0x000101338fb4();
        lVar2 = lVar5;
        func_0x000107c613fc();
        func_0x0001000c6518(alStack_e0,lVar3);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
        puVar13 = (undefined8 *)((long)alStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
        (**(code **)(extraout_x12 + 0x10))(puVar13);
        uVar9 = *puVar13;
        *(long *)(lVar2 + 0x48) = lVar3;
        *(undefined ***)(lVar2 + 0x50) = &PTR_DAT_1103a4650;
        *(undefined **)(lVar2 + 0x28) = puVar4;
        *(undefined8 *)(lVar2 + 0x30) = uVar9;
        *(undefined8 *)(lVar2 + 0x58) = 0;
        *(undefined8 *)(lVar2 + 0x60) = 0;
        *(long *)(lVar2 + 0x18) = alStack_190[1];
        *(long *)(lVar2 + 0x10) = alStack_190[0];
        *(long *)(lVar2 + 0x20) = lVar6;
        func_0x000107c6157c(lVar11);
        func_0x0001000834e4(alStack_e0);
        func_0x0001000d224c(&lStack_110);
        ppuStack_c0 = &PTR_DAT_1103a4668;
        lVar6 = 0;
        alStack_e0[0] = lVar2;
        lStack_c8 = lVar5;
        func_0x000101337d1c();
        func_0x000107c613fc();
        alStack_190[1] = uStack_108;
        alStack_190[0] = lStack_110;
        func_0x0001000c6518(alStack_e0,lVar5);
        lVar11 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar12 = lVar11 + 0xfU & 0xfffffffffffffff0;
        puVar13 = (undefined8 *)((long)alStack_190 - uVar12);
        pcVar10 = *(code **)(extraout_x8_00 + 0x10);
        (*pcVar10)(puVar13);
        uVar9 = *puVar13;
        *(long *)(lVar6 + 0x58) = lVar5;
        *(undefined ***)(lVar6 + 0x60) = &PTR_DAT_1103a4668;
        *(undefined8 *)(lVar6 + 0x40) = uVar9;
        *(undefined8 *)(lVar6 + 0x28) = 0;
        func_0x000107c61614(lVar6 + 0x20,0);
        *(undefined8 *)(lVar6 + 0x38) = 0;
        func_0x000107c61614(lVar6 + 0x30,0);
        func_0x0001000c6560(0);
        func_0x000107c613fc();
        lVar11 = lVar2;
        func_0x000107c6157c();
        func_0x0001000c6580();
        *(long *)(lVar6 + 0x68) = lVar11;
        *(long *)(lVar6 + 0x18) = alStack_190[1];
        *(long *)(lVar6 + 0x10) = alStack_190[0];
        func_0x0001000834e4(alStack_e0);
        lVar3 = 0;
        func_0x00010133ab34();
        func_0x000107c613fc();
        lVar11 = lStack_170;
        *(undefined8 *)(lVar3 + 0x28) = 1;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *(long *)(lVar3 + 0x10) = lVar6;
        *(long *)(lVar3 + 0x18) = lStack_170;
        func_0x000107c61580(lVar6,2);
        func_0x000107c615f0(lVar11);
        func_0x000107c6157c(lVar3);
        func_0x0001000d224c(alStack_e0);
        ppuStack_f0 = &PTR_DAT_1103a4668;
        lVar7 = 0;
        lStack_110 = lVar2;
        lStack_f8 = lVar5;
        FUN_101339328();
        lVar2 = lVar7;
        func_0x000107c610f8();
        func_0x0001000c6518(&lStack_110,lVar5);
        puStack_168 = (undefined1 *)alStack_190;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar13 = (undefined8 *)((long)alStack_190 - uVar12);
        (*pcVar10)(puVar13);
        uVar9 = uStack_158;
        auStack_138[0] = *puVar13;
        ppuStack_118 = &PTR_DAT_1103a4668;
        *(long *)(lVar2 + _DAT_112d74558) = lVar6;
        *(long *)(lVar2 + _DAT_112d74560) = lVar3;
        *(undefined8 *)(lVar2 + _DAT_112d74568) = uStack_158;
        lStack_120 = lVar5;
        FUN_101337a60(auStack_138,lVar2 + _DAT_112d74570);
        func_0x000101337aa4(alStack_e0,lVar2 + _DAT_112d74578);
        puVar4 = PTR_s_init_1125d9248;
        lStack_148 = lVar2;
        lStack_140 = lVar7;
        func_0x000107c61174(uVar9);
        plVar8 = &lStack_148;
        func_0x000107c61154(plVar8,puVar4);
        func_0x000107c61574(alStack_190[2]);
        func_0x000107c615e8(lStack_160);
        func_0x000107c615e8(alStack_190[3]);
        func_0x000107c615e8(lVar11);
        func_0x000101337ae0(alStack_e0);
        func_0x0001000834e4(auStack_138);
        func_0x0001000834e4(&lStack_110);
        *(undefined ***)(lVar6 + 0x28) = &PTR_DAT_1103a4830;
        func_0x000107c61604(lVar6 + 0x20,lVar3);
        func_0x000107c61174();
        func_0x000107c61574(lVar3);
        *(undefined ***)(lVar6 + 0x38) = &PTR_DAT_1103a4688;
        func_0x000107c61604(lVar6 + 0x30,plVar8);
        func_0x000107c61574(lVar6);
        func_0x000107c61170(plVar8);
        *puStack_150 = plVar8;
        return;
      }
      pcVar1 = "Preview Common Logging is missing";
      uVar14 = 0x28;
      uVar9 = 0xd000000000000021;
    }
  }
  func_0x000107c60450("Fatal error",0xb,2,uVar9,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                      "ShoppingPreviewShoppingLinkImpl/ShoppingPreviewShoppingLinkImplEntryPoint.swift"
                      ,0x4f,2,uVar14,0);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1013379b8);
  (*pcVar10)();
}



/* Entry: 101337a40; end: 101337a5f;  */

void FUN_101337a40(void)

{
  func_0x000107c61168(&PTR_PTR_112d741e0);
  return;
}



/* Entry: 101337a60; end: 101337b13;  */

long FUN_101337a60(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101337b14; end: 101337b63;  */

void FUN_101337b14(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d74238 != 0) {
    return;
  }
  puVar1 = &UNK_1103a4638;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d74238 = param_1;
  return;
}



/* Entry: 101337b64; end: 101337ba7;  */

void FUN_101337b64(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101337ba8; end: 101337cd7;  */

/* WARNING: Possible PIC construction at 0x000101337c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101337c38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101337c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101337c1c) */
/* WARNING: Removing unreachable block (ram,0x000101337c3c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101337c28) */
/* WARNING: Removing unreachable block (ram,0x000101337c98) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101337ba8(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0();
  (**(code **)(lVar5 + 8))();
  if (uVar4 >> 0x3e == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) != 1) {
LAB_101337c78:
      lVar5 = unaff_x20 + 0x30;
      func_0x000107c61618();
      if (lVar5 != 0) {
        FUN_101339bec(uVar4);
      }
      goto code_r0x000107c6142c;
    }
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    uVar2 = uVar3;
    func_0x000107c60480();
    if ((uVar2 != 1) || (func_0x000107c60480(), uVar3 == 0)) goto LAB_101337c78;
  }
  if ((uVar4 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101337cd8);
      (*pcVar1)();
    }
    func_0x000107c6157c(*(undefined8 *)(uVar4 + 0x20));
  }
  else {
    FUN_1013303f8(0,uVar4);
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 101337cd8; end: 101337d3b;  */

void FUN_101337cd8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100cacfb0(unaff_x20 + 0x20);
  FUN_100cacfb0(unaff_x20 + 0x30);
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101337d3c; end: 101337d97;  */

void FUN_101337d3c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_101337d98(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101337d98; end: 10133803b;  */

/* WARNING: Possible PIC construction at 0x000101337e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101337f60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101337e90) */
/* WARNING: Removing unreachable block (ram,0x000101337f64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101337d98(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  undefined1 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  lVar3 = 0;
  FUN_10133803c();
  lVar3 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar7 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001013383b0();
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    if (uVar8 == 0) {
LAB_101337fe0:
      func_0x000107c6142c(param_1);
      uVar10 = unaff_x20 + 0x20;
      func_0x000107c61618();
      if (uVar10 == 0) {
        return;
      }
      uVar8 = uVar10;
      FUN_10133a538();
      if (uVar8 != 0) {
        func_0x000107c550d8();
        func_0x000107c61170(uVar8);
      }
      goto code_r0x000107c615e8;
    }
LAB_101337e14:
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001013380dc(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10133803c);
      (*pcVar2)();
    }
    uVar10 = 0;
    do {
      lVar4 = _DAT_1137ff3a8;
      if ((param_1 & 0xc000000000000001) != 0) {
        FUN_1013303f8(uVar10,param_1);
        lVar3 = _DAT_1137ff3a8;
        lVar4 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar4 + -8) + 0x10))(puVar7,uVar10 + lVar3,lVar4);
        goto code_r0x000107c615e8;
      }
      lVar6 = *(long *)(param_1 + uVar10 * 8 + 0x20);
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(puVar7,lVar6 + lVar4,lVar5);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        func_0x0001013380dc(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
      FUN_101338540(puVar7,puVar9 + *(long *)(lVar3 + 0x48) * uVar1 +
                                    ((ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
                                    ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)));
    } while (uVar8 != uVar10);
    func_0x000107c6142c(param_1);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar8 = param_1;
    }
    uVar10 = uVar8;
    func_0x000107c60480();
    if (uVar10 == 0) goto LAB_101337fe0;
    func_0x000107c60480();
    if (uVar8 != 0) goto LAB_101337e14;
    func_0x000107c6142c(param_1);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar10 = unaff_x20 + 0x20;
  func_0x000107c61618();
  if (uVar10 == 0) {
    func_0x000107c6142c(puVar9);
    func_0x0001000a8868(unaff_x20 + 0x40,*(undefined8 *)(unaff_x20 + 0x58));
    FUN_1013387c4();
    return;
  }
  FUN_10133ab7c(puVar9);
  func_0x000107c6142c(puVar9);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar10);
  return;
}



/* Entry: 10133803c; end: 1013380f7;  */

void FUN_10133803c(undefined8 param_1)

{
  if (lRam0000000112d74418 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62f134);
  return;
}



/* Entry: 1013380f8; end: 10133853f;  */

undefined *
FUN_1013380f8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101338234);
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
    (*param_5)();
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
    func_0x000101338584(0,param_6,param_7);
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



/* Entry: 101338540; end: 101338743;  */

undefined8 FUN_101338540(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10133803c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101338744; end: 10133875b;  */

void FUN_101338744(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10133875c; end: 1013387c3;  */

void FUN_10133875c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,1,&lStack_28,param_1 + 0x10);
  }
  return;
}



/* Entry: 1013387c4; end: 1013389cb;  */

/* WARNING: Possible PIC construction at 0x000101338804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101338854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101338898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101338858) */
/* WARNING: Removing unreachable block (ram,0x000101338808) */
/* WARNING: Removing unreachable block (ram,0x00010133889c) */
/* WARNING: Removing unreachable block (ram,0x0001013389c4) */
/* WARNING: Removing unreachable block (ram,0x0001013388f0) */
/* WARNING: Removing unreachable block (ram,0x0001013389c8) */
/* WARNING: Removing unreachable block (ram,0x000101338910) */
/* WARNING: Removing unreachable block (ram,0x0001013389b8) */
/* WARNING: Removing unreachable block (ram,0x000101338958) */
/* WARNING: Removing unreachable block (ram,0x000101338964) */
/* WARNING: Removing unreachable block (ram,0x000101338968) */
/* WARNING: Removing unreachable block (ram,0x0001013389bc) */
/* WARNING: Removing unreachable block (ram,0x00010133896c) */
/* WARNING: Removing unreachable block (ram,0x000101338974) */
/* WARNING: Removing unreachable block (ram,0x000101338978) */
/* WARNING: Removing unreachable block (ram,0x0001013389c0) */
/* WARNING: Removing unreachable block (ram,0x00010133897c) */

void FUN_1013387c4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010011df08();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
  }
  else {
    func_0x000107c5faec();
    puVar1 = PTR_PTR_1126a6ae0;
    func_0x000107c610f8(PTR_PTR_1126a6ae0);
    func_0x000107c453e4();
    func_0x000107c55308();
    func_0x000107c61170(param_1);
    func_0x000101338d90();
    if (param_2 == 0) {
      func_0x000107c55e70(puVar1);
      param_2 = 0;
      func_0x000107c61170(0);
      func_0x000101338b8c();
      uVar2 = 0;
      FUN_101339030(0);
      func_0x000107c5fc48(param_2,uVar2);
    }
    else {
      func_0x000107c5fadc();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1013389cc; end: 101338b8b;  */

/* WARNING: Possible PIC construction at 0x000101338a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101338a7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101338ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101338ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101338af0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101338adc) */
/* WARNING: Removing unreachable block (ram,0x000101338b88) */
/* WARNING: Removing unreachable block (ram,0x000101338ae0) */
/* WARNING: Removing unreachable block (ram,0x000101338abc) */
/* WARNING: Removing unreachable block (ram,0x000101338b84) */
/* WARNING: Removing unreachable block (ram,0x000101338ac0) */
/* WARNING: Removing unreachable block (ram,0x000101338a80) */
/* WARNING: Removing unreachable block (ram,0x000101338a48) */
/* WARNING: Removing unreachable block (ram,0x000101338a68) */
/* WARNING: Removing unreachable block (ram,0x000101338a50) */
/* WARNING: Removing unreachable block (ram,0x000101338a6c) */
/* WARNING: Removing unreachable block (ram,0x000101338af4) */
/* WARNING: Removing unreachable block (ram,0x000101338b78) */
/* WARNING: Removing unreachable block (ram,0x000101338b28) */
/* WARNING: Removing unreachable block (ram,0x000101338b34) */
/* WARNING: Removing unreachable block (ram,0x000101338b38) */
/* WARNING: Removing unreachable block (ram,0x000101338b7c) */
/* WARNING: Removing unreachable block (ram,0x000101338b3c) */
/* WARNING: Removing unreachable block (ram,0x000101338b44) */
/* WARNING: Removing unreachable block (ram,0x000101338b48) */
/* WARNING: Removing unreachable block (ram,0x000101338b80) */
/* WARNING: Removing unreachable block (ram,0x000101338b4c) */

void FUN_1013389cc(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126a6ad8;
  func_0x000107c610f8(PTR_PTR_1126a6ad8);
  func_0x000107c453e4();
  func_0x000107c52140();
  lVar2 = *(long *)(unaff_x20 + 0x60);
  if (lVar2 == 0) {
    uVar3 = 0;
    lVar2 = -0x2000000000000000;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  func_0x000107c61434();
  func_0x000107c5fadc(uVar3,lVar2);
  func_0x000107c6142c(lVar2);
  func_0x000107c55308(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101338b8c; end: 101338f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101338b8c(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0();
  (**(code **)(lVar1 + 8))();
  if (uVar4 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar9 = uVar4;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (uVar9 == 0) {
    func_0x000107c6142c(uVar4);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001013380a8(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101338d90);
      (*pcVar3)();
    }
    uVar10 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar12 = *(ulong *)(uVar4 + uVar10 * 8 + 0x20);
        func_0x000107c6157c(uVar12);
      }
      else {
        uVar12 = uVar10;
        FUN_1013303f8(uVar10,uVar4);
      }
      puVar5 = PTR_PTR_1126a6ad0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c570b0();
      puVar6 = PTR___sSiN_11034deb0;
      puVar8 = puVar2;
      func_0x000107c6057c(PTR___sSiN_11034deb0,puVar2);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar8);
      func_0x000107c57894(puVar5);
      func_0x000107c61170(puVar6);
      if (*(long *)(uVar12 + 0x20) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(uVar12 + 0x18);
        func_0x000107c5fadc(uVar7);
      }
      func_0x000107c598e0(puVar5);
      func_0x000107c61574(uVar12);
      func_0x000107c61170(uVar7);
      uVar12 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar12) {
        func_0x0001013380a8(1 < *(ulong *)(puVar11 + 0x18),uVar12 + 1,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar11 + 0x10) = uVar12 + 1;
      *(undefined **)(puVar11 + uVar12 * 8 + 0x20) = puVar5;
    } while (uVar9 != uVar10);
    func_0x000107c6142c(uVar4);
  }
  return puVar11;
}



/* Entry: 101338f70; end: 101338fd3;  */

void FUN_101338f70(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101338fd4; end: 10133902f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101338fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,uint param_7)

{
  uint uVar1;
  
  func_0x000107c6142c(param_2);
  if ((param_7 >> 7 & 1) != 0) {
    return;
  }
  func_0x000107c6142c(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 101339030; end: 101339073;  */

void FUN_101339030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d743b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a6ad0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d743b8 = puVar1;
  return;
}



/* Entry: 101339074; end: 1013391c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101339074(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112d74560) + 0x20);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar7 = lVar2;
    FUN_10133a79c();
    func_0x000107c59ed4(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar7);
    lVar7 = *(long *)(unaff_x20 + _DAT_112d74558);
    plVar3 = *(long **)(lVar7 + 0x10);
    lVar2 = *(long *)(lVar7 + 0x18);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 0x10))();
    puVar4 = &UNK_1103a46b0;
    func_0x000107c613fc(&UNK_1103a46b0,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar7);
    pcVar1 = FUN_101339ff4;
    puVar6 = puVar4;
    (**(code **)(*plVar3 + 0x60))(FUN_101339ff4);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    pcVar5 = pcVar1;
    func_0x000107c614f0(pcVar1);
    (**(code **)(puVar6 + 0x10))(*(undefined8 *)(lVar7 + 0x68),pcVar5,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar1);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "ShoppingPreviewShoppingLinkImpl/ShoppingPreviewShoppingLinkView.swift",0x45,2
                      ,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013391c4);
  (*pcVar1)();
}



/* Entry: 1013391c4; end: 1013391eb; -[_TtC31ShoppingPreviewShoppingLinkImpl37ShoppingPreviewShoppingLinkRouterImpl activate] */

void FUN_1013391c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101339074();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013391ec; end: 1013391f3; -[_TtC31ShoppingPreviewShoppingLinkImpl37ShoppingPreviewShoppingLinkRouterImpl responderChainPriority] */

undefined8 FUN_1013391ec(void)

{
  return 0;
}



/* Entry: 1013391f4; end: 10133925f; -[_TtC31ShoppingPreviewShoppingLinkImpl37ShoppingPreviewShoppingLinkRouterImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013391f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_28;
  
  puStack_28 = PTR_DAT_11269e3f0;
  lVar1 = param_3;
  func_0x000107c61494(param_3,1,&puStack_28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + _DAT_112d74560) + 0x20);
    *(long *)(*(long *)(param_1 + _DAT_112d74560) + 0x20) = lVar1;
    func_0x000107c61174(param_3);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101339260; end: 1013392bf; -[_TtC31ShoppingPreviewShoppingLinkImpl37ShoppingPreviewShoppingLinkRouterImpl init] */

void FUN_101339260(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingPreviewShoppingLinkImpl.ShoppingPreviewShoppingLinkRouterImpl",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10133928c);
  (*pcVar1)();
}



/* Entry: 1013392c0; end: 101339327; -[_TtC31ShoppingPreviewShoppingLinkImpl37ShoppingPreviewShoppingLinkRouterImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1013392c0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d74558));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d74560));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74568));
  func_0x0001000834e4(param_1 + _DAT_112d74570);
  param_1 = param_1 + _DAT_112d74578;
  (*(code *)(undefined *)0x10133dd40)();
  return param_1;
}



/* Entry: 101339328; end: 101339347;  */

void FUN_101339328(void)

{
  func_0x000107c61168(&PTR_PTR_1127c9688);
  return;
}



/* Entry: 101339348; end: 1013396a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101339348(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 uStack_71;
  
  uStack_71 = 0;
  uVar12 = *(undefined8 *)(param_1 + _DAT_1137ff3b0);
  puVar3 = &UNK_1103a46d8;
  func_0x000107c613fc(&UNK_1103a46d8,0x28,7);
  *(undefined1 **)(puVar3 + 0x10) = &uStack_71;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(long *)(puVar3 + 0x20) = param_1;
  puVar4 = &UNK_1103a4700;
  func_0x000107c613fc(&UNK_1103a4700,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x101339ffc;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_10133a008;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_101339710;
  puStack_90 = &UNK_1103a4718;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1103a4750;
  func_0x000107c613fc(&UNK_1103a4750,0x28,7);
  *(long *)(puVar6 + 0x10) = param_1;
  *(undefined1 **)(puVar6 + 0x18) = &uStack_71;
  *(long *)(puVar6 + 0x20) = unaff_x20;
  puVar7 = &UNK_1103a4778;
  func_0x000107c613fc(&UNK_1103a4778,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x10133a044;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_88 = FUN_10133a050;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x1010f3860;
  puStack_90 = &UNK_1103a4790;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1103a47c8;
  func_0x000107c613fc(&UNK_1103a47c8,0x28,7);
  *(undefined1 **)(puVar9 + 0x10) = &uStack_71;
  *(long *)(puVar9 + 0x18) = unaff_x20;
  *(long *)(puVar9 + 0x20) = param_1;
  puVar10 = &UNK_1103a47f0;
  func_0x000107c613fc(&UNK_1103a47f0,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_10133a09c;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_88 = FUN_10133a0a8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_101339a78;
  puStack_90 = &UNK_1103a4808;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6b0(uVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000a8868(unaff_x20 + _DAT_112d74570,*(undefined8 *)(unaff_x20 + _DAT_112d74570 + 0x18))
  ;
  FUN_1013389cc(uStack_71);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x69,0x3d,0x32,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013396a0);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x69,0x40,0x1c,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar10;
    func_0x000107c61544(puVar10,"",0x69,0x4e,0x18,1);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013396a8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013396a4);
  (*pcVar2)();
}



/* Entry: 1013396a8; end: 10133970f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013396a8(undefined8 param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_2 = 0;
  func_0x000101339edc(param_4);
  param_3 = param_3 + _DAT_112d74578;
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar2 = *(long *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar1);
  (**(code **)(lVar2 + 8))(param_4,uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 101339710; end: 101339733;  */

void FUN_101339710(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))(param_2);
  return;
}



/* Entry: 101339734; end: 101339a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101339734(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  FUN_10133e00c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = (undefined8 *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar5 - extraout_x8_00;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_1,lVar7);
  lVar3 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar4);
  if ((int)lVar3 == 1) {
    func_0x0001000293e4(lVar7);
    *param_3 = 0;
    func_0x000101339edc(param_2);
    param_4 = param_4 + _DAT_112d74578;
    uVar1 = *(undefined8 *)(param_4 + 0x18);
    lVar3 = *(long *)(param_4 + 0x20);
    func_0x0001000a8868(param_4,uVar1);
    (**(code **)(lVar3 + 8))(param_2,uVar1,lVar3);
    func_0x000107c61574(param_2);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,lVar7,lVar4);
    *param_3 = 1;
    func_0x000101339edc();
    (**(code **)(lVar8 + 0x10))
              ((undefined1 *)((long)puVar5 + (long)*(int *)(lVar2 + 0x14)),lVar6,lVar4);
    *puVar5 = param_2;
    *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar2 + 0x18)) = 0;
    param_4 = param_4 + _DAT_112d74578;
    uVar1 = *(undefined8 *)(param_4 + 0x40);
    lVar3 = *(long *)(param_4 + 0x48);
    func_0x0001000a8868(param_4 + 0x28,uVar1);
    (**(code **)(lVar3 + 8))(puVar5,uVar1,lVar3);
    func_0x00010133a0c8(puVar5,FUN_10133e00c);
    (**(code **)(lVar8 + 8))(lVar6,lVar4);
  }
  return;
}



/* Entry: 101339a78; end: 101339beb;  */

void FUN_101339a78(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(lVar5,param_2);
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar5,param_2 == 0,1);
  if (param_3 != 0) {
    func_0x000107c5edb4(puVar4,param_3);
  }
  uVar3 = (ulong)(param_3 == 0);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar4,uVar3,1,lVar2);
  if (param_5 == 0) {
    param_5 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  (*pcVar1)(lVar5,puVar4,param_4,param_5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x0001000293e4(puVar4);
  func_0x0001000293e4(lVar5);
  return;
}



/* Entry: 101339bec; end: 101339ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101339bec(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uStack_80;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar9 != 0) {
    uStack_80 = param_1 & 0xffffffffffffff8;
    uVar11 = 0;
LAB_101339c64:
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uStack_80 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101339e14);
          (*pcVar2)();
        }
        uVar12 = *(ulong *)(param_1 + uVar11 * 8 + 0x20);
        func_0x000107c6157c(uVar12);
      }
      else {
        uVar12 = uVar11;
        FUN_1013303f8(uVar11,param_1);
      }
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101339e10);
        (*pcVar2)();
      }
      uVar10 = uVar11 + 1;
      lVar13 = *(long *)(uVar12 + 0x20);
      if (lVar13 == 0) {
        func_0x000107c61574(uVar12);
      }
      else {
        uVar8 = *(undefined8 *)(uVar12 + 0x10);
        uVar1 = *(undefined8 *)(uVar12 + 0x18);
        func_0x000107c61434(lVar13);
        puVar3 = PTR___sSiN_11034deb0;
        puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c();
        func_0x000107c5fb78(0x7e,0xe100000000000000);
        func_0x000107c5fb78(uVar1,lVar13);
        func_0x000107c5fb78(0x29,0xe100000000000000);
        uVar4 = 0;
        FUN_1013ce04c(0);
        func_0x000107c610f8();
        func_0x0001013cde44(puVar3,puVar5,uVar8,uVar1,lVar13,uVar4);
        func_0x000107c61574(uVar12);
        if (puVar3 != (undefined *)0x0) {
          puVar5 = puVar7;
          func_0x000107c61550();
          if ((((int)puVar5 == 0) || ((long)puVar7 < 0)) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar7 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar7) {
                puVar5 = puVar7;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            FUN_10133a2c8(0,puVar5 + 1,1,puVar7);
            puVar7 = puVar6;
          }
          uVar12 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar11 = *(ulong *)(uVar12 + 0x10);
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_10133a2c8(puVar7,uVar11 + 1,1);
            uVar12 = (ulong)puVar7 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar12 + 0x10) = uVar11 + 1;
          *(undefined **)(uVar12 + uVar11 * 8 + 0x20) = puVar3;
          uVar11 = uVar10;
          if (uVar10 == uVar9) break;
          goto LAB_101339c64;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar10 != uVar9);
  }
  FUN_1013cdc94(0);
  func_0x000107c610f8();
  uVar8 = 0;
  func_0x0001013cc4c4(0,0,puVar7,PTR___swiftEmptyArrayStorage_11034f1c8);
  lVar13 = *(long *)(unaff_x20 + _DAT_112d74568);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c4eedc();
    func_0x000107c615e8(lVar13);
  }
  func_0x0001000a8868(unaff_x20 + _DAT_112d74570,*(undefined8 *)(unaff_x20 + _DAT_112d74570 + 0x18))
  ;
  FUN_1013389cc(3);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 101339ff4; end: 10133a007;  */

void FUN_101339ff4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_101337d98(uVar2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10133a008; end: 10133a027;  */

void FUN_10133a008(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10133a028; end: 10133a04f;  */

void FUN_10133a028(long param_1,long param_2)

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



/* Entry: 10133a050; end: 10133a06f;  */

void FUN_10133a050(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10133a070; end: 10133a09b;  */

void FUN_10133a070(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10133a09c; end: 10133a0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133a09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 *puVar6;
  long unaff_x20;
  code *pcVar7;
  
  puVar2 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = 0;
  FUN_10133d330();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar6 = (undefined8 *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  *puVar2 = 2;
  func_0x000101339edc();
  func_0x000100029394(param_1,(undefined1 *)((long)puVar6 + (long)*(int *)(lVar4 + 0x14)));
  func_0x000100029394(param_2,(undefined1 *)((long)puVar6 + (long)*(int *)(lVar4 + 0x18)));
  *puVar6 = uVar5;
  *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar4 + 0x1c)) = param_3;
  puVar1 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar4 + 0x20));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  lVar3 = lVar3 + _DAT_112d74578;
  uVar5 = *(undefined8 *)(lVar3 + 0x68);
  lVar4 = *(long *)(lVar3 + 0x70);
  func_0x0001000a8868(lVar3 + 0x50,uVar5);
  pcVar7 = *(code **)(lVar4 + 8);
  func_0x000107c61434(param_5);
  (*pcVar7)(puVar6,uVar5,lVar4);
  func_0x00010133a0c8(puVar6,FUN_10133d330);
  return;
}



/* Entry: 10133a0a8; end: 10133a19b;  */

void FUN_10133a0a8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10133a19c; end: 10133a207;  */

void FUN_10133a19c(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10133a208; end: 10133a22b;  */

void FUN_10133a208(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d745b0;
  plVar5 = (long *)&UNK_10d934ac0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10133a4e8(0,0x112d743a8,&PTR_PTR_1126a6ac8);
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



/* Entry: 10133a22c; end: 10133a2a3;  */

void FUN_10133a22c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10133a4e8(0,param_1,param_2);
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



/* Entry: 10133a2a4; end: 10133a2c7;  */

void FUN_10133a2a4(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d745b8;
  plVar5 = (long *)&UNK_10d934ac8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10133a4e8(0,0x112d743b8,&PTR_PTR_1126a6ad0);
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



/* Entry: 10133a2c8; end: 10133a4e7;  */

ulong FUN_10133a2c8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10133a3f0);
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
  func_0x00010133a104(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10133a3ec);
      (*pcVar1)();
    }
    func_0x00010133a3f0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10133a4e8; end: 10133a527;  */

void FUN_10133a4e8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10133a528; end: 10133a537;  */

void FUN_10133a528(long param_1,long param_2)

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



/* Entry: 10133a538; end: 10133a743;  */

long FUN_10133a538(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    func_0x00010133a594();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    *(long *)(unaff_x20 + 0x28) = lVar1;
    func_0x000107c61174();
    FUN_10133ab54(uVar3);
  }
  func_0x00010133ab64(lVar2);
  return lVar1;
}



/* Entry: 10133a744; end: 10133a79b;  */

void FUN_10133a744(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_101337ba8();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10133a79c; end: 10133a7f7;  */

long FUN_10133a79c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    FUN_10133a7f8();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    *(long *)(unaff_x20 + 0x30) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 10133a7f8; end: 10133aaef;  */

undefined * FUN_10133a7f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126c4b80;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5a050();
  FUN_10133a538();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    puVar3 = puVar1;
    func_0x000107c3d89c();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar3 + 0x18) = 0xb;
    *(undefined8 *)(puVar3 + 0x10) = 5;
    puVar4 = puVar2;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar5 = puVar1;
    func_0x000107c5cbe4(puVar1);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c40294();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    *(undefined **)(puVar3 + 0x20) = puVar6;
    puVar4 = puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar5 = puVar1;
    func_0x000107c3ec1c(puVar1);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c402a4();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    *(undefined **)(puVar3 + 0x28) = puVar6;
    puVar4 = puVar2;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar5 = puVar1;
    func_0x000107c4ace0(puVar1);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    *(undefined **)(puVar3 + 0x30) = puVar6;
    puVar4 = puVar2;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar5 = puVar1;
    func_0x000107c50890(puVar1);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c402a4();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    *(undefined **)(puVar3 + 0x38) = puVar6;
    puVar4 = puVar2;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar5 = puVar1;
    func_0x000107c3f764(puVar1);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c40284(0x4014000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    *(undefined **)(puVar3 + 0x40) = puVar6;
    uVar7 = 0;
    func_0x00010133ae2c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar4 = puVar3;
    func_0x000107c5fc48(puVar3,uVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c3d63c(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 10133aaf0; end: 10133ab53;  */

void FUN_10133aaf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_10133ab54(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10133ab54; end: 10133ab7b;  */

void FUN_10133ab54(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10133ab7c; end: 10133ad8f;  */

void FUN_10133ab7c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  
  puVar3 = (undefined1 *)0x0;
  FUN_10133803c();
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    func_0x000101338074(0,lVar9,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar10 + 0x48);
    do {
      lVar4 = param_1;
      puVar3 = puVar8;
      FUN_10133adac(param_1,puVar8);
      func_0x000107c5ed70();
      puVar5 = PTR_PTR_1126a6ac8;
      func_0x000107c610f8();
      func_0x000107c5fadc(lVar4,puVar3);
      func_0x000107c6142c(puVar3);
      func_0x000107c46e20();
      func_0x000107c61170(lVar4);
      puVar3 = puVar8;
      func_0x00010133adf0();
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
        func_0x000101338074(puVar3,uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar2 + uVar1 * 8 + 0x20) = puVar5;
      param_1 = param_1 + lVar10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  FUN_10133a538();
  if (puVar3 == (undefined1 *)0x0) {
    func_0x000107c6142c(puVar2);
    lVar9 = *(long *)(unaff_x20 + 0x28);
  }
  else {
    puVar5 = PTR_PTR_1126a6af0;
    func_0x000107c610f8(PTR_PTR_1126a6af0);
    uVar6 = 0;
    func_0x00010133ae2c(0,0x112d743a8,&PTR_PTR_1126a6ac8);
    puVar7 = puVar2;
    func_0x000107c5fc48(puVar2,uVar6);
    func_0x000107c6142c(puVar2);
    func_0x000107c48134(puVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c5a588(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    lVar9 = *(long *)(unaff_x20 + 0x28);
  }
  if (lVar9 != 0) {
    func_0x000107c550d8();
  }
  return;
}



/* Entry: 10133ad90; end: 10133adab;  */

void FUN_10133ad90(long param_1,long param_2)

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



/* Entry: 10133adac; end: 10133ae6b;  */

undefined8 FUN_10133adac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10133803c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10133ae6c; end: 10133ae77; -[SCShoppingPreviewShoppingLinkImplEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133ae6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74680;
  func_0x000107c61428(param_1 + _DAT_112d74680,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10133ae78; end: 10133ae83; -[SCShoppingPreviewShoppingLinkImplEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133ae78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74680;
  func_0x000107c61428(param_1 + _DAT_112d74680,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10133ae84; end: 10133ae8f; -[SCShoppingPreviewShoppingLinkImplEntryPoint shoppingPreviewControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133ae84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74688;
  func_0x000107c61428(param_1 + _DAT_112d74688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10133ae90; end: 10133ae9b; -[SCShoppingPreviewShoppingLinkImplEntryPoint setShoppingPreviewControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133ae90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74688;
  func_0x000107c61428(param_1 + _DAT_112d74688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10133ae9c; end: 10133aea7; -[SCShoppingPreviewShoppingLinkImplEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133ae9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74690;
  func_0x000107c61428(param_1 + _DAT_112d74690,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10133aea8; end: 10133aeb3; -[SCShoppingPreviewShoppingLinkImplEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133aea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74690;
  func_0x000107c61428(param_1 + _DAT_112d74690,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10133aeb4; end: 10133aebf; -[SCShoppingPreviewShoppingLinkImplEntryPoint contextCardPresenterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133aeb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74698;
  func_0x000107c61428(param_1 + _DAT_112d74698,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10133aec0; end: 10133aecb; -[SCShoppingPreviewShoppingLinkImplEntryPoint setContextCardPresenterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133aec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74698;
  func_0x000107c61428(param_1 + _DAT_112d74698,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10133aecc; end: 10133aed7; -[SCShoppingPreviewShoppingLinkImplEntryPoint blizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133aecc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d746a0;
  func_0x000107c61428(param_1 + _DAT_112d746a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10133aed8; end: 10133aee3; -[SCShoppingPreviewShoppingLinkImplEntryPoint setBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133aed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d746a0;
  func_0x000107c61428(param_1 + _DAT_112d746a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10133aee4; end: 10133aeef; -[SCShoppingPreviewShoppingLinkImplEntryPoint previewCommonLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133aee4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d746a8;
  func_0x000107c61428(param_1 + _DAT_112d746a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10133aef0; end: 10133aefb; -[SCShoppingPreviewShoppingLinkImplEntryPoint setPreviewCommonLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133aef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d746a8;
  func_0x000107c61428(param_1 + _DAT_112d746a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10133aefc; end: 10133af07; -[SCShoppingPreviewShoppingLinkImplEntryPoint shoppingPreviewProductLinkServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133aefc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d746b0;
  func_0x000107c61428(param_1 + _DAT_112d746b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10133af08; end: 10133af4b;  */

void FUN_10133af08(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10133af4c; end: 10133af57; -[SCShoppingPreviewShoppingLinkImplEntryPoint setShoppingPreviewProductLinkServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133af4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d746b0;
  func_0x000107c61428(param_1 + _DAT_112d746b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10133af58; end: 10133afab;  */

void FUN_10133af58(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10133afac; end: 10133b3cf;  */

/* WARNING: Possible PIC construction at 0x00010133b228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133b318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010133b32c) */
/* WARNING: Removing unreachable block (ram,0x00010133b34c) */
/* WARNING: Removing unreachable block (ram,0x00010133b37c) */
/* WARNING: Removing unreachable block (ram,0x00010133b36c) */
/* WARNING: Removing unreachable block (ram,0x00010133b3ac) */
/* WARNING: Removing unreachable block (ram,0x00010133b39c) */
/* WARNING: Removing unreachable block (ram,0x00010133b38c) */
/* WARNING: Removing unreachable block (ram,0x00010133b2b0) */
/* WARNING: Removing unreachable block (ram,0x00010133b2a0) */
/* WARNING: Removing unreachable block (ram,0x00010133b290) */
/* WARNING: Removing unreachable block (ram,0x00010133b280) */
/* WARNING: Removing unreachable block (ram,0x00010133b270) */
/* WARNING: Removing unreachable block (ram,0x00010133b260) */
/* WARNING: Removing unreachable block (ram,0x00010133b250) */
/* WARNING: Removing unreachable block (ram,0x00010133b240) */
/* WARNING: Removing unreachable block (ram,0x00010133b22c) */
/* WARNING: Removing unreachable block (ram,0x00010133b31c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133afac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c5aad0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c40558();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c3ead8();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c4f0d4();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            func_0x000107c5aad8();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              FUN_101337a40();
              func_0x000107c613fc();
              uVar7 = *(undefined8 *)(lVar2 + _DAT_112d746e8);
              func_0x000107c6157c();
              func_0x000107c5dbd4();
              func_0x000107c61180();
              func_0x000107c4f07c();
              func_0x000107c61180();
              uVar8 = *(undefined8 *)(lVar5 + _DAT_113083868);
              func_0x000107c61174();
              func_0x000107c4bff8();
              func_0x000107c61180();
              uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d749f0);
              puVar9 = &UNK_1103a48b0;
              func_0x000107c613fc(&UNK_1103a48b0,0x40,7);
              *(long *)(puVar9 + 0x10) = lVar3;
              *(undefined8 *)(puVar9 + 0x18) = uVar8;
              *(long *)(puVar9 + 0x20) = lVar6;
              *(undefined8 *)(puVar9 + 0x28) = uVar7;
              *(long *)(puVar9 + 0x30) = lVar4;
              *(undefined8 *)(puVar9 + 0x38) = uVar10;
              func_0x0001000285a8(0x112d74198,&UNK_10d934780);
              func_0x000107c613fc();
              func_0x000107c61580(uVar10,2);
              func_0x000107c6157c(uVar7);
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x0001000bdd8c(FUN_10133b3d0,puVar9);
              func_0x000107c4e9e4(lVar1);
              func_0x000107c61180();
              uVar7 = 0x112d73a18;
              func_0x0001000285a8(0x112d73a18,&UNK_10d9341e0);
              uVar8 = 0x1013379bc;
              func_0x0001000cb480(0x1013379bc,0,uVar7);
              func_0x0001003a5b88();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_release_11034f4c0)(uVar8);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10133b3d0; end: 10133b3df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133b3d0(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long extraout_x8;
  undefined8 uVar9;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long alStack_190 [4];
  long lStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 auStack_138 [3];
  long lStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined **ppuStack_f0;
  long alStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
    pcVar1 = "Composer runtime is missing";
    uVar14 = 0x22;
    uVar9 = 0xd00000000000001b;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 == 0) {
      pcVar1 = "Blizard User Tracked Logger is missing";
      uVar14 = 0x25;
      uVar9 = 0xd000000000000026;
    }
    else {
      lStack_170 = lVar11;
      puStack_168 = (undefined1 *)uVar14;
      uStack_158 = uVar9;
      puStack_150 = param_1;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = 0;
        func_0x000101337b88();
        lVar11 = lVar3;
        func_0x000107c613fc();
        *(long *)(lVar11 + 0x10) = lVar2;
        func_0x000107c615f0(lVar2);
        func_0x0001000d224c(&lStack_110);
        alStack_190[1] = uStack_108;
        alStack_190[0] = lStack_110;
        puVar4 = PTR_PTR_1126aeea8;
        func_0x000107c610f8();
        lStack_160 = lVar2;
        func_0x000107c615f0(lVar6);
        func_0x000107c453e4();
        ppuStack_c0 = &PTR_DAT_1103a4650;
        lVar5 = 0;
        alStack_190[2] = lVar11;
        alStack_190[3] = lVar6;
        alStack_e0[0] = lVar11;
        lStack_c8 = lVar3;
        func_0x000101338fb4();
        lVar2 = lVar5;
        func_0x000107c613fc();
        func_0x0001000c6518(alStack_e0,lVar3);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
        puVar13 = (undefined8 *)((long)alStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
        (**(code **)(extraout_x12 + 0x10))(puVar13);
        uVar9 = *puVar13;
        *(long *)(lVar2 + 0x48) = lVar3;
        *(undefined ***)(lVar2 + 0x50) = &PTR_DAT_1103a4650;
        *(undefined **)(lVar2 + 0x28) = puVar4;
        *(undefined8 *)(lVar2 + 0x30) = uVar9;
        *(undefined8 *)(lVar2 + 0x58) = 0;
        *(undefined8 *)(lVar2 + 0x60) = 0;
        *(long *)(lVar2 + 0x18) = alStack_190[1];
        *(long *)(lVar2 + 0x10) = alStack_190[0];
        *(long *)(lVar2 + 0x20) = lVar6;
        func_0x000107c6157c(lVar11);
        func_0x0001000834e4(alStack_e0);
        func_0x0001000d224c(&lStack_110);
        ppuStack_c0 = &PTR_DAT_1103a4668;
        lVar6 = 0;
        alStack_e0[0] = lVar2;
        lStack_c8 = lVar5;
        func_0x000101337d1c();
        func_0x000107c613fc();
        alStack_190[1] = uStack_108;
        alStack_190[0] = lStack_110;
        func_0x0001000c6518(alStack_e0,lVar5);
        lVar11 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar12 = lVar11 + 0xfU & 0xfffffffffffffff0;
        puVar13 = (undefined8 *)((long)alStack_190 - uVar12);
        pcVar10 = *(code **)(extraout_x8_00 + 0x10);
        (*pcVar10)(puVar13);
        uVar9 = *puVar13;
        *(long *)(lVar6 + 0x58) = lVar5;
        *(undefined ***)(lVar6 + 0x60) = &PTR_DAT_1103a4668;
        *(undefined8 *)(lVar6 + 0x40) = uVar9;
        *(undefined8 *)(lVar6 + 0x28) = 0;
        func_0x000107c61614(lVar6 + 0x20,0);
        *(undefined8 *)(lVar6 + 0x38) = 0;
        func_0x000107c61614(lVar6 + 0x30,0);
        func_0x0001000c6560(0);
        func_0x000107c613fc();
        lVar11 = lVar2;
        func_0x000107c6157c();
        func_0x0001000c6580();
        *(long *)(lVar6 + 0x68) = lVar11;
        *(long *)(lVar6 + 0x18) = alStack_190[1];
        *(long *)(lVar6 + 0x10) = alStack_190[0];
        func_0x0001000834e4(alStack_e0);
        lVar3 = 0;
        func_0x00010133ab34();
        func_0x000107c613fc();
        lVar11 = lStack_170;
        *(undefined8 *)(lVar3 + 0x28) = 1;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *(long *)(lVar3 + 0x10) = lVar6;
        *(long *)(lVar3 + 0x18) = lStack_170;
        func_0x000107c61580(lVar6,2);
        func_0x000107c615f0(lVar11);
        func_0x000107c6157c(lVar3);
        func_0x0001000d224c(alStack_e0);
        ppuStack_f0 = &PTR_DAT_1103a4668;
        lVar7 = 0;
        lStack_110 = lVar2;
        lStack_f8 = lVar5;
        FUN_101339328();
        lVar2 = lVar7;
        func_0x000107c610f8();
        func_0x0001000c6518(&lStack_110,lVar5);
        puStack_168 = (undefined1 *)alStack_190;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar13 = (undefined8 *)((long)alStack_190 - uVar12);
        (*pcVar10)(puVar13);
        uVar9 = uStack_158;
        auStack_138[0] = *puVar13;
        ppuStack_118 = &PTR_DAT_1103a4668;
        *(long *)(lVar2 + _DAT_112d74558) = lVar6;
        *(long *)(lVar2 + _DAT_112d74560) = lVar3;
        *(undefined8 *)(lVar2 + _DAT_112d74568) = uStack_158;
        lStack_120 = lVar5;
        FUN_101337a60(auStack_138,lVar2 + _DAT_112d74570);
        func_0x000101337aa4(alStack_e0,lVar2 + _DAT_112d74578);
        puVar4 = PTR_s_init_1125d9248;
        lStack_148 = lVar2;
        lStack_140 = lVar7;
        func_0x000107c61174(uVar9);
        plVar8 = &lStack_148;
        func_0x000107c61154(plVar8,puVar4);
        func_0x000107c61574(alStack_190[2]);
        func_0x000107c615e8(lStack_160);
        func_0x000107c615e8(alStack_190[3]);
        func_0x000107c615e8(lVar11);
        func_0x000101337ae0(alStack_e0);
        func_0x0001000834e4(auStack_138);
        func_0x0001000834e4(&lStack_110);
        *(undefined ***)(lVar6 + 0x28) = &PTR_DAT_1103a4830;
        func_0x000107c61604(lVar6 + 0x20,lVar3);
        func_0x000107c61174();
        func_0x000107c61574(lVar3);
        *(undefined ***)(lVar6 + 0x38) = &PTR_DAT_1103a4688;
        func_0x000107c61604(lVar6 + 0x30,plVar8);
        func_0x000107c61574(lVar6);
        func_0x000107c61170(plVar8);
        *puStack_150 = plVar8;
        return;
      }
      pcVar1 = "Preview Common Logging is missing";
      uVar14 = 0x28;
      uVar9 = 0xd000000000000021;
    }
  }
  func_0x000107c60450("Fatal error",0xb,2,uVar9,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                      "ShoppingPreviewShoppingLinkImpl/ShoppingPreviewShoppingLinkImplEntryPoint.swift"
                      ,0x4f,2,uVar14,0);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1013379b8);
  (*pcVar10)();
}



/* Entry: 10133b3e0; end: 10133b407; -[SCShoppingPreviewShoppingLinkImplEntryPoint begin] */

void FUN_10133b3e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10133afac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10133b408; end: 10133b44b; -[SCShoppingPreviewShoppingLinkImplEntryPoint end] */

void FUN_10133b408(undefined8 param_1)

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



/* Entry: 10133b44c; end: 10133b7fb;  */

void FUN_10133b44c(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000021;
    if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10c84a0)) ||
       (func_0x000107c605b8(0xd000000000000021,0x800000010ef37b60,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59108();
    }
    else {
      if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10c8470)) ||
             (func_0x000107c605b8(0xd00000000000001c,0x800000010ef37b90,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c538dc();
          }
          else {
            if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10d97d0)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000010,0x800000010ef26830,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10c8450)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd00000000000001c,0x800000010ef37bb0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0;
                    if (((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef10c8430)) &&
                       (func_0x000107c605b8(0xd000000000000022,0x800000010ef37bd0,param_2,param_3,0)
                       , (uVar2 & 1) == 0)) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "ShoppingPreviewShoppingLinkImpl/SCShoppingPreviewShoppingLinkImplEntryPoint.swift"
                                          ,0x51,2,0x44,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x10133b7fc);
                      (*pcVar1)();
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c59110();
                    goto LAB_10133b4d8;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c57778();
                goto LAB_10133b4d8;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52d80();
          }
          goto LAB_10133b4d8;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c536e0();
    }
  }
LAB_10133b4d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10133b7fc; end: 10133b8a7; -[SCShoppingPreviewShoppingLinkImplEntryPoint setValue:forIvarName:] */

void FUN_10133b7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10133b44c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10133b8a8; end: 10133b97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133b8a8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d74680,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d74688,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d74690,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d74698,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d746a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d746a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d746b0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d746b8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}


