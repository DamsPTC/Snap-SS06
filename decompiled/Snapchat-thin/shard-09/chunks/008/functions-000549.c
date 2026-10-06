/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10723e548; end: 10723e673; -[User _logoutUserWithForced:] */

void FUN_10723e548(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x00010aee6cbc();
  *(undefined1 *)(param_1 + 8) = 1;
  puVar1 = PTR_PTR_1126d5428;
  func_0x00010c22b6a0(PTR_PTR_1126d5428);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
  _objc_release(puVar1);
  func_0x00010bf3c500(param_1,param_2,1);
  func_0x00010c14b0c0(param_1);
  puVar1 = PTR_PTR_1126c5598;
  func_0x00010c22b6a0(PTR_PTR_1126c5598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0();
  _objc_release(puVar1);
  if ((param_3 & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d5420;
  func_0x00010c0f5800(PTR_PTR_1126d5420);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  func_0x00010c12cc40(puVar1,param_2,puVar2,&uStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10723e674; end: 10723e76b; -[User saveState] */

uint FUN_10723e674(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d5420;
  func_0x00010c0f5800(PTR_PTR_1126d5420);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14aa80(puVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be80240(param_1,param_2,&PTR____CFConstantStringClassReference_110df7698,puVar3);
  puVar1 = PTR_PTR_1126d5428;
  func_0x00010c22b6a0(PTR_PTR_1126d5428);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14b0c0();
  _objc_release(puVar1);
  func_0x00010be80240(param_1,param_2,&PTR____CFConstantStringClassReference_110ea3c38,puVar3);
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  return (uint)puVar3 & (uint)puVar2;
}



/* Entry: 10723e76c; end: 10723e76f; -[User _printLogInfo:saveSuccess:] */

void FUN_10723e76c(void)

{
  return;
}



/* Entry: 10723e770; end: 10723e86f; -[User isLoggedIn] */

uint FUN_10723e770(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    puVar1 = PTR_PTR_1126c5598;
    func_0x00010c22b6a0(PTR_PTR_1126c5598);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf10a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar3,param_2,puVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar3 & 1) == 0) {
      lVar4 = param_1;
      func_0x00010c2926a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00(puVar5,param_2,lVar4);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)puVar5 & 1) == 0) {
        func_0x00010c294560(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078c00(puVar3,param_2,param_1);
        uVar6 = (uint)puVar3 ^ 1;
        _objc_release(param_1);
      }
      else {
        uVar6 = 0;
      }
      _objc_release(lVar4);
    }
    else {
      uVar6 = 0;
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 10723e870; end: 10723e8ef; -[User _willChangeUserTo:] */

void FUN_10723e870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b24d8;
  func_0x00010c22b8a0(PTR_PTR_1126b24d8,param_2,&PTR____CFConstantStringClassReference_110ec17f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f060();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b24d8;
  func_0x00010c22b8a0(PTR_PTR_1126b24d8,param_2,&PTR____CFConstantStringClassReference_110f6de58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10723e8f0; end: 10723e91f; -[User setClientEncryption:] */

void FUN_10723e8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10723e920; end: 10723e92b; -[User userId_LEGACY_DO_NOT_USE] */

void FUN_10723e920(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 10723e92c; end: 10723e933; -[User setUserId_LEGACY_DO_NOT_USE:] */

void FUN_10723e92c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10723e934; end: 10723e93f; -[User usernameDisplayOnly_LEGACY_DO_NOT_USE] */

void FUN_10723e934(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 10723e940; end: 10723e947; -[User lagunaId] */

undefined8 FUN_10723e940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10723e948; end: 10723e98f; -[User .cxx_destruct] */

void FUN_10723e948(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10723e990; end: 10723e997; +[SCExperimentOverrideStore shared] */

undefined8 FUN_10723e990(void)

{
  return 0;
}



/* Entry: 10723e998; end: 10723e99f; -[SCExperimentOverrideStore saveState] */

undefined8 FUN_10723e998(void)

{
  return 1;
}



/* Entry: 10723e9a0; end: 10723e9a3; -[SCExperimentOverrideStore clear] */

void FUN_10723e9a0(void)

{
  return;
}



/* Entry: 10723e9a4; end: 10723e9a7; -[SCExperimentOverrideStore setOverrideForStudy:experimentId:params:experimentIds:] */

void FUN_10723e9a4(void)

{
  return;
}



/* Entry: 10723e9a8; end: 10723e9ab; -[SCExperimentOverrideStore clearOverrideForStudy:] */

void FUN_10723e9a8(void)

{
  return;
}



/* Entry: 10723e9ac; end: 10723e9b3; -[SCExperimentOverrideStore overrideExists:] */

undefined8 FUN_10723e9ac(void)

{
  return 0;
}



/* Entry: 10723e9b4; end: 10723e9bb; -[SCExperimentOverrideStore overrideExists:experimentId:] */

undefined8 FUN_10723e9b4(void)

{
  return 0;
}



/* Entry: 10723e9bc; end: 10723e9c3; -[SCExperimentOverrideStore overrideValid:experimentId:] */

undefined8 FUN_10723e9bc(void)

{
  return 0;
}



/* Entry: 10723e9c4; end: 10723e9cb; -[SCExperimentOverrideStore stringForStudy:forVariable:] */

undefined8 FUN_10723e9c4(void)

{
  return 0;
}



/* Entry: 10723e9cc; end: 10723e9d3; -[SCExperimentOverrideStore boolForStudy:forVariable:] */

undefined8 FUN_10723e9cc(void)

{
  return 0;
}



/* Entry: 10723e9d4; end: 10723e9db; -[SCExperimentOverrideStore integerForStudy:forVariable:] */

undefined8 FUN_10723e9d4(void)

{
  return 0;
}



/* Entry: 10723e9dc; end: 10723e9e3; -[SCExperimentOverrideStore uIntegerForStudy:forVariable:] */

undefined8 FUN_10723e9dc(void)

{
  return 0;
}



/* Entry: 10723e9e4; end: 10723e9eb; -[SCExperimentOverrideStore doubleForStudy:forVariable:] */

undefined8 FUN_10723e9e4(void)

{
  return 0;
}



/* Entry: 10723e9ec; end: 10723e9f3; -[SCExperimentOverrideStore floatForStudy:forVariable:] */

undefined8 FUN_10723e9ec(void)

{
  return 0;
}



/* Entry: 10723e9f4; end: 10723e9fb; -[SCExperimentPreferenceStore initWithFilePath:logger:metrics:] */

void FUN_10723e9f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFilePath_logger_metrics__1125e2528);
  return;
}



/* Entry: 10723e9fc; end: 10723ea03; -[SCExperimentPreferenceStore saveState] */

undefined8 FUN_10723e9fc(void)

{
  return 1;
}



/* Entry: 10723ea04; end: 10723ea5b; -[SCExperimentPreferenceStore clear] */

void FUN_10723ea04(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10723ea5c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010010a3e8(*(undefined8 *)(param_1 + 0x18),&puStack_38);
  return;
}



/* Entry: 10723ea5c; end: 10723eb97;  */

void FUN_10723ea5c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  if (*(long *)(*(long *)(param_1 + 0x20) + 8) == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x0001000f746c();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = uVar1;
    _objc_release();
  }
  _dispatch_group_create();
  _dispatch_group_enter();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10723eb98;
  puStack_40 = &UNK_110842e18;
  lStack_38 = lVar4;
  _objc_retain(lVar4);
  uVar1 = 0x20;
  func_0x0001008553e8(0x20,&puStack_58);
  func_0x00010c06a260(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  _dispatch_group_wait(lVar4,0xffffffffffffffff);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x0001000f746c();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(lStack_38);
  _objc_release(lVar4);
  return;
}



/* Entry: 10723eb98; end: 10723eb9f;  */

void FUN_10723eb98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10723eba0; end: 10723ec73; -[SCExperimentPreferenceStore setStudySettingsFromDictionary:syncOrigin:] */

void FUN_10723eba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10723ec74;
  puStack_68 = &UNK_11084c4a0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = uVar1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010010a3e8(uVar2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10723ec74; end: 10723ecd7;  */

void FUN_10723ec74(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  _CACurrentMediaTime();
  dVar3 = param_1;
  func_0x00010bed7a80(*(undefined8 *)(param_2 + 0x20),param_3,*(undefined8 *)(param_2 + 0x28));
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  _CACurrentMediaTime();
  func_0x00010bf9c5a0(dVar3 - param_1,uVar1,param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10723ecd8; end: 10723ecdb; -[SCExperimentPreferenceStore setStudySettingsFromJsonDictionary:syncOrigin:] */

void FUN_10723ecd8(void)

{
  return;
}



/* Entry: 10723ecdc; end: 10723edab; -[SCExperimentPreferenceStore hasExperiments] */

bool FUN_10723ecdc(long param_1)

{
  long lVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10723edac;
  uStack_30 = 0x10723edbc;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10723edc4;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x18),&puStack_80);
  lVar1 = puStack_48[5];
  func_0x00010bf529e0(lVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  return lVar1 != 0;
}



/* Entry: 10723edac; end: 10723edc3;  */

void FUN_10723edac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10723edc4; end: 10723ee0f;  */

void FUN_10723edc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ea3c78);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10723ee10; end: 10723ee1f; -[SCExperimentPreferenceStore hasInitialisedStorage] */

bool FUN_10723ee10(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}



/* Entry: 10723ee20; end: 10723ee27; -[SCExperimentPreferenceStore getStudySettings] */

void FUN_10723ee20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc23d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getAllSettingsForStudy__1125ce298,0);
  return;
}



/* Entry: 10723ee28; end: 10723ef0f; -[SCExperimentPreferenceStore getAllSettingsForStudy:] */

void FUN_10723ee28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10723edac;
  uStack_40 = 0x10723edbc;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10723ef10;
  puStack_80 = &UNK_11084fa08;
  lStack_78 = param_1;
  uStack_70 = param_3;
  puStack_58 = puStack_68;
  _objc_retain(param_3);
  func_0x00010006eaa4(uVar1,&puStack_98);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(uStack_70);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10723ef10; end: 10723ef53;  */

void FUN_10723ef10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be23260(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10723ef54; end: 10723efd3; -[SCExperimentPreferenceStore _getStudyUserInfoLoggingRequired:] */

long FUN_10723ef54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110ea3c98);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 10723efd4; end: 10723f0c7; -[SCExperimentPreferenceStore logStudyTriggeredEvent:experimentId:source:] */

void FUN_10723efd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10723f0c8;
  puStack_78 = &UNK_110871ae8;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_70 = param_3;
  lStack_68 = param_1;
  uStack_60 = param_4;
  uStack_50 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10723f0c8; end: 10723f11b;  */

void FUN_10723f0c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be232a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be594f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__logStudyTriggeredEvent_experime_112573ed8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x40),lVar2);
  return;
}



/* Entry: 10723f11c; end: 10723f14b;  */

void FUN_10723f11c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010bed8ac0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10723f14c; end: 10723f19f; -[SCExperimentPreferenceStore _updateFromRecoveryPayloadIfNeeded:] */

void FUN_10723f14c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7830;
  func_0x00010c08eb40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c20ea60(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110ea3d78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10723f1a0; end: 10723f1f3; -[SCExperimentPreferenceStore _waitForRecovery] */

void FUN_10723f1a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    uVar1 = 0;
    _dispatch_time(0,3000000000);
    _dispatch_semaphore_wait(lVar2,uVar1);
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x58));
      return;
    }
  }
  return;
}



/* Entry: 10723f1f4; end: 10723f3f3; -[SCExperimentPreferenceStore _getStudySettingsWithPrefix:] */

undefined * FUN_10723f1f4(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bfaeb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar4);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0e00e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar6);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_hasPrefix__1125d43b0);
    return param_2;
  }
  return (undefined *)0x1;
}



/* Entry: 10723f3f4; end: 10723f40b;  */

undefined8 FUN_10723f3f4(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_hasPrefix__1125d43b0);
    return param_2;
  }
  return 1;
}



/* Entry: 10723f40c; end: 10723f43f; -[SCExperimentPreferenceStore _getStudySettingsWithName:] */

void FUN_10723f40c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010be23280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0e00e0(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10723f440; end: 10723f627; -[SCExperimentPreferenceStore _updateExperimentStore:] */

void FUN_10723f440(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000f746c();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar3;
    _objc_release(uVar8);
    lVar2 = *(long *)(param_1 + 8);
  }
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar4 = param_3;
  func_0x00010bf002e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar6 = lVar2;
  func_0x00010c0d3c80();
  func_0x00010c0ce860();
  _objc_retain(lVar6);
  lVar4 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 8));
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_storeStrong(param_3 + 0x50,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10723f628; end: 10723f6b7; -[SCExperimentPreferenceStore .cxx_destruct] */

void FUN_10723f628(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10723f6b8; end: 10723f6e3; +[SCExperimentStore shared] */

void FUN_10723f6b8(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001136ca0d8;
  _objc_retain(uRam00000001136ca0d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10723f6e4; end: 10723f72b; -[SCExperimentStore saveState] */

undefined8 FUN_10723f6e4(long param_1)

{
  undefined *puVar1;
  
  func_0x00010c14b0c0(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR_PTR_1126d5438;
  func_0x00010c22b6a0(PTR_PTR_1126d5438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14b0c0();
  _objc_release(puVar1);
  return 1;
}



/* Entry: 10723f72c; end: 10723f76b; -[SCExperimentStore clear] */

void FUN_10723f72c(long param_1)

{
  undefined *puVar1;
  
  func_0x00010bf3a660(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR_PTR_1126d5438;
  func_0x00010c22b6a0(PTR_PTR_1126d5438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10723f76c; end: 10723f823; -[SCExperimentStore setStudySettingsFromDictionary:syncOrigin:] */

void FUN_10723f76c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9c4a0();
    }
    else {
      func_0x00010becdd40(param_1,param_2,param_3,param_4);
      func_0x00010c20ea60(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9c5c0();
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10723f824; end: 10723f8fb; -[SCExperimentStore setStudySettingsFromJsonDictionary:syncOrigin:] */

void FUN_10723f824(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9c4a0();
    }
    else {
      lVar2 = param_1;
      func_0x00010be23240(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becdd40(param_1,param_2,lVar2,param_4);
      func_0x00010c20ea60(*(undefined8 *)(param_1 + 8),param_2,lVar2,param_4);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9c5c0();
      _objc_release(uVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10723f8fc; end: 10723fba3; -[SCExperimentStore _trackChangedStudiesInSync:syncOrigin:] */

/* WARNING: Possible PIC construction at 0x00010723f980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010723f984) */
/* WARNING: Removing unreachable block (ram,0x00010723fa70) */
/* WARNING: Removing unreachable block (ram,0x00010723f9bc) */
/* WARNING: Removing unreachable block (ram,0x00010723f9cc) */
/* WARNING: Removing unreachable block (ram,0x00010723f9d0) */
/* WARNING: Removing unreachable block (ram,0x00010723f9e0) */
/* WARNING: Removing unreachable block (ram,0x00010723f9e8) */
/* WARNING: Removing unreachable block (ram,0x00010723fa50) */
/* WARNING: Removing unreachable block (ram,0x00010723fa6c) */
/* WARNING: Removing unreachable block (ram,0x00010723fa74) */
/* WARNING: Removing unreachable block (ram,0x00010723faa8) */
/* WARNING: Removing unreachable block (ram,0x00010723fab4) */
/* WARNING: Removing unreachable block (ram,0x00010723fab8) */
/* WARNING: Removing unreachable block (ram,0x00010723fac8) */
/* WARNING: Removing unreachable block (ram,0x00010723fad0) */
/* WARNING: Removing unreachable block (ram,0x00010723faf4) */
/* WARNING: Removing unreachable block (ram,0x00010723fb04) */
/* WARNING: Removing unreachable block (ram,0x00010723fb20) */
/* WARNING: Removing unreachable block (ram,0x00010723fba0) */
/* WARNING: Removing unreachable block (ram,0x00010723fc24) */
/* WARNING: Removing unreachable block (ram,0x00010723fc34) */
/* WARNING: Removing unreachable block (ram,0x00010723fc38) */
/* WARNING: Removing unreachable block (ram,0x00010723fc48) */
/* WARNING: Removing unreachable block (ram,0x00010723fc50) */
/* WARNING: Removing unreachable block (ram,0x00010723fcc4) */
/* WARNING: Removing unreachable block (ram,0x00010723fcd4) */
/* WARNING: Removing unreachable block (ram,0x00010723fcf8) */
/* WARNING: Removing unreachable block (ram,0x00010723fd14) */
/* WARNING: Removing unreachable block (ram,0x00010723fd60) */
/* WARNING: Removing unreachable block (ram,0x00010723fd3c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x00010723fb80) */

void FUN_10723f8fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(param_3);
  func_0x00010bf9c580(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bfcae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getStudySettings_1125d0530);
  return;
}



/* Entry: 10723fba4; end: 10723fd63; -[SCExperimentStore _getStudySettingsFromDictionary:] */

void FUN_10723fba4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar4 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      lVar5 = lVar4;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1900(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      _objc_release(lVar5);
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar6);
      _objc_release(0);
      _objc_release(lVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfcae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 8),PTR_s_getStudySettings_1125d0530);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10723fd64; end: 10723fd6b; -[SCExperimentStore getStudySettings] */

void FUN_10723fd64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getStudySettings_1125d0530);
  return;
}



/* Entry: 10723fd6c; end: 10723fd73; -[SCExperimentStore getAllSettingsForStudy:] */

void FUN_10723fd6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc23d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getAllSettingsForStudy__1125ce298);
  return;
}



/* Entry: 10723fd74; end: 10723fd7b; -[SCExperimentStore logStudyTriggeredEvent:experimentId:source:] */

void FUN_10723fd74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b1350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logStudyTriggeredEvent_experimen_112609ee0);
  return;
}



/* Entry: 10723fd7c; end: 10723fd87; -[SCExperimentStore logExposureForExperiment:treatmentId:] */

void FUN_10723fd7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b1350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logStudyTriggeredEvent_experimen_112609ee0,param_3,
             param_4,3);
  return;
}



/* Entry: 10723fd88; end: 10723fdb7; -[SCExperimentStore .cxx_destruct] */

void FUN_10723fd88(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10723fdb8; end: 10723fe5b;  */

void FUN_10723fdb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d42d0;
  _objc_opt_class(PTR_PTR_1126d42d0);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_1109949a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfc1d60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10723fe5c; end: 10723febb;  */

void FUN_10723fe5c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c293740(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10723febc; end: 10723ff23;  */

void FUN_10723febc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd3a0;
  _objc_opt_class(PTR_PTR_1126bd3a0);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110994a00);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136ca0e8;
  uRam00000001136ca0e8 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10723ff24; end: 10723ff2b;  */

void FUN_10723ff24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08f6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_legacyStoriesTooltipsService_1126017c8);
  return;
}



/* Entry: 10723ff2c; end: 10723ff6b;  */

void FUN_10723ff2c(void)

{
  if (lRam00000001136ca0f0 != -1) {
    func_0x00010002a2fc(0x1136ca0f0,&PTR___NSConcreteGlobalBlock_110994a20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam00000001136ca0f8,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 10723ff6c; end: 10723ffd3;  */

void FUN_10723ff6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf130;
  _objc_opt_class(PTR_PTR_1126cf130);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110994a40);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136ca0f8;
  uRam00000001136ca0f8 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10723ffd4; end: 10723ffdb;  */

void FUN_10723ffd4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2587f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storiesMediaCoordinator_112673c20);
  return;
}



/* Entry: 10723ffdc; end: 10723ffe3; -[SCStoriesEmptySupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_10723ffdc(void)

{
  return 1;
}



/* Entry: 10723ffe4; end: 107240027; -[SCStoriesEmptySupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined1  [16] FUN_10723ffe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  func_0x00010c0720c0(param_3,param_2,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  bVar1 = (int)param_3 == 0;
  uVar2 = 0;
  if (bVar1) {
    uVar2 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  uVar3 = 0x3ff0000000000000;
  if (bVar1) {
    uVar3 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 107240028; end: 1072400f3; -[SCStoriesEmptySupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_107240028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ea3d98;
  puVar4 = PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &puStack_30;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar3);
    ppuVar2 = ppuVar3;
    func_0x00010c0720c0(ppuVar3,param_2,
                        *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
    if ((int)ppuVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar1 = puVar1 + 8;
      _objc_loadWeakRetained(puVar1);
      puVar4 = puVar1;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_release(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1072400f4; end: 10724018b; -[SCStoriesEmptySupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_1072400f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10724018c; end: 1072401a3; -[SCStoriesEmptySupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_10724018c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1072401a4; end: 1072401af; -[SCStoriesEmptySupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_1072401a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1072401b0; end: 1072401b7; -[SCStoriesEmptySupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_1072401b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1072401b8; end: 1072401bf; -[SCStoriesEmptySupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_1072401b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1072401c0; end: 1072401eb; -[SCStoriesEmptySupplementaryViewProvider .cxx_destruct] */

void FUN_1072401c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1072401ec; end: 107240203;  */

void FUN_1072401ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,PTR_PTR_1126afca8,PTR_s_showMessageWithText_backgroundCo_11266bbf8,
             param_1,param_2);
  return;
}



/* Entry: 107240204; end: 1072402a7;  */

void FUN_107240204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afca8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c2a4b20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238780(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1072402a8; end: 1072405bf;  */

long FUN_1072402a8(long param_1)

{
  long lVar1;
  
  if (param_1 < 0x10ca441e) {
    if (param_1 < -0xea092b9) {
      if (param_1 < -0x6401d9ed) {
        if (param_1 < -0x6d0cb17c) {
          if (param_1 == -0x729f5962) {
            return -0x729f5962;
          }
          lVar1 = -0x70364b9a;
        }
        else {
          if (param_1 == -0x6d0cb17c) {
            return -0x6d0cb17c;
          }
          lVar1 = -0x67e67e6f;
        }
      }
      else if (param_1 < -0x50fe1120) {
        if (param_1 == -0x6401d9ed) {
          return -0x6401d9ed;
        }
        lVar1 = -0x57465a43;
      }
      else {
        if (param_1 == -0x50fe1120) {
          return -0x50fe1120;
        }
        if (param_1 == -0x30a2f521) {
          return -0x30a2f521;
        }
        lVar1 = -0x154e5cae;
      }
    }
    else if (param_1 < -0x42fd6ce) {
      if (param_1 < -0x4c6260f) {
        if (param_1 == -0xea092b9) {
          return -0xea092b9;
        }
        lVar1 = -0xd4e6138;
      }
      else {
        if (param_1 == -0x4c6260f) {
          return -0x4c6260f;
        }
        lVar1 = -0x49bc1bd;
      }
    }
    else {
      if (param_1 < 0x9c0b737) {
        if (param_1 == -0x42fd6ce) {
          return -0x42fd6ce;
        }
        if (param_1 == 0) {
          return 0;
        }
        return -0x6368e81b;
      }
      if (param_1 == 0x9c0b737) {
        return 0x9c0b737;
      }
      if (param_1 == 0x9c0db8b) {
        return 0;
      }
      lVar1 = 0x1070c589;
    }
  }
  else if (param_1 < 0x2e879d01) {
    if (param_1 < 0x1df5c7d4) {
      if (param_1 < 0x1a0e6a1a) {
        if (param_1 == 0x10ca441e) {
          return 0x10ca441e;
        }
        lVar1 = 0x1a040a22;
      }
      else {
        if (param_1 == 0x1a0e6a1a) {
          return 0x1a0e6a1a;
        }
        lVar1 = 0x1b567ead;
      }
    }
    else if (param_1 < 0x248de666) {
      if (param_1 == 0x1df5c7d4) {
        return 0x1df5c7d4;
      }
      lVar1 = 0x20e40509;
    }
    else {
      if (param_1 == 0x248de666) {
        return 0x248de666;
      }
      if (param_1 == 0x2e5189e1) {
        return 0x2e5189e1;
      }
      lVar1 = 0x2e593b1b;
    }
  }
  else if (param_1 < 0x54110798) {
    if (param_1 < 0x3cf4b9ff) {
      if (param_1 == 0x2e879d01) {
        return 0x2e879d01;
      }
      lVar1 = 0x2f5432a1;
    }
    else {
      if (param_1 == 0x3cf4b9ff) {
        return 0x3cf4b9ff;
      }
      if (param_1 == 0x431dca04) {
        return 0x431dca04;
      }
      lVar1 = 0x4a68a6a6;
    }
  }
  else if (param_1 < 0x6424ea8b) {
    if (param_1 == 0x54110798) {
      return 0x54110798;
    }
    lVar1 = 0x5740d2fe;
  }
  else {
    if (param_1 == 0x6424ea8b) {
      return 0x6424ea8b;
    }
    if (param_1 == 0x7ebc3d7f) {
      return 0x7ebc3d7f;
    }
    lVar1 = 0x78fe2cec;
  }
  if (param_1 == lVar1) {
    return param_1;
  }
  return -0x6368e81b;
}



/* Entry: 1072405c0; end: 10724066b; -[SCEmbeddedMapViewLoggingSession initWithSource:profileSessionID:blizzardLogger:] */

undefined1 *
FUN_1072405c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8cf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10724066c; end: 10724068f; -[SCEmbeddedMapViewLoggingSession copyWithZone:] */

undefined8 FUN_10724066c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107240690; end: 107240727; -[SCEmbeddedMapViewLoggingSession logViewIfNeeded] */

void FUN_107240690(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010007380c();
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 107240728; end: 10724077f;  */

void FUN_107240728(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5440;
  _objc_alloc_init(PTR_PTR_1126d5440);
  func_0x00010c206c40();
  func_0x00010c1e44c0(puVar1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  func_0x00010c0b2e60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107240780; end: 107240787; -[SCEmbeddedMapViewLoggingSession profileSessionID] */

undefined8 FUN_107240780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107240788; end: 1072407b7; -[SCEmbeddedMapViewLoggingSession setProfileSessionID:] */

void FUN_107240788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1072407b8; end: 1072407e7; -[SCEmbeddedMapViewLoggingSession .cxx_destruct] */

void FUN_1072407b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1072407e8; end: 107240877; +[SCMapLocationSharingLogUtil logViewedLocationSharingButtonWithType:source:blizzardLogger:] */

void FUN_1072407e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5448;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c206c40();
  func_0x00010c1fed00(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1b2900(puVar1,param_2,0);
  func_0x00010c0b2e60(param_5,param_2,puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107240878; end: 10724093f; +[SCMapLocationSharingLogUtil logLocationShareDialogWithSource:dialogType:resultingSharingAudience:didCompleteFlow:blizzardLogger:] */

void FUN_107240878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5450;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c206c40();
  func_0x00010c1b2900(puVar1,param_2,0);
  func_0x00010c1fec20(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1ed480(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1b4d40(puVar1,param_2,param_6);
  func_0x00010c0b2e60(param_7,param_2,puVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107240940; end: 107240a33; +[SCMapLocationSharingLogUtil logLocationMessageSeenWithMessageType:canShareBack:wasAlreadySharing:messageId:blizzardLogger:] */

void FUN_107240940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (lRam00000001136ca108 != -1) {
    func_0x00010002a2fc(0x1136ca108,&PTR___NSConcreteGlobalBlock_110994ab8);
  }
  uVar1 = uRam00000001136ca100;
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(uRam00000001136ca100);
    puVar2 = PTR_PTR_1126d5458;
    _objc_alloc_init(PTR_PTR_1126d5458);
    func_0x00010c1fed00();
    func_0x00010c177d00(puVar2);
    func_0x00010c2247e0(puVar2);
    func_0x00010c0b2e60(param_7);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107240a34; end: 107240a5f;  */

void FUN_107240a34(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  uVar1 = puRam00000001136ca100;
  puRam00000001136ca100 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107240a60; end: 107240ae3; +[SCMapLocationSharingLogUtil logLocationMessageResponseWithMessageType:didShareBack:blizzardLogger:] */

void FUN_107240a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5460;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1fed00();
  _objc_release(param_3);
  func_0x00010c18dd00(puVar1,param_2,param_4);
  func_0x00010c0b2e60(param_5,param_2,puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107240ae4; end: 107240b6f; +[SCMapLocationSharingLogUtil logLocationShareDialogChooseMoreWithSource:didChooseMore:numberOfFriendsChosen:blizzardLogger:] */

void FUN_107240ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5468;
  _objc_retain(param_6);
  _objc_alloc_init(puVar1);
  func_0x00010c206c40();
  func_0x00010c18de60(puVar1,param_2,param_4);
  func_0x00010c1cfb80(puVar1,param_2,param_5);
  func_0x00010c0b2e60(param_6,param_2,puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107240b70; end: 107240c37; -[SCMapLoggerEventSender initWithBlizzardLogger:sessionIdProvider:] */

undefined8 *
FUN_107240b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_4);
  puStack_40 = PTR_PTR_1126f8cf8;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = auStack_38;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 2,puVar3);
    _objc_release(puVar3);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107240c38; end: 107240dbf; -[SCMapLoggerEventSender mapViewOpenedWithSource:sourcePage:sourcePageContext:type:friendsInViewport:unviewedStatusesInViewport:viewedStatusesInViewport:locationSharingSetting:deviceBackgroundLocationPermissionGranted:deviceLocationPermissionGranted:] */

void FUN_107240c38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10,undefined4 param_11)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d5470;
  _objc_retain(param_4);
  _objc_alloc_init(puVar2);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar2,param_2,lVar4);
  _objc_release(lVar3);
  func_0x00010c206c40(puVar2,param_2,param_3);
  func_0x00010c206f20(puVar2,param_2,param_4);
  _objc_release(param_4);
  lVar3 = param_5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c206f60(puVar2,param_2,param_5);
  }
  if (param_6 - 1U < 5) {
    uVar5 = *(undefined8 *)(&UNK_10de20d30 + (param_6 - 1U) * 8);
  }
  else {
    uVar5 = 6;
  }
  func_0x00010c161620(puVar2,param_2,uVar5);
  func_0x00010c223380(puVar2,param_2,param_7);
  func_0x00010c2235e0(puVar2,param_2,param_8);
  func_0x00010c223640(puVar2,param_2,param_9);
  func_0x00010c1bfd20(puVar2,param_2,param_10);
  func_0x00010c18cb20(puVar2,param_2,param_11._1_1_);
  uVar1 = 2;
  if ((char)param_11 == '\0') {
    uVar1 = param_11._1_1_;
  }
  func_0x00010c1bfac0(puVar2,param_2,uVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107240dc0; end: 1072410db; -[SCMapLoggerEventSender mapViewClosedWithType:duration:friendOnMap:bestFriendsOnMap:friendsInViewport:friendsInViewportMax:totalFriendsSeen:totalBestFriendsSeen:totalFriendsHighlighted:totalBestFriendsHighlighted:totalUniqueClustersHighlighted:totalClustersInHighlightZone:totalClustersHighlighted:friendStoryShownUniqueThumbnailCount:friendStoryShownUniqueUserIdCount:friendStoryTapCount:unviewedStatusesInViewport:viewedStatusesInViewport:statusesInViewportMax:totalStatusesSeen:seenPoiIds:mapTrayType:trayUnseenItemCount:isHeatmapToggleOn:mapStyleName:mapAppearance:] */

void FUN_107240dc0(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13,
                  undefined4 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
                  undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
                  undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
                  undefined8 param_26,undefined1 param_27,undefined4 param_28,long param_29,
                  undefined8 param_30)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_29);
  puVar1 = PTR_PTR_1126d5478;
  _objc_retain(param_24);
  _objc_alloc_init(puVar1);
  lVar2 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_3,lVar3);
  _objc_release(lVar2);
  func_0x00010c206c40(puVar1,param_3,0x22);
  if (param_4 - 4 < 2) {
    uVar4 = 2;
LAB_107240f18:
    func_0x00010c161620(puVar1,param_3,uVar4);
    if (param_4 < 6) {
      uVar4 = *(undefined8 *)(&UNK_10de20c98 + param_4 * 8);
      goto LAB_107240f3c;
    }
  }
  else {
    if (param_4 != 2) {
      uVar4 = 5;
      goto LAB_107240f18;
    }
    func_0x00010c161620(puVar1,param_3,0xffffffffffffffff);
  }
  uVar4 = 6;
LAB_107240f3c:
  func_0x00010c198340(puVar1,param_3,uVar4);
  func_0x00010c222d20((double)(float)(int)(param_1 * 10.0) / 10.0,puVar1);
  func_0x00010c1c20e0(puVar1,param_3,param_5);
  func_0x00010c1c1ec0(puVar1,param_3,param_6);
  func_0x00010c223380(puVar1,param_3,param_7);
  func_0x00010c2233c0(puVar1,param_3,param_8);
  func_0x00010c223360(puVar1,param_3,param_9);
  func_0x00010c2232e0(puVar1,param_3,param_10);
  func_0x00010c2233a0(puVar1,param_3,param_11);
  func_0x00010c223300(puVar1,param_3,param_12);
  func_0x00010c1cf9c0(puVar1,param_3,param_15);
  func_0x00010c1cfc40(puVar1,param_3,param_16);
  func_0x00010c2233e0(puVar1,param_3,param_17);
  func_0x00010c2235c0(puVar1,param_3,param_18);
  func_0x00010c1a02a0(puVar1,param_3,param_19);
  func_0x00010c2235e0(puVar1,param_3,param_20);
  func_0x00010c223640(puVar1,param_3,param_21);
  func_0x00010c223560(puVar1,param_3,param_22);
  func_0x00010c223540(puVar1,param_3,param_23);
  uVar4 = param_24;
  func_0x00010bf446e0(param_24,param_3,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_24);
  func_0x00010c1c2480(puVar1,param_3,uVar4);
  _objc_release(uVar4);
  func_0x00010c21a040(puVar1,param_3,param_25);
  func_0x00010c21a060(puVar1,param_3,param_26);
  func_0x00010c1b1a60(puVar1,param_3,param_27);
  lVar2 = param_29;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1c27a0(puVar1,param_3,param_29);
  }
  func_0x00010c1c1e20(puVar1,param_3,param_30);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_29);
  return;
}



/* Entry: 1072410dc; end: 1072412e3; -[SCMapLoggerEventSender mapViewFriendClusterViewedWithSource:actionType:clusterUserIds:clusterUnviewedStatuses:clusterViewedStatuses:clusterViewedBestFriends:friendsOnMap:bestFriendsOnMap:friendsInViewport:distanceFromUser:highlighted:zoomLevel:extra:footerActionId:] */

void FUN_1072410dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d5480;
  _objc_retain(param_16);
  _objc_retain(param_7);
  _objc_alloc_init(puVar1);
  lVar2 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0bac20();
  func_0x00010c1c2900(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  func_0x00010724330c(param_5);
  func_0x00010c206c40(puVar1,param_4,param_5);
  func_0x00010c161620(puVar1,param_4,param_6);
  uVar4 = param_7;
  func_0x00010bf529e0(param_7);
  func_0x00010c212320(puVar1,param_4,uVar4);
  uVar4 = param_7;
  func_0x00010bf446e0(param_7,param_4,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c212600(puVar1,param_4,uVar4);
  _objc_release(uVar4);
  func_0x00010c212560(puVar1,param_4,param_8);
  func_0x00010c2126e0(puVar1,param_4,param_9);
  func_0x00010c2126c0(puVar1,param_4,param_10);
  func_0x00010c1c20e0(puVar1,param_4,param_11);
  func_0x00010c1c1ec0(puVar1,param_4,param_12);
  func_0x00010c223380(puVar1,param_4,param_13);
  func_0x00010c190ae0(param_1,puVar1);
  func_0x00010c1b4ec0(puVar1,param_4,param_14);
  func_0x00010c227be0(param_2,puVar1);
  func_0x00010c199900(puVar1,param_4,param_16);
  _objc_release(param_16);
  func_0x00010c1c2020(puVar1,param_4,param_17);
  func_0x00010c0b2e60(*(undefined8 *)(param_3 + 8),param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1072412e4; end: 1072413d7; -[SCMapLoggerEventSender mapViewFriendClusterWithActionmoji:actionType:actionmojiStickerId:ghostTargetUserGuid:actionmojiAutoAssigned:] */

void FUN_1072412e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5488;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010724330c(param_3);
  func_0x00010c206c40(puVar1,param_2,param_3);
  func_0x00010c161620(puVar1,param_2,param_4);
  func_0x00010c212220(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c2125e0(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c162060(puVar1,param_2,param_7);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


