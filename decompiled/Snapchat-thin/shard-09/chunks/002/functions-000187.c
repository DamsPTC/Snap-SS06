/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b6f49c; end: 106b6f4ab; -[SCPhoneEntryView setCountryPickerButtonTitle:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f49c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758fd8),PTR_s_setTitle_forState__1126632c0);
  return;
}



/* Entry: 106b6f4ac; end: 106b6f4bb; -[SCPhoneEntryView becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f4ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758fd4),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 106b6f4bc; end: 106b6f4cb; -[SCPhoneEntryView setExamplePhoneNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dc9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758fd4),PTR_s_setPlaceholder__112654c98);
  return;
}



/* Entry: 106b6f4cc; end: 106b6f4db; -[SCPhoneEntryView setKeyboardType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b6ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758fd4),PTR_s_setKeyboardType__11264b5d8);
  return;
}



/* Entry: 106b6f4dc; end: 106b6f657; -[SCPhoneEntryView _initPhoneLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f4dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112758fdc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000106b7245c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758fcc);
  func_0x00010bf68c00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c1b6b20(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b6f658;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b6f658; end: 106b6f7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f658(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4006666666666666);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758fc4) == '\x01') {
    lVar1 = param_2;
    func_0x00010bfe0640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b6f7e4; end: 106b6fc2f; -[SCPhoneEntryView _initCountryPickerAndPhoneField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f7e4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar8 = (long)_DAT_112758fe0;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar2;
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar8));
  _objc_release(puVar2);
  func_0x00010befbb60(param_1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112758fd8;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112758fcc);
  func_0x00010bf69980(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar6);
  _objc_release(uVar5);
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar7));
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c271420(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar5);
  _objc_release(puVar2);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar7));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c0bbfc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_opt_new();
  lVar7 = (long)_DAT_112758fd4;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar3;
  _objc_release(uVar5);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c160fc0(uVar5);
  func_0x000106b72474();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar7));
  _objc_release(uVar5);
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar7));
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c292b00();
    if (puVar3 == (undefined *)0x1) {
      func_0x00010c213040(*(undefined8 *)(param_1 + lVar7));
    }
  }
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8));
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(puVar2);
  func_0x00010c0bbfc0(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3);
  _objc_release(puVar4);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c0bbfc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar2);
  return;
}



/* Entry: 106b6fc30; end: 106b6fdcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6fc30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758fdc);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x4041800000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b6fdd0; end: 106b701e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6fdd0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758fe0);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4008000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x4042000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b701e8; end: 106b7041b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b701e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4018000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112758fe0);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x4042000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b7041c; end: 106b705b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b7041c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758fe0);
  func_0x00010c0bbea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b705b8; end: 106b70803; -[SCPhoneEntryView _initDefaultSmsExplanationLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b705b8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af270;
  _objc_opt_new();
  lVar11 = (long)_DAT_112758fe4;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar9);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1bdd60(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c162900(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar11));
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c1a7f60();
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x000106b7248c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(uVar10);
  _objc_release(uVar9);
  func_0x00010c1b6b20(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_112758fdc));
  func_0x00010befbb60(param_1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar11));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar8 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  (**(code **)(lVar11 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0x4006666666666666);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar8);
  lVar8 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112758fe0;
  (**(code **)(lVar11 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar8);
  lVar8 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + lVar12);
  func_0x00010c0bbea0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  (**(code **)(lVar11 + 0x10))(lVar11,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(uVar9);
  _objc_release(lVar11);
  _objc_release(lVar8);
  lVar8 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar11 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c0bbea0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar11 + 0x10))(lVar11,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 106b70804; end: 106b70ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b70804(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0x4006666666666666);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112758fe0;
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
  func_0x00010c0bbea0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b70ab4; end: 106b70cbf; -[SCPhoneEntryView _initErrorLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b70ab4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af270;
  _objc_opt_new();
  lVar8 = (long)_DAT_112758fe8;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar8));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1bdd60(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c162900(*(undefined8 *)(param_1 + lVar8));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar8));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar8));
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112758fcc);
  func_0x00010bf694e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar7);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
  func_0x00010befbb60(param_1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + (long)_DAT_112758fe0);
  func_0x00010c0bbea0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  (**(code **)(lVar8 + 0x10))(lVar8,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4022000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(lVar8);
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar8 = lVar6;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 106b70cc0; end: 106b70e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b70cc0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758fe0);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4022000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b70e8c; end: 106b70f83; -[SCPhoneEntryView setErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b70e8c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = (long)_DAT_112758fe8;
    uVar1 = *(ulong *)(param_1 + lVar3);
    func_0x00010c074c20();
    if ((uVar1 & 1) != 0) goto LAB_106b70f70;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,1);
    bVar2 = *(byte *)(param_1 + _DAT_112758fc0);
  }
  else {
    lVar3 = param_1;
    func_0x00010be41c60(param_1,param_2,param_3);
    if ((int)lVar3 == 0) {
      lVar3 = param_1;
      func_0x00010be1d040(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_112758fe8;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
      _objc_release(lVar3);
    }
    else {
      lVar4 = (long)_DAT_112758fe8;
      func_0x00010c099980(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    bVar2 = 1;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112758fe4),param_2,bVar2 & 1);
LAB_106b70f70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b70f84; end: 106b70fb7; -[SCPhoneEntryView _countryCodeButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b70f84(long param_1)

{
  param_1 = param_1 + _DAT_112758fc8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c158940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b70fb8; end: 106b710b7; -[SCPhoneEntryView textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106b70fb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758fd0);
  _objc_retain(param_6);
  func_0x00010c06cc60(uVar2,param_2,param_4,param_5,param_6);
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_5 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    param_4 = 0;
  }
  param_1 = param_1 + _DAT_112758fc8;
  _objc_loadWeakRetained(param_1);
  uVar2 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0fb020(param_1,param_2,uVar2,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 106b710b8; end: 106b710f7; -[SCPhoneEntryView textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106b710b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112758fc8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c234cc0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106b710f8; end: 106b71167; -[SCPhoneEntryView attributedLabel:didSelectLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b710f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112758fc8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0e100();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b71168; end: 106b711ff; -[SCPhoneEntryView _isMarkDownMessage:] */

bool FUN_106b71168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0ca8;
  _objc_alloc(PTR_PTR_1126d0ca8);
  func_0x00010c028a20();
  puVar2 = puVar1;
  func_0x00010c099a20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return puVar3 != (undefined *)0x0;
}



/* Entry: 106b71200; end: 106b713f7; -[SCPhoneEntryView _getAttributedStringFromHtmlMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b71200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf64920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008460();
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c25cd40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010bef6f20(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar5 = *(long *)(param_1 + _DAT_112758fcc);
  func_0x00010bf694e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25cd40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010bef6f20(puVar1);
  _objc_release(puVar3);
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar5 + _DAT_112758fe4,0);
  _objc_storeStrong(lVar5 + _DAT_112758fe8,0);
  _objc_storeStrong(lVar5 + _DAT_112758fd4,0);
  _objc_storeStrong(lVar5 + _DAT_112758fe0,0);
  _objc_storeStrong(lVar5 + _DAT_112758fdc,0);
  _objc_storeStrong(lVar5 + _DAT_112758fd8,0);
  _objc_destroyWeak(lVar5 + _DAT_112758fc8);
  _objc_storeStrong(lVar5 + _DAT_112758fd0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar5 + _DAT_112758fcc,0);
  return;
}



/* Entry: 106b713f8; end: 106b714a3; -[SCPhoneEntryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b713f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758fe4,0);
  _objc_storeStrong(param_1 + _DAT_112758fe8,0);
  _objc_storeStrong(param_1 + _DAT_112758fd4,0);
  _objc_storeStrong(param_1 + _DAT_112758fe0,0);
  _objc_storeStrong(param_1 + _DAT_112758fdc,0);
  _objc_storeStrong(param_1 + _DAT_112758fd8,0);
  _objc_destroyWeak(param_1 + _DAT_112758fc8);
  _objc_storeStrong(param_1 + _DAT_112758fd0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758fcc,0);
  return;
}



/* Entry: 106b714a4; end: 106b714f3; -[SCPhoneNumberDashedHintField initWithFrame:] */

undefined1 * FUN_106b714a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f52a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaa4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106b714f4; end: 106b7153b; -[SCPhoneNumberDashedHintField setCountryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b714f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106b71da4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758fec);
  *(undefined8 *)(param_1 + _DAT_112758fec) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed6f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDisplay_112593588);
  return;
}



/* Entry: 106b7153c; end: 106b71583; -[SCPhoneNumberDashedHintField setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b7153c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106b71f70();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758ff0);
  *(undefined8 *)(param_1 + _DAT_112758ff0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed6f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDisplay_112593588);
  return;
}



/* Entry: 106b71584; end: 106b715d3; -[SCPhoneNumberDashedHintField text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b71584(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758ff4);
  func_0x00010bf0e540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106b715d4; end: 106b715e3; -[SCPhoneNumberDashedHintField becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b715d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758ff4),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 106b715e4; end: 106b71adb; -[SCPhoneNumberDashedHintField _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b715e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar13 = (long)_DAT_112758ff8;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar12);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar13));
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar10);
  _objc_release(lVar13);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar16);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar17);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(lVar15);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_opt_new();
  lVar14 = (long)_DAT_112758ff4;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar12);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar14));
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c160fc0(uVar12);
  func_0x000106b72474();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar14));
  _objc_release(uVar12);
  func_0x000106b71d0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar14));
  _objc_release(uVar12);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar13);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(lVar16);
  _objc_release(uVar10);
  _objc_release(lVar17);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = (long)_DAT_112758fec;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  lVar17 = (long)_DAT_112758ff8;
  uVar12 = *(undefined8 *)(lVar9 + lVar17);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010c1a7f60(uVar12);
    lVar16 = (long)_DAT_112758ff4;
    func_0x00010c1dc9c0(*(undefined8 *)(lVar9 + lVar16));
    lVar13 = (long)_DAT_112758ff0;
    uVar12 = *(undefined8 *)(lVar9 + lVar13);
    FUN_106b72048(uVar12,*(undefined8 *)(lVar9 + lVar15));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(lVar9 + lVar17));
    _objc_release(uVar12);
  }
  else {
    func_0x00010c1a7f60(uVar12);
    func_0x000106b724a4();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_112758ff4;
    func_0x00010c1dc9c0(*(undefined8 *)(lVar9 + lVar16));
    _objc_release(uVar12);
    lVar13 = (long)_DAT_112758ff0;
  }
  uVar12 = *(undefined8 *)(lVar9 + lVar13);
  FUN_106b72284(uVar12,*(undefined8 *)(lVar9 + lVar15));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(lVar9 + lVar16));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 106b71adc; end: 106b71beb; -[SCPhoneNumberDashedHintField _updateDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b71adc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = (long)_DAT_112758fec;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined8 *)(param_1 + lVar3))
  ;
  lVar5 = (long)_DAT_112758ff8;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010c1a7f60(uVar2);
    lVar4 = (long)_DAT_112758ff4;
    func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar4));
    lVar6 = (long)_DAT_112758ff0;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    FUN_106b72048(uVar2,*(undefined8 *)(param_1 + lVar3));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar2);
  }
  else {
    func_0x00010c1a7f60(uVar2);
    func_0x000106b724a4();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112758ff4;
    func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar4));
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112758ff0;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  FUN_106b72284(uVar2,*(undefined8 *)(param_1 + lVar3));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b71bec; end: 106b71c6b; -[SCPhoneNumberDashedHintField textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106b71bec(long param_1)

{
  undefined8 in_x5;
  long lVar1;
  
  lVar1 = (long)_DAT_112758ffc;
  _objc_retain(in_x5);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf63620();
  _objc_release(in_x5);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106b71c6c; end: 106b71c8b; -[SCPhoneNumberDashedHintField delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b71c6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112758ffc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b71c8c; end: 106b71c9f; -[SCPhoneNumberDashedHintField setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b71c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112758ffc,param_3);
  return;
}



/* Entry: 106b71ca0; end: 106b71d5f; -[SCPhoneNumberDashedHintField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b71ca0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112758ffc);
  _objc_storeStrong(param_1 + _DAT_112758ff0,0);
  _objc_storeStrong(param_1 + _DAT_112758fec,0);
  _objc_storeStrong(param_1 + _DAT_112758ff8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758ff4,0);
  return;
}



/* Entry: 106b71d60; end: 106b71da3;  */

void FUN_106b71d60(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0d0e20(0x4031000000000000,*(undefined8 *)PTR__UIFontWeightMedium_110345c38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c6a40;
  puRam00000001136c6a40 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b71da4; end: 106b71f6f;  */

void FUN_106b71da4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain();
  if (lRam00000001136c6a58 != -1) {
    func_0x00010002a2fc(0x1136c6a58,&PTR___NSConcreteGlobalBlock_110962ec8);
  }
  uVar1 = uRam00000001136c6a50;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    uVar6 = uVar2;
    func_0x00010bf529e0();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        uVar7 = uVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        func_0x00010c08fa60();
        _objc_release(uVar7);
        if (uVar4 != 0) {
          uVar7 = uVar2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar7;
          func_0x00010c08fa60();
          _objc_release(uVar7);
          if (uVar4 != 0) {
            uVar7 = 0;
            do {
              func_0x00010bf070e0(ppuVar3);
              uVar7 = uVar7 + 1;
              uVar4 = uVar2;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010c08fa60();
              _objc_release(uVar4);
            } while (uVar7 < uVar5);
          }
          uVar7 = uVar2;
          func_0x00010bf529e0();
          if (uVar6 < uVar7 - 1) {
            func_0x00010bf070e0(ppuVar3);
          }
        }
        uVar6 = uVar6 + 1;
        uVar7 = uVar2;
        func_0x00010bf529e0();
      } while (uVar6 < uVar7);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106b71f70; end: 106b72047;  */

void FUN_106b71f70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lStack_38;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_1);
  if (((ulong)puVar1 & 1) == 0) {
    lStack_38 = 0;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                        &PTR____CFConstantStringClassReference_110e756f8,1,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_38 == 0) {
      uVar3 = param_1;
      func_0x00010c08fa60(param_1);
      ppuVar4 = ppuVar2;
      func_0x00010c25cfa0(ppuVar2,param_2,param_1,0,0,uVar3,
                          &PTR____CFConstantStringClassReference_110daafd8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    _objc_release(ppuVar2);
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106b72048; end: 106b72283;  */

void FUN_106b72048(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_opt_new();
    uVar5 = param_2;
    func_0x00010c08fa60();
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar5 = 0;
      do {
        uVar1 = param_2;
        func_0x00010bf35920();
        if ((int)uVar1 == 0x20) {
          func_0x00010c08fa60(puVar4);
          func_0x00010bef6f20(puVar4);
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d920(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
          func_0x00010c04e820();
          func_0x00010bf069e0(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
        }
        uVar5 = uVar5 + 1;
        uVar1 = param_2;
        func_0x00010c08fa60();
      } while (uVar5 < uVar1);
    }
    func_0x000106b71d0c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar4);
    func_0x00010bef6f20(puVar4);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar4);
    func_0x00010bef6f20(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c08fa60();
    func_0x00010bef6f20(puVar4);
    _objc_release(puVar2);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b72284; end: 106b7242b;  */

void FUN_106b72284(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    puVar2 = puVar6;
    func_0x000106b71d0c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840();
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar7 = param_2;
    func_0x00010c08fa60();
    if (uVar7 != 0) {
      uVar7 = 0;
      iVar8 = 0;
      do {
        puVar2 = puVar6;
        func_0x00010c08fa60();
        if (puVar2 <= (undefined *)(long)iVar8) break;
        uVar4 = param_2;
        func_0x00010bf35920();
        if ((int)uVar4 == 0x20) {
          func_0x00010bef6f20(puVar6);
        }
        else {
          iVar8 = iVar8 + 1;
        }
        uVar7 = uVar7 + 1;
        uVar4 = param_2;
        func_0x00010c08fa60();
      } while (uVar7 < uVar4);
    }
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  uVar1 = ppuRam00000001136c6a50;
  ppuRam00000001136c6a50 = &PTR__OBJC_CLASS___NSConstantDictionary_111174bf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b7242c; end: 106b724eb;  */

void FUN_106b7242c(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136c6a50;
  ppuRam00000001136c6a50 = &PTR__OBJC_CLASS___NSConstantDictionary_111174bf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b724ec; end: 106b725b7; -[SCCredentials2FAUI initWithBaseView:styleHelper:delegate:] */

undefined1 *
FUN_106b724ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f52a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x60),param_5);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    func_0x00010beb0d80(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b725b8; end: 106b7263b; -[SCCredentials2FAUI setSendSmsInsteadButtonHidden:] */

void FUN_106b725b8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x28));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c074c20();
  uVar4 = 0;
  if (iVar1 == 0) {
    uVar4 = 0x403d000000000000;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c14df20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b7263c; end: 106b72643; -[SCCredentials2FAUI setDescriptionLabelText:] */

void FUN_106b7263c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 106b72644; end: 106b7264b; -[SCCredentials2FAUI setErrorLabelText:] */

void FUN_106b72644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 106b7264c; end: 106b726bb; -[SCCredentials2FAUI setErrorLabelHidden:] */

void FUN_106b7264c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c074c20();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x38));
  if (iVar1 == 0 || param_3 != 0) {
    return;
  }
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + 8));
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010be9be10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollContentClearOfContinueBut_112584928);
  return;
}



/* Entry: 106b726bc; end: 106b7281f; -[SCCredentials2FAUI _scrollContentClearOfContinueButton] */

void FUN_106b726bc(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = *(long *)(param_5 + 8);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_5 + 8);
  func_0x00010bf4fa60();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0 && lVar2 != 0) && (lVar3 = *(long *)(param_5 + 0x40), lVar3 != 0)) {
    func_0x00010bf20c00(lVar3);
    func_0x00010bf51460(lVar3,param_6,*(undefined8 *)(param_5 + 8));
    dVar7 = param_1;
    dVar4 = param_2;
    dVar5 = param_3;
    dVar6 = param_4;
    func_0x00010bf20c00(lVar2);
    func_0x00010bf51460(lVar2,param_6,*(undefined8 *)(param_5 + 8));
    _CGRectGetMaxY(param_1,param_2,param_3,param_4);
    _CGRectGetMinY();
    if (0.0 < param_1 - dVar7) {
      func_0x00010bf4cdc0(lVar1);
      dVar7 = (param_1 - dVar7) + dVar4;
      func_0x00010bf4d5e0(lVar1);
      func_0x00010bf20c00(lVar1);
      func_0x00010bf4c7c0(lVar1);
      if (dVar5 < dVar7 + (dVar6 - dVar4)) {
        func_0x00010c181f80(lVar1);
      }
      func_0x00010c182300(0,dVar7,lVar1,param_6,1);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b72820; end: 106b72827; -[SCCredentials2FAUI setSendSmsInsteadButtonTitle:forState:] */

void FUN_106b72820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setTitle_forState__1126632c0);
  return;
}



/* Entry: 106b72828; end: 106b7282f; -[SCCredentials2FAUI setSendSmsInsteadButtonUserInteractionEnabled:] */

void FUN_106b72828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setUserInteractionEnabled__112665468);
  return;
}



/* Entry: 106b72830; end: 106b72837; -[SCCredentials2FAUI setRememberDevice:] */

void FUN_106b72830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_setOn__112651f00);
  return;
}



/* Entry: 106b72838; end: 106b728af; -[SCCredentials2FAUI otpToSmsPressed:] */

void FUN_106b72838(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2658a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b728b0; end: 106b72973; -[SCCredentials2FAUI textField:shouldChangeCharactersInRange:replacementString:] */

long FUN_106b728b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c26bc40();
    _objc_release(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b72974; end: 106b729ff; -[SCCredentials2FAUI textFieldShouldReturn:] */

long FUN_106b72974(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c26be80();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b72a00; end: 106b72a77; -[SCCredentials2FAUI _rememberDeviceSwitchValueChanged:] */

void FUN_106b72a00(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1293a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b72a78; end: 106b72acb; -[SCCredentials2FAUI _setupUI] */

void FUN_106b72a78(undefined8 param_1)

{
  func_0x00010be398e0();
  func_0x00010be3a880(param_1);
  func_0x00010be3a980(param_1);
  func_0x00010be3a0c0(param_1);
  func_0x00010be39820(param_1);
  func_0x00010be39800(param_1);
  func_0x00010be39b00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be3a370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initRememberDeviceView_11256c278);
  return;
}



/* Entry: 106b72acc; end: 106b72e93; -[SCCredentials2FAUI _initContentView] */

void FUN_106b72acc(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_530;
  double dStack_520;
  double dStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined *puStack_4e8;
  long lStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 **ppuStack_4c0;
  code *pcStack_4b8;
  undefined *puStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined8 **ppuStack_430;
  code *pcStack_428;
  undefined *puStack_418;
  long lStack_410;
  long lStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 **ppuStack_380;
  code *pcStack_378;
  long lStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 **ppuStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined *puStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  uVar24 = *(undefined8 *)(param_2 + 0x50);
  *(undefined **)(param_2 + 0x50) = puVar1;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_2 + 0x50),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_2 + 0x50),param_3,0);
  uVar24 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf4b2a0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar24);
  puStack_f0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_2 + 8);
  uStack_b8 = uVar2;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar24;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar24;
  func_0x00010bf493a0(uVar2,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uStack_c8 = uVar2;
  uStack_a8 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_2 + 8);
  uStack_d8 = uVar3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar24;
  func_0x00010bf493a0(uVar3,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uStack_e8 = uVar3;
  uStack_a0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_2 + 8);
  uStack_100 = uVar2;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uVar24;
  func_0x00010bf493a0(uVar2,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uStack_110 = uVar2;
  uStack_98 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0(uVar4,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uStack_90 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010bf493a0(uVar6,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_a8,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_f0,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar24);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  func_0x00010bf69140(*(undefined8 *)(param_2 + 0x10));
  lVar8 = *(long *)(param_2 + 8);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(0,0,param_1 + 48.0,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_106b72e94;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar27 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar2,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar27);
  uVar24 = *(undefined8 *)(lVar8 + 0x18);
  *(undefined **)(lVar8 + 0x18) = puVar1;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar8 + 0x18),param_3,puVar1);
  _objc_release(puVar1);
  FUN_106b77054();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar8 + 0x18),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar8 + 0x18),param_3,puVar1);
  _objc_release(puVar1);
  uVar7 = 0x4035000000000000;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar8 + 0x18),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar8 + 0x18),param_3,1);
  func_0x00010c1cfce0(*(undefined8 *)(lVar8 + 0x18),param_3,0);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x50),param_3,*(undefined8 *)(lVar8 + 0x18));
  func_0x00010bf69b80(*(undefined8 *)(lVar8 + 0x10));
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x18),param_3,0);
  puStack_1a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar8 + 0x18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar8 + 0x10));
  lVar12 = lVar9;
  func_0x00010bf493c0(uVar2,lVar9,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar8 + 0x18);
  lStack_1a0 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar8 + 0x10));
  uVar24 = uVar10;
  func_0x00010bf493c0(-dVar27,uVar10,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar8 + 0x18);
  uStack_198 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493c0(uVar7,uVar5,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_190 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_1a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1a8,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(lVar12);
  _objc_release(uVar3);
  lVar8 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_106b73194;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_210 = uVar2;
  uStack_208 = uVar5;
  uStack_200 = uVar24;
  uStack_1f8 = uVar4;
  uStack_1f0 = uVar10;
  puStack_1e8 = puVar1;
  lStack_1e0 = lVar12;
  uStack_1d8 = uVar3;
  lStack_1d0 = lVar9;
  uStack_1c8 = uVar6;
  ppuStack_1c0 = &puStack_120;
  _objc_alloc();
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar27 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar7,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar27);
  uVar24 = *(undefined8 *)(lVar8 + 0x20);
  *(undefined **)(lVar8 + 0x20) = puVar11;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar8 + 0x20),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x7c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar8 + 0x20),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar8 + 0x20),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar8 + 0x20),param_3,1);
  func_0x00010c1cfce0(*(undefined8 *)(lVar8 + 0x20),param_3,0);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x50),param_3,*(undefined8 *)(lVar8 + 0x20));
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x20),param_3,0);
  puStack_238 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar8 + 0x20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar8 + 0x10));
  lVar12 = lVar9;
  func_0x00010bf493c0(uVar7,lVar9,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar8 + 0x20);
  lStack_230 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar8 + 0x10));
  uVar24 = uVar10;
  func_0x00010bf493c0(-dVar27,uVar10,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar8 + 0x20);
  uStack_228 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar8 + 0x18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493c0(0x402e000000000000,uVar5,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_220 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_230,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_238,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(lVar12);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_106b7345c;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  ppuStack_250 = &ppuStack_1c0;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar1;
  _objc_release(uVar24);
  func_0x00010c160fc0(*(undefined8 *)(lVar9 + 0x28),param_3,
                      &PTR____CFConstantStringClassReference_110e75b98);
  dVar25 = 12.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar9 + 0x28);
  func_0x00010c271420(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar24);
  _objc_release(puVar1);
  uVar24 = *(undefined8 *)(lVar9 + 0x28);
  func_0x00010c271420(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar24);
  func_0x00010befbd60(*(undefined8 *)(lVar9 + 0x28),param_3,lVar9,PTR_s_otpToSmsPressed__112533a38,
                      0x40);
  func_0x00010befbb60(*(undefined8 *)(lVar9 + 0x50),param_3,*(undefined8 *)(lVar9 + 0x28));
  func_0x00010bf69260(*(undefined8 *)(lVar9 + 0x10));
  func_0x00010c219b60(*(undefined8 *)(lVar9 + 0x28),param_3,0);
  puStack_2f0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar9 + 0x28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar9 + 0x20);
  lStack_2e0 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_2e8 = uVar24;
  func_0x00010bf493c0(dVar25 * 0.5,lVar8,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar9 + 0x28);
  lStack_2d8 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar9 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar9 + 0x10));
  uVar24 = uVar10;
  func_0x00010bf493c0(uVar7,uVar10,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar9 + 0x28);
  uStack_2d0 = uVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar9 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar9 + 0x10));
  uVar2 = uVar5;
  func_0x00010bf493c0(-dVar27,uVar5,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar9 + 0x28);
  uStack_2c8 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf49420(0x403d000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2c0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_2d8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2f0,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(lVar8);
  _objc_release(uStack_2e8);
  lVar8 = lStack_2e0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2f8 = FUN_106b73768;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  ppuStack_300 = &ppuStack_250;
  _objc_alloc();
  dVar26 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar26,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar24 = *(undefined8 *)(lVar8 + 0x30);
  *(undefined **)(lVar8 + 0x30) = puVar1;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar8 + 0x30),param_3,puVar1);
  _objc_release(puVar1);
  func_0x000108b9a9cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar8 + 0x30),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar8 + 0x30),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar8 + 0x30),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar8 + 0x30),param_3,0);
  dVar27 = 1.0;
  func_0x00010c1b6b20(*(undefined8 *)(lVar8 + 0x30));
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x50),param_3,*(undefined8 *)(lVar8 + 0x30));
  func_0x00010bf69260(*(undefined8 *)(lVar8 + 0x10));
  dVar25 = dVar27 * 0.5;
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x30),param_3,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar8 + 0x30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar8 + 0x10));
  lVar12 = lVar9;
  func_0x00010bf493c0(dVar27 + 2.8,lVar9,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar8 + 0x30);
  lStack_368 = lVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar8 + 0x28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar3;
  func_0x00010bf493c0(uVar3,param_3,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_360 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_368,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar24);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(lVar12);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  pcStack_378 = FUN_106b73a00;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0cb0;
  ppuStack_380 = &ppuStack_300;
  func_0x00010c246840(PTR_PTR_1126d0cb0,param_3,lVar9,*(undefined8 *)(lVar9 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar9 + 0x58);
  *(undefined **)(lVar9 + 0x58) = puVar1;
  _objc_release(uVar24);
  func_0x00010bf179a0(*(undefined8 *)(lVar9 + 0x58));
  func_0x00010befbb60(*(undefined8 *)(lVar9 + 0x50),param_3,*(undefined8 *)(lVar9 + 0x58));
  func_0x00010bf69860(*(undefined8 *)(lVar9 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar26 = dVar26 + dVar25 * -2.0;
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar9 + 0x58),param_3,0);
  puStack_418 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = *(long *)(lVar9 + 0x58);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar9 + 0x30);
  lStack_410 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4028000000000000,lVar12,param_3,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar9 + 0x58);
  lStack_408 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar9 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar4;
  func_0x00010bf493c0(dVar25,uVar4,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar9 + 0x58);
  uStack_400 = uVar24;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar9 + 0x58);
  uStack_3f8 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf49420(dVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_3f0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_408,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_418,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar24);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar12);
  _objc_release(uVar10);
  lVar8 = lStack_410;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_428 = FUN_106b73c78;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_480 = uVar2;
  uStack_478 = uVar6;
  uStack_470 = uVar24;
  uStack_468 = uVar5;
  uStack_460 = uVar3;
  uStack_458 = uVar4;
  lStack_450 = lVar12;
  uStack_448 = uVar10;
  uStack_440 = uVar7;
  puStack_438 = puVar1;
  ppuStack_430 = &ppuStack_380;
  _objc_alloc();
  uVar2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar27 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar2,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar27);
  uVar24 = *(undefined8 *)(lVar8 + 0x38);
  *(undefined **)(lVar8 + 0x38) = puVar11;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar8 + 0x38),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar8 + 0x38),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar8 + 0x38),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar8 + 0x38),param_3,0);
  func_0x00010c1cfce0(*(undefined8 *)(lVar8 + 0x38),param_3,0);
  func_0x00010c197160(lVar8,param_3,1);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x50),param_3,*(undefined8 *)(lVar8 + 0x38));
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x38),param_3,0);
  puStack_4a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar8 + 0x38);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar8 + 0x10));
  lVar12 = lVar9;
  func_0x00010bf493c0(uVar2,lVar9,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar8 + 0x38);
  lStack_4a0 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar8 + 0x10));
  uVar24 = uVar10;
  func_0x00010bf493c0(-dVar27,uVar10,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar8 + 0x38);
  uStack_498 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar8 + 0x58);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar27 = 9.0;
  uVar2 = uVar5;
  func_0x00010bf493c0(0x4022000000000000,uVar5,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_490 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_4a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_4a8,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(lVar12);
  _objc_release(uVar3);
  lVar8 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  pcStack_4b8 = FUN_106b73f4c;
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_520 = dVar25;
  dStack_518 = dVar26;
  uStack_510 = uVar2;
  uStack_508 = uVar5;
  uStack_500 = uVar24;
  uStack_4f8 = uVar4;
  uStack_4f0 = uVar10;
  puStack_4e8 = puVar1;
  lStack_4e0 = lVar12;
  uStack_4d8 = uVar3;
  lStack_4d0 = lVar9;
  uStack_4c8 = uVar6;
  ppuStack_4c0 = &ppuStack_430;
  func_0x00010bf69860(*(undefined8 *)(lVar8 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar24 = *(undefined8 *)(lVar8 + 0x40);
  *(undefined **)(lVar8 + 0x40) = puVar1;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar8 + 0x40),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x50),param_3,*(undefined8 *)(lVar8 + 0x40));
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x40),param_3,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar8 + 0x38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar5;
  func_0x00010bf493c0(0,uVar5,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar8 + 0x40);
  uStack_558 = uVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493a0(uVar7,param_3,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar8 + 0x40);
  uStack_550 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c2793a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bf493a0(uVar14,param_3,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar8 + 0x40);
  uStack_548 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar16;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar8 + 0x40);
  uStack_540 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010bf1ff80(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010bf493a0(uVar17,param_3,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_538 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_558,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar4);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar10);
  _objc_release(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar2);
  _objc_release(uVar13);
  _objc_release(uVar7);
  _objc_release(uVar24);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  puVar1 = puVar11;
  func_0x000106b7706c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar11,param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar11,param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar11,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(puVar11,param_3,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar11,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar11,param_3,0);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x40),param_3,puVar11);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar19 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010c08de00(uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf493c0(dVar27,puVar19,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar11;
  puStack_568 = puVar20;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010bf348e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010bf493a0(puVar21,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_560 = puVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_568,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar23);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(uVar2);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar24);
  _objc_release(puVar19);
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  uVar24 = *(undefined8 *)(lVar8 + 0x48);
  *(undefined **)(lVar8 + 0x48) = puVar1;
  _objc_release(uVar24);
  uVar24 = *(undefined8 *)(lVar8 + 0x48);
  func_0x00010c160fc0(uVar24,param_3,&PTR____CFConstantStringClassReference_110e75bb8);
  func_0x000106b77084();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar8 + 0x48),param_3,uVar24);
  _objc_release(uVar24);
  func_0x00010c1d1360(*(undefined8 *)(lVar8 + 0x48),param_3,1);
  func_0x00010befbd60(*(undefined8 *)(lVar8 + 0x48),param_3,lVar8,
                      PTR_s__rememberDeviceSwitchValueChange_112533a40,0x1000);
  uVar24 = *(undefined8 *)(lVar8 + 0x48);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x94);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(uVar24,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x40),param_3,*(undefined8 *)(lVar8 + 0x48));
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x48),param_3,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(lVar8 + 0x48);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493c0(-dVar27,uVar3,param_3,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar8 + 0x48);
  uStack_578 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010bf348e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar4;
  func_0x00010bf493a0(uVar4,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_570 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_578,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar19);
  _objc_release(puVar19);
  _objc_release(uVar24);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar11 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b72e94; end: 106b73193; -[SCCredentials2FAUI _initTitle] */

void FUN_106b72e94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  double dStack_410;
  double dStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined *puStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 **ppuStack_270;
  code *pcStack_268;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar27 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar25,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar27);
  uVar22 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
  FUN_106b77054();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
  uVar23 = 0x4035000000000000;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + 0x18),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + 0x18),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf69b80(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x18),param_2,0);
  puStack_98 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(param_1 + 0x10));
  lVar9 = lVar2;
  func_0x00010bf493c0(uVar25,lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  lStack_90 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(param_1 + 0x10));
  uVar22 = uVar4;
  func_0x00010bf493c0(-dVar27,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar6;
  func_0x00010bf493c0(uVar23,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar25;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_90,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_98,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar25);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar9);
  _objc_release(uVar3);
  lVar10 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_106b73194;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_100 = uVar25;
  uStack_f8 = uVar6;
  uStack_f0 = uVar22;
  uStack_e8 = uVar5;
  uStack_e0 = uVar4;
  puStack_d8 = puVar1;
  lStack_d0 = lVar9;
  uStack_c8 = uVar3;
  lStack_c0 = lVar2;
  uStack_b8 = uVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar27 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar23,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar27);
  uVar22 = *(undefined8 *)(lVar10 + 0x20);
  *(undefined **)(lVar10 + 0x20) = puVar8;
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar10 + 0x20),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar10 + 0x20),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar10 + 0x20),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar10 + 0x20),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(lVar10 + 0x20),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(lVar10 + 0x50),param_2,*(undefined8 *)(lVar10 + 0x20));
  func_0x00010c219b60(*(undefined8 *)(lVar10 + 0x20),param_2,0);
  puStack_128 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar10 + 0x20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar10 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar10 + 0x10));
  lVar9 = lVar2;
  func_0x00010bf493c0(uVar23,lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar10 + 0x20);
  lStack_120 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar10 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar10 + 0x10));
  uVar22 = uVar4;
  func_0x00010bf493c0(-dVar27,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar10 + 0x20);
  uStack_118 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar10 + 0x18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar6;
  func_0x00010bf493c0(0x402e000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar25;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_120,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_128,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar25);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar9);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106b7345c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  ppuStack_140 = &puStack_b0;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
  _objc_release(uVar22);
  func_0x00010c160fc0(*(undefined8 *)(lVar2 + 0x28),param_2,
                      &PTR____CFConstantStringClassReference_110e75b98);
  dVar24 = 12.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010c271420(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar22);
  _objc_release(puVar1);
  uVar22 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010c271420(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar22);
  func_0x00010befbd60(*(undefined8 *)(lVar2 + 0x28),param_2,lVar2,PTR_s_otpToSmsPressed__112533a38,
                      0x40);
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x50),param_2,*(undefined8 *)(lVar2 + 0x28));
  func_0x00010bf69260(*(undefined8 *)(lVar2 + 0x10));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x28),param_2,0);
  puStack_1e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar2 + 0x28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar2 + 0x20);
  lStack_1d0 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_1d8 = uVar22;
  func_0x00010bf493c0(dVar24 * 0.5,lVar9,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  lStack_1c8 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar2 + 0x10));
  uVar22 = uVar4;
  func_0x00010bf493c0(uVar23,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + 0x28);
  uStack_1c0 = uVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar2 + 0x10));
  uVar25 = uVar6;
  func_0x00010bf493c0(-dVar27,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + 0x28);
  uStack_1b8 = uVar25;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar23;
  func_0x00010bf49420(0x403d000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1b0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_1c8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1e0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar23);
  _objc_release(uVar25);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar9);
  _objc_release(uStack_1d8);
  lVar9 = lStack_1d0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_106b73768;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  ppuStack_1f0 = &ppuStack_140;
  _objc_alloc();
  dVar26 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar26,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar22 = *(undefined8 *)(lVar9 + 0x30);
  *(undefined **)(lVar9 + 0x30) = puVar1;
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar9 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000108b9a9cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar9 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar9 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar9 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar9 + 0x30),param_2,0);
  dVar27 = 1.0;
  func_0x00010c1b6b20(*(undefined8 *)(lVar9 + 0x30));
  func_0x00010befbb60(*(undefined8 *)(lVar9 + 0x50),param_2,*(undefined8 *)(lVar9 + 0x30));
  func_0x00010bf69260(*(undefined8 *)(lVar9 + 0x10));
  dVar24 = dVar27 * 0.5;
  func_0x00010c219b60(*(undefined8 *)(lVar9 + 0x30),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar9 + 0x30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar9 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar9 + 0x10));
  lVar10 = lVar2;
  func_0x00010bf493c0(dVar27 + 2.8,lVar2,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar9 + 0x30);
  lStack_258 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar9 + 0x28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar3;
  func_0x00010bf493c0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_250 = uVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_258,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar22);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar10);
  _objc_release(uVar25);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_106b73a00;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0cb0;
  ppuStack_270 = &ppuStack_1f0;
  func_0x00010c246840(PTR_PTR_1126d0cb0,param_2,lVar2,*(undefined8 *)(lVar2 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar2 + 0x58);
  *(undefined **)(lVar2 + 0x58) = puVar1;
  _objc_release(uVar22);
  func_0x00010bf179a0(*(undefined8 *)(lVar2 + 0x58));
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x50),param_2,*(undefined8 *)(lVar2 + 0x58));
  func_0x00010bf69860(*(undefined8 *)(lVar2 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar26 = dVar26 + dVar24 * -2.0;
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x58),param_2,0);
  puStack_308 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar10 = *(long *)(lVar2 + 0x58);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + 0x30);
  lStack_300 = lVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4028000000000000,lVar10,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + 0x58);
  lStack_2f8 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar5;
  func_0x00010bf493c0(dVar24,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + 0x58);
  uStack_2f0 = uVar22;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar7;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + 0x58);
  uStack_2e8 = uVar25;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar23;
  func_0x00010bf49420(dVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2e0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_2f8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_308,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar23);
  _objc_release(uVar25);
  _objc_release(uVar7);
  _objc_release(uVar22);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar10);
  _objc_release(uVar4);
  lVar9 = lStack_300;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_318 = FUN_106b73c78;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_370 = uVar25;
  uStack_368 = uVar7;
  uStack_360 = uVar22;
  uStack_358 = uVar6;
  uStack_350 = uVar3;
  uStack_348 = uVar5;
  lStack_340 = lVar10;
  uStack_338 = uVar4;
  uStack_330 = uVar23;
  puStack_328 = puVar1;
  ppuStack_320 = &ppuStack_270;
  _objc_alloc();
  uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar27 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar25,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar27);
  uVar22 = *(undefined8 *)(lVar9 + 0x38);
  *(undefined **)(lVar9 + 0x38) = puVar8;
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar9 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar9 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar9 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar9 + 0x38),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(lVar9 + 0x38),param_2,0);
  func_0x00010c197160(lVar9,param_2,1);
  func_0x00010befbb60(*(undefined8 *)(lVar9 + 0x50),param_2,*(undefined8 *)(lVar9 + 0x38));
  func_0x00010c219b60(*(undefined8 *)(lVar9 + 0x38),param_2,0);
  puStack_398 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar9 + 0x38);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar9 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar9 + 0x10));
  lVar10 = lVar2;
  func_0x00010bf493c0(uVar25,lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar9 + 0x38);
  lStack_390 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar9 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar9 + 0x10));
  uVar22 = uVar4;
  func_0x00010bf493c0(-dVar27,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar9 + 0x38);
  uStack_388 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar9 + 0x58);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar27 = 9.0;
  uVar25 = uVar6;
  func_0x00010bf493c0(0x4022000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_380 = uVar25;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_390,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_398,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar25);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar10);
  _objc_release(uVar3);
  lVar9 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3a8 = FUN_106b73f4c;
  lStack_420 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_410 = dVar24;
  dStack_408 = dVar26;
  uStack_400 = uVar25;
  uStack_3f8 = uVar6;
  uStack_3f0 = uVar22;
  uStack_3e8 = uVar5;
  uStack_3e0 = uVar4;
  puStack_3d8 = puVar1;
  lStack_3d0 = lVar10;
  uStack_3c8 = uVar3;
  lStack_3c0 = lVar2;
  uStack_3b8 = uVar7;
  ppuStack_3b0 = &ppuStack_320;
  func_0x00010bf69860(*(undefined8 *)(lVar9 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar22 = *(undefined8 *)(lVar9 + 0x40);
  *(undefined **)(lVar9 + 0x40) = puVar1;
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar9 + 0x40),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar9 + 0x50),param_2,*(undefined8 *)(lVar9 + 0x40));
  func_0x00010c219b60(*(undefined8 *)(lVar9 + 0x40),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(lVar9 + 0x40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar9 + 0x38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar6;
  func_0x00010bf493c0(0,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar9 + 0x40);
  uStack_448 = uVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar9 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar23;
  func_0x00010bf493a0(uVar23,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar9 + 0x40);
  uStack_440 = uVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar9 + 0x50);
  func_0x00010c2793a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar9 + 0x40);
  uStack_438 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar9 + 0x40);
  uStack_430 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar9 + 0x50);
  func_0x00010bf1ff80(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_428 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_448,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar25);
  _objc_release(uVar11);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar8 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  puVar1 = puVar8;
  func_0x000106b7706c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar8,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar8,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar8,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(puVar8,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar8,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar8,param_2,0);
  func_0x00010befbb60(*(undefined8 *)(lVar9 + 0x40),param_2,puVar8);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar17 = puVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar9 + 0x40);
  func_0x00010c08de00(uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf493c0(dVar27,puVar17,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar8;
  puStack_458 = puVar18;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar9 + 0x40);
  func_0x00010bf348e0(uVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf493a0(puVar19,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_450 = puVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_458,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar25);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(uVar22);
  _objc_release(puVar17);
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  uVar22 = *(undefined8 *)(lVar9 + 0x48);
  *(undefined **)(lVar9 + 0x48) = puVar1;
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(lVar9 + 0x48);
  func_0x00010c160fc0(uVar22,param_2,&PTR____CFConstantStringClassReference_110e75bb8);
  func_0x000106b77084();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar9 + 0x48),param_2,uVar22);
  _objc_release(uVar22);
  func_0x00010c1d1360(*(undefined8 *)(lVar9 + 0x48),param_2,1);
  func_0x00010befbd60(*(undefined8 *)(lVar9 + 0x48),param_2,lVar9,
                      PTR_s__rememberDeviceSwitchValueChange_112533a40,0x1000);
  uVar22 = *(undefined8 *)(lVar9 + 0x48);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x94);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar9 + 0x40),param_2,*(undefined8 *)(lVar9 + 0x48));
  func_0x00010c219b60(*(undefined8 *)(lVar9 + 0x48),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(lVar9 + 0x48);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar9 + 0x40);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar3;
  func_0x00010bf493c0(-dVar27,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar9 + 0x48);
  uStack_468 = uVar25;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar9 + 0x40);
  func_0x00010bf348e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_460 = uVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_468,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(uVar22);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar25);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_420) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar8 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b73194; end: 106b7345b; -[SCCredentials2FAUI _initTwoFADescription] */

void FUN_106b73194(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  double dStack_370;
  double dStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  long lStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 **ppuStack_310;
  code *pcStack_308;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined8 **ppuStack_280;
  code *pcStack_278;
  undefined *puStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 **ppuStack_1d0;
  code *pcStack_1c8;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar27 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar25,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar27);
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + 0x20),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x20),param_2,0);
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(param_1 + 0x10));
  lVar8 = lVar2;
  func_0x00010bf493c0(uVar25,lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lStack_80 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(param_1 + 0x10));
  uVar23 = uVar4;
  func_0x00010bf493c0(-dVar27,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010bf493c0(0x402e000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_88,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar8);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_106b7345c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
  _objc_release(uVar23);
  func_0x00010c160fc0(*(undefined8 *)(lVar2 + 0x28),param_2,
                      &PTR____CFConstantStringClassReference_110e75b98);
  dVar24 = 12.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010c271420(uVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar23);
  _objc_release(puVar1);
  uVar23 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010c271420(uVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar23);
  func_0x00010befbd60(*(undefined8 *)(lVar2 + 0x28),param_2,lVar2,PTR_s_otpToSmsPressed__112533a38,
                      0x40);
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x50),param_2,*(undefined8 *)(lVar2 + 0x28));
  func_0x00010bf69260(*(undefined8 *)(lVar2 + 0x10));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x28),param_2,0);
  puStack_140 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar2 + 0x28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + 0x20);
  lStack_130 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uVar23;
  func_0x00010bf493c0(dVar24 * 0.5,lVar8,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  lStack_128 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar2 + 0x10));
  uVar23 = uVar4;
  func_0x00010bf493c0(uVar25,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + 0x28);
  uStack_120 = uVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar2 + 0x10));
  uVar10 = uVar6;
  func_0x00010bf493c0(-dVar27,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar2 + 0x28);
  uStack_118 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar25;
  func_0x00010bf49420(0x403d000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_128,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_140,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar25);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar8);
  _objc_release(uStack_138);
  lVar8 = lStack_130;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106b73768;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  ppuStack_150 = &puStack_a0;
  _objc_alloc();
  dVar26 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar26,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar23 = *(undefined8 *)(lVar8 + 0x30);
  *(undefined **)(lVar8 + 0x30) = puVar1;
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar8 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000108b9a9cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar8 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar8 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar8 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar8 + 0x30),param_2,0);
  dVar27 = 1.0;
  func_0x00010c1b6b20(*(undefined8 *)(lVar8 + 0x30));
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x50),param_2,*(undefined8 *)(lVar8 + 0x30));
  func_0x00010bf69260(*(undefined8 *)(lVar8 + 0x10));
  dVar24 = dVar27 * 0.5;
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x30),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar8 + 0x30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar8 + 0x10));
  lVar2 = lVar9;
  func_0x00010bf493c0(dVar27 + 2.8,lVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar8 + 0x30);
  lStack_1b8 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar8 + 0x28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar3;
  func_0x00010bf493c0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1b0 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_1b8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar23);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_106b73a00;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0cb0;
  ppuStack_1d0 = &ppuStack_150;
  func_0x00010c246840(PTR_PTR_1126d0cb0,param_2,lVar9,*(undefined8 *)(lVar9 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar9 + 0x58);
  *(undefined **)(lVar9 + 0x58) = puVar1;
  _objc_release(uVar23);
  func_0x00010bf179a0(*(undefined8 *)(lVar9 + 0x58));
  func_0x00010befbb60(*(undefined8 *)(lVar9 + 0x50),param_2,*(undefined8 *)(lVar9 + 0x58));
  func_0x00010bf69860(*(undefined8 *)(lVar9 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar26 = dVar26 + dVar24 * -2.0;
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar9 + 0x58),param_2,0);
  puStack_268 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar9 + 0x58);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar9 + 0x30);
  lStack_260 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4028000000000000,lVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar9 + 0x58);
  lStack_258 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar9 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar5;
  func_0x00010bf493c0(dVar24,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar9 + 0x58);
  uStack_250 = uVar23;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar9 + 0x58);
  uStack_248 = uVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar25;
  func_0x00010bf49420(dVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_240 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_258,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_268,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar25);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(uVar4);
  lVar8 = lStack_260;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_106b73c78;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_2d0 = uVar10;
  uStack_2c8 = uVar7;
  uStack_2c0 = uVar23;
  uStack_2b8 = uVar6;
  uStack_2b0 = uVar3;
  uStack_2a8 = uVar5;
  lStack_2a0 = lVar2;
  uStack_298 = uVar4;
  uStack_290 = uVar25;
  puStack_288 = puVar1;
  ppuStack_280 = &ppuStack_1d0;
  _objc_alloc();
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar27 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar10,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar27);
  uVar23 = *(undefined8 *)(lVar8 + 0x38);
  *(undefined **)(lVar8 + 0x38) = puVar11;
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar8 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar8 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar8 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar8 + 0x38),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(lVar8 + 0x38),param_2,0);
  func_0x00010c197160(lVar8,param_2,1);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x50),param_2,*(undefined8 *)(lVar8 + 0x38));
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x38),param_2,0);
  puStack_2f8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar8 + 0x38);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar8 + 0x10));
  lVar2 = lVar9;
  func_0x00010bf493c0(uVar10,lVar9,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar8 + 0x38);
  lStack_2f0 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar8 + 0x10));
  uVar23 = uVar4;
  func_0x00010bf493c0(-dVar27,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar8 + 0x38);
  uStack_2e8 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar8 + 0x58);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar27 = 9.0;
  uVar10 = uVar6;
  func_0x00010bf493c0(0x4022000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2e0 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_2f0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2f8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  lVar8 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_308 = FUN_106b73f4c;
  lStack_380 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_370 = dVar24;
  dStack_368 = dVar26;
  uStack_360 = uVar10;
  uStack_358 = uVar6;
  uStack_350 = uVar23;
  uStack_348 = uVar5;
  uStack_340 = uVar4;
  puStack_338 = puVar1;
  lStack_330 = lVar2;
  uStack_328 = uVar3;
  lStack_320 = lVar9;
  uStack_318 = uVar7;
  ppuStack_310 = &ppuStack_280;
  func_0x00010bf69860(*(undefined8 *)(lVar8 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar23 = *(undefined8 *)(lVar8 + 0x40);
  *(undefined **)(lVar8 + 0x40) = puVar1;
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar8 + 0x40),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x50),param_2,*(undefined8 *)(lVar8 + 0x40));
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x40),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar8 + 0x38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar6;
  func_0x00010bf493c0(0,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar8 + 0x40);
  uStack_3a8 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar25;
  func_0x00010bf493a0(uVar25,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar8 + 0x40);
  uStack_3a0 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c2793a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar8 + 0x40);
  uStack_398 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar8 + 0x40);
  uStack_390 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010bf1ff80(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_388 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_3a8,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar25);
  _objc_release(uVar23);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  puVar1 = puVar11;
  func_0x000106b7706c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar11,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar11,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar11,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(puVar11,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar11,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar11,param_2,0);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x40),param_2,puVar11);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar18 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010c08de00(uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010bf493c0(dVar27,puVar18,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar11;
  puStack_3b8 = puVar19;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010bf348e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010bf493a0(puVar20,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_3b0 = puVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_3b8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(uVar10);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(uVar23);
  _objc_release(puVar18);
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  uVar23 = *(undefined8 *)(lVar8 + 0x48);
  *(undefined **)(lVar8 + 0x48) = puVar1;
  _objc_release(uVar23);
  uVar23 = *(undefined8 *)(lVar8 + 0x48);
  func_0x00010c160fc0(uVar23,param_2,&PTR____CFConstantStringClassReference_110e75bb8);
  func_0x000106b77084();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar8 + 0x48),param_2,uVar23);
  _objc_release(uVar23);
  func_0x00010c1d1360(*(undefined8 *)(lVar8 + 0x48),param_2,1);
  func_0x00010befbd60(*(undefined8 *)(lVar8 + 0x48),param_2,lVar8,
                      PTR_s__rememberDeviceSwitchValueChange_112533a40,0x1000);
  uVar23 = *(undefined8 *)(lVar8 + 0x48);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x94);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(uVar23,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x40),param_2,*(undefined8 *)(lVar8 + 0x48));
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x48),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(lVar8 + 0x48);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf493c0(-dVar27,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar8 + 0x48);
  uStack_3c8 = uVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_3c0 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_3c8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar18);
  _objc_release(puVar18);
  _objc_release(uVar23);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_380) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar11 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b7345c; end: 106b73767; -[SCCredentials2FAUI _initOtpToSMSButton] */

void FUN_106b7345c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  double dStack_2e0;
  double dStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 **ppuStack_280;
  code *pcStack_278;
  undefined *puStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_6,1);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_5 + 0x28);
  *(undefined **)(param_5 + 0x28) = puVar1;
  _objc_release(uVar24);
  func_0x00010c160fc0(*(undefined8 *)(param_5 + 0x28),param_6,
                      &PTR____CFConstantStringClassReference_110e75b98);
  dVar25 = 12.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c271420(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar24);
  _objc_release(puVar1);
  uVar24 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c271420(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar24);
  func_0x00010befbd60(*(undefined8 *)(param_5 + 0x28),param_6,param_5,
                      PTR_s_otpToSmsPressed__112533a38,0x40);
  func_0x00010befbb60(*(undefined8 *)(param_5 + 0x50),param_6,*(undefined8 *)(param_5 + 0x28));
  func_0x00010bf69260(*(undefined8 *)(param_5 + 0x10));
  func_0x00010c219b60(*(undefined8 *)(param_5 + 0x28),param_6,0);
  puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_5 + 0x28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_5 + 0x20);
  lStack_a0 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = uVar24;
  func_0x00010bf493c0(dVar25 * 0.5,lVar2,param_6,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x28);
  lStack_98 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(param_5 + 0x10));
  uVar24 = uVar3;
  func_0x00010bf493c0(param_2,uVar3,param_6,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + 0x28);
  uStack_90 = uVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(param_5 + 0x10));
  uVar9 = uVar5;
  func_0x00010bf493c0(-param_4,uVar5,param_6,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + 0x28);
  uStack_88 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf49420(0x403d000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b0,param_6,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uStack_a8);
  lVar2 = lStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_106b73768;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  dVar26 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar26,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar24 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined **)(lVar2 + 0x30) = puVar1;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar2 + 0x30),param_6,puVar1);
  _objc_release(puVar1);
  func_0x000108b9a9cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar2 + 0x30),param_6,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar2 + 0x30),param_6,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar2 + 0x30),param_6,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar2 + 0x30),param_6,0);
  dVar25 = 1.0;
  func_0x00010c1b6b20(*(undefined8 *)(lVar2 + 0x30));
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x50),param_6,*(undefined8 *)(lVar2 + 0x30));
  func_0x00010bf69260(*(undefined8 *)(lVar2 + 0x10));
  dVar27 = dVar25 * 0.5;
  func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x30),param_6,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar2 + 0x30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar2 + 0x10));
  lVar12 = lVar8;
  func_0x00010bf493c0(dVar25 + 2.8,lVar8,param_6,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + 0x30);
  lStack_128 = lVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar10;
  func_0x00010bf493c0(uVar10,param_6,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_128,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_6,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar24);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(lVar12);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106b73a00;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0cb0;
  ppuStack_140 = &puStack_c0;
  func_0x00010c246840(PTR_PTR_1126d0cb0,param_6,lVar8,*(undefined8 *)(lVar8 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar8 + 0x58);
  *(undefined **)(lVar8 + 0x58) = puVar1;
  _objc_release(uVar24);
  func_0x00010bf179a0(*(undefined8 *)(lVar8 + 0x58));
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x50),param_6,*(undefined8 *)(lVar8 + 0x58));
  func_0x00010bf69860(*(undefined8 *)(lVar8 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar26 = dVar26 + dVar27 * -2.0;
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x58),param_6,0);
  puStack_1d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = *(long *)(lVar8 + 0x58);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar8 + 0x30);
  lStack_1d0 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4028000000000000,lVar12,param_6,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar8 + 0x58);
  lStack_1c8 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar4;
  func_0x00010bf493c0(dVar27,uVar4,param_6,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar8 + 0x58);
  uStack_1c0 = uVar24;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar8 + 0x58);
  uStack_1b8 = uVar9;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf49420(dVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1b0 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_1c8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1d8,param_6,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar24);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar12);
  _objc_release(uVar3);
  lVar2 = lStack_1d0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_106b73c78;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_240 = uVar9;
  uStack_238 = uVar6;
  uStack_230 = uVar24;
  uStack_228 = uVar5;
  uStack_220 = uVar10;
  uStack_218 = uVar4;
  lStack_210 = lVar12;
  uStack_208 = uVar3;
  uStack_200 = uVar7;
  puStack_1f8 = puVar1;
  ppuStack_1f0 = &ppuStack_140;
  _objc_alloc();
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar25 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar9,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar25);
  uVar24 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined **)(lVar2 + 0x38) = puVar11;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar2 + 0x38),param_6,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar2 + 0x38),param_6,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar2 + 0x38),param_6,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar2 + 0x38),param_6,0);
  func_0x00010c1cfce0(*(undefined8 *)(lVar2 + 0x38),param_6,0);
  func_0x00010c197160(lVar2,param_6,1);
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x50),param_6,*(undefined8 *)(lVar2 + 0x38));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x38),param_6,0);
  puStack_268 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar2 + 0x38);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar2 + 0x10));
  lVar12 = lVar8;
  func_0x00010bf493c0(uVar9,lVar8,param_6,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  lStack_260 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar2 + 0x10));
  uVar24 = uVar3;
  func_0x00010bf493c0(-dVar25,uVar3,param_6,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + 0x38);
  uStack_258 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + 0x58);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar25 = 9.0;
  uVar9 = uVar5;
  func_0x00010bf493c0(0x4022000000000000,uVar5,param_6,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_250 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_260,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_268,param_6,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar12);
  _objc_release(uVar10);
  lVar2 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_106b73f4c;
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_2e0 = dVar27;
  dStack_2d8 = dVar26;
  uStack_2d0 = uVar9;
  uStack_2c8 = uVar5;
  uStack_2c0 = uVar24;
  uStack_2b8 = uVar4;
  uStack_2b0 = uVar3;
  puStack_2a8 = puVar1;
  lStack_2a0 = lVar12;
  uStack_298 = uVar10;
  lStack_290 = lVar8;
  uStack_288 = uVar6;
  ppuStack_280 = &ppuStack_1f0;
  func_0x00010bf69860(*(undefined8 *)(lVar2 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar24 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined **)(lVar2 + 0x40) = puVar1;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar2 + 0x40),param_6,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x50),param_6,*(undefined8 *)(lVar2 + 0x40));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x40),param_6,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + 0x38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar5;
  func_0x00010bf493c0(0,uVar5,param_6,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + 0x40);
  uStack_318 = uVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0(uVar7,param_6,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar2 + 0x40);
  uStack_310 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c2793a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar14;
  func_0x00010bf493a0(uVar14,param_6,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar2 + 0x40);
  uStack_308 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar2 + 0x40);
  uStack_300 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010bf1ff80(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010bf493a0(uVar17,param_6,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2f8 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_318,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_6,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar4);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar10);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(uVar7);
  _objc_release(uVar24);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  puVar1 = puVar11;
  func_0x000106b7706c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar11,param_6,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar11,param_6,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar11,param_6,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(puVar11,param_6,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar11,param_6,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar11,param_6,0);
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x40),param_6,puVar11);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar19 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010c08de00(uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf493c0(dVar25,puVar19,param_6,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar11;
  puStack_328 = puVar20;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010bf348e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010bf493a0(puVar21,param_6,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_320 = puVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_328,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_6,puVar23);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(uVar9);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar24);
  _objc_release(puVar19);
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  uVar24 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined **)(lVar2 + 0x48) = puVar1;
  _objc_release(uVar24);
  uVar24 = *(undefined8 *)(lVar2 + 0x48);
  func_0x00010c160fc0(uVar24,param_6,&PTR____CFConstantStringClassReference_110e75bb8);
  func_0x000106b77084();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar2 + 0x48),param_6,uVar24);
  _objc_release(uVar24);
  func_0x00010c1d1360(*(undefined8 *)(lVar2 + 0x48),param_6,1);
  func_0x00010befbd60(*(undefined8 *)(lVar2 + 0x48),param_6,lVar2,
                      PTR_s__rememberDeviceSwitchValueChange_112533a40,0x1000);
  uVar24 = *(undefined8 *)(lVar2 + 0x48);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x94);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(uVar24,param_6,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x40),param_6,*(undefined8 *)(lVar2 + 0x48));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x48),param_6,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(lVar2 + 0x48);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf493c0(-dVar25,uVar10,param_6,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + 0x48);
  uStack_338 = uVar9;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010bf348e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar4;
  func_0x00010bf493a0(uVar4,param_6,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_330 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_338,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_6,puVar19);
  _objc_release(puVar19);
  _objc_release(uVar24);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar11 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b73768; end: 106b739ff; -[SCCredentials2FAUI _initCodeLabel] */

void FUN_106b73768(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  double dStack_230;
  double dStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  dVar26 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar26,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar24 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000108b9a9cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + 0x30),param_2,0);
  dVar25 = 1.0;
  func_0x00010c1b6b20(*(undefined8 *)(param_1 + 0x30));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf69260(*(undefined8 *)(param_1 + 0x10));
  dVar27 = dVar25 * 0.5;
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x30),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + 0x10));
  lVar4 = lVar2;
  func_0x00010bf493c0(dVar25 + 2.8,lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  lStack_78 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar5;
  func_0x00010bf493c0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar24);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106b73a00;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0cb0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c246840(PTR_PTR_1126d0cb0,param_2,lVar2,*(undefined8 *)(lVar2 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar2 + 0x58);
  *(undefined **)(lVar2 + 0x58) = puVar1;
  _objc_release(uVar24);
  func_0x00010bf179a0(*(undefined8 *)(lVar2 + 0x58));
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x50),param_2,*(undefined8 *)(lVar2 + 0x58));
  func_0x00010bf69860(*(undefined8 *)(lVar2 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar26 = dVar26 + dVar27 * -2.0;
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x58),param_2,0);
  puStack_128 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar2 + 0x58);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + 0x30);
  lStack_120 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4028000000000000,lVar8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + 0x58);
  lStack_118 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar9;
  func_0x00010bf493c0(dVar27,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar2 + 0x58);
  uStack_110 = uVar24;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar2 + 0x58);
  uStack_108 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  func_0x00010bf49420(dVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_118,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_128,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar24);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar6);
  lVar4 = lStack_120;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106b73c78;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_190 = uVar3;
  uStack_188 = uVar11;
  uStack_180 = uVar24;
  uStack_178 = uVar10;
  uStack_170 = uVar5;
  uStack_168 = uVar9;
  lStack_160 = lVar8;
  uStack_158 = uVar6;
  uStack_150 = uVar12;
  puStack_148 = puVar1;
  ppuStack_140 = &puStack_90;
  _objc_alloc();
  uVar3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar25 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar3,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar25);
  uVar24 = *(undefined8 *)(lVar4 + 0x38);
  *(undefined **)(lVar4 + 0x38) = puVar7;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar4 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar4 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar4 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar4 + 0x38),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(lVar4 + 0x38),param_2,0);
  func_0x00010c197160(lVar4,param_2,1);
  func_0x00010befbb60(*(undefined8 *)(lVar4 + 0x50),param_2,*(undefined8 *)(lVar4 + 0x38));
  func_0x00010c219b60(*(undefined8 *)(lVar4 + 0x38),param_2,0);
  puStack_1b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar4 + 0x38);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar4 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar4 + 0x10));
  lVar2 = lVar8;
  func_0x00010bf493c0(uVar3,lVar8,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar4 + 0x38);
  lStack_1b0 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar4 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar4 + 0x10));
  uVar24 = uVar6;
  func_0x00010bf493c0(-dVar25,uVar6,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar4 + 0x38);
  uStack_1a8 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar4 + 0x58);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar25 = 9.0;
  uVar3 = uVar10;
  func_0x00010bf493c0(0x4022000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1a0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_1b0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1b8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar24);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(uVar5);
  lVar4 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_106b73f4c;
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_230 = dVar27;
  dStack_228 = dVar26;
  uStack_220 = uVar3;
  uStack_218 = uVar10;
  uStack_210 = uVar24;
  uStack_208 = uVar9;
  uStack_200 = uVar6;
  puStack_1f8 = puVar1;
  lStack_1f0 = lVar2;
  uStack_1e8 = uVar5;
  lStack_1e0 = lVar8;
  uStack_1d8 = uVar11;
  ppuStack_1d0 = &ppuStack_140;
  func_0x00010bf69860(*(undefined8 *)(lVar4 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar24 = *(undefined8 *)(lVar4 + 0x40);
  *(undefined **)(lVar4 + 0x40) = puVar1;
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar4 + 0x40),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar4 + 0x50),param_2,*(undefined8 *)(lVar4 + 0x40));
  func_0x00010c219b60(*(undefined8 *)(lVar4 + 0x40),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(lVar4 + 0x40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar4 + 0x38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar10;
  func_0x00010bf493c0(0,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar4 + 0x40);
  uStack_268 = uVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar4 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar4 + 0x40);
  uStack_260 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar4 + 0x50);
  func_0x00010c2793a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar4 + 0x40);
  uStack_258 = uVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar16;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar4 + 0x40);
  uStack_250 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar4 + 0x50);
  func_0x00010bf1ff80(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_248 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_268,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar9);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar24);
  _objc_release(uVar11);
  _objc_release(uVar10);
  puVar7 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  puVar1 = puVar7;
  func_0x000106b7706c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar7,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar7,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar7,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(puVar7,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar7,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar7,param_2,0);
  func_0x00010befbb60(*(undefined8 *)(lVar4 + 0x40),param_2,puVar7);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar19 = puVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar4 + 0x40);
  func_0x00010c08de00(uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf493c0(dVar25,puVar19,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar7;
  puStack_278 = puVar20;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar4 + 0x40);
  func_0x00010bf348e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010bf493a0(puVar21,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_270 = puVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_278,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(uVar3);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar24);
  _objc_release(puVar19);
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  uVar24 = *(undefined8 *)(lVar4 + 0x48);
  *(undefined **)(lVar4 + 0x48) = puVar1;
  _objc_release(uVar24);
  uVar24 = *(undefined8 *)(lVar4 + 0x48);
  func_0x00010c160fc0(uVar24,param_2,&PTR____CFConstantStringClassReference_110e75bb8);
  func_0x000106b77084();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar4 + 0x48),param_2,uVar24);
  _objc_release(uVar24);
  func_0x00010c1d1360(*(undefined8 *)(lVar4 + 0x48),param_2,1);
  func_0x00010befbd60(*(undefined8 *)(lVar4 + 0x48),param_2,lVar4,
                      PTR_s__rememberDeviceSwitchValueChange_112533a40,0x1000);
  uVar24 = *(undefined8 *)(lVar4 + 0x48);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x94);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(uVar24,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar4 + 0x40),param_2,*(undefined8 *)(lVar4 + 0x48));
  func_0x00010c219b60(*(undefined8 *)(lVar4 + 0x48),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(lVar4 + 0x48);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar4 + 0x40);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493c0(-dVar25,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar4 + 0x48);
  uStack_288 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar4 + 0x40);
  func_0x00010bf348e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_280 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_288,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar19);
  _objc_release(puVar19);
  _objc_release(uVar24);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar7 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b73a00; end: 106b73c77; -[SCCredentials2FAUI _initCodeInputField] */

void FUN_106b73a00(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  double dStack_1b0;
  double dStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0cb0;
  func_0x00010c246840(PTR_PTR_1126d0cb0,param_5,param_4,*(undefined8 *)(param_4 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_4 + 0x58);
  *(undefined **)(param_4 + 0x58) = puVar1;
  _objc_release(uVar23);
  func_0x00010bf179a0(*(undefined8 *)(param_4 + 0x58));
  func_0x00010befbb60(*(undefined8 *)(param_4 + 0x50),param_5,*(undefined8 *)(param_4 + 0x58));
  func_0x00010bf69860(*(undefined8 *)(param_4 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  param_3 = param_3 + param_1 * -2.0;
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_4 + 0x58),param_5,0);
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_4 + 0x58);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_4 + 0x30);
  lStack_a0 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4028000000000000,lVar2,param_5,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_4 + 0x58);
  lStack_98 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_4 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar4;
  func_0x00010bf493c0(param_1,uVar4,param_5,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + 0x58);
  uStack_90 = uVar23;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar6;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_4 + 0x58);
  uStack_88 = uVar24;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010bf49420(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&lStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a8,param_5,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar24);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  lVar8 = lStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_106b73c78;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_110 = uVar24;
  uStack_108 = uVar6;
  uStack_100 = uVar23;
  uStack_f8 = uVar5;
  uStack_f0 = uVar11;
  uStack_e8 = uVar4;
  lStack_e0 = lVar2;
  uStack_d8 = uVar3;
  uStack_d0 = uVar7;
  puStack_c8 = puVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar25 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar24,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar25);
  uVar23 = *(undefined8 *)(lVar8 + 0x38);
  *(undefined **)(lVar8 + 0x38) = puVar9;
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar8 + 0x38),param_5,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar8 + 0x38),param_5,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar8 + 0x38),param_5,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar8 + 0x38),param_5,0);
  func_0x00010c1cfce0(*(undefined8 *)(lVar8 + 0x38),param_5,0);
  func_0x00010c197160(lVar8,param_5,1);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x50),param_5,*(undefined8 *)(lVar8 + 0x38));
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x38),param_5,0);
  puStack_138 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar10 = *(long *)(lVar8 + 0x38);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar8 + 0x10));
  lVar2 = lVar10;
  func_0x00010bf493c0(uVar24,lVar10,param_5,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar8 + 0x38);
  lStack_130 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(lVar8 + 0x10));
  uVar23 = uVar3;
  func_0x00010bf493c0(-dVar25,uVar3,param_5,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar8 + 0x38);
  uStack_128 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar8 + 0x58);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar25 = 9.0;
  uVar24 = uVar5;
  func_0x00010bf493c0(0x4022000000000000,uVar5,param_5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&lStack_130,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_138,param_5,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar24);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar23);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar11);
  lVar8 = lVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106b73f4c;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_1b0 = param_1;
  dStack_1a8 = param_3;
  uStack_1a0 = uVar24;
  uStack_198 = uVar5;
  uStack_190 = uVar23;
  uStack_188 = uVar4;
  uStack_180 = uVar3;
  puStack_178 = puVar1;
  lStack_170 = lVar2;
  uStack_168 = uVar11;
  lStack_160 = lVar10;
  uStack_158 = uVar6;
  ppuStack_150 = &puStack_c0;
  func_0x00010bf69860(*(undefined8 *)(lVar8 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar23 = *(undefined8 *)(lVar8 + 0x40);
  *(undefined **)(lVar8 + 0x40) = puVar1;
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar8 + 0x40),param_5,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x50),param_5,*(undefined8 *)(lVar8 + 0x40));
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x40),param_5,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar8 + 0x38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar5;
  func_0x00010bf493c0(0,uVar5,param_5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar8 + 0x40);
  uStack_1e8 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar7;
  func_0x00010bf493a0(uVar7,param_5,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar8 + 0x40);
  uStack_1e0 = uVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010c2793a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010bf493a0(uVar13,param_5,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar8 + 0x40);
  uStack_1d8 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar15;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar8 + 0x40);
  uStack_1d0 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar8 + 0x50);
  func_0x00010bf1ff80(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010bf493a0(uVar16,param_5,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1c8 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_1e8,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_5,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar4);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar24);
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar9 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  puVar1 = puVar9;
  func_0x000106b7706c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar9,param_5,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar9,param_5,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar9,param_5,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(puVar9,param_5,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar9,param_5,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar9,param_5,0);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x40),param_5,puVar9);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar18 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010c08de00(uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010bf493c0(dVar25,puVar18,param_5,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar9;
  puStack_1f8 = puVar19;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010bf348e0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010bf493a0(puVar20,param_5,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1f0 = puVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&puStack_1f8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_5,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(uVar24);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(uVar23);
  _objc_release(puVar18);
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  uVar23 = *(undefined8 *)(lVar8 + 0x48);
  *(undefined **)(lVar8 + 0x48) = puVar1;
  _objc_release(uVar23);
  uVar23 = *(undefined8 *)(lVar8 + 0x48);
  func_0x00010c160fc0(uVar23,param_5,&PTR____CFConstantStringClassReference_110e75bb8);
  func_0x000106b77084();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar8 + 0x48),param_5,uVar23);
  _objc_release(uVar23);
  func_0x00010c1d1360(*(undefined8 *)(lVar8 + 0x48),param_5,1);
  func_0x00010befbd60(*(undefined8 *)(lVar8 + 0x48),param_5,lVar8,
                      PTR_s__rememberDeviceSwitchValueChange_112533a40,0x1000);
  uVar23 = *(undefined8 *)(lVar8 + 0x48);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0x94);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(uVar23,param_5,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar8 + 0x40),param_5,*(undefined8 *)(lVar8 + 0x48));
  func_0x00010c219b60(*(undefined8 *)(lVar8 + 0x48),param_5,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(lVar8 + 0x48);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar11;
  func_0x00010bf493c0(-dVar25,uVar11,param_5,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar8 + 0x48);
  uStack_208 = uVar24;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar8 + 0x40);
  func_0x00010bf348e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar4;
  func_0x00010bf493a0(uVar4,param_5,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_200 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_208,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_5,puVar18);
  _objc_release(puVar18);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar24);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar9 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b73c78; end: 106b73f4b; -[SCCredentials2FAUI _initErrorLabel] */

void FUN_106b73c78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar24 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar23,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar24);
  uVar22 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + 0x38),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + 0x38),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + 0x38),param_2,0);
  func_0x00010c197160(param_1,param_2,1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x38),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(param_1 + 0x10));
  lVar4 = lVar2;
  func_0x00010bf493c0(uVar23,lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  lStack_80 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69880(*(undefined8 *)(param_1 + 0x10));
  uVar22 = uVar5;
  func_0x00010bf493c0(-dVar24,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar24 = 9.0;
  uVar23 = uVar7;
  func_0x00010bf493c0(0x4022000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar23);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar22);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf69860(*(undefined8 *)(lVar2 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar22 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined **)(lVar2 + 0x40) = puVar1;
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar2 + 0x40),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x50),param_2,*(undefined8 *)(lVar2 + 0x40));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x40),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + 0x38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar7;
  func_0x00010bf493c0(0,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + 0x40);
  uStack_138 = uVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar2 + 0x40);
  uStack_130 = uVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010c2793a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar2 + 0x40);
  uStack_128 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar2 + 0x40);
  uStack_120 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar2 + 0x50);
  func_0x00010bf1ff80(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_118 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_138,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar5);
  _objc_release(uVar14);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar23);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar22);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar9 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  puVar1 = puVar9;
  func_0x000106b7706c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar9,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar9,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar9,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(puVar9,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar9,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar9,param_2,0);
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x40),param_2,puVar9);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar17 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010c08de00(uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf493c0(dVar24,puVar17,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar9;
  puStack_148 = puVar18;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010bf348e0(uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf493a0(puVar19,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_140 = puVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_148,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar23);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(uVar22);
  _objc_release(puVar17);
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  uVar22 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined **)(lVar2 + 0x48) = puVar1;
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(lVar2 + 0x48);
  func_0x00010c160fc0(uVar22,param_2,&PTR____CFConstantStringClassReference_110e75bb8);
  func_0x000106b77084();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar2 + 0x48),param_2,uVar22);
  _objc_release(uVar22);
  func_0x00010c1d1360(*(undefined8 *)(lVar2 + 0x48),param_2,1);
  func_0x00010befbd60(*(undefined8 *)(lVar2 + 0x48),param_2,lVar2,
                      PTR_s__rememberDeviceSwitchValueChange_112533a40,0x1000);
  uVar22 = *(undefined8 *)(lVar2 + 0x48);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x94);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(lVar2 + 0x40),param_2,*(undefined8 *)(lVar2 + 0x48));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + 0x48),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(lVar2 + 0x48);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010c2793a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar3;
  func_0x00010bf493c0(-dVar24,uVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + 0x48);
  uStack_158 = uVar23;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010bf348e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_150 = uVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_158,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(uVar22);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar9 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b73f4c; end: 106b745d3; -[SCCredentials2FAUI _initRememberDeviceView] */

void FUN_106b73f4c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf69860(*(undefined8 *)(param_2 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar21 = *(undefined8 *)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = puVar1;
  _objc_release(uVar21);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_2 + 0x40),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_2 + 0x50),param_3,*(undefined8 *)(param_2 + 0x40));
  func_0x00010c219b60(*(undefined8 *)(param_2 + 0x40),param_3,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010bf493c0(0,uVar2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uStack_a8 = uVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf493a0(uVar4,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uStack_a0 = uVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c2793a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar6;
  func_0x00010bf493a0(uVar6,param_3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  uStack_98 = uVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar8;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  uStack_90 = uVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010bf1ff80(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar9;
  func_0x00010bf493a0(uVar9,param_3,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_a8,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar20);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar19);
  _objc_release(uVar8);
  _objc_release(uVar18);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar15);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar21);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  puVar1 = puVar11;
  func_0x000106b7706c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar11,param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar11,param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar11,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(puVar11,param_3,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar11,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar11,param_3,0);
  func_0x00010befbb60(*(undefined8 *)(param_2 + 0x40),param_3,puVar11);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar12 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c08de00(uVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf493c0(param_1,puVar12,param_3,uVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  puStack_b8 = puVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010bf348e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493a0(puVar14,param_3,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_b8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar17);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar21);
  _objc_release(puVar12);
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  uVar21 = *(undefined8 *)(param_2 + 0x48);
  *(undefined **)(param_2 + 0x48) = puVar1;
  _objc_release(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c160fc0(uVar21,param_3,&PTR____CFConstantStringClassReference_110e75bb8);
  func_0x000106b77084();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_2 + 0x48),param_3,uVar21);
  _objc_release(uVar21);
  func_0x00010c1d1360(*(undefined8 *)(param_2 + 0x48),param_3,1);
  func_0x00010befbd60(*(undefined8 *)(param_2 + 0x48),param_3,param_2,
                      PTR_s__rememberDeviceSwitchValueChange_112533a40,0x1000);
  uVar21 = *(undefined8 *)(param_2 + 0x48);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x94);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(uVar21,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x48));
  func_0x00010c219b60(*(undefined8 *)(param_2 + 0x48),param_3,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar18 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010bf493c0(-param_1,uVar18,param_3,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_2 + 0x48);
  uStack_c8 = uVar15;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010bf348e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf493a0(uVar20,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_c8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar21);
  _objc_release(uVar2);
  _objc_release(uVar20);
  _objc_release(uVar15);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar11 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b745d4; end: 106b745eb; -[SCCredentials2FAUI delegate] */

void FUN_106b745d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b745ec; end: 106b745f7; -[SCCredentials2FAUI setDelegate:] */

void FUN_106b745ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 106b745f8; end: 106b7469b; -[SCCredentials2FAUI .cxx_destruct] */

void FUN_106b745f8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b7469c; end: 106b74847; -[SCUnauthenticatedContinueButton initWithStyleHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106b7469c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  double dVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f52b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112759030;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf68ee0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf699e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b20(0x3ff0000000000000);
    _objc_release(puVar3);
    uVar2 = param_3;
    func_0x00010bf68ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    dVar5 = 1.0;
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(puVar3);
    func_0x00010bf68ec0(param_3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar5 * 0.5);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b74848; end: 106b7495b; -[SCUnauthenticatedContinueButton preferredWidthWithInnerHorizontalPadding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106b74848(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar5 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  lVar2 = (long)_DAT_112759030;
  dVar3 = dVar5;
  func_0x00010bf69860(*(undefined8 *)(param_5 + lVar2));
  dVar6 = dVar3;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar4 = dVar6;
  func_0x00010bf69160(*(undefined8 *)(param_5 + lVar2));
  dVar6 = dVar6 + dVar4 * -2.0;
  _objc_release(puVar1);
  func_0x00010bf20c00(param_5);
  dVar4 = param_4;
  func_0x00010c23d5a0(param_5);
  func_0x00010c2712a0(param_5);
  func_0x00010c2712a0(param_5);
  dVar4 = param_3 + param_4 + dVar4 + param_1 * 2.0;
  if ((dVar6 <= dVar4) && (dVar5 = dVar5 + dVar3 * -2.0, dVar6 = dVar4, dVar5 < dVar4)) {
    dVar6 = dVar5;
  }
  return dVar6;
}



/* Entry: 106b7495c; end: 106b7499b; -[SCUnauthenticatedContinueButton setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b7495c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112759034);
  *(undefined8 *)(param_1 + _DAT_112759034) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed3a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBackgroundColor_112592848);
  return;
}



/* Entry: 106b7499c; end: 106b749e3; -[SCUnauthenticatedContinueButton setEnabled:] */

void FUN_106b7499c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f52b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setEnabled__112642f38);
  func_0x00010bed3a80(param_1);
  return;
}



/* Entry: 106b749e4; end: 106b74a2b; -[SCUnauthenticatedContinueButton setUserInteractionEnabled:] */

void FUN_106b749e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f52b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setUserInteractionEnabled__112665468);
  func_0x00010bed3a80(param_1);
  return;
}



/* Entry: 106b74a2c; end: 106b74aef; -[SCUnauthenticatedContinueButton _updateBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b74a2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c082800();
  if ((int)lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + _DAT_112759034);
    _objc_retain(puVar2);
  }
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc0fe0();
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126f52b0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setBackgroundColor__112639330,puVar2);
  _objc_release(puVar2);
  return;
}



/* Entry: 106b74af0; end: 106b74b57; -[SCUnauthenticatedContinueButton _activityContentColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b74af0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b88a460();
  if (((int)lVar1 == 0) || (2 < lRam00000001138466f0)) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf68ee0(*(undefined8 *)(param_1 + _DAT_112759030));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b74b58; end: 106b74c4b; -[SCUnauthenticatedContinueButton indicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b74b58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar4 = (long)_DAT_112759038;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010bdc5380(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffb60(puVar1,param_2,lVar3,1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106b74c4c;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106b74c4c; end: 106b74ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b74c4c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = (long)_DAT_112759030;
  func_0x00010c09d0c0(*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar4));
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c09d0c0(*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar4));
  func_0x00010c0df720(param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b74ddc; end: 106b74eb7; -[SCUnauthenticatedContinueButton setActivityIndicatorHidden:alignment:] */

void FUN_106b74ddc(undefined *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  func_0x00010bfed500();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c1a7f60();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bfed500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1a7f60();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bfed500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558c0();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bdc5380(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216380(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b74eb8; end: 106b74ef7; -[SCUnauthenticatedContinueButton setIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b74eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759038;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b74ef8; end: 106b74f47; -[SCUnauthenticatedContinueButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b74ef8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759038,0);
  _objc_storeStrong(param_1 + _DAT_112759034,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759030,0);
  return;
}



/* Entry: 106b74f48; end: 106b75297; -[SCLoginOdlvLandingOtpOptionCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106b74f48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f52b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c1fbac0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11275903c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar5 = (long)_DAT_112759040;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = puVar1;
    func_0x00010bdc3ac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_112759044;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 106b75298; end: 106b753d3;  */

void FUN_106b75298(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b753d4; end: 106b7585f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b753d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275903c);
  func_0x00010c0bbea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4018000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b75860; end: 106b758cb; -[SCLoginOdlvLandingOtpOptionCell setContentWithOptionLabel:optionValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b75860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275903c);
  _objc_retain(param_4);
  func_0x00010c212f20(uVar1,param_2,param_3);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112759040),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b758cc; end: 106b758df; -[SCLoginOdlvLandingOtpOptionCell _SCRegisterCaptchaCheckmarkImage] */

void FUN_106b758cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110e75bf8);
  return;
}



/* Entry: 106b758e0; end: 106b758ff; -[SCLoginOdlvLandingOtpOptionCell setIsCheckMarkVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b758e0(long param_1,undefined8 param_2,uint param_3)

{
  *(char *)(param_1 + _DAT_112759048) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759044),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 106b75900; end: 106b7590f; -[SCLoginOdlvLandingOtpOptionCell isCheckMarkVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b75900(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112759048);
}



/* Entry: 106b75910; end: 106b7591f; -[SCLoginOdlvLandingOtpOptionCell optionLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b75910(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275903c);
}



/* Entry: 106b75920; end: 106b7592f; -[SCLoginOdlvLandingOtpOptionCell optionValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b75920(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759040);
}



/* Entry: 106b75930; end: 106b7593f; -[SCLoginOdlvLandingOtpOptionCell checkmarkImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b75930(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759044);
}



/* Entry: 106b75940; end: 106b7598f; -[SCLoginOdlvLandingOtpOptionCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b75940(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759044,0);
  _objc_storeStrong(param_1 + _DAT_112759040,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275903c,0);
  return;
}



/* Entry: 106b75990; end: 106b75997; -[SCUnauthenticatedBaseView initWithStyleHelper:] */

void FUN_106b75990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04ed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithStyleHelper_customLayout_1125f1568,param_3,0);
  return;
}



/* Entry: 106b75998; end: 106b75a87; -[SCUnauthenticatedBaseView initWithStyleHelper:customLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b75998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f52c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11275904c),param_3);
    uVar2 = param_3;
    func_0x00010bf68da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(uVar2);
    func_0x00010bfef700(puVar1);
    func_0x00010bdc79c0(puVar1);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112759050);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112759050) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b75a88; end: 106b75d73; -[SCUnauthenticatedBaseView didMoveToSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b75a88(long param_1)

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
  long lVar16;
  undefined *puVar17;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f52c0;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_didMoveToSuperview_1125bb968);
  lVar2 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_release();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112759050);
    if (lVar3 == 0) {
      func_0x00010c219b60(param_1);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar3 = param_1;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      lStack_88 = lVar5;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1;
      lStack_80 = lVar9;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_1;
      lStack_78 = lVar13;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c262ca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar14;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = lVar16;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(param_1);
      _objc_release(lVar14);
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
      _objc_release(lVar2);
      _objc_release(lVar3);
    }
    else {
      (**(code **)(lVar3 + 0x10))(lVar3,param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c228760();
  func_0x00010c2287e0(lVar3);
  func_0x00010c228b20(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2284f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_setupBackButton_112667b60);
  return;
}



/* Entry: 106b75d74; end: 106b75da7; -[SCUnauthenticatedBaseView initSubviews] */

void FUN_106b75d74(undefined8 param_1)

{
  func_0x00010c228760();
  func_0x00010c2287e0(param_1);
  func_0x00010c228b20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2284f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setupBackButton_112667b60);
  return;
}



/* Entry: 106b75da8; end: 106b76057; -[SCUnauthenticatedBaseView setupContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b75da8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_new();
  lVar16 = (long)_DAT_112759054;
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar16),param_2,1);
  func_0x00010c1b6de0(*(undefined8 *)(param_1 + lVar16),param_2,1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112759058;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined8 *)(param_1 + lVar15) = uVar13;
  _objc_release(uVar14);
  _objc_release(lVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_1 + lVar16);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf493a0(lVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  lStack_88 = lVar5;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = *(undefined8 *)(param_1 + lVar15);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(lVar16);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(lVar17);
  _objc_release(uVar14);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11275905c;
  uVar13 = *(undefined8 *)(lVar4 + lVar17);
  *(undefined **)(lVar4 + lVar17) = puVar1;
  _objc_release(uVar13);
  func_0x00010c198080(*(undefined8 *)(lVar4 + lVar17),param_2,1);
  uVar13 = *(undefined8 *)(lVar4 + lVar17);
  lVar3 = lVar4 + _DAT_11275904c;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010c08e4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar13,param_2,lVar5,0);
  _objc_release(lVar5);
  _objc_release(lVar3);
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_106b76388;
  puStack_148 = &UNK_110842e18;
  ppuVar8 = &puStack_160;
  lStack_140 = lVar4;
  _objc_retainBlock();
  func_0x00010bfd2f00(*(undefined8 *)(lVar4 + lVar17),param_2,ppuVar8,1);
  uVar13 = *(undefined8 *)(lVar4 + lVar17);
  func_0x00010c160fc0(uVar13,param_2,&PTR____CFConstantStringClassReference_110e28658);
  func_0x000108b9a93c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar4 + lVar17),param_2,uVar13);
  _objc_release(uVar13);
  func_0x00010befbb60(lVar4,param_2,*(undefined8 *)(lVar4 + lVar17));
  func_0x00010c219b60(*(undefined8 *)(lVar4 + lVar17),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(lVar4 + lVar17);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar4 + lVar17);
  uStack_138 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  dVar18 = 44.0;
  uVar2 = uVar10;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar4 + lVar17);
  uStack_130 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c274200(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar14 = uVar11;
  func_0x00010bf493c0(dVar18 + 3.0,uVar11,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar4 + lVar17);
  uStack_128 = uVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_138,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar14);
  _objc_release(lVar5);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(ppuVar8[4] + _DAT_11275905c);
  puVar1 = ppuVar8[4] + _DAT_11275904c;
  _objc_loadWeakRetained(puVar1);
  puVar7 = puVar1;
  func_0x00010c08e4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar13,param_2,puVar7,1);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b76058; end: 106b76387; -[SCUnauthenticatedBaseView setupBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b76058(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11275905c;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar13);
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar14),param_2,1);
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  lVar2 = param_1 + _DAT_11275904c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c08e4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar13,param_2,lVar3,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106b76388;
  puStack_a8 = &UNK_110842e18;
  ppuVar4 = &puStack_c0;
  lStack_a0 = param_1;
  _objc_retainBlock();
  func_0x00010bfd2f00(*(undefined8 *)(param_1 + lVar14),param_2,ppuVar4,1);
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c160fc0(uVar13,param_2,&PTR____CFConstantStringClassReference_110e28658);
  func_0x000108b9a93c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar14),param_2,uVar13);
  _objc_release(uVar13);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar14));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  uStack_98 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  dVar15 = 44.0;
  uVar7 = uVar6;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  uStack_90 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar9 = uVar8;
  func_0x00010bf493c0(dVar15 + 3.0,uVar8,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  uStack_88 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(ppuVar4[4] + _DAT_11275905c);
  puVar1 = ppuVar4[4] + _DAT_11275904c;
  _objc_loadWeakRetained(puVar1);
  puVar12 = puVar1;
  func_0x00010c08e4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar13,param_2,puVar12,1);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b76388; end: 106b763fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b76388(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275905c);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11275904c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c08e4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3,param_2,lVar2,1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b763fc; end: 106b7671b; -[SCUnauthenticatedBaseView setupContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b763fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1998;
  _objc_alloc();
  lVar14 = (long)_DAT_11275904c;
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c04ed60(puVar1,param_2,lVar2);
  lVar16 = (long)_DAT_112759060;
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar11);
  _objc_release(lVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c160fc0(uVar11,param_2,&PTR____CFConstantStringClassReference_110dae558);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar16),param_2,uVar11);
  _objc_release(uVar11);
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar13,param_2,uVar11,0);
  _objc_release(uVar11);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar16),param_2,0);
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c271420(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar11);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar16));
  dVar17 = 15.0;
  func_0x00010c107060(*(undefined8 *)(param_1 + lVar16));
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  dVar18 = dVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  func_0x00010bf69140();
  uVar11 = uVar13;
  func_0x00010bf493c0(-dVar18,uVar13,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112759064;
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  *(undefined8 *)(param_1 + lVar15) = uVar11;
  _objc_release(uVar12);
  _objc_release(lVar14);
  _objc_release(lVar2);
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = *(undefined8 *)(param_1 + lVar15);
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  lStack_98 = lVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  func_0x00010bf49420(0x4048000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_88 = uVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf49420(dVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(lVar14);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar15 = (long)_DAT_112759068;
  uVar11 = *(undefined8 *)(lVar3 + lVar15);
  *(undefined **)(lVar3 + lVar15) = puVar1;
  _objc_release(uVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  dVar18 = 0.0;
  puVar5 = puVar1;
  func_0x00010bf414e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_128 = puVar6;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_128,2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar3 + lVar15);
  func_0x00010bfcd9c0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar1);
  func_0x00010c21e900(*(undefined8 *)(lVar3 + lVar15),param_2,0);
  func_0x00010c066fe0(lVar3,param_2,*(undefined8 *)(lVar3 + lVar15),
                      *(undefined8 *)(lVar3 + _DAT_112759060));
  lVar2 = lVar3 + _DAT_11275904c;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf69140();
  uVar19 = 0x4048000000000000;
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar15),param_2,0);
  uVar13 = *(undefined8 *)(lVar3 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf1ff80(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11275906c;
  uVar12 = *(undefined8 *)(lVar3 + lVar14);
  *(undefined8 *)(lVar3 + lVar14) = uVar11;
  _objc_release(uVar12);
  _objc_release(lVar2);
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_148 = *(undefined8 *)(lVar3 + lVar14);
  uVar9 = *(undefined8 *)(lVar3 + lVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf34860(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar3 + lVar15);
  uStack_140 = uVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar3;
  func_0x00010c2a5060(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar3 + lVar15);
  uStack_138 = uVar13;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf49420(dVar18 * 2.0 + 48.0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_130 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_148,4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010beef8c0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(lVar14);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bed86a0();
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_106b76b08;
  puStack_190 = &UNK_110842e18;
  uStack_188 = uVar9;
  func_0x00010bf03440(uVar19,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,puVar6,&puStack_1a8,0);
  return;
}



/* Entry: 106b7671c; end: 106b76a7f; -[SCUnauthenticatedBaseView setupGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b7671c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined8 uVar16;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar14 = (long)_DAT_112759068;
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  dVar15 = 0.0;
  puVar2 = puVar1;
  func_0x00010bf414e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_88 = puVar3;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bfcd9c0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar14),param_2,0);
  func_0x00010c066fe0(param_1,param_2,*(undefined8 *)(param_1 + lVar14),
                      *(undefined8 *)(param_1 + _DAT_112759060));
  lVar6 = param_1 + _DAT_11275904c;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bf69140();
  uVar16 = 0x4048000000000000;
  _objc_release(lVar6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11275906c;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined8 *)(param_1 + lVar13) = uVar11;
  _objc_release(uVar12);
  _objc_release(lVar6);
  _objc_release(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_a8 = *(undefined8 *)(param_1 + lVar13);
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  uStack_a0 = uVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c2a5060(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  uStack_98 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf49420(dVar15 * 2.0 + 48.0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(lVar13);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bed86a0();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106b76b08;
  puStack_f0 = &UNK_110842e18;
  uStack_e8 = uVar8;
  func_0x00010bf03440(uVar16,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,puVar3,&puStack_108,0);
  return;
}



/* Entry: 106b76a80; end: 106b76b07; -[SCUnauthenticatedBaseView updateFrameWithKeyboardHeight:animationDuration:animationOptions:] */

void FUN_106b76a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010bed86a0();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b76b08;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  func_0x00010bf03440(param_2,0,PTR__OBJC_CLASS___UIView_1126aec20,param_4,param_5,&puStack_58,0);
  return;
}



/* Entry: 106b76b08; end: 106b76b0f;  */

void FUN_106b76b08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106b76b10; end: 106b76b97; -[SCUnauthenticatedBaseView _updateFrameWithKeyboardHeight:] */

/* WARNING: Possible PIC construction at 0x000106b76b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106b76b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b76b5c) */
/* WARNING: Removing unreachable block (ram,0x000106b76b78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b76b10(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  _objc_loadWeakRetained(param_2 + _DAT_11275904c);
  func_0x00010bf69140();
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (-dVar1 - param_1,*(undefined8 *)(param_2 + _DAT_112759064),PTR_s_setConstant__11263de70
            );
  return;
}


