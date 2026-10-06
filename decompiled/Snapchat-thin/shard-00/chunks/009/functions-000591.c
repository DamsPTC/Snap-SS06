/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b612b0; end: 100b612d3;  */

void FUN_100b612b0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b612d4; end: 100b612d7;  */

void FUN_100b612d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b612d8; end: 100b6147f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b612d8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar9 = &puStack_90;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f877c8);
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c4b2e0();
      func_0x000107c61180();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_70 = &UNK_1036ceb74;
      puStack_68 = (undefined *)0x0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1036cec8c;
      puStack_78 = &UNK_110681e20;
      func_0x000107c60bc4(&puStack_90);
      lVar6 = lVar4;
      func_0x000107c43494();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      lVar2 = _DAT_112f87780;
      func_0x000107c4218c(*(undefined8 *)(unaff_x20 + _DAT_112f87780));
      lVar7 = lVar6;
      func_0x000107c435e4();
      func_0x000107c61180();
      puVar8 = &UNK_1106819a8;
      func_0x000107c613fc(&UNK_1106819a8,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      puStack_70 = &UNK_1036d3e24;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_101218f4c;
      puStack_78 = &UNK_110681e48;
      puStack_68 = puVar8;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar10 = lVar7;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar6);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(lVar7);
      uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
      *(long *)(unaff_x20 + lVar2) = lVar10;
      func_0x000107c61170(uVar11);
    }
  }
  return;
}



/* Entry: 100b61480; end: 100b6148f; -[SCLensCarouselManager lensOrderObservable] */

undefined8 FUN_100b61480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100b61490; end: 100b614bb;  */

void FUN_100b61490(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61174();
  return;
}



/* Entry: 100b614bc; end: 100b614df;  */

void FUN_100b614bc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100b605a0(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                      FUN_100b614e0);
  return;
}



/* Entry: 100b614e0; end: 100b614eb;  */

void FUN_100b614e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0x112d393f0;
  uStack_40 = param_2;
  FUN_1000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_100b6089c(param_1,FUN_100b61544,auStack_70,uVar2,uVar1,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 100b614ec; end: 100b61543;  */

void FUN_100b614ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0x112d5d810;
  FUN_1000285a8(0x112d5d810,&UNK_10d923f50);
  FUN_1000bda74(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 100b61544; end: 100b6157b;  */

void FUN_100b61544(long *param_1)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x20))(*(undefined8 *)(unaff_x20 + 0x30));
  if (unaff_x21 != 0) {
    *param_1 = unaff_x21;
  }
  return;
}



/* Entry: 100b6157c; end: 100b6157f;  */

void FUN_100b6157c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b61580; end: 100b61617;  */

void FUN_100b61580(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar3 = *unaff_x20;
  func_0x000107c61574(unaff_x20[3]);
  lVar5 = *(long *)(*unaff_x20 + 0x68);
  uVar4 = *(undefined8 *)(lVar3 + 0x50);
  uVar1 = 0x112d393f0;
  FUN_10002969c(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0xff;
  func_0x000107c606cc(0xff,uVar4,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar3 = 0;
  func_0x000107c60188(0,uVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 8))((long)unaff_x20 + lVar5,lVar3);
  func_0x000107c6142c(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  return;
}



/* Entry: 100b61618; end: 100b6163b;  */

void FUN_100b61618(void)

{
  FUN_100b61580();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100b6163c; end: 100b6169f;  */

void FUN_100b6163c(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0x112d5d810;
    FUN_1000285a8(0x112d5d810,&UNK_10d923f50);
    FUN_1000bda74(lVar2,uVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 100b616a0; end: 100b6172b;  */

/* WARNING: Possible PIC construction at 0x000100b616f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b61710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b616f8) */
/* WARNING: Removing unreachable block (ram,0x000100b61714) */

void FUN_100b616a0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x30);
  func_0x000107c5c734(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b6172c; end: 100b619cb; -[SCSponsoredLensWarmupWorkflow _performLensWarmupWithStartupCompleteObservable:cameraVisibilityObservable:lensCarouselManager:] */

void FUN_100b6172c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar6);
  uVar3 = param_5;
  func_0x000107c4b2e0();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4da88();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_106123134;
  puStack_88 = &UNK_11090fce8;
  func_0x000107c61174(uVar2);
  uVar5 = uVar4;
  uStack_80 = uVar2;
  func_0x000107c3feb8();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61144(auStack_a8,*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61144(auStack_b0,param_1);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  puStack_e0 = &UNK_100c86dc8;
  puStack_d8 = &UNK_11090fd48;
  func_0x000107c61174(param_4);
  uStack_d0 = param_4;
  func_0x000107c61174(uVar6);
  uStack_c8 = uVar6;
  func_0x000107c61174(uVar5);
  uStack_c0 = uVar5;
  func_0x000107c6111c(auStack_b8,auStack_a8);
  uVar3 = param_3;
  func_0x000107c5c51c(param_3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_f8,auStack_b0);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61120(auStack_f8);
  func_0x000107c61170(uVar3);
  func_0x000107c61120(auStack_b8);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61170(uStack_c8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100b619cc; end: 100b619fb;  */

void FUN_100b619cc(void)

{
  func_0x000107c610f4(PTR_PTR_1126bba38);
  func_0x000107c472c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b619fc; end: 100b61a6f; -[SCLensDownloadStatusProvider initWithLensIconRepository:] */

undefined1 * FUN_100b619fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e9350;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b61a70; end: 100b61bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b61a70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126af680;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c5a9f0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c49a44();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae6b8;
  if ((int)puVar2 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c4cd50(puVar1);
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c5c310();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
  }
  else {
    func_0x000107c4d664(param_2);
    func_0x000107c3fedc(param_2);
    func_0x000107c61170(param_2);
    puVar2 = PTR_PTR_1126b0418;
    func_0x000107c408f0(PTR_PTR_1126b0418);
    func_0x000107c61180();
    puVar3 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + _DAT_1127966c8,0);
  return;
}



/* Entry: 100b61bc0; end: 100b61bd3; -[SCMergedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b61bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127966c8,0);
  return;
}



/* Entry: 100b61bd4; end: 100b61c37;  */

void FUN_100b61bd4(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0x112d5d810;
    FUN_1000285a8(0x112d5d810,&UNK_10d923f50);
    FUN_1000bda74(lVar2,uVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 100b61c38; end: 100b61c3f;  */

void FUN_100b61c38(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100b61c40(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 100b61c40; end: 100b6249b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b61c40(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,long param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,long param_15,undefined8 param_16,long param_17,
                  undefined8 param_18,long param_19)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  char *pcVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  long lStack_128;
  long lStack_120;
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
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    return;
  }
  lVar37 = *(long *)(param_4 + _DAT_1130766a8);
  if ((lVar37 == 0) || (lVar38 = *(long *)(param_4 + _DAT_1130766c8), lVar38 == 0)) {
    func_0x000107c61574();
    return;
  }
  uVar33 = *(undefined8 *)(param_4 + _DAT_1130766d0);
  func_0x000107c615f0(lVar38);
  lVar23 = lVar37;
  func_0x000107c61174();
  func_0x000107c4d524();
  func_0x000107c61180();
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar24 = *(undefined8 *)(param_11 + _DAT_113092298);
  func_0x000107c615f0();
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar32 = param_13;
  func_0x000107c3e060();
  func_0x000107c61180();
  func_0x000107c3e0c0();
  func_0x000107c61180();
  func_0x000107c4cc88();
  func_0x000107c61180();
  uVar34 = *(undefined8 *)(param_15 + _DAT_11303ea38);
  uVar35 = *(undefined8 *)(param_17 + _DAT_112fda3b8);
  func_0x000107c615f0(lVar38);
  func_0x000107c61174();
  func_0x000107c40454();
  func_0x000107c61180();
  uVar36 = *(undefined8 *)(param_19 + _DAT_1130806d0);
  lVar25 = 0;
  FUN_100b624ec();
  lVar26 = lVar25;
  func_0x000107c610f8();
  *(undefined **)(lVar26 + _DAT_112ef6670) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar1 = (undefined8 *)(lVar26 + _DAT_112ef6678);
  FUN_100b6250c(&uStack_118);
  puVar1[1] = uStack_110;
  *puVar1 = uStack_118;
  puVar1[3] = uStack_100;
  puVar1[2] = uStack_108;
  puVar1[9] = uStack_d0;
  puVar1[8] = uStack_d8;
  puVar1[0xb] = uStack_c0;
  puVar1[10] = uStack_c8;
  puVar1[5] = uStack_f0;
  puVar1[4] = uStack_f8;
  puVar1[7] = uStack_e0;
  puVar1[6] = uStack_e8;
  puVar1[0x12] = uStack_88;
  puVar1[0xf] = uStack_a0;
  puVar1[0xe] = uStack_a8;
  puVar1[0x11] = uStack_90;
  puVar1[0x10] = uStack_98;
  puVar1[0xd] = uStack_b0;
  puVar1[0xc] = uStack_b8;
  *(undefined1 *)(lVar26 + _DAT_112ef6680) = 3;
  lVar2 = lVar26 + _DAT_112ef6688;
  func_0x000107c61614(lVar2,0);
  lVar4 = _DAT_112ef6690;
  *(undefined8 *)(lVar26 + _DAT_112ef6690) = 0;
  lVar5 = _DAT_112ef6698;
  pcVar27 = "MemoriesCameraTabButtonController";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar26 + lVar5) = pcVar27;
  lVar5 = _DAT_112ef66a0;
  *(undefined8 *)(lVar26 + _DAT_112ef66a0) = 0;
  lVar6 = _DAT_112ef66a8;
  *(undefined8 *)(lVar26 + _DAT_112ef66a8) = 0;
  lVar7 = _DAT_112ef66b0;
  *(undefined8 *)(lVar26 + _DAT_112ef66b0) = 0;
  lVar8 = _DAT_112ef66b8;
  uVar28 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  FUN_1005f60d4();
  *(undefined8 *)(lVar26 + lVar8) = uVar28;
  lVar8 = _DAT_112ef66c0;
  *(undefined8 *)(lVar26 + _DAT_112ef66c0) = 0;
  lVar9 = _DAT_112ef66c8;
  *(undefined8 *)(lVar26 + _DAT_112ef66c8) = 0;
  lVar10 = _DAT_112ef66d0;
  *(undefined8 *)(lVar26 + _DAT_112ef66d0) = 0;
  lVar11 = _DAT_112ef66d8;
  *(undefined8 *)(lVar26 + _DAT_112ef66d8) = 0;
  lVar12 = _DAT_112ef66e0;
  *(undefined8 *)(lVar26 + _DAT_112ef66e0) = 0;
  lVar13 = _DAT_112ef66e8;
  *(undefined8 *)(lVar26 + _DAT_112ef66e8) = 0;
  lVar14 = _DAT_112ef66f0;
  *(undefined8 *)(lVar26 + _DAT_112ef66f0) = 0;
  lVar15 = _DAT_112ef66f8;
  *(undefined8 *)(lVar26 + _DAT_112ef66f8) = 0;
  lVar16 = _DAT_112ef6700;
  *(undefined8 *)(lVar26 + _DAT_112ef6700) = 0;
  lVar17 = _DAT_112ef6708;
  *(undefined8 *)(lVar26 + _DAT_112ef6708) = 0;
  lVar18 = _DAT_112ef6710;
  *(undefined8 *)(lVar26 + _DAT_112ef6710) = 0;
  lVar19 = _DAT_112ef6718;
  *(undefined8 *)(lVar26 + _DAT_112ef6718) = 0;
  lVar20 = _DAT_112ef6720;
  *(undefined8 *)(lVar26 + _DAT_112ef6720) = 0;
  lVar21 = _DAT_112ef6728;
  *(undefined8 *)(lVar26 + _DAT_112ef6728) = 0;
  lVar22 = _DAT_112ef6730;
  *(undefined8 *)(lVar26 + _DAT_112ef6730) = 0;
  *(undefined1 *)(lVar26 + _DAT_112ef6738) = 0;
  *(undefined1 *)(lVar26 + _DAT_112ef6740) = 0;
  *(undefined1 *)(lVar26 + _DAT_112ef6748) = 1;
  *(undefined1 *)(lVar26 + _DAT_112ef6750) = 0;
  *(undefined8 *)(lVar26 + _DAT_112ef6758) = 0;
  *(undefined8 *)(lVar26 + _DAT_112ef6760) = 0;
  *(undefined1 *)(lVar26 + _DAT_112ef6768) = 0;
  *(undefined1 *)(lVar26 + _DAT_112ef6770) = 0;
  lVar29 = param_5;
  func_0x000107c5de8c();
  func_0x000107c61180();
  lVar30 = lVar29;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar29);
  if (lVar30 != 0) {
    lVar29 = lVar30;
    func_0x000107c5de90();
    func_0x000107c61180();
    func_0x000107c615e8(lVar30);
    lVar30 = lVar29;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar29);
  }
  uVar28 = *(undefined8 *)(lVar26 + lVar4);
  *(long *)(lVar26 + lVar4) = lVar30;
  func_0x000107c61170(uVar28);
  func_0x000107c61604(lVar2,param_5);
  uVar28 = *(undefined8 *)(lVar26 + lVar5);
  *(undefined8 *)(lVar26 + lVar5) = param_13;
  func_0x000107c61174();
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar6);
  *(long *)(lVar26 + lVar6) = lVar38;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar7);
  *(undefined8 *)(lVar26 + lVar7) = uVar33;
  func_0x000107c61174();
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar8);
  *(undefined8 *)(lVar26 + lVar8) = param_14;
  func_0x000107c61174();
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar9);
  *(undefined8 *)(lVar26 + lVar9) = param_10;
  func_0x000107c615f0(param_10);
  func_0x000107c615e8(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar10);
  *(undefined8 *)(lVar26 + lVar10) = uVar24;
  func_0x000107c615f0(uVar24);
  func_0x000107c615e8(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar11);
  *(undefined8 *)(lVar26 + lVar11) = param_9;
  func_0x000107c61174();
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar12);
  *(undefined8 *)(lVar26 + lVar12) = param_12;
  func_0x000107c61174();
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar13);
  *(long *)(lVar26 + lVar13) = lVar37;
  func_0x000107c61174(lVar23);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar14);
  *(undefined8 *)(lVar26 + lVar14) = param_8;
  func_0x000107c615f0(param_8);
  func_0x000107c615e8(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar15);
  *(undefined8 *)(lVar26 + lVar15) = uVar32;
  func_0x000107c61174();
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar16);
  *(undefined8 *)(lVar26 + lVar16) = uVar34;
  func_0x000107c61174();
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar17);
  *(undefined8 *)(lVar26 + lVar17) = param_16;
  func_0x000107c61174();
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar18);
  *(undefined8 *)(lVar26 + lVar18) = uVar35;
  func_0x000107c61174();
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar19);
  *(undefined8 *)(lVar26 + lVar19) = param_18;
  func_0x000107c61174();
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar20);
  *(undefined8 *)(lVar26 + lVar20) = uVar36;
  func_0x000107c61174();
  func_0x000107c61170(uVar28);
  func_0x000107c4ac68();
  func_0x000107c61180();
  uVar28 = *(undefined8 *)(lVar26 + lVar21);
  *(undefined8 *)(lVar26 + lVar21) = param_6;
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(lVar26 + lVar22);
  *(undefined8 *)(lVar26 + lVar22) = *(undefined8 *)(param_7 + _DAT_1130813f0);
  func_0x000107c6157c();
  func_0x000107c61574(uVar28);
  plVar31 = &lStack_128;
  lStack_128 = lVar26;
  lStack_120 = lVar25;
  func_0x000107c61154(plVar31,PTR_s_init_1125d9248);
  lVar37 = _DAT_112ef6680;
  bVar3 = *(byte *)((long)plVar31 + _DAT_112ef6680);
  if (bVar3 - 3 < 2) {
    func_0x000107c61174();
  }
  else {
    func_0x000107c61174();
    if (bVar3 == 0) goto LAB_100b623b4;
  }
  *(undefined1 *)((long)plVar31 + lVar37) = 0;
  FUN_100b62548();
LAB_100b623b4:
  func_0x000107c615e8(uVar24);
  func_0x000107c61170(param_12);
  func_0x000107c61170(lVar23);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(param_18);
  func_0x000107c61170(plVar31);
  func_0x000107c61170(param_13);
  func_0x000107c615e8(lVar38);
  func_0x000107c61170(param_14);
  func_0x000107c615e8(param_10);
  uVar32 = *(undefined8 *)(param_3 + 0x10);
  *(long **)(param_3 + 0x10) = plVar31;
  func_0x000107c61170(uVar32);
  lVar37 = *(long *)(param_3 + 0x10);
  if (lVar37 == 0) {
    func_0x000107c61574(param_3);
    func_0x000107c615e8(lVar38);
  }
  else {
    func_0x000107c61174(lVar37);
    FUN_100b64ea0();
    FUN_100b66358();
    FUN_100b664b0();
    FUN_100b67454();
    func_0x000107c61170(lVar23);
    func_0x000107c615e8(lVar38);
    func_0x000107c61574(param_3);
    lVar23 = lVar37;
  }
  func_0x000107c61170(lVar23);
  return;
}



/* Entry: 100b6249c; end: 100b624e3;  */

void FUN_100b6249c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100b61c40(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 100b624e4; end: 100b624eb; -[SCMemoriesContentFetcherServices contentFetcher] */

undefined8 FUN_100b624e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b624ec; end: 100b6250b;  */

void FUN_100b624ec(void)

{
  func_0x000107c61168(&PTR_PTR_11288d640);
  return;
}



/* Entry: 100b6250c; end: 100b6253f;  */

void FUN_100b6250c(undefined8 *param_1)

{
  *param_1 = 1;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 100b62540; end: 100b62547; -[SCMainCameraPresentationServices viewControllerLifecycleEvents] */

undefined8 FUN_100b62540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100b62548; end: 100b6279f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b62548(void)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
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
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [24];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_112ef6680);
  uVar5 = (ulong)bVar1;
  if (bVar1 == 3) {
    return;
  }
  if (bVar1 == 4) {
    FUN_100b667b0();
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ef6678);
    func_0x000107c61428(puVar3,&uStack_230,0,0);
    uStack_78 = puVar3[0xd];
    uStack_80 = puVar3[0xc];
    uStack_68 = puVar3[0xf];
    uStack_70 = puVar3[0xe];
    uStack_58 = puVar3[0x11];
    uStack_60 = puVar3[0x10];
    uStack_50 = puVar3[0x12];
    uStack_b8 = puVar3[5];
    uStack_c0 = puVar3[4];
    uStack_a8 = puVar3[7];
    uStack_b0 = puVar3[6];
    uStack_98 = puVar3[9];
    uStack_a0 = puVar3[8];
    uStack_88 = puVar3[0xb];
    uStack_90 = puVar3[10];
    uStack_d8 = puVar3[1];
    uStack_e0 = *puVar3;
    uStack_c8 = puVar3[3];
    uStack_d0 = puVar3[2];
    FUN_100b63f80(&uStack_e0,&uStack_180,0x112ef67a8,&UNK_10db24e58);
    FUN_100b63afc(&uStack_e0);
    puVar3 = &uStack_e0;
    goto LAB_100b62784;
  }
  FUN_100b627a0(uVar5);
  lVar4 = _DAT_112ef6670;
  puVar2 = auStack_198;
  func_0x000107c61428(unaff_x20 + _DAT_112ef6670,puVar2,0x20,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar4 + 0x10) == 0) {
LAB_100b62724:
    FUN_100b6250c(&uStack_180);
  }
  else {
    func_0x000107c61434(lVar4);
    FUN_100b6334c();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000107c6142c(lVar4);
      goto LAB_100b62724;
    }
    puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 0x98);
    uStack_228 = puVar3[1];
    uStack_230 = *puVar3;
    uStack_218 = puVar3[3];
    uStack_220 = puVar3[2];
    uStack_1e8 = puVar3[9];
    uStack_1f0 = puVar3[8];
    uStack_1d8 = puVar3[0xb];
    uStack_1e0 = puVar3[10];
    uStack_208 = puVar3[5];
    uStack_210 = puVar3[4];
    uStack_1f8 = puVar3[7];
    uStack_200 = puVar3[6];
    uStack_1c8 = puVar3[0xd];
    uStack_1d0 = puVar3[0xc];
    uStack_1b8 = puVar3[0xf];
    uStack_1c0 = puVar3[0xe];
    uStack_1a8 = puVar3[0x11];
    uStack_1b0 = puVar3[0x10];
    uStack_1a0 = puVar3[0x12];
    uStack_d8 = puVar3[1];
    uStack_e0 = *puVar3;
    uStack_c8 = puVar3[3];
    uStack_d0 = puVar3[2];
    uStack_b8 = puVar3[5];
    uStack_c0 = puVar3[4];
    uStack_a8 = puVar3[7];
    uStack_b0 = puVar3[6];
    uStack_98 = puVar3[9];
    uStack_a0 = puVar3[8];
    uStack_88 = puVar3[0xb];
    uStack_90 = puVar3[10];
    uStack_78 = puVar3[0xd];
    uStack_80 = puVar3[0xc];
    uStack_68 = puVar3[0xf];
    uStack_70 = puVar3[0xe];
    uStack_58 = puVar3[0x11];
    uStack_60 = puVar3[0x10];
    uStack_50 = puVar3[0x12];
    FUN_100b63ad4(&uStack_e0);
    FUN_100b63318(&uStack_230,&uStack_180);
    func_0x000107c6142c(lVar4);
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    uStack_f8 = uStack_58;
    uStack_100 = uStack_60;
    uStack_f0 = uStack_50;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
  }
  uStack_78 = uStack_118;
  uStack_80 = uStack_120;
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_50 = uStack_f0;
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  func_0x000107c614a8(auStack_198);
  FUN_100b63afc(&uStack_e0);
  puVar3 = &uStack_180;
LAB_100b62784:
  func_0x000100b64ce4(puVar3,0x112ef67a8,&UNK_10db24e58);
  return;
}



/* Entry: 100b627a0; end: 100b62c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b627a0(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  undefined8 auStack_238 [19];
  undefined1 auStack_1a0 [24];
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined2 uStack_138;
  undefined6 uStack_136;
  ulong uStack_130;
  ulong uStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  ulong uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  ulong uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  
  lVar1 = _DAT_112ef6670;
  puVar8 = auStack_238;
  func_0x000107c61428(unaff_x20 + _DAT_112ef6670,puVar8,0x20,0);
  lVar10 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar10 + 0x10) != 0) {
    func_0x000107c61434(lVar10);
    uVar11 = param_1;
    FUN_100b6334c();
    if (((ulong)puVar8 & 1) != 0) {
      puVar9 = (ulong *)(*(long *)(lVar10 + 0x38) + uVar11 * 0x98);
      uStack_e8 = puVar9[1];
      uStack_f0 = *puVar9;
      uStack_d8 = puVar9[3];
      uStack_e0 = puVar9[2];
      uStack_a8 = puVar9[9];
      uStack_b0 = puVar9[8];
      uStack_98 = puVar9[0xb];
      uStack_a0 = puVar9[10];
      uStack_c8 = puVar9[5];
      uStack_d0 = puVar9[4];
      uStack_b8 = puVar9[7];
      uStack_c0 = puVar9[6];
      uStack_88 = puVar9[0xd];
      uStack_90 = puVar9[0xc];
      uStack_78 = puVar9[0xf];
      uStack_80 = puVar9[0xe];
      puStack_68 = (undefined *)puVar9[0x11];
      uStack_70 = puVar9[0x10];
      puStack_60 = (undefined *)puVar9[0x12];
      FUN_100b63318(&uStack_f0,&uStack_188);
      func_0x000107c614a8(auStack_238);
      func_0x000107c6142c(lVar10);
      puVar9 = &uStack_f0;
      goto LAB_100b62c3c;
    }
    func_0x000107c6142c(lVar10);
  }
  func_0x000107c614a8(auStack_238);
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 1;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_138 = 2;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_100 = (undefined *)0x0;
  puStack_f8 = (undefined *)0x0;
  uStack_108 = 0;
  if ((param_1 & 0xff) == 0) {
    uStack_120 = 1;
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112ef66f0);
    uVar11 = *(ulong *)(unaff_x20 + _DAT_112ef6720);
    if (uVar11 == 0) {
      func_0x000107c615f0(uVar3);
    }
    else {
      func_0x000107c615f0(uVar3);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar11 == 0) {
        uVar11 = 0;
      }
      else {
        uVar4 = uVar11;
        func_0x000107c41f18();
        func_0x000107c615e8(uVar11);
        uVar11 = uVar4;
      }
    }
    uVar2 = 0;
    FUN_100b62cd8(0);
    func_0x000107c610f8();
    FUN_100b62cf8(uVar3,uVar11,1,uVar2);
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112ef66a8);
    uStack_118 = uVar3;
    if (uVar4 == 0) {
LAB_100b62a9c:
      uVar3 = 0;
    }
    else {
      func_0x000107c5de64();
      func_0x000107c61180();
      if (uVar4 == 0) goto LAB_100b62a9c;
      uVar3 = uVar4;
      func_0x000107c44e78();
      func_0x000107c61180();
      func_0x000107c61170();
    }
    uStack_188 = uVar3;
    FUN_100b62f38();
    uVar3 = uVar11;
    if ((uVar4 & 1) != 0) {
      FUN_1005aec24();
      func_0x000107c61180();
      if (uVar4 == 0) {
        uStack_168 = 0;
        uStack_160 = 0;
        uVar3 = uVar11;
      }
      else {
        uVar5 = uVar4;
        func_0x000107c5faec();
        uVar3 = uVar11;
        func_0x000107c61170();
        uStack_168 = uVar5;
        uStack_160 = uVar11;
      }
    }
    FUN_1005aec24();
    func_0x000107c61180();
    if (uVar4 == 0) {
      uVar11 = 0;
      uVar3 = 0;
    }
    else {
      uVar11 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
    }
    uStack_148 = 0xd00000000000001a;
    uStack_140 = 0x800000010f0f29e0;
    puVar6 = &UNK_1105a13e8;
    uStack_158 = uVar11;
    uStack_150 = uVar3;
    func_0x000107c613fc(&UNK_1105a13e8,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = &UNK_1105a1488;
    func_0x000107c613fc(&UNK_1105a1488,0x19,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    puVar7[0x18] = 0;
    puStack_100 = &UNK_102b551f8;
    puStack_f8 = puVar7;
  }
  else if (((uint)param_1 & 0xff) == 1) {
    uStack_110 = 1;
    uVar11 = *(ulong *)(unaff_x20 + _DAT_112ef66f8);
    uVar2 = 0;
    FUN_100b66e24(0);
    func_0x000107c61174(uVar11);
    func_0x000107c610f8(uVar2);
    FUN_100b66e44(0x4044000000000000,0x4044000000000000,uVar11,uVar2);
    uStack_148 = 0xd000000000000013;
    uStack_140 = 0x800000010f0f29c0;
    uStack_160 = 0xe000000000000000;
    uStack_168 = 0;
    uStack_108 = uVar11;
  }
  else {
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar2 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    FUN_100b67430();
    uVar11 = uVar3;
    FUN_10059c4fc(uVar3,uVar2,0x2f3,0x2f3,0);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    uVar3 = uVar11;
    func_0x000107c44e78();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    uStack_148 = 0xd000000000000013;
    uStack_140 = 0x800000010f0f29c0;
    uStack_188 = uVar3;
  }
  uStack_88 = CONCAT71(uStack_11f,uStack_120);
  uStack_78 = CONCAT71(uStack_10f,uStack_110);
  uStack_90 = uStack_128;
  uStack_80 = uStack_118;
  puStack_68 = puStack_100;
  uStack_70 = uStack_108;
  puStack_60 = puStack_f8;
  uStack_c8 = uStack_160;
  uStack_d0 = uStack_168;
  uStack_b8 = uStack_150;
  uStack_c0 = uStack_158;
  uStack_a0 = CONCAT62(uStack_136,uStack_138);
  uStack_a8 = uStack_140;
  uStack_b0 = uStack_148;
  uStack_98 = uStack_130;
  uStack_d8 = CONCAT71(uStack_16f,uStack_170);
  uStack_e8 = uStack_180;
  uStack_f0 = uStack_188;
  uStack_e0 = uStack_178;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_1a0,0x21,0);
  FUN_100b63318(&uStack_f0,auStack_238);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar2);
  auStack_238[0] = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_100b633a4(&uStack_f0,param_1,uVar2);
  *(undefined8 *)(unaff_x20 + lVar1) = auStack_238[0];
  func_0x000107c614a8(auStack_1a0);
  puVar9 = &uStack_188;
LAB_100b62c3c:
  func_0x000100b63aa8(puVar9);
  return;
}



/* Entry: 100b62c5c; end: 100b62c7f;  */

void FUN_100b62c5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b62c80; end: 100b62cd7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl disableSnapFeedOnSwipeUp] */

uint FUN_100b62c80(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  FUN_100858660(3,0xd000000000000030,0x800000010efcc750,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 100b62cd8; end: 100b62cf7;  */

void FUN_100b62cd8(void)

{
  func_0x000107c61168(&PTR_PTR_11288d808);
  return;
}



/* Entry: 100b62cf8; end: 100b62f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100b62cf8(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar1 = _DAT_112ef6890;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6890) = 0;
  lVar2 = _DAT_112ef6898;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6898) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef68a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef68a8) = 0;
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ef68b0) = param_2;
  *(undefined1 *)(unaff_x20 + lVar2) = param_3;
  puVar4 = PTR_s_initWithFrame__1125e2948;
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x000107c615f0(param_1);
  func_0x000107c61154(uVar5,uVar6,uVar7,uVar8,&stack0xffffffffffffff90,puVar4);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c5af88(puVar4);
  func_0x000107c61180();
  func_0x000107c59e10(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c61170(puVar3);
  uVar5 = *(undefined8 *)(puVar3 + _DAT_112ef68a0);
  *(undefined **)(puVar3 + _DAT_112ef68a0) = puVar4;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c3d6fc(puVar3);
    func_0x000107c61170(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  uVar5 = *(undefined8 *)(puVar3 + _DAT_112ef68a8);
  *(undefined **)(puVar3 + _DAT_112ef68a8) = puVar4;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c3d6fc(puVar3);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_1);
  return puVar3;
}



/* Entry: 100b62f08; end: 100b62f37; -[SIGNavigationBarButtonImageView highlightImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b62f08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795018);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b62f38; end: 100b63317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100b62f38(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  
  lVar1 = 0x112d373d8;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar8 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar6 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar9 = *(ulong *)(unaff_x20 + _DAT_112ef66d0);
  if (uVar9 != 0) {
    func_0x000107c615f0(uVar9);
    uVar2 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f0f2a00);
    uVar3 = uVar9;
    func_0x000107c3ebd4();
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(uVar2);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112ef66d8);
  if (lVar4 != 0) {
    func_0x000107c4fd08();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar5;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c3cf28();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 != 0) {
          func_0x000107c5ee94(puVar8,lVar5);
          func_0x000107c61170(lVar5);
        }
        (**(code **)(lVar10 + 0x38))(puVar8,lVar5 == 0,1,lVar1);
        FUN_1003a4c00(puVar8,lVar7);
        lVar4 = lVar7;
        (**(code **)(lVar10 + 0x30))(lVar7,1,lVar1);
        if ((int)lVar4 != 1) {
          (**(code **)(lVar10 + 0x20))(lVar6,lVar7,lVar1);
          lVar7 = *(long *)(unaff_x20 + _DAT_112ef66c8);
          if (lVar7 == 0) {
            (**(code **)(lVar10 + 8))(lVar6,lVar1);
            return 0;
          }
          lVar4 = lVar7;
          func_0x000107c615f0(lVar7);
          func_0x000107c5ee70();
          lVar5 = lVar4;
          FUN_10059b874();
          func_0x000107c61170(lVar4);
          func_0x000107c615e8(lVar7);
          (**(code **)(lVar10 + 8))(lVar6,lVar1);
          return lVar5;
        }
        goto LAB_100b63104;
      }
    }
  }
  (**(code **)(lVar10 + 0x38))(lVar7,1,1,lVar1);
LAB_100b63104:
  func_0x000100b64ce4(lVar7,0x112d373d8,&UNK_10d9014c0);
  return 0;
}



/* Entry: 100b63318; end: 100b6334b;  */

undefined8 FUN_100b63318(undefined8 param_1,undefined8 param_2)

{
  func_0x000100b63200(param_2,param_1,&UNK_1105a1300);
  return param_2;
}



/* Entry: 100b6334c; end: 100b633a3;  */

void FUN_100b6334c(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = (ulong)param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(byte *)(*(long *)(unaff_x20 + 0x30) + uVar1) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 100b633a4; end: 100b63507;  */

ulong FUN_100b633a4(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar2 = param_2;
  FUN_100b6334c();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar6 = (ulong)~(uint)uVar2 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b63468);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_100b63570(lVar5);
    uVar3 = param_2;
    FUN_100b6334c();
    if (((uint)uVar2 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1105a13c8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b63434);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000102b54880();
    lVar5 = *unaff_x20;
    goto joined_r0x000100b6347c;
  }
  lVar5 = *unaff_x20;
joined_r0x000100b6347c:
  if ((uVar2 & 1) != 0) {
    uVar3 = *(long *)(lVar5 + 0x38) + uVar3 * 0x98;
    FUN_100b66cd0(uVar3,param_1,&UNK_1105a1300);
    return uVar3;
  }
  lVar4 = lVar5 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar3 & 0x3f);
  *(char *)(*(long *)(lVar5 + 0x30) + uVar3) = (char)param_2;
  puVar7 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar3 * 0x98);
  uVar9 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  puVar7[1] = param_1[1];
  *puVar7 = uVar9;
  puVar7[3] = uVar11;
  puVar7[2] = uVar10;
  uVar10 = param_1[5];
  uVar9 = param_1[4];
  uVar12 = param_1[7];
  uVar11 = param_1[6];
  uVar13 = param_1[8];
  uVar15 = param_1[0xb];
  uVar14 = param_1[10];
  puVar7[9] = param_1[9];
  puVar7[8] = uVar13;
  puVar7[0xb] = uVar15;
  puVar7[10] = uVar14;
  puVar7[5] = uVar10;
  puVar7[4] = uVar9;
  puVar7[7] = uVar12;
  puVar7[6] = uVar11;
  uVar10 = param_1[0xd];
  uVar9 = param_1[0xc];
  uVar12 = param_1[0xf];
  uVar11 = param_1[0xe];
  uVar14 = param_1[0x11];
  uVar13 = param_1[0x10];
  puVar7[0x12] = param_1[0x12];
  puVar7[0xf] = uVar12;
  puVar7[0xe] = uVar11;
  puVar7[0x11] = uVar14;
  puVar7[0x10] = uVar13;
  puVar7[0xd] = uVar10;
  puVar7[0xc] = uVar9;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b63508);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return uVar3;
}



/* Entry: 100b63508; end: 100b6356f;  */

void FUN_100b63508(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 100b63570; end: 100b639cf;  */

void FUN_100b63570(long param_1,ulong param_2)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined8 uVar9;
  bool bVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [152];
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar20 = *unaff_x20;
  lVar2 = *(long *)(lVar20 + 0x18);
  if (*(long *)(lVar20 + 0x18) <= param_1) {
    lVar2 = param_1;
  }
  uVar12 = 0x112ef67c0;
  FUN_1000285a8(0x112ef67c0,&UNK_10db24e78);
  lVar13 = lVar20;
  func_0x000107c60490(lVar20,lVar2,param_2,uVar12);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_100b6399c:
    func_0x000107c61574(lVar20);
LAB_100b639a4:
    *unaff_x20 = lVar13;
    return;
  }
  puVar22 = (ulong *)(lVar20 + 0x40);
  uVar18 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar21 = 0xffffffffffffffff;
  if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
    uVar21 = ~(-1L << (uVar18 & 0x3f));
  }
  uVar21 = uVar21 & *puVar22;
  lVar2 = lVar13 + 0x40;
  lVar15 = 0;
  do {
    if (uVar21 == 0) {
      do {
        lVar24 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100b639cc);
          (*pcVar11)();
        }
        if ((long)(uVar18 + 0x3f >> 6) <= lVar24) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar20);
            goto LAB_100b639a4;
          }
          uVar21 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
          if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
            *puVar22 = -1L << (uVar21 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar22,uVar21 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar20 + 0x10) = 0;
          goto LAB_100b6399c;
        }
        uVar21 = puVar22[lVar24];
        lVar15 = lVar15 + 1;
      } while (uVar21 == 0);
      uVar14 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar21 = uVar21 - 1 & uVar21;
    }
    else {
      uVar14 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar21 = uVar21 - 1 & uVar21;
      lVar24 = lVar15;
    }
    uVar14 = LZCOUNT(uVar14) | lVar24 << 6;
    if ((param_2 & 1) == 0) {
      bVar8 = *(byte *)(*(long *)(lVar20 + 0x30) + uVar14);
      puVar16 = (undefined8 *)(*(long *)(lVar20 + 0x38) + uVar14 * 0x98);
      uVar12 = *puVar16;
      uStack_270 = puVar16[1];
      uStack_268 = puVar16[2];
      uStack_f8 = puVar16[3];
      uStack_200 = *(undefined8 *)*(undefined1 (*) [16])(puVar16 + 8);
      uStack_c8 = puVar16[9];
      auVar26 = *(undefined1 (*) [16])(puVar16 + 8);
      uVar9 = puVar16[10];
      uStack_1e8 = puVar16[0xb];
      pauVar1 = (undefined1 (*) [16])(puVar16 + 4);
      uStack_e8 = puVar16[5];
      uStack_210 = *(undefined8 *)*pauVar1;
      uStack_d8 = puVar16[7];
      uStack_1e0 = *(undefined8 *)*(undefined1 (*) [16])(puVar16 + 6);
      auVar25 = *(undefined1 (*) [16])(puVar16 + 6);
      uStack_1d0 = puVar16[0xe];
      uStack_98 = puVar16[0xf];
      uStack_1c0 = puVar16[0x10];
      uStack_1b0 = puVar16[0x11];
      uStack_1b8 = puVar16[0x12];
      uStack_a8 = puVar16[0xd];
      uStack_220 = puVar16[0xc];
      uVar7 = (undefined1)uStack_98;
      uVar6 = (undefined1)uStack_a8;
      uStack_c0._1_1_ = (undefined1)((ulong)uVar9 >> 8);
      uVar5 = uStack_c0._1_1_;
      uStack_c0._0_1_ = (undefined1)uVar9;
      uVar4 = (undefined1)uStack_c0;
      auVar26 = NEON_ext(auVar26,auVar26,8,1);
      auVar25 = NEON_ext(auVar25,auVar25,8,1);
      uStack_260 = auVar26._0_8_;
      uStack_250 = auVar25._0_8_;
      auVar25 = NEON_ext(*pauVar1,*pauVar1,8,1);
      uStack_240 = auVar25._0_8_;
      uVar3 = (undefined1)uStack_f8;
      uStack_110 = uVar12;
      uStack_108 = uStack_270;
      uStack_100 = uStack_268;
      uStack_f0 = uStack_210;
      uStack_e0 = uStack_1e0;
      uStack_d0 = uStack_200;
      uStack_c0 = uVar9;
      uStack_b8 = uStack_1e8;
      uStack_b0 = uStack_220;
      uStack_a0 = uStack_1d0;
      uStack_90 = uStack_1c0;
      uStack_88 = uStack_1b0;
      uStack_80 = uStack_1b8;
      FUN_100b63318(&uStack_110,auStack_1a8);
    }
    else {
      bVar8 = *(byte *)(*(long *)(lVar20 + 0x30) + uVar14);
      puVar16 = (undefined8 *)(*(long *)(lVar20 + 0x38) + uVar14 * 0x98);
      uVar12 = *puVar16;
      uStack_270 = puVar16[1];
      uStack_268 = puVar16[2];
      uVar3 = *(undefined1 *)(puVar16 + 3);
      auVar25 = *(undefined1 (*) [16])(puVar16 + 6);
      auVar26 = *(undefined1 (*) [16])(puVar16 + 8);
      pauVar1 = (undefined1 (*) [16])(puVar16 + 4);
      uStack_210 = *(undefined8 *)*pauVar1;
      uStack_200 = auVar26._0_8_;
      auVar26 = NEON_ext(auVar26,auVar26,8,1);
      uStack_1e0 = auVar25._0_8_;
      auVar25 = NEON_ext(auVar25,auVar25,8,1);
      uStack_260 = auVar26._0_8_;
      uStack_250 = auVar25._0_8_;
      auVar25 = NEON_ext(*pauVar1,*pauVar1,8,1);
      uStack_240 = auVar25._0_8_;
      uVar4 = *(undefined1 *)(puVar16 + 10);
      uVar5 = *(undefined1 *)((long)puVar16 + 0x51);
      uStack_1e8 = puVar16[0xb];
      uStack_220 = puVar16[0xc];
      uVar6 = *(undefined1 *)(puVar16 + 0xd);
      uStack_1d0 = puVar16[0xe];
      uVar7 = *(undefined1 *)(puVar16 + 0xf);
      uStack_1c0 = puVar16[0x10];
      uStack_1b0 = puVar16[0x11];
      uStack_1b8 = puVar16[0x12];
    }
    uVar23 = (ulong)bVar8;
    func_0x000107c6068c(&uStack_110,*(undefined8 *)(lVar13 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar19 = -1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar23 = uVar23 & (uVar19 ^ 0xffffffffffffffff);
    uVar17 = uVar23 >> 6;
    uVar14 = -1L << (uVar23 & 0x3f) & (*(ulong *)(lVar2 + uVar17 * 8) ^ 0xffffffffffffffff);
    if (uVar14 == 0) {
      bVar10 = false;
      uVar14 = 0x3f - uVar19 >> 6;
      do {
        uVar23 = uVar17 + 1;
        if ((uVar23 == uVar14) && (bVar10)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100b639d0);
          (*pcVar11)();
        }
        uVar17 = 0;
        if (uVar23 != uVar14) {
          uVar17 = uVar23;
        }
        bVar10 = (bool)(uVar23 == uVar14 | bVar10);
        uVar23 = *(ulong *)(lVar2 + uVar17 * 8);
      } while (uVar23 == 0xffffffffffffffff);
      uVar23 = ~uVar23;
      uVar14 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar17 << 6;
    }
    else {
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar23 & 0x7fffffffffffffc0;
    }
    uVar17 = uVar14 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar2 + uVar17) = 1L << (uVar14 & 0x3f) | *(ulong *)(lVar2 + uVar17);
    *(byte *)(*(long *)(lVar13 + 0x30) + uVar14) = bVar8;
    puVar16 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar14 * 0x98);
    *puVar16 = uVar12;
    puVar16[1] = uStack_270;
    puVar16[2] = uStack_268;
    *(undefined1 *)(puVar16 + 3) = uVar3;
    puVar16[7] = uStack_250;
    puVar16[6] = uStack_1e0;
    puVar16[9] = uStack_260;
    puVar16[8] = uStack_200;
    puVar16[5] = uStack_240;
    puVar16[4] = uStack_210;
    *(undefined1 *)(puVar16 + 10) = uVar4;
    *(undefined1 *)((long)puVar16 + 0x51) = uVar5;
    puVar16[0xb] = uStack_1e8;
    puVar16[0xc] = uStack_220;
    *(undefined1 *)(puVar16 + 0xd) = uVar6;
    puVar16[0xe] = uStack_1d0;
    *(undefined1 *)(puVar16 + 0xf) = uVar7;
    puVar16[0x10] = uStack_1c0;
    puVar16[0x11] = uStack_1b0;
    puVar16[0x12] = uStack_1b8;
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
    lVar15 = lVar24;
  } while( true );
}



/* Entry: 100b639d0; end: 100b639f3;  */

undefined1  [16] FUN_100b639d0(void)

{
  return ZEXT816(0x1105a13c8);
}



/* Entry: 100b639f4; end: 100b63a33;  */

void FUN_100b639f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef67a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db24e30;
  func_0x000107c61520(&UNK_10db24e30,&UNK_1105a13c8);
  puRam0000000112ef67a0 = puVar1;
  return;
}



/* Entry: 100b63a34; end: 100b63ad3;  */

void FUN_100b63a34(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  func_0x000107c61170(param_1[1]);
  func_0x000107c6142c(param_1[5]);
  func_0x000107c6142c(param_1[7]);
  func_0x000107c6142c(param_1[9]);
  func_0x000107c61170(param_1[0xb]);
  func_0x000107c61170(param_1[0xe]);
  func_0x000107c61170(param_1[0x10]);
  if (param_1[0x11] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1[0x12]);
    return;
  }
  return;
}



/* Entry: 100b63ad4; end: 100b63afb;  */

void FUN_100b63ad4(void)

{
  return;
}



/* Entry: 100b63afc; end: 100b63f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b63afc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  int iVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  long lStack_78;
  
  uStack_b8 = param_1[0xd];
  lStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  lStack_b0 = param_1[0xe];
  lStack_98 = param_1[0x11];
  lStack_a0 = param_1[0x10];
  uStack_90 = param_1[0x12];
  lStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  lStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  lStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  puStack_c8 = (undefined *)param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  lStack_110 = param_1[2];
  iVar12 = (int)&uStack_120;
  FUN_100b63ad4();
  uVar10 = uStack_90;
  lVar9 = lStack_98;
  lVar8 = lStack_c0;
  puVar7 = puStack_c8;
  uVar6 = uStack_d0;
  lVar5 = lStack_d8;
  uVar19 = uStack_e0;
  lVar4 = lStack_e8;
  uVar18 = uStack_f0;
  lVar1 = lStack_f8;
  uVar14 = uStack_100;
  lVar15 = lStack_110;
  if (iVar12 == 1) {
    return;
  }
  lVar16 = *(long *)(unaff_x20 + _DAT_112ef66a8);
  if (lVar16 == 0) {
    return;
  }
  cVar3 = (char)uStack_108;
  lVar2 = lStack_b0;
  if ((uStack_b8 & 1) == 0) {
    if ((uStack_d0 & 0x100) == 0) {
      lVar2 = lStack_a0;
      if ((uStack_a8 & 1) != 0) goto joined_r0x000100b63cd0;
      FUN_100b63f80(param_1,&puStack_1b8,0x112ef67a8,&UNK_10db24e58);
      func_0x000107c615f0(lVar16);
      func_0x000107c53d8c();
      if (puVar7 == (undefined *)0x0) goto LAB_100b63d28;
      goto LAB_100b63d04;
    }
    puStack_80 = puStack_c8;
    lStack_78 = lStack_c0;
    if (puStack_c8 == (undefined *)0x0) {
      FUN_100b63f80(param_1,&puStack_1b8,0x112ef67a8,&UNK_10db24e58);
      func_0x000107c615f0(lVar16);
      goto LAB_100b63d28;
    }
    puVar13 = puStack_c8;
    func_0x000107c614f0(puStack_c8);
    FUN_100b63f80(param_1,&puStack_1b8,0x112ef67a8,&UNK_10db24e58);
    func_0x000107c615f0(lVar16);
    FUN_100b63f80(&puStack_80,&puStack_1b8,0x112ef67e8,&UNK_10db24e90);
    func_0x000107c53d8c(lVar16);
    lVar15 = _DAT_112ef6740;
    puStack_1b8 = puVar7;
    (**(code **)(lVar8 + 0x10))((*(byte *)(unaff_x20 + _DAT_112ef6740) ^ 0xff) & 1,puVar13,lVar8);
    *(undefined1 *)(unaff_x20 + lVar15) = 1;
    func_0x000100b64ce4(&puStack_80,0x112ef67e8,&UNK_10db24e90);
  }
  else {
joined_r0x000100b63cd0:
    if (lVar2 == 0) {
      FUN_100b63f80(param_1,&puStack_1b8,0x112ef67a8,&UNK_10db24e58);
      func_0x000107c615f0(lVar16);
    }
    else {
      FUN_100b63f80(param_1,&puStack_1b8,0x112ef67a8,&UNK_10db24e58);
      func_0x000107c615f0(lVar16);
      func_0x000107c53d8c();
    }
    if (puVar7 != (undefined *)0x0) {
LAB_100b63d04:
      func_0x000107c614f0(puVar7);
      puStack_1b8 = puVar7;
      (**(code **)(lVar8 + 0x18))();
    }
LAB_100b63d28:
    uVar17 = 0;
    if (((uVar6 & 0x100) == 0) && (lVar1 != 0)) {
      func_0x000107c61434(lVar1);
      func_0x000107c5fadc(uVar14,lVar1);
      func_0x000107c6142c(lVar1);
      uVar17 = uVar14;
    }
    func_0x000107c59e18(lVar16);
    func_0x000107c61170(uVar17);
    if (lVar4 == 0) {
      uVar18 = 0;
    }
    else {
      func_0x000107c61434(lVar4);
      func_0x000107c5fadc(uVar18,lVar4);
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c520fc(lVar16);
    func_0x000107c61170(uVar18);
    if (lVar5 == 0) {
      uVar19 = 0;
    }
    else {
      func_0x000107c61434(lVar5);
      func_0x000107c5fadc(uVar19,lVar5);
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c520f4(lVar16);
    func_0x000107c61170(uVar19);
    if ((uVar6 & 0x100) == 0) {
      lVar1 = 0;
      if (cVar3 != '\x01') {
        lVar1 = lVar15;
      }
      if (lVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100b63f80);
        (*pcVar11)();
      }
    }
    func_0x000107c52b98(lVar16);
    func_0x000107c591cc(lVar16);
    lVar15 = *(long *)(unaff_x20 + _DAT_112ef66b0);
    if (lVar15 != 0) {
      if (lVar9 == 0) {
        func_0x000107c61174(lVar15);
        ppuVar20 = (undefined **)0x0;
      }
      else {
        lStack_198 = lVar9;
        uStack_190 = uVar10;
        puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1b0 = 0x42000000;
        pcStack_1a8 = FUN_1000f6b44;
        puStack_1a0 = &UNK_1105a14a0;
        ppuVar20 = &puStack_1b8;
        func_0x000107c60bc4(ppuVar20);
        uVar14 = uStack_190;
        func_0x000107c61174(lVar15);
        func_0x000100b64c10(lVar9,uVar10);
        func_0x000107c61574(uVar14);
      }
      func_0x000107c59b18(lVar15);
      func_0x000107c60bd0(ppuVar20);
      func_0x000107c615e8(lVar16);
      func_0x000107c61170(lVar15);
      goto LAB_100b63edc;
    }
  }
  func_0x000107c615e8(lVar16);
LAB_100b63edc:
  func_0x000100b64ce4(param_1,0x112ef67a8,&UNK_10db24e58);
  return;
}



/* Entry: 100b63f80; end: 100b63fc7;  */

undefined8 FUN_100b63f80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100b63fc8; end: 100b6409b;  */

int FUN_100b63fc8(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x13] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100b6409c; end: 100b6412f; -[SIGNavigationBarButtonItem setCustomView:] */

void FUN_100b6409c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100b64130;
  puStack_40 = &UNK_110d62ca0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100b64130; end: 100b6417f;  */

void FUN_100b64130(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_navigationBarButtonItem_didChang_112613300);
  if ((uVar1 & 1) != 0) {
    func_0x000107c4d4e0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b64180; end: 100b64183; -[SIGNavigationBarButton navigationBarButtonItem:didChangeCustomView:] */

void FUN_100b64180(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCustomViewIfNeeded_112593400);
  return;
}



/* Entry: 100b64184; end: 100b6424b; -[SIGNavigationBarButton _updateCustomViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b64184(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = (long)_DAT_112794ff4;
  lVar6 = *(long *)(param_1 + lVar4);
  lVar5 = (long)_DAT_112794fc4;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x000107c41174();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar6 != lVar1) {
    if (*(long *)(param_1 + lVar4) != 0) {
      func_0x000107c4ff34();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      func_0x000107c61170(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c41174();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c3d89c(param_1);
    func_0x000107c5a050(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdc48d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateAllConstraints_11254ebd0);
    return;
  }
  return;
}



/* Entry: 100b6424c; end: 100b64253; -[SIGNavigationBarButtonItem customView] */

undefined8 FUN_100b6424c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100b64254; end: 100b64257; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView setThemeColor:] */

void FUN_100b64254(void)

{
  return;
}



/* Entry: 100b64258; end: 100b6425b; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView setHighlightThemeColor:] */

void FUN_100b64258(void)

{
  return;
}



/* Entry: 100b6425c; end: 100b6425f; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView setSelected:overrideTintColor:] */

void FUN_100b6425c(void)

{
  return;
}



/* Entry: 100b64260; end: 100b64263; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView setEnableDarkModeAlways:] */

void FUN_100b64260(void)

{
  return;
}



/* Entry: 100b64264; end: 100b6426b; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView shouldHideOriginalButton] */

undefined8 FUN_100b64264(void)

{
  return 0;
}



/* Entry: 100b6426c; end: 100b642bf; -[SIGNavigationBarButtonItem setBadgeCount:] */

void FUN_100b6426c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100b642c0;
  puStack_20 = &UNK_110d62ca0;
  lStack_18 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 100b642c0; end: 100b6430f;  */

void FUN_100b642c0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_navigationBarButtonItem_didChang_1126132f8);
  if ((uVar1 & 1) != 0) {
    func_0x000107c4d4dc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b64310; end: 100b64357; -[SIGNavigationBarButton navigationBarButtonItem:didChangeBadgeCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b64310(long param_1)

{
  func_0x000107c3c628();
  func_0x000107c3e620(*(undefined8 *)(param_1 + _DAT_112794fc4));
  func_0x000107c52b98(*(undefined8 *)(param_1 + _DAT_112794ff8));
                    /* WARNING: Could not recover jumptable at 0x00010bed3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBadgeViewVisibilityIfNeed_112592918);
  return;
}



/* Entry: 100b64358; end: 100b644a3; -[SIGNavigationBarButton _setupBadgeViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b64358(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112794ff8;
  if (*(long *)(param_1 + lVar6) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126e1858;
  func_0x000107c610f4();
  lVar5 = (long)_DAT_112794fc4;
  func_0x000107c3e620(*(undefined8 *)(param_1 + lVar5));
  func_0x000107c5ae40(*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x000107c3ae7c(param_1);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c3de9c(uVar3);
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c3ae90(param_1);
  func_0x000107c61180();
  func_0x000107c45900(*(undefined8 *)(param_1 + _DAT_112794fdc));
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c5a050(*(undefined8 *)(param_1 + lVar6));
  func_0x000107c5a378(*(undefined8 *)(param_1 + lVar6));
  func_0x000107c3d89c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc4950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateBadgeViewConstraintsIfN_11254ebf0);
  return;
}



/* Entry: 100b644a4; end: 100b644ab; -[SIGNavigationBarButtonItem showBadgeCount] */

undefined1 FUN_100b644a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 100b644ac; end: 100b645df; -[SIGNavigationBarButtonBadgeView initWithBadgeCount:showBadgeCount:tintColor:image:badgeTextColor:scalingFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100b644ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_11270b620;
  uStack_70 = param_2;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794fa0) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112794fa4) = param_5;
    lVar3 = (long)_DAT_112794fa8;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112794fac;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112794fb0;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794fb4) = param_1;
    func_0x000107c3c624(puVar1);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 100b645e0; end: 100b6460f; -[SIGNavigationBarButtonBadgeView _setupBadgeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b645e0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112794fa8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bead130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupImageBadge_112588df0);
    return;
  }
  if (*(char *)(param_1 + _DAT_112794fa4) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010beabd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupCountBadgeWithTintColor_1125888f8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beaafd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupBlankBadgeWithTintColor_112588598);
  return;
}



/* Entry: 100b64610; end: 100b649d7; -[SIGNavigationBarButtonBadgeView _setupBlankBadgeWithTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100b64610(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f4();
  uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
  func_0x000107c469a4(uVar15,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar14 = (long)_DAT_112794fbc;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  func_0x000107c61170(uVar13);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c3ae78(param_1);
  uVar13 = uVar15;
  func_0x000107c3ae78(param_1);
  uVar16 = 0;
  func_0x000107c3e8a4(0,0,uVar15,uVar13);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c4aba4();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(param_1 + _DAT_112794fb8);
  *(undefined **)(param_1 + _DAT_112794fb8) = puVar3;
  func_0x000107c61170(uVar13);
  func_0x000107c61174(puVar3);
  func_0x000107c3ae78(param_1);
  uVar13 = uVar16;
  func_0x000107c3ae78(param_1);
  dVar17 = 2.0;
  func_0x000107c54b80(0x4000000000000000,0x4000000000000000,uVar16,uVar13,puVar3);
  puVar1 = puVar2;
  func_0x000107c61178(puVar2);
  func_0x000107c3ab30();
  func_0x000107c57274(puVar3,param_2,puVar1);
  uVar13 = *(undefined8 *)(param_1 + _DAT_112794fac);
  func_0x000107c3ab24(uVar13);
  func_0x000107c549b4(puVar3,param_2,uVar13);
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  func_0x000107c4aba4(uVar13);
  func_0x000107c61180();
  func_0x000107c3d894();
  func_0x000107c61170(uVar13);
  func_0x000107c3ae74(param_1);
  dVar17 = dVar17 * 0.5;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  func_0x000107c4aba4(uVar13);
  func_0x000107c61180();
  func_0x000107c539d4(dVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c5a050(*(undefined8 *)(param_1 + lVar14),param_2,0);
  func_0x000107c5a378(*(undefined8 *)(param_1 + lVar14),param_2,0);
  func_0x000107c3d89c(param_1,param_2,*(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar13 = uVar4;
  func_0x000107c40280(uVar4,param_2,lVar5);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  uStack_98 = uVar13;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar7 = param_1;
  func_0x000107c5ce8c(param_1);
  func_0x000107c61180();
  uVar15 = uVar6;
  func_0x000107c40280(uVar6,param_2,lVar7);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  uStack_90 = uVar15;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar9 = param_1;
  func_0x000107c5cbe4(param_1);
  func_0x000107c61180();
  uVar16 = uVar8;
  func_0x000107c40280(uVar8,param_2,lVar9);
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  uStack_88 = uVar16;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c3ec1c(param_1);
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c40280(uVar10,param_2,param_1);
  func_0x000107c61180();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar11;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
  func_0x000107c61180();
  func_0x000107c3d048(puVar1,param_2,puVar12);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return dVar17;
  }
  func_0x000107c60e78();
  return *(double *)(puVar2 + _DAT_112794fb4) * 16.0;
}



/* Entry: 100b649d8; end: 100b649ef; -[SIGNavigationBarButtonBadgeView _badgeBlankViewDotSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100b649d8(long param_1)

{
  return *(double *)(param_1 + _DAT_112794fb4) * 16.0;
}



/* Entry: 100b649f0; end: 100b64a07; -[SIGNavigationBarButtonBadgeView _badgeBlankFullViewSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100b649f0(long param_1)

{
  return *(double *)(param_1 + _DAT_112794fb4) * 20.0;
}



/* Entry: 100b64a08; end: 100b64a17; -[SIGNavigationBarButtonImageView badgeViewOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b64a08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795030);
}



/* Entry: 100b64a18; end: 100b64a2f; -[SIGNavigationBarButton _badgeBlankFullViewSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100b64a18(long param_1)

{
  return *(double *)(param_1 + _DAT_112794fdc) * 20.0;
}



/* Entry: 100b64a30; end: 100b64a3f; -[SIGNavigationBarButtonImageView badgeCountYOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b64a30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279502c);
}



/* Entry: 100b64a40; end: 100b64a4f; -[SIGNavigationBarButtonImageView badgeCountXOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b64a40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795028);
}



/* Entry: 100b64a50; end: 100b64adb; -[SIGNavigationBarButtonBadgeView setBadgeCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b64a50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_112794fa0) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112794fa0) = param_3;
  func_0x000107c3ae8c();
  lVar2 = (long)_DAT_112794fc0;
  func_0x000107c59a2c(*(undefined8 *)(param_1 + lVar2));
  lVar1 = param_1;
  func_0x000107c3ae94(param_1);
  func_0x000107c61180();
  func_0x000107c59c6c(*(undefined8 *)(param_1 + lVar2));
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 100b64adc; end: 100b64b93; -[SIGNavigationBarButton _updateBadgeViewVisibilityIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b64adc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112794fc4;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x000107c3e620();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c44df8(uVar2);
  }
  lVar1 = (long)_DAT_112794ff8;
  func_0x000107c550d8(*(undefined8 *)(param_1 + lVar1),param_2,uVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112794fe4);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c49eac(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c5ae40(uVar3);
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x000107c3de9c(lVar1);
  func_0x000107c61180();
  func_0x000107c52ba8(uVar4,param_2,(uint)uVar2 ^ 1,uVar3,lVar1 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100b64b94; end: 100b64c1f; -[SIGNavigationBarButtonImageView setBadgeIsVisible:badgeCountIsVisible:badgeIsImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b64b94(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  
  iVar1 = _DAT_11279504c;
  if ((*(byte *)(param_1 + _DAT_112795044) == param_3) &&
     ((param_3 == 0 ||
      ((*(byte *)(param_1 + _DAT_112795048) == param_4 &&
       (*(byte *)(param_1 + _DAT_11279504c) == param_5)))))) {
    return;
  }
  lVar2 = (long)_DAT_112795048;
  *(char *)(param_1 + _DAT_112795044) = (char)param_3;
  *(char *)(param_1 + lVar2) = (char)param_4;
  *(char *)(param_1 + iVar1) = (char)param_5;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 100b64c20; end: 100b64d23; -[SIGFooterItemConfig setSwipeUpAction:] */

void FUN_100b64c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x000107c61184();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  func_0x000107c61170(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x100b64c98;
  puStack_30 = &UNK_110d62990;
  lStack_28 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_48);
  return;
}



/* Entry: 100b64d24; end: 100b64e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100b64d24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_48;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112ef6690);
  if (lVar5 == 0) {
    FUN_1000285a8(0x112d53860,&UNK_10d92b600);
    FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar5 = 0;
    func_0x000107c6010c();
    plVar4 = &lStack_48;
    lStack_48 = lVar5;
    func_0x000100854cb0(plVar4);
  }
  else {
    FUN_1000285a8(0x112d3b3f8,&UNK_10d904aa0);
    func_0x000107c61174(lVar5);
    lVar3 = lVar5;
    func_0x0001000b637c();
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef6698);
    uVar1 = uVar6;
    func_0x000107c615f0(uVar6);
    FUN_100471e0c();
    func_0x000107c61574(lVar3);
    func_0x000107c615e8(uVar6);
    uVar6 = 0;
    FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar2 = &UNK_100c6f36c;
    FUN_1000d5158(&UNK_100c6f36c,0,uVar6);
    func_0x000107c61574(uVar1);
    lVar3 = 0;
    func_0x000107c6010c();
    plVar4 = &lStack_48;
    lStack_48 = lVar3;
    FUN_1006c71a4(plVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(puVar2);
  }
  func_0x000107c61170(lVar5);
  return plVar4;
}



/* Entry: 100b64ea0; end: 100b6507b;  */

/* WARNING: Possible PIC construction at 0x000100b64fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b64fac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b64ea0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  FUN_100b64d24();
  uVar5 = param_1;
  FUN_100b650e0();
  uVar1 = uVar5;
  FUN_100b65324();
  uVar2 = uVar1;
  FUN_100b65470();
  uVar3 = uVar2;
  FUN_100b65618();
  lVar4 = 0x112d53860;
  FUN_1000285a8(0x112d53860,&UNK_10d92b600);
  FUN_100b65830();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 0xb;
  *(undefined8 *)(lVar4 + 0x10) = 5;
  *(undefined8 *)(lVar4 + 0x20) = param_1;
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  *(undefined8 *)(lVar4 + 0x30) = uVar1;
  *(undefined8 *)(lVar4 + 0x38) = uVar2;
  *(undefined8 *)(lVar4 + 0x40) = uVar3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  FUN_100b658a4(lVar4);
  func_0x000107c61574(lVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef6698);
  func_0x000107c615f0(uVar5);
  FUN_100471e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
  return;
}



/* Entry: 100b6507c; end: 100b6509f;  */

void FUN_100b6507c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b650a0; end: 100b650df;  */

void FUN_100b650a0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100b650e0; end: 100b65323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100b650e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_48;
  
  lVar1 = unaff_x20 + _DAT_112ef6688;
  func_0x000107c61618();
  if (lVar1 == 0) {
    FUN_1000285a8(0x112d53860,&UNK_10d92b600);
    FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar4 = 0;
    func_0x000107c6010c();
    plVar5 = &lStack_48;
    lStack_48 = lVar4;
    func_0x000100854cb0(plVar5);
  }
  else {
    lVar4 = lVar1;
    func_0x000107c4c15c();
    func_0x000107c61180();
    lVar3 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c4df6c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      lVar3 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c4a210(lVar3);
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        uVar2 = 0x112d53860;
        FUN_1000285a8(0x112d53860,&UNK_10d92b600);
        lVar3 = lVar4;
        func_0x0001000b637c(lVar4,uVar2);
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef6698);
        uVar2 = uVar6;
        func_0x000107c615f0(uVar6);
        FUN_100471e0c();
        func_0x000107c61574(lVar3);
        func_0x000107c615e8(uVar6);
        FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        lVar3 = 0;
        func_0x000107c6010c();
        plVar5 = &lStack_48;
        lStack_48 = lVar3;
        FUN_1006c71a4(plVar5);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(uVar2);
        func_0x000107c61170(lVar1);
        goto LAB_100b65304;
      }
    }
    FUN_1000285a8(0x112d53860,&UNK_10d92b600);
    FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar4 = 0;
    func_0x000107c6010c();
    plVar5 = &lStack_48;
    lStack_48 = lVar4;
    func_0x000100854cb0(plVar5);
    func_0x000107c61170(lVar4);
    lVar4 = lVar1;
  }
LAB_100b65304:
  func_0x000107c61170(lVar4);
  return plVar5;
}



/* Entry: 100b65324; end: 100b6546f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100b65324(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_38;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112ef66a0);
  if (lVar4 == 0) {
    FUN_1000285a8(0x112d53860,&UNK_10d92b600);
    FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar4 = 0;
    func_0x000107c6010c();
    plVar3 = &lStack_38;
    lStack_38 = lVar4;
    func_0x000100854cb0(plVar3);
  }
  else {
    FUN_1000285a8(0x112d53860,&UNK_10d92b600);
    func_0x000107c61174(lVar4);
    lVar2 = lVar4;
    func_0x0001000b637c();
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef6698);
    uVar1 = uVar5;
    func_0x000107c615f0(uVar5);
    FUN_100471e0c();
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(uVar5);
    FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar2 = 0;
    func_0x000107c6010c();
    plVar3 = &lStack_38;
    lStack_38 = lVar2;
    FUN_1006c71a4(plVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c61170(lVar4);
  return plVar3;
}



/* Entry: 100b65470; end: 100b65617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100b65470(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_48;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112ef6690);
  if (lVar6 == 0) {
    FUN_1000285a8(0x112d53860,&UNK_10d92b600);
    FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar6 = 0;
    func_0x000107c6010c();
    plVar5 = &lStack_48;
    lStack_48 = lVar6;
    func_0x000100854cb0(plVar5);
  }
  else {
    FUN_1000285a8(0x112d3b3f8,&UNK_10d904aa0);
    func_0x000107c61174(lVar6);
    lVar4 = lVar6;
    func_0x0001000b637c();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ef6698);
    uVar1 = uVar7;
    func_0x000107c615f0(uVar7);
    FUN_100471e0c();
    func_0x000107c61574(lVar4);
    func_0x000107c615e8(uVar7);
    puVar2 = &UNK_1105a13e8;
    func_0x000107c613fc(&UNK_1105a13e8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uVar7 = 0;
    FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar3 = &UNK_100c6f460;
    FUN_1000d5158(&UNK_100c6f460,puVar2,uVar7);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(puVar2);
    lVar4 = 0;
    func_0x000107c6010c();
    plVar5 = &lStack_48;
    lStack_48 = lVar4;
    FUN_1006c71a4(plVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(puVar3);
  }
  func_0x000107c61170(lVar6);
  return plVar5;
}



/* Entry: 100b65618; end: 100b657ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100b65618(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef6728);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      FUN_1000285a8(0x112d3b7d0,&UNK_10d904cc0);
      lVar2 = lVar1;
      func_0x000107c3d14c(lVar1);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x0001000b637c();
      func_0x000107c61170(lVar2);
      uVar4 = 0;
      FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pcVar5 = FUN_100b66298;
      FUN_1000bfde0(FUN_100b66298,0,uVar4);
      func_0x000107c61574(lVar3);
      uVar4 = 0x112d59880;
      FUN_100b657f0(0x112d59880,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      FUN_1000c2068();
      func_0x000107c61574(pcVar5);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ef6698);
      uVar6 = uVar8;
      func_0x000107c615f0(uVar8);
      FUN_100471e0c();
      func_0x000107c61574(uVar4);
      func_0x000107c615e8(uVar8);
      uVar4 = 0;
      func_0x000107c6010c();
      puVar7 = &uStack_58;
      uStack_58 = uVar4;
      FUN_1006c71a4(puVar7);
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(lVar1);
      func_0x000107c61574(uVar6);
      return puVar7;
    }
  }
  FUN_1000285a8(0x112d53860,&UNK_10d92b600);
  FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = 0;
  func_0x000107c6010c();
  puVar7 = &uStack_58;
  uStack_58 = uVar4;
  func_0x000100854cb0(puVar7);
  func_0x000107c61170(uVar4);
  return puVar7;
}



/* Entry: 100b657f0; end: 100b6582f;  */

void FUN_100b657f0(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_100b650a0(0xff);
    puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
    func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 100b65830; end: 100b65897;  */

void FUN_100b65830(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0x112d53860;
    FUN_1000285a8(0x112d53860,&UNK_10d92b600);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto code_r0x0001000285a8;
    }
  }
  puVar2 = (ulong *)0x112d64e80;
  plVar5 = (long *)&UNK_10d929f90;
code_r0x0001000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100b65898; end: 100b658a3;  */

void FUN_100b65898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e81ff48);
  return;
}



/* Entry: 100b658a4; end: 100b658f3;  */

long FUN_100b658a4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100b65898(0,*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  FUN_100087bcc();
  func_0x000107c61434(param_1);
  return lVar1;
}



/* Entry: 100b658f4; end: 100b658f7;  */

void FUN_100b658f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 100b658f8; end: 100b6593b;  */

void FUN_100b658f8(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBbWV_11034d660 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x90);
  return;
}



/* Entry: 100b6593c; end: 100b65947;  */

void FUN_100b6593c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e81ffb4);
  return;
}



/* Entry: 100b65948; end: 100b659c3;  */

void FUN_100b65948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  long lVar1;
  
  FUN_100b6593c(0,*(undefined8 *)(*unaff_x20 + 0x88));
  lVar1 = unaff_x20[2];
  func_0x000107c61434(lVar1);
  FUN_1000b693c(param_2,param_3);
  FUN_100b65a2c(lVar1,param_2);
  return;
}



/* Entry: 100b659c4; end: 100b659c7;  */

void FUN_100b659c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 100b659c8; end: 100b65a2b;  */

void FUN_100b659c8(long param_1)

{
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_40 = PTR___sBbWV_11034d660 + 0x40;
  puStack_38 = PTR___sBoWV_11034d678 + 0x40;
  puStack_18 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_30 = puStack_38;
  puStack_28 = puStack_38;
  puStack_20 = puStack_40;
  func_0x000107c61524(param_1,0,6,&puStack_40,param_1 + 0x58);
  return;
}



/* Entry: 100b65a2c; end: 100b65a77;  */

undefined8 FUN_100b65a2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_100b65a78(param_1,param_2);
  return unaff_x20;
}



/* Entry: 100b65a78; end: 100b65d53;  */

void FUN_100b65a78(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  code *pcVar11;
  undefined *puVar12;
  long *unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_88;
  long lStack_80;
  long alStack_78 [3];
  
  lVar14 = *unaff_x20;
  lVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  lVar2 = 0;
  FUN_10006a340();
  lVar3 = lVar2;
  func_0x000107c613fc();
  FUN_10006a360();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(long *)(lVar1 + 0x10) = lVar3;
  *(undefined **)(lVar1 + 0x18) = puVar4;
  unaff_x20[4] = lVar1;
  func_0x000107c613fc(lVar2,0x18,7);
  FUN_10006a360();
  unaff_x20[5] = lVar2;
  uVar13 = *(undefined8 *)(lVar14 + 0x50);
  puVar4 = PTR___sSiN_11034deb0;
  func_0x000107c5f9cc(PTR___sSiN_11034deb0,uVar13,PTR___sSiSHsWP_11034dec0);
  unaff_x20[6] = (long)puVar4;
  unaff_x20[7] = 0;
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  uVar5 = 0xff;
  alStack_78[0] = param_1;
  FUN_100087438(0xff,uVar13);
  uVar13 = 0;
  func_0x000107c5fc80(0,uVar5);
  func_0x000107c61434(param_1);
  func_0x000107c6157c(param_2);
  puVar4 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar13);
  func_0x000107c5fbf4(&uStack_88,uVar13,puVar4);
  func_0x000107c60478(0,uVar13,puVar4);
  func_0x000107c6046c(alStack_78);
  uVar6 = 0;
  func_0x000107c60474(0,uVar13,puVar4);
  func_0x000107c60470(&uStack_88);
  uVar5 = uStack_88;
  lVar3 = lStack_80;
  while (lVar3 != 0) {
    puVar4 = &UNK_1107a76b8;
    puVar7 = puVar4;
    uStack_88 = uVar5;
    lStack_80 = lVar3;
    func_0x000107c613fc(&UNK_1107a76b8,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    puVar8 = &UNK_1107a76e0;
    func_0x000107c613fc(&UNK_1107a76e0,0x28,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined8 *)(puVar8 + 0x18) = uVar5;
    *(long *)(puVar8 + 0x20) = param_2;
    func_0x000107c613fc(&UNK_1107a76b8,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    puVar9 = &UNK_1107a7708;
    func_0x000107c613fc(&UNK_1107a7708,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar4;
    *(long *)(puVar9 + 0x18) = param_1;
    *(long *)(puVar9 + 0x20) = param_2;
    func_0x000107c61580(param_2,2);
    func_0x000107c61434(param_1);
    func_0x000107c6157c(puVar7);
    func_0x000107c6157c(puVar4);
    pcVar10 = FUN_100b65dd8;
    puVar12 = puVar8;
    FUN_1000d4d28(FUN_100b65dd8,puVar8,&UNK_104878a24,puVar9);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar9);
    pcVar11 = pcVar10;
    func_0x000107c614f0(pcVar10);
    (**(code **)(puVar12 + 0x10))(unaff_x20[4],pcVar11,puVar12);
    func_0x000107c61574(lVar3);
    func_0x000107c615e8(pcVar10);
    func_0x000107c60470(&uStack_88,uVar6);
    uVar5 = uStack_88;
    lVar3 = lStack_80;
  }
  func_0x000107c6142c(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c6142c(alStack_78[0]);
  return;
}



/* Entry: 100b65d54; end: 100b65dd7;  */

void FUN_100b65d54(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b65dd8; end: 100b65de3;  */

void FUN_100b65dd8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_90 [8];
  undefined8 ***apppuStack_88 [3];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(*(long *)(**(long **)(unaff_x20 + 0x20) + 0x50) + 0x10);
  lVar1 = 0;
  func_0x000107c60188(0,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_90 + -extraout_x8;
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    func_0x000107c6157c(uVar5);
    FUN_10006c804();
    func_0x000107c61574(uVar5);
    lVar1 = *(long *)(lVar6 + -8);
    (**(code **)(lVar1 + 0x10))(puVar7,param_1,lVar6);
    (**(code **)(lVar1 + 0x38))(puVar7,0,1,lVar6);
    uStack_70 = uVar3;
    func_0x000107c61428(lVar2 + 0x30,apppuStack_88,0x21,0);
    uVar3 = 0;
    func_0x000107c5fa34(0,PTR___sSiN_11034deb0,lVar6,PTR___sSiSHsWP_11034dec0);
    func_0x000107c5fa44(puVar7,&uStack_70,uVar3);
    ppppuVar4 = apppuStack_88;
    func_0x000107c614a8();
    FUN_100b65f98();
    if (ppppuVar4 == (undefined8 ****)0x0) {
      lVar1 = *(long *)(lVar2 + 0x28);
      func_0x000107c6157c(lVar1);
      FUN_100070bfc();
      func_0x000107c61574(lVar2);
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      func_0x000107c6157c(uVar3);
      FUN_100070bfc();
      func_0x000107c61574(uVar3);
      apppuStack_88[0] = ppppuVar4;
      func_0x000100087f6c(apppuStack_88);
      func_0x000107c6142c(ppppuVar4);
      lVar1 = lVar2;
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100b65de4; end: 100b65f8f;  */

void FUN_100b65de4(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_90 [8];
  undefined8 ***apppuStack_88 [3];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(*(long *)(*param_4 + 0x50) + 0x10);
  lVar1 = 0;
  func_0x000107c60188(0,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_90 + -extraout_x8;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c6157c(uVar3);
    FUN_10006c804();
    func_0x000107c61574(uVar3);
    lVar1 = *(long *)(lVar4 + -8);
    (**(code **)(lVar1 + 0x10))(puVar5,param_1,lVar4);
    (**(code **)(lVar1 + 0x38))(puVar5,0,1,lVar4);
    uStack_70 = param_3;
    func_0x000107c61428(param_2 + 0x30,apppuStack_88,0x21,0);
    uVar3 = 0;
    func_0x000107c5fa34(0,PTR___sSiN_11034deb0,lVar4,PTR___sSiSHsWP_11034dec0);
    func_0x000107c5fa44(puVar5,&uStack_70,uVar3);
    ppppuVar2 = apppuStack_88;
    func_0x000107c614a8();
    FUN_100b65f98();
    if (ppppuVar2 == (undefined8 ****)0x0) {
      lVar1 = *(long *)(param_2 + 0x28);
      func_0x000107c6157c(lVar1);
      FUN_100070bfc();
      func_0x000107c61574(param_2);
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      func_0x000107c6157c(uVar3);
      FUN_100070bfc();
      func_0x000107c61574(uVar3);
      apppuStack_88[0] = ppppuVar2;
      func_0x000100087f6c(apppuStack_88);
      func_0x000107c6142c(ppppuVar2);
      lVar1 = param_2;
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100b65f90; end: 100b65f97;  */

void FUN_100b65f90(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_assert_owner_11034c778)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100b65f98; end: 100b6615f;  */

code * FUN_100b65f98(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  code *apcStack_80 [2];
  long lStack_70;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar7 = *unaff_x20;
  FUN_100b65f90();
  lVar9 = unaff_x20[2];
  lVar8 = *(long *)(lVar7 + 0x50);
  uVar1 = 0;
  FUN_100087438(0,lVar8);
  func_0x000107c5fc74(lVar9,uVar1);
  func_0x000107c61428(unaff_x20 + 6,auStack_58,0,0);
  lVar10 = unaff_x20[6];
  lVar7 = lVar10;
  func_0x000107c61434();
  func_0x000107c5fa08();
  func_0x000107c6142c(lVar10);
  puVar6 = PTR___sSiN_11034deb0;
  pcVar2 = (code *)0x0;
  if (lVar9 == lVar7) {
    lVar7 = unaff_x20[6];
    uVar1 = 0;
    lStack_70 = lVar8;
    lStack_60 = lVar7;
    func_0x000107c5fa34(0,PTR___sSiN_11034deb0,lVar8,PTR___sSiSHsWP_11034dec0);
    func_0x000107c61434(lVar7);
    puVar3 = PTR___sSDyxq_GSTsMc_11034d798;
    func_0x000107c61520(PTR___sSDyxq_GSTsMc_11034d798,uVar1);
    pcVar4 = FUN_100b66160;
    func_0x000107c5fc0c(FUN_100b66160,apcStack_80,uVar1,puVar3);
    func_0x000107c6142c(lVar7);
    puVar3 = &UNK_10dd3aa50;
    apcStack_80[0] = pcVar4;
    lStack_60 = lVar8;
    func_0x000107c614e0(&UNK_10dd3aa50,&lStack_60);
    uVar1 = 0xff;
    func_0x000107c61510(0xff,puVar6,lVar8,"key value ",0);
    uVar5 = 0;
    func_0x000107c5fc80(0,uVar1);
    puVar6 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar5);
    pcVar2 = FUN_100b6627c;
    FUN_1000ca88c(FUN_100b6627c,puVar3,uVar5,lVar8,PTR___ss5NeverON_11034ee88,puVar6,
                  PTR___ss5NeverOs5ErrorsWP_11034ee90);
    func_0x000107c6142c(pcVar4);
    func_0x000107c61574(puVar3);
  }
  return pcVar2;
}


