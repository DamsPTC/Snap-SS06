/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b843a8c; end: 10b843acb; -[SIGCollectionViewCellBase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b843a8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127947ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127947b0,0);
  return;
}



/* Entry: 10b843acc; end: 10b843ad3; +[SIGCollectionViewCell cellStyle] */

undefined8 FUN_10b843acc(void)

{
  return 0;
}



/* Entry: 10b843ad4; end: 10b843ae3; +[SIGCollectionViewCell heightForCellWithStyle:containerStyle:] */

double FUN_10b843ad4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  double dVar1;
  
  func_0x00010bfe0720(PTR_PTR_1126b50b8,param_7,param_6);
  dVar1 = param_1;
  FUN_10b86a780(param_7,param_8,0,0);
  return param_3 + param_1 + dVar1;
}



/* Entry: 10b843ae4; end: 10b843af7; +[SIGCollectionViewCell computedHeightThatFits:containerStyle:titleText:detailText:] */

void FUN_10b843ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf45a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,0,0,param_3,PTR_s_computedHeightThatFits_container_1125af040);
  return;
}



/* Entry: 10b843af8; end: 10b843b37; +[SIGCollectionViewCell computedHeightThatFits:containerStyle:titleText:detailText:badgeText:trailingAccessoryViewWidth:leadingAccessoryViewWidth:isCentered:] */

void FUN_10b843af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  func_0x00010bf214a0(param_1,param_2,0,param_3,param_4,param_5,0,param_6,param_7,param_8);
  return;
}



/* Entry: 10b843b38; end: 10b843b5f; +[SIGCollectionViewCell brokenLegacyComputedHeightThatFits:cellStyle:containerStyle:titleText:titleTextStyle:detailText:badgeText:trailingAccessoryViewWidth:leadingAccessoryViewWidth:isCentered:] */

double FUN_10b843b38(double param_1,double param_2,double param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x7;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 in_stack_00000000;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  dVar3 = param_1;
  dVar4 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  _objc_retain(in_x5);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  FUN_10b86a780(in_x3,in_x4,puVar2,0);
  param_1 = param_1 - (dVar6 + dVar4);
  func_0x00010bf45a40(param_1,param_2,param_3,param_4,PTR_PTR_1126b50b8);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x5);
  return dVar5 + dVar3 + param_1;
}



/* Entry: 10b843b60; end: 10b843b7b; +[SIGCollectionViewCell dynamicTypeComputedHeightThatFits:cellStyle:containerStyle:titleText:titleTextStyle:detailText:badgeText:valueText:emojiText:trailingAccessoryViewSize:leadingAccessoryViewSize:officialBadgeType:actionIndicator:isCentered:adjustsHeightAccommodatingExtraLines:traitCollection:] */

void FUN_10b843b60(undefined8 param_1)

{
  undefined1 uStack000000000000002a;
  
  uStack000000000000002a = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf45a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_computedHeightThatFits_cellStyle_1125af030);
  return;
}



/* Entry: 10b843b7c; end: 10b843c53; -[SIGCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b843b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puVar1 = PTR_PTR_1126b50b8;
  _objc_alloc();
  _objc_opt_class(param_5);
  func_0x00010bf34120();
  func_0x00010c04ea80();
  puStack_58 = PTR_PTR_11270b450;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_underlyingView__1125e2e00,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127947b8;
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined **)((long)puVar2 + lVar4) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 10b843c54; end: 10b843c63; -[SIGCollectionViewCell isSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b843c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b8),PTR_s_isSelected_1125fcfa8);
  return;
}



/* Entry: 10b843c64; end: 10b843c73; -[SIGCollectionViewCell setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b843c64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b8),PTR_s_setSelected__11265c598);
  return;
}



/* Entry: 10b843c74; end: 10b843d27; -[SIGCollectionViewCell setHighlighted:] */

/* WARNING: Possible PIC construction at 0x00010b843cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b843cfc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b843c74(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + _DAT_1127947bc) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127947bc) = (char)param_3;
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127947c0);
  }
  else {
    lVar1 = param_1;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127947c0);
    *(long *)(param_1 + _DAT_1127947c0) = lVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127947b8);
    func_0x00010bfe30e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBackgroundColor__112639330,uVar2);
  return;
}



/* Entry: 10b843d28; end: 10b843d37; -[SIGCollectionViewCell underlyingCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b843d28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127947b8);
}



/* Entry: 10b843d38; end: 10b843d77; -[SIGCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b843d38(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127947b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127947c0,0);
  return;
}



/* Entry: 10b843d78; end: 10b843d7f; +[SIGCompressedCollectionViewCell cellStyle] */

undefined8 FUN_10b843d78(void)

{
  return 1;
}



/* Entry: 10b843d80; end: 10b843d8b; +[SIGCompressedCollectionViewCell widthForCellWithStyle:constrainedSize:] */

double FUN_10b843d80(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  param_1 = param_1 * 0.5;
  if (param_4 < 6) {
    if (param_4 == 4) {
      dVar3 = param_1 + 12.0;
      dVar4 = -12.0;
    }
    else {
      if (param_4 != 5) {
        return param_1;
      }
      dVar3 = param_1 + -12.0;
      dVar4 = 12.0;
    }
    if (puVar2 == (undefined *)0x0) {
      dVar3 = param_1 + dVar4;
    }
  }
  else if (param_4 == 7) {
    dVar3 = param_1 + 12.0;
  }
  else {
    dVar3 = param_1;
    if (param_4 == 6) {
      dVar3 = param_1 + -12.0;
    }
  }
  return dVar3;
}



/* Entry: 10b843d8c; end: 10b8440df; -[SIGCollectionViewCell configureWithCellViewModel:] */

void FUN_10b843d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010befdb60(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e40();
  _objc_release(uVar1);
  func_0x00010c0ebe00(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5c20();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2716a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf6f6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2792c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c08dda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9fe0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c06e3c0(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a880();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf154a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ed60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c297100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf8e9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1947a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010beee7c0(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161a60();
  _objc_release(uVar1);
  func_0x00010c0e1a60(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0b20();
  _objc_release(uVar1);
  func_0x00010bf341a0(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213780();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2795a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219580();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8440e0; end: 10b8440f3; +[SIGCollectionViewCell computedHeightForModel:containerStyle:] */

undefined8
FUN_10b8440e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
  
  _objc_retain();
  lVar1 = param_7;
  func_0x00010c2795a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uStack_a0 = 0;
  }
  else {
    lVar1 = param_7;
    func_0x00010c2795a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  func_0x00010c0c1e40(param_7);
  lVar1 = param_7;
  func_0x00010c2716a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_7;
  func_0x00010bf6f6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_7;
  func_0x00010bf154a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_7;
  func_0x00010c297100();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_7;
  func_0x00010bf8e9e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_7;
  func_0x00010c2792c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar7 = param_7;
  uVar12 = param_3;
  uVar13 = param_4;
  func_0x00010c08dda0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar8 = param_7;
  func_0x00010beee7c0();
  lVar9 = param_7;
  func_0x00010c0e1a60();
  lVar10 = param_7;
  func_0x00010bf341a0();
  lVar11 = param_7;
  func_0x00010c06e3c0();
  func_0x00010befdb60();
  func_0x00010c0ebe00();
  FUN_10b842dbc(param_1,param_2,param_3,param_4,uVar12,uVar13,0,param_8,param_9,lVar1,lVar2,lVar3,
                lVar4,lVar5,lVar8,lVar9,lVar10,(char)lVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_a0);
  _objc_release(param_7);
  return param_1;
}



/* Entry: 10b8440f4; end: 10b844103; +[SIGTableViewCell heightForRowWithStyle:containerStyle:] */

double FUN_10b8440f4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  double dVar1;
  
  func_0x00010bfe0720(PTR_PTR_1126b50b8,param_7,param_6);
  dVar1 = param_1;
  FUN_10b86a780(param_7,param_8,0,0);
  return param_3 + param_1 + dVar1;
}



/* Entry: 10b844104; end: 10b844117; +[SIGTableViewCell computedHeightThatFits:containerStyle:titleText:detailText:] */

void FUN_10b844104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf45a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,0,0,param_3,PTR_s_computedHeightThatFits_container_1125af040);
  return;
}



/* Entry: 10b844118; end: 10b844157; +[SIGTableViewCell computedHeightThatFits:containerStyle:titleText:detailText:badgeText:trailingAccessoryViewWidth:leadingAccessoryViewWidth:isCentered:] */

void FUN_10b844118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  func_0x00010bf214a0(param_1,param_2,0,param_3,param_4,param_5,0,param_6,param_7,param_8);
  return;
}



/* Entry: 10b844158; end: 10b84417f; +[SIGTableViewCell brokenLegacyComputedHeightThatFits:cellStyle:containerStyle:titleText:titleTextStyle:detailText:badgeText:trailingAccessoryViewWidth:leadingAccessoryViewWidth:isCentered:] */

double FUN_10b844158(double param_1,double param_2,double param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x7;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 in_stack_00000000;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  dVar3 = param_1;
  dVar4 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  _objc_retain(in_x5);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  FUN_10b86a780(in_x3,in_x4,puVar2,0);
  param_1 = param_1 - (dVar6 + dVar4);
  func_0x00010bf45a40(param_1,param_2,param_3,param_4,PTR_PTR_1126b50b8);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x5);
  return dVar5 + dVar3 + param_1;
}



/* Entry: 10b844180; end: 10b84419b; +[SIGTableViewCell dynamicTypeComputedHeightThatFits:cellStyle:containerStyle:titleText:titleTextStyle:detailText:badgeText:valueText:emojiText:trailingAccessoryViewSize:leadingAccessoryViewSize:officialBadgeType:actionIndicator:isCentered:adjustsHeightAccommodatingExtraLines:traitCollection:] */

void FUN_10b844180(undefined8 param_1)

{
  undefined1 uStack000000000000002a;
  
  uStack000000000000002a = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf45a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_computedHeightThatFits_cellStyle_1125af030);
  return;
}



/* Entry: 10b84419c; end: 10b8441f3; +[SIGTableViewCell computedHeightThatFits:cellStyle:containerStyle:titleText:titleTextStyle:detailText:badgeText:valueText:emojiText:trailingAccessoryViewSize:leadingAccessoryViewSize:officialBadgeType:actionIndicator:isCentered:adjustsHeightAccommodatingExtraLines:optInForDynamicType:traitCollection:] */

double FUN_10b84419c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                    undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x7;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000028;
  long in_stack_00000030;
  
  dVar3 = param_1;
  dVar4 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000030);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  _objc_retain(in_x5);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  FUN_10b86a780(in_x3,in_x4,puVar2,0);
  param_1 = param_1 - (dVar6 + dVar4);
  if ((in_stack_00000028._2_1_ == '\0') || (in_stack_00000030 == 0)) {
    func_0x00010bf45a40(param_1,param_2,param_3,param_5,PTR_PTR_1126b50b8);
  }
  else {
    func_0x00010bf8bba0(param_1,param_2,param_3,param_4,param_5,param_6,PTR_PTR_1126b50b8);
  }
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x5);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  return dVar5 + dVar3 + param_1;
}



/* Entry: 10b8441f4; end: 10b8441fb; -[SIGTableViewCell init] */

void FUN_10b8441f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c040050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithReuseIdentifier__1125eda10,0);
  return;
}



/* Entry: 10b8441fc; end: 10b844203; -[SIGTableViewCell initWithStyle:reuseIdentifier:] */

void FUN_10b8441fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c040050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithReuseIdentifier__1125eda10,param_4);
  return;
}



/* Entry: 10b844204; end: 10b8445f3; -[SIGTableViewCell initWithReuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b844204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 **ppuVar18;
  undefined8 **ppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_11270b458;
  puVar22 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(puVar22,PTR_s_initWithStyle_reuseIdentifier__1125f1528,0,param_3);
  puVar2 = (undefined *)0x0;
  if (puVar22 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar22);
    func_0x00010c1fbac0(puVar22);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar22);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b50b8;
    _objc_alloc();
    func_0x00010c04ea80();
    uVar4 = *(undefined8 *)((long)puVar22 + (long)_DAT_1127947c4);
    *(undefined **)((long)puVar22 + (long)_DAT_1127947c4) = puVar3;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126d5f68;
    _objc_retain(puVar3);
    _objc_alloc();
    func_0x00010c003f40();
    uVar4 = *(undefined8 *)((long)puVar22 + (long)_DAT_1127947c8);
    *(undefined **)((long)puVar22 + (long)_DAT_1127947c8) = puVar5;
    _objc_release(uVar4);
    _objc_retain(puVar5);
    func_0x00010c219b60(puVar5);
    puVar20 = PTR_s_contentView_1125b10e0;
    puStack_a8 = PTR_PTR_11270b458;
    ppuVar6 = &puStack_b0;
    puStack_b0 = puVar22;
    _objc_msgSendSuper2(ppuVar6,PTR_s_contentView_1125b10e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar6);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR_PTR_11270b458;
    ppuVar6 = &puStack_c0;
    puStack_c0 = puVar22;
    _objc_msgSendSuper2(ppuVar6,puVar20);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    puStack_90 = puVar8;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR_PTR_11270b458;
    ppuVar10 = &puStack_d0;
    puStack_d0 = puVar22;
    _objc_msgSendSuper2(ppuVar10,puVar20);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    puStack_88 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR_PTR_11270b458;
    ppuVar14 = &puStack_e0;
    puStack_e0 = puVar22;
    _objc_msgSendSuper2(ppuVar14,puVar20);
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar5;
    puStack_80 = puVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR_PTR_11270b458;
    ppuVar18 = &puStack_f0;
    puStack_f0 = puVar22;
    _objc_msgSendSuper2(ppuVar18,puVar20);
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(ppuVar19);
    _objc_release(ppuVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(ppuVar15);
    _objc_release(ppuVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar22;
  }
  ___stack_chk_fail();
  puVar22 = *(undefined8 **)(puVar2 + _DAT_1127947c8);
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar22,PTR_s_intrinsicContentSize_1125f8080);
  return puVar22;
}



/* Entry: 10b8445f4; end: 10b844603; -[SIGTableViewCell intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8445f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c8),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10b844604; end: 10b8446ab; -[SIGTableViewCell layoutSubviews] */

void FUN_10b844604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_60;
  puStack_48 = PTR_PTR_11270b458;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  puStack_58 = PTR_PTR_11270b458;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_contentView_1125b10e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b8446ac; end: 10b84475b; -[SIGTableViewCell imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8446ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127947c4;
  puVar1 = *(undefined **)(param_1 + lVar4);
  func_0x00010c08dda0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c013de0(0,0,0x4040000000000000,0x4040000000000000);
    func_0x00010c1b9fe0(*(undefined8 *)(param_1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b84475c; end: 10b8447b7; -[SIGTableViewCell textLabel] */

/* WARNING: Possible PIC construction at 0x00010b84477c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b844780) */
/* WARNING: Removing unreachable block (ram,0x00010b844794) */
/* WARNING: Removing unreachable block (ram,0x00010b8447a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84475c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c4),PTR_s_textLabel_112678ac8);
  return;
}



/* Entry: 10b8447b8; end: 10b844813; -[SIGTableViewCell detailTextLabel] */

/* WARNING: Possible PIC construction at 0x00010b8447d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8447dc) */
/* WARNING: Removing unreachable block (ram,0x00010b8447f0) */
/* WARNING: Removing unreachable block (ram,0x00010b844800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8447b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf01e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c4),PTR_s_alternateLabel_11259e128);
  return;
}



/* Entry: 10b844814; end: 10b84481b; -[SIGTableViewCell contentView] */

undefined8 FUN_10b844814(void)

{
  return 0;
}



/* Entry: 10b84481c; end: 10b84482b; -[SIGTableViewCell isSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84481c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c4),PTR_s_isSelected_1125fcfa8);
  return;
}



/* Entry: 10b84482c; end: 10b84483b; -[SIGTableViewCell setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84482c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c4),PTR_s_setSelected__11265c598);
  return;
}



/* Entry: 10b84483c; end: 10b84484b; -[SIGTableViewCell setSelected:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84483c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c4),PTR_s_setSelected__11265c598);
  return;
}



/* Entry: 10b84484c; end: 10b84485b; -[SIGTableViewCell isHighlighted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84484c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c4),PTR_s_isHighlighted_1125fad78);
  return;
}



/* Entry: 10b84485c; end: 10b84486b; -[SIGTableViewCell setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84485c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c4),PTR_s_setHighlighted__112647c38);
  return;
}



/* Entry: 10b84486c; end: 10b84487b; -[SIGTableViewCell setHighlighted:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84486c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c4),PTR_s_setHighlighted__112647c38);
  return;
}



/* Entry: 10b84487c; end: 10b8448bb; -[SIGTableViewCell accessoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84487c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1127947c4);
  func_0x00010beee7c0();
  if (lVar1 - 2U < 4) {
    uVar2 = *(undefined8 *)(&UNK_10e5f31c8 + (lVar1 - 2U) * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b8448bc; end: 10b8448e3; -[SIGTableViewCell setAccessoryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8448bc(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00010c161a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127947c4),PTR_s_setActionIndicator__1126360b8,
               *(undefined8 *)(&UNK_10e5f31e8 + param_3 * 8));
    return;
  }
  return;
}



/* Entry: 10b8448e4; end: 10b8448f3; -[SIGTableViewCell accessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8448e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2792d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c4),PTR_s_trailingAccessoryView_11267bed8);
  return;
}



/* Entry: 10b8448f4; end: 10b844903; -[SIGTableViewCell setAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8448f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2194d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c4),PTR_s_setTrailingAccessoryView__112663f58);
  return;
}



/* Entry: 10b844904; end: 10b844913; -[SIGTableViewCell style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b844904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25dfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c8),PTR_s_style_112675210);
  return;
}



/* Entry: 10b844914; end: 10b844923; -[SIGTableViewCell setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b844914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c8),PTR_s_setStyle__1126614d0);
  return;
}



/* Entry: 10b844924; end: 10b84493f; -[SIGTableViewCell setUseScreenScaledContainerBorder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b844924(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127947cc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c21da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947c8),
             PTR_s_setUseScreenScaledBorderWidth__1126650c0);
  return;
}



/* Entry: 10b844940; end: 10b84494f; -[SIGTableViewCell useScreenScaledContainerBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b844940(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127947cc);
}



/* Entry: 10b844950; end: 10b84495f; -[SIGTableViewCell underlyingCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b844950(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127947c4);
}



/* Entry: 10b844960; end: 10b84499f; -[SIGTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b844960(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127947c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127947c8,0);
  return;
}



/* Entry: 10b8449a0; end: 10b844cf3; -[SIGTableViewCell configureWithCellViewModel:] */

void FUN_10b8449a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010befdb60(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e40();
  _objc_release(uVar1);
  func_0x00010c0ebe00(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5c20();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2716a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf6f6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2792c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c08dda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9fe0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c06e3c0(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a880();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf154a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ed60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c297100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf8e9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1947a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010beee7c0(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161a60();
  _objc_release(uVar1);
  func_0x00010c0e1a60(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0b20();
  _objc_release(uVar1);
  func_0x00010bf341a0(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213780();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2795a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219580();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b844cf4; end: 10b844d07; +[SIGTableViewCell computedHeightForModel:containerStyle:] */

undefined8
FUN_10b844cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
  
  _objc_retain();
  lVar1 = param_7;
  func_0x00010c2795a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uStack_a0 = 0;
  }
  else {
    lVar1 = param_7;
    func_0x00010c2795a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  func_0x00010c0c1e40(param_7);
  lVar1 = param_7;
  func_0x00010c2716a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_7;
  func_0x00010bf6f6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_7;
  func_0x00010bf154a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_7;
  func_0x00010c297100();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_7;
  func_0x00010bf8e9e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_7;
  func_0x00010c2792c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar7 = param_7;
  uVar12 = param_3;
  uVar13 = param_4;
  func_0x00010c08dda0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar8 = param_7;
  func_0x00010beee7c0();
  lVar9 = param_7;
  func_0x00010c0e1a60();
  lVar10 = param_7;
  func_0x00010bf341a0();
  lVar11 = param_7;
  func_0x00010c06e3c0();
  func_0x00010befdb60();
  func_0x00010c0ebe00();
  FUN_10b842dbc(param_1,param_2,param_3,param_4,uVar12,uVar13,0,param_8,param_9,lVar1,lVar2,lVar3,
                lVar4,lVar5,lVar8,lVar9,lVar10,(char)lVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_a0);
  _objc_release(param_7);
  return param_1;
}



/* Entry: 10b844d08; end: 10b844d13; -[SIGXCellFriendingLayoutStrategy supportedSlots] */

undefined ** FUN_10b844d08(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111184040;
}



/* Entry: 10b844d14; end: 10b8456cb; -[SIGXCellFriendingLayoutStrategy createConstraintsBySlotWithCellContentView:textSlotsLayoutGuide:primaryTextSlot:secondaryTextSlot:tertiaryTextSlot:leadingAccessorySlot:trailingAccessorySlot:secondaryTrailingAccessorySlot:secondaryTitleAccessorySlot:] */

undefined **
FUN_10b844d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_138;
  undefined *puStack_130;
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
  long lStack_b0;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  uVar13 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar14 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar16 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  puVar2 = PTR_PTR_1126e1710;
  uVar8 = uVar13;
  uVar9 = uVar14;
  uVar10 = uVar15;
  uVar11 = uVar16;
  func_0x00010bf495e0(uVar13,uVar14,uVar15,uVar16,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  uStack_c0 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar8,uVar9,uVar10,uVar11,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = puVar6;
  func_0x00010bf09f80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e1710;
  uVar8 = uVar13;
  uVar9 = uVar14;
  uVar10 = uVar15;
  uVar11 = uVar16;
  func_0x00010bf495e0(uVar13,uVar14,uVar15,uVar16,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d0 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar8,uVar9,uVar10,uVar11,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar3);
  puVar5 = puVar6;
  func_0x00010bf09f80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e1710;
  func_0x00010bf495e0(uVar13,uVar14,uVar15,uVar16,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar4 = param_5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  uStack_e0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d8 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar13,uVar14,uVar15,uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  puVar5 = puVar6;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar6 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_10;
  uStack_f8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_9;
  uStack_f0 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x4020000000000000;
  uVar11 = 0x4030000000000000;
  uVar14 = 0x4020000000000000;
  uVar16 = 0x4030000000000000;
  func_0x00010bf49600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar8 = param_8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  uStack_110 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_10;
  uStack_108 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0x4020000000000000;
  uVar13 = 0x4030000000000000;
  uVar15 = 0x4020000000000000;
  uVar12 = 0x4030000000000000;
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar9,uVar11,uVar14,uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar8);
  puVar6 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  uStack_120 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_118 = uVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_128 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar10,uVar13,uVar15,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar6);
  puStack_130 = PTR_PTR_11270b460;
  uStack_138 = param_1;
  _objc_msgSendSuper2(&uStack_138,PTR_s_mergeWidthHeightOverrideConstrai_1125484a8,ppuVar1,param_3,
                      param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR__OBJC_CLASS___NSConstantArray_111184058;
}



/* Entry: 10b8456cc; end: 10b8456d7; -[SIGXCellGroupedUserLayoutStrategy supportedSlots] */

undefined ** FUN_10b8456cc(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111184058;
}



/* Entry: 10b8456d8; end: 10b845f03; -[SIGXCellGroupedUserLayoutStrategy createConstraintsBySlotWithCellContentView:textSlotsLayoutGuide:primaryTextSlot:secondaryTextSlot:tertiaryTextSlot:leadingAccessorySlot:trailingAccessorySlot:secondaryTrailingAccessorySlot:secondaryTitleAccessorySlot:] */

undefined **
FUN_10b8456d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(ppuVar1);
  uVar12 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar13 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar14 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  puVar2 = PTR_PTR_1126e1710;
  uVar6 = uVar12;
  uVar8 = uVar13;
  uVar9 = uVar14;
  uVar10 = uVar15;
  func_0x00010bf495e0(uVar12,uVar13,uVar14,uVar15,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar6,uVar8,uVar9,uVar10,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = puVar5;
  func_0x00010bf09f80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e1710;
  uVar8 = uVar12;
  uVar9 = uVar13;
  uVar10 = uVar14;
  uVar11 = uVar15;
  func_0x00010bf495e0(uVar12,uVar13,uVar14,uVar15,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar8,uVar9,uVar10,uVar11,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = puVar5;
  func_0x00010bf09f80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e1710;
  func_0x00010bf495e0(uVar12,uVar13,uVar14,uVar15,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d8 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar12,uVar13,uVar14,uVar15,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = puVar5;
  func_0x00010bf09f80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_9;
  uStack_e8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e0 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x4020000000000000;
  uVar9 = 0x4030000000000000;
  uVar10 = 0x4020000000000000;
  uVar11 = 0x4030000000000000;
  func_0x00010bf49600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar6 = param_8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  uStack_f8 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f0 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar8,uVar9,uVar10,uVar11,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar6);
  puStack_100 = PTR_PTR_11270b468;
  uStack_108 = param_1;
  _objc_msgSendSuper2(&uStack_108,PTR_s_mergeWidthHeightOverrideConstrai_1125484a8,ppuVar1,param_3,
                      param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR__OBJC_CLASS___NSConstantArray_111184070;
}



/* Entry: 10b845f04; end: 10b845f0f; -[SIGXCellInfoLayoutStrategy supportedSlots] */

undefined ** FUN_10b845f04(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111184070;
}



/* Entry: 10b845f10; end: 10b8466fb; -[SIGXCellInfoLayoutStrategy createConstraintsBySlotWithCellContentView:textSlotsLayoutGuide:primaryTextSlot:secondaryTextSlot:tertiaryTextSlot:leadingAccessorySlot:trailingAccessorySlot:secondaryTrailingAccessorySlot:secondaryTitleAccessorySlot:] */

undefined **
FUN_10b845f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_118;
  undefined *puStack_110;
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
  long lStack_b0;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(ppuVar1);
  uVar12 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar13 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar14 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  puVar2 = PTR_PTR_1126e1710;
  uVar6 = uVar12;
  uVar7 = uVar13;
  uVar8 = uVar14;
  uVar9 = uVar15;
  func_0x00010bf495e0(uVar12,uVar13,uVar14,uVar15,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar6,uVar7,uVar8,uVar9,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = puVar5;
  func_0x00010bf09f80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e1710;
  func_0x00010bf495e0(uVar12,uVar13,uVar14,uVar15,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x4020000000000000;
  uVar9 = 0x4030000000000000;
  uVar10 = 0x4020000000000000;
  uVar11 = 0x4030000000000000;
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar12,uVar13,uVar14,uVar15,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = puVar5;
  func_0x00010bf09f80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_10;
  uStack_d8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_9;
  uStack_d0 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar8,uVar9,uVar10,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  uStack_f0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_10;
  uStack_e8 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e0 = uVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x4020000000000000;
  uVar9 = 0x4030000000000000;
  uVar12 = 0x4020000000000000;
  uVar13 = 0x4030000000000000;
  func_0x00010bf49600(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar7 = param_8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  uStack_100 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f8 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar8,uVar9,uVar12,uVar13,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar5);
  puStack_110 = PTR_PTR_11270b470;
  uStack_118 = param_1;
  _objc_msgSendSuper2(&uStack_118,PTR_s_mergeWidthHeightOverrideConstrai_1125484a8,ppuVar1,param_3,
                      param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR__OBJC_CLASS___NSConstantArray_111184088;
}



/* Entry: 10b8466fc; end: 10b846707; -[SIGXCellSettingsLayoutStrategy supportedSlots] */

undefined ** FUN_10b8466fc(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111184088;
}



/* Entry: 10b846708; end: 10b846d87; -[SIGXCellSettingsLayoutStrategy createConstraintsBySlotWithCellContentView:textSlotsLayoutGuide:primaryTextSlot:secondaryTextSlot:tertiaryTextSlot:leadingAccessorySlot:trailingAccessorySlot:secondaryTrailingAccessorySlot:secondaryTitleAccessorySlot:] */

undefined **
FUN_10b846708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(ppuVar1);
  uVar12 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar13 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar14 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  puVar2 = PTR_PTR_1126e1710;
  uVar6 = uVar12;
  uVar7 = uVar13;
  uVar8 = uVar14;
  uVar9 = uVar15;
  func_0x00010bf495e0(uVar12,uVar13,uVar14,uVar15,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar6,uVar7,uVar8,uVar9,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = puVar5;
  func_0x00010bf09f80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e1710;
  func_0x00010bf495e0(uVar12,uVar13,uVar14,uVar15,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x4020000000000000;
  uVar9 = 0x4030000000000000;
  uVar10 = 0x4020000000000000;
  uVar11 = 0x4030000000000000;
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar12,uVar13,uVar14,uVar15,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = puVar5;
  func_0x00010bf09f80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_10;
  uStack_d0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x4020000000000000;
  uVar12 = 0x4030000000000000;
  uVar13 = 0x4020000000000000;
  uVar14 = 0x4030000000000000;
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar7,uVar9,uVar10,uVar11,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d8 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e0 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar8,uVar12,uVar13,uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(uVar3);
  func_0x00010c1d0640(ppuVar1);
  _objc_release(puVar5);
  puStack_e8 = PTR_PTR_11270b478;
  uStack_f0 = param_1;
  _objc_msgSendSuper2(&uStack_f0,PTR_s_mergeWidthHeightOverrideConstrai_1125484a8,ppuVar1,param_3,
                      param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR__OBJC_CLASS___NSConstantArray_1111840a0;
}



/* Entry: 10b846d88; end: 10b846d93; -[SIGXCellUserSelectLayoutStrategy supportedSlots] */

undefined ** FUN_10b846d88(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_1111840a0;
}



/* Entry: 10b846d94; end: 10b84775b; -[SIGXCellUserSelectLayoutStrategy createConstraintsBySlotWithCellContentView:textSlotsLayoutGuide:primaryTextSlot:secondaryTextSlot:tertiaryTextSlot:leadingAccessorySlot:trailingAccessorySlot:secondaryTrailingAccessorySlot:secondaryTitleAccessorySlot:] */

void FUN_10b846d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_130;
  undefined *puStack_128;
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
  long lStack_b0;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  uVar13 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar14 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar16 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  puVar2 = PTR_PTR_1126e1710;
  uVar6 = uVar13;
  uVar8 = uVar14;
  uVar9 = uVar15;
  uVar10 = uVar16;
  func_0x00010bf495e0(uVar13,uVar14,uVar15,uVar16,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar6,uVar8,uVar9,uVar10,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = puVar5;
  func_0x00010bf09f80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e1710;
  uVar8 = uVar13;
  uVar9 = uVar14;
  uVar10 = uVar15;
  uVar11 = uVar16;
  func_0x00010bf495e0(uVar13,uVar14,uVar15,uVar16,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar3 = param_5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar8,uVar9,uVar10,uVar11,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = puVar5;
  func_0x00010bf09f80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e1710;
  func_0x00010bf495e0(uVar13,uVar14,uVar15,uVar16,PTR_PTR_1126e1710);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar6 = param_5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d0 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d8 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar13,uVar14,uVar15,uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_release(uVar6);
  puVar4 = puVar5;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar8 = param_4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_10;
  uStack_f0 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_9;
  uStack_e8 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e0 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x4020000000000000;
  uVar11 = 0x4030000000000000;
  uVar14 = 0x4020000000000000;
  uVar16 = 0x4030000000000000;
  func_0x00010bf49600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar8 = param_8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  uStack_108 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_10;
  uStack_100 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f8 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0x4020000000000000;
  uVar13 = 0x4030000000000000;
  uVar15 = 0x4020000000000000;
  uVar12 = 0x4030000000000000;
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar9,uVar11,uVar14,uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126e1710;
  func_0x00010c0cda20(param_1);
  uVar8 = param_8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  uStack_118 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49600(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                      uVar10,uVar13,uVar15,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar8);
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar5);
  puStack_128 = PTR_PTR_11270b480;
  uStack_130 = param_1;
  _objc_msgSendSuper2(&uStack_130,PTR_s_mergeWidthHeightOverrideConstrai_1125484a8,puVar1,param_3,
                      param_5,param_6,param_7,param_8);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    if (lRam00000001137fbbf8 != -1) {
      func_0x000107c27d9c(0x1137fbbf8,&PTR___NSConcreteGlobalBlock_110d62490);
    }
    puVar1 = puRam00000001137fbbf0;
    _objc_retain(puRam00000001137fbbf0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b84775c; end: 10b8477af; +[SIGXCellLayoutStrategyFactory userSelectStrategy] */

void FUN_10b84775c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbbf8 != -1) {
    func_0x000107c27d9c(0x1137fbbf8,&PTR___NSConcreteGlobalBlock_110d62490);
  }
  uVar1 = uRam00000001137fbbf0;
  _objc_retain(uRam00000001137fbbf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b8477b0; end: 10b8477db;  */

void FUN_10b8477b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1718;
  _objc_opt_new();
  uVar1 = puRam00000001137fbbf0;
  puRam00000001137fbbf0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8477dc; end: 10b84782f; +[SIGXCellLayoutStrategyFactory groupedUserStrategy] */

void FUN_10b8477dc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbc08 != -1) {
    func_0x000107c27d9c(0x1137fbc08,&PTR___NSConcreteGlobalBlock_110d624b0);
  }
  uVar1 = uRam00000001137fbc00;
  _objc_retain(uRam00000001137fbc00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b847830; end: 10b84785b;  */

void FUN_10b847830(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1720;
  _objc_opt_new();
  uVar1 = puRam00000001137fbc00;
  puRam00000001137fbc00 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b84785c; end: 10b8478af; +[SIGXCellLayoutStrategyFactory settingsStrategy] */

void FUN_10b84785c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbc18 != -1) {
    func_0x000107c27d9c(0x1137fbc18,&PTR___NSConcreteGlobalBlock_110d624d0);
  }
  uVar1 = uRam00000001137fbc10;
  _objc_retain(uRam00000001137fbc10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b8478b0; end: 10b8478db;  */

void FUN_10b8478b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1728;
  _objc_opt_new();
  uVar1 = puRam00000001137fbc10;
  puRam00000001137fbc10 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8478dc; end: 10b84792f; +[SIGXCellLayoutStrategyFactory infoStrategy] */

void FUN_10b8478dc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbc28 != -1) {
    func_0x000107c27d9c(0x1137fbc28,&PTR___NSConcreteGlobalBlock_110d624f0);
  }
  uVar1 = uRam00000001137fbc20;
  _objc_retain(uRam00000001137fbc20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b847930; end: 10b84795b;  */

void FUN_10b847930(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1730;
  _objc_opt_new();
  uVar1 = puRam00000001137fbc20;
  puRam00000001137fbc20 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b84795c; end: 10b8479af; +[SIGXCellLayoutStrategyFactory friendingStrategy] */

void FUN_10b84795c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbc38 != -1) {
    func_0x000107c27d9c(0x1137fbc38,&PTR___NSConcreteGlobalBlock_110d62510);
  }
  uVar1 = uRam00000001137fbc30;
  _objc_retain(uRam00000001137fbc30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b8479b0; end: 10b8479db;  */

void FUN_10b8479b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1738;
  _objc_opt_new();
  uVar1 = puRam00000001137fbc30;
  puRam00000001137fbc30 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8479dc; end: 10b8479ff; +[SIGXCellLayoutStrategyHelpers combineContentViewPadding:withMinimumTargetViewPadding:] */

double FUN_10b8479dc(double param_1)

{
  double in_d4;
  
  if (in_d4 <= param_1) {
    in_d4 = param_1;
  }
  return in_d4;
}



/* Entry: 10b847a00; end: 10b848527; +[SIGXCellLayoutStrategyHelpers constraintsWithCellContentView:contentViewPadding:targetSlot:lowPriorityPullSlotTowards:alignCenterYWithContentView:minimumTargetViewPadding:bottomAnchorsForSlotsAbove:topAnchorsForSlotsBelow:trailingAnchorsForLeadingSlots:leadingAnchorsForTrailingSlots:] */

void FUN_10b847a00(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,double param_7,double param_8,
                  undefined8 param_9,undefined8 param_10,undefined *param_11,undefined *param_12,
                  long param_13,int param_14,long param_15,undefined *param_16,long param_17,
                  long param_18)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  ulong uVar22;
  double dVar23;
  double dVar24;
  undefined8 *puStack_770;
  undefined *puStack_768;
  undefined1 **ppuStack_760;
  code *pcStack_758;
  undefined1 *puStack_750;
  undefined8 *puStack_748;
  undefined8 *puStack_740;
  undefined1 *puStack_738;
  undefined8 *puStack_730;
  undefined8 *puStack_728;
  undefined8 uStack_720;
  long lStack_718;
  long *plStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  long lStack_640;
  undefined8 uStack_630;
  undefined8 uStack_628;
  double dStack_620;
  double dStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  undefined *puStack_5e0;
  long lStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined1 *puStack_5c0;
  code *pcStack_5b8;
  undefined *puStack_5b0;
  long lStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined *puStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  long lStack_570;
  int iStack_564;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined8 uStack_550;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [768];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_5a8 = param_15;
  lStack_570 = param_13;
  iStack_564 = param_14;
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  puStack_558 = param_16;
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  func_0x00010bf41840(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar16 = param_2;
  dVar23 = param_3;
  dVar24 = param_4;
  _objc_opt_new();
  puVar2 = param_12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_11;
  puStack_5a0 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_578 = puVar15;
  func_0x00010bf49480(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_12;
  puStack_580 = puVar2;
  puStack_d0 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_11;
  puStack_588 = puVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_590 = puVar2;
  func_0x00010bf49480(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_12;
  puStack_598 = puVar15;
  puStack_c8 = puVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_11;
  puStack_5b0 = puVar3;
  func_0x00010c2793a0(param_11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49520(-param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = param_12;
  puStack_c0 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_560 = param_11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar18;
  func_0x00010bf49520(-param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b8 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_11);
  _objc_release(puVar18);
  _objc_release(puVar3);
  _objc_release(puVar15);
  _objc_release(puStack_5b0);
  _objc_release(puStack_598);
  _objc_release(puStack_590);
  _objc_release(puStack_588);
  _objc_release(puStack_580);
  _objc_release(puStack_578);
  _objc_release(puStack_5a0);
  lVar17 = lStack_5a8;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  plStack_400 = (long *)0x0;
  _objc_retain(lStack_5a8);
  lVar20 = lVar17;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar19 = *plStack_400;
    do {
      lVar14 = 0;
      do {
        if (*plStack_400 != lVar19) {
          _objc_enumerationMutation(lVar17);
        }
        param_11 = param_12;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = param_11;
        func_0x00010bf49480(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar18);
        _objc_release(param_11);
        lVar14 = lVar14 + 1;
      } while (lVar20 != lVar14);
      lVar20 = lVar17;
      func_0x00010bf52a60();
      puVar2 = (undefined *)0x0;
    } while (lVar20 != 0);
  }
  _objc_release(lVar17);
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  _objc_retain(param_17);
  lVar20 = param_17;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar19 = *plStack_440;
    do {
      lVar14 = 0;
      do {
        if (*plStack_440 != lVar19) {
          _objc_enumerationMutation(param_17);
        }
        param_11 = param_12;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = param_11;
        func_0x00010bf49480(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar18);
        _objc_release(param_11);
        lVar14 = lVar14 + 1;
      } while (lVar20 != lVar14);
      lVar20 = param_17;
      func_0x00010bf52a60();
      puVar2 = (undefined *)0x0;
    } while (lVar20 != 0);
  }
  _objc_release(param_17);
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  plStack_480 = (long *)0x0;
  _objc_retain(param_18);
  lVar20 = param_18;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar19 = *plStack_480;
    param_8 = -param_8;
    do {
      lVar14 = 0;
      do {
        if (*plStack_480 != lVar19) {
          _objc_enumerationMutation(param_18);
        }
        param_11 = param_12;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = param_11;
        func_0x00010bf49520(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar18);
        _objc_release(param_11);
        lVar14 = lVar14 + 1;
      } while (lVar20 != lVar14);
      lVar20 = param_18;
      func_0x00010bf52a60();
      puVar2 = (undefined *)0x0;
    } while (lVar20 != 0);
  }
  _objc_release(param_18);
  puVar15 = puStack_558;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  plStack_4c0 = (long *)0x0;
  _objc_retain(puStack_558);
  puVar3 = puVar15;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar20 = *plStack_4c0;
    param_7 = -param_7;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_4c0 != lVar20) {
          _objc_enumerationMutation(puStack_558);
        }
        param_11 = param_12;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = param_11;
        func_0x00010bf49520(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar18);
        _objc_release(param_11);
        puVar15 = puVar15 + 1;
      } while (puVar3 != puVar15);
      puVar3 = puStack_558;
      func_0x00010bf52a60();
      puVar2 = (undefined *)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puStack_558);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (lStack_570 < 4) {
    puVar4 = param_12;
    if (lStack_570 < 2) {
      if (lStack_570 == 0) {
        param_11 = param_12;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puStack_560;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b848294;
      }
      if (lStack_570 != 1) goto LAB_10b8482d4;
      func_0x00010c08de00(param_12);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puStack_560;
      puVar2 = puStack_560;
      func_0x00010c08de00(puStack_560);
      _objc_retainAutoreleasedReturnValue();
LAB_10b848108:
      puVar18 = puVar4;
      func_0x00010bf493a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar18);
      _objc_release(puVar2);
      _objc_release(puVar4);
      param_11 = param_12;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar15;
    }
    else {
      if (lStack_570 != 2) {
        if (lStack_570 != 3) goto LAB_10b8482d4;
        func_0x00010c2793a0(param_12);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puStack_560;
        puVar2 = puStack_560;
        func_0x00010c2793a0(puStack_560);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b848108;
      }
      param_11 = param_12;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puStack_560;
    }
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = param_12;
    if (lStack_570 < 6) {
      if (lStack_570 == 4) {
        param_11 = param_12;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puStack_560;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b848294;
      }
      if (lStack_570 != 5) goto LAB_10b8482d4;
      func_0x00010c2793a0(param_12);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puStack_560;
      puVar2 = puStack_560;
      func_0x00010c2793a0(puStack_560);
      _objc_retainAutoreleasedReturnValue();
LAB_10b84819c:
      puVar18 = puVar4;
      func_0x00010bf493a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar18);
      _objc_release(puVar2);
      _objc_release(puVar4);
      param_11 = param_12;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar15;
    }
    else {
      if (lStack_570 != 6) {
        if (lStack_570 != 7) goto LAB_10b8482d4;
        func_0x00010c08de00(param_12);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puStack_560;
        puVar2 = puStack_560;
        func_0x00010c08de00(puStack_560);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b84819c;
      }
      param_11 = param_12;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puStack_560;
    }
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10b848294:
  puVar2 = param_11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar18);
  _objc_release(param_11);
LAB_10b8482d4:
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  lStack_508 = 0;
  uStack_510 = 0;
  uStack_4f8 = 0;
  puStack_500 = (undefined8 *)0x0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    param_11 = (undefined *)*puStack_500;
    param_7 = 5.59316334428926e-315;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_500 != param_11) {
          _objc_enumerationMutation(puVar3);
        }
        puVar18 = *(undefined **)(lStack_508 + (long)puVar15 * 8);
        func_0x00010c1e3380(0x437a0000,puVar18);
        func_0x00010befa120(puVar1);
        puVar15 = puVar15 + 1;
      } while (puVar4 != puVar15);
      puVar4 = puVar3;
      func_0x00010bf52a60();
      puVar2 = (undefined *)0x0;
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  if (iStack_564 != 0) {
    puVar2 = param_12;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puStack_560;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    param_11 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar2);
    func_0x00010c1e3380(0x437a0000,param_11);
    func_0x00010befa120(puVar1);
    _objc_release(param_11);
  }
  uVar22 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  puStack_540 = (undefined8 *)0x0;
  _objc_retain(puVar1);
  puVar9 = &uStack_550;
  puVar13 = auStack_3d0;
  puVar4 = puVar1;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    param_11 = (undefined *)*puStack_540;
    param_7 = 1.58735232019473e-314;
    do {
      puVar15 = (undefined *)0x0;
      do {
        fVar21 = (float)uVar22;
        if ((undefined *)*puStack_540 != param_11) {
          _objc_enumerationMutation(puVar1);
        }
        puVar18 = *(undefined **)(lStack_548 + (long)puVar15 * 8);
        func_0x00010c113c80(puVar18);
        uVar22 = (ulong)(uint)(fVar21 + -1.0);
        func_0x00010c1e3380(uVar22,puVar18);
        puVar15 = puVar15 + 1;
      } while (puVar4 != puVar15);
      puVar9 = &uStack_550;
      puVar13 = auStack_3d0;
      puVar4 = puVar1;
      func_0x00010bf52a60();
      puVar2 = (undefined *)0x0;
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(puStack_558);
  _objc_release(lVar17);
  _objc_release(param_12);
  _objc_release(puStack_560);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    lStack_5f0 = param_17;
    lStack_5e8 = param_18;
    lStack_5d8 = lVar17;
    pcStack_5b8 = FUN_10b848528;
    lStack_640 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_630 = param_5;
    uStack_628 = param_6;
    dStack_620 = param_8;
    dStack_618 = param_7;
    puStack_610 = puVar3;
    puStack_608 = param_11;
    puStack_600 = puVar18;
    puStack_5f8 = puVar1;
    puStack_5e0 = puVar2;
    puStack_5d0 = param_12;
    puStack_5c8 = puVar15;
    puStack_5c0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    _objc_retain(puVar13);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar5 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar13;
    puStack_730 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_738 = puVar6;
    func_0x00010bf49480(uVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    puStack_740 = puVar5;
    puStack_660 = puVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar13;
    puStack_748 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_750 = puVar6;
    func_0x00010bf49480(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    puStack_658 = puVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar13;
    func_0x00010c2793a0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf49520(-dVar24);
    _objc_retainAutoreleasedReturnValue();
    puStack_728 = puVar9;
    puStack_650 = puVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar13;
    func_0x00010bf1ff80(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf49520(-dVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_648 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puStack_750);
    _objc_release(puStack_748);
    _objc_release(puStack_740);
    _objc_release(puStack_738);
    _objc_release(puStack_730);
    uVar22 = 0;
    uStack_6f8 = 0;
    uStack_700 = 0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    lStack_718 = 0;
    uStack_720 = 0;
    uStack_708 = 0;
    plStack_710 = (long *)0x0;
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar17 = *plStack_710;
      do {
        puVar15 = (undefined *)0x0;
        do {
          fVar21 = (float)uVar22;
          if (*plStack_710 != lVar17) {
            _objc_enumerationMutation(puVar1);
          }
          uVar16 = *(undefined8 *)(lStack_718 + (long)puVar15 * 8);
          func_0x00010c113c80(uVar16);
          uVar22 = (ulong)(uint)(fVar21 + -1.0);
          func_0x00010c1e3380(uVar22,uVar16);
          puVar15 = puVar15 + 1;
        } while (puVar2 != puVar15);
        puVar2 = puVar1;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    _objc_release(puVar13);
    puVar9 = puStack_728;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_640) {
      ___stack_chk_fail();
      ppuVar12 = &puStack_770;
      pcStack_758 = FUN_10b848854;
      puStack_768 = PTR_PTR_11270b488;
      puStack_770 = puVar9;
      ppuStack_760 = &puStack_5c0;
      _objc_msgSendSuper2(&puStack_770,PTR_s_init_1125d9248);
      if (ppuVar12 != (undefined8 **)0x0) {
        *(undefined8 *)((long)ppuVar12 + 0x60) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x58) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x50) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x48) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x40) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x38) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x30) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x28) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x20) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x18) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x10) = 0;
        *(undefined8 *)((long)ppuVar12 + 8) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x70) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x68) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x80) = 0x4018000000000000;
        *(undefined8 *)((long)ppuVar12 + 0x78) = 0;
        *(undefined8 *)((long)ppuVar12 + 0x90) = 0x4030000000000000;
        *(undefined8 *)((long)ppuVar12 + 0x88) = 0x4020000000000000;
        *(undefined8 *)((long)ppuVar12 + 0xa0) = 0x4020000000000000;
        *(undefined8 *)((long)ppuVar12 + 0x98) = 0x4020000000000000;
        *(undefined8 *)((long)ppuVar12 + 0xc0) = 0x4030000000000000;
        *(undefined8 *)((long)ppuVar12 + 0xb8) = 0x4020000000000000;
        *(undefined8 *)((long)ppuVar12 + 0xb0) = 0x4020000000000000;
        *(undefined8 *)((long)ppuVar12 + 0xa8) = 0x4020000000000000;
        *(undefined8 *)((long)ppuVar12 + 0xe0) = 0x4020000000000000;
        *(undefined8 *)((long)ppuVar12 + 0xd8) = 0x4020000000000000;
        *(undefined8 *)((long)ppuVar12 + 0xd0) = 0x4020000000000000;
        *(undefined8 *)((long)ppuVar12 + 200) = 0x4020000000000000;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b848528; end: 10b848853; +[SIGXCellLayoutStrategyHelpers constraintsToPlaceView:intoLayoutGuide:insets:] */

void FUN_10b848528(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  float fVar12;
  ulong uVar13;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar9 = param_7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_8;
  uStack_180 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = uVar2;
  func_0x00010bf49480(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  uStack_190 = uVar9;
  uStack_b0 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_8;
  uStack_198 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a0 = uVar9;
  func_0x00010bf49480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_7;
  uStack_a8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_8;
  func_0x00010c2793a0(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf49520(-param_4);
  _objc_retainAutoreleasedReturnValue();
  uStack_178 = param_7;
  uStack_a0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_8;
  func_0x00010bf1ff80(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_7;
  func_0x00010bf49520(-param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uStack_1a0);
  _objc_release(uStack_198);
  _objc_release(uStack_190);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  uVar13 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  _objc_retain(puVar1);
  puVar7 = puVar1;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar10 = *plStack_160;
    do {
      puVar11 = (undefined *)0x0;
      do {
        fVar12 = (float)uVar13;
        if (*plStack_160 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        uVar9 = *(undefined8 *)(lStack_168 + (long)puVar11 * 8);
        func_0x00010c113c80(uVar9);
        uVar13 = (ulong)(uint)(fVar12 + -1.0);
        func_0x00010c1e3380(uVar13,uVar9);
        puVar11 = puVar11 + 1;
      } while (puVar7 != puVar11);
      puVar7 = puVar1;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(param_8);
  uVar9 = uStack_178;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_1c0;
  pcStack_1a8 = FUN_10b848854;
  puStack_1b8 = PTR_PTR_11270b488;
  uStack_1c0 = uVar9;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_1c0,PTR_s_init_1125d9248);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar8 + 0x60) = 0;
    *(undefined8 *)((long)puVar8 + 0x58) = 0;
    *(undefined8 *)((long)puVar8 + 0x50) = 0;
    *(undefined8 *)((long)puVar8 + 0x48) = 0;
    *(undefined8 *)((long)puVar8 + 0x40) = 0;
    *(undefined8 *)((long)puVar8 + 0x38) = 0;
    *(undefined8 *)((long)puVar8 + 0x30) = 0;
    *(undefined8 *)((long)puVar8 + 0x28) = 0;
    *(undefined8 *)((long)puVar8 + 0x20) = 0;
    *(undefined8 *)((long)puVar8 + 0x18) = 0;
    *(undefined8 *)((long)puVar8 + 0x10) = 0;
    *(undefined8 *)((long)puVar8 + 8) = 0;
    *(undefined8 *)((long)puVar8 + 0x70) = 0;
    *(undefined8 *)((long)puVar8 + 0x68) = 0;
    *(undefined8 *)((long)puVar8 + 0x80) = 0x4018000000000000;
    *(undefined8 *)((long)puVar8 + 0x78) = 0;
    *(undefined8 *)((long)puVar8 + 0x90) = 0x4030000000000000;
    *(undefined8 *)((long)puVar8 + 0x88) = 0x4020000000000000;
    *(undefined8 *)((long)puVar8 + 0xa0) = 0x4020000000000000;
    *(undefined8 *)((long)puVar8 + 0x98) = 0x4020000000000000;
    *(undefined8 *)((long)puVar8 + 0xc0) = 0x4030000000000000;
    *(undefined8 *)((long)puVar8 + 0xb8) = 0x4020000000000000;
    *(undefined8 *)((long)puVar8 + 0xb0) = 0x4020000000000000;
    *(undefined8 *)((long)puVar8 + 0xa8) = 0x4020000000000000;
    *(undefined8 *)((long)puVar8 + 0xe0) = 0x4020000000000000;
    *(undefined8 *)((long)puVar8 + 0xd8) = 0x4020000000000000;
    *(undefined8 *)((long)puVar8 + 0xd0) = 0x4020000000000000;
    *(undefined8 *)((long)puVar8 + 200) = 0x4020000000000000;
  }
  return;
}



/* Entry: 10b848854; end: 10b8488f7; -[SIGXCellRootLayoutStrategy init] */

void FUN_10b848854(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270b488;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x60) = 0;
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x70) = 0;
    *(undefined8 *)((long)puVar1 + 0x68) = 0;
    *(undefined8 *)((long)puVar1 + 0x80) = 0x4018000000000000;
    *(undefined8 *)((long)puVar1 + 0x78) = 0;
    *(undefined8 *)((long)puVar1 + 0x90) = 0x4030000000000000;
    *(undefined8 *)((long)puVar1 + 0x88) = 0x4020000000000000;
    *(undefined8 *)((long)puVar1 + 0xa0) = 0x4020000000000000;
    *(undefined8 *)((long)puVar1 + 0x98) = 0x4020000000000000;
    *(undefined8 *)((long)puVar1 + 0xc0) = 0x4030000000000000;
    *(undefined8 *)((long)puVar1 + 0xb8) = 0x4020000000000000;
    *(undefined8 *)((long)puVar1 + 0xb0) = 0x4020000000000000;
    *(undefined8 *)((long)puVar1 + 0xa8) = 0x4020000000000000;
    *(undefined8 *)((long)puVar1 + 0xe0) = 0x4020000000000000;
    *(undefined8 *)((long)puVar1 + 0xd8) = 0x4020000000000000;
    *(undefined8 *)((long)puVar1 + 0xd0) = 0x4020000000000000;
    *(undefined8 *)((long)puVar1 + 200) = 0x4020000000000000;
  }
  return;
}



/* Entry: 10b8488f8; end: 10b8489b7; -[SIGXCellRootLayoutStrategy minSlotInsetsForSlotType:] */

undefined8 FUN_10b8488f8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_4 < 4) {
    if (param_4 < 2) {
      if (param_4 == 0) {
        param_1 = *(undefined8 *)(param_2 + 8);
      }
      else if (param_4 == 1) {
        param_1 = *(undefined8 *)(param_2 + 0x28);
      }
    }
    else if (param_4 == 2) {
      param_1 = *(undefined8 *)(param_2 + 0x48);
    }
    else if (param_4 == 3) {
      param_1 = *(undefined8 *)(param_2 + 0x88);
    }
  }
  else if (param_4 < 6) {
    if (param_4 == 4) {
      param_1 = *(undefined8 *)(param_2 + 0xa8);
    }
    else if (param_4 == 5) {
      param_1 = *(undefined8 *)(param_2 + 200);
    }
  }
  else if (param_4 == 6) {
    param_1 = *(undefined8 *)(param_2 + 0x68);
  }
  else if (param_4 == 7) {
    param_1 = *(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_1103457d8;
  }
  return param_1;
}



/* Entry: 10b8489b8; end: 10b8489c3; -[SIGXCellRootLayoutStrategy supportedSlots] */

undefined * FUN_10b8489b8(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 10b8489c4; end: 10b8489df; -[SIGXCellRootLayoutStrategy createConstraintsBySlotWithCellContentView:textSlotsLayoutGuide:primaryTextSlot:secondaryTextSlot:tertiaryTextSlot:leadingAccessorySlot:trailingAccessorySlot:secondaryTrailingAccessorySlot:secondaryTitleAccessorySlot:] */

void FUN_10b8489c4(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8489e0; end: 10b848a57; -[SIGXCellRootLayoutStrategy mergeWidthHeightOverrideConstraintsWithExistingConstraints:cellContentView:primaryTextSlot:secondaryTextSlot:tertiaryTextSlot:leadingAccessorySlot:trailingAccessorySlot:secondaryTrailingAccessorySlot:secondaryTitleAccessorySlot:] */

void FUN_10b8489e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  _objc_retain(param_3);
  func_0x00010be9cac0(param_1,param_2,in_stack_00000008,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cac80(PTR_PTR_1126e1740,param_2,5,param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b848a58; end: 10b848b97; +[SIGXCellRootLayoutStrategy mergeOverrideValuesForSlotType:existingConstraintsBySlot:overrideConstraints:] */

void FUN_10b848a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_5);
  func_0x00010c0df840(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c1d0640(param_4,param_2,param_5,puVar1);
  }
  else {
    puVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010befa160(puVar3,param_2,param_5);
    _objc_release(param_5);
    param_5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4,param_2,puVar3,param_5);
    puVar1 = puVar3;
  }
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b848b98; end: 10b848c73; -[SIGXCellRootLayoutStrategy _secondaryTrailingAccessorySlotConstraintsWithSlot:cellContentView:] */

void FUN_10b848b98(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_opt_new(puVar1);
    lVar2 = param_3;
    func_0x00010c2a5060(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar3 = param_4;
    func_0x00010c2a5060(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    lVar4 = lVar2;
    func_0x00010bf49540(0x3fd3333333333333,lVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar2);
    func_0x00010befa120(puVar1,param_2,lVar4);
    _objc_release(lVar4);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b848c74; end: 10b848c7f; -[SIGXCellRootLayoutStrategy primaryTextSlotInsets] */

undefined8 FUN_10b848c74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b848c80; end: 10b848c8b; -[SIGXCellRootLayoutStrategy setPrimaryTextSlotInsets:] */

void FUN_10b848c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 8) = param_1;
  *(undefined8 *)(param_5 + 0x10) = param_2;
  *(undefined8 *)(param_5 + 0x18) = param_3;
  *(undefined8 *)(param_5 + 0x20) = param_4;
  return;
}



/* Entry: 10b848c8c; end: 10b848c97; -[SIGXCellRootLayoutStrategy secondaryTextSlotInsets] */

undefined8 FUN_10b848c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b848c98; end: 10b848ca3; -[SIGXCellRootLayoutStrategy setSecondaryTextSlotInsets:] */

void FUN_10b848c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x28) = param_1;
  *(undefined8 *)(param_5 + 0x30) = param_2;
  *(undefined8 *)(param_5 + 0x38) = param_3;
  *(undefined8 *)(param_5 + 0x40) = param_4;
  return;
}



/* Entry: 10b848ca4; end: 10b848caf; -[SIGXCellRootLayoutStrategy tertiaryTextSlotInsets] */

undefined8 FUN_10b848ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b848cb0; end: 10b848cbb; -[SIGXCellRootLayoutStrategy setTertiaryTextSlotInsets:] */

void FUN_10b848cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x48) = param_1;
  *(undefined8 *)(param_5 + 0x50) = param_2;
  *(undefined8 *)(param_5 + 0x58) = param_3;
  *(undefined8 *)(param_5 + 0x60) = param_4;
  return;
}



/* Entry: 10b848cbc; end: 10b848cc7; -[SIGXCellRootLayoutStrategy secondaryTitleAccessorySlotInsets] */

undefined8 FUN_10b848cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b848cc8; end: 10b848cd3; -[SIGXCellRootLayoutStrategy setSecondaryTitleAccessorySlotInsets:] */

void FUN_10b848cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x68) = param_1;
  *(undefined8 *)(param_5 + 0x70) = param_2;
  *(undefined8 *)(param_5 + 0x78) = param_3;
  *(undefined8 *)(param_5 + 0x80) = param_4;
  return;
}



/* Entry: 10b848cd4; end: 10b848cdf; -[SIGXCellRootLayoutStrategy leadingAccessorySlotInsets] */

undefined8 FUN_10b848cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b848ce0; end: 10b848ceb; -[SIGXCellRootLayoutStrategy setLeadingAccessorySlotInsets:] */

void FUN_10b848ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x88) = param_1;
  *(undefined8 *)(param_5 + 0x90) = param_2;
  *(undefined8 *)(param_5 + 0x98) = param_3;
  *(undefined8 *)(param_5 + 0xa0) = param_4;
  return;
}



/* Entry: 10b848cec; end: 10b848cf7; -[SIGXCellRootLayoutStrategy trailingAccessorySlotInsets] */

undefined8 FUN_10b848cec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b848cf8; end: 10b848d03; -[SIGXCellRootLayoutStrategy setTrailingAccessorySlotInsets:] */

void FUN_10b848cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0xa8) = param_1;
  *(undefined8 *)(param_5 + 0xb0) = param_2;
  *(undefined8 *)(param_5 + 0xb8) = param_3;
  *(undefined8 *)(param_5 + 0xc0) = param_4;
  return;
}



/* Entry: 10b848d04; end: 10b848d0f; -[SIGXCellRootLayoutStrategy secondaryTrailingAccessorySlotInsets] */

undefined8 FUN_10b848d04(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10b848d10; end: 10b848d2f; -[SIGXCellRootLayoutStrategy setSecondaryTrailingAccessorySlotInsets:] */

void FUN_10b848d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 200) = param_1;
  *(undefined8 *)(param_5 + 0xd0) = param_2;
  *(undefined8 *)(param_5 + 0xd8) = param_3;
  *(undefined8 *)(param_5 + 0xe0) = param_4;
  return;
}



/* Entry: 10b848d30; end: 10b848fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b848d30(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c219b60(param_5,param_6,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = param_5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar17;
  func_0x00010bf493c0(param_1,lVar17,param_6,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  lStack_a8 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf493c0(-param_3,lVar5,param_6,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5;
  lStack_a0 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010bf493c0(param_2,lVar9,param_6,lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_5;
  lStack_98 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bf493c0(-param_4,lVar13,param_6,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = lVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_6,puVar16);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(param_5);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar17 + _DAT_1127947f0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c08d0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar17 = *(long *)(lVar17 + _DAT_1127947f4);
    func_0x00010c269d40(lVar17);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar3);
    lVar17 = lVar3;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar17);
  return;
}



/* Entry: 10b848ff0; end: 10b84907b; -[SIGXCell layoutStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b848ff0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_1127947f0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c08d0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_1127947f4);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b84907c; end: 10b849193; -[SIGXCell initWithFrame:layoutStrategyProvider:slotsProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b84907c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_11270b490;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127947f0),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127947f8),param_8);
    func_0x00010bea96e0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127947fc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127947fc) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9680(puVar1);
    func_0x00010bde65e0(puVar1);
    func_0x00010be78820(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b849194; end: 10b8491fb; -[SIGXCell _setUpMinimumTappableHeight] */

void FUN_10b849194(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf494e0(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1e3380(0x4479c000,uVar1);
  func_0x00010c162480(uVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8491fc; end: 10b8495af; -[SIGXCell _constrainTextSlotsLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8491fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar11 = (long)_DAT_1127947fc;
  lVar1 = *(long *)(param_1 + lVar11);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  lStack_c8 = lVar1;
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar2;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  lStack_d8 = lVar1;
  lStack_b8 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  uStack_e8 = uVar3;
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_f0 = uVar2;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_f8 = uVar3;
  uStack_b0 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  uStack_108 = uVar4;
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  uStack_100 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = uVar2;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  uStack_120 = uVar4;
  uStack_a8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  uStack_130 = uVar3;
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uVar2;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  uStack_140 = uVar3;
  uStack_a0 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c14d8a0(0x437a0000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  uStack_98 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c14d8a0(0x437a0000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  uStack_90 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_110);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_120);
  _objc_release(uStack_118);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(lStack_d8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c0);
  lVar1 = lStack_c8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10b8495b0;
  puStack_168 = PTR_PTR_11270b490;
  lStack_170 = lVar1;
  uStack_160 = uVar4;
  uStack_158 = uVar6;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_170,PTR_s_layoutSubviews_112600e60);
  lVar11 = (long)_DAT_1127947ec;
  if ((*(byte *)(lVar1 + lVar11) & 1) == 0) {
    func_0x00010c25eaa0(lVar1);
    *(undefined1 *)(lVar1 + lVar11) = 1;
  }
  return;
}



/* Entry: 10b8495b0; end: 10b84960f; -[SIGXCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8495b0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b490;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_1127947ec;
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    func_0x00010c25eaa0(param_1);
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  return;
}


