/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b46b3c; end: 106b46b4b; -[SCVerificationCodeTextField invalidLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b46b3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127589cc);
}



/* Entry: 106b46b4c; end: 106b46b8b; -[SCVerificationCodeTextField setInvalidLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b46b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127589cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b46b8c; end: 106b46b9b; -[SCVerificationCodeTextField xButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b46b8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127589d0);
}



/* Entry: 106b46b9c; end: 106b46bdb; -[SCVerificationCodeTextField setXButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b46b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127589d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b46bdc; end: 106b46c27; -[SCVerificationCodeTextField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b46bdc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127589d0,0);
  _objc_storeStrong(param_1 + _DAT_1127589cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127589c8);
  return;
}



/* Entry: 106b46c28; end: 106b46d2f;  */

uint FUN_106b46c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c26b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25da60(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c130d20(puVar2,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126aed98;
  func_0x00010c082c20(PTR_PTR_1126aed98,param_2,puVar2);
  if ((uint)puVar3 != 0) {
    puVar4 = PTR_PTR_1126aed98;
    func_0x00010bfb5d40(PTR_PTR_1126aed98,param_2,puVar2,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_1,param_2,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(param_6);
  return (uint)puVar3 ^ 1;
}



/* Entry: 106b46d30; end: 106b46fd3; -[SCAlertViewActionPasswordFieldController initWithPlaceHolder:] */

undefined8 * FUN_106b46d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  puStack_78 = PTR_PTR_1126f5080;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126af260;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    uVar5 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar5);
    func_0x00010c12ea40(puVar1[4]);
    func_0x00010c1f9a00(puVar1[4]);
    func_0x00010c18b5e0(puVar1[4]);
    func_0x00010c1dc9c0(puVar1[4]);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dadaf8;
    ppuVar3 = ppuVar4;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dadaf8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(puVar1[4]);
    _objc_release(ppuVar3);
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dadaf8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar1[4]);
    _objc_release(ppuVar4);
    func_0x00010c21e900(puVar1[4]);
    func_0x00010befbb60(puVar1[1]);
    uVar5 = puVar1[4];
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1[3]);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1[1]);
    uVar5 = puVar1[3];
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bfee7e0(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106b46fd4; end: 106b47167;  */

void FUN_106b46fd4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
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
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x3ff0000000000000,0x4024000000000000,0,0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
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
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0bc020(uVar8);
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



/* Entry: 106b47168; end: 106b472a7;  */

void FUN_106b47168(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
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



/* Entry: 106b472a8; end: 106b473ff; -[SCAlertViewActionPasswordFieldController initErrorLabel] */

void FUN_106b472a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + 0x28),param_2,4);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + 0x28),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x28),param_2,1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x28));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b47400;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b47400; end: 106b4762f;  */

void FUN_106b47400(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
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
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x3ff0000000000000,0x4024000000000000,0,0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
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
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0bbea0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
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
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b47630; end: 106b476c7; -[SCAlertViewActionPasswordFieldController setError:] */

void FUN_106b47630(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (param_3 == 0) {
    func_0x00010c074c20();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar4 = 0;
    uVar3 = 0x82;
  }
  else {
    func_0x00010c212f20(uVar1,param_2,param_3);
    uVar4 = 1;
    uVar3 = 0x90;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x28),param_2,param_3 == 0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
  _objc_release(puVar2);
  *(undefined1 *)(param_1 + 0x10) = uVar4;
  return;
}



/* Entry: 106b476c8; end: 106b477d7; -[SCAlertViewActionPasswordFieldController textField:shouldChangeCharactersInRange:replacementString:] */

bool FUN_106b476c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar4 = param_6;
  func_0x00010c08fa60();
  uVar1 = (lVar3 - param_5) + lVar4;
  _objc_release(lVar2);
  if ((0x1e < uVar1) && (lVar2 = param_6, func_0x00010bf2c4e0(param_6,param_2,1), (int)lVar2 != 0))
  {
    lVar2 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c260c20(lVar3,param_2,0x1e);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar1 < 0x1f;
}



/* Entry: 106b477d8; end: 106b477df; -[SCAlertViewActionPasswordFieldController textViewDidChange:] */

void FUN_106b477d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c196ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setError__1126435d8,0);
  return;
}



/* Entry: 106b477e0; end: 106b477e7; -[SCAlertViewActionPasswordFieldController textViewShouldBeginEditing:] */

undefined8 FUN_106b477e0(void)

{
  return 1;
}



/* Entry: 106b477e8; end: 106b477fb; -[SCAlertViewActionPasswordFieldController actionViewSize] */

undefined1  [16] FUN_106b477e8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4051800000000000;
  auVar1._0_8_ = 0x7fefffffffffffff;
  return auVar1;
}



/* Entry: 106b477fc; end: 106b47823; -[SCAlertViewActionPasswordFieldController actionView] */

void FUN_106b477fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b47824; end: 106b4782b; -[SCAlertViewActionPasswordFieldController alertViewActionType] */

undefined8 FUN_106b47824(void)

{
  return 1;
}



/* Entry: 106b4782c; end: 106b47833; -[SCAlertViewActionPasswordFieldController adjustsSizeToMatchStandard] */

undefined8 FUN_106b4782c(void)

{
  return 0;
}



/* Entry: 106b47834; end: 106b4783b; -[SCAlertViewActionPasswordFieldController becomeFirstResponder] */

void FUN_106b47834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 106b4783c; end: 106b4784f; -[SCAlertViewActionPasswordFieldController edgeInsets] */

undefined8 FUN_106b4783c(void)

{
  return 0;
}



/* Entry: 106b47850; end: 106b47857; -[SCAlertViewActionPasswordFieldController requiresAdditionalPaddingIfLastItem] */

undefined8 FUN_106b47850(void)

{
  return 1;
}



/* Entry: 106b47858; end: 106b4785f; -[SCAlertViewActionPasswordFieldController passwordTextField] */

undefined8 FUN_106b47858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b47860; end: 106b47867; -[SCAlertViewActionPasswordFieldController errorLabel] */

undefined8 FUN_106b47860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106b47868; end: 106b478af; -[SCAlertViewActionPasswordFieldController .cxx_destruct] */

void FUN_106b47868(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b478b0; end: 106b478b7; -[SCDownloadMyDataWebViewController pageViewName] */

undefined8 FUN_106b478b0(void)

{
  return 0x55;
}



/* Entry: 106b478b8; end: 106b479f3; -[SCDownloadMyDataWebViewController webView:decidePolicyForNavigationAction:decisionHandler:] */

void FUN_106b478b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 in_x3;
  long in_x4;
  
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  uVar1 = in_x3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfdcf80();
  if ((int)uVar1 == 0) {
    (**(code **)(in_x4 + 0x10))(in_x4,1);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = in_x3;
    func_0x00010c134680(in_x3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    (**(code **)(in_x4 + 0x10))(in_x4,0);
    _objc_release(puVar4);
  }
  _objc_release(uVar3);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 106b479f4; end: 106b479fb; -[SCSettingsViewOtherLegalViewController pageViewName] */

undefined8 FUN_106b479f4(void)

{
  return 0x11a;
}



/* Entry: 106b479fc; end: 106b47a07; -[SCSettingsViewOtherLegalViewController defaultProjectNameV3] */

void FUN_106b479fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106b47a08; end: 106b47a13; -[SCSettingsViewOtherLegalViewController defaultProjectNameV2] */

void FUN_106b47a08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106b47a14; end: 106b47a67; -[SCSettingsViewOtherLegalViewController init] */

undefined1 * FUN_106b47a14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5088;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106b47a68; end: 106b47af7; -[SCSettingsViewOtherLegalViewController initWithCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106b47a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f5088;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_1127589e8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b47af8; end: 106b47ef3; -[SCSettingsViewOtherLegalViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b47af8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long lVar18;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f5088;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar18 = (long)_DAT_1127589ec;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1eeb20(*(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8,
                      *(undefined8 *)(param_1 + lVar18));
  func_0x00010c1974c0(0x404e000000000000,*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  uStack_88 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  uStack_80 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar18);
  uStack_78 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126afb78;
  _objc_alloc(PTR_PTR_1126afb78);
  puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057840(puVar1);
  _objc_release(puVar15);
  ppuVar16 = &PTR____CFConstantStringClassReference_110e74b18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74b18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1);
  _objc_release(ppuVar16);
  func_0x00010c0d66a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b47ef4; end: 106b47fbb; -[SCSettingsViewOtherLegalViewController _presentLicenses] */

void FUN_106b47ef4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_alloc(PTR_PTR_1126afb78);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057840(puVar1);
  _objc_release(puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e74b18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74b18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1);
  _objc_release(ppuVar3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b47fbc; end: 106b4811f; -[SCSettingsViewOtherLegalViewController _presentODG] */

void FUN_106b47fbc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afb78;
  _objc_alloc(PTR_PTR_1126afb78);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057840(puVar4);
  _objc_release(puVar5);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e74b58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74b58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar4);
  _objc_release(ppuVar6);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b48120; end: 106b482bf; -[SCSettingsViewOtherLegalViewController _presentHealthPolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b48120(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127589e8);
  func_0x000106b48208(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afb78;
  _objc_alloc(PTR_PTR_1126afb78);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057840(puVar2);
  _objc_release(puVar3);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e74b78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74b78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar2);
  _objc_release(ppuVar4);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b482c0; end: 106b482cf; -[SCSettingsViewOtherLegalViewController getTitle] */

void FUN_106b482c0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7d18;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110dc7d18,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b482d0; end: 106b4833b; -[SCSettingsViewOtherLegalViewController leftButtonPressed] */

void FUN_106b482d0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b4833c; end: 106b48343; -[SCSettingsViewOtherLegalViewController numberOfSectionsInTableView:] */

undefined8 FUN_106b4833c(void)

{
  return 1;
}



/* Entry: 106b48344; end: 106b48353; -[SCSettingsViewOtherLegalViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_106b48344(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 106b48354; end: 106b483a3; -[SCSettingsViewOtherLegalViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b48354(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_1127589e8);
  func_0x000106b48208();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  uVar1 = 2;
  if (lVar3 != 0) {
    uVar1 = 3;
  }
  _objc_release(lVar2);
  return uVar1;
}



/* Entry: 106b483a4; end: 106b4840b; -[SCSettingsViewOtherLegalViewController tableView:didSelectRowAtIndexPath:] */

void FUN_106b483a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c142240();
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be7bc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentHealthPolicy_11257c8a0);
    return;
  }
  if (param_4 != 1) {
    if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7c3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentLicenses_11257ca88);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7ce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentODG_11257cd28);
  return;
}



/* Entry: 106b4840c; end: 106b485df; -[SCSettingsViewOtherLegalViewController tableView:cellForRowAtIndexPath:] */

void FUN_106b4840c(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126b0708;
    _objc_alloc(PTR_PTR_1126b0708);
    func_0x00010c040040();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_3);
    _objc_release(puVar1);
  }
  func_0x00010c21e900(param_3);
  puVar1 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3fef5f5f5f5f5f5f,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010c1faee0(param_3);
  uVar3 = param_4;
  func_0x00010c142240();
  _objc_release(param_4);
  if (uVar3 < 3) {
    puVar4 = (&PTR_PTR_110962170)[uVar3];
    func_0x00010c138500(param_3);
    func_0x00010bcbeaa8(puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106b485e0; end: 106b4861f; -[SCSettingsViewOtherLegalViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b485e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127589e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127589ec,0);
  return;
}



/* Entry: 106b48620; end: 106b48663;  */

void FUN_106b48620(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25d780(uVar2,param_2,&PTR____CFConstantStringClassReference_110e74ad8,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136c69f0;
  uRam00000001136c69f0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b48664; end: 106b4868b;  */

undefined ** FUN_106b48664(long param_1)

{
  if (param_1 - 1U < 0x14) {
    return (undefined **)(&PTR_PTR_110962188)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e74b98;
}



/* Entry: 106b4868c; end: 106b486f7; -[SCBirthdaySettingsTelemetryLogger initWithEnabled:] */

undefined1 * FUN_106b4868c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    puVar2 = PTR_PTR_1126d0a80;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106b486f8; end: 106b4874b; -[SCBirthdaySettingsTelemetryLogger logOutcome:] */

void FUN_106b486f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    FUN_106b48664(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106b4ac84(uVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106b4874c; end: 106b48757; -[SCBirthdaySettingsTelemetryLogger .cxx_destruct] */

void FUN_106b4874c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b48758; end: 106b48c97; -[SCLoadingScreen initWithFrame:] */

undefined8 * FUN_106b48758(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126f5098;
  puVar1 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIToolbar_1126b0668;
    _objc_alloc(PTR__OBJC_CLASS___UIToolbar_1126b0668);
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0(puVar2);
    func_0x00010c219c00();
    func_0x00010c1677c0(0x3feccccccccccccd,puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar2);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c1b71a0(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c087500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c5c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c087500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c087500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010c087500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
    func_0x00010bff0f20();
    func_0x00010c162da0(puVar1);
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010bef1600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bef1600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    func_0x00010befbb60(puVar1);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    func_0x00010befbb60(puVar1);
    _objc_retain(puVar1);
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    func_0x00010c0bbfc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(puVar5);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bef1600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    func_0x00010c0bbfc0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c087500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(puVar5);
    func_0x00010c0bbfc0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  return puVar1;
}



/* Entry: 106b48c98; end: 106b48cff;  */

void FUN_106b48c98(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b48d00; end: 106b48e1b;  */

void FUN_106b48d00(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef1600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  (**(code **)(param_2 + 0x10))(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar3 = puVar5;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106b48e1c; end: 106b49083;  */

void FUN_106b48e1c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
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
  func_0x00010c2a5040();
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



/* Entry: 106b49084; end: 106b4925f;  */

void FUN_106b49084(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bef1600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0bc000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  (**(code **)(lVar7 + 0x10))(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))(0x4479c000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b49260; end: 106b492b3; -[SCLoadingScreen intrinsicContentSize] */

undefined1  [16]
FUN_106b49260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 106b492b4; end: 106b49313; -[SCLoadingScreen setLabelText:] */

void FUN_106b492b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106b49314; end: 106b49323; -[SCLoadingScreen activityIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b49314(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127589f8);
}



/* Entry: 106b49324; end: 106b49363; -[SCLoadingScreen setActivityIndicatorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b49324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127589f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b49364; end: 106b49373; -[SCLoadingScreen label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b49364(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127589fc);
}



/* Entry: 106b49374; end: 106b493b3; -[SCLoadingScreen setLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b49374(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127589fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b493b4; end: 106b493f3; -[SCLoadingScreen .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b493b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127589fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127589f8,0);
  return;
}



/* Entry: 106b493f4; end: 106b49823; -[SCTableInfoViewCell initWithReuseIdentifier:] */

undefined8 * FUN_106b493f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f50a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c21e900(puVar1);
    func_0x00010c161260(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c213440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c26c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c26c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c26c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c26c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c26c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c20ee80(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c25e820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c25e820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c25e820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c25e820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c25e820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c25e820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 106b49824; end: 106b49d57;  */

void FUN_106b49824(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
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
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
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
  (**(code **)(lVar5 + 0x10))(0xc046000000000000);
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
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar6);
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
  (**(code **)(lVar5 + 0x10))(0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
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



/* Entry: 106b49d58; end: 106b49db7;  */

void FUN_106b49d58(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b49db8; end: 106b49dc7; -[SCTableInfoViewCell textInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b49db8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758a00);
}



/* Entry: 106b49dc8; end: 106b49e07; -[SCTableInfoViewCell setTextInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b49dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758a00;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b49e08; end: 106b49e17; -[SCTableInfoViewCell subTextInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b49e08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758a04);
}



/* Entry: 106b49e18; end: 106b49e57; -[SCTableInfoViewCell setSubTextInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b49e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758a04;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b49e58; end: 106b49e97; -[SCTableInfoViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b49e58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758a04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758a00,0);
  return;
}



/* Entry: 106b49e98; end: 106b4a337; -[SCXButtonTableViewCell initWithStyle:reuseIdentifier:] */

undefined8 * FUN_106b49e98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f50a8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227520(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c2be8a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf33880();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2be8a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c2be8a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2be8a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2be8a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
    func_0x00010bff0f20();
    func_0x00010c1ac100(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bfed500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfed500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bfed500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c26c280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c26c280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf6f720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf6f720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e20();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf6f720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf6f720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c1fbac0(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 106b4a338; end: 106b4a57f;  */

void FUN_106b4a338(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbf20();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0xc020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b4a580; end: 106b4a607;  */

void FUN_106b4a580(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2be8a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b4a608; end: 106b4a7cb; -[SCXButtonTableViewCell layoutSubviews] */

void FUN_106b4a608(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f50a8;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  uVar3 = 0xc020000000000000;
  dVar4 = param_1 + -8.0;
  uVar2 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  dVar4 = dVar4 - param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c26c280(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c26c280(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  if (dVar4 <= param_3) {
    param_3 = dVar4;
  }
  uVar1 = param_5;
  func_0x00010c26c280(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,uVar3,param_3,param_4);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf6f720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf6f720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  if (dVar4 <= param_3) {
    param_3 = dVar4;
  }
  func_0x00010bf6f720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,uVar3,param_3,param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 106b4a7cc; end: 106b4a84b; -[SCXButtonTableViewCell xButtonPressed] */

void FUN_106b4a7cc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c110120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106b4a84c; end: 106b4a8eb; -[SCXButtonTableViewCell setText:] */

void FUN_106b4a84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c25ce40(param_3,param_2,&PTR____CFConstantStringClassReference_110e74e38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2be8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b4a8ec; end: 106b4a93b; -[SCXButtonTableViewCell setSubText:] */

void FUN_106b4a8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b4a93c; end: 106b4a9cf; -[SCXButtonTableViewCell setIsWorking:] */

void FUN_106b4a93c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfed500();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c2558c0();
  }
  else {
    func_0x00010c24dbc0();
  }
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfed500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c2be8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b4a9d0; end: 106b4a9ef; -[SCXButtonTableViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4a9d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112758a08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b4a9f0; end: 106b4aa03; -[SCXButtonTableViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4a9f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112758a08,param_3);
  return;
}



/* Entry: 106b4aa04; end: 106b4aa13; -[SCXButtonTableViewCell xButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b4aa04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758a0c);
}



/* Entry: 106b4aa14; end: 106b4aa53; -[SCXButtonTableViewCell setXButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4aa14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758a0c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b4aa54; end: 106b4aa63; -[SCXButtonTableViewCell indicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b4aa54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758a10);
}



/* Entry: 106b4aa64; end: 106b4aaa3; -[SCXButtonTableViewCell setIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4aa64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758a10;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b4aaa4; end: 106b4aaef; -[SCXButtonTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4aaa4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758a10,0);
  _objc_storeStrong(param_1 + _DAT_112758a0c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758a08);
  return;
}



/* Entry: 106b4aaf0; end: 106b4ac0f;  */

void FUN_106b4aaf0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e74e58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e74e58,
                      &PTR____CFConstantStringClassReference_110e74e78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b4ac10; end: 106b4ac83; -[SCGrapheneBirthdaySettingsMetric2 init] */

undefined1 * FUN_106b4ac10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f50b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106b4ac84; end: 106b4adf7;  */

void FUN_106b4ac84(long param_1,undefined *param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar11 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f3b80f5;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110962248,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar10 = (undefined1 *)puVar11;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar10 = (undefined1 *)puVar11;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume(puVar2);
    _objc_retain(puVar10);
    if (lRam00000001136c6a00 != -1) {
      func_0x00010002a2fc(0x1136c6a00,&PTR___NSConcreteGlobalBlock_1109622d8);
    }
    uVar1 = uRam00000001136c69f8;
    _objc_retain(uRam00000001136c69f8);
    puVar3 = puVar10;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    uVar14 = uVar1;
    if (puVar4 < (undefined1 *)0x2) {
      _objc_retain(uVar1);
    }
    else {
      puVar4 = puVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25d0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar4 = puVar5;
      func_0x00010c08fa60();
      if (puVar4 == (undefined1 *)0x0) {
        _objc_retain(uVar1);
      }
      else {
        uVar6 = uVar1;
        func_0x00010c0d3c80();
        ppuVar7 = &PTR____CFConstantStringClassReference_110dae4f8;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        uVar8 = uVar6;
        func_0x00010bfaea20();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar8;
        func_0x00010bf529e0();
        if ((uVar13 != 0) &&
           (uVar13 = uVar8, func_0x00010bf529e0(), uVar14 = uVar6, 0 < (int)uVar13)) {
          uVar13 = (uVar13 & 0x7fffffff) + 1;
          do {
            uVar9 = uVar8;
            func_0x00010c0dfd40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfecde0(uVar6);
            _objc_release(uVar9);
            func_0x00010c12d3c0(uVar6);
            uVar9 = uVar8;
            func_0x00010c0dfd40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c066b00(uVar6);
            _objc_release(uVar9);
            uVar13 = uVar13 - 1;
          } while (1 < uVar13);
        }
        _objc_retain(uVar14);
        _objc_release(uVar8);
        _objc_release(ppuVar7);
        _objc_release(ppuVar7);
        _objc_release(uVar6);
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
    return;
  }
  return;
}



/* Entry: 106b4adf8; end: 106b4b097; -[SCEmailDomainSuggestionPillsProvider pillsWithEmail:] */

void FUN_106b4adf8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  if (lRam00000001136c6a00 != -1) {
    func_0x00010002a2fc(0x1136c6a00,&PTR___NSConcreteGlobalBlock_1109622d8);
  }
  uVar1 = uRam00000001136c69f8;
  _objc_retain(uRam00000001136c69f8);
  uVar2 = param_3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar10 = uVar1;
  if (uVar3 < 2) {
    _objc_retain(uVar1);
  }
  else {
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c25d0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar4);
    uVar3 = uVar5;
    func_0x00010c08fa60();
    if (uVar3 == 0) {
      _objc_retain(uVar1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c0d3c80();
      ppuVar6 = &PTR____CFConstantStringClassReference_110dae4f8;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar7 = uVar3;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf529e0();
      if ((uVar9 != 0) && (uVar9 = uVar7, func_0x00010bf529e0(), uVar10 = uVar3, 0 < (int)uVar9)) {
        uVar9 = (uVar9 & 0x7fffffff) + 1;
        do {
          uVar8 = uVar7;
          func_0x00010c0dfd40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfecde0(uVar3);
          _objc_release(uVar8);
          func_0x00010c12d3c0(uVar3);
          uVar8 = uVar7;
          func_0x00010c0dfd40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c066b00(uVar3);
          _objc_release(uVar8);
          uVar9 = uVar9 - 1;
        } while (1 < uVar9);
      }
      _objc_retain(uVar10);
      _objc_release(uVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar6);
      _objc_release(uVar3);
    }
    _objc_release(uVar5);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 106b4b098; end: 106b4b0df;  */

undefined8 FUN_106b4b098(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfbb800(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfda7c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106b4b0e0; end: 106b4b24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106b4b0e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar9 = &puStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0a88;
  _objc_alloc();
  func_0x00010c016940();
  puVar2 = PTR_PTR_1126d0a88;
  puStack_70 = puVar1;
  _objc_alloc();
  func_0x00010c016940();
  puVar3 = PTR_PTR_1126d0a88;
  puStack_68 = puVar2;
  _objc_alloc();
  func_0x00010c016940();
  puVar4 = PTR_PTR_1126d0a88;
  puStack_60 = puVar3;
  _objc_alloc();
  func_0x00010c016940();
  puVar5 = PTR_PTR_1126d0a88;
  puStack_58 = puVar4;
  _objc_alloc();
  func_0x00010c016940();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar7 = puRam00000001136c69f8;
  puRam00000001136c69f8 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar7;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_b0;
  pcStack_78 = FUN_106b4b24c;
  puStack_a0 = puVar4;
  puStack_98 = puVar3;
  puStack_90 = puVar2;
  puStack_88 = puVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  puStack_a8 = PTR_PTR_1126f50b8;
  puStack_b0 = puVar7;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar8 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar8 + (long)_DAT_112758a18),ppuVar9);
    puVar1 = PTR_PTR_1126d0a90;
    _objc_opt_new();
    uVar10 = *(undefined8 *)((long)ppuVar8 + (long)_DAT_112758a1c);
    *(undefined **)((long)ppuVar8 + (long)_DAT_112758a1c) = puVar1;
    _objc_release(uVar10);
    func_0x00010beaa4c0(ppuVar8);
  }
  _objc_release(ppuVar9);
  return (undefined1 *)ppuVar8;
}



/* Entry: 106b4b24c; end: 106b4b2f3; -[SCEmailDomainSuggestionScrollView initWithObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106b4b24c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f50b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112758a18),param_3);
    puVar2 = PTR_PTR_1126d0a90;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758a1c);
    *(undefined **)((long)puVar1 + (long)_DAT_112758a1c) = puVar2;
    _objc_release(uVar3);
    func_0x00010beaa4c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b4b2f4; end: 106b4b37b; -[SCEmailDomainSuggestionScrollView updatePillsWithEmail:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4b2f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758a1c);
  func_0x00010c0fbf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112758a20;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071b60(uVar2,param_2,uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar1;
    _objc_release(uVar3);
    func_0x00010bdf1500(param_1);
    func_0x00010be35340(param_1);
    func_0x00010beba020(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b4b37c; end: 106b4b463; -[SCEmailDomainSuggestionScrollView _createPillViewsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4b37c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112758a24;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + _DAT_112758a20);
  func_0x00010bf529e0();
  puVar1 = PTR_s__didSelectPillButton__112528fc0;
  if (lVar2 != lVar3) {
    lVar5 = 0;
    do {
      puVar4 = PTR_PTR_1126aec40;
      func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c211780();
      func_0x00010befbd60(puVar4,param_2,param_1,puVar1,0x40);
      func_0x00010c20eaa0(puVar4,param_2,4);
      func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,puVar4);
      _objc_release(puVar4);
      lVar5 = lVar5 + 1;
    } while (lVar2 - lVar3 != lVar5);
  }
  return;
}



/* Entry: 106b4b464; end: 106b4b537; -[SCEmailDomainSuggestionScrollView _hideAllPillViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4b464(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112758a24;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c261580(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010c1a7f60(uVar4,param_2,1);
      _objc_release(uVar4);
      uVar7 = uVar7 + 1;
      uVar5 = *(ulong *)(param_1 + lVar8);
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
    } while (uVar7 < uVar6);
  }
  return;
}



/* Entry: 106b4b538; end: 106b4b673; -[SCEmailDomainSuggestionScrollView _showNewPillViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4b538(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = (long)_DAT_112758a24;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar9 != 0) {
    uVar7 = 0;
    lVar9 = (long)_DAT_112758a20;
    do {
      uVar2 = *(ulong *)(param_1 + lVar9);
      func_0x00010bf529e0();
      if (uVar2 <= uVar7) {
        return;
      }
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c261580(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar5 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0dfd40(uVar5,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf5c740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010c216260(uVar4,param_2,uVar3,0);
      func_0x00010c1a7f60(uVar4,param_2,0);
      _objc_release(uVar3);
      _objc_release(uVar4);
      uVar7 = uVar7 + 1;
      uVar6 = *(ulong *)(param_1 + lVar8);
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
    } while (uVar7 < uVar2);
  }
  return;
}



/* Entry: 106b4b674; end: 106b4b973; -[SCEmailDomainSuggestionScrollView _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106b4b674(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 **ppuVar13;
  long lVar14;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c2026e0(param_1,param_2,0);
  func_0x00010c2025c0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar14 = (long)_DAT_112758a24;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar12);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c207380(0x4018000000000000,*(undefined8 *)(param_1 + lVar14));
  func_0x00010c1fbe00(*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = *(undefined1 **)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  puStack_98 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar3;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  puStack_a8 = puVar2;
  puStack_90 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_b0 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar3;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_c0 = uVar12;
  uStack_88 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release(uStack_c0);
  _objc_release(lStack_b8);
  _objc_release(uStack_b0);
  _objc_release(puStack_a8);
  _objc_release(lStack_a0);
  puVar2 = puStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar13 = &puStack_100;
  pcStack_d8 = FUN_106b4b974;
  lStack_f0 = lVar6;
  uStack_e8 = uVar5;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  puVar1 = PTR_PTR_1126aec40;
  _objc_opt_class(PTR_PTR_1126aec40);
  puVar10 = puVar11;
  _objc_opt_isKindOfClass(puVar11,puVar1);
  if (((ulong)puVar10 & 1) == 0) {
    puStack_f8 = PTR_PTR_1126f50b8;
    puStack_100 = puVar2;
    _objc_msgSendSuper2(&puStack_100,PTR_s_touchesShouldCancelInContentView_112528fc8,puVar11);
  }
  else {
    ppuVar13 = (undefined1 **)0x1;
  }
  _objc_release(puVar11);
  return (undefined1 *)ppuVar13;
}



/* Entry: 106b4b974; end: 106b4b9f7; -[SCEmailDomainSuggestionScrollView touchesShouldCancelInContentView:] */

undefined1 * FUN_106b4b974(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar3 = &uStack_30;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aec40;
  _objc_opt_class(PTR_PTR_1126aec40);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puStack_28 = PTR_PTR_1126f50b8;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_touchesShouldCancelInContentView_112528fc8,param_3);
  }
  else {
    puVar3 = (undefined8 *)0x1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 106b4b9f8; end: 106b4baa7; -[SCEmailDomainSuggestionScrollView _didSelectPillButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4b9f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c268120();
  lVar4 = (long)_DAT_112758a20;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    lVar3 = param_1 + _DAT_112758a18;
    _objc_loadWeakRetained(lVar3);
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    uVar1 = param_3;
    func_0x00010c268120(param_3);
    func_0x00010c0dfd40(uVar5,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8d7c0(lVar3,param_2,param_1,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b4baa8; end: 106b4bb03; -[SCEmailDomainSuggestionScrollView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4baa8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112758a18);
  _objc_storeStrong(param_1 + _DAT_112758a1c,0);
  _objc_storeStrong(param_1 + _DAT_112758a20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758a24,0);
  return;
}



/* Entry: 106b4bb04; end: 106b4bbaf; -[SCEmailDomainSuggestionPill initWithFullEmailDomain:croppedEmailDomain:] */

undefined1 *
FUN_106b4bb04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f50c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


