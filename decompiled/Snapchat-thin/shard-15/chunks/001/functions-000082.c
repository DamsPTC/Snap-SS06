/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b828260; end: 10b8282bf; -[SIGActionSheetSectionHeader _handleHeaderActionLabelTap] */

void FUN_10b828260(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0e4780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0e4780();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b8282c0; end: 10b8282fb; -[SIGActionSheetSectionHeader intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b8282c0(long param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_1127944cc);
  func_0x00010c074c20();
  uVar3 = 0x4044000000000000;
  if (iVar2 == 0) {
    uVar3 = 0x4054000000000000;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  return auVar1 << 0x40;
}



/* Entry: 10b8282fc; end: 10b82842b; -[SIGActionSheetSectionHeader setHeaderDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8282fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127944e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar3 = param_3;
  func_0x00010c08fa60();
  lVar2 = (long)_DAT_1127944cc;
  if (lVar3 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + _DAT_1127944dc));
    func_0x00010c181140(0,*(undefined8 *)(param_1 + _DAT_1127944d4));
    func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_1127944d8),param_2,1);
    uVar1 = 0x17;
  }
  else {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar2),param_2,1);
    func_0x00010c181140(0x4028000000000000,*(undefined8 *)(param_1 + _DAT_1127944d4));
    func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_1127944d8),param_2,0);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + _DAT_1127944dc));
    uVar1 = 0x18;
  }
  func_0x00010c21ad00(*(undefined8 *)(param_1 + _DAT_1127944c8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b82842c; end: 10b82843b; -[SIGActionSheetSectionHeader title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82842c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127944c8),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b82843c; end: 10b82844b; -[SIGActionSheetSectionHeader attributedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82843c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127944c8),PTR_s_attributedText_1125a12f8);
  return;
}



/* Entry: 10b82844c; end: 10b8284c7; -[SIGActionSheetSectionHeader setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82844c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127944c8;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8284c8; end: 10b82856f; -[SIGActionSheetSectionHeader setAttributedText:typeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8284c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127944c8;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010c27dfe0();
    _objc_release(uVar1);
    if (lVar3 != param_4) {
      func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4),param_2,param_4);
      func_0x00010c16b720(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
    }
  }
  else {
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b828570; end: 10b82857f; -[SIGActionSheetSectionHeader headerDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b828570(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127944e0);
}



/* Entry: 10b828580; end: 10b82858f; -[SIGActionSheetSectionHeader onHeaderActionLabelTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b828580(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127944e4);
}



/* Entry: 10b828590; end: 10b82859b; -[SIGActionSheetSectionHeader setOnHeaderActionLabelTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b828590(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b82859c; end: 10b82863b; -[SIGActionSheetSectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82859c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127944e4,0);
  _objc_storeStrong(param_1 + _DAT_1127944e0,0);
  _objc_storeStrong(param_1 + _DAT_1127944dc,0);
  _objc_storeStrong(param_1 + _DAT_1127944d8,0);
  _objc_storeStrong(param_1 + _DAT_1127944d4,0);
  _objc_storeStrong(param_1 + _DAT_1127944d0,0);
  _objc_storeStrong(param_1 + _DAT_1127944cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127944c8,0);
  return;
}



/* Entry: 10b82863c; end: 10b8286c7;  */

void FUN_10b82863c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b27f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c040200();
  func_0x00010c161de0(param_3,param_2,puVar1);
  _objc_release(param_3);
  func_0x00010c10eda0(param_1,param_2,puVar1,1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b8286c8; end: 10b82877f; +[SIGActionSheetCell optionCellWithText:isCompressed:] */

void FUN_10b8286c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5740();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b10a0;
  _objc_alloc(PTR_PTR_1126b10a0);
  func_0x00010c04ea80();
  func_0x00010c165ea0();
  func_0x00010c216540(puVar1,param_2,param_3);
  func_0x00010c213780(puVar1,param_2,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b828780; end: 10b828787; +[SIGActionSheetCell optionCellWithText:] */

void FUN_10b828780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_optionCellWithText_isCompressed__112618ac0,param_3,0);
  return;
}



/* Entry: 10b828788; end: 10b82881f; +[SIGActionSheetCell optionCellWithText:icon:] */

void FUN_10b828788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  func_0x00010c0ec240(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(0,0,0x4038000000000000,0x4038000000000000);
  func_0x00010c1a9f00();
  _objc_release(param_4);
  func_0x00010c1b9fe0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b828820; end: 10b8288b7; +[SIGActionSheetCell optionCellWithText:trailingIcon:] */

void FUN_10b828820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  func_0x00010c0ec240(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(0,0,0x4038000000000000,0x4038000000000000);
  func_0x00010c1a9f00();
  _objc_release(param_4);
  func_0x00010c2194c0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b8288b8; end: 10b82896f; +[SIGActionSheetCell optionCellWithText:icon:width:height:isDestructive:] */

void FUN_10b8288b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_6);
  func_0x00010c0ec240(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(0,0,param_1,param_2);
  func_0x00010c1a9f00();
  _objc_release(param_6);
  func_0x00010c1b9fe0(param_3,param_4,puVar1);
  func_0x00010c18c540(param_3,param_4,param_7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b828970; end: 10b8289a3; +[SIGActionSheetCell destructiveOptionCellWithText:] */

void FUN_10b828970(undefined8 param_1)

{
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b8289a4; end: 10b8289d7; +[SIGActionSheetCell destructiveOptionCellWithText:icon:] */

void FUN_10b8289a4(undefined8 param_1)

{
  func_0x00010c0ec260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b8289d8; end: 10b828a87; +[SIGActionSheetCell errorCellWithText:] */

void FUN_10b8289d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b10a0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04ea80();
  func_0x00010c216540();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c17a880(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b828a88; end: 10b828adb; +[SIGActionSheetCell tallCellWithText:] */

void FUN_10b828a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b10a0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04ea80();
  func_0x00010c216540();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b828adc; end: 10b828ae3; +[SIGActionSheetCell loadingCell] */

void FUN_10b828adc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09cc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadingCellWithStyle__112604d30,6);
  return;
}



/* Entry: 10b828ae4; end: 10b828b1f; +[SIGActionSheetCell loadingCellWithStyle:] */

void FUN_10b828ae4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b10a0;
  _objc_alloc(PTR_PTR_1126b10a0);
  func_0x00010c04ea80();
  func_0x00010bdef860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b828b20; end: 10b828b7f; +[SIGActionSheetCell valueCellWithText:value:] */

void FUN_10b828b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c0ec240(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b828b80; end: 10b828bdf; +[SIGActionSheetCell descriptionCellWithText:description:] */

void FUN_10b828b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c0ec240(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b828be0; end: 10b828c13; +[SIGActionSheetCell moreOptionsCellWithText:compressed:] */

void FUN_10b828be0(undefined8 param_1)

{
  func_0x00010c0ec2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b828c14; end: 10b828c1b; +[SIGActionSheetCell moreOptionsCellWithText:] */

void FUN_10b828c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d0f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_moreOptionsCellWithText_compress_112611de8,param_3,0);
  return;
}



/* Entry: 10b828c1c; end: 10b828c63; +[SIGActionSheetCell selectCellWithText:value:compressed:] */

void FUN_10b828c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0ec2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161a60();
  func_0x00010c1fadc0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b828c64; end: 10b828c6b; +[SIGActionSheetCell selectCellWithText:value:] */

void FUN_10b828c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_selectCellWithText_value_compres_112633c60,param_3,param_4,0);
  return;
}



/* Entry: 10b828c6c; end: 10b828e87; +[SIGActionSheetCell switchCellWithText:value:compressed:] */

void FUN_10b828c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  double dStack_60;
  undefined8 uStack_58;
  
  func_0x00010c0ec2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc(PTR__OBJC_CLASS___UISwitch_1126b0680);
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(uVar3,uVar5,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c0699c0();
  func_0x00010c0699c0(puVar1);
  dVar6 = 0.0;
  func_0x00010c19f0e0(0,0,uVar3,uVar5,puVar1);
  func_0x00010c0699c0(puVar1);
  dVar4 = 22.0;
  dVar7 = 22.0 / dVar6;
  func_0x00010c0699c0(puVar1);
  func_0x00010c0699c0(puVar1);
  _CGAffineTransformMakeTranslation(&uStack_80,dVar4 * -0.5,dVar6 * -0.5);
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  dStack_d0 = dStack_70;
  uStack_b8 = uStack_58;
  dStack_c0 = dStack_60;
  _CGAffineTransformScale(&uStack_b0,dVar7,dVar7,&uStack_e0);
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  dStack_70 = dStack_a0;
  uStack_58 = uStack_88;
  dStack_60 = dStack_90;
  dVar4 = dStack_90;
  dVar6 = dStack_a0;
  func_0x00010c0699c0(puVar1);
  func_0x00010c0699c0(puVar1);
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  dStack_d0 = dStack_70;
  uStack_b8 = uStack_58;
  dStack_c0 = dStack_60;
  _CGAffineTransformTranslate(&uStack_b0,dVar4 * 0.5,dVar6 * 0.5,&uStack_e0);
  uStack_68 = uStack_98;
  dStack_70 = dStack_a0;
  uStack_58 = uStack_88;
  dStack_60 = dStack_90;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  func_0x00010c219960(puVar1,param_2,&uStack_b0);
  func_0x00010c21e900(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x3a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c211780();
  func_0x00010c0699c0(puVar1);
  func_0x00010c0699c0(puVar1);
  func_0x00010c19f0e0(0,0,dVar7 * dStack_90,dVar7 * dStack_a0,puVar2);
  func_0x00010befbb60(puVar2,param_2,puVar1);
  func_0x00010c2194c0(param_1,param_2,puVar2);
  func_0x00010c1fadc0(param_1,param_2,param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b828e88; end: 10b828e8f; +[SIGActionSheetCell switchCellWithText:value:] */

void FUN_10b828e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c265610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_switchCellWithText_value_compres_112676fa8,param_3,param_4,0);
  return;
}



/* Entry: 10b828e90; end: 10b828f07; +[SIGActionSheetCell switchCellWithText:value:description:compressed:] */

void FUN_10b828e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  func_0x00010c265600(param_1,param_2,param_3,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b828f08; end: 10b828f0f; +[SIGActionSheetCell switchCellWithText:value:description:] */

void FUN_10b828f08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c265650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_switchCellWithText_value_descrip_112676fb8);
  return;
}



/* Entry: 10b828f10; end: 10b829033; +[SIGActionSheetCell sendToCellWithText:isCompressed:] */

void FUN_10b828f10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010c0ec2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15d2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c182220(puVar4,param_2,1);
  puVar5 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(puVar5);
  func_0x00010c19f0e0(0,0,0x4040000000000000,0x4040000000000000,puVar4);
  func_0x00010c2194c0(param_1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b829034; end: 10b82903b; +[SIGActionSheetCell sendToCellWithText:] */

void FUN_10b829034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15cfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_sendToCellWithText_isCompressed__112634e10,param_3,0);
  return;
}



/* Entry: 10b82903c; end: 10b8290a7; +[SIGActionSheetCell footerCellWithText:] */

void FUN_10b82903c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b10a0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04ea80();
  func_0x00010c216540();
  _objc_release(param_3);
  func_0x00010c17a880(puVar1,param_2,1);
  func_0x00010c213780(puVar1,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b8290a8; end: 10b82915f; +[SIGActionSheetCell cardWithImage:titleText:] */

void FUN_10b8290a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b10a0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04ea80();
  puVar2 = PTR_PTR_1126e1688;
  _objc_alloc(PTR_PTR_1126e1688);
  func_0x00010c013de0(0,0,0x404a000000000000,0x404a000000000000);
  func_0x00010c16daa0();
  _objc_release(param_3);
  func_0x00010c1b9fe0(puVar1,param_2,puVar2);
  func_0x00010c216540(puVar1,param_2,param_4);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b829160; end: 10b8291db; +[SIGActionSheetCell cardWithTitleText:detailText:] */

void FUN_10b829160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b10a0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04ea80();
  func_0x00010c216540();
  _objc_release(param_3);
  func_0x00010c18c5c0(puVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b8291dc; end: 10b829347; -[SIGActionSheetCell initWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b8291dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b388;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithStyle__1125f14a8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c193400(0,0x4030000000000000,0,0x4030000000000000,puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126e1650;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127944ec);
    *(undefined **)((long)puVar1 + (long)_DAT_1127944ec) = puVar2;
    _objc_release(uVar4);
    if (param_3 != 6) {
      func_0x00010c21e900(puVar1);
      puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x00010c050900();
      func_0x00010bef9040(puVar1);
      puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
      _objc_alloc();
      func_0x00010c050900();
      lVar5 = (long)_DAT_1127944f0;
      uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
      *(undefined **)((long)puVar1 + lVar5) = puVar3;
      _objc_release(uVar4);
      func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
      func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar5));
      func_0x00010c1c8340(0,*(undefined8 *)((long)puVar1 + lVar5));
      func_0x00010bef9040(puVar1);
      _objc_release(puVar2);
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b829348; end: 10b8293bf; -[SIGActionSheetCell block:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b829348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010be5d140(param_1);
  uVar1 = param_3;
  _objc_retainBlock();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127944f4);
  *(undefined8 *)(param_1 + _DAT_1127944f4) = uVar1;
  _objc_release(uVar2);
  func_0x00010bdc88e0(param_1,param_2,param_1,PTR_s__possiblyInvokeActionBlock_1125480f0);
  return param_1;
}



/* Entry: 10b8293c0; end: 10b82942b; -[SIGActionSheetCell target:action:] */

undefined8
FUN_10b8293c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010be5d140(param_1);
  func_0x00010bdc88e0(param_1,param_2,param_1,PTR_s__assertValidActionSheet_112551760);
  func_0x00010bdc88e0(param_1,param_2,param_3,param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b82942c; end: 10b82943f; -[SIGActionSheetCell _markActionSpecifiedOrAssert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82942c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127944e8) = 1;
  return;
}



/* Entry: 10b829440; end: 10b829443; -[SIGActionSheetCell _assertValidActionSheet] */

void FUN_10b829440(void)

{
  return;
}



/* Entry: 10b829444; end: 10b8294a7; -[SIGActionSheetCell _possiblyInvokeActionBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b829444(long param_1)

{
  long lVar1;
  
  func_0x00010bdcf700();
  lVar1 = *(long *)(param_1 + _DAT_1127944f4);
  if (lVar1 != 0) {
    param_1 = param_1 + _DAT_1127944f8;
    _objc_loadWeakRetained(param_1);
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b8294a8; end: 10b8294db; -[SIGActionSheetCell _onLongPress:] */

void FUN_10b8294a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c252440(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHighlighted__112647c38,param_3 - 1U < 2);
  return;
}



/* Entry: 10b8294dc; end: 10b829687; -[SIGActionSheetCell _createLoadingIndicatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8294dc(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined *unaff_x22;
  ulong uVar7;
  ulong unaff_x23;
  long lVar8;
  long unaff_x25;
  undefined *unaff_x26;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_1127944fc;
  uVar7 = param_1;
  uStack_88 = unaff_x19;
  if (*(long *)(param_1 + lVar8) == 0) {
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar6);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8));
    func_0x00010befbb60(param_1);
    unaff_x22 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x20 = *(ulong *)(param_1 + lVar8);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_1 + lVar8);
    uStack_68 = unaff_x23;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = lVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = unaff_x25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(unaff_x22);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(param_1);
    _objc_release(lVar8);
    _objc_release(unaff_x23);
    _objc_release(unaff_x21);
    uVar7 = unaff_x20;
    _objc_release();
    uStack_88 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b829688;
  puStack_c8 = PTR_PTR_11270b388;
  uStack_d0 = uVar7;
  puStack_c0 = unaff_x26;
  lStack_b8 = unaff_x25;
  lStack_b0 = lVar8;
  uStack_a8 = unaff_x23;
  puStack_a0 = unaff_x22;
  uStack_98 = unaff_x21;
  uStack_90 = unaff_x20;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_d0,PTR_s_setSelected_animated__11265c5a0);
  uVar2 = uVar7;
  func_0x00010c2792c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c268120();
  if (uVar3 == 1) {
    uVar3 = uVar7;
    func_0x00010c2792c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar5 != 1) {
      uVar7 = 0;
      goto LAB_10b8297c0;
    }
    func_0x00010c2792c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar7);
    puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_opt_class(PTR__OBJC_CLASS___UISwitch_1126b0680);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    uVar7 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
  }
  else {
    uVar7 = 0;
  }
  _objc_release(uVar2);
LAB_10b8297c0:
  func_0x00010c1d1380(uVar7);
  _objc_release(uVar7);
  return;
}



/* Entry: 10b829688; end: 10b8297f3; -[SIGActionSheetCell setSelected:animated:] */

void FUN_10b829688(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_11270b388;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_setSelected_animated__11265c5a0);
  uVar1 = param_1;
  func_0x00010c2792c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c268120();
  if (uVar5 == 1) {
    uVar5 = param_1;
    func_0x00010c2792c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar1);
    if (uVar3 != 1) {
      uVar5 = 0;
      goto LAB_10b8297c0;
    }
    func_0x00010c2792c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(param_1);
    puVar4 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_opt_class(PTR__OBJC_CLASS___UISwitch_1126b0680);
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar4);
    uVar5 = uVar1;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(uVar1);
LAB_10b8297c0:
  func_0x00010c1d1380(uVar5);
  _objc_release(uVar5);
  return;
}



/* Entry: 10b8297f4; end: 10b829963; -[SIGActionSheetCell setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8297f4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_11270b388;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_setEnabled__112642f38);
  uVar1 = param_1;
  func_0x00010c2792c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c268120();
  if (uVar5 == 1) {
    uVar5 = param_1;
    func_0x00010c2792c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar1);
    if (uVar3 != 1) {
      uVar5 = 0;
      goto LAB_10b829924;
    }
    uVar5 = param_1;
    func_0x00010c2792c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_opt_class(PTR__OBJC_CLASS___UISwitch_1126b0680);
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar4);
    uVar5 = uVar1;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(uVar1);
LAB_10b829924:
  func_0x00010c195460(uVar5);
  func_0x00010c195460(*(undefined8 *)(param_1 + (long)_DAT_1127944f0));
  _objc_release(uVar5);
  return;
}



/* Entry: 10b829964; end: 10b829973; -[SIGActionSheetCell _addTarget:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b829964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127944ec),PTR_s_addTarget_action__11259c8f8);
  return;
}



/* Entry: 10b829974; end: 10b8299b3; -[SIGActionSheetCell _sendActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b829974(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c071800();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c15b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127944ec),PTR_s_sendActionsWithSender__112634758,
               param_1);
    return;
  }
  return;
}



/* Entry: 10b8299b4; end: 10b829a37; -[SIGActionSheetCell didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8299b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b388;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToWindow_112527020);
  lVar2 = (long)_DAT_1127944fc;
  if (*(long *)(param_1 + lVar2) != 0) {
    lVar1 = param_1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar2));
    }
    else {
      func_0x00010c24dbc0();
    }
  }
  return;
}



/* Entry: 10b829a38; end: 10b829a4f; -[SIGActionSheetCell gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b829a38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_1 + _DAT_1127944f0));
  return;
}



/* Entry: 10b829a50; end: 10b829a6f; -[SIGActionSheetCell actionSheet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b829a50(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127944f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b829a70; end: 10b829a83; -[SIGActionSheetCell setActionSheet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b829a70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127944f8,param_3);
  return;
}



/* Entry: 10b829a84; end: 10b829a93; -[SIGActionSheetCell action] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b829a84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127944f4);
}



/* Entry: 10b829a94; end: 10b829a9f; -[SIGActionSheetCell setAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b829a94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b829aa0; end: 10b829b0b; -[SIGActionSheetCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b829aa0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127944f4,0);
  _objc_destroyWeak(param_1 + _DAT_1127944f8);
  _objc_storeStrong(param_1 + _DAT_1127944fc,0);
  _objc_storeStrong(param_1 + _DAT_1127944f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127944ec,0);
  return;
}



/* Entry: 10b829b0c; end: 10b829bf7; -[SIGActionSheetNavigationController initWithRootActionSheet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b829b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b390;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1931e0(puVar1);
    func_0x00010c1c8b80(puVar1);
    puVar2 = PTR_PTR_1126e1570;
    _objc_alloc_init();
    lVar4 = (long)_DAT_112794500;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b20(puVar1);
    lVar4 = (long)_DAT_112794504;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b829bf8; end: 10b829c73; -[SIGActionSheetNavigationController presentedActionSheet] */

void FUN_10b829bf8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bf38f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b829c74; end: 10b829fef; -[SIGActionSheetNavigationController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b829c74(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_11270b390;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar21 = (long)_DAT_112794508;
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar2;
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c08c0e0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3ecccccd);
  _objc_release(uVar19);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar21));
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar21);
  uStack_88 = uVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar21);
  uStack_80 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar21);
  uStack_78 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar21);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar19);
  _objc_release(lVar20);
  _objc_release(lVar3);
  _objc_release(uVar4);
  uVar19 = *(undefined8 *)(param_1 + _DAT_112794504);
  func_0x00010c11bfc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar19);
  lVar3 = param_1;
  func_0x00010c10f840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161de0(uVar19);
  func_0x00010bef7700(param_1);
  func_0x00010bf18d80(param_1);
  lVar20 = (long)_DAT_112794504;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar20);
  func_0x00010c071ae0();
  if (iVar1 == 0) {
    func_0x00010bee36c0(0,param_1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_retain(lVar3);
    _objc_retain(uVar19);
    _objc_retain(lVar3);
    _objc_retain(uVar19);
    func_0x00010bf03420(0x3fc999999999999a,puVar2);
    func_0x00010beb0420(param_1);
    _objc_release(uVar19);
    _objc_release(lVar3);
    _objc_release(uVar19);
    _objc_release(lVar3);
  }
  else {
    func_0x00010bf43c20(param_1);
    uVar17 = *(ulong *)(param_1 + lVar20);
    func_0x00010bf1eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c07d3e0();
    _objc_release(uVar17);
    if ((uVar18 & 1) == 0) {
      func_0x00010beac160(param_1);
    }
  }
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  uVar8 = uVar19;
  func_0x00010bf14800(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(uVar19);
  return;
}



/* Entry: 10b829ff0; end: 10b82a21b; -[SIGActionSheetNavigationController pushActionSheet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b829ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c10f840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161de0(param_3,param_2,param_1);
  func_0x00010bef7700(param_1,param_2,param_3);
  func_0x00010bf18d80(param_1,param_2,lVar2,param_3,1);
  lVar7 = (long)_DAT_112794504;
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c071ae0(uVar3,param_2,param_3);
  if ((int)uVar3 == 0) {
    func_0x00010bee36c0(0,param_1,param_2,lVar2,param_3,0);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b82a21c;
    puStack_70 = &UNK_110848ba8;
    lStack_68 = param_1;
    _objc_retain(lVar2);
    lStack_60 = lVar2;
    _objc_retain(param_3);
    puStack_c0 = puVar6;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x10b82a234;
    puStack_a8 = &UNK_1108500c8;
    lStack_a0 = param_1;
    uStack_58 = param_3;
    _objc_retain(lVar2);
    lStack_98 = lVar2;
    _objc_retain(param_3);
    uStack_90 = param_3;
    func_0x00010bf03420(0x3fc999999999999a,puVar1,param_2,&puStack_88,&puStack_c0);
    func_0x00010beb0420(param_1,param_2,param_3);
    _objc_release(uStack_90);
    _objc_release(lStack_98);
    _objc_release(uStack_58);
    _objc_release(lStack_60);
  }
  else {
    func_0x00010bf43c20(param_1,param_2,lVar2,param_3,1);
    uVar4 = *(ulong *)(param_1 + lVar7);
    func_0x00010bf1eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c07d3e0();
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) {
      func_0x00010beac160(param_1,param_2,param_3);
    }
  }
  puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  uVar3 = param_3;
  func_0x00010bf14800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10b82a21c; end: 10b82a247;  */

void FUN_10b82a21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),
             PTR_s__updateViewForTransitionFromActi_112596758,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 10b82a248; end: 10b82a24f; -[SIGActionSheetNavigationController popActionSheet] */

void FUN_10b82a248(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c103830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_popActionSheetWithCompletion__11261e828,0);
  return;
}



/* Entry: 10b82a250; end: 10b82a427; -[SIGActionSheetNavigationController popActionSheetWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82a250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010c10f840();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c071ae0();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    uVar3 = param_1;
    func_0x00010c10f840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bdc46e0(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18d80(param_1,param_2,uVar3,uVar4,0);
    func_0x00010c12c8e0(uVar3);
    func_0x00010bee36c0(0,param_1,param_2,uVar3,uVar4,1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b82a428;
    puStack_70 = &UNK_110848ba8;
    uStack_68 = param_1;
    _objc_retain(uVar3);
    uStack_60 = uVar3;
    _objc_retain(uVar4);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10b82a440;
    puStack_b0 = &UNK_1108843d8;
    uStack_a8 = param_1;
    uStack_a0 = uVar3;
    uStack_98 = uVar4;
    uStack_58 = uVar4;
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_retain(uVar4);
    _objc_retain(uVar3);
    func_0x00010bf03420(0x3fc999999999999a,puVar2,param_2,&puStack_88,&puStack_c8);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    func_0x00010bf84b00(param_1,param_2,1,param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b82a428; end: 10b82a43f;  */

void FUN_10b82a428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),
             PTR_s__updateViewForTransitionFromActi_112596758,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),1);
  return;
}



/* Entry: 10b82a440; end: 10b82a483;  */

void FUN_10b82a440(long param_1,undefined8 param_2)

{
  func_0x00010bf43c20(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),0);
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b82a474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b82a484; end: 10b82a753; -[SIGActionSheetNavigationController _updateViewForTransitionFromActionSheet:toActionSheet:isBackwardsNavigation:progress:] */

void FUN_10b82a484(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  float fVar7;
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
  undefined8 uStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c29bf00(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar6 = param_3;
  _objc_release(uVar1);
  dVar5 = param_1 * param_3;
  if (param_8 == 0) {
    dVar5 = -(param_1 * param_3);
  }
  _CGAffineTransformMakeTranslation(&uStack_a0,dVar5,0);
  uVar1 = param_6;
  func_0x00010bf1eb40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  func_0x00010c219960();
  uVar2 = param_6;
  func_0x00010bfdef60(param_6);
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  func_0x00010c219960();
  _objc_release(uVar2);
  _objc_release(uVar1);
  fVar7 = (float)(1.0 - param_1);
  uVar1 = param_6;
  func_0x00010bf1eb40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar7);
  uVar3 = param_6;
  func_0x00010bfdef60(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar4 = uVar3;
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar5 = -dVar6;
  if (param_8 == 0) {
    dVar5 = dVar6;
  }
  _CGAffineTransformMakeTranslation(&uStack_100,(1.0 - param_1) * dVar5,0);
  uVar1 = param_7;
  func_0x00010bf1eb40(param_7);
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_f8;
  uStack_d0 = uStack_100;
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  func_0x00010c219960();
  uVar2 = param_7;
  func_0x00010bfdef60(param_7);
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_f8;
  uStack_d0 = uStack_100;
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  func_0x00010c219960();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  uVar1 = param_7;
  func_0x00010bf1eb40(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)param_1);
  uVar3 = param_7;
  func_0x00010bfdef60(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar4 = uVar3;
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b82a754; end: 10b82a81b; -[SIGActionSheetNavigationController _setupDismissGestureForActionSheet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82a754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112794500;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfdef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067960(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = param_3;
  func_0x00010bf1eb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067960(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = param_3;
  func_0x00010bfb4220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c067960(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b82a81c; end: 10b82aa5b; -[SIGActionSheetNavigationController _setupSwipeGestureForActionSheet:] */

void FUN_10b82a81c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar12 = param_3;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar12 != 0) {
    lVar12 = param_3;
    func_0x00010bfdef60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar12);
    _objc_release(lVar12);
  }
  lVar12 = param_3;
  func_0x00010bfb4220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar12 != 0) {
    lVar12 = param_3;
    func_0x00010bfb4220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar12);
    _objc_release(lVar12);
  }
  lVar12 = param_3;
  func_0x00010bf1eb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,lVar12);
  _objc_release(lVar12);
  dVar14 = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar1);
  puVar9 = &uStack_130;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puVar1);
        }
        uVar11 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
        puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
        func_0x00010c050900();
        func_0x00010c1ec5c0();
        func_0x00010c178280(puVar3,param_2,0);
        func_0x00010c18b5a0(puVar3,param_2,0);
        func_0x00010c18b5c0(puVar3,param_2,0);
        func_0x00010bef9040(uVar11,param_2,puVar3);
        _objc_release(puVar3);
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar9 = &uStack_130;
      puVar2 = puVar1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    lVar12 = param_3;
    func_0x00010c10f840();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bdc46e0(param_3,param_2,lVar12);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar5 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(puVar9,param_2,lVar6);
      dVar13 = dVar14;
      _objc_release(lVar6);
      _objc_release(lVar5);
      puVar7 = puVar9;
      func_0x00010c29bf00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar14 = dVar14 / dVar13;
      _objc_release(puVar8);
      _objc_release(puVar7);
      lVar5 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(puVar9,param_2,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
      puVar7 = puVar9;
      func_0x00010c252440();
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      if ((long)puVar7 < 3) {
        if (puVar7 == (undefined8 *)0x1) {
          func_0x00010bf18d80(param_3,param_2,lVar12,lVar4,0);
        }
        else if ((puVar7 == (undefined8 *)0x2) && (-0.05 <= dVar14)) {
          func_0x00010bee36c0(dVar14,param_3,param_2,lVar12,lVar4,1);
        }
      }
      else if (puVar7 == (undefined8 *)0x3) {
        if (((0.5 < dVar14) && (0.0 < dVar13)) || ((0.1 < dVar14 && (500.0 < dVar13)))) {
          func_0x00010c12c8e0(lVar12);
          puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1d0 = 0xc2000000;
          pcStack_1c8 = FUN_10b82ae00;
          puStack_1c0 = &UNK_110848ba8;
          lStack_1b8 = param_3;
          _objc_retain(lVar12);
          lStack_1b0 = lVar12;
          _objc_retain(lVar4);
          puStack_210 = puVar1;
          uStack_208 = 0xc2000000;
          uStack_200 = 0x10b82ae18;
          puStack_1f8 = &UNK_1108500c8;
          lStack_1f0 = param_3;
          lStack_1a8 = lVar4;
          _objc_retain(lVar12);
          lStack_1e8 = lVar12;
          _objc_retain(lVar4);
          lStack_1e0 = lVar4;
          func_0x00010bf03420(0x3fc999999999999a,puVar2,param_2,&puStack_1d8,&puStack_210);
          _objc_release(lStack_1e0);
          _objc_release(lStack_1e8);
          _objc_release(lStack_1a8);
          lVar5 = lStack_1b0;
        }
        else {
          puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_240 = 0xc2000000;
          uStack_238 = 0x10b82ae2c;
          puStack_230 = &UNK_110848ba8;
          lStack_228 = param_3;
          _objc_retain(lVar4);
          lStack_220 = lVar4;
          _objc_retain(lVar12);
          puStack_280 = puVar1;
          uStack_278 = 0xc2000000;
          uStack_270 = 0x10b82ae44;
          puStack_268 = &UNK_1108500c8;
          lStack_260 = param_3;
          lStack_218 = lVar12;
          _objc_retain(lVar12);
          lStack_258 = lVar12;
          _objc_retain(lVar4);
          lStack_250 = lVar4;
          func_0x00010bf03420(0x3fc999999999999a,puVar2,param_2,&puStack_248,&puStack_280);
          _objc_release(lStack_250);
          _objc_release(lStack_258);
          _objc_release(lStack_218);
          lVar5 = lStack_220;
        }
        _objc_release(lVar5);
      }
      else if (puVar7 == (undefined8 *)0x4) {
        func_0x00010bf2f3a0(param_3,param_2,lVar12,lVar4);
      }
    }
    _objc_release(lVar4);
    _objc_release(lVar12);
    _objc_release(puVar9);
    return;
  }
  return;
}



/* Entry: 10b82aa5c; end: 10b82adff; -[SIGActionSheetNavigationController _swipeActionSheetGestureUpdated:] */

void FUN_10b82aa5c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  lVar3 = param_2;
  func_0x00010c10f840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bdc46e0(param_2,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar5 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_4,param_3,lVar6);
    dVar7 = param_1;
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    param_1 = param_1 / dVar7;
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_4,param_3,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_4;
    func_0x00010c252440();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar5 < 3) {
      if (lVar5 == 1) {
        func_0x00010bf18d80(param_2,param_3,lVar3,lVar4,0);
      }
      else if ((lVar5 == 2) && (-0.05 <= param_1)) {
        func_0x00010bee36c0(param_1,param_2,param_3,lVar3,lVar4,1);
      }
    }
    else if (lVar5 == 3) {
      if (((0.5 < param_1) && (0.0 < dVar7)) || ((0.1 < param_1 && (500.0 < dVar7)))) {
        func_0x00010c12c8e0(lVar3);
        puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_10b82ae00;
        puStack_80 = &UNK_110848ba8;
        lStack_78 = param_2;
        _objc_retain(lVar3);
        lStack_70 = lVar3;
        _objc_retain(lVar4);
        puStack_d0 = puVar1;
        uStack_c8 = 0xc2000000;
        uStack_c0 = 0x10b82ae18;
        puStack_b8 = &UNK_1108500c8;
        lStack_b0 = param_2;
        lStack_68 = lVar4;
        _objc_retain(lVar3);
        lStack_a8 = lVar3;
        _objc_retain(lVar4);
        lStack_a0 = lVar4;
        func_0x00010bf03420(0x3fc999999999999a,puVar2,param_3,&puStack_98,&puStack_d0);
        _objc_release(lStack_a0);
        _objc_release(lStack_a8);
        _objc_release(lStack_68);
        lVar5 = lStack_70;
      }
      else {
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_100 = 0xc2000000;
        uStack_f8 = 0x10b82ae2c;
        puStack_f0 = &UNK_110848ba8;
        lStack_e8 = param_2;
        _objc_retain(lVar4);
        lStack_e0 = lVar4;
        _objc_retain(lVar3);
        puStack_140 = puVar1;
        uStack_138 = 0xc2000000;
        uStack_130 = 0x10b82ae44;
        puStack_128 = &UNK_1108500c8;
        lStack_120 = param_2;
        lStack_d8 = lVar3;
        _objc_retain(lVar3);
        lStack_118 = lVar3;
        _objc_retain(lVar4);
        lStack_110 = lVar4;
        func_0x00010bf03420(0x3fc999999999999a,puVar2,param_3,&puStack_108,&puStack_140);
        _objc_release(lStack_110);
        _objc_release(lStack_118);
        _objc_release(lStack_d8);
        lVar5 = lStack_e0;
      }
      _objc_release(lVar5);
    }
    else if (lVar5 == 4) {
      func_0x00010bf2f3a0(param_2,param_3,lVar3,lVar4);
    }
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 10b82ae00; end: 10b82ae53;  */

void FUN_10b82ae00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),
             PTR_s__updateViewForTransitionFromActi_112596758,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),1);
  return;
}



/* Entry: 10b82ae54; end: 10b82aea7; -[SIGActionSheetNavigationController _backgroundViewTapped:] */

void FUN_10b82ae54(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b82aea8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf84b00(param_1,param_2,1,&puStack_38);
  return;
}



/* Entry: 10b82aea8; end: 10b82af3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82aea8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112794504;
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeef20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10b82af40; end: 10b82b097; -[SIGActionSheetNavigationController _actionSheetPreceeding:] */

void FUN_10b82af40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar3 != 0) {
    uVar5 = 0;
    do {
      lVar7 = 0;
      uVar6 = uVar5;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar5 = *(ulong *)(lVar7 * 8);
        if ((uVar6 & 1) != 0) {
          _objc_retain(uVar5);
          goto LAB_10b82b04c;
        }
        func_0x00010c071ae0();
        lVar7 = lVar7 + 1;
        uVar6 = uVar5;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  uVar5 = 0;
LAB_10b82b04c:
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b82b098; end: 10b82b0a3; -[SIGActionSheetNavigationController actionSheetTransitionWillBeginWithView:] */

void FUN_10b82b098(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10b82b0a4; end: 10b82b12f; -[SIGActionSheetNavigationController actionSheetTransitionDidEndWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b0a4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112794504;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeef20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10b82b130; end: 10b82b213; -[SIGActionSheetNavigationController beginTransitionFromActionSheet:ToActionSheet:isPush:] */

void FUN_10b82b130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 & 1) == 0) {
    func_0x00010c2a6740(param_3,param_2,0);
  }
  func_0x00010bf17b00(param_4,param_2,1,1);
  func_0x00010bf17b00(param_3,param_2,0,1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = param_4;
  func_0x00010bfb4220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b82b214; end: 10b82b2cb; -[SIGActionSheetNavigationController completeTransitionFromActionSheet:ToActionSheet:isPush:] */

void FUN_10b82b214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bfb4220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010bf941a0(param_4);
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010bf941a0(param_3);
  _objc_release(param_3);
  if (param_5 != 0) {
    func_0x00010bf77e80(param_4,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b82b2cc; end: 10b82b33f; -[SIGActionSheetNavigationController cancelTransitionFromActionSheet:ToActionSheet:] */

void FUN_10b82b2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf941a0(param_3);
  func_0x00010bf941a0(param_4);
  func_0x00010bf17b00(param_4,param_2,0,1);
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010bf941a0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b82b340; end: 10b82b393; -[SIGActionSheetNavigationController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b340(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b390;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112794508));
  return;
}



/* Entry: 10b82b394; end: 10b82b483; -[SIGActionSheetNavigationController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b394(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  double in_d3;
  double dVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_11270b390;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112794508));
  lVar4 = (long)_DAT_112794504;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf1eb40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  dVar5 = in_d3;
  func_0x00010bfdef60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  in_d3 = in_d3 + dVar5;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfb4220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1a7d00(in_d3 + dVar5,*(undefined8 *)(param_1 + _DAT_112794500));
  return;
}



/* Entry: 10b82b484; end: 10b82b4d7; -[SIGActionSheetNavigationController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b484(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b390;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112794508));
  return;
}



/* Entry: 10b82b4d8; end: 10b82b52b; -[SIGActionSheetNavigationController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b4d8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b390;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112794508));
  return;
}



/* Entry: 10b82b52c; end: 10b82b54b; -[SIGActionSheetNavigationController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b52c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11279450c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b82b54c; end: 10b82b55f; -[SIGActionSheetNavigationController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b54c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11279450c,param_3);
  return;
}



/* Entry: 10b82b560; end: 10b82b5bb; -[SIGActionSheetNavigationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b560(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11279450c);
  _objc_storeStrong(param_1 + _DAT_112794504,0);
  _objc_storeStrong(param_1 + _DAT_112794508,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794500,0);
  return;
}



/* Entry: 10b82b5bc; end: 10b82b7a3; -[SIGActionSheetSubscribeButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b82b5bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270b398;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    func_0x00010c21ad00(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794510);
    *(undefined **)((long)puVar1 + (long)_DAT_112794510) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar7);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar5 = puVar4;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25fe80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c219b60(puVar4);
    func_0x00010c182220(puVar4);
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794514);
    *(undefined **)((long)puVar1 + (long)_DAT_112794514) = puVar4;
    _objc_retain(puVar4);
    _objc_release(uVar7);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    func_0x00010beaab80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b82b7a4; end: 10b82b80b; -[SIGActionSheetSubscribeButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b82b7a4(double param_1,long param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112794510));
  dVar1 = param_1;
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112794514));
  auVar2._0_8_ = param_1 + dVar1 + 5.0 + 226.0;
  auVar2._8_8_ = 0x4040000000000000;
  return auVar2;
}



/* Entry: 10b82b80c; end: 10b82b80f; -[SIGActionSheetSubscribeButton sizeThatFits:] */

void FUN_10b82b80c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10b82b810; end: 10b82b8a3; -[SIGActionSheetSubscribeButton setUnsubscribedTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b810(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112794518;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    if ((*(byte *)(param_1 + _DAT_11279451c) & 1) == 0) {
      lVar3 = (long)_DAT_112794510;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
      func_0x00010c23d620(*(undefined8 *)(param_1 + lVar3));
      func_0x00010c069fa0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b82b8a4; end: 10b82b93b; -[SIGActionSheetSubscribeButton setSubscribedTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112794520;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    if (*(char *)(param_1 + _DAT_11279451c) == '\x01') {
      lVar3 = (long)_DAT_112794510;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
      func_0x00010c23d620(*(undefined8 *)(param_1 + lVar3));
      func_0x00010c069fa0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b82b93c; end: 10b82b9b7; -[SIGActionSheetSubscribeButton setSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b93c(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(byte *)(param_1 + _DAT_11279451c) != param_3) {
    *(char *)(param_1 + _DAT_11279451c) = (char)param_3;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10b82b9b8;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03400(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  }
  return;
}



/* Entry: 10b82b9b8; end: 10b82b9ef;  */

void FUN_10b82b9b8(long param_1)

{
  func_0x00010bea2180(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bea8700(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bea4780(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 10b82b9f0; end: 10b82ba4f; -[SIGActionSheetSubscribeButton _setBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82b9f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0x82;
  if (*(char *)(param_1 + _DAT_11279451c) == '\0') {
    uVar1 = 0xa0;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b82ba50; end: 10b82baeb; -[SIGActionSheetSubscribeButton _setTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82ba50(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = 0x10;
  if (*(char *)(param_1 + _DAT_11279451c) == '\0') {
    lVar4 = 8;
  }
  uVar3 = *(undefined8 *)(param_1 + *(int *)(&DAT_112794510 + lVar4));
  _objc_retain(uVar3);
  lVar4 = (long)_DAT_112794510;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b82baec; end: 10b82bba3; -[SIGActionSheetSubscribeButton _setImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82baec(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  bVar1 = *(byte *)(param_1 + _DAT_11279451c);
  lVar5 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  if ((bVar1 & 1) == 0) {
    func_0x00010c25fe80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c260580();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  lVar5 = (long)_DAT_112794514;
  uVar3 = *(ulong *)(param_1 + lVar5);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c071ae0();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5),param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b82bba4; end: 10b82bfeb; -[SIGActionSheetSubscribeButton _setupAutolayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b82bba4(long param_1,undefined8 param_2)

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
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar27 = *(long *)(param_1 + _DAT_112794514);
  _objc_retain(lVar27);
  uVar29 = *(undefined8 *)(param_1 + _DAT_112794510);
  _objc_retain(uVar29);
  lVar25 = (long)_DAT_112794524;
  lVar28 = *(long *)(param_1 + lVar25);
  _objc_retain(lVar28);
  if (lVar28 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,lVar28);
  }
  lVar1 = lVar27;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf493c0(0x405c400000000000,lVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar27;
  lStack_b0 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf493c0(0xc014000000000000,lVar4,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar27;
  lStack_a8 = lVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf493a0(lVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar27;
  lStack_a0 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf493a0(lVar9,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar29;
  lStack_98 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493c0(0x4014000000000000,uVar12,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar29;
  uStack_90 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493c0(0xc05c400000000000,uVar15,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar29;
  uStack_88 = uVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf493a0(uVar18,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar29;
  uStack_80 = uVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_b0,8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar28);
  _objc_release(uVar23);
  _objc_release(lVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(lVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar26);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar26 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar24;
  _objc_retain(puVar24);
  _objc_release(uVar26);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar24);
  _objc_release(puVar24);
  _objc_release(uVar29);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar27;
  }
  ___stack_chk_fail();
  return *(long *)(lVar27 + _DAT_112794518);
}



/* Entry: 10b82bfec; end: 10b82bffb; -[SIGActionSheetSubscribeButton unsubscribedTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b82bfec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794518);
}



/* Entry: 10b82bffc; end: 10b82c00b; -[SIGActionSheetSubscribeButton subscribedTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b82bffc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794520);
}



/* Entry: 10b82c00c; end: 10b82c01b; -[SIGActionSheetSubscribeButton isSubscribed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b82c00c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11279451c);
}


