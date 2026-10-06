/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a65000; end: 104a65237; -[GIDEMMErrorHandler keyWindow] */

void FUN_104a65000(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  puVar6 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = 2;
  func_0x000100029b9c(2,0xf,0,0);
  if (iVar1 == 0) {
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c2a7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar4 = puVar3;
    func_0x00010bf52a60();
    puVar8 = (undefined *)0x0;
    if (puVar4 != (undefined *)0x0) {
      lVar9 = *plStack_1d0;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_1d0 != lVar9) {
            _objc_enumerationMutation(puVar3);
          }
          puVar8 = *(undefined **)(lStack_1d8 + (long)puVar10 * 8);
          puVar5 = puVar8;
          func_0x00010c075e80();
          if (((ulong)puVar5 & 1) != 0) {
            _objc_retain();
            goto LAB_104a651f4;
          }
          puVar10 = puVar10 + 1;
        } while (puVar4 != puVar10);
        puVar4 = puVar3;
        puVar6 = &uStack_1e0;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
      puVar8 = (undefined *)0x0;
    }
  }
  else {
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010bf48a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar6 = &uStack_1a0;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    puVar8 = (undefined *)0x0;
    if (puVar4 != (undefined *)0x0) {
      lVar9 = *plStack_190;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_190 != lVar9) {
            _objc_enumerationMutation(puVar3);
          }
          puVar8 = *(undefined **)(lStack_198 + (long)puVar10 * 8);
          puVar5 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
          _objc_opt_class(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
          puVar2 = puVar8;
          _objc_opt_isKindOfClass(puVar8,puVar5);
          if ((((ulong)puVar2 & 1) != 0) &&
             (puVar5 = puVar8, func_0x00010bef0360(), puVar5 == (undefined *)0x0)) {
            func_0x00010c086b80();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104a651f4;
          }
          puVar10 = puVar10 + 1;
        } while (puVar4 != puVar10);
        puVar6 = &uStack_1a0;
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
      puVar8 = (undefined *)0x0;
    }
  }
LAB_104a651f4:
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain();
    puVar8 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
    puVar4 = puVar3;
    func_0x00010c27f180(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010bf70ca0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff3e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
    func_0x00010c0e1e40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    _objc_retain(puVar6);
    func_0x00010beef340(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6960(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104a65238; end: 104a6537f; -[GIDEMMErrorHandler deviceNotCompliantAlertWithCompletion:] */

void FUN_104a65238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  uVar1 = param_1;
  func_0x00010c27f180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf70ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff3e0(puVar3,param_2,uVar1,uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  func_0x00010c0e1e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104a65380;
  puStack_50 = &UNK_1107c04e8;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010beef340(puVar4,param_2,param_1,0,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104a65380; end: 104a6538b;  */

void FUN_104a65380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a65388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104a6538c; end: 104a656d7; -[GIDEMMErrorHandler passcodeRequiredAlertWithCompletion:] */

void FUN_104a6538c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  uVar1 = param_1;
  func_0x00010c27f180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0f4de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff3e0(puVar3,param_2,uVar1,uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfda7c0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  if ((int)puVar6 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c13b400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010c25ce00(puVar5,param_2,&PTR____CFConstantStringClassReference_110daa3d8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010bf24ca0(PTR__OBJC_CLASS___NSBundle_1126aea78,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
    if (puVar6 == (undefined *)0x0) {
      func_0x00010c0e1e40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_104a65744;
      puStack_d8 = &UNK_1107c04e8;
      puVar7 = &uStack_d0;
      uStack_d0 = param_3;
      _objc_retain(param_3);
      func_0x00010beef340(puVar4,param_2,param_1,1,&puStack_f0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6960(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      goto LAB_104a65604;
    }
  }
  puVar5 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  uVar1 = param_1;
  func_0x00010bf2f140(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104a656d8;
  puStack_80 = &UNK_1107c04e8;
  puVar7 = &uStack_78;
  uVar2 = param_3;
  _objc_retain();
  uStack_78 = uVar2;
  func_0x00010beef340(puVar5,param_2,uVar1,1,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  uVar1 = param_1;
  func_0x00010c2282e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar4;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_104a656e4;
  puStack_b0 = &UNK_1107c0518;
  uStack_a8 = param_1;
  uStack_a0 = uVar2;
  _objc_retain(uVar2);
  func_0x00010beef340(puVar5,param_2,uVar1,0,&puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar1);
  param_1 = uStack_a0;
LAB_104a65604:
  _objc_release(param_1);
  _objc_release(*puVar7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104a656d8; end: 104a656e3;  */

void FUN_104a656d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a656e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104a656e4; end: 104a65743;  */

void FUN_104a656e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      *(undefined8 *)PTR__UIApplicationOpenSettingsURLString_110345a80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a65744; end: 104a6574f;  */

void FUN_104a65744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a6574c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104a65750; end: 104a65a5b; -[GIDEMMErrorHandler appVerificationRequiredAlertWithURL:completion:] */

void FUN_104a65750(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 auStack_80 [2];
  
  _objc_retain();
  _objc_retain();
  puVar5 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  if (param_3 == 0) {
    uVar3 = param_1;
    func_0x00010c27f180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf066a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff3e0(puVar5,param_2,uVar3,uVar4,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
    func_0x00010c0e1e40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_104a65a94;
    puStack_e8 = &UNK_1107c04e8;
    puVar7 = &uStack_e0;
    uStack_e0 = param_4;
    _objc_retain(param_4);
    func_0x00010beef340(puVar6,param_2,param_1,0,&puStack_100);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6960(puVar5,param_2,puVar6);
    _objc_release(puVar6);
  }
  else {
    uVar3 = param_1;
    func_0x00010bf066c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf066a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff3e0(puVar5,param_2,uVar3,uVar4,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
    uVar3 = param_1;
    func_0x00010bf2f140(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104a65a5c;
    puStack_88 = &UNK_1107c04e8;
    puVar7 = auStack_80;
    uVar4 = param_4;
    _objc_retain();
    auStack_80[0] = uVar4;
    func_0x00010beef340(puVar1,param_2,uVar3,1,&puStack_a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6960(puVar5,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
    uVar3 = param_1;
    func_0x00010bf06660(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar6;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_104a65a68;
    puStack_c0 = &UNK_1107c0548;
    lVar2 = param_3;
    uStack_b8 = param_1;
    uStack_a8 = uVar4;
    _objc_retain();
    lStack_b0 = lVar2;
    _objc_retain(uVar4);
    func_0x00010beef340(puVar1,param_2,uVar3,0,&puStack_d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6960(puVar5,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar3);
    _objc_release(lStack_b0);
    param_1 = uStack_a8;
  }
  _objc_release(param_1);
  _objc_release(*puVar7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104a65a5c; end: 104a65a67;  */

void FUN_104a65a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a65a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104a65a68; end: 104a65a93;  */

void FUN_104a65a68(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010c0e9b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_openURL__1126180f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104a65a94; end: 104a65a9f;  */

void FUN_104a65a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a65a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104a65aa0; end: 104a65aff; -[GIDEMMErrorHandler openURL:] */

void FUN_104a65aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_3);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a65b00; end: 104a65b1b; -[GIDEMMErrorHandler unableToAccessString] */

void FUN_104a65b00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae450,PTR_s_localizedStringForKey_text__112605408,
             &PTR____CFConstantStringClassReference_110daa3f8,
             &PTR____CFConstantStringClassReference_110daa418);
  return;
}



/* Entry: 104a65b1c; end: 104a65b37; -[GIDEMMErrorHandler passcodeRequiredString] */

void FUN_104a65b1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae450,PTR_s_localizedStringForKey_text__112605408,
             &PTR____CFConstantStringClassReference_110daa458,
             &PTR____CFConstantStringClassReference_110daa438);
  return;
}



/* Entry: 104a65b38; end: 104a65b53; -[GIDEMMErrorHandler appVerificationTitleString] */

void FUN_104a65b38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae450,PTR_s_localizedStringForKey_text__112605408,
             &PTR____CFConstantStringClassReference_110daa478,
             &PTR____CFConstantStringClassReference_110daa498);
  return;
}



/* Entry: 104a65b54; end: 104a65b6f; -[GIDEMMErrorHandler appVerificationTextString] */

void FUN_104a65b54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae450,PTR_s_localizedStringForKey_text__112605408,
             &PTR____CFConstantStringClassReference_110daa4d8,
             &PTR____CFConstantStringClassReference_110daa4b8);
  return;
}



/* Entry: 104a65b70; end: 104a65b8b; -[GIDEMMErrorHandler appVerificationActionString] */

void FUN_104a65b70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae450,PTR_s_localizedStringForKey_text__112605408,
             &PTR____CFConstantStringClassReference_110daa4f8,
             &PTR____CFConstantStringClassReference_110daa518);
  return;
}



/* Entry: 104a65b8c; end: 104a65ba7; -[GIDEMMErrorHandler deviceNotCompliantString] */

void FUN_104a65b8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae450,PTR_s_localizedStringForKey_text__112605408,
             &PTR____CFConstantStringClassReference_110daa558,
             &PTR____CFConstantStringClassReference_110daa538);
  return;
}



/* Entry: 104a65ba8; end: 104a65bc3; -[GIDEMMErrorHandler settingsString] */

void FUN_104a65ba8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae450,PTR_s_localizedStringForKey_text__112605408,
             &PTR____CFConstantStringClassReference_110daa578,
             &PTR____CFConstantStringClassReference_110e6aa38);
  return;
}



/* Entry: 104a65bc4; end: 104a65bdb; -[GIDEMMErrorHandler okayString] */

void FUN_104a65bc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae450,PTR_s_localizedStringForKey_text__112605408,
             &PTR____CFConstantStringClassReference_110dd6e18,
             &PTR____CFConstantStringClassReference_110dd6e18);
  return;
}



/* Entry: 104a65bdc; end: 104a65bf3; -[GIDEMMErrorHandler cancelString] */

void FUN_104a65bdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae450,PTR_s_localizedStringForKey_text__112605408,
             &PTR____CFConstantStringClassReference_110dc6f18,
             &PTR____CFConstantStringClassReference_110dc6f18);
  return;
}



/* Entry: 104a65bf4; end: 104a65c27; -[GIDEMMSupport init] */

void FUN_104a65bf4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3618;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a65c28; end: 104a65da7; +[GIDEMMSupport handleTokenFetchEMMError:completion:] */

void FUN_104a65c28(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_3);
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    puVar3 = PTR_PTR_1126ae458;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    _objc_retain();
    lVar4 = param_3;
    _objc_retain();
    puVar5 = puVar3;
    func_0x00010bfd1080();
    *(char *)(puStack_58 + 3) = (char)puVar5;
    _objc_release(puVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a65da8; end: 104a65e5b;  */

void FUN_104a65da8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c292820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,puVar3);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a65e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a65e5c; end: 104a65eff; +[GIDEMMSupport updatedEMMParametersWithParameters:] */

void FUN_104a65e5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110daa5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f38e0(param_1,param_2,param_3,lVar1,lVar2 != 0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a65f00; end: 104a660b3; +[GIDEMMSupport parametersWithParameters:emmSupport:isPasscodeInfoRequired:] */

void FUN_104a65f00(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,int param_5
                  )

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  if (param_4 == 0) {
    puVar6 = param_3;
    _objc_retain(param_3);
  }
  else {
    puVar6 = PTR____NSDictionary0__struct_11034ab58;
    if (param_3 != (undefined *)0x0) {
      puVar6 = param_3;
    }
    _objc_retain(param_4);
    func_0x00010c0d3c80(puVar6);
    func_0x00010c1d0640();
    _objc_release(param_4);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c267120();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0720c0();
    if ((int)ppuVar3 != 0) {
      _objc_release(ppuVar2);
      ppuVar2 = &PTR____CFConstantStringClassReference_110ea5178;
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar3 = ppuVar1;
    func_0x00010c267460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110db27b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6,param_2,puVar4,&PTR____CFConstantStringClassReference_110daa5b8);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    if (param_5 != 0) {
      puVar4 = PTR_PTR_1126ae460;
      func_0x00010c0f4e00(PTR_PTR_1126ae460);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfed8e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6,param_2,puVar5,&PTR____CFConstantStringClassReference_110daa5d8);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104a660b4; end: 104a66143; -[GIDEMMSupport additionalTokenRefreshParametersForAuthSession:] */

void FUN_104a660b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126ae468;
  func_0x00010bf109c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c08a500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010befd300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d2e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104a66144; end: 104a661d7; -[GIDEMMSupport updateErrorForAuthSession:originalError:completion:] */

void FUN_104a66144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae468;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104a661d8;
  puStack_40 = &UNK_110859a38;
  uStack_38 = param_5;
  _objc_retain();
  func_0x00010bfd2ec0(puVar1,param_2,param_4,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 104a661d8; end: 104a661e3;  */

void FUN_104a661d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a661e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104a661e4; end: 104a662af; -[GIDGoogleUser userID] */

void FUN_104a661e4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bfe5e00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ae3c8;
    _objc_alloc();
    func_0x00010c01ae00();
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar2;
      func_0x00010c25ebc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = (undefined *)0x0;
      if (puVar3 != (undefined *)0x0) {
        puVar3 = puVar2;
        func_0x00010c25ebc0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf51e00();
        _objc_release(puVar3);
      }
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a662b0; end: 104a663b7; -[GIDGoogleUser grantedScopes] */

void FUN_104a662b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf109c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08a500();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c25d0a0(lVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar2);
    lVar1 = lVar4;
    func_0x00010bf44740(lVar4,param_2,&PTR____CFConstantStringClassReference_110db2d98);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0d3c80();
    _objc_release(lVar1);
    func_0x00010c12d360(lVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    lVar1 = lVar3;
    func_0x00010bf51e00(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104a663b8; end: 104a665eb; -[GIDGoogleUser configuration] */

void FUN_104a663b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + 8) == 0) {
    lVar1 = param_1;
    func_0x00010bf109c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c088360();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf3cf20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf109c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08a500();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010befd300();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf109c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08a500();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010befd300();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126ae470;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010bfe46a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffef60(puVar8,param_2,lVar4,lVar6,lVar1,lVar7);
    uVar9 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar8;
    _objc_release(uVar9);
    _objc_release(lVar1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104a665ec; end: 104a669af; -[GIDGoogleUser refreshTokensIfNeededWithCompletion:] */

void FUN_104a665ec(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010beecce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  if (param_1 < 60.0) {
    _objc_release(lVar2);
    _objc_release(lVar1);
LAB_104a666e4:
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    _objc_retain(uVar6);
    _objc_sync_enter();
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    puVar7 = param_4;
    func_0x00010bf51e00(param_4);
    puVar8 = puVar7;
    _objc_retainBlock();
    func_0x00010befa120(uVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    uVar9 = *(ulong *)(param_2 + 0x10);
    func_0x00010bf529e0();
    _objc_sync_exit(uVar6);
    _objc_release(uVar6);
    if (1 < uVar9) goto LAB_104a66974;
    puVar8 = PTR____NSDictionary0__struct_11034ab58;
    func_0x00010c0d3c80(PTR____NSDictionary0__struct_11034ab58);
    puVar7 = PTR_PTR_1126ae468;
    lVar1 = param_2;
    func_0x00010bf109c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08a500();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010befd300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d2e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    FUN_104a6dff4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8);
    _objc_release(lVar1);
    FUN_104a6e02c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf109c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2731a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126ae380;
    func_0x00010bf109c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c088360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f90e0(puVar7);
    _objc_release(lVar1);
    _objc_release(param_2);
    _objc_release(lVar2);
  }
  else {
    lVar3 = param_2;
    func_0x00010bfe5e00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      lVar4 = param_2;
      func_0x00010bfe5e00(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (param_1 < 60.0) goto LAB_104a666e4;
    }
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104a669b0;
    puStack_78 = &UNK_11084aaa8;
    puVar7 = param_4;
    _objc_retain();
    lStack_70 = param_2;
    puStack_68 = puVar7;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_90);
    puVar8 = puStack_68;
  }
  _objc_release(puVar8);
LAB_104a66974:
  _objc_release(param_4);
  return;
}



/* Entry: 104a669b0; end: 104a669c3;  */

void FUN_104a669b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a669c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104a669c4; end: 104a66ae7;  */

void FUN_104a669c4(long param_1,long param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  _objc_retain();
  if (param_2 == 0) {
    ppuVar2 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar2 != &PTR____CFConstantStringClassReference_110da8db8) goto LAB_104a66a58;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf109c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c480();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf109c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cec0();
  }
  _objc_release(uVar1);
LAB_104a66a58:
  func_0x00010bfd2ec0(PTR_PTR_1126ae468);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104a66ae8; end: 104a66cbf;  */

void FUN_104a66ae8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(uVar3);
  _objc_sync_enter();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf51e00();
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  _objc_sync_exit(uVar3);
  _objc_release(uVar3);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  puVar2 = PTR___dispatch_main_q_11034be20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar5 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uStack_148 = *(undefined8 *)(lStack_138 + lVar8 * 8);
        puStack_178 = puVar1;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_104a66cc0;
        puStack_160 = &UNK_11084a9e8;
        lVar6 = param_2;
        _objc_retain();
        uStack_150 = *(undefined8 *)(param_1 + 0x20);
        lStack_158 = lVar6;
        func_0x00010007380c(puVar2,&puStack_178);
        _objc_release(lStack_158);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(lVar4);
  __Unwind_Resume();
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a66ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),uVar3);
  return;
}



/* Entry: 104a66cc0; end: 104a66ce3;  */

void FUN_104a66cc0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a66ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar1);
  return;
}



/* Entry: 104a66ce4; end: 104a66d27; -[GIDGoogleUser authState] */

void FUN_104a66ce4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfaba00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf109c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a66d28; end: 104a66ea7; -[GIDGoogleUser addScopes:presentingViewController:completion:] */

void FUN_104a66d28(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain();
  puVar1 = PTR_PTR_1126a7220;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf608a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 == param_1) {
    puVar1 = PTR_PTR_1126a7220;
    func_0x00010c22ba80(PTR_PTR_1126a7220);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb1a0();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_104a66ea8;
      puStack_68 = &UNK_11084aaa8;
      lVar3 = param_5;
      _objc_retain();
      puVar2 = puVar1;
      lStack_58 = lVar3;
      _objc_retain();
      puStack_60 = puVar2;
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_80);
      _objc_release(puStack_60);
      _objc_release(lStack_58);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a66ea8; end: 104a66ebb;  */

void FUN_104a66ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a66eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a66ebc; end: 104a66f5f; -[GIDGoogleUser emmSupport] */

void FUN_104a66ebc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf109c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c088360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010befd300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104a66f60; end: 104a6708b; -[GIDGoogleUser initWithAuthState:profileData:] */

undefined1 *
FUN_104a66f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3620;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined **)((long)puVar2 + 0x10) = puVar3;
    _objc_release(uVar5);
    _objc_storeStrong((undefined1 *)((long)puVar2 + 0x18),param_4);
    puVar3 = PTR_PTR_1126ae478;
    _objc_alloc();
    func_0x00010bff58a0();
    puVar4 = PTR_PTR_1126ae468;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined **)((long)puVar2 + 0x40) = puVar4;
    _objc_release(uVar5);
    func_0x00010c18b5e0(puVar3);
    puVar4 = puVar3;
    func_0x00010bf109c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a0a0();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined **)((long)puVar2 + 0x38) = puVar3;
    _objc_release(uVar5);
    func_0x00010c28b2e0(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 104a6708c; end: 104a671cf; -[GIDGoogleUser updateWithTokenResponse:authorizationResponse:profileData:] */

void FUN_104a6708c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_sync_enter();
  _objc_storeStrong(param_1 + 0x18,param_5);
  lVar2 = param_1;
  func_0x00010bf109c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a0a0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf109c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c4a0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf109c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a0a0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf109c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28cec0();
  _objc_release(lVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a671d0; end: 104a67457; -[GIDGoogleUser updateTokensWithAuthState:] */

void FUN_104a671d0(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae480;
  _objc_alloc(PTR_PTR_1126ae480);
  lVar2 = param_3;
  func_0x00010c08a500(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beecce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c08a500(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010beecd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053fc0(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar6 = param_1;
  func_0x00010beecce0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c072120();
  _objc_release(uVar6);
  if ((uVar7 & 1) == 0) {
    func_0x00010c160dc0(param_1,param_2,puVar1);
  }
  puVar8 = PTR_PTR_1126ae480;
  _objc_alloc(PTR_PTR_1126ae480);
  lVar2 = param_3;
  func_0x00010c125640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053fc0(puVar8,param_2,lVar2,0);
  _objc_release(lVar2);
  uVar6 = param_1;
  func_0x00010c125640();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c072120();
  _objc_release(uVar6);
  if ((uVar7 & 1) == 0) {
    func_0x00010c1e9600(param_1,param_2,puVar8);
  }
  lVar2 = param_3;
  func_0x00010c08a500();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126ae3c8;
    _objc_alloc(PTR_PTR_1126ae3c8);
    func_0x00010c01ae00();
    puVar9 = puVar11;
    func_0x00010bf9cb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126ae480;
    _objc_alloc();
    func_0x00010c053fc0();
    _objc_release(puVar9);
  }
  uVar6 = param_1;
  func_0x00010bfe5e00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 != 0 || puVar11 != (undefined *)0x0) {
    uVar7 = param_1;
    func_0x00010bfe5e00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c072120();
    _objc_release(uVar7);
    _objc_release(uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x00010c1a9980(param_1,param_2,puVar11);
    }
  }
  _objc_release(lVar3);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a67458; end: 104a67553; -[GIDGoogleUser hostedDomain] */

void FUN_104a67458(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bfe5e00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_104a67538;
  }
  puVar2 = PTR_PTR_1126ae3c8;
  _objc_alloc();
  func_0x00010c01ae00();
  if (puVar2 == (undefined *)0x0) {
LAB_104a67524:
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar2;
    func_0x00010bf39ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    if (puVar3 == (undefined *)0x0) goto LAB_104a67524;
    puVar3 = puVar2;
    func_0x00010bf39ba0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_104a67538:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a67554; end: 104a67557; -[GIDGoogleUser didChangeState:] */

void FUN_104a67554(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28b2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateTokensWithAuthState__1126806e0);
  return;
}



/* Entry: 104a67558; end: 104a6755f; +[GIDGoogleUser supportsSecureCoding] */

undefined8 FUN_104a67558(void)

{
  return 1;
}



/* Entry: 104a67560; end: 104a676a7; -[GIDGoogleUser initWithCoder:] */

undefined1 * FUN_104a67560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain();
  puStack_48 = PTR_PTR_1126e3620;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126ae488);
    uVar2 = param_3;
    func_0x00010bf67020(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf4bc00();
    if ((int)uVar3 == 0) {
      _objc_opt_class(PTR_PTR_1126ae490);
      uVar3 = param_3;
      func_0x00010bf67020(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf109c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    else {
      _objc_opt_class(PTR_PTR_1126ae388);
      uVar4 = param_3;
      func_0x00010bf67020(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bff58c0(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a676a8; end: 104a6771f; -[GIDGoogleUser encodeWithCoder:] */

void FUN_104a676a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf109c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110daa298);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a67720; end: 104a67727; -[GIDGoogleUser profile] */

undefined8 FUN_104a67720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a67728; end: 104a6772f; -[GIDGoogleUser accessToken] */

undefined8 FUN_104a67728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a67730; end: 104a6773b; -[GIDGoogleUser setAccessToken:] */

void FUN_104a67730(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 104a6773c; end: 104a67743; -[GIDGoogleUser refreshToken] */

undefined8 FUN_104a6773c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a67744; end: 104a6774f; -[GIDGoogleUser setRefreshToken:] */

void FUN_104a67744(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104a67750; end: 104a67757; -[GIDGoogleUser idToken] */

undefined8 FUN_104a67750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a67758; end: 104a67763; -[GIDGoogleUser setIdToken:] */

void FUN_104a67758(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 104a67764; end: 104a6776b; -[GIDGoogleUser fetcherAuthorizer] */

undefined8 FUN_104a67764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a6776c; end: 104a67777; -[GIDGoogleUser setFetcherAuthorizer:] */

void FUN_104a6776c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104a67778; end: 104a6777f; -[GIDGoogleUser authSessionDelegate] */

undefined8 FUN_104a67778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104a67780; end: 104a6778b; -[GIDGoogleUser setAuthSessionDelegate:] */

void FUN_104a67780(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 104a6778c; end: 104a67803; -[GIDGoogleUser .cxx_destruct] */

void FUN_104a6778c(long param_1)

{
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



/* Entry: 104a67804; end: 104a678a3; -[GIDMDMPasscodeCache init] */

undefined1 * FUN_104a67804(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3628;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bfd8940();
    *(char *)((long)puVar1 + 8) = (char)puVar2;
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bfd82c0();
    *(char *)((long)puVar1 + 0x19) = (char)puVar2;
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104a678a4; end: 104a6790b; -[GIDMDMPasscodeCache dealloc] */

void FUN_104a678a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  puStack_28 = PTR_PTR_1126e3628;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104a6790c; end: 104a67967; +[GIDMDMPasscodeCache sharedInstance] */

void FUN_104a6790c(void)

{
  if (lRam00000001136a1cf8 != -1) {
    FUN_104a68308();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1cf0);
  return;
}



/* Entry: 104a67968; end: 104a67b77; -[GIDMDMPasscodeCache passcodeState] */

void FUN_104a67968(double param_1,long param_2)

{
  char *pcVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  byte bVar9;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain();
  _objc_sync_enter();
  if (*(char *)(param_2 + 8) == '\x01') {
    if (*(long *)(param_2 + 0x10) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)(param_2 + 0x18);
    }
  }
  else {
    bVar9 = 0;
  }
  if (*(char *)(param_2 + 0x19) == '\x01') {
    if (*(long *)(param_2 + 0x20) != 0) {
      func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x28));
      bVar2 = param_1 < 0.0;
      goto LAB_104a679dc;
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
LAB_104a679dc:
    if ((bVar9 & 1) == 0 && !bVar2) {
      lVar3 = *(long *)(param_2 + 0x30);
      if (lVar3 != 0) goto LAB_104a67b34;
      bVar2 = false;
    }
  }
  if (pcRam00000001136a1d00 == (char *)0x0) {
    pcVar4 = "com.google.MDM.PasscodeWorkQueue";
    _dispatch_queue_create("com.google.MDM.PasscodeWorkQueue",0);
    pcVar1 = pcRam00000001136a1d00;
    pcRam00000001136a1d00 = pcVar4;
    _objc_release(pcVar1);
    uVar5 = 0;
    _dispatch_semaphore_create();
    uVar6 = uRam00000001136a1d08;
    uRam00000001136a1d08 = uVar5;
    _objc_release(uVar6);
  }
  if (bVar2) {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    _objc_release(uVar6);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104a67b78;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_2;
    func_0x00010007380c(pcRam00000001136a1d00,&puStack_58);
  }
  if ((bVar9 & 1) != 0) {
    func_0x00010c0e14c0(param_2);
  }
  if (bVar2) {
    uVar6 = 0;
    _dispatch_time(0,3000000000);
    _dispatch_semaphore_wait(uRam00000001136a1d08,uVar6);
  }
  puVar7 = PTR_PTR_1126ae460;
  _objc_alloc();
  lVar3 = param_2;
  func_0x00010c252d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010bfed8e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c2c0();
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined **)(param_2 + 0x30) = puVar7;
  _objc_release(uVar6);
  _objc_release(lVar8);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_2 + 0x30);
LAB_104a67b34:
  _objc_retain(lVar3);
  _objc_sync_exit(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104a67b78; end: 104a67b97;  */

void FUN_104a67b78(long param_1)

{
  func_0x00010c0e14a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(uRam00000001136a1d08);
  return;
}



/* Entry: 104a67b98; end: 104a67c0f; -[GIDMDMPasscodeCache hasLocalAuthentication] */

undefined * FUN_104a67b98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c0793e0(puVar1);
  }
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 104a67c10; end: 104a67c17; -[GIDMDMPasscodeCache hasKeychain] */

undefined8 FUN_104a67c10(void)

{
  return 1;
}



/* Entry: 104a67c18; end: 104a67c23; -[GIDMDMPasscodeCache applicationDidEnterBackground:] */

void FUN_104a67c18(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 104a67c24; end: 104a67e43; -[GIDMDMPasscodeCache obtainLocalAuthenticationInfo] */

void FUN_104a67c24(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lStack_90;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (puRam00000001136a1d10 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___LAContext_1126a7db8;
    _objc_alloc_init();
    puVar4 = puRam00000001136a1d10;
    puRam00000001136a1d10 = puVar2;
    _objc_release(puVar4);
  }
  lStack_90 = 0;
  func_0x00010bf2c980(puRam00000001136a1d10);
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lStack_90 == 0) {
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
  }
  else {
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lStack_90;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf3ec40(lStack_90);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
  _objc_release(lVar8);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lStack_90 + 0x28);
  *(undefined **)(lStack_90 + 0x28) = puVar4;
  _objc_release(uVar6);
  if (puRam00000001136a1d18 == (undefined *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110daa718;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puRam00000001136a1d18;
    puRam00000001136a1d18 = puVar2;
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puRam00000001136a1d20;
    puRam00000001136a1d20 = puVar2;
    _objc_release(puVar4);
    _objc_release(ppuVar7);
  }
  puVar4 = puRam00000001136a1d18;
  _SecItemAdd(puRam00000001136a1d18,0);
  iVar1 = (int)puVar4;
  if (iVar1 == -0x62d3) {
    _SecItemDelete(puRam00000001136a1d20);
    puVar4 = puRam00000001136a1d18;
    _SecItemAdd(puRam00000001136a1d18,0);
    iVar1 = (int)puVar4;
  }
  if (iVar1 == 0) {
    _SecItemDelete(puRam00000001136a1d20);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lStack_90 + 0x20);
  *(undefined **)(lStack_90 + 0x20) = puVar2;
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(puVar4 + 0x10);
  if (lVar5 != 0) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bf1f3c0();
    ppuVar7 = &PTR____CFConstantStringClassReference_110db8118;
    if ((int)lVar8 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110db8138;
    }
    _objc_retain(ppuVar7);
    _objc_release(lVar5);
    goto LAB_104a68174;
  }
  lVar5 = *(long *)(puVar4 + 0x20);
  if (lVar5 == 0) {
LAB_104a6816c:
    ppuVar7 = &PTR____CFConstantStringClassReference_110daa738;
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c067ec0();
    _objc_release(lVar5);
    iVar1 = (int)lVar8;
    if (iVar1 < -0x62cb) {
      if (iVar1 != -0x66a3 && iVar1 != -0x62cd) goto LAB_104a6816c;
    }
    else {
      if (iVar1 == 0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110db8118;
        goto LAB_104a68174;
      }
      if (iVar1 != -0x62cb) goto LAB_104a6816c;
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110db8138;
  }
LAB_104a68174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 104a67e44; end: 104a6809f; -[GIDMDMPasscodeCache obtainKeychainInfo] */

void FUN_104a67e44(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  _objc_release(uVar6);
  if (puRam00000001136a1d18 == (undefined *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110daa718;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puRam00000001136a1d18;
    puRam00000001136a1d18 = puVar3;
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puRam00000001136a1d20;
    puRam00000001136a1d20 = puVar3;
    _objc_release(puVar2);
    _objc_release(ppuVar7);
  }
  puVar2 = puRam00000001136a1d18;
  _SecItemAdd(puRam00000001136a1d18,0);
  iVar1 = (int)puVar2;
  if (iVar1 == -0x62d3) {
    _SecItemDelete(puRam00000001136a1d20);
    puVar2 = puRam00000001136a1d18;
    _SecItemAdd(puRam00000001136a1d18,0);
    iVar1 = (int)puVar2;
  }
  if (iVar1 == 0) {
    _SecItemDelete(puRam00000001136a1d20);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar3;
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(puVar2 + 0x10);
  if (lVar5 != 0) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010bf1f3c0();
    ppuVar7 = &PTR____CFConstantStringClassReference_110db8118;
    if ((int)lVar4 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110db8138;
    }
    _objc_retain(ppuVar7);
    _objc_release(lVar5);
    goto LAB_104a68174;
  }
  lVar5 = *(long *)(puVar2 + 0x20);
  if (lVar5 == 0) {
LAB_104a6816c:
    ppuVar7 = &PTR____CFConstantStringClassReference_110daa738;
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c067ec0();
    _objc_release(lVar5);
    iVar1 = (int)lVar4;
    if (iVar1 < -0x62cb) {
      if (iVar1 != -0x66a3 && iVar1 != -0x62cd) goto LAB_104a6816c;
    }
    else {
      if (iVar1 == 0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110db8118;
        goto LAB_104a68174;
      }
      if (iVar1 != -0x62cb) goto LAB_104a6816c;
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110db8138;
  }
LAB_104a68174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 104a680a0; end: 104a6818f; -[GIDMDMPasscodeCache status] */

void FUN_104a680a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined **ppuVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dce878);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    ppuVar4 = &PTR____CFConstantStringClassReference_110db8118;
    if ((int)lVar2 == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110db8138;
    }
    _objc_retain(ppuVar4);
    _objc_release(lVar1);
    goto LAB_104a68174;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
LAB_104a6816c:
    ppuVar4 = &PTR____CFConstantStringClassReference_110daa738;
  }
  else {
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dce878);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067ec0();
    _objc_release(lVar1);
    iVar3 = (int)lVar2;
    if (iVar3 < -0x62cb) {
      if (iVar3 != -0x66a3 && iVar3 != -0x62cd) goto LAB_104a6816c;
    }
    else {
      if (iVar3 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db8118;
        goto LAB_104a68174;
      }
      if (iVar3 != -0x62cb) goto LAB_104a6816c;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110db8138;
  }
LAB_104a68174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 104a68190; end: 104a682bf; -[GIDMDMPasscodeCache info] */

undefined ** FUN_104a68190(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110daa698);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_110daa6b8);
  }
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  ppuVar5 = ppuVar4;
  func_0x00010c25cfc0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110dae918,
                      &PTR____CFConstantStringClassReference_110db3638);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  ppuVar3 = &PTR____CFConstantStringClassReference_110daa758;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar3 = ppuVar5;
  }
  _objc_retainAutoreleaseReturnValue(ppuVar3);
  _objc_release(ppuVar5);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  return ppuVar3;
}



/* Entry: 104a682c0; end: 104a68307; -[GIDMDMPasscodeCache .cxx_destruct] */

void FUN_104a682c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104a68308; end: 104a6831b;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_104a68308(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107c0578;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107c0578);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107c0578);
  func_0x000107c61180();
  (*pcVar3)(0x1136a1cf8,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 104a6831c; end: 104a683cb; -[GIDMDMPasscodeState initWithStatus:info:] */

undefined1 *
FUN_104a6831c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain();
  _objc_retain();
  puStack_38 = PTR_PTR_1126e3630;
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



/* Entry: 104a683cc; end: 104a68417; +[GIDMDMPasscodeState passcodeState] */

void FUN_104a683cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae498;
  func_0x00010c22ba80(PTR_PTR_1126ae498);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f4e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a68418; end: 104a6841f; -[GIDMDMPasscodeState status] */

undefined8 FUN_104a68418(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a68420; end: 104a68427; -[GIDMDMPasscodeState info] */

undefined8 FUN_104a68420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a68428; end: 104a68457; -[GIDMDMPasscodeState .cxx_destruct] */

void FUN_104a68428(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a68458; end: 104a685a7; -[GIDProfileData initWithEmail:name:givenName:familyName:imageURL:] */

undefined1 *
FUN_104a68458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e3638;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a685a8; end: 104a685b7; -[GIDProfileData hasImage] */

bool FUN_104a685a8(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}



/* Entry: 104a685b8; end: 104a68853; -[GIDProfileData imageURLWithDimension:] */

undefined * FUN_104a685b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 8) == 0) {
    puVar5 = (undefined *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    unaff_x19 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0727a0(param_1,param_2,*(undefined8 *)(param_1 + 8));
    unaff_x20 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)param_1 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = puVar5;
      func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc4658);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11d4c0(unaff_x20,param_2,&PTR____CFConstantStringClassReference_110daa818,puVar1)
      ;
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar5);
      unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = unaff_x20;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = unaff_x22;
      func_0x00010c1e6460(unaff_x19,param_2,unaff_x22);
    }
    else {
      uStack_58 = 0;
      unaff_x20 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                          &PTR____CFConstantStringClassReference_110daa7d8,0,&uStack_58);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = unaff_x19;
      func_0x00010c0f5800(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = unaff_x19;
      func_0x00010c0f5800(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c08fa60();
      unaff_x24 = unaff_x20;
      func_0x00010c25cfa0(unaff_x20,param_2,puVar1,0,0,puVar6,
                          &PTR____CFConstantStringClassReference_110daafd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820(unaff_x19,param_2,unaff_x24);
      _objc_release(unaff_x24);
      _objc_release(puVar5);
      _objc_release(puVar1);
      unaff_x23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      unaff_x22 = unaff_x19;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = unaff_x22;
      puStack_68 = puVar5;
      func_0x00010c25d9e0(unaff_x23,param_2,&PTR____CFConstantStringClassReference_110daa7f8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = unaff_x23;
      func_0x00010c1d9820(unaff_x19,param_2,unaff_x23);
      _objc_release(unaff_x23);
      _objc_release(puVar5);
    }
    _objc_release(unaff_x22);
    puVar5 = unaff_x19;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    _objc_release(unaff_x19);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_104a68854;
  puStack_b0 = unaff_x24;
  puStack_a8 = unaff_x23;
  puStack_a0 = unaff_x22;
  puStack_98 = puVar5;
  puStack_90 = unaff_x20;
  puStack_88 = unaff_x19;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  uStack_b8 = 0;
  puVar5 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110daa838,0,&uStack_b8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar1;
    func_0x00010beec820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010beec820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    puVar4 = puVar5;
    func_0x00010c0defc0(puVar5,param_2,puVar6,0,0,puVar3);
    _objc_release(puVar2);
    _objc_release(puVar6);
    puVar6 = (undefined *)(ulong)(puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  return puVar6;
}



/* Entry: 104a68854; end: 104a6893b; -[GIDProfileData isFIFEAvatarURL:] */

bool FUN_104a68854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110daa838,0,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    puVar6 = puVar2;
    func_0x00010c0defc0(puVar2,param_2,uVar3,0,0,uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    bVar1 = puVar6 != (undefined *)0x0;
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104a6893c; end: 104a68943; +[GIDProfileData supportsSecureCoding] */

undefined8 FUN_104a6893c(void)

{
  return 1;
}



/* Entry: 104a68944; end: 104a68b23; -[GIDProfileData initWithCoder:] */

undefined1 * FUN_104a68944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain();
  puStack_38 = PTR_PTR_1126e3638;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
    uVar2 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bf4bc00();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if ((int)uVar2 != 0) {
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar2 = param_3;
      func_0x00010bf67020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar3;
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a68b24; end: 104a68bbb; -[GIDProfileData encodeWithCoder:] */

void FUN_104a68b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dbf1b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110daa778);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110daa798);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110e158d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a68bbc; end: 104a68bbf; -[GIDProfileData copyWithZone:] */

void FUN_104a68bbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a68bc0; end: 104a68bc7; -[GIDProfileData email] */

undefined8 FUN_104a68bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a68bc8; end: 104a68bcf; -[GIDProfileData name] */

undefined8 FUN_104a68bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a68bd0; end: 104a68bd7; -[GIDProfileData givenName] */

undefined8 FUN_104a68bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a68bd8; end: 104a68bdf; -[GIDProfileData familyName] */

undefined8 FUN_104a68bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a68be0; end: 104a68c33; -[GIDProfileData .cxx_destruct] */

void FUN_104a68be0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a68c34; end: 104a68c9b; +[GIDScopes scopesWithBasicProfile:] */

void FUN_104a68c34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_104a68c9c(param_3,FUN_104a68e14,&PTR____CFConstantStringClassReference_110dadab8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_104a68c9c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a68c9c; end: 104a68e13;  */

undefined * FUN_104a68c9c(undefined *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar4 == (undefined *)0x0) {
      _objc_release(param_1);
      _objc_release(param_1);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
LAB_104a68dc8:
      _objc_release(param_3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
        return puVar4;
      }
      ___stack_chk_fail();
      _objc_retain();
      puVar4 = param_1;
      func_0x00010c0720c0();
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = param_1;
        func_0x00010c0720c0(param_1);
      }
      else {
        puVar4 = (undefined *)0x1;
      }
      _objc_release(param_1);
      return puVar4;
    }
    puVar5 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar2 = *(ulong *)((long)puVar5 * 8);
      (*param_2)();
      if ((uVar2 & 1) != 0) {
        _objc_release(param_1);
        _objc_release(param_1);
        puVar4 = param_1;
        _objc_retain(param_1);
        goto LAB_104a68dc8;
      }
      puVar5 = puVar5 + 1;
    } while (puVar4 != puVar5);
    puVar4 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104a68e14; end: 104a68ec3;  */

ulong FUN_104a68e14(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110da7ef8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a68ec4; end: 104a68ed3; -[GIDAuthFlow authState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a68ec4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f86c);
}



/* Entry: 104a68ed4; end: 104a68ee7; -[GIDAuthFlow setAuthState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a68ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f86c,param_3);
  return;
}



/* Entry: 104a68ee8; end: 104a68ef7; -[GIDAuthFlow error] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a68ee8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f870);
}



/* Entry: 104a68ef8; end: 104a68f0b; -[GIDAuthFlow setError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a68ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f870,param_3);
  return;
}


