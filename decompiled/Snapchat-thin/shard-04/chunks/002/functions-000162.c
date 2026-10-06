/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032450c0; end: 1032450c3;  */

void FUN_1032450c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba13e0;
  func_0x000107c61520(&UNK_10dba13e0,&UNK_11062af68);
  puRam0000000112f4e8d8 = puVar1;
  return;
}



/* Entry: 1032450c4; end: 103245103;  */

void FUN_1032450c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba13e0;
  func_0x000107c61520(&UNK_10dba13e0,&UNK_11062af68);
  puRam0000000112f4e8d8 = puVar1;
  return;
}



/* Entry: 103245104; end: 10324514f; -[_TtC38SCContextPromotedCTAActionItemRenderer17PromotedCTAButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103245104(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4e8b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4e8b8));
  if (*(long *)(param_1 + _DAT_112f4e8c0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f4e8c0))[1]);
    return;
  }
  return;
}



/* Entry: 103245150; end: 10324516f;  */

void FUN_103245150(void)

{
  func_0x000107c61168(&PTR_PTR_1128c2db0);
  return;
}



/* Entry: 103245170; end: 10324551b;  */

void FUN_103245170(void)

{
  return;
}



/* Entry: 10324551c; end: 10324555b;  */

void FUN_10324551c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1484;
  func_0x000107c61520(&UNK_10dba1484,&UNK_11062aff8);
  puRam0000000112f4e908 = puVar1;
  return;
}



/* Entry: 10324555c; end: 10324608f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10324555c(char param_1,byte param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  
  func_0x000107c614f0();
  lVar3 = _DAT_112f4e8b0;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  lVar3 = _DAT_112f4e8b8;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4e8c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar5 = &stack0xffffffffffffff70;
  uVar20 = 0;
  uVar21 = 0;
  func_0x000107c61154(0,0,0,0,puVar5,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  uVar6 = 0x6465746f6d6f7250;
  func_0x000107c5fadc(0x6465746f6d6f7250,0xeb00000000415443);
  func_0x000107c520f4(puVar5);
  func_0x000107c61170(uVar6);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c61170(puVar5);
  func_0x000107c3d6fc(puVar5);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c453e4();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c61174();
  puVar8 = puVar7;
  func_0x000107c5af88(puVar7);
  func_0x000107c61180();
  puVar9 = puVar8;
  if (param_1 == '\0') {
    func_0x000107c3fdd0(0x3feb333333333333,puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
  }
  func_0x000107c52b50(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar9);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar1 = (undefined8 *)(puVar5 + _DAT_112f4e8b8);
  uVar6 = *puVar1;
  func_0x000107c61174();
  func_0x000107c59e10(uVar6);
  func_0x000107c53840(*puVar1);
  func_0x000107c5a050(*puVar1);
  func_0x000107c5381c(0x437a0000,*puVar1);
  func_0x000107c537fc(0x437a0000,*puVar1);
  uVar10 = *puVar1;
  func_0x000107c5e308(uVar10);
  func_0x000107c61180();
  uVar11 = *puVar1;
  func_0x000107c44d9c(uVar11);
  func_0x000107c61180();
  uVar6 = uVar10;
  func_0x000107c40280(uVar10);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c521e8(uVar6);
  func_0x000107c61170(uVar6);
  uVar10 = *puVar1;
  func_0x000107c44d9c(uVar10);
  func_0x000107c61180();
  uVar6 = uVar10;
  func_0x000107c40290(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c521e8(uVar6);
  func_0x000107c61170(uVar6);
  puVar2 = (undefined8 *)(puVar5 + _DAT_112f4e8b0);
  uVar6 = *puVar2;
  func_0x000107c61174(uVar6);
  func_0x000107c59c78();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c5a100(*puVar2);
  func_0x000107c5a050(*puVar2);
  func_0x000107c5381c(0x443b8000,*puVar2);
  func_0x000107c537fc(0x437a0000,*puVar2);
  func_0x000107c56ba8(*puVar2);
  func_0x000107c55f80(*puVar2);
  func_0x000107c59c74(*puVar2);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  if (param_2 < 2) {
    puVar18 = puVar1;
    puVar19 = puVar2;
    if (param_2 == 0) {
LAB_10324594c:
      uVar12 = *puVar18;
      uVar14 = *puVar19;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c3d89c(puVar4);
      func_0x000107c3d89c(puVar4);
      puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar9 = puVar8;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar9 + 0x18) = 0xd;
      *(undefined8 *)(puVar9 + 0x10) = 6;
      uVar6 = uVar12;
      func_0x000107c4acb0();
      func_0x000107c61180();
      puVar13 = puVar4;
      func_0x000107c4acb0(puVar4);
      func_0x000107c61180();
      uVar10 = uVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar13);
      *(undefined8 *)(puVar9 + 0x20) = uVar10;
      uVar6 = uVar14;
      func_0x000107c4acb0();
      func_0x000107c61180();
      uVar10 = uVar12;
      func_0x000107c5ce8c(uVar12);
      func_0x000107c61180();
      uVar11 = uVar6;
      func_0x000107c40284(0x4018000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(puVar9 + 0x28) = uVar11;
      uVar6 = uVar14;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar13 = puVar4;
      func_0x000107c5ce8c(puVar4);
      func_0x000107c61180();
      uVar10 = uVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar13);
      *(undefined8 *)(puVar9 + 0x30) = uVar10;
      uVar10 = *puVar2;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      puVar13 = puVar4;
      func_0x000107c5cbe4(puVar4);
      func_0x000107c61180();
      uVar6 = uVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar13);
      *(undefined8 *)(puVar9 + 0x38) = uVar6;
      uVar10 = *puVar2;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      puVar13 = puVar4;
      func_0x000107c3ec1c(puVar4);
      func_0x000107c61180();
      uVar6 = uVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar13);
      *(undefined8 *)(puVar9 + 0x40) = uVar6;
      uVar10 = *puVar1;
      func_0x000107c3f764();
      func_0x000107c61180();
      puVar13 = puVar4;
      func_0x000107c3f764(puVar4);
      func_0x000107c61180();
      uVar6 = uVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar13);
      *(undefined8 *)(puVar9 + 0x48) = uVar6;
      uVar6 = 0;
      func_0x000100847984(0);
      puVar13 = puVar9;
      func_0x000107c5fc48(puVar9,uVar6);
      func_0x000107c61574(puVar9);
      func_0x000107c3d048(puVar8);
      func_0x000107c61170(uVar12);
      goto LAB_103245dc4;
    }
  }
  else {
    puVar18 = puVar2;
    puVar19 = puVar1;
    if (param_2 == 2) goto LAB_10324594c;
  }
  uVar14 = *puVar18;
  func_0x000107c61174();
  func_0x000107c3d89c(puVar4);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar9 = puVar8;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar9 + 0x18) = 9;
  *(undefined8 *)(puVar9 + 0x10) = 4;
  uVar6 = uVar14;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar13 = puVar4;
  func_0x000107c4acb0(puVar4);
  func_0x000107c61180();
  uVar10 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar13);
  *(undefined8 *)(puVar9 + 0x20) = uVar10;
  uVar6 = uVar14;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar13 = puVar4;
  func_0x000107c5ce8c(puVar4);
  func_0x000107c61180();
  uVar10 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar13);
  *(undefined8 *)(puVar9 + 0x28) = uVar10;
  uVar6 = uVar14;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar13 = puVar4;
  func_0x000107c5cbe4(puVar4);
  func_0x000107c61180();
  uVar10 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar13);
  *(undefined8 *)(puVar9 + 0x30) = uVar10;
  uVar6 = uVar14;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar13 = puVar4;
  func_0x000107c3ec1c(puVar4);
  func_0x000107c61180();
  uVar10 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar13);
  *(undefined8 *)(puVar9 + 0x38) = uVar10;
  uVar6 = 0;
  func_0x000100847984(0);
  puVar13 = puVar9;
  func_0x000107c5fc48(puVar9,uVar6);
  func_0x000107c61574(puVar9);
  func_0x000107c3d048(puVar8);
LAB_103245dc4:
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar13);
  puVar15 = puVar5;
  func_0x000107c3d89c();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar15 + 0x18) = 9;
  *(undefined8 *)(puVar15 + 0x10) = 4;
  puVar8 = puVar4;
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar16 = puVar5;
  func_0x000107c3f764(puVar5);
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar16);
  *(undefined **)(puVar15 + 0x20) = puVar9;
  puVar8 = puVar4;
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar16 = puVar5;
  func_0x000107c3f75c(puVar5);
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar16);
  *(undefined **)(puVar15 + 0x28) = puVar9;
  puVar8 = puVar4;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar16 = puVar5;
  func_0x000107c44d9c(puVar5);
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar16);
  *(undefined **)(puVar15 + 0x30) = puVar9;
  puVar16 = puVar5;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar10 = 0x4042000000000000;
  dVar22 = 36.0;
  if (param_3 != '\x01') {
    dVar22 = 40.0;
  }
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar17 = puVar16;
  func_0x000107c40290(dVar22);
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  *(undefined1 **)(puVar15 + 0x38) = puVar17;
  func_0x000100847984(0);
  puVar16 = puVar15;
  func_0x000107c5fc48(puVar15,uVar6);
  func_0x000107c61574(puVar15);
  func_0x000107c3d048(puVar8);
  func_0x000107c61170(puVar16);
  if (param_3 != '\x01') {
    puVar15 = puVar5;
    func_0x000107c5e308(puVar5);
    func_0x000107c61180();
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar8);
    func_0x000107c609cc(dVar22,uVar10,uVar20,uVar21);
    puVar16 = puVar15;
    func_0x000107c40290(dVar22 + -16.0,puVar15);
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    func_0x000107c521e8(puVar16);
    func_0x000107c61170(puVar16);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  return puVar5;
}



/* Entry: 103246090; end: 1032460e7;  */

undefined1 FUN_103246090(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1032460e8; end: 103246223;  */

void FUN_1032460e8(void)

{
  func_0x0001000285a8(0x112f4d828,&UNK_10db9fbf0);
  func_0x0001000823a8(0x103246128,0);
  return;
}



/* Entry: 103246224; end: 103246243;  */

undefined1  [16] FUN_103246224(void)

{
  return ZEXT816(0x11062b0f8);
}



/* Entry: 103246244; end: 1032464db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103246244(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f4e930;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4e930);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x0001032462a8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1032464dc; end: 10324657f;  */

undefined * FUN_1032464dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  func_0x000107c61174(puVar1);
  func_0x000107c56ba8();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c537fc(0x447a0000,puVar1,param_2,1);
  func_0x000107c5b09c(puVar1);
  return puVar1;
}



/* Entry: 103246580; end: 1032465fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103246580(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f4e948;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f4e948);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1032465fc; end: 103246987;  */

/* WARNING: Possible PIC construction at 0x000103246630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103246648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032466e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103246740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103246798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032467f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324682c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103246878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032468cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103246920: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032468d0) */
/* WARNING: Removing unreachable block (ram,0x00010324687c) */
/* WARNING: Removing unreachable block (ram,0x000103246830) */
/* WARNING: Removing unreachable block (ram,0x0001032467f4) */
/* WARNING: Removing unreachable block (ram,0x00010324679c) */
/* WARNING: Removing unreachable block (ram,0x000103246744) */
/* WARNING: Removing unreachable block (ram,0x0001032466e4) */
/* WARNING: Removing unreachable block (ram,0x00010324664c) */
/* WARNING: Removing unreachable block (ram,0x000103246634) */
/* WARNING: Removing unreachable block (ram,0x000103246924) */

void FUN_1032465fc(undefined8 param_1)

{
  FUN_103246244();
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103246988; end: 1032469af; -[_TtC40SCContextRepostedStoryActionItemRenderer15CaptionCardView initWithCoder:] */

void FUN_103246988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103246f04();
  return;
}



/* Entry: 1032469b0; end: 103246c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032469b0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar1 = _DAT_112f4e910;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar2);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  *(double *)(unaff_x20 + lVar1) = param_1 + -120.0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e918) = 0x4010000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e920) = 0x4008000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e928) = 0x4010000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e930) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e938) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e940) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e948) = 0;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffa0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar4 = puVar3;
  FUN_103246580();
  func_0x000107c3d89c(puVar3);
  func_0x000107c61170(puVar4);
  FUN_103246244();
  func_0x000107c3d89c(puVar3);
  func_0x000107c61170(puVar4);
  FUN_1032465fc();
  puVar4 = puVar3;
  func_0x000107c4aba4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c539d4(0x4010000000000000,puVar4);
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c4aba4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c562fc(puVar4);
  func_0x000107c61170(puVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar5 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  uVar6 = *(undefined8 *)(puVar3 + _DAT_112f4e948);
  func_0x000107c61174(uVar6);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(uVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103246c1c; end: 103246c3b; -[_TtC40SCContextRepostedStoryActionItemRenderer15CaptionCardView init] */

void FUN_103246c1c(void)

{
  FUN_1032469b0();
  return;
}



/* Entry: 103246c3c; end: 103246c7f; -[_TtC40SCContextRepostedStoryActionItemRenderer15CaptionCardView intrinsicContentSize] */

undefined1  [16] FUN_103246c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174();
  FUN_103246c80();
  func_0x000107c61170(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 103246c80; end: 103246d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103246c80(double param_1,undefined8 param_2)

{
  long unaff_x20;
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  func_0x000103246398();
  func_0x000107c498ec();
  dVar1 = param_1;
  func_0x000107c61170(param_2);
  func_0x00010324647c();
  func_0x000107c498ec();
  func_0x000107c61170(param_2);
  if (dVar1 < param_1) {
    dVar1 = param_1;
  }
  dVar2 = dVar1 + 8.0 + 3.0;
  dVar1 = *(double *)(unaff_x20 + _DAT_112f4e910);
  if (dVar2 <= *(double *)(unaff_x20 + _DAT_112f4e910)) {
    dVar1 = dVar2;
  }
  dVar2 = *(double *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
  func_0x000103246244();
  func_0x000107c5c610(dVar1,dVar2);
  func_0x000107c61170(param_2);
  auVar3._8_8_ = dVar2 + 8.0;
  auVar3._0_8_ = dVar1;
  return auVar3;
}



/* Entry: 103246d38; end: 103246deb;  */

void FUN_103246d38(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103246398();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1);
  }
  func_0x000107c59c6c(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x00010324647c();
  uVar1 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar1 = param_3;
  }
  func_0x000107c59c6c(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103246dec; end: 103246e4b; -[_TtC40SCContextRepostedStoryActionItemRenderer15CaptionCardView initWithFrame:] */

void FUN_103246dec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextRepostedStoryActionItemRenderer.CaptionCardView",0x38,"init(frame:)"
                      ,0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103246e18);
  (*pcVar1)();
}



/* Entry: 103246e4c; end: 103246ea3; -[_TtC40SCContextRepostedStoryActionItemRenderer15CaptionCardView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103246e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103246e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103246e6c) */
/* WARNING: Removing unreachable block (ram,0x000103246e8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103246e4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4e930));
  return;
}



/* Entry: 103246ea4; end: 103246ec3;  */

void FUN_103246ea4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c2e80);
  return;
}



/* Entry: 103246ec4; end: 103246f03;  */

void FUN_103246ec4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103246f04; end: 10324702b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103246f04(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112f4e910;
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar3);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  *(double *)(unaff_x20 + lVar1) = param_1 + -120.0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e918) = 0x4010000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e920) = 0x4008000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e928) = 0x4010000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e930) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e938) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e940) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e948) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextRepostedStoryActionItemRenderer/CaptionCardView.swift",0x3e,2,0x48,0
                     );
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10324702c);
  (*pcVar2)();
}



/* Entry: 10324702c; end: 10324756b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10324702c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f4e980;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f4e980);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c56ba8();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c59c78(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x000107c4179c(0x4032000000000000);
    func_0x000107c61180();
    func_0x000107c54adc(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c55f80(puVar3,param_2,4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10324756c; end: 1032477e3;  */

/* WARNING: Possible PIC construction at 0x00010324759c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032475b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103247648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324769c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032476f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103247744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103247788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103247748) */
/* WARNING: Removing unreachable block (ram,0x0001032476f4) */
/* WARNING: Removing unreachable block (ram,0x0001032476a0) */
/* WARNING: Removing unreachable block (ram,0x00010324764c) */
/* WARNING: Removing unreachable block (ram,0x0001032475b8) */
/* WARNING: Removing unreachable block (ram,0x0001032475a0) */
/* WARNING: Removing unreachable block (ram,0x00010324778c) */

void FUN_10324756c(undefined8 param_1)

{
  func_0x0001032474cc();
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032477e4; end: 1032478eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032477e4(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f4e978) = 0x4032000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e980) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e988) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e990) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e998) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e9a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e9a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e9b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e9b8) = 0x4030000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e9c0) = 0x4024000000000000;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffd0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x0001032474cc();
  func_0x000107c3d89c(puVar1);
  func_0x000107c61170(puVar2);
  FUN_10324756c();
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1032478ec; end: 10324790b; -[_TtC40SCContextRepostedStoryActionItemRenderer24ContextRepostedStoryView init] */

void FUN_1032478ec(void)

{
  FUN_1032477e4();
  return;
}



/* Entry: 10324790c; end: 10324793f; -[_TtC40SCContextRepostedStoryActionItemRenderer24ContextRepostedStoryView initWithCoder:] */

undefined8 FUN_10324790c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1032480dc();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 103247940; end: 103247e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103247940(undefined **param_1,ulong param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined *puStack_78;
  undefined1 auStack_70 [32];
  
  ppuVar2 = param_1;
  func_0x000107c44784();
  if ((int)ppuVar2 != 0) {
    func_0x00010324731c();
    ppuVar9 = param_1;
    func_0x000107c3f540();
    func_0x000107c61180();
    if (ppuVar9 == (undefined **)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103247e30);
      (*pcVar1)();
    }
    ppuVar11 = ppuVar9;
    func_0x000107c5cab0();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar9);
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar9 = (undefined **)0x0;
      uVar7 = 0;
      uVar10 = param_2;
    }
    else {
      ppuVar9 = ppuVar11;
      func_0x000107c5faec(ppuVar11);
      uVar10 = param_2;
      func_0x000107c61170(ppuVar11);
      uVar7 = param_2;
    }
    ppuVar11 = param_1;
    func_0x000107c3f540();
    func_0x000107c61180();
    if (ppuVar11 == (undefined **)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103247e34);
      (*pcVar1)();
    }
    ppuVar3 = ppuVar11;
    func_0x000107c5c82c();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar11);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar11 = (undefined **)0x0;
      uVar10 = 0;
    }
    else {
      ppuVar11 = ppuVar3;
      func_0x000107c5faec(ppuVar3);
      func_0x000107c61170(ppuVar3);
    }
    param_2 = uVar7;
    FUN_103246d38(ppuVar9,uVar7,ppuVar11,uVar10);
    func_0x000107c61170(ppuVar2);
    func_0x000107c6142c(uVar10);
    func_0x000107c6142c(uVar7);
    func_0x0001032474cc();
    func_0x000107c3d5b4();
    func_0x000107c61170(uVar7);
  }
  ppuVar2 = param_1;
  func_0x000107c5de98();
  if (0 < (int)ppuVar2) {
    puVar8 = PTR_PTR_1126b10c8;
    func_0x000107c61168();
    ppuVar2 = param_1;
    func_0x000107c5de98(param_1);
    func_0x000107c5ab20((double)(int)ppuVar2);
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
      func_0x000107c5faec();
      uVar10 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      param_2 = uVar10;
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    func_0x000107c610f8();
    func_0x000107c48af4();
    func_0x000107c61170(puVar8);
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
      func_0x000107c61174(puVar4);
      puVar8 = puVar5;
      func_0x00010324711c();
      func_0x000107c4adac(puVar5);
      func_0x000107c3d5c4(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar8);
    }
    func_0x000103247244();
    func_0x000107c61174(puVar4);
    func_0x000107c529c4(puVar8);
    func_0x000107c61170(puVar8);
    puVar8 = puVar4;
    func_0x000107c61170(puVar4);
    func_0x0001032474cc();
    puVar5 = puVar8;
    func_0x000103247384();
    func_0x000107c3d5b4(puVar8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar5);
  }
  ppuVar2 = param_1;
  func_0x000107c4e094();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103247e1c);
    (*pcVar1)();
  }
  ppuVar9 = ppuVar2;
  func_0x000107c42120();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  if (ppuVar9 == (undefined **)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103247e20);
    (*pcVar1)();
  }
  ppuVar2 = ppuVar9;
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar9);
  func_0x000107c6142c(param_2);
  uVar10 = (ulong)ppuVar2 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar10 = param_2 >> 0x38 & 0xf;
  }
  if (uVar10 == 0) goto LAB_103247df4;
  ppuVar2 = param_1;
  func_0x000107c4e094();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103247e24);
    (*pcVar1)();
  }
  ppuVar9 = ppuVar2;
  func_0x000107c42120();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  if (ppuVar9 == (undefined **)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103247e28);
    (*pcVar1)();
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  func_0x000107c610f8();
  func_0x000107c48af4();
  func_0x000107c61170(ppuVar9);
  func_0x000107c4e094();
  func_0x000107c61180();
  if (param_1 == (undefined **)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103247e2c);
    (*pcVar1)();
  }
  ppuVar2 = param_1;
  func_0x000107c4a10c();
  func_0x000107c61170(param_1);
  if ((int)ppuVar2 == 0) {
    if (puVar8 != (undefined *)0x0) goto LAB_103247d64;
  }
  else {
    func_0x000107c42450();
    func_0x000107c61174(puVar8);
    puVar4 = puVar8;
    if (unaff_x20 == 1) {
      func_0x000108f474a8();
    }
    else {
      func_0x000108f472f8();
    }
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar5 = puVar4;
    func_0x000107c4d2d4(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c60234(auStack_70,puVar5);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(puVar8);
    uVar6 = 0;
    FUN_1032481b8(0,0x112d604e0,&PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    param_1 = &puStack_78;
    func_0x000107c6147c(param_1,auStack_70,PTR___sypN_11034f1a8 + 8,uVar6,6);
    puVar8 = puStack_78;
    if (((ulong)param_1 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
LAB_103247d64:
      func_0x00010324711c();
      func_0x000107c4adac(puVar8);
      func_0x000107c3d5c4(puVar8);
      func_0x000107c61170(param_1);
    }
  }
  func_0x00010324702c();
  func_0x000107c529c4();
  func_0x000107c61170(param_1);
  func_0x0001032474cc();
  func_0x000107c3d5b4();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_1);
LAB_103247df4:
  func_0x000107c56a14();
  return;
}



/* Entry: 103247e34; end: 103247e93; -[_TtC40SCContextRepostedStoryActionItemRenderer24ContextRepostedStoryView initWithFrame:] */

void FUN_103247e34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextRepostedStoryActionItemRenderer.ContextRepostedStoryView",0x41,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103247e60);
  (*pcVar1)();
}



/* Entry: 103247e94; end: 103247f1b; -[_TtC40SCContextRepostedStoryActionItemRenderer24ContextRepostedStoryView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103247eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103247ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103247ef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103247ed4) */
/* WARNING: Removing unreachable block (ram,0x000103247eb4) */
/* WARNING: Removing unreachable block (ram,0x000103247ef4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103247e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4e980));
  return;
}



/* Entry: 103247f1c; end: 103247f3b;  */

void FUN_103247f1c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c2f70);
  return;
}



/* Entry: 103247f3c; end: 1032480db;  */

undefined * FUN_103247f3c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = 0x756f635f77656976;
  func_0x000107c5fadc(0x756f635f77656976,0xea0000000000746e);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  func_0x000107c61170(puVar2);
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar4 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 5;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  puVar5 = puVar3;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c40290(0x4024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined **)(puVar4 + 0x20) = puVar6;
  puVar5 = puVar3;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar6 = puVar5;
  func_0x000107c40290(0x4024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined **)(puVar4 + 0x28) = puVar6;
  uVar1 = 0;
  FUN_1032481b8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar5 = puVar4;
  func_0x000107c5fc48(puVar4,uVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 1032480dc; end: 1032481b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032480dc(void)

{
  code *pcVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f4e978) = 0x4032000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e980) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e988) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e990) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e998) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e9a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e9a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e9b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e9b8) = 0x4030000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4e9c0) = 0x4024000000000000;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextRepostedStoryActionItemRenderer/ContextRepostedStoryView.swift",0x47
                      ,2,0x69,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032481b8);
  (*pcVar1)();
}



/* Entry: 1032481b8; end: 1032481f7;  */

void FUN_1032481b8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032481f8; end: 10324843f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032481f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  char *pcVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  code *pcVar9;
  
  puVar3 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112f4e9f0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112f4e9f8;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112f4ea00;
  uVar2 = 0;
  FUN_103247f1c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112f4ea08) = 5;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffff90,PTR_s_initWithFrame__1125e2948);
  *(undefined8 *)(puVar3 + _DAT_112f4e9f0 + 8) = param_2;
  func_0x000107c61604(puVar3 + _DAT_112f4e9f0,param_1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x112f4ea38;
  func_0x0001000285a8(0x112f4ea38,&UNK_10dba1628);
  pcVar4 = FUN_103248504;
  func_0x0001000bfde0(FUN_103248504,0,uVar2);
  pcVar5 = "init(delegate:operaState:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar6 = (long *)pcVar5;
  func_0x000100471e0c();
  func_0x000107c61574(pcVar4);
  func_0x000107c615e8();
  FUN_103248a80();
  func_0x0001000c2068();
  func_0x000107c61574(plVar6);
  puVar7 = &UNK_11062b200;
  func_0x000107c613fc(&UNK_11062b200,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,puVar3);
  func_0x000107c61170(puVar3);
  pcVar4 = FUN_103248b84;
  puVar8 = puVar7;
  (**(code **)(*(long *)pcVar5 + 0x60))(FUN_103248b84);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar7);
  func_0x000107c614f0(pcVar4);
  uVar2 = *(undefined8 *)(puVar3 + _DAT_112f4e9f8);
  pcVar9 = *(code **)(puVar8 + 0x10);
  func_0x000107c6157c(uVar2);
  (*pcVar9)();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_3);
  func_0x000107c615e8(pcVar4);
  func_0x000107c61574(uVar2);
  return puVar3;
}



/* Entry: 103248440; end: 1032484db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103248440(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar2 = *(undefined8 *)(param_2 + _DAT_112f4ea00);
      func_0x000107c61174(lVar1);
      func_0x000107c61174(uVar2);
      func_0x000107c61170(param_2);
      FUN_103247940(lVar1);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1032484dc; end: 103248503; -[_TtC40SCContextRepostedStoryActionItemRenderer31RepostedStoryActionItemRenderer initWithCoder:] */

void FUN_1032484dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000103248764();
  return;
}



/* Entry: 103248504; end: 1032485cf;  */

void FUN_103248504(ulong *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = *(ulong *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  puVar2 = &UNK_10dba1630;
  func_0x000107c614e0(&UNK_10dba1630);
  if (lVar1 == 0) {
    func_0x000107c61574();
    uVar4 = 0;
  }
  else {
    func_0x000107c61434(lVar1);
    FUN_10324a900(uVar3,lVar1,uVar5,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(lVar1);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c44a9c();
      if ((uVar4 & 1) != 0) {
        uVar4 = uVar3;
        func_0x000107c502f8();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        goto LAB_1032485b4;
      }
      func_0x000107c61170(uVar3);
    }
    uVar4 = 0;
  }
LAB_1032485b4:
  *param_1 = uVar4;
  return;
}



/* Entry: 1032485d0; end: 10324862f; -[_TtC40SCContextRepostedStoryActionItemRenderer31RepostedStoryActionItemRenderer initWithFrame:] */

void FUN_1032485d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextRepostedStoryActionItemRenderer.RepostedStoryActionItemRenderer",
                      0x48,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032485fc);
  (*pcVar1)();
}



/* Entry: 103248630; end: 103248677; -[_TtC40SCContextRepostedStoryActionItemRenderer31RepostedStoryActionItemRenderer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103248630(long param_1)

{
  FUN_1031de120(param_1 + _DAT_112f4e9f0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4e9f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4ea00));
  return;
}



/* Entry: 103248678; end: 103248697;  */

void FUN_103248678(void)

{
  func_0x000107c61168(&PTR_PTR_1128c3070);
  return;
}



/* Entry: 103248698; end: 1032486d7;  */

void FUN_103248698(void)

{
  FUN_103248834();
  return;
}



/* Entry: 1032486d8; end: 1032486eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1032486d8(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + _DAT_112f4ea08);
}



/* Entry: 1032486ec; end: 103248833;  */

void FUN_1032486ec(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103248b44(0,param_1,param_2);
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



/* Entry: 103248834; end: 103248a7f;  */

/* WARNING: Possible PIC construction at 0x000103248920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103248974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032489c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103248a1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032489cc) */
/* WARNING: Removing unreachable block (ram,0x000103248978) */
/* WARNING: Removing unreachable block (ram,0x000103248924) */
/* WARNING: Removing unreachable block (ram,0x000103248a20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103248834(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f4ea00);
  func_0x000107c5a050(uVar2,param_2,0);
  func_0x000107c3d89c();
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar1 = 0x112d360b8;
  FUN_1032486ec(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 9;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  func_0x000107c5cbe4(uVar2);
  func_0x000107c61180();
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c40280(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103248a80; end: 103248aef;  */

void FUN_103248a80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4ea40 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ea38;
  func_0x00010002969c(0x112f4ea38,&UNK_10dba1628);
  uVar2 = uVar1;
  FUN_103248af0();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f4ea40 = puVar3;
  return;
}



/* Entry: 103248af0; end: 103248b43;  */

void FUN_103248af0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ea48 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_103248b44(0xff,0x112f4ea50,&PTR_PTR_1126df4d0);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112f4ea48 = puVar2;
  return;
}



/* Entry: 103248b44; end: 103248b83;  */

void FUN_103248b44(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103248b84; end: 103248b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103248b84(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112f4ea00);
      func_0x000107c61174(lVar2);
      func_0x000107c61174(uVar3);
      func_0x000107c61170(lVar1);
      FUN_103247940(lVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 103248b8c; end: 103248bb3;  */

void FUN_103248b8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000103b93a28();
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 103248bb4; end: 103248c37;  */

long FUN_103248bb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4d148;
  func_0x0001000285a8(0x112f4d148,&UNK_10db9ece8);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 103248c38; end: 103248cb3;  */

undefined1  [16] FUN_103248c38(void)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = 0x112f4d830;
  func_0x0001000285a8(0x112f4d830,&UNK_10db9fc70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined **)(lVar1 + 0x38) = &UNK_11076b0d0;
  lVar2 = lVar1;
  func_0x00010322b0e0();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0x747865746e6f63;
  *(undefined8 *)(lVar1 + 0x28) = 0xe700000000000000;
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = 0x500;
  return auVar3;
}



/* Entry: 103248cb4; end: 103248cc3;  */

undefined1 FUN_103248cb4(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 103248cc4; end: 103248e87;  */

void FUN_103248cc4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103248678();
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_4);
  FUN_1032481f8(param_2,param_3,param_4);
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11062b1d0;
  *param_1 = param_2;
  return;
}



/* Entry: 103248e88; end: 103248e97;  */

undefined1 FUN_103248e88(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 2);
}



/* Entry: 103248e98; end: 103248f2f;  */

void FUN_103248e98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = 0;
  FUN_10324a88c();
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_4);
  FUN_10324993c(param_2,param_3,param_4,uVar1,uVar2);
  param_1[3] = uVar3;
  param_1[4] = &PTR_DAT_11062b3e0;
  *param_1 = param_2;
  return;
}



/* Entry: 103248f30; end: 103248f5f;  */

undefined ** FUN_103248f30(void)

{
  return &PTR_DAT_11076be48;
}



/* Entry: 103248f60; end: 103248fcf;  */

undefined8 * FUN_103248f60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103248fd0; end: 103248fdf;  */

undefined1  [16] FUN_103248fd0(void)

{
  return ZEXT816(0x11062b2a0);
}



/* Entry: 103248fe0; end: 103249093;  */

undefined2 * FUN_103248fe0(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103249094; end: 1032490a3;  */

undefined1  [16] FUN_103249094(void)

{
  return ZEXT816(0x11062b320);
}



/* Entry: 1032490a4; end: 103249143;  */

undefined1 * FUN_1032490a4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103249144; end: 10324921b;  */

int FUN_103249144(int *param_1,int param_2)

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



/* Entry: 10324921c; end: 10324927f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10324921c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f4eb10;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4eb10);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_103249280();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 103249280; end: 10324967b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103249280(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar2 = param_1;
  if (*(char *)(param_1 + _DAT_112f4eb08) == '\x01') {
    func_0x00010324947c();
  }
  else {
    FUN_10324967c();
  }
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c61174(lVar2);
  func_0x000107c48c2c(puVar3);
  func_0x000107c5317c();
  func_0x000107c53fc4(puVar3);
  func_0x000107c53fc8(puVar3);
  func_0x000107c3d6fc(lVar2);
  uVar8 = 0x800000010f131f80;
  lVar4 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f131f80);
  func_0x000107c520f4(lVar2);
  func_0x000107c61170(lVar4);
  if (*(char *)(param_1 + _DAT_112f4eb00) == '\x01') {
    lVar4 = 0x6e6f5f6863746177;
    func_0x000107c5fadc(0x6e6f5f6863746177,0xee00736c6165725f);
    uVar5 = 0x646574736f706552;
    func_0x000107c5fadc(0x646574736f706552,0xed000079726f7453);
    uVar6 = 0;
    func_0x000107c5fe40(0);
    lVar7 = lVar4;
    uVar8 = uVar5;
    func_0x0001000f6108(lVar4,uVar5,uVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10324947c);
      (*pcVar1)();
    }
    lVar4 = lVar7;
    func_0x000107c5faec(lVar7);
    func_0x000107c61170(lVar7);
  }
  else {
    FUN_10324b124();
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar8);
  func_0x000107c520fc(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar3);
  return lVar2;
}



/* Entry: 10324967c; end: 10324993b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10324967c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  if (*(char *)(unaff_x20 + _DAT_112f4eb00) == '\x01') {
    puVar3 = (undefined *)0x6e6f5f6863746177;
    func_0x000107c5fadc(0x6e6f5f6863746177,0xee00736c6165725f);
    uVar4 = 0x646574736f706552;
    func_0x000107c5fadc(0x646574736f706552,0xed000079726f7453);
    uVar5 = 0;
    func_0x000107c5fe40(0);
    puVar6 = puVar3;
    param_3 = uVar4;
    func_0x0001000f6108(puVar3,uVar4,uVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10324993c);
      (*pcVar1)();
    }
    puVar3 = puVar6;
    func_0x000107c5faec(puVar6);
    func_0x000107c61170(puVar6);
  }
  else {
    puVar3 = puVar2;
    FUN_10324b124();
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(param_3);
  func_0x000107c59e1c(puVar2);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar6 = puVar3;
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c59e34(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61174();
  func_0x000107c5e2ac(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(puVar2);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
    puVar7 = puVar6;
    func_0x000107c4eca4();
    func_0x000107c61180();
    func_0x000107c4eaec();
    func_0x000107c61170(puVar7);
    func_0x000107c5c600(param_1,*(undefined8 *)PTR__UIFontWeightSemibold_110345c48,puVar6);
    func_0x000107c61180();
    func_0x000107c54adc(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
  }
  puVar3 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c539d4(0x4034000000000000);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c562fc(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c53810(0,0x4030000000000000,0,0x4030000000000000,puVar2);
  return puVar2;
}



/* Entry: 10324993c; end: 103249ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10324993c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  code *pcVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  long unaff_x20;
  undefined8 uVar13;
  
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112f4eae8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112f4eaf0;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f4eaf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4eb10) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f4eb18) = 6;
  *(undefined1 *)(unaff_x20 + _DAT_112f4eb00) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112f4eb08) = param_5;
  puVar3 = &stack0xffffffffffffff90;
  func_0x000107c61154(0,0,0,0,puVar3,PTR_s_initWithFrame__1125e2948);
  *(undefined8 *)(puVar3 + _DAT_112f4eae8 + 8) = param_2;
  func_0x000107c61604(puVar3 + _DAT_112f4eae8,param_1);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000107c5a378();
  FUN_10324921c();
  func_0x000107c550d8();
  func_0x000107c61170(puVar4);
  func_0x000107c5a378(*(undefined8 *)(puVar3 + _DAT_112f4eb10));
  uVar2 = 0x112f4eb48;
  func_0x0001000285a8(0x112f4eb48,&UNK_10dba1750);
  pcVar12 = FUN_10324a1f0;
  func_0x0001000bfde0(FUN_10324a1f0,0,uVar2);
  pcVar5 = "init(delegate:operaState:shouldRenameSpotlightToReals:useCTARedesign:)";
  func_0x0001000c10c0("init(delegate:operaState:shouldRenameSpotlightToReals:useCTARedesign:)");
  func_0x000107c61180();
  pcVar6 = pcVar5;
  func_0x000100471e0c();
  func_0x000107c61574(pcVar12);
  func_0x000107c615e8(pcVar5);
  pcVar12 = FUN_103249cec;
  func_0x00010487de38(FUN_103249cec,0);
  func_0x000107c61574(pcVar6);
  puVar10 = &UNK_11062b438;
  puVar7 = puVar10;
  func_0x000107c613fc(&UNK_11062b438,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,puVar3);
  pcVar8 = FUN_10324b094;
  puVar11 = puVar7;
  (**(code **)(*(long *)pcVar12 + 0x60))(FUN_10324b094);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(puVar7);
  func_0x000107c614f0(pcVar8);
  lVar1 = _DAT_112f4eaf0;
  uVar2 = *(undefined8 *)(puVar3 + _DAT_112f4eaf0);
  pcVar12 = *(code **)(puVar11 + 0x10);
  func_0x000107c6157c(uVar2);
  (*pcVar12)();
  func_0x000107c615e8(pcVar8);
  func_0x000107c61574(uVar2);
  pcVar12 = FUN_103249f80;
  func_0x0001000bfde0(FUN_103249f80,0,PTR___sSbN_11034dd40);
  pcVar5 = "init(delegate:operaState:shouldRenameSpotlightToReals:useCTARedesign:)";
  func_0x0001000c10c0("init(delegate:operaState:shouldRenameSpotlightToReals:useCTARedesign:)");
  func_0x000107c61180();
  pcVar6 = pcVar5;
  func_0x000100471e0c();
  func_0x000107c61574(pcVar12);
  func_0x000107c615e8(pcVar5);
  plVar9 = (long *)PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068();
  func_0x000107c61574(pcVar6);
  func_0x000107c613fc(&UNK_11062b438,0x18,7);
  func_0x000107c61614(puVar10 + 0x10,puVar3);
  func_0x000107c61170(puVar3);
  uVar2 = 0x10324b09c;
  puVar7 = puVar10;
  (**(code **)(*plVar9 + 0x60))(0x10324b09c);
  func_0x000107c61574(plVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c614f0(uVar2);
  uVar13 = *(undefined8 *)(puVar3 + lVar1);
  pcVar12 = *(code **)(puVar7 + 0x10);
  func_0x000107c6157c(uVar13);
  (*pcVar12)();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_3);
  func_0x000107c615e8(uVar2);
  func_0x000107c61574(uVar13);
  return puVar3;
}



/* Entry: 103249cec; end: 103249f7f;  */

uint FUN_103249cec(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  
  lVar2 = *param_1;
  plVar7 = (long *)*param_2;
  plVar5 = param_2;
  if (lVar2 == 0) {
LAB_103249d64:
    lVar2 = 0;
    param_2 = (long *)0x0;
    if (plVar7 == (long *)0x0) goto joined_r0x000103249df8;
LAB_103249d70:
    func_0x000107c5e140();
    func_0x000107c61180();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103249e5c);
      (*pcVar1)();
    }
    lVar3 = (long)plVar7;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    func_0x000107c61170(plVar7);
    if (lVar3 == 0) {
      plVar7 = (long *)0x0;
      goto joined_r0x000103249df8;
    }
    lVar4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    if (param_2 == (long *)0x0) goto LAB_103249dfc;
LAB_103249dc0:
    if (plVar5 == (long *)0x0) {
      uVar6 = 0;
    }
    else if ((lVar2 == lVar4) && (param_2 == plVar5)) {
      func_0x000107c6142c(param_2);
      uVar6 = 1;
      param_2 = plVar5;
    }
    else {
      func_0x000107c605b8(lVar2,param_2,lVar4,plVar5,0);
      uVar6 = (uint)lVar2;
      func_0x000107c6142c(param_2);
      param_2 = plVar5;
    }
  }
  else {
    func_0x000107c5e140();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103249e58);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    plVar5 = param_2;
    if (lVar3 == 0) goto LAB_103249d64;
    lVar2 = lVar3;
    func_0x000107c5faec();
    plVar5 = param_2;
    func_0x000107c61170(lVar3);
    if (plVar7 != (long *)0x0) goto LAB_103249d70;
joined_r0x000103249df8:
    plVar5 = plVar7;
    lVar4 = 0;
    if (param_2 != (long *)0x0) goto LAB_103249dc0;
LAB_103249dfc:
    if (plVar5 == (long *)0x0) {
      uVar6 = 1;
      goto LAB_103249e34;
    }
    uVar6 = 0;
    param_2 = plVar5;
  }
  func_0x000107c6142c(param_2);
LAB_103249e34:
  return uVar6 & 1;
}



/* Entry: 103249f80; end: 10324a07f;  */

void FUN_103249f80(undefined1 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_190 [64];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  uStack_90 = param_2[8];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  puVar1 = &UNK_10dba1758;
  func_0x000107c614e0(&UNK_10dba1758);
  lStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  if (lStack_78 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_148 = param_2[1];
    uStack_150 = *param_2;
    uStack_138 = param_2[3];
    uStack_140 = param_2[2];
    uStack_128 = param_2[5];
    uStack_130 = param_2[4];
    uStack_118 = param_2[7];
    uStack_120 = param_2[6];
    uStack_110 = uStack_150;
    uStack_108 = uStack_148;
    uStack_100 = uStack_140;
    uStack_f8 = uStack_138;
    uStack_f0 = uStack_130;
    uStack_e8 = uStack_128;
    uStack_e0 = uStack_120;
    uStack_d8 = uStack_118;
    FUN_1031e7474(&uStack_150,auStack_190);
    puVar2 = &uStack_110;
    FUN_1031e7358(puVar2,&uStack_d0,puVar1);
    FUN_10324b0a4(&uStack_80,0x112f4b698,&UNK_10db9ae60);
    func_0x000107c61574(puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
      func_0x00010723c744();
      func_0x000107c61170(puVar2);
      *param_1 = (char)puVar3;
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10324a080; end: 10324a0f3;  */

void FUN_10324a080(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    FUN_10324921c();
    func_0x000107c550d8();
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10324a0f4; end: 10324a11b; -[_TtC40SCContextRepostedStoryActionItemRenderer32WatchSpotlightActionItemRenderer initWithCoder:] */

void FUN_10324a0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10324aa20();
  return;
}



/* Entry: 10324a11c; end: 10324a1c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10324a11c(double param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_layoutSubviews_112600e60);
  if (*(char *)(unaff_x20 + _DAT_112f4eb08) == '\x01') {
    FUN_10324921c();
    func_0x000107c4abfc();
    func_0x000107c61170(puVar2);
    lVar1 = _DAT_112f4eb10;
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f4eb10);
    func_0x000107c4aba4(uVar3);
    func_0x000107c61180();
    func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + lVar1));
    func_0x000107c609b0();
    func_0x000107c539d4(param_1 * 0.5,uVar3);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 10324a1c8; end: 10324a1ef; -[_TtC40SCContextRepostedStoryActionItemRenderer32WatchSpotlightActionItemRenderer layoutSubviews] */

void FUN_10324a1c8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10324a11c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10324a1f0; end: 10324a3bf;  */

void FUN_10324a1f0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 auStack_190 [64];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  uStack_90 = param_2[8];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  puVar2 = &UNK_10dba1758;
  func_0x000107c614e0(&UNK_10dba1758);
  lStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  if (lStack_78 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_148 = param_2[1];
    uStack_150 = *param_2;
    uStack_138 = param_2[3];
    uStack_140 = param_2[2];
    uStack_128 = param_2[5];
    uStack_130 = param_2[4];
    uStack_118 = param_2[7];
    uStack_120 = param_2[6];
    uStack_110 = uStack_150;
    uStack_108 = uStack_148;
    uStack_100 = uStack_140;
    uStack_f8 = uStack_138;
    uStack_f0 = uStack_130;
    uStack_e8 = uStack_128;
    uStack_e0 = uStack_120;
    uStack_d8 = uStack_118;
    FUN_1031e7474(&uStack_150,auStack_190);
    puVar3 = &uStack_110;
    FUN_1031e7358(puVar3,&uStack_d0,puVar2);
    FUN_10324b0a4(&uStack_80,0x112f4b698,&UNK_10db9ae60);
    func_0x000107c61574(puVar2);
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
      func_0x00010723c744();
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = puVar3;
        func_0x0001084365e0();
        func_0x000107c61180();
        if (puVar4 != (undefined8 *)0x0) {
          puVar5 = puVar4;
          func_0x000107c502f4();
          func_0x000107c61180();
          func_0x000107c61170(puVar4);
          if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10324a3c0);
            (*pcVar1)();
          }
          puVar4 = puVar5;
          func_0x000107c5b2d0();
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          if (puVar4 != (undefined8 *)0x0) {
            puVar2 = PTR_PTR_1126cadf8;
            func_0x000107c610f8(PTR_PTR_1126cadf8);
            func_0x000107c453e4();
            func_0x000107c593e4();
            func_0x000107c61170(puVar4);
            func_0x000107c52ec0(puVar2);
            puVar6 = PTR_PTR_1126b5b00;
            func_0x000107c610f8();
            func_0x000107c453e4();
            func_0x000107c61174(puVar2);
            func_0x000107c5a654(puVar6);
            func_0x000107c61170(puVar2);
            func_0x000107c61170(puVar2);
            func_0x000107c61170(puVar3);
            *param_1 = puVar6;
            return;
          }
        }
      }
      func_0x000107c61170(puVar3);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10324a3c0; end: 10324a77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10324a3c0(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_538 [216];
  undefined1 auStack_460 [296];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_270;
  undefined8 uStack_26f;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  func_0x000107c5bcc0();
  if ((param_1 == 3) && (lVar9 = *(long *)(unaff_x20 + _DAT_112f4eaf8), lVar9 != 0)) {
    cVar1 = *(char *)(unaff_x20 + _DAT_112f4eb00);
    lVar2 = lVar9;
    func_0x000107c61174();
    if (cVar1 == '\x01') {
      lVar3 = 0x6e6f5f6863746177;
      func_0x000107c5fadc(0x6e6f5f6863746177,0xee00736c6165725f);
      uVar4 = 0x646574736f706552;
      func_0x000107c5fadc(0x646574736f706552,0xed000079726f7453);
      uVar5 = 0;
      func_0x000107c5fe40(0);
      lVar6 = lVar3;
      param_2 = uVar4;
      func_0x0001000f6108(lVar3,uVar4,uVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10324a77c);
        (*pcVar10)();
      }
      lVar3 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
    else {
      lVar3 = lVar2;
      FUN_10324b124();
    }
    func_0x0001031e60c4(&uStack_310);
    uStack_200 = uStack_2c8;
    uStack_208 = uStack_2d0;
    uStack_210 = uStack_2d8;
    uStack_218 = uStack_2e0;
    uStack_1d0 = uStack_298;
    uStack_1d8 = uStack_2a0;
    uStack_1c0 = uStack_288;
    uStack_1c8 = uStack_290;
    uStack_1b8 = uStack_280;
    uStack_1a7 = (undefined7)uStack_26f;
    uStack_1a0 = (undefined1)((ulong)uStack_26f >> 0x38);
    uStack_1f0 = uStack_2b8;
    uStack_1f8 = uStack_2c0;
    uStack_1e0 = uStack_2a8;
    uStack_1e8 = uStack_2b0;
    uStack_240 = uStack_308;
    uStack_248 = uStack_310;
    uStack_230 = uStack_2f8;
    uStack_238 = uStack_300;
    uStack_220 = uStack_2e8;
    uStack_228 = uStack_2f0;
    uStack_250 = 0;
    uStack_190 = 3;
    uStack_198 = 0;
    uStack_b0 = CONCAT71(uStack_1a7,uStack_270);
    uStack_c0 = uStack_280;
    uStack_c8 = uStack_288;
    uStack_100 = uStack_2c0;
    uStack_108 = uStack_2c8;
    uStack_f0 = uStack_2b0;
    uStack_f8 = uStack_2b8;
    uStack_e0 = uStack_2a0;
    uStack_e8 = uStack_2a8;
    uStack_d0 = uStack_290;
    uStack_d8 = uStack_298;
    uStack_140 = uStack_300;
    uStack_148 = uStack_308;
    uStack_130 = uStack_2f0;
    uStack_138 = uStack_2f8;
    uStack_120 = uStack_2e0;
    uStack_128 = uStack_2e8;
    uStack_110 = uStack_2d0;
    uStack_118 = uStack_2d8;
    uStack_a8 = CONCAT71(uStack_19f,uStack_1a0);
    uStack_a0 = 0;
    uStack_150 = uStack_310;
    uStack_158 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_178 = 0x747865746e6f63;
    uStack_170 = 0xe700000000000000;
    uStack_98 = 3;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0x100;
    lVar6 = unaff_x20 + _DAT_112f4eae8;
    uStack_70 = 0;
    uStack_68 = 1;
    lVar7 = lVar6;
    lStack_260 = lVar3;
    uStack_258 = param_2;
    lStack_168 = lVar3;
    uStack_160 = param_2;
    lStack_90 = lVar9;
    func_0x000107c61618();
    if (lVar7 == 0) {
      FUN_10324b0a4(&uStack_188,0x112f4e7e8,&UNK_10dba11d0);
    }
    else {
      lVar3 = *(long *)(lVar6 + 8);
      lVar9 = lVar7;
      func_0x000107c614f0();
      func_0x000107c610b4(auStack_460,&uStack_188,0x128);
      puVar8 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIEvent_1126c5f58);
      func_0x000107c61174(lVar2);
      FUN_10324b058(&lStack_260,auStack_538);
      func_0x000107c61174();
      func_0x000107c453e4(puVar8);
      pcVar10 = *(code **)(lVar3 + 8);
      uVar4 = 0x112f4e7e8;
      func_0x0001000285a8(0x112f4e7e8,&UNK_10dba11d0);
      uVar5 = uVar4;
      FUN_103243410();
      (*pcVar10)(&stack0xfffffffffffffcc8,auStack_460,0,1,puVar8,uVar4,uVar5,lVar9,lVar3);
      func_0x00010322ed34(&lStack_260);
      func_0x000107c615e8(lVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar2);
      FUN_10324b0a4(&uStack_188,0x112f4e7e8,&UNK_10dba11d0);
      func_0x0001000834e4(&stack0xfffffffffffffcc8);
    }
  }
  return;
}



/* Entry: 10324a77c; end: 10324a7cb; -[_TtC40SCContextRepostedStoryActionItemRenderer32WatchSpotlightActionItemRenderer didTapButton:] */

/* WARNING: Possible PIC construction at 0x00010324a7b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010324a7b8) */

void FUN_10324a77c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10324a3c0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10324a7cc; end: 10324a7d3;  */

void FUN_10324a7cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTypeStyle__112664568,7);
  return;
}



/* Entry: 10324a7d4; end: 10324a833; -[_TtC40SCContextRepostedStoryActionItemRenderer32WatchSpotlightActionItemRenderer initWithFrame:] */

void FUN_10324a7d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextRepostedStoryActionItemRenderer.WatchSpotlightActionItemRenderer",
                      0x49,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10324a800);
  (*pcVar1)();
}



/* Entry: 10324a834; end: 10324a88b; -[_TtC40SCContextRepostedStoryActionItemRenderer32WatchSpotlightActionItemRenderer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010324a870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010324a874) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10324a834(long param_1)

{
  FUN_1031de120(param_1 + _DAT_112f4eae8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4eaf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4eaf8));
  return;
}



/* Entry: 10324a88c; end: 10324a8ab;  */

void FUN_10324a88c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c3148);
  return;
}



/* Entry: 10324a8ac; end: 10324a8eb;  */

void FUN_10324a8ac(void)

{
  FUN_10324aaec();
  return;
}



/* Entry: 10324a8ec; end: 10324a8ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10324a8ec(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + _DAT_112f4eb18);
}



/* Entry: 10324a900; end: 10324aa1f;  */

undefined8 FUN_10324a900(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(auStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(auStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x00010324b0e4(0,0x112f4d740,&PTR_PTR_1126caaf8);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_90[0] = 0;
  }
  return auStack_90[0];
}



/* Entry: 10324aa20; end: 10324aaeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10324aa20(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f4eae8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112f4eaf0;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f4eaf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4eb10) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f4eb18) = 6;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextRepostedStoryActionItemRenderer/WatchSpotlightActionItemRenderer.swift"
                      ,0x4f,2,0x5c,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10324aaec);
  (*pcVar2)();
}



/* Entry: 10324aaec; end: 10324b03b;  */

/* WARNING: Possible PIC construction at 0x00010324ab2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324abcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ac7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324accc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ad24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ad78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324adf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324aeb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324af28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324aea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010324af2c) */
/* WARNING: Removing unreachable block (ram,0x00010324aeb4) */
/* WARNING: Removing unreachable block (ram,0x00010324af54) */
/* WARNING: Removing unreachable block (ram,0x00010324af58) */
/* WARNING: Removing unreachable block (ram,0x00010324aebc) */
/* WARNING: Removing unreachable block (ram,0x00010324af80) */
/* WARNING: Removing unreachable block (ram,0x00010324aecc) */
/* WARNING: Removing unreachable block (ram,0x00010324adf4) */
/* WARNING: Removing unreachable block (ram,0x00010324afc8) */
/* WARNING: Removing unreachable block (ram,0x00010324afcc) */
/* WARNING: Removing unreachable block (ram,0x00010324ae04) */
/* WARNING: Removing unreachable block (ram,0x00010324aff4) */
/* WARNING: Removing unreachable block (ram,0x00010324ae14) */
/* WARNING: Removing unreachable block (ram,0x00010324ad7c) */
/* WARNING: Removing unreachable block (ram,0x00010324ae54) */
/* WARNING: Removing unreachable block (ram,0x00010324b018) */
/* WARNING: Removing unreachable block (ram,0x00010324ae58) */
/* WARNING: Removing unreachable block (ram,0x00010324ad9c) */
/* WARNING: Removing unreachable block (ram,0x00010324afa4) */
/* WARNING: Removing unreachable block (ram,0x00010324ada0) */
/* WARNING: Removing unreachable block (ram,0x00010324ad28) */
/* WARNING: Removing unreachable block (ram,0x00010324acd0) */
/* WARNING: Removing unreachable block (ram,0x00010324ac80) */
/* WARNING: Removing unreachable block (ram,0x00010324abd0) */
/* WARNING: Removing unreachable block (ram,0x00010324ac08) */
/* WARNING: Removing unreachable block (ram,0x00010324ac0c) */
/* WARNING: Removing unreachable block (ram,0x00010324ab30) */
/* WARNING: Removing unreachable block (ram,0x00010324af30) */
/* WARNING: Removing unreachable block (ram,0x00010324ab34) */
/* WARNING: Removing unreachable block (ram,0x00010324aeac) */
/* WARNING: Removing unreachable block (ram,0x00010324aeb0) */

void FUN_10324aaec(undefined8 param_1)

{
  FUN_10324921c();
  func_0x000107c5c42c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10324b03c; end: 10324b057;  */

void FUN_10324b03c(long param_1,long param_2)

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



/* Entry: 10324b058; end: 10324b093;  */

undefined8 FUN_10324b058(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104411708)(param_2,param_1);
  return param_2;
}



/* Entry: 10324b094; end: 10324b0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10324b094(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  long alStack_80 [3];
  long lStack_68;
  undefined **ppuStack_60;
  undefined1 auStack_58 [24];
  
  uVar5 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + _DAT_112f4eaf8);
    *(undefined8 *)(lVar1 + _DAT_112f4eaf8) = uVar5;
    func_0x000107c61174(uVar5);
    func_0x000107c61170(uVar7);
    FUN_10324921c();
    func_0x000107c5a378();
    func_0x000107c61170(uVar7);
    lVar3 = lVar1 + _DAT_112f4eae8;
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar6 = *(long *)(lVar3 + 8);
      lVar3 = lVar2;
      func_0x000107c614f0();
      lVar4 = lVar3;
      FUN_10324a88c();
      ppuStack_60 = &PTR_DAT_11062b3e0;
      pcVar8 = *(code **)(lVar6 + 0x18);
      alStack_80[0] = lVar1;
      lStack_68 = lVar4;
      func_0x000107c61174(lVar1);
      (*pcVar8)(alStack_80,PTR___swiftEmptyArrayStorage_11034f1c8,lVar3,lVar6);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar1);
      func_0x0001000834e4(alStack_80);
    }
  }
  return;
}



/* Entry: 10324b0a4; end: 10324b123;  */

undefined8 FUN_10324b0a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10324b124; end: 10324b1f3;  */

undefined1  [16] FUN_10324b124(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffee;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f132090);
  uVar3 = 0x646574736f706552;
  func_0x000107c5fadc(0x646574736f706552,0xed000079726f7453);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10324b1f4);
  (*pcVar1)();
}



/* Entry: 10324b1f4; end: 10324b203;  */

undefined1  [16] FUN_10324b1f4(void)

{
  return ZEXT816(0x11062b468);
}



/* Entry: 10324b204; end: 10324b233;  */

void FUN_10324b204(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10324b234; end: 10324b247;  */

bool FUN_10324b234(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10324b248; end: 10324b2f3;  */

void FUN_10324b248(void)

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



/* Entry: 10324b2f4; end: 10324b3c3;  */

uint FUN_10324b2f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  uVar2 = param_2;
  (**(code **)(param_3 + 0x10))(param_2,param_3);
  uVar4 = 0x112f4da60;
  uStack_70 = param_2;
  lStack_68 = param_3;
  uStack_60 = param_1;
  func_0x00010002969c(0x112f4da60,&UNK_10db9feb0);
  uVar3 = 0xff;
  func_0x000107c606f0(0xff,param_2,uVar4);
  uVar4 = 0;
  func_0x000107c5fc80(0,uVar3);
  puVar5 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar4);
  uVar1 = 0;
  func_0x000107c5fc18(FUN_10324b3c4,auStack_80,uVar4,puVar5);
  func_0x000107c6142c(uVar2);
  return uVar1 & 1;
}



/* Entry: 10324b3c4; end: 10324b3f7;  */

uint FUN_10324b3c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_103250bc4(uVar1,*(undefined8 *)(unaff_x20 + 0x28),*param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10324b3f8; end: 10324b4c7;  */

uint FUN_10324b3f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = param_2;
  (**(code **)(param_3 + 0x10))(param_2,param_3);
  uVar4 = 0x112f4da60;
  uStack_70 = param_2;
  lStack_68 = param_3;
  func_0x00010002969c(0x112f4da60,&UNK_10db9feb0);
  uVar3 = 0xff;
  func_0x000107c606f0(0xff,param_2,uVar4);
  uVar4 = 0;
  func_0x000107c5fc80(0,uVar3);
  puVar5 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar4);
  uVar1 = 0;
  func_0x000107c5fbec(FUN_10324b544,auStack_80,uVar4,puVar5);
  func_0x000107c6142c(uVar2);
  return uVar1 & 1;
}


