/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ae40c0; end: 106ae4127; +[WebMetadata descriptor] */

void FUN_106ae40c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4d08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12be0,
                        &PTR____CFConstantStringClassReference_110e6f0b8,&PTR_DAT_11316f528,
                        &PTR_s_browser_11316f540,4,0x28,0x1c);
    puRam00000001136c4d08 = puVar1;
  }
  return;
}



/* Entry: 106ae4128; end: 106ae418f; +[DefaultClientHeader descriptor] */

void FUN_106ae4128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4d10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12c30,
                        &PTR____CFConstantStringClassReference_110e6f0d8,&PTR_DAT_11316f528,
                        &PTR_s_sessionId_11316f5c0,0x10,0x68,0x1c);
    puRam00000001136c4d10 = puVar1;
  }
  return;
}



/* Entry: 106ae4190; end: 106ae41f7; +[DefaultMeshLoggerHeader descriptor] */

void FUN_106ae4190(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4d18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12cd0,
                        &PTR____CFConstantStringClassReference_110e6f0f8,&PTR_DAT_11316f7c0,
                        &PTR_DAT_11316f7d8,1,0x10,0x1c);
    puRam00000001136c4d18 = puVar1;
  }
  return;
}



/* Entry: 106ae41f8; end: 106ae425f; +[InstaloggerClientHeader descriptor] */

void FUN_106ae41f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4d20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12d70,
                        &PTR____CFConstantStringClassReference_110e6f118,&PTR_DAT_11316f7f8,
                        &PTR_DAT_11316f810,6,0x28,0x1c);
    puRam00000001136c4d20 = puVar1;
  }
  return;
}



/* Entry: 106ae4260; end: 106ae428f;  */

bool FUN_106ae4260(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106ae4290; end: 106ae42f7; +[SCAPbDataLoggedEventList descriptor] */

void FUN_106ae4290(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4d78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12e10,
                        &PTR____CFConstantStringClassReference_110e6f278,
                        &PTR_s_snapchat_data_11316f8d8,&PTR_DAT_11316f910,2,0x18,0x1c);
    puRam00000001136c4d78 = puVar1;
  }
  return;
}



/* Entry: 106ae42f8; end: 106ae4383; +[SCAPbDataSequentialItem descriptor] */

undefined * FUN_106ae42f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4d80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12e60,
                        &PTR____CFConstantStringClassReference_110e6f298,
                        &PTR_s_snapchat_data_11316f8d8,&PTR_DAT_11316f950,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c4d80 = puVar1;
  }
  return puRam00000001136c4d80;
}



/* Entry: 106ae4384; end: 106ae43eb; +[SCAPbDataFrameEnd descriptor] */

void FUN_106ae4384(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4da0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12fa0,
                        &PTR____CFConstantStringClassReference_110e6f2f8,
                        &PTR_s_snapchat_data_11316f8d8,&PTR_DAT_11316f8f0,1,8,0x1c);
    puRam00000001136c4da0 = puVar1;
  }
  return;
}



/* Entry: 106ae43ec; end: 106ae4413; +[KSCrashInstReportField fieldWithIndex:] */

void FUN_106ae43ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c01d720(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ae4414; end: 106ae4483; -[KSCrashInstReportField initWithIndex:] */

long FUN_106ae4414(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  func_0x0001001aec1c();
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = param_3;
    puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,0x10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b8a0(param_1,param_2,puVar1);
    func_0x0001001f9120();
  }
  return param_1;
}



/* Entry: 106ae4484; end: 106ae44bb; -[KSCrashInstReportField field] */

undefined8 FUN_106ae4484(undefined8 param_1)

{
  func_0x00010bfac6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010c0d3c60();
  func_0x0001001b2854();
  return param_1;
}



/* Entry: 106ae44bc; end: 106ae454f; -[KSCrashInstReportField setKey:] */

void FUN_106ae44bc(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001001aeb4c();
  func_0x0001001b6640();
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19;
  _objc_release(uVar1);
  if (unaff_x19 == 0) {
    func_0x00010c1b6b60();
  }
  else {
    func_0x00010c25da60(PTR_PTR_1126d05b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001001aecb8();
    func_0x00010c1b6b60();
    func_0x0001001aecf0();
  }
  puVar2 = unaff_x20;
  func_0x00010c0865a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25f00();
  func_0x00010bfac680();
  *unaff_x20 = puVar2;
  func_0x0001001aecf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106ae4550; end: 106ae469f; -[KSCrashInstReportField setValue:] */

void FUN_106ae4550(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x0001001f4140();
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    func_0x00010c2202e0(param_1);
  }
  else {
    puVar1 = PTR_PTR_1126d05c0;
    func_0x00010bf92d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if (puVar1 == (undefined *)0x0) {
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      FUN_106aeea5c("ERROR",&UNK_10f3b1050,0x8d,&UNK_10f3b1093,
                    &PTR____CFConstantStringClassReference_110e6f318);
    }
    else {
      func_0x0001001b6640();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = param_3;
      _objc_release(uVar2);
      func_0x00010c25d980(PTR_PTR_1126d05b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2202e0(param_1);
      func_0x0001001f8008();
      lVar3 = param_1;
      func_0x00010c296e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf25f00();
      func_0x00010bfac680();
      *(long *)(param_1 + 8) = lVar3;
    }
    func_0x0001001f8008();
    func_0x0001001aecf0();
    func_0x0001001f9120();
  }
  func_0x0001001b2854();
  return;
}



/* Entry: 106ae46a0; end: 106ae46a7; -[KSCrashInstReportField index] */

undefined4 FUN_106ae46a0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106ae46a8; end: 106ae46af; -[KSCrashInstReportField key] */

undefined8 FUN_106ae46a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ae46b0; end: 106ae46b7; -[KSCrashInstReportField value] */

undefined8 FUN_106ae46b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ae46b8; end: 106ae46bf; -[KSCrashInstReportField fieldBacking] */

undefined8 FUN_106ae46b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ae46c0; end: 106ae46df; -[KSCrashInstReportField setFieldBacking:] */

void FUN_106ae46c0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001001aeb4c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae46e0; end: 106ae46e7; -[KSCrashInstReportField keyBacking] */

undefined8 FUN_106ae46e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ae46e8; end: 106ae4707; -[KSCrashInstReportField setKeyBacking:] */

void FUN_106ae46e8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001001aeb4c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae4708; end: 106ae470f; -[KSCrashInstReportField valueBacking] */

undefined8 FUN_106ae4708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ae4710; end: 106ae472f; -[KSCrashInstReportField setValueBacking:] */

void FUN_106ae4710(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001001aeb4c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae4730; end: 106ae4773; -[KSCrashInstReportField .cxx_destruct] */

void FUN_106ae4730(long param_1)

{
  func_0x0001002325a4(param_1 + 0x30);
  func_0x0001002325a4(param_1 + 0x28);
  func_0x0001002325a4(param_1 + 0x20);
  func_0x0001002325a4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ae4774; end: 106ae47cb; -[KSCrashInstallation init] */

undefined8 FUN_106ae4774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48;
  _objc_opt_class();
  func_0x00010c11f020(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e6f338);
  func_0x0001001b2854();
  return 0;
}



/* Entry: 106ae47cc; end: 106ae48bb; -[KSCrashInstallation reportFieldForProperty:] */

void FUN_106ae47cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *unaff_x20;
  
  func_0x0001001aeb4c();
  puVar1 = unaff_x20;
  func_0x00010bfac8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0001001f9118();
  puVar3 = PTR_PTR_1126d05d0;
  if (puVar1 == (undefined *)0x0) {
    func_0x000106ae4c58();
    func_0x00010bfac8a0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae4c58();
    func_0x00010c1cd360();
    func_0x000106ae4c58();
    puVar1 = unaff_x20;
    func_0x0001001b6648();
    *(int *)(puVar1 + 8) = (int)unaff_x20;
    puVar1 = puVar3;
    func_0x00010bfac680();
    puVar2 = puVar1;
    func_0x0001001b6648();
    puVar4 = puVar3;
    func_0x00010bfec9e0();
    *(undefined **)(puVar2 + (long)(int)puVar4 * 8 + 0x10) = puVar1;
    func_0x00010bfac8e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    func_0x0001001f9120();
    puVar1 = puVar3;
  }
  func_0x0001001b2854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ae48bc; end: 106ae48ff; -[KSCrashInstallation reportFieldForProperty:setKey:] */

void FUN_106ae48bc(void)

{
  undefined8 unaff_x21;
  
  func_0x000106ae4c44();
  func_0x00010c132e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40();
  func_0x0001001b2854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x21);
  return;
}



/* Entry: 106ae4900; end: 106ae4943; -[KSCrashInstallation reportFieldForProperty:setValue:] */

void FUN_106ae4900(void)

{
  undefined8 unaff_x21;
  
  func_0x000106ae4c44();
  func_0x00010c132e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  func_0x0001001b2854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x21);
  return;
}



/* Entry: 106ae4944; end: 106ae49b7; -[KSCrashInstallation makeKeyPath:] */

void FUN_106ae4944(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  func_0x0001001f4140();
  func_0x0001001f4c5c();
  if ((param_1 == 0) ||
     ((func_0x0001001f4c5c(), param_1 != 0 &&
      (ppuVar1 = param_3, func_0x00010bf35920(param_3,param_2,0), (int)ppuVar1 == 0x2f)))) {
    func_0x0001001b6640();
    ppuVar1 = param_3;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e6f3d8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e6f3d8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001001b2854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106ae49b8; end: 106ae4adf; -[KSCrashInstallation makeKeyPaths:] */

undefined8 * FUN_106ae49b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 unaff_x20;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  func_0x0001001f429c();
  func_0x0001001f4140();
  puVar5 = param_3;
  func_0x00010bf529e0();
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0001001b6640();
  }
  else {
    puVar5 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar2,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x0001001b6640();
    func_0x000106ae4c30();
    lVar1 = lRam0000000000000000;
    while (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = unaff_x20;
        func_0x00010c0b72a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010befa120(puVar2,param_2,uVar3);
        func_0x0001001f8008();
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        in_ZR = puVar6 == puVar5;
      } while (puVar6 < puVar5);
      func_0x000106ae4c30();
      puVar5 = puVar4;
    }
    puVar5 = (undefined8 *)0x0;
    func_0x0001001b2854();
    param_3 = puVar2;
  }
  func_0x0001001b2854();
  func_0x0001001f4c64(extraout_x8);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain();
  func_0x0001001b6454();
  func_0x0001001b645c();
  puVar5 = (undefined8 *)*puVar5;
  func_0x0001001b6514();
  func_0x0001001b2854();
  return puVar5;
}



/* Entry: 106ae4ae0; end: 106ae4b1f; -[KSCrashInstallation onCrash] */

undefined8 FUN_106ae4ae0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  func_0x0001001b6454();
  func_0x0001001b645c();
  uVar1 = *param_1;
  func_0x0001001b6514();
  func_0x0001001b2854();
  return uVar1;
}



/* Entry: 106ae4b20; end: 106ae4b27; -[KSCrashInstallation deleteBehavior] */

undefined4 FUN_106ae4b20(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106ae4b28; end: 106ae4bc7;  */

void FUN_106ae4b28(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (pcRam00000001136c4db0 != (code *)0x0) {
    (*pcRam00000001136c4db0)(param_1);
  }
  puVar3 = puRam00000001136c4da8;
  for (lVar4 = 0; lVar4 < *(int *)(puVar3 + 1); lVar4 = lVar4 + 1) {
    lVar1 = *(long *)puVar3[lVar4 + 2];
    if ((lVar1 != 0) && (lVar2 = ((long *)puVar3[lVar4 + 2])[1], lVar2 != 0)) {
      (**(code **)(param_1 + 0x68))(param_1,lVar1,lVar2,1);
      puVar3 = puRam00000001136c4da8;
    }
  }
  if ((code *)*puVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000106ae4bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(param_1);
    return;
  }
  return;
}



/* Entry: 106ae4bc8; end: 106ae4c03; -[KSCrashInstallation addPreFilter:] */

void FUN_106ae4bc8(void)

{
  undefined8 unaff_x20;
  
  func_0x0001001aeb4c();
  func_0x00010c10a720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef84a0();
  func_0x0001001b2854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 106ae4c04; end: 106ae4c0b; -[KSCrashInstallation sink] */

undefined8 FUN_106ae4c04(void)

{
  return 0;
}



/* Entry: 106ae4c0c; end: 106ae4c13; -[KSCrashInstallation nextFieldIndex] */

undefined4 FUN_106ae4c0c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106ae4c14; end: 106ae4c1b; -[KSCrashInstallation setNextFieldIndex:] */

void FUN_106ae4c14(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106ae4c1c; end: 106ae4c7b; -[KSCrashInstallation fields] */

undefined8 FUN_106ae4c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ae4c7c; end: 106ae4cf3; -[KSCrashInstallationSnapAirAppExtension install] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ae4c7c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126d05a8;
  _objc_alloc();
  func_0x00010bff6e80();
  lVar3 = (long)_DAT_112757d2c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puStack_28 = PTR_PTR_1126f4ca8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_installWithHandler__1125f78b0,
                      *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106ae4cf4; end: 106ae4dd7; -[KSCrashInstallationSnapAirAppExtension reportWithIntID:appName:] */

void FUN_106ae4cf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  if (-1 < param_3) {
    func_0x00010be221e0();
    FUN_106aea628(param_3,param_1,param_4);
    puVar2 = (undefined *)0x0;
    if (param_3 == 0) goto LAB_106ae4dc4;
    lVar1 = param_3;
    FUN_106aea064();
    _free(param_3);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar1 != 0) {
      _strlen(lVar1);
      func_0x00010bf64a40();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = PTR_PTR_1126d05c0;
        func_0x00010bf66be0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined *)0x0) {
          _objc_retain(puVar2);
        }
        func_0x00010020f0ac();
      }
      func_0x00010020f0a4();
      goto LAB_106ae4dc4;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_106ae4dc4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ae4dd8; end: 106ae4de7; -[KSCrashInstallationSnapAirAppExtension deleteAllReports] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ae4dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757d2c),PTR_s_deleteAllReports_1125b8708);
  return;
}



/* Entry: 106ae4de8; end: 106ae4e27; -[KSCrashInstallationSnapAirAppExtension setUserInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ae4de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c21e7c0(*(undefined8 *)(param_1 + _DAT_112757d2c),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ae4e28; end: 106ae4f17; -[KSCrash userInfo] */

void FUN_106ae4e28(long param_1)

{
  undefined8 uStack_48;
  
  if (lRam000000011381b448 == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001001f3e00();
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x0001001b8c68();
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uStack_48);
      if (uStack_48 == 0) {
        _objc_retain(param_1);
      }
      else {
        func_0x000106ae5c20();
        FUN_106aeea5c();
        param_1 = 0;
      }
      func_0x00010016a544();
      func_0x00010017d7d8();
    }
    func_0x00010016a534();
    func_0x00010016a53c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ae4f18; end: 106ae4fdb; -[KSCrash setDoNotIntrospectClasses:] */

void FUN_106ae4f18(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x00010017d960();
  func_0x00010018ac98();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(ulong *)(unaff_x20 + 0x40) = unaff_x19;
  _objc_release(uVar1);
  uVar2 = unaff_x19;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
    FUN_106ae92a0();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010017dc74();
    func_0x00010c0d3c60();
    for (uVar5 = 0; uVar5 < uVar2; uVar5 = (ulong)((int)uVar5 + 1)) {
      uVar4 = unaff_x19;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x000100c75f1c();
      *(ulong *)(puVar3 + uVar5 * 8) = uVar4;
      func_0x00010017d7d0();
    }
    FUN_106ae92a0(puVar3,uVar2);
    func_0x00010017d7d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106ae4fdc; end: 106ae556b; -[KSCrash systemInfo] */

void FUN_106ae4fdc(void)

{
  undefined *puVar1;
  undefined1 auStack_228 [256];
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_50;
  
  _bzero(auStack_228,0x1e8);
  (*(code *)PTR_FUN_113170268)(auStack_228);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (lStack_128 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_120 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_118 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_110 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_108 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_100 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ae5c14();
  func_0x00010016a534();
  if (lStack_f0 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_e8 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_e0 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_d8 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_d0 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_c8 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_c0 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_b8 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_b0 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_a8 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ae5c14();
  func_0x00010016a534();
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ae5c14();
  func_0x00010016a534();
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ae5c14();
  func_0x00010016a534();
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ae5c14();
  func_0x00010016a534();
  if (lStack_90 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  if (lStack_88 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ae5c14();
  func_0x00010016a534();
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ae5c14();
  func_0x00010016a534();
  if (lStack_78 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ae5c14();
  func_0x00010016a534();
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ae5c14();
  func_0x00010016a534();
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ae5c14();
  func_0x00010016a534();
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ae5c14();
  func_0x00010016a534();
  if (lStack_50 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ae5c14();
    func_0x00010016a534();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ae556c; end: 106ae556f; -[KSCrash deleteAllReports] */

void FUN_106ae556c(void)

{
  func_0x0001001c7e08();
  FUN_106aec720(uRam000000011381b460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)();
  return;
}



/* Entry: 106ae5570; end: 106ae5587; -[KSCrash deleteReportWithID:] */

long * FUN_106ae5570(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  uint uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long alStack_43c [62];
  undefined8 uStack_248;
  
  func_0x00010c0b4ca0();
  func_0x0001001c8ec4();
  FUN_106aea5a8();
  func_0x000106aea7d8();
  func_0x0001001c97d0(extraout_x8);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x0001001c8ec4();
  plVar1 = alStack_43c;
  uStack_248 = extraout_x8_00;
  FUN_106aea6b0();
  func_0x000106aea7d8();
  func_0x0001001c97d0(uStack_248);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  uVar2 = (uint)(*plVar1 < *param_3);
  if (*param_3 < *plVar1) {
    uVar2 = 0xffffffff;
  }
  return (long *)(ulong)uVar2;
}



/* Entry: 106ae5588; end: 106ae571f; -[KSCrash reportUserException:reason:language:lineOfCode:stackTrace:logAllThreads:terminateProgram:] */

void FUN_106ae5588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined1 param_9
                  )

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  
  _objc_retain(param_7);
  _objc_retainAutorelease(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000100c75f1c(param_3);
  _objc_retainAutorelease(param_4);
  func_0x000100c75f1c();
  func_0x00010017d7d0();
  uVar1 = param_5;
  _objc_retainAutorelease(param_5);
  func_0x000100c75f1c();
  _objc_release(param_5);
  lVar2 = param_6;
  _objc_retainAutorelease(param_6);
  func_0x000100c75f1c();
  _objc_release();
  if (param_7 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000106ae5c44();
    func_0x00010bf92d20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lStack_68;
    _objc_retain(lStack_68);
    if ((param_6 == 0) || (lStack_68 != 0)) {
      func_0x000106ae5c20();
      FUN_106aeea5c();
    }
    func_0x0001001f3e00();
    _objc_alloc();
    func_0x00010c008340();
    _objc_retainAutorelease();
    func_0x000100c75f1c();
    func_0x00010016a534();
    _objc_release(param_6);
    _objc_release(lStack_68);
  }
  FUN_106ae5d64(param_3,param_4,uVar1,lVar2,lVar3,param_8,param_9);
  func_0x00010016a53c();
  return;
}



/* Entry: 106ae5720; end: 106ae5723; -[KSCrash enableSwapOfCxaThrow] */

void FUN_106ae5720(void)

{
  if ((bRam000000011381b4f9 & 1) == 0) {
    FUN_106aebc58(0x106aeabf4);
    bRam000000011381b4f9 = 1;
  }
  return;
}



/* Entry: 106ae5724; end: 106ae572f; -[KSCrash activeDurationSinceLastCrash] */

undefined8 FUN_106ae5724(void)

{
  return uRam000000011381b4a0;
}



/* Entry: 106ae5730; end: 106ae573b; -[KSCrash backgroundDurationSinceLastCrash] */

undefined8 FUN_106ae5730(void)

{
  return uRam000000011381b4a8;
}



/* Entry: 106ae573c; end: 106ae5747; -[KSCrash launchesSinceLastCrash] */

undefined4 FUN_106ae573c(void)

{
  return uRam000000011381b4b0;
}



/* Entry: 106ae5748; end: 106ae5753; -[KSCrash sessionsSinceLastCrash] */

undefined4 FUN_106ae5748(void)

{
  return uRam000000011381b4b4;
}



/* Entry: 106ae5754; end: 106ae575f; -[KSCrash activeDurationSinceLaunch] */

undefined8 FUN_106ae5754(void)

{
  return uRam000000011381b4b8;
}



/* Entry: 106ae5760; end: 106ae576b; -[KSCrash backgroundDurationSinceLaunch] */

undefined8 FUN_106ae5760(void)

{
  return uRam000000011381b4c0;
}



/* Entry: 106ae576c; end: 106ae5777; -[KSCrash sessionsSinceLaunch] */

undefined4 FUN_106ae576c(void)

{
  return uRam000000011381b4c8;
}



/* Entry: 106ae5778; end: 106ae5783; -[KSCrash sessionId] */

undefined8 FUN_106ae5778(void)

{
  return uRam000000011381b4e8;
}



/* Entry: 106ae5784; end: 106ae579b; -[KSCrash reportCount] */

undefined8 FUN_106ae5784(undefined8 param_1)

{
  func_0x0001001c7e08();
  func_0x0001001c8f90();
  func_0x000107c61268();
  return param_1;
}



/* Entry: 106ae579c; end: 106ae57eb; -[KSCrash loadCrashReportJSONWithID:] */

void FUN_106ae579c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  FUN_106ae5d90(param_3,0);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (param_3 != 0) {
    _strlen();
    func_0x00010bf64a40(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ae57ec; end: 106ae5903; -[KSCrash doctorReport:] */

void FUN_106ae57ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010017d7e0();
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6f8b8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d05f0;
    func_0x00010bf87880(PTR_PTR_1126d05f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e6f8d8);
    func_0x00010016a544();
    func_0x00010017d7d8();
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6f8f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010016a534();
  func_0x00010016a544();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d05f0;
    func_0x00010bf87880(PTR_PTR_1126d05f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e6f8d8);
    func_0x00010016a544();
    func_0x00010016a534();
  }
  func_0x00010017d7d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ae5904; end: 106ae59d3; -[KSCrash reportIDs] */

void FUN_106ae5904(ulong param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  uint uVar8;
  ulong uVar9;
  long alStack_70 [4];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x0001001f80b8();
  (*(code *)PTR____chkstk_darwin_11034bd40)((param_1 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
  lVar1 = -extraout_x8;
  puVar7 = auStack_50 + lVar1;
  puVar2 = puVar7;
  func_0x0001001f862c();
  uVar8 = (uint)puVar2;
  puVar6 = (undefined *)(long)(int)uVar8;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  for (uVar9 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
      PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar4, uVar9 != 0; uVar9 = uVar9 - 1) {
    puVar7 = puVar7 + 8;
    func_0x00010c0df7c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010befa120(puVar3);
    func_0x00010017d7d8();
    puVar6 = puVar4;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  func_0x00010018ac84(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *(undefined **)((long)alStack_70 + lVar1) = puVar3;
    *(undefined1 **)((long)alStack_70 + lVar1 + 8) = puVar7;
    *(undefined1 **)((long)alStack_70 + lVar1 + 0x10) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_70 + lVar1 + 0x18) = FUN_106ae59d4;
    func_0x00010c0b4ca0(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010c134030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_reportWithIntID__11262aa28,puVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ae59d4; end: 106ae59ff; -[KSCrash reportWithID:] */

void FUN_106ae59d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0b4ca0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c134030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reportWithIntID__11262aa28,param_3);
  return;
}



/* Entry: 106ae5a00; end: 106ae5adf; -[KSCrash reportWithIntID:] */

void FUN_106ae5a00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x00010c09b260();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000106ae5c44();
    func_0x00010bf66be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uStack_48);
    if (uStack_48 != 0) {
      func_0x000106ae5c20();
      FUN_106aeea5c();
    }
    if (lVar1 == 0) {
      func_0x000106ae5c20();
      FUN_106aeea5c();
    }
    else {
      func_0x00010bf878a0(param_1,param_2,lVar1);
      func_0x00010018ac7c();
    }
    func_0x00010016a534();
    func_0x00010017d7d8();
  }
  func_0x00010016a53c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ae5ae0; end: 106ae5aef; -[KSCrash setAddConsoleLogToReport:] */

void FUN_106ae5ae0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  uRam000000011381b3ee = param_3;
  return;
}



/* Entry: 106ae5af0; end: 106ae5aff; -[KSCrash setPrintPreviousLog:] */

void FUN_106ae5af0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  uRam000000011381b3ed = param_3;
  return;
}



/* Entry: 106ae5b00; end: 106ae5b4b; -[KSCrash nullTerminated:] */

void FUN_106ae5b00(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b00(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06a40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ae5b4c; end: 106ae5b53; -[KSCrash applicationWillResignActive] */

/* WARNING: Removing unreachable block (ram,0x000100c7a53c) */

void FUN_106ae5b4c(double param_1)

{
  double dVar1;
  
  dVar1 = dRam000000011381b4d0;
  if (cRam000000011381b4f8 == '\x01') {
    uRam000000011381b4d8 = 0;
    func_0x000100c7a588();
    dRam000000011381b4b8 = dRam000000011381b4b8 + (param_1 - dVar1);
    dRam000000011381b4a0 = (param_1 - dVar1) + dRam000000011381b4a0;
  }
  return;
}



/* Entry: 106ae5b54; end: 106ae5b5b; -[KSCrash applicationDidEnterBackground] */

/* WARNING: Removing unreachable block (ram,0x000106aea980) */

undefined1  [16] FUN_106ae5b54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar9;
  undefined1 auVar10 [16];
  int iStack_11c;
  undefined *puStack_118;
  int *piStack_110;
  undefined1 auStack_108 [204];
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  uVar4 = uRam000000011381b4f0;
  uVar2 = cRam000000011381b4f8 == '\x01';
  if (!(bool)uVar2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  uRam000000011381b4d9 = 0;
  func_0x000100c7a588();
  uRam000000011381b4d0 = param_1;
  func_0x00010017dcb0();
  iStack_11c = (int)uVar4;
  pcVar8 = (char *)0x602;
  uStack_38 = extraout_x8;
  func_0x000107c611c4();
  if (iStack_11c < 0) {
    func_0x000107c60e5c();
    func_0x000107c613cc();
    FUN_106aeab94();
    func_0x000106aee914(extraout_x8_01);
    uVar9 = 0;
    goto code_r0x0001001de2d4;
  }
  func_0x000107c60ee4(auStack_108,0xd0);
  piStack_110 = &iStack_11c;
  puStack_118 = &UNK_1001df74c;
  uStack_3c = 1;
  ppuVar5 = &puStack_118;
  pcVar8 = (char *)0x0;
  func_0x0001001df65c(ppuVar5,0);
  iVar3 = (int)ppuVar5;
  if (iVar3 == 0) {
    pcVar8 = "version";
    ppuVar5 = &puStack_118;
    func_0x0001001e02d0(ppuVar5,"version",1);
    iVar3 = (int)ppuVar5;
    if (iVar3 == 0) {
      pcVar8 = "crashedLastLaunch";
      ppuVar5 = &puStack_118;
      func_0x0001001e0a40(ppuVar5,&UNK_10f3b2433,uRam000000011381b4cd);
      iVar3 = (int)ppuVar5;
      if (iVar3 == 0) {
        pcVar8 = "activeDurationSinceLastCrash";
        ppuVar5 = &puStack_118;
        func_0x0001001e1004(uRam000000011381b4a0,ppuVar5,&UNK_10f3b2445);
        iVar3 = (int)ppuVar5;
        if (iVar3 == 0) {
          pcVar8 = "backgroundDurationSinceLastCrash";
          ppuVar5 = &puStack_118;
          func_0x0001001e1004(uRam000000011381b4a8,ppuVar5,&UNK_10f3b2462);
          iVar3 = (int)ppuVar5;
          if (iVar3 == 0) {
            pcVar8 = "launchesSinceLastCrash";
            ppuVar5 = &puStack_118;
            func_0x0001001e02d0(ppuVar5,&UNK_10f3b2483,(long)iRam000000011381b4b0);
            iVar3 = (int)ppuVar5;
            if (iVar3 == 0) {
              pcVar8 = "sessionsSinceLastCrash";
              ppuVar5 = &puStack_118;
              func_0x0001001e02d0(ppuVar5,&UNK_10f3b249a,(long)iRam000000011381b4b4);
              iVar3 = (int)ppuVar5;
              if (iVar3 == 0) {
                if (lRam000000011381b4e0 != 0) {
                  lVar6 = lRam000000011381b4e0;
                  func_0x000107c613d0();
                  iVar3 = (int)lVar6;
                  pcVar8 = "reportIDLastLaunch";
                  func_0x0001001e3048();
                  if (iVar3 != 0) goto code_r0x0001001de258;
                }
                if (PTR_DAT_113170118 != (undefined *)0x0) {
                  puVar7 = PTR_DAT_113170118;
                  func_0x000107c613d0();
                  iVar3 = (int)puVar7;
                  pcVar8 = "sessionIdLastLaunch";
                  func_0x0001001e3048();
                  if (iVar3 != 0) goto code_r0x0001001de258;
                }
                iVar3 = (int)&puStack_118;
                func_0x0001001e30d4();
              }
            }
          }
        }
      }
    }
  }
code_r0x0001001de258:
  func_0x000107c60f10(iStack_11c);
  uVar2 = iVar3 == 0;
  uVar9 = (ulong)(byte)uVar2;
  if (iVar3 != 0) {
    FUN_106aecfa4();
    FUN_106aeab94();
    func_0x000106aee914(extraout_x8_00);
  }
code_r0x0001001de2d4:
  func_0x00010018ac68(uStack_38);
  if (!(bool)uVar2) {
    func_0x000107c60e78();
    return ZEXT816(0x110693948);
  }
  auVar10._8_8_ = pcVar8;
  auVar10._0_8_ = uVar9;
  return auVar10;
}



/* Entry: 106ae5b5c; end: 106ae5b63; -[KSCrash applicationWillEnterForeground] */

/* WARNING: Removing unreachable block (ram,0x0001001de148) */
/* WARNING: Removing unreachable block (ram,0x0001001de2a0) */
/* WARNING: Removing unreachable block (ram,0x0001001de17c) */
/* WARNING: Removing unreachable block (ram,0x0001001de1b4) */
/* WARNING: Removing unreachable block (ram,0x0001001de1cc) */
/* WARNING: Removing unreachable block (ram,0x0001001de1e8) */
/* WARNING: Removing unreachable block (ram,0x0001001de204) */
/* WARNING: Removing unreachable block (ram,0x0001001de220) */
/* WARNING: Removing unreachable block (ram,0x0001001de23c) */
/* WARNING: Removing unreachable block (ram,0x0001001de2f8) */
/* WARNING: Removing unreachable block (ram,0x0001001de304) */
/* WARNING: Removing unreachable block (ram,0x0001001de320) */
/* WARNING: Removing unreachable block (ram,0x0001001de32c) */
/* WARNING: Removing unreachable block (ram,0x0001001de348) */
/* WARNING: Removing unreachable block (ram,0x0001001de258) */
/* WARNING: Removing unreachable block (ram,0x0001001de270) */
/* WARNING: Removing unreachable block (ram,0x0001001de2d4) */
/* WARNING: Removing unreachable block (ram,0x0001001de2e0) */
/* WARNING: Removing unreachable block (ram,0x0001001de354) */

undefined1  [16] FUN_106ae5b5c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 1;
  if (cRam000000011381b4f8 == '\x01') {
    uRam000000011381b4d9 = 1;
    func_0x000100c7a588();
    dRam000000011381b4c0 = dRam000000011381b4c0 + (param_1 - dRam000000011381b4d0);
    dRam000000011381b4a8 = (param_1 - dRam000000011381b4d0) + dRam000000011381b4a8;
    iRam000000011381b4b4 = iRam000000011381b4b4 + 1;
    iRam000000011381b4c8 = iRam000000011381b4c8 + 1;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 106ae5b64; end: 106ae5b67; -[KSCrash applicationWillTerminate] */

undefined1  [16] FUN_106ae5b64(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iStack_11c;
  undefined *puStack_118;
  int *piStack_110;
  undefined1 auStack_108 [204];
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  uVar4 = uRam000000011381b4f0;
  dVar1 = dRam000000011381b4d0;
  uVar2 = cRam000000011381b4f8 == '\x01';
  if (!(bool)uVar2) {
    auVar11._8_8_ = param_3;
    auVar11._0_8_ = param_2;
    return auVar11;
  }
  func_0x000100c7a588();
  dRam000000011381b4a8 = dRam000000011381b4a8 + (param_1 - dVar1);
  func_0x00010017dcb0();
  iStack_11c = (int)uVar4;
  pcVar8 = (char *)0x602;
  uStack_38 = extraout_x8;
  func_0x000107c611c4();
  if (iStack_11c < 0) {
    func_0x000107c60e5c();
    func_0x000107c613cc();
    FUN_106aeab94();
    func_0x000106aee914(extraout_x8_01);
    uVar9 = 0;
    goto code_r0x0001001de2d4;
  }
  func_0x000107c60ee4(auStack_108,0xd0);
  piStack_110 = &iStack_11c;
  puStack_118 = &UNK_1001df74c;
  uStack_3c = 1;
  ppuVar5 = &puStack_118;
  pcVar8 = (char *)0x0;
  func_0x0001001df65c(ppuVar5,0);
  iVar3 = (int)ppuVar5;
  if (iVar3 == 0) {
    pcVar8 = "version";
    ppuVar5 = &puStack_118;
    func_0x0001001e02d0(ppuVar5,"version",1);
    iVar3 = (int)ppuVar5;
    if (iVar3 == 0) {
      pcVar8 = "crashedLastLaunch";
      ppuVar5 = &puStack_118;
      func_0x0001001e0a40(ppuVar5,&UNK_10f3b2433,uRam000000011381b4cd);
      iVar3 = (int)ppuVar5;
      if (iVar3 == 0) {
        pcVar8 = "activeDurationSinceLastCrash";
        ppuVar5 = &puStack_118;
        func_0x0001001e1004(uRam000000011381b4a0,ppuVar5,&UNK_10f3b2445);
        iVar3 = (int)ppuVar5;
        if (iVar3 == 0) {
          pcVar8 = "backgroundDurationSinceLastCrash";
          ppuVar5 = &puStack_118;
          func_0x0001001e1004(dRam000000011381b4a8,ppuVar5,&UNK_10f3b2462);
          iVar3 = (int)ppuVar5;
          if (iVar3 == 0) {
            pcVar8 = "launchesSinceLastCrash";
            ppuVar5 = &puStack_118;
            func_0x0001001e02d0(ppuVar5,&UNK_10f3b2483,(long)iRam000000011381b4b0);
            iVar3 = (int)ppuVar5;
            if (iVar3 == 0) {
              pcVar8 = "sessionsSinceLastCrash";
              ppuVar5 = &puStack_118;
              func_0x0001001e02d0(ppuVar5,&UNK_10f3b249a,(long)iRam000000011381b4b4);
              iVar3 = (int)ppuVar5;
              if (iVar3 == 0) {
                if (lRam000000011381b4e0 != 0) {
                  lVar6 = lRam000000011381b4e0;
                  func_0x000107c613d0();
                  iVar3 = (int)lVar6;
                  pcVar8 = "reportIDLastLaunch";
                  func_0x0001001e3048();
                  if (iVar3 != 0) goto code_r0x0001001de258;
                }
                if (PTR_DAT_113170118 != (undefined *)0x0) {
                  puVar7 = PTR_DAT_113170118;
                  func_0x000107c613d0();
                  iVar3 = (int)puVar7;
                  pcVar8 = "sessionIdLastLaunch";
                  func_0x0001001e3048();
                  if (iVar3 != 0) goto code_r0x0001001de258;
                }
                iVar3 = (int)&puStack_118;
                func_0x0001001e30d4();
              }
            }
          }
        }
      }
    }
  }
code_r0x0001001de258:
  func_0x000107c60f10(iStack_11c);
  uVar2 = iVar3 == 0;
  uVar9 = (ulong)(byte)uVar2;
  if (iVar3 != 0) {
    FUN_106aecfa4();
    FUN_106aeab94();
    func_0x000106aee914(extraout_x8_00);
  }
code_r0x0001001de2d4:
  func_0x00010018ac68(uStack_38);
  if ((bool)uVar2) {
    auVar10._8_8_ = pcVar8;
    auVar10._0_8_ = uVar9;
    return auVar10;
  }
  func_0x000107c60e78();
  return ZEXT816(0x110693948);
}



/* Entry: 106ae5b68; end: 106ae5b6f; -[KSCrash sink] */

undefined8 FUN_106ae5b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ae5b70; end: 106ae5b77; -[KSCrash searchQueueNames] */

undefined1 FUN_106ae5b70(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106ae5b78; end: 106ae5b7f; -[KSCrash introspectMemory] */

undefined1 FUN_106ae5b78(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106ae5b80; end: 106ae5b87; -[KSCrash doNotIntrospectClasses] */

undefined8 FUN_106ae5b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106ae5b88; end: 106ae5b8f; -[KSCrash demangleLanguages] */

undefined4 FUN_106ae5b88(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 106ae5b90; end: 106ae5b97; -[KSCrash setDemangleLanguages:] */

void FUN_106ae5b90(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106ae5b98; end: 106ae5b9f; -[KSCrash addConsoleLogToReport] */

undefined1 FUN_106ae5b98(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106ae5ba0; end: 106ae5ba7; -[KSCrash printPreviousLog] */

undefined1 FUN_106ae5ba0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106ae5ba8; end: 106ae5baf; -[KSCrash maxReportCount] */

undefined4 FUN_106ae5ba8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 106ae5bb0; end: 106ae5bb7; -[KSCrash uncaughtExceptionHandler] */

undefined8 FUN_106ae5bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ae5bb8; end: 106ae5bbf; -[KSCrash setUncaughtExceptionHandler:] */

void FUN_106ae5bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 106ae5bc0; end: 106ae5bc7; -[KSCrash currentSnapshotUserReportedExceptionHandler] */

undefined8 FUN_106ae5bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106ae5bc8; end: 106ae5bcf; -[KSCrash setCurrentSnapshotUserReportedExceptionHandler:] */

void FUN_106ae5bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106ae5bd0; end: 106ae5bd7; -[KSCrash catchZombies] */

undefined1 FUN_106ae5bd0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106ae5bd8; end: 106ae5c13; -[KSCrash .cxx_destruct] */

void FUN_106ae5bd8(long param_1)

{
  func_0x000106ae5c5c(param_1 + 0x40);
  func_0x000106ae5c5c(param_1 + 0x38);
  func_0x000106ae5c5c(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 106ae5c14; end: 106ae5c77;  */

void FUN_106ae5c14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106ae5c78; end: 106ae5d63;  */

/* WARNING: Removing unreachable block (ram,0x0001001d2430) */
/* WARNING: Removing unreachable block (ram,0x0001001d2400) */
/* WARNING: Removing unreachable block (ram,0x0001001d2448) */

undefined1 * FUN_106ae5c78(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *unaff_x19;
  undefined4 *puVar15;
  undefined1 auStack_5d0 [112];
  code *pcStack_560;
  undefined8 uStack_550;
  code **ppcStack_548;
  undefined1 auStack_540 [24];
  code *pcStack_528;
  undefined1 *puStack_520;
  undefined8 uStack_490;
  ulong uStack_488;
  undefined1 auStack_45c [16];
  undefined1 uStack_44c;
  undefined8 auStack_448 [61];
  undefined1 auStack_22c [484];
  undefined8 uStack_48;
  
  lVar8 = param_1;
  func_0x0001001b7840();
  if ((*(byte *)(lVar8 + 0x10) & 1) == 0) {
    FUN_106aeaa44();
  }
  uVar13 = 0x11381b1f9;
  if (cRam000000011381b3ee == '\0') {
    uVar13 = 0;
  }
  *(undefined8 *)(param_1 + 0x1e0) = uVar13;
  uVar3 = *(char *)(param_1 + 0x13) == '\x01';
  if ((bool)uVar3) {
    puVar12 = (undefined *)0x1136c4de0;
    uVar13 = uRam00000001136c4dd8;
    func_0x0001001e31ec();
    if ((bool)uVar3) {
      func_0x000106ae9e74(param_1);
      lVar8 = 0x1136c4ff0;
      uStack_48 = extraout_x8;
      _strncpy();
      _strlen();
      *(undefined4 *)(lVar8 + 0x1136c4feb) = 0x646c6f2e;
      *(undefined1 *)(lVar8 + 0x1136c4fef) = 0;
      puVar9 = puVar12;
      _rename(puVar12,0x1136c4ff0);
      if ((int)puVar9 < 0) {
        ___error();
        func_0x000106ae9fbc();
        func_0x000106ae9f10();
        func_0x000106aee914(extraout_x8_00);
      }
      puVar6 = auStack_540;
      puVar11 = auStack_448;
      FUN_106aeca50(puVar6,puVar12,puVar11,0x400);
      if ((int)puVar6 != 0) {
        func_0x000106ae5ea4();
        func_0x000106aea050();
        func_0x000106aea03c();
        func_0x000106aea028();
        func_0x000106aea014();
        func_0x000106aea000();
        func_0x000106ae9fec();
        func_0x000106ae9fd8();
        func_0x000106ae9fc4();
        ppcStack_548 = &pcStack_528;
        uStack_550 = 0x106ae97d4;
        pcStack_560 = extraout_x8_01;
        func_0x000106ae9f70();
        pcStack_528 = FUN_106ae8080;
        uStack_44c = 1;
        puStack_520 = auStack_540;
        func_0x0001001df65c(&pcStack_528,"report");
        iVar4 = 0x136c4ff0;
        FUN_106aed1ac(&pcStack_528,&DAT_10f3b1564,0x1136c4ff0,1);
        func_0x000106ae9f3c();
        _remove();
        if (iVar4 < 0) {
          ___error();
          func_0x000106ae9fbc();
          func_0x000106ae9f10();
          func_0x000106aee914(extraout_x8_02);
        }
        FUN_106ae80b0(auStack_5d0,&UNK_10f3b1d33,*unaff_x19,unaff_x19[0x34],uVar13);
        func_0x000106ae9f3c();
        (*pcStack_560)(auStack_5d0,&DAT_10f3b1554);
        func_0x000106ae818c(auStack_5d0,unaff_x19);
        func_0x000106ae9f3c();
        puVar15 = (undefined4 *)unaff_x19[3];
        puVar10 = puVar15;
        FUN_106aef248(puVar15,*puVar15);
        puVar12 = &DAT_10f3b18fb;
        FUN_106ae857c(auStack_5d0,&DAT_10f3b18fb,unaff_x19,puVar15,puVar10,0,1);
        func_0x000106ae9f3c();
        func_0x000106ae9fb0();
        func_0x000106ae9fb0();
        func_0x0001001e30d4(ppcStack_548);
        puVar6 = auStack_540;
        FUN_106aecacc(puVar6);
        do {
          iVar4 = iRam000000011381b400 + -1;
          uVar3 = iVar4 == 0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x11381b400,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            iRam000000011381b400 = iVar4;
          }
        } while (cVar1 != '\0');
        puVar11 = unaff_x19;
        if (iVar4 < 0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0x11381b400,0x10);
            if (bVar2) {
              cVar1 = ExclusiveMonitorsStatus();
              iRam000000011381b400 = iRam000000011381b400 + 1;
            }
          } while (cVar1 != '\0');
        }
      }
      func_0x000106ae9e2c(uStack_48);
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        FUN_106aecb4c(puVar11,puVar6,puVar12);
        uVar14 = 0;
        if ((int)puVar11 == 0) {
          uVar14 = 3;
        }
        return (undefined1 *)(ulong)uVar14;
      }
      return puVar6;
    }
  }
  else {
    puVar6 = auStack_22c;
    FUN_106aea568();
    func_0x000106ae5e68();
    func_0x000106ae5e84();
    func_0x0001001e31ec();
    if ((bool)uVar3) {
      return puVar6;
    }
  }
  uVar3 = 0;
  ___stack_chk_fail();
  func_0x0001001b7840();
  puVar6 = auStack_45c;
  FUN_106aea568(puVar6);
  func_0x000106ae5e68();
  func_0x000106ae5e84();
  func_0x0001001e31ec();
  if ((bool)uVar3) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_106aeb860();
  if (cRam000000011381b3ee == '\x01') {
    puVar5 = (uint *)0x11381b920;
    uStack_490 = 0x1a4;
    func_0x000107c611c4(0x11381b920,0x601);
    iVar4 = (int)puVar5;
    iRam0000000113170288 = iVar4;
    if (iVar4 < 0) {
      func_0x000107c60e5c();
      uVar7 = (ulong)*puVar5;
      func_0x000107c613cc();
      uStack_490 = 0x11381b920;
      uStack_488 = uVar7;
      FUN_106aee7e4(&UNK_10f3b3306);
      puVar6 = (undefined1 *)0x0;
    }
    else {
      if (2 < iRam000000011317028c) {
        func_0x000107c60f10();
      }
      puVar6 = (undefined1 *)0x1;
      iRam000000011317028c = iVar4;
    }
    return puVar6;
  }
  return puVar6;
}



/* Entry: 106ae5d64; end: 106ae5d8f;  */

/* WARNING: Removing unreachable block (ram,0x0001001d2430) */
/* WARNING: Removing unreachable block (ram,0x0001001d2400) */
/* WARNING: Removing unreachable block (ram,0x0001001d2448) */

undefined8 FUN_106ae5d64(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_106aeb860();
  if (cRam000000011381b3ee == '\x01') {
    iVar1 = 0x1381b920;
    func_0x000107c611c4(0x11381b920,0x601);
    iRam0000000113170288 = iVar1;
    if (iVar1 < 0) {
      func_0x000107c60e5c();
      func_0x000107c613cc();
      FUN_106aee7e4(&UNK_10f3b3306);
      uVar2 = 0;
    }
    else {
      if (2 < iRam000000011317028c) {
        func_0x000107c60f10();
      }
      uVar2 = 1;
      iRam000000011317028c = iVar1;
    }
    return uVar2;
  }
  return param_1;
}



/* Entry: 106ae5d90; end: 106ae5e4b;  */

long FUN_106ae5d90(long param_1,int param_2)

{
  long lVar1;
  
  if (param_1 < 0) {
    FUN_106ae5e4c();
    func_0x000106aee914();
    param_1 = 0;
  }
  else {
    FUN_106aea5bc();
    if (param_1 == 0) {
      FUN_106ae5e4c();
      func_0x000106aee914();
    }
    else if (param_2 != 0) {
      lVar1 = param_1;
      FUN_106aea064();
      if (lVar1 == 0) {
        FUN_106ae5e4c();
        func_0x000106aee914();
      }
      _free(param_1);
      param_1 = lVar1;
    }
  }
  return param_1;
}



/* Entry: 106ae5e4c; end: 106ae5f67;  */

undefined * FUN_106ae5e4c(void)

{
  return &UNK_10f3b1651;
}



/* Entry: 106ae5f68; end: 106ae5f6f; -[KSCrashDoctorParam className] */

undefined8 FUN_106ae5f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ae5f70; end: 106ae5f8f; -[KSCrashDoctorParam setClassName:] */

void FUN_106ae5f70(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_106ae7c88();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae5f90; end: 106ae5f97; -[KSCrashDoctorParam previousClassName] */

undefined8 FUN_106ae5f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ae5f98; end: 106ae5fb7; -[KSCrashDoctorParam setPreviousClassName:] */

void FUN_106ae5f98(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_106ae7c88();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae5fb8; end: 106ae5fbf; -[KSCrashDoctorParam isInstance] */

undefined1 FUN_106ae5fb8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106ae5fc0; end: 106ae5fc7; -[KSCrashDoctorParam setIsInstance:] */

void FUN_106ae5fc0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106ae5fc8; end: 106ae5fcf; -[KSCrashDoctorParam address] */

undefined8 FUN_106ae5fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ae5fd0; end: 106ae5fd7; -[KSCrashDoctorParam setAddress:] */

void FUN_106ae5fd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106ae5fd8; end: 106ae5fdf; -[KSCrashDoctorParam value] */

undefined8 FUN_106ae5fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ae5fe0; end: 106ae5fff; -[KSCrashDoctorParam setValue:] */

void FUN_106ae5fe0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_106ae7c88();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae6000; end: 106ae6007; -[KSCrashDoctorParam type] */

undefined8 FUN_106ae6000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


