/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d774f0; end: 102d77543;  */

void FUN_102d774f0(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  FUN_102d776ec(unaff_x20 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d77544; end: 102d775d7;  */

void FUN_102d77544(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102d775d8;
  plVar7[7] = lVar6;
  plVar7[8] = lVar8;
  plVar7[5] = lVar5;
  plVar7[6] = lVar3;
  plVar7[3] = lVar4;
  plVar7[4] = lVar2;
  plVar7[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d77244,0,0);
  return;
}



/* Entry: 102d775d8; end: 102d77657;  */

void FUN_102d775d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102d77610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102d77658; end: 102d776eb;  */

void FUN_102d77658(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102d77710;
  plVar7[7] = lVar6;
  plVar7[8] = lVar8;
  plVar7[5] = lVar5;
  plVar7[6] = lVar3;
  plVar7[3] = lVar4;
  plVar7[4] = lVar2;
  plVar7[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d76fe8,0,0);
  return;
}



/* Entry: 102d776ec; end: 102d7770f;  */

undefined8 FUN_102d776ec(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d77710; end: 102d77713;  */

void FUN_102d77710(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102d77610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102d77714; end: 102d777db;  */

void FUN_102d77714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  lVar2 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0xb8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar5;
  uVar5 = 0x112d45220;
  func_0x000102d7802c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d777dc,uVar4,uVar5);
  return;
}



/* Entry: 102d777dc; end: 102d77f07;  */

void FUN_102d777dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x22;
  undefined8 uVar22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar18 = *(long *)(unaff_x22 + 0xc0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar19 = *(long *)(unaff_x22 + 0xb0);
  lVar14 = *(long *)(unaff_x22 + 0x98);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
  *(undefined8 *)(lVar19 + 0x30) = uVar22;
  func_0x000107c61604(lVar19 + 0x28,uVar20);
  *(undefined1 *)(lVar19 + 0x38) = 0;
  uVar22 = *(undefined8 *)(lVar19 + 0x10);
  puVar6 = PTR_PTR_1126affc0;
  func_0x000107c61168(PTR_PTR_1126affc0);
  puVar7 = PTR__kCMTimeZero_110348670;
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar20 = *(undefined8 *)(puVar7 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar20;
  func_0x000107c5d19c();
  func_0x000107c61180();
  func_0x000107c42424();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c5eea0(uVar8);
  func_0x000107c5ee70();
  (**(code **)(lVar18 + 8))(uVar8,uVar9);
  func_0x000107c53ab4(uVar22);
  func_0x000107c61170(puVar6);
  puVar7 = PTR_PTR_1126ac440;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar21,uVar1);
  func_0x000107c4956c();
  func_0x000107c61170(uVar21);
  puVar6 = PTR_PTR_1126d2670;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar8 = 0;
  func_0x0001002ed07c(0);
  uVar9 = 1;
  func_0x000107c6010c(1);
  func_0x000107c54158(puVar6);
  func_0x000107c61170(uVar9);
  puVar10 = PTR_PTR_1126c81a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar9 = 1;
  func_0x000107c6010c(1);
  func_0x000107c54158(puVar10);
  func_0x000107c61170(uVar9);
  puVar11 = PTR_PTR_1126a6220;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar12 = puVar11;
  func_0x000100673624();
  func_0x000107c613fc();
  *(undefined8 *)(puVar12 + 0x18) = 0x1f;
  *(undefined8 *)(puVar12 + 0x10) = 0xf;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x20) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x28) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x30) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x38) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x40) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x48) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x50) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x58) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x60) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x68) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x70) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x78) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x80) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x88) = puVar13;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(puVar12 + 0x90) = puVar13;
  puVar13 = puVar12;
  func_0x000107c5fc48(puVar12,uVar8);
  func_0x000107c61574(puVar12);
  func_0x000107c598bc(puVar11);
  func_0x000107c61170(puVar13);
  puVar12 = PTR_PTR_1126c81d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (lVar14 == 0) {
    uVar8 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c5fadc(uVar9,uVar21);
    uVar8 = uVar9;
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar21);
    func_0x000107c61170(uVar9);
  }
  lVar19 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c576ec(puVar12);
  func_0x000107c61170(uVar8);
  lVar14 = 0x112d515b8;
  func_0x0001000285a8(0x112d515b8,&UNK_10d918260);
  func_0x000107c613fc();
  *(undefined8 *)(lVar14 + 0x18) = 0x10;
  *(undefined8 *)(lVar14 + 0x10) = 8;
  puVar3 = PTR_PTR_1133bb520;
  puVar2 = PTR_PTR_1133bb510;
  *(undefined **)(lVar14 + 0x20) = PTR_PTR_1133bb510;
  *(undefined **)(lVar14 + 0x28) = puVar3;
  puVar16 = PTR_PTR_1133bb598;
  puVar15 = PTR_PTR_1133bb560;
  *(undefined **)(lVar14 + 0x30) = PTR_PTR_1133bb560;
  *(undefined **)(lVar14 + 0x38) = puVar16;
  puVar17 = PTR_PTR_1133bb5c8;
  puVar13 = PTR_PTR_1133bb4f0;
  *(undefined **)(lVar14 + 0x40) = PTR_PTR_1133bb5c8;
  *(undefined **)(lVar14 + 0x48) = puVar13;
  puVar5 = PTR_PTR_1133bb568;
  puVar4 = PTR_PTR_1133bb540;
  *(undefined **)(lVar14 + 0x50) = PTR_PTR_1133bb568;
  *(undefined **)(lVar14 + 0x58) = puVar4;
  uVar9 = 0;
  func_0x000100f99ab0(0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar13);
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puVar4);
  lVar18 = lVar14;
  func_0x000107c5fc48(lVar14,uVar9);
  func_0x000107c61574(lVar14);
  func_0x000107c57534(puVar12);
  func_0x000107c61170(lVar18);
  uVar21 = *(undefined8 *)(lVar19 + 0x20);
  lVar14 = 0x112d70c98;
  func_0x0001000285a8(0x112d70c98,&UNK_10d931cc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar14 + 0x18) = 8;
  *(undefined8 *)(lVar14 + 0x10) = 4;
  *(undefined8 *)(lVar14 + 0x20) = puVar17;
  *(undefined **)(lVar14 + 0x28) = puVar7;
  *(undefined **)(lVar14 + 0x30) = puVar15;
  *(undefined **)(lVar14 + 0x38) = puVar6;
  *(undefined **)(lVar14 + 0x40) = puVar16;
  puVar13 = PTR_PTR_1133bb550;
  *(undefined **)(lVar14 + 0x48) = puVar11;
  *(undefined **)(lVar14 + 0x50) = puVar13;
  *(undefined **)(lVar14 + 0x58) = puVar10;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  func_0x000107c61174(puVar13);
  func_0x000107c61174(puVar10);
  lVar18 = lVar14;
  func_0x000100faca28();
  func_0x000107c61588(lVar14);
  uVar8 = 0x112d70ca0;
  func_0x0001000285a8(0x112d70ca0,&UNK_10dc27520);
  func_0x000107c61408((undefined8 *)(lVar14 + 0x20),4,uVar8);
  uVar8 = 0x112d50630;
  func_0x000102d7802c(0x112d50630,&SUB_100f99ab0,&UNK_10d916e60);
  lVar14 = lVar18;
  func_0x000107c5f9dc(lVar18,uVar9,PTR___syXlN_11034f1a0 + 8,uVar8);
  func_0x000107c6142c();
  func_0x00010011df08();
  func_0x000107c61180();
  if (lVar18 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  lVar19 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c3ed88(uVar21);
  func_0x000107c61180();
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar14);
  func_0x000107c42c1c(*(undefined8 *)(lVar19 + 0x18));
  func_0x000107c61170(uVar21);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(uVar22);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000102d77f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102d77f08; end: 102d77f63;  */

void FUN_102d77f08(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_102d78008(unaff_x20 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d77f64; end: 102d77f8b; -[_TtC24SCRemixChatWallpaperImpl28RemixWallpaperEditorLauncher snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:] */

void FUN_102d77f64(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_102d77f8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102d77f8c; end: 102d78007;  */

/* WARNING: Possible PIC construction at 0x000102d77fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d77fe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d77fb0) */
/* WARNING: Removing unreachable block (ram,0x000102d77ff8) */
/* WARNING: Removing unreachable block (ram,0x000102d77fbc) */
/* WARNING: Removing unreachable block (ram,0x000102d77fe4) */
/* WARNING: Removing unreachable block (ram,0x000102d77fd0) */

void FUN_102d77f8c(void)

{
  long unaff_x20;
  
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102d78008; end: 102d7806b;  */

undefined8 FUN_102d78008(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d7806c; end: 102d78333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7806c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar3 = PTR_PTR_1126ac448;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f148c8);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f148d0);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f148d8);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f148e0);
  lVar1 = unaff_x20 + _DAT_112f148e8;
  lVar4 = lVar1;
  func_0x000107c61618(lVar1);
  uVar13 = *(undefined8 *)(lVar1 + 8);
  lVar5 = 0;
  FUN_102d78614();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar1 = lVar6 + _DAT_112f14948;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar2 = _DAT_112f14950;
  uVar7 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar6 + lVar2) = uVar7;
  *(undefined8 *)(lVar6 + _DAT_112f14920) = uVar16;
  *(undefined8 *)(lVar6 + _DAT_112f14928) = uVar15;
  *(undefined8 *)(lVar6 + _DAT_112f14930) = uVar14;
  *(undefined8 *)(lVar6 + _DAT_112f14940) = uVar17;
  func_0x0001000285a8(0x112f14918,&UNK_10db499c0);
  func_0x000107c613fc();
  func_0x000107c61580(uVar14,2);
  func_0x000107c61174(uVar16);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar17);
  pcVar8 = FUN_102d78468;
  func_0x0001000bdd8c(FUN_102d78468,uVar14);
  *(code **)(lVar6 + _DAT_112f14938) = pcVar8;
  *(undefined8 *)(lVar1 + 8) = uVar13;
  func_0x000107c61604(lVar1,lVar4);
  plVar9 = &lStack_70;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  func_0x000107c615e8(lVar4);
  func_0x000107c59390(puVar3);
  func_0x000107c61170(plVar9);
  func_0x000107c5a634(param_1);
  puVar10 = &UNK_1105ccc08;
  func_0x000107c613fc(&UNK_1105ccc08,0x18,7);
  *(undefined **)(puVar10 + 0x10) = puVar3;
  puVar11 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uStack_80 = 0x102d78470;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_1105ccc20;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61174(puVar3);
  func_0x000107c46b38(puVar11);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61574(puStack_78);
  func_0x000107c5a638(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar11);
  return;
}



/* Entry: 102d78334; end: 102d78383; -[_TtC24SCRemixChatWallpaperImpl30RemixWallpaperSnapEditorPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x000102d7836c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d78370) */

void FUN_102d78334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d7806c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d78384; end: 102d783df; -[_TtC24SCRemixChatWallpaperImpl30RemixWallpaperSnapEditorPlugin init] */

void FUN_102d78384(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCRemixChatWallpaperImpl.RemixWallpaperSnapEditorPlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d783b0);
  (*pcVar1)();
}



/* Entry: 102d783e0; end: 102d78447; -[_TtC24SCRemixChatWallpaperImpl30RemixWallpaperSnapEditorPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d783e0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f148c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f148d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f148d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f148e0));
  param_1 = param_1 + _DAT_112f148e8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d78448; end: 102d78467;  */

void FUN_102d78448(void)

{
  func_0x000107c61168(&PTR_PTR_1128a3d48);
  return;
}



/* Entry: 102d78468; end: 102d78493;  */

void FUN_102d78468(long *param_1)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c44174();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102d78494; end: 102d784b7;  */

undefined8 FUN_102d78494(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d784b8; end: 102d784c7;  */

void FUN_102d784b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102d784c8; end: 102d7852f;  */

void FUN_102d784c8(long *param_1)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c44174();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102d78530; end: 102d7858b; -[_TtC24SCRemixChatWallpaperImpl37RemixWallpaperSnapEditorPluginService init] */

void FUN_102d78530(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCRemixChatWallpaperImpl.RemixWallpaperSnapEditorPluginService",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7855c);
  (*pcVar1)();
}



/* Entry: 102d7858c; end: 102d78613; -[_TtC24SCRemixChatWallpaperImpl37RemixWallpaperSnapEditorPluginService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d785b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d785d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d785bc) */
/* WARNING: Removing unreachable block (ram,0x000102d785dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7858c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f14920));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f14928));
  return;
}



/* Entry: 102d78614; end: 102d78633;  */

void FUN_102d78614(void)

{
  func_0x000107c61168(&PTR_PTR_1128a3e48);
  return;
}



/* Entry: 102d78634; end: 102d78657;  */

void FUN_102d78634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d78658,0,0);
  return;
}



/* Entry: 102d78658; end: 102d78847;  */

/* WARNING: Removing unreachable block (ram,0x000102d786c4) */

void FUN_102d78658(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c3eea8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar1);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  uVar1 = uVar2;
  func_0x0001010282b0(uVar2,param_2);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x00010006c090(uVar2,param_2);
  func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
  func_0x000107c5c92c(0x4092d80000000000);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000100759c94();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  func_0x000107c61170(uVar1);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102d78848;
                    /* WARNING: Could not recover jumptable at 0x000102d78844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100f96304)();
  return;
}



/* Entry: 102d78848; end: 102d7889b;  */

void FUN_102d78848(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  *(undefined1 *)(lVar1 + 0x90) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d7889c,0,0);
  return;
}



/* Entry: 102d7889c; end: 102d78a67;  */

void FUN_102d7889c(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  puVar5 = *(undefined **)(unaff_x22 + 0x88);
  if (*(char *)(unaff_x22 + 0x90) == '\x01') {
    *(undefined **)(unaff_x22 + 0x28) = puVar5;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar6);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
LAB_102d789b4:
    func_0x000107c61170(uVar6);
  }
  else {
    puVar4 = *(undefined8 **)(unaff_x22 + 0x78);
    func_0x000107c61574();
    if (puVar5 == (undefined *)0x0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
      func_0x000102d79388();
      puVar5 = &UNK_1105ccde0;
      func_0x000107c613f8(&UNK_1105ccde0,puVar4,0,0);
      *puVar4 = 0xd00000000000001a;
      puVar4[1] = 0x800000010f10c3b0;
      func_0x000107c61654();
      goto LAB_102d789b4;
    }
    puVar5 = *(undefined **)(unaff_x22 + 0x70);
    FUN_102d78a68(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x48),
                  *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),
                  *(undefined8 *)(unaff_x22 + 0x60));
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000100f838dc(*(undefined8 *)(unaff_x22 + 0x88),*(undefined1 *)(unaff_x22 + 0x90));
    func_0x000107c61170(uVar6);
    if (puVar5 == (undefined *)0x0) goto LAB_102d78a4c;
  }
  pcVar1 = *(code **)(unaff_x22 + 0x58);
  func_0x000107c602fc(0x2c);
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x18) = 0xe000000000000000;
  func_0x000107c5fb78(0xd00000000000002a,0x800000010f10c380);
  *(undefined **)(unaff_x22 + 0x20) = puVar5;
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(unaff_x22 + 0x20,unaff_x22 + 0x10,uVar6,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  (*pcVar1)(*(undefined8 *)(unaff_x22 + 0x10),uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c614ac(puVar5);
LAB_102d78a4c:
                    /* WARNING: Could not recover jumptable at 0x000102d78a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102d78a68; end: 102d78d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d78a68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  code *pcVar13;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar1 = param_1;
  uVar10 = param_2;
  func_0x0001000d224c(&puStack_90);
  puVar11 = puStack_90;
  if (puStack_90 != (undefined8 *)0x0) {
    func_0x0001000d224c(&puStack_90);
    puVar1 = puStack_90;
    if (puStack_90 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f14920);
      func_0x000107c40674();
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c5faec();
      uVar12 = uVar10;
      func_0x000107c61170();
      func_0x00010011df08();
      func_0x000107c61180();
      uVar4 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      plVar5 = (long *)PTR_PTR_1126ae6b8;
      func_0x000107c61168();
      puVar6 = &UNK_1105cccd0;
      func_0x000107c613fc(&UNK_1105cccd0,0x48,7);
      *(undefined8 **)(puVar6 + 0x10) = param_1;
      *(undefined8 *)(puVar6 + 0x18) = uVar3;
      *(undefined8 *)(puVar6 + 0x20) = uVar10;
      *(undefined8 *)(puVar6 + 0x28) = uVar4;
      *(undefined8 *)(puVar6 + 0x30) = uVar12;
      *(undefined8 **)(puVar6 + 0x38) = puVar11;
      *(undefined8 **)(puVar6 + 0x40) = puStack_90;
      pcStack_70 = FUN_102d793c8;
      puStack_90 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1004725e8;
      puStack_78 = &UNK_1105ccce8;
      ppuVar7 = &puStack_90;
      puStack_68 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_68;
      func_0x000107c61174(param_1);
      func_0x000107c615f0(puVar11);
      func_0x000107c61174(puVar1);
      func_0x000107c61574(puVar6);
      func_0x000107c408f0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
      plVar8 = plVar5;
      func_0x0001000b637c();
      puVar6 = &UNK_1105ccd20;
      func_0x000107c613fc(&UNK_1105ccd20,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar9 = &UNK_1105ccd48;
      func_0x000107c613fc(&UNK_1105ccd48,0x38,7);
      *(undefined **)(puVar9 + 0x10) = puVar6;
      *(undefined8 *)(puVar9 + 0x18) = param_2;
      *(undefined8 *)(puVar9 + 0x20) = param_3;
      *(undefined8 *)(puVar9 + 0x28) = param_4;
      *(undefined8 *)(puVar9 + 0x30) = param_5;
      pcVar13 = *(code **)(*plVar8 + 0x60);
      func_0x000107c6157c();
      func_0x000107c6157c(param_5);
      uVar10 = 0x102d793f8;
      puVar6 = puVar9;
      (*pcVar13)(0x102d793f8);
      func_0x000107c61574(plVar8);
      func_0x000107c61574(puVar9);
      uVar3 = uVar10;
      func_0x000107c614f0(uVar10);
      (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f14950),uVar3,puVar6);
      func_0x000107c615e8(puVar11);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(plVar5);
      func_0x000107c615e8(uVar10);
      return;
    }
    func_0x000107c615e8();
    puVar1 = puVar11;
  }
  func_0x000102d79388();
  func_0x000107c613f8(&UNK_1105ccde0,puVar1,0,0);
  *puVar1 = 0xd00000000000002c;
  puVar1[1] = 0x800000010f10c3d0;
  func_0x000107c61654();
  return;
}



/* Entry: 102d78d78; end: 102d78e6f; -[_TtC24SCRemixChatWallpaperImpl37RemixWallpaperSnapEditorPluginService wallpaperRemixWithSnapDocs:parameters:onComplete:onError:] */

/* WARNING: Possible PIC construction at 0x000102d78e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d78e58) */

void FUN_102d78d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  uVar1 = 0;
  FUN_102d78e70(0);
  func_0x000107c5fc54(param_3,uVar1);
  puVar2 = &UNK_1105ccc58;
  func_0x000107c613fc(&UNK_1105ccc58,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  puVar3 = &UNK_1105ccc80;
  func_0x000107c613fc(&UNK_1105ccc80,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_102d790e0(param_3,FUN_102d78eb4,puVar2,FUN_102d78ec0,puVar3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102d78e70; end: 102d78eb3;  */

void FUN_102d78e70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bcf68;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d54e00 = puVar1;
  return;
}



/* Entry: 102d78eb4; end: 102d78ebf;  */

void FUN_102d78eb4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102d78ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102d78ec0; end: 102d78ef7;  */

void FUN_102d78ec0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d78ef8; end: 102d78fb7;  */

void FUN_102d78ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x0001064f0394(param_2,0,1,5,0,param_3,param_5,param_7,param_8,param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102d78fb8; end: 102d7908f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d78fb8(undefined8 *param_1,long param_2,code *param_3,undefined8 param_4,code *param_5)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  iVar1 = (int)*param_1;
  func_0x000107c49804();
  if (iVar1 == 1) {
    (*param_5)(0xd00000000000002c,0x800000010f10c400);
  }
  else if (iVar1 == 2) {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar2 = param_2 + _DAT_112f14948;
      func_0x000107c61618();
      func_0x000107c61170(param_2);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x38) = 1;
        func_0x000107c615e8(lVar2);
      }
    }
    (*param_3)();
  }
  return;
}



/* Entry: 102d79090; end: 102d790cf;  */

void FUN_102d79090(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d790d0,0,0);
  return;
}



/* Entry: 102d790d0; end: 102d790df;  */

void FUN_102d790d0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102d790dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102d790e0; end: 102d792b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d790e0(ulong param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 unaff_x20;
  long lStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar5 == 0) {
    (*param_4)(0xd000000000000027,0x800000010f10c350);
  }
  else {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d792b8);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = 0;
      func_0x000101016c54(0,param_1);
    }
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 == 0) {
      (*param_4)(0xd000000000000023,0x800000010f10c320);
      func_0x000107c61170(uVar2);
    }
    else {
      puVar3 = &UNK_1105ccca8;
      func_0x000107c613fc(&UNK_1105ccca8,0x48,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar2;
      *(long *)(puVar3 + 0x18) = lStack_58;
      *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar3 + 0x28) = param_2;
      *(undefined8 *)(puVar3 + 0x30) = param_3;
      *(code **)(puVar3 + 0x38) = param_4;
      *(undefined8 *)(puVar3 + 0x40) = param_5;
      func_0x000107c61174(uVar2);
      func_0x000107c615f0(lStack_58);
      func_0x000107c61174();
      func_0x000107c6157c(param_3);
      func_0x000107c6157c(param_5);
      uVar4 = 0;
      func_0x0001001ca524(0,0x100,0x60,4,0,0,&UNK_10db49a00,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(lStack_58);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar4);
    }
  }
  return;
}



/* Entry: 102d792b8; end: 102d7934b;  */

void FUN_102d792b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102d7934c;
  plVar7[0xb] = lVar6;
  plVar7[0xc] = lVar8;
  plVar7[9] = lVar5;
  plVar7[10] = lVar3;
  plVar7[7] = lVar4;
  plVar7[8] = lVar2;
  plVar7[6] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d78658,0,0);
  return;
}



/* Entry: 102d7934c; end: 102d793c7;  */

void FUN_102d7934c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102d79384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102d793c8; end: 102d7940f;  */

void FUN_102d793c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c5fadc(uVar4,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c5fadc(uVar5,uVar2);
  func_0x0001064f0394(uVar1,0,1,5,0,uVar4,uVar5,uVar3,uVar6,param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102d79410; end: 102d7947f;  */

undefined8 * FUN_102d79410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102d79480; end: 102d7953f;  */

int FUN_102d79480(int *param_1,int param_2)

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



/* Entry: 102d79540; end: 102d795eb;  */

void FUN_102d79540(void)

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



/* Entry: 102d795ec; end: 102d79613;  */

void FUN_102d795ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102d79614; end: 102d79a0f;  */

void FUN_102d79614(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x90) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_x22 + 0x50) = 0;
    uVar8 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar8 != 0) {
      func_0x000102d79dbc();
      func_0x000107c61658(unaff_x22 + 0x50,&UNK_1105ccef8,uVar8);
    }
    uVar8 = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x88);
    func_0x000107c40488();
    func_0x000107c61180();
    if (lVar2 == 0) {
      *(undefined1 *)(unaff_x22 + 0x50) = 1;
      uVar8 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar8 != 0) {
        func_0x000102d79dbc();
        func_0x000107c61658(unaff_x22 + 0x50,&UNK_1105ccef8,uVar8);
      }
      func_0x000107c615e8(lVar1);
      uVar8 = 1;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      *(long *)(unaff_x22 + 0xa0) = lVar3;
      *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
      puVar4 = PTR_PTR_1126b08b0;
      func_0x000107c61168();
      lVar2 = lVar3;
      func_0x000107c5ee20(lVar3,param_2);
      func_0x000107c40498();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 0xb0) = puVar4;
      func_0x000107c61170(lVar2);
      puVar5 = PTR_PTR_1126b17d8;
      func_0x000107c610f8();
      func_0x000107c61174(puVar4);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar10 = PTR___sSSN_11034da80;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c460ec();
      *(undefined **)(unaff_x22 + 0xb8) = puVar5;
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar4);
      if (puVar5 != (undefined *)0x0) {
        lVar2 = *(long *)(unaff_x22 + 0x88);
        func_0x000107c56498(puVar5);
        func_0x000107c427c0();
        func_0x000107c61180();
        if (lVar2 != 0) {
          lVar3 = lVar2;
          func_0x000107c4a8c4();
          func_0x000107c61180();
          lVar7 = lVar3;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar3);
          uVar8 = 0;
          lVar3 = lVar7;
          func_0x000107c5ee24(0,lVar7,puVar10);
          func_0x00010006c090(lVar7,puVar10);
          lVar11 = lVar3;
          func_0x000107c5fadc(uVar8,lVar3);
          func_0x000107c6142c(lVar3);
          lVar3 = lVar2;
          func_0x000107c4a804(lVar2);
          func_0x000107c61180();
          lVar7 = lVar3;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar3);
          uVar9 = 0;
          lVar3 = lVar7;
          func_0x000107c5ee24(0,lVar7,lVar11);
          func_0x00010006c090(lVar7,lVar11);
          func_0x000107c5fadc(uVar9,lVar3);
          func_0x000107c6142c(lVar3);
          func_0x000107c54584(puVar5);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(lVar2);
        }
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_102d79a10;
        lVar2 = unaff_x22 + 0x10;
        func_0x000107c61448(lVar2,0);
        puVar4 = &UNK_1105cce38;
        func_0x000107c613fc(&UNK_1105cce38,0x18,7);
        *(long *)(puVar4 + 0x10) = lVar2;
        *(code **)(unaff_x22 + 0x70) = FUN_102d79dfc;
        *(undefined **)(unaff_x22 + 0x78) = puVar4;
        *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x60) = &UNK_100f17d9c;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_1105cce50;
        lVar2 = unaff_x22 + 0x50;
        func_0x000107c60bc4(lVar2);
        func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
        func_0x000107c5078c(lVar1);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c60bd0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
        return;
      }
      *(undefined1 *)(unaff_x22 + 0x50) = 2;
      uVar8 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar8 != 0) {
        func_0x000102d79dbc();
        func_0x000107c61658(unaff_x22 + 0x50,&UNK_1105ccef8,uVar8);
      }
      func_0x00010006c090(lVar3,param_2);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar4);
      uVar8 = 2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000102d79a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}



/* Entry: 102d79a10; end: 102d79a4f;  */

void FUN_102d79a10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d79a50,0,0);
  return;
}



/* Entry: 102d79a50; end: 102d79d77;  */

void FUN_102d79a50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  undefined *puVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar6 = *(long *)(unaff_x22 + 0x80);
  lVar4 = lVar6;
  func_0x000107c44314();
  if (lVar4 == 0) {
    lVar4 = lVar6;
    func_0x000107c4407c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      *(undefined1 *)(unaff_x22 + 0x50) = 4;
      uVar5 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar5 != 0) {
        func_0x000102d79dbc();
        func_0x000107c61658(unaff_x22 + 0x50,&UNK_1105ccef8,uVar5);
      }
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
      func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
      func_0x000107c615e8(uVar8);
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(lVar6);
      puVar7 = (undefined *)0x4;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f8();
      func_0x000107c46110();
      func_0x000107c61170(lVar4);
      if (puVar7 != (undefined *)0x0) {
        uStack_68 = 0xf000000000000000;
        uStack_70 = 0;
        func_0x000107c5ee2c(puVar7,&uStack_70);
        func_0x000107c61170(puVar7);
        uVar3 = uStack_68;
        uVar1 = uStack_70;
        if (uStack_68 >> 0x3c < 0xf) {
          puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x000107c610f8();
          func_0x00010006c00c(uVar1,uVar3);
          uVar5 = uVar1;
          func_0x000107c5ee20(uVar1,uVar3);
          func_0x000107c4635c();
          func_0x000107c61170(uVar5);
          func_0x0001000b44c0(uVar1,uVar3);
          if (puVar7 != (undefined *)0x0) {
            uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
            uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
            uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
            uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
            uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
            func_0x0001000b44c0(uVar1,uVar3);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(uVar9);
            func_0x000107c61170(uVar5);
            func_0x00010006c090(uVar8,uVar2);
            func_0x000107c615e8(uVar10);
            UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
            goto LAB_102d79c38;
          }
          *(undefined1 *)(unaff_x22 + 0x50) = 6;
          uVar5 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar5 != 0) {
            func_0x000102d79dbc();
            func_0x000107c61658(unaff_x22 + 0x50,&UNK_1105ccef8,uVar5);
          }
          uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
          uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
          uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
          func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
          func_0x000107c615e8(uVar9);
          func_0x000107c61170(uVar8);
          func_0x000107c615e8(lVar6);
          func_0x0001000b44c0(uVar1,uVar3);
          puVar7 = (undefined *)0x6;
          goto LAB_102d79c24;
        }
      }
      *(undefined1 *)(unaff_x22 + 0x50) = 5;
      uVar5 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar5 != 0) {
        func_0x000102d79dbc();
        func_0x000107c61658(unaff_x22 + 0x50,&UNK_1105ccef8,uVar5);
      }
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
      func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
      func_0x000107c615e8(uVar8);
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(lVar6);
      puVar7 = (undefined *)0x5;
    }
  }
  else {
    *(undefined1 *)(unaff_x22 + 0x50) = 3;
    uVar5 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar5 != 0) {
      func_0x000102d79dbc();
      func_0x000107c61658(unaff_x22 + 0x50,&UNK_1105ccef8,uVar5);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
    func_0x000107c615e8(uVar8);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar6);
    puVar7 = (undefined *)0x3;
  }
LAB_102d79c24:
  func_0x000107c61170(uVar5);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_102d79c38:
                    /* WARNING: Could not recover jumptable at 0x000102d79c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar7);
  return;
}



/* Entry: 102d79d78; end: 102d79dfb;  */

void FUN_102d79d78(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d79dfc; end: 102d79e2b;  */

void FUN_102d79dfc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102d79e2c; end: 102d79faf;  */

void FUN_102d79e2c(long param_1,long param_2)

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



/* Entry: 102d79fb0; end: 102d79fef;  */

void FUN_102d79fb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db49b10;
  func_0x000107c61520(&UNK_10db49b10,&UNK_1105ccef8);
  puRam0000000112f14a30 = puVar1;
  return;
}



/* Entry: 102d79ff0; end: 102d79ffb; -[SCSnapEditorRemixPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d79ff0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14a38;
  func_0x000107c61428(param_1 + _DAT_112f14a38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d79ffc; end: 102d7a007; -[SCSnapEditorRemixPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d79ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f14a38;
  func_0x000107c61428(param_1 + _DAT_112f14a38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7a008; end: 102d7a013; -[SCSnapEditorRemixPluginEntryPoint scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a008(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14a40;
  func_0x000107c61428(param_1 + _DAT_112f14a40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7a014; end: 102d7a01f; -[SCSnapEditorRemixPluginEntryPoint setScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a014(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f14a40;
  func_0x000107c61428(param_1 + _DAT_112f14a40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7a020; end: 102d7a02b; -[SCSnapEditorRemixPluginEntryPoint snapDocManagerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a020(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14a48;
  func_0x000107c61428(param_1 + _DAT_112f14a48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7a02c; end: 102d7a037; -[SCSnapEditorRemixPluginEntryPoint setSnapDocManagerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a02c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f14a48;
  func_0x000107c61428(param_1 + _DAT_112f14a48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7a038; end: 102d7a043; -[SCSnapEditorRemixPluginEntryPoint snapRendererServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a038(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14a50;
  func_0x000107c61428(param_1 + _DAT_112f14a50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7a044; end: 102d7a04f; -[SCSnapEditorRemixPluginEntryPoint setSnapRendererServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a044(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f14a50;
  func_0x000107c61428(param_1 + _DAT_112f14a50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7a050; end: 102d7a05b; -[SCSnapEditorRemixPluginEntryPoint nativeMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a050(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14a58;
  func_0x000107c61428(param_1 + _DAT_112f14a58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7a05c; end: 102d7a067; -[SCSnapEditorRemixPluginEntryPoint setNativeMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a05c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f14a58;
  func_0x000107c61428(param_1 + _DAT_112f14a58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7a068; end: 102d7a073; -[SCSnapEditorRemixPluginEntryPoint externalMediaPreparingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a068(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14a60;
  func_0x000107c61428(param_1 + _DAT_112f14a60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7a074; end: 102d7a07f; -[SCSnapEditorRemixPluginEntryPoint setExternalMediaPreparingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a074(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f14a60;
  func_0x000107c61428(param_1 + _DAT_112f14a60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7a080; end: 102d7a08b; -[SCSnapEditorRemixPluginEntryPoint snapDocThumbnailServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a080(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14a68;
  func_0x000107c61428(param_1 + _DAT_112f14a68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7a08c; end: 102d7a0cf;  */

void FUN_102d7a08c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102d7a0d0; end: 102d7a0db; -[SCSnapEditorRemixPluginEntryPoint setSnapDocThumbnailServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f14a68;
  func_0x000107c61428(param_1 + _DAT_112f14a68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7a0dc; end: 102d7a12f;  */

void FUN_102d7a0dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7a130; end: 102d7a41f;  */

/* WARNING: Possible PIC construction at 0x000102d7a2f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7a304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7a314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7a324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7a3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7a3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7a3f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7a3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7a3c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7a398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7a378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7a368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d7a37c) */
/* WARNING: Removing unreachable block (ram,0x000102d7a39c) */
/* WARNING: Removing unreachable block (ram,0x000102d7a3cc) */
/* WARNING: Removing unreachable block (ram,0x000102d7a3bc) */
/* WARNING: Removing unreachable block (ram,0x000102d7a3fc) */
/* WARNING: Removing unreachable block (ram,0x000102d7a3ec) */
/* WARNING: Removing unreachable block (ram,0x000102d7a3dc) */
/* WARNING: Removing unreachable block (ram,0x000102d7a328) */
/* WARNING: Removing unreachable block (ram,0x000102d7a318) */
/* WARNING: Removing unreachable block (ram,0x000102d7a308) */
/* WARNING: Removing unreachable block (ram,0x000102d7a2f8) */
/* WARNING: Removing unreachable block (ram,0x000102d7a36c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a130(void)

{
  undefined *puVar1;
  long lVar2;
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
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c5b1d8();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c5b3b8();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = unaff_x20;
        func_0x000107c4d478();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          lVar7 = unaff_x20;
          func_0x000107c42cb4();
          func_0x000107c61180();
          if (lVar7 == 0) {
            func_0x000107c61170(lVar2);
            lVar2 = lVar3;
          }
          else {
            func_0x000107c5b1f4();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar8 = 0;
              FUN_102d76fa4();
              lVar9 = lVar8;
              func_0x000107c610f8();
              *(long *)(lVar9 + _DAT_112f146f0) = lVar2;
              *(long *)(lVar9 + _DAT_112f146f8) = lVar3;
              *(long *)(lVar9 + _DAT_112f14700) = lVar4;
              *(long *)(lVar9 + _DAT_112f14708) = lVar5;
              *(long *)(lVar9 + _DAT_112f14710) = lVar6;
              *(long *)(lVar9 + _DAT_112f14718) = lVar7;
              *(long *)(lVar9 + _DAT_112f14720) = unaff_x20;
              puVar1 = PTR_s_init_1125d9248;
              lStack_70 = lVar9;
              lStack_68 = lVar8;
              func_0x000107c61174(lVar2);
              func_0x000107c61174(lVar3);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(lVar6);
              func_0x000107c61174(lVar7);
              func_0x000107c61174(unaff_x20);
              func_0x000107c61154(&lStack_70,puVar1);
              FUN_102d76b50();
              lVar2 = unaff_x20;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102d7a420; end: 102d7a447; -[SCSnapEditorRemixPluginEntryPoint begin] */

void FUN_102d7a420(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d7a130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d7a448; end: 102d7a48b; -[SCSnapEditorRemixPluginEntryPoint end] */

void FUN_102d7a448(undefined8 param_1)

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



/* Entry: 102d7a48c; end: 102d7a83f;  */

void FUN_102d7a48c(long param_1,long param_2,long param_3)

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
    uVar2 = 0x65706f6373;
    if (((param_2 == 0x65706f6373) && (param_3 == -0x1b00000000000000)) ||
       (func_0x000107c605b8(0x65706f6373,0xe500000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58c58();
    }
    else {
      if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e21d0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000016,0x800000010ef1de30,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e2130)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000014,0x800000010ef1ded0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000017;
              if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ecb20)) ||
                 (func_0x000107c605b8(0xd000000000000017,0x800000010ef134e0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5698c();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef0ef5050)) ||
                   (func_0x000107c605b8(0xd00000000000001e,0x800000010f10afb0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c54804();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0ff2310)) &&
                     (func_0x000107c605b8(0xd000000000000018,0x800000010f00dcf0,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "SCRemixChatWallpaperImpl/SCSnapEditorRemixPluginEntryPoint.swift"
                                        ,0x40,2,0x41,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7a840);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5938c();
                }
              }
              goto LAB_102d7a518;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59454();
          goto LAB_102d7a518;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59368();
    }
  }
LAB_102d7a518:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102d7a840; end: 102d7a8eb; -[SCSnapEditorRemixPluginEntryPoint setValue:forIvarName:] */

void FUN_102d7a840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102d7a48c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102d7a8ec; end: 102d7a9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7a8ec(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f14a38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f14a40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f14a48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f14a50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f14a58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f14a60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f14a68,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f14a70) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d7a9c4; end: 102d7a9e3; -[SCSnapEditorRemixPluginEntryPoint init] */

void FUN_102d7a9c4(void)

{
  FUN_102d7a8ec();
  return;
}



/* Entry: 102d7a9e4; end: 102d7aa17;  */

void FUN_102d7a9e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d7aa18; end: 102d7aaaf; -[SCSnapEditorRemixPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7aa18(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f14a38);
  func_0x000107c61610(param_1 + _DAT_112f14a40);
  func_0x000107c61610(param_1 + _DAT_112f14a48);
  func_0x000107c61610(param_1 + _DAT_112f14a50);
  func_0x000107c61610(param_1 + _DAT_112f14a58);
  func_0x000107c61610(param_1 + _DAT_112f14a60);
  func_0x000107c61610(param_1 + _DAT_112f14a68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f14a70));
  return;
}



/* Entry: 102d7aab0; end: 102d7aacf;  */

void FUN_102d7aab0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a3f50);
  return;
}



/* Entry: 102d7aad0; end: 102d7aafb; +[SCSpotlightChatHeaderButtonConfig configKey] */

void FUN_102d7aad0(void)

{
  func_0x000107c5fadc(0xd000000000000027,0x800000010f10c4c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7aafc; end: 102d7ab37; -[SCSpotlightChatHeaderButtonConfig init] */

void FUN_102d7aafc(undefined8 param_1)

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



/* Entry: 102d7ab38; end: 102d7ab3b;  */

void FUN_102d7ab38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d7ab3c; end: 102d7ab3f; -[SCSpotlightChatHeaderButtonConfig .cxx_destruct] */

void FUN_102d7ab3c(void)

{
  return;
}



/* Entry: 102d7ab40; end: 102d7ab5f; -[SCSpotlightChatHeaderButtonScope headerButtonContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ab40(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f14aa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7ab60; end: 102d7ab7f; -[SCSpotlightChatHeaderButtonScope spotlightUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ab60(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f14aa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7ab80; end: 102d7abc7; -[SCSpotlightChatHeaderButtonScope contextProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ab80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14ab0;
  func_0x000107c61428(param_1 + _DAT_112f14ab0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7abc8; end: 102d7ac1f; -[SCSpotlightChatHeaderButtonScope setContextProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7abc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f14ab0;
  func_0x000107c61428(param_1 + _DAT_112f14ab0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7ac20; end: 102d7acff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102d7ac20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f14ab0;
  func_0x000107c61614(unaff_x20 + _DAT_112f14ab0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f14aa0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f14aa8) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 102d7ad00; end: 102d7adbb; -[SCSpotlightChatHeaderButtonScope initWithHeaderButtonContainer:spotlightUIContainer:contextProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ad00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f14ab0;
  func_0x000107c61614(param_1 + _DAT_112f14ab0,0);
  *(undefined8 *)(param_1 + _DAT_112f14aa0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f14aa8) = param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 102d7adbc; end: 102d7ae73; -[SCSpotlightChatHeaderButtonScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d7adbc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f14aa0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f14aa8));
  param_1 = param_1 + _DAT_112f14ab0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d7ae74; end: 102d7aedb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ae74(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102d7b158();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f14ac0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102d7aedc; end: 102d7af27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7aedc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14ac0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d7af28; end: 102d7b02f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102d7af28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  FUN_102d7b0c4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f14ab0;
  func_0x000107c61614(lVar4 + _DAT_112f14ab0,0);
  *(long *)(lVar4 + _DAT_112f14aa0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112f14aa8) = param_2;
  func_0x000107c61428(lVar4 + lVar2,auStack_68,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar1);
  plStack_88 = plVar5;
  func_0x00010008a7c8(&uStack_80,&plStack_88);
  func_0x000100083b20(&plStack_88);
  func_0x000107c61574(uStack_80);
  func_0x000107c61170(plVar5);
  return plStack_88;
}



/* Entry: 102d7b030; end: 102d7b0c3; -[SCSpotlightChatHeaderButtonScopeServices buildWithHeaderButtonContainer:spotlightUIContainer:contextProvider:] */

void FUN_102d7b030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102d7af28(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d7b0c4; end: 102d7b117;  */

void FUN_102d7b0c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a40f0);
  return;
}



/* Entry: 102d7b118; end: 102d7b127; -[SCSpotlightChatHeaderButtonScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7b118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f14ac0));
  return;
}



/* Entry: 102d7b128; end: 102d7b147;  */

void FUN_102d7b128(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4040);
  return;
}



/* Entry: 102d7b148; end: 102d7b157;  */

undefined1  [16] FUN_102d7b148(void)

{
  return ZEXT816(0x1105cd010);
}



/* Entry: 102d7b158; end: 102d7b177;  */

void FUN_102d7b158(void)

{
  func_0x000107c61168(&PTR_PTR_1128a41c0);
  return;
}



/* Entry: 102d7b178; end: 102d7b197;  */

void FUN_102d7b178(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d7b198; end: 102d7b1d7;  */

void FUN_102d7b198(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db49c90;
  func_0x000107c61520(&UNK_10db49c90,&UNK_1105cd0c0);
  puRam0000000112f14b40 = puVar1;
  return;
}


