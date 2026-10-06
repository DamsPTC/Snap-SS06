/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108099004; end: 1080990b3; -[SCValdiDrawingModuleFactory getFontWithSpecs:] */

void FUN_108099004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126d9238;
  func_0x0001080992c8();
  uVar1 = param_3;
  func_0x00010bfb3a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3ec0(puVar2,param_2,uVar1,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080992b8();
  puVar3 = PTR_PTR_1126d9240;
  _objc_alloc(PTR_PTR_1126d9240);
  func_0x00010c099280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080992b0();
  func_0x00010c013a80(puVar3,param_2,puVar2,param_3);
  func_0x0001080992b8();
  func_0x0001080992c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1080990b4; end: 1080990f3; -[SCValdiDrawingModuleFactory isFontRegisteredWithFontName:] */

bool FUN_1080990b4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return puVar1 != (undefined *)0x0;
}



/* Entry: 1080990f4; end: 1080992a3; -[SCValdiDrawingModuleFactory registerFontWithFontName:weight:style:filename:] */

void FUN_1080990f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001080992c8();
  uStack_58 = 0;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64aa0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_6,0,&uStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uStack_58;
  uVar2 = uStack_58;
  _objc_retain();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c076f00();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar4 != 0) {
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ed47f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eeea0(uVar2,param_2,puVar1,3);
LAB_108099264:
      _objc_release(puVar1);
      func_0x0001080992e8();
    }
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    uStack_60 = uVar4;
    func_0x00010c126540(uVar3,param_2,param_3,puVar1,&uStack_60);
    _objc_retain(uStack_60);
    _objc_release();
    if ((uVar3 & 1) != 0) goto LAB_10809927c;
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c076f00();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar2 != 0) {
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ed4818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eeea0(uVar4,param_2,puVar1,4);
      goto LAB_108099264;
    }
  }
  func_0x0001080992fc();
LAB_10809927c:
  func_0x0001080992c0();
  func_0x0001080992b8();
  func_0x0001080992b0();
  return;
}



/* Entry: 1080992a4; end: 108099303; -[SCValdiDrawingModuleFactory .cxx_destruct] */

void FUN_1080992a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108099304; end: 10809952f; -[SCValdiApplicationModule init] */

undefined8 * FUN_108099304(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fc540;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    func_0x000108099b04();
    uVar7 = puVar2[1];
    puVar2[1] = puVar3;
    func_0x000108099ac4(uVar7);
    func_0x000108099b04();
    uVar7 = puVar2[2];
    puVar2[2] = puVar3;
    func_0x000108099ac4(uVar7);
    func_0x000108099b04();
    uVar7 = puVar2[3];
    puVar2[3] = puVar3;
    func_0x000108099ac4(uVar7);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    func_0x000108099ab0(PTR__UIApplicationDidBecomeActiveNotification_1103459f8);
    func_0x000108099ab0(PTR__UIApplicationWillResignActiveNotification_110345ae0);
    func_0x000108099ab0(PTR__UIKeyboardWillShowNotification_110345d20);
    func_0x000108099ab0(PTR__UIKeyboardWillHideNotification_110345d18);
    _dispatch_group_create();
    uVar7 = puVar2[4];
    puVar2[4] = puVar4;
    func_0x000108099ac4(uVar7);
    iVar1 = (int)puVar2[4];
    _dispatch_group_enter();
    func_0x000108099b30();
    if (iVar1 == 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_108099530;
      puStack_60 = &UNK_110842e18;
      _objc_retain(puVar2);
      puStack_58 = puVar2;
      func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_78);
      _objc_release(puStack_58);
    }
    else {
      func_0x00010be3b180(puVar2);
    }
    uVar7 = puVar2[6];
    puVar2[6] = &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar7);
    puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfedc40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x000108099b1c();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar6 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar4);
    if (((ulong)puVar6 & 1) != 0) {
      _objc_retain(puVar5);
      uVar7 = puVar2[6];
      puVar2[6] = puVar5;
      _objc_release(uVar7);
    }
    func_0x000108099b0c();
    func_0x000108099b14();
  }
  return puVar2;
}



/* Entry: 108099530; end: 108099537;  */

void FUN_108099530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3b190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__initializeApplicationModuleIfNe_11256c600);
  return;
}



/* Entry: 108099538; end: 10809956b; -[SCValdiApplicationModule ensureApplicationModuleIsReadyForContextCreation] */

void FUN_108099538(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000108099b30();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be3b190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initializeApplicationModuleIfNe_11256c600)
    ;
    return;
  }
  return;
}



/* Entry: 10809956c; end: 1080995db; -[SCValdiApplicationModule _initializeApplicationModuleIfNeeded] */

void FUN_10809956c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07b60();
  func_0x000108099b14();
  func_0x00010bea4c40(param_1,param_2,puVar1 == (undefined *)0x0);
  *(undefined1 *)(param_1 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080995dc; end: 1080995e7; -[SCValdiApplicationModule _didEnterBackground] */

void FUN_1080995dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_notifyWithMarshaller__112615028,0);
  return;
}



/* Entry: 1080995e8; end: 108099613; -[SCValdiApplicationModule _didBecomeActive] */

void FUN_1080995e8(long param_1,undefined8 param_2)

{
  func_0x00010bea4c40(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c0dd850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_notifyWithMarshaller__112615028,0);
  return;
}



/* Entry: 108099614; end: 10809961b; -[SCValdiApplicationModule _willResignActive] */

void FUN_108099614(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setIsAppInForeground__112586cb8,0);
  return;
}



/* Entry: 10809961c; end: 1080996db; -[SCValdiApplicationModule _keyboardWillShow:] */

void FUN_10809961c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_d3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  func_0x000108099b1c();
  func_0x000108099b0c();
  func_0x00010b97f424();
  func_0x00010b97f870(in_d3);
  func_0x00010c0dd840(*(undefined8 *)(param_1 + 0x18),param_2,uVar1);
  func_0x000108099acc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080996dc; end: 108099753; -[SCValdiApplicationModule _keyboardWillHide:] */

void FUN_1080996dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010b97f424();
  func_0x00010b97f870(0);
  func_0x00010c0dd840(*(undefined8 *)(param_1 + 0x18),param_2,uVar1);
  func_0x000108099ae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108099754; end: 108099783; -[SCValdiApplicationModule _setIsAppInForeground:] */

void FUN_108099754(void)

{
  undefined1 unaff_w19;
  long unaff_x20;
  
  func_0x000108099b3c();
  _objc_sync_enter();
  *(undefined1 *)(unaff_x20 + 0x38) = unaff_w19;
  _objc_sync_exit();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108099784; end: 1080997b3; -[SCValdiApplicationModule setIsIntegrationTestEnvironment:] */

void FUN_108099784(void)

{
  undefined1 unaff_w19;
  long unaff_x20;
  
  func_0x000108099b3c();
  _objc_sync_enter();
  *(undefined1 *)(unaff_x20 + 0x39) = unaff_w19;
  _objc_sync_exit();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080997b4; end: 1080997f7; -[SCValdiApplicationModule _isForegrounded:] */

void FUN_1080997b4(void)

{
  func_0x000108099b24();
  _objc_sync_enter();
  func_0x00010b97f858();
  func_0x000108099adc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080997f8; end: 10809983b; -[SCValdiApplicationModule _isIntegrationTestEnvironment:] */

void FUN_1080997f8(void)

{
  func_0x000108099b24();
  _objc_sync_enter();
  func_0x00010b97f858();
  func_0x000108099adc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10809983c; end: 108099847; -[SCValdiApplicationModule _getAppVersion:] */

long FUN_10809983c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int unaff_w19;
  
  func_0x00010b97fff8(param_3,*(undefined8 *)(param_1 + 0x30));
  func_0x00010b9a0ba8();
  func_0x00010b97fff0();
  return (long)unaff_w19;
}



/* Entry: 108099848; end: 108099853; -[SCValdiApplicationModule getModulePath] */

undefined ** FUN_108099848(void)

{
  return &PTR____CFConstantStringClassReference_110ed4838;
}



/* Entry: 108099854; end: 108099a0b; -[SCValdiApplicationModule loadModule] */

undefined * FUN_108099854(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _dispatch_group_wait(*(undefined8 *)(param_1 + 0x20),0xffffffffffffffff);
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000108099b1c();
  func_0x000108099b0c();
  func_0x000108099b14();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010be40920(*(undefined8 *)(puVar2 + 0x20));
  return (undefined *)0x1;
}



/* Entry: 108099a0c; end: 108099a6b;  */

undefined8 FUN_108099a0c(long param_1,undefined8 param_2)

{
  func_0x00010be40920(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  return 1;
}



/* Entry: 108099a6c; end: 108099aaf; -[SCValdiApplicationModule .cxx_destruct] */

void FUN_108099a6c(long param_1)

{
  func_0x000108099afc(param_1 + 0x30);
  func_0x000108099afc(param_1 + 0x20);
  func_0x000108099afc(param_1 + 0x18);
  func_0x000108099afc(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108099ab0; end: 108099b47;  */

void FUN_108099ab0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108099b48; end: 108099bb3; -[SCValdiBridgeObserver init] */

undefined1 * FUN_108099b48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc548;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108099bb4; end: 108099c13; -[SCValdiBridgeObserver _removeCallback:] */

void FUN_108099bb4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010809a04c();
    _objc_sync_enter(uVar1);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
    func_0x00010809a044();
    func_0x000108099ffc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108099c14; end: 108099c6b; -[SCValdiBridgeObserver setDelegate:] */

void FUN_108099c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _objc_sync_enter(uVar1);
  _objc_storeWeak(param_1 + 0x10,param_3);
  _objc_release(param_3);
  func_0x00010809a054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108099c6c; end: 108099caf; -[SCValdiBridgeObserver delegate] */

void FUN_108099c6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010809a04c();
  _objc_sync_enter(uVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010809a044();
  func_0x000108099ffc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108099cb0; end: 108099e0f; -[SCValdiBridgeObserver performWithMarshaller:] */

undefined8 FUN_108099cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_3;
  func_0x00010b97f9d8(param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  _objc_sync_enter(uVar3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8));
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf21180();
  _objc_release(lVar2);
  _objc_sync_exit(uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010b97f5e4(param_3,1);
  _objc_initWeak(auStack_48,uVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108099e10;
  puStack_60 = &UNK_110a1add0;
  lStack_58 = param_1;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010b97f7e4(param_3,&puStack_78);
  func_0x00010b97f61c(param_3,&PTR____CFConstantStringClassReference_110daf8b8,uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 108099e10; end: 108099e4b;  */

undefined8 FUN_108099e10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8b960(uVar1,param_2,param_1);
  FUN_108099ffc();
  return 0;
}



/* Entry: 108099e4c; end: 108099fcf; -[SCValdiBridgeObserver notifyWithMarshaller:] */

void FUN_108099e4c(long *param_1,code *UNRECOVERED_JUMPTABLE,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 == 0) {
    plVar3 = param_1;
    func_0x00010b97f424();
    func_0x00010c0dd840();
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
    func_0x00010809a018();
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000108099f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar3);
      return;
    }
  }
  else {
    uVar6 = param_1[1];
    _objc_retain(uVar6);
    _objc_sync_enter(uVar6);
    plVar3 = (long *)param_1[1];
    func_0x00010bf51e00();
    func_0x00010809a054();
    _objc_release();
    func_0x00010809a04c();
    func_0x00010809a004();
    lVar1 = lRam0000000000000000;
    while (uVar6 != 0) {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(plVar3);
        }
        uVar4 = *(ulong *)(uVar7 * 8);
        func_0x00010c0f9540();
        uVar7 = uVar7 + 1;
        in_ZR = uVar7 == uVar6;
      } while (uVar7 < uVar6);
      func_0x00010809a004();
      uVar6 = uVar4;
    }
    param_1 = (long *)0x0;
    func_0x000108099ffc();
    func_0x000108099ffc();
    func_0x00010809a018();
    if ((bool)in_ZR) {
      return;
    }
  }
  iVar5 = (int)UNRECOVERED_JUMPTABLE;
  ___stack_chk_fail();
  if (iVar5 != 0) {
    _objc_begin_catch(param_1);
    (**(code **)(*plVar3 + 8))(plVar3);
    _objc_exception_rethrow();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108099fa8);
    (*pcVar2)();
  }
  func_0x00010809a03c();
  _objc_destroyWeak(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 1,0);
  return;
}



/* Entry: 108099fd0; end: 108099ffb; -[SCValdiBridgeObserver .cxx_destruct] */

void FUN_108099fd0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108099ffc; end: 10809a05b;  */

void FUN_108099ffc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10809a05c; end: 10809a28f; -[SCValdiDeviceModule initWithJSQueueDispatcher:] */

undefined1 * FUN_10809a05c(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010809c090();
  puVar2 = &stack0xffffffffffffffb0;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2 + 0x78;
    _objc_storeWeak();
    func_0x00010809c1ec();
    uVar5 = *(undefined8 *)(puVar2 + 0x58);
    *(undefined1 **)(puVar2 + 0x58) = puVar3;
    func_0x00010809c12c(uVar5);
    func_0x00010809c1ec();
    uVar5 = *(undefined8 *)(puVar2 + 0x60);
    *(undefined1 **)(puVar2 + 0x60) = puVar3;
    func_0x00010809c12c(uVar5);
    func_0x00010809c1ec();
    uVar5 = *(undefined8 *)(puVar2 + 0x68);
    *(undefined1 **)(puVar2 + 0x68) = puVar3;
    func_0x00010809c12c(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)(puVar2 + 0x68));
    puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf12300();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar2 + 0x88);
    *(undefined **)(puVar2 + 0x88) = puVar4;
    func_0x00010809c12c(uVar5);
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c150(PTR__UIApplicationDidChangeStatusBarFrameNotification_110345a00);
    func_0x00010809c0f8();
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c150(&PTR_PTR_110d7a398);
    func_0x00010809c0f8();
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c0ac(&PTR_PTR_110d7a3a0);
    func_0x00010809c0f8();
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c0ac(&PTR_PTR_110d7a3a8);
    func_0x00010809c0f8();
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c0ac(PTR__UISceneDidDisconnectNotification_110345d80);
    func_0x00010809c0f8();
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c0ac(PTR__UIDeviceOrientationDidChangeNotification_110345b98);
    func_0x00010809c0f8();
    _dispatch_group_create();
    uVar5 = *(undefined8 *)(puVar2 + 0x80);
    *(undefined **)(puVar2 + 0x80) = puVar4;
    func_0x00010809c12c(uVar5);
    iVar1 = (int)*(undefined8 *)(puVar2 + 0x80);
    _dispatch_group_enter();
    func_0x00010809c1f4();
    if (iVar1 == 0) {
      func_0x00010809c100();
      _objc_retain(puVar2);
      func_0x00010809c06c();
      func_0x00010809c1dc();
    }
    else {
      func_0x00010bed6de0(puVar2);
    }
  }
  func_0x00010809c11c();
  return puVar2;
}



/* Entry: 10809a290; end: 10809a297;  */

void FUN_10809a290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateDeviceSettingsIfNeeded_112593520);
  return;
}



/* Entry: 10809a298; end: 10809a3c7; -[SCValdiDeviceModule dealloc] */

void FUN_10809a298(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_70;
  
  plVar4 = &lStack_140;
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_4;
  func_0x00010809c07c();
  if ((int)lVar7 != 0) {
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar5 = *(undefined **)(param_4 + 0x70);
    puVar2 = puVar5;
    _objc_retain();
    func_0x00010809c164();
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar1 = PTR_s_effectiveGeometry_1125c0da0;
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(puVar5);
          }
          uVar6 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
          puVar3 = puVar1;
          _NSStringFromSelector();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d5a0(uVar6);
          _objc_release();
          puVar8 = puVar8 + 1;
          in_ZR = puVar8 == puVar2;
        } while (puVar8 < puVar2);
        func_0x00010809c164();
        puVar2 = puVar3;
      } while (puVar3 != (undefined *)0x0);
    }
    func_0x00010809c124();
  }
  puStack_138 = PTR_PTR_1126fc550;
  lStack_140 = param_4;
  _objc_msgSendSuper2(&lStack_140,PTR_s_dealloc_112525b20);
  func_0x00010809c20c(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)((long)plVar4 + 0x92) & 1) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)((long)plVar4 + 8);
  *(undefined **)((long)plVar4 + 8) = puVar5;
  func_0x00010809c12c(uVar6);
  puVar5 = puVar2;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)((long)plVar4 + 0x10);
  *(undefined **)((long)plVar4 + 0x10) = puVar5;
  func_0x00010809c12c(uVar6);
  func_0x00010809c198();
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf69a0(plVar4);
  *(ulong *)((long)plVar4 + 0x18) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  *(undefined8 *)((long)plVar4 + 0x20) = param_1;
  func_0x00010c14e120(puVar5);
  *(ulong *)((long)plVar4 + 0x28) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  func_0x00010bdf6b40(plVar4);
  *(ulong *)((long)plVar4 + 0x30) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  *(undefined8 *)((long)plVar4 + 0x38) = param_1;
  *(undefined8 *)((long)plVar4 + 0x40) = param_2;
  *(undefined8 *)((long)plVar4 + 0x48) = param_3;
  *(undefined1 *)((long)plVar4 + 0x92) = 1;
  func_0x00010c279540(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e00();
  func_0x00010bee2900(plVar4);
  _objc_release(puVar5);
  func_0x00010809c1b4();
  _dispatch_group_leave(*(undefined8 *)((long)plVar4 + 0x80));
  func_0x00010809c0f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10809a3c8; end: 10809a4d7; -[SCValdiDeviceModule _updateDeviceSettingsIfNeeded] */

void FUN_10809a3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_5 + 0x92) & 1) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 8);
  *(undefined **)(param_5 + 8) = puVar2;
  func_0x00010809c12c(uVar3);
  puVar2 = puVar1;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x10);
  *(undefined **)(param_5 + 0x10) = puVar2;
  func_0x00010809c12c(uVar3);
  func_0x00010809c198();
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf69a0(param_5);
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(undefined8 *)(param_5 + 0x20) = param_2;
  func_0x00010c14e120(puVar2);
  *(undefined8 *)(param_5 + 0x28) = param_1;
  func_0x00010bdf6b40(param_5);
  *(undefined8 *)(param_5 + 0x30) = param_1;
  *(undefined8 *)(param_5 + 0x38) = param_2;
  *(undefined8 *)(param_5 + 0x40) = param_3;
  *(undefined8 *)(param_5 + 0x48) = param_4;
  *(undefined1 *)(param_5 + 0x92) = 1;
  func_0x00010c279540(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e00();
  func_0x00010bee2900(param_5,param_6,puVar2,0);
  _objc_release(puVar2);
  func_0x00010809c1b4();
  _dispatch_group_leave(*(undefined8 *)(param_5 + 0x80));
  func_0x00010809c0f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10809a4d8; end: 10809a577; -[SCValdiDeviceModule _currentDisplaySize] */

undefined1  [16] FUN_10809a4d8(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c086b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809c124();
  func_0x00010bf20c00(puVar1);
  if ((param_3 <= 0.0) || (param_4 <= 0.0)) {
    func_0x00010809c198();
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010809c124();
  }
  func_0x00010809c11c();
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 10809a578; end: 10809a5bf; -[SCValdiDeviceModule performHapticFeedback:] */

void FUN_10809a578(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0f8860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    func_0x00010b97f7cc(param_3);
  }
  else {
    func_0x00010c0f9540(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10809a5c0; end: 10809a733; -[SCValdiDeviceModule _currentInsets] */

undefined8
FUN_10809a5c0(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x30);
  uVar6 = (undefined2)((ulong)param_1 >> 0x20);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (undefined2)param_1;
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  iVar1 = (int)puVar2;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c086b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  func_0x00010809c124();
  func_0x00010809c11c();
  func_0x00010b96bf1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809c144();
  if (iVar1 != 0) {
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_6,
                        &PTR____CFConstantStringClassReference_110ed4918);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c0e4();
    func_0x00010809c124();
  }
  func_0x00010809c11c();
  uVar3 = NEON_uminv(CONCAT26(-(ushort)(param_4 ==
                                       *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18)),
                              CONCAT24(-(ushort)(param_3 ==
                                                *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10))
                                       ,CONCAT22(-(ushort)(param_2 ==
                                                          *(double *)
                                                           (PTR__UIEdgeInsetsZero_110345bb0 + 8)),
                                                 -(ushort)((double)CONCAT26(uVar7,CONCAT24(uVar6,
                                                  CONCAT22(uVar5,uVar4))) ==
                                                  *(double *)PTR__UIEdgeInsetsZero_110345bb0)))),2);
  if ((uVar3 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(uVar4);
    iVar1 = (int)puVar2;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d80();
    func_0x00010809c11c();
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c144();
    if (iVar1 != 0) {
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_6,
                          &PTR____CFConstantStringClassReference_110ed4938);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010809c0e4();
      func_0x00010809c124();
    }
    func_0x00010809c11c();
    uVar4 = SUB82(param_4,0);
    uVar5 = (undefined2)((ulong)param_4 >> 0x10);
    uVar6 = (undefined2)((ulong)param_4 >> 0x20);
    uVar7 = (undefined2)((ulong)param_4 >> 0x30);
  }
  return CONCAT26(uVar7,CONCAT24(uVar6,CONCAT22(uVar5,uVar4)));
}



/* Entry: 10809a734; end: 10809a793; -[SCValdiDeviceModule _dispatchOnJsQueue:] */

void FUN_10809a734(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010809c090();
  lVar1 = unaff_x20 + 0x78;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(unaff_x19 + 0x10))();
  }
  else {
    _objc_loadWeakRetained(unaff_x20 + 0x78);
    func_0x00010bf85180();
    func_0x00010809c124();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10809a794; end: 10809a807; -[SCValdiDeviceModule _updateDisplayInsetsAndNotify:] */

void FUN_10809a794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010bdf6b40();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10809a808;
  puStack_58 = &UNK_1108e73d8;
  uStack_50 = param_5;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  uStack_30 = param_4;
  uStack_28 = param_7;
  func_0x00010be03f00(param_5,param_6,&puStack_70);
  return;
}



/* Entry: 10809a808; end: 10809a963;  */

void FUN_10809a808(long param_1)

{
  double dVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x40) == *(double *)(lVar3 + 0x48)),
                              CONCAT24(-(ushort)(*(double *)(param_1 + 0x38) ==
                                                *(double *)(lVar3 + 0x40)),
                                       CONCAT22(-(ushort)(*(double *)(param_1 + 0x30) ==
                                                         *(double *)(lVar3 + 0x38)),
                                                -(ushort)(*(double *)(param_1 + 0x28) ==
                                                         *(double *)(lVar3 + 0x30))))),2);
  lVar3 = param_1;
  func_0x00010b96bf1c();
  iVar2 = (int)lVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809c144();
  if ((uVar4 & 1) != 0) {
    if (iVar2 != 0) {
      func_0x00010809c178(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010809c0e4();
      func_0x00010809c124();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  if (iVar2 != 0) {
    func_0x00010809c178(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c200();
    func_0x00010809c0f8();
  }
  func_0x00010809c11c();
  lVar3 = *(long *)(param_1 + 0x20);
  dVar1 = *(double *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  *(double *)(lVar3 + 0x30) = dVar1;
  *(undefined8 *)(lVar3 + 0x48) = uVar6;
  *(undefined8 *)(lVar3 + 0x40) = uVar5;
  if (*(char *)(param_1 + 0x48) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0dd850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),
               PTR_s_notifyWithMarshaller__112615028,0);
    return;
  }
  return;
}



/* Entry: 10809a964; end: 10809a9cf; -[SCValdiDeviceModule _handleTraitCollectionDidChange:] */

void FUN_10809a964(long param_1,undefined8 param_2,long param_3)

{
  if (*(char *)(param_1 + 0x91) == '\x01') {
    func_0x00010809c198();
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_1;
  }
  else {
    func_0x00010c0dfc60(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809c124();
  func_0x00010809c1a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10809a9d0; end: 10809aa07; -[SCValdiDeviceModule _handleOrientationDidChange:] */

void FUN_10809a9d0(void)

{
  func_0x00010809c100();
  func_0x00010809c0bc(FUN_10809aa08,0xc2000000);
  func_0x00010809c06c();
  return;
}



/* Entry: 10809aa08; end: 10809aa9f;  */

void FUN_10809aa08(long param_1)

{
  func_0x00010bdf69a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010809c198();
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010809c0d0();
  func_0x00010809c0f8();
  func_0x00010809c0bc(FUN_10809aaa0,0xc2000000);
  func_0x00010be03f00();
  return;
}



/* Entry: 10809aaa0; end: 10809aaaf;  */

void FUN_10809aaa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),PTR_s_notifyWithMarshaller__112615028
             ,0);
  return;
}



/* Entry: 10809aab0; end: 10809ab67; -[SCValdiDeviceModule _handleRootViewDidMoveToWindow:] */

void FUN_10809aab0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010809c0f8();
  iVar1 = (int)lVar2;
  if (param_3 != 0) {
    func_0x00010809c07c();
    if (iVar1 != 0) {
      lVar2 = param_3;
      func_0x00010c2a72c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be66280(param_1,param_2,lVar2);
      func_0x00010809c0f8();
    }
    func_0x00010bdf69a0(param_1);
    func_0x00010809c198();
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010809c0d0();
    func_0x00010809c0f8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10809ab68; end: 10809ac07; -[SCValdiDeviceModule _observeGeometryOfWindowSceneIfNeeded:] */

void FUN_10809ab68(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010809c090();
  if (unaff_x19 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 0x70);
    func_0x00010bf4b900();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(unaff_x20 + 0x70);
      if (lVar2 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
        *(undefined **)(unaff_x20 + 0x70) = puVar3;
        func_0x00010809c12c(uVar4);
        lVar2 = *(long *)(unaff_x20 + 0x70);
      }
      func_0x00010befa120(lVar2);
      _NSStringFromSelector(PTR_s_effectiveGeometry_1125c0da0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa220();
      func_0x00010809c0f8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10809ac08; end: 10809acb3; -[SCValdiDeviceModule _handleSceneDidDisconnect:] */

void FUN_10809ac08(int param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x00010809c090();
  func_0x00010809c07c();
  if (param_1 != 0) {
    func_0x00010c0dfc60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    _objc_opt_class(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
    uVar3 = unaff_x19;
    _objc_opt_isKindOfClass(unaff_x19,puVar2);
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*(undefined8 *)(unaff_x20 + 0x70);
      func_0x00010bf4b900();
      if (iVar1 != 0) {
        _NSStringFromSelector(PTR_s_effectiveGeometry_1125c0da0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d5a0(unaff_x19);
        func_0x00010809c1b4();
        func_0x00010c12d360(*(undefined8 *)(unaff_x20 + 0x70));
      }
    }
    func_0x00010809c0f8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10809acb4; end: 10809adf7; -[SCValdiDeviceModule observeValueForKeyPath:ofObject:change:context:] */

void FUN_10809acb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  int iVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uVar2;
  
  uVar2 = param_4;
  _objc_retain();
  iVar1 = (int)uVar2;
  if (param_6 == PTR_LOOP_1132535f8) {
    func_0x00010809c07c();
    if (iVar1 != 0) {
      _objc_retain(param_4);
      iVar1 = 2;
      func_0x000107c31924(2,0x1a,0,0);
      if (iVar1 == 0) {
        func_0x00010bf51d20(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
      }
      else {
        func_0x00010bf8cfe0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51d20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        func_0x00010809c1b4();
      }
      func_0x00010809c0f8();
      func_0x00010c150e00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010809c11c();
      func_0x00010c14e120(param_4);
      func_0x00010809c0d0();
      func_0x00010809c0f8();
    }
  }
  else {
    puStack_58 = PTR_PTR_1126fc550;
    uStack_60 = param_1;
    _objc_msgSendSuper2(&uStack_60,PTR_s_observeValueForKeyPath_ofObject__112615e88,param_3,param_4,
                        param_5,param_6);
  }
  func_0x00010809c11c();
  return;
}



/* Entry: 10809adf8; end: 10809ae4b; -[SCValdiDeviceModule _updateDisplaySize:scale:] */

void FUN_10809adf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10809ae4c;
  puStack_38 = &UNK_11084e430;
  uStack_30 = param_4;
  uStack_28 = param_1;
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x00010be03f00(param_4,param_5,&puStack_50);
  return;
}



/* Entry: 10809ae4c; end: 10809af53;  */

void FUN_10809ae4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (((*(double *)(lVar2 + 0x18) == *(double *)(param_1 + 0x28)) &&
      (*(double *)(lVar2 + 0x20) == *(double *)(param_1 + 0x30))) &&
     (*(double *)(lVar2 + 0x28) == *(double *)(param_1 + 0x38))) {
    return;
  }
  lVar2 = param_1;
  func_0x00010b96bf1c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c076f00();
  if ((int)lVar1 != 0) {
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c200(lVar2);
    func_0x00010809c0f8();
  }
  func_0x00010809c124();
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = *(undefined8 *)(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010c0dd850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),PTR_s_notifyWithMarshaller__112615028
             ,0);
  return;
}



/* Entry: 10809af54; end: 10809afc7; -[SCValdiDeviceModule ensureDeviceModuleIsReadyForContextCreation] */

void FUN_10809af54(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010809c1f4();
  if ((uVar2 & 1) == 0) {
    iVar1 = 0;
    _OSAtomicCompareAndSwapInt(0,1,param_1 + 0x94);
    if (iVar1 != 0) {
      func_0x00010809c100();
      func_0x00010809c0bc(FUN_10809afc8,0xc2000000);
      func_0x00010809c06c();
    }
  }
  else {
    func_0x00010bed6de0(param_1);
    func_0x00010be75800(param_1);
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  return;
}



/* Entry: 10809afc8; end: 10809afcf;  */

void FUN_10809afc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf966f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_ensureDeviceModuleIsReadyForCont_1125c3360);
  return;
}



/* Entry: 10809afd0; end: 10809b02b; -[SCValdiDeviceModule _pollTraitCollectionIfNecessary] */

void FUN_10809afd0(long param_1)

{
  if (*(char *)(param_1 + 0x91) == '\x01') {
    func_0x00010809c198();
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c1a4();
    func_0x00010809c0f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10809b02c; end: 10809b083; -[SCValdiDeviceModule _updateTraitCollection:shouldNotify:] */

void FUN_10809b02c(void)

{
  ulong uVar1;
  int in_w3;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010809c090();
  if (unaff_x19 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 0x50);
    func_0x00010c071ae0();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
      *(long *)(unaff_x20 + 0x50) = unaff_x19;
      func_0x00010809c12c(uVar2);
      if (in_w3 != 0) {
        func_0x00010c0dd280();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10809b084; end: 10809b0d3; -[SCValdiDeviceModule setAllowDarkMode:useScreenUserInterfaceStyleForDarkMode:] */

void FUN_10809b084(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  *(undefined1 *)(param_1 + 0x90) = param_3;
  *(undefined1 *)(param_1 + 0x91) = param_4;
  _objc_sync_exit(param_1);
  func_0x00010809c0f8();
                    /* WARNING: Could not recover jumptable at 0x00010c0dd290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifyJSDarkModeChanged_112614eb8);
  return;
}



/* Entry: 10809b0d4; end: 10809b10f; -[SCValdiDeviceModule allowDarkMode] */

undefined1 FUN_10809b0d4(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x90);
  _objc_sync_exit(param_1);
  func_0x00010809c11c();
  return uVar1;
}



/* Entry: 10809b110; end: 10809b14b; -[SCValdiDeviceModule useScreenUserInterfaceStyleForDarkMode] */

undefined1 FUN_10809b110(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x91);
  _objc_sync_exit(param_1);
  func_0x00010809c11c();
  return uVar1;
}



/* Entry: 10809b14c; end: 10809b20f; -[SCValdiDeviceModule notifyJSDarkModeChanged] */

void FUN_10809b14c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x00010bf01040();
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 == 0) {
      if (*(char *)(param_1 + 0x91) != '\x01') {
        return;
      }
      func_0x00010809c198();
      func_0x00010c0b6c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c279540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292b20();
      func_0x00010809c1b4();
      func_0x00010809c0f8();
    }
    else {
      func_0x00010c292b20();
    }
    uStack_38 = lVar1 == 2;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10809b210;
    puStack_48 = &UNK_110845ce0;
    lStack_40 = param_1;
    func_0x00010be03f00(param_1,param_2,&puStack_60);
  }
  return;
}



/* Entry: 10809b210; end: 10809b287;  */

void FUN_10809b210(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x00010b97f424();
  func_0x00010b97f858();
  func_0x00010c0dd840(*(undefined8 *)(param_1[4] + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010809b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}



/* Entry: 10809b288; end: 10809b28f; -[SCValdiDeviceModule notifyDisplayInsetChanged] */

void FUN_10809b288(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed7010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDisplayInsetsAndNotify__1125935a8,1);
  return;
}



/* Entry: 10809b290; end: 10809b29f; -[SCValdiDeviceModule systemType:] */

long FUN_10809b290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int unaff_w19;
  
  func_0x00010b97fff8(param_3,&PTR____CFConstantStringClassReference_110e17ad8);
  func_0x00010b9a0ba8();
  func_0x00010b97fff0();
  return (long)unaff_w19;
}



/* Entry: 10809b2a0; end: 10809b2ab; -[SCValdiDeviceModule systemVersion:] */

long FUN_10809b2a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int unaff_w19;
  
  func_0x00010b97fff8(param_3,*(undefined8 *)(param_1 + 8));
  func_0x00010b9a0ba8();
  func_0x00010b97fff0();
  return (long)unaff_w19;
}



/* Entry: 10809b2ac; end: 10809b2b7; -[SCValdiDeviceModule model:] */

long FUN_10809b2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  int unaff_w19;
  
  func_0x00010b97fff8(param_3,*(undefined8 *)(param_1 + 0x10));
  func_0x00010b9a0ba8();
  func_0x00010b97fff0();
  return (long)unaff_w19;
}



/* Entry: 10809b2b8; end: 10809b353; -[SCValdiDeviceModule copyToClipBoard:] */

void FUN_10809b2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b97fc3c(param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809c100();
  func_0x00010809c0bc(0x10809b318,0xc2000000);
  _objc_retain();
  func_0x00010809c06c();
  func_0x00010809c1dc();
  func_0x00010809c11c();
  return;
}



/* Entry: 10809b354; end: 10809b3cb; -[SCValdiDeviceModule deviceLocales:] */

void FUN_10809b354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809c100();
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10809b3cc;
  puStack_30 = &UNK_110a1ae00;
  uStack_28 = param_3;
  func_0x00010b97fa80(param_3,puVar1,auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10809b3cc; end: 10809b3d3;  */

long FUN_10809b3cc(long param_1)

{
  int unaff_w19;
  
  func_0x00010b97fff8(*(undefined8 *)(param_1 + 0x20));
  func_0x00010b9a0ba8();
  func_0x00010b97fff0();
  return (long)unaff_w19;
}



/* Entry: 10809b3d4; end: 10809b3db; -[SCValdiDeviceModule displayWidth:] */

long FUN_10809b3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b9a0c88(*(undefined8 *)(param_1 + 0x18),param_3);
  return (long)(int)param_3;
}



/* Entry: 10809b3dc; end: 10809b3e3; -[SCValdiDeviceModule displayHeight:] */

long FUN_10809b3dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b9a0c88(*(undefined8 *)(param_1 + 0x20),param_3);
  return (long)(int)param_3;
}



/* Entry: 10809b3e4; end: 10809b3eb; -[SCValdiDeviceModule displayScale:] */

long FUN_10809b3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b9a0c88(*(undefined8 *)(param_1 + 0x28),param_3);
  return (long)(int)param_3;
}



/* Entry: 10809b3ec; end: 10809b437; -[SCValdiDeviceModule dynamicTypeScale:] */

void FUN_10809b3ec(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bce48;
  func_0x00010bf5e500();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010bf8bc00(puVar1);
  }
  func_0x00010809c1d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10809b438; end: 10809b43f; -[SCValdiDeviceModule displayLeftInset:] */

long FUN_10809b438(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b9a0c88(*(undefined8 *)(param_1 + 0x38),param_3);
  return (long)(int)param_3;
}



/* Entry: 10809b440; end: 10809b447; -[SCValdiDeviceModule displayTopInset:] */

long FUN_10809b440(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b9a0c88(*(undefined8 *)(param_1 + 0x30),param_3);
  return (long)(int)param_3;
}



/* Entry: 10809b448; end: 10809b44f; -[SCValdiDeviceModule displayRightInset:] */

long FUN_10809b448(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b9a0c88(*(undefined8 *)(param_1 + 0x48),param_3);
  return (long)(int)param_3;
}



/* Entry: 10809b450; end: 10809b457; -[SCValdiDeviceModule displayBottomInset:] */

long FUN_10809b450(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b9a0c88(*(undefined8 *)(param_1 + 0x40),param_3);
  return (long)(int)param_3;
}



/* Entry: 10809b458; end: 10809b483; -[SCValdiDeviceModule localeUsesMetricSystem:] */

long FUN_10809b458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c294b00(uVar1);
  func_0x00010b9a0be0(param_3,uVar1);
  return (long)(int)param_3;
}



/* Entry: 10809b484; end: 10809b4db; -[SCValdiDeviceModule timeZoneName:] */

void FUN_10809b484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97f738(param_3,puVar2);
  func_0x00010809c0f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10809b4dc; end: 10809b55f; -[SCValdiDeviceModule _timeZoneFromMarshaller:] */

void FUN_10809b4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_3;
  func_0x00010b97fcec(param_3,0);
  if ((int)uVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b97fc3c(param_3,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c26fda0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809c124();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10809b560; end: 10809b5af; -[SCValdiDeviceModule timeZoneRawSecondsFromGMT:] */

void FUN_10809b560(double param_1,long param_2)

{
  long lVar1;
  
  func_0x00010becc020();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c1552e0();
  func_0x00010bf657e0(param_2);
  func_0x00010809c1d4((double)lVar1 - param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10809b5b0; end: 10809b5e7; -[SCValdiDeviceModule timeZoneDstSecondsFromGMT:] */

void FUN_10809b5b0(long param_1)

{
  long lVar1;
  
  func_0x00010becc020();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c1552e0();
  func_0x00010809c1d4((double)lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10809b5e8; end: 10809b617; -[SCValdiDeviceModule uptimeMs:] */

long FUN_10809b5e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _CACurrentMediaTime();
  func_0x00010b9a0c88(param_1 * 1000.0,param_4);
  return (long)(int)param_4;
}



/* Entry: 10809b618; end: 10809b623; -[SCValdiDeviceModule getModulePath] */

undefined ** FUN_10809b618(void)

{
  return &PTR____CFConstantStringClassReference_110ed49b8;
}



/* Entry: 10809b624; end: 10809bd1b; -[SCValdiDeviceModule loadModule] */

undefined * FUN_10809b624(long param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  
  uVar19 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _dispatch_group_wait(*(undefined8 *)(param_1 + 0x80),0xffffffffffffffff);
  puVar1 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbc0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809c0f8();
  func_0x00010809c124();
  func_0x00010809c11c();
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  func_0x00010809c1dc();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010809c20c(uVar19);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
    return puVar18;
  }
  ___stack_chk_fail();
  func_0x00010809c110();
  func_0x00010bf709c0();
  return (undefined *)0x1;
}



/* Entry: 10809bd1c; end: 10809bf67;  */

undefined8 FUN_10809bd1c(void)

{
  func_0x00010809c110();
  func_0x00010bf709c0();
  return 1;
}



/* Entry: 10809bf68; end: 10809bfaf; -[SCValdiDeviceModule bridgeObserverDidAddNewCallback:] */

void FUN_10809bf68(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x68)) {
    return;
  }
  func_0x00010809c100();
  func_0x00010809c0bc(FUN_10809bfb0,0xc2000000);
  func_0x00010809c06c();
  return;
}



/* Entry: 10809bfb0; end: 10809bfb7;  */

void FUN_10809bfb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_notifyJSDarkModeChanged_112614eb8);
  return;
}



/* Entry: 10809bfb8; end: 10809bfc3; -[SCValdiDeviceModule performHapticFeedbackFunction] */

void FUN_10809bfb8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x98,1);
  return;
}



/* Entry: 10809bfc4; end: 10809bfcb; -[SCValdiDeviceModule setPerformHapticFeedbackFunction:] */

void FUN_10809bfc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10809bfcc; end: 10809bfe3; -[SCValdiDeviceModule exceptionReporter] */

void FUN_10809bfcc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10809bfe4; end: 10809bfef; -[SCValdiDeviceModule setExceptionReporter:] */

void FUN_10809bfe4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 10809bff0; end: 10809c06b; -[SCValdiDeviceModule .cxx_destruct] */

void FUN_10809bff0(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa0);
  func_0x00010809c134(param_1 + 0x98);
  func_0x00010809c134(param_1 + 0x88);
  func_0x00010809c134(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  func_0x00010809c134(param_1 + 0x70);
  func_0x00010809c134(param_1 + 0x68);
  func_0x00010809c134(param_1 + 0x60);
  func_0x00010809c134(param_1 + 0x58);
  func_0x00010809c134(param_1 + 0x50);
  func_0x00010809c134(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10809c06c; end: 10809c21f;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_10809c06c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  code *pcVar4;
  
  puVar1 = PTR___dispatch_main_q_11034be20;
  puVar3 = &stack0x00000008;
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  if ((bRam0000000113817cd8 & 1) == 0) {
    iVar2 = 0x13817cd8;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      pcVar4 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
      pcRam0000000113817cd0 = pcVar4;
      func_0x000107c60e4c(0x113817cd8);
    }
  }
  pcVar4 = pcRam0000000113817cd0;
  func_0x00010002a3a8(puVar3);
  func_0x000107c61180();
  (*pcVar4)(puVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10809c220; end: 10809c293; -[SCValdiAutoDestroyingContext initWithContext:] */

undefined1 * FUN_10809c220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc558;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10809c294; end: 10809c2db; -[SCValdiAutoDestroyingContext dealloc] */

void FUN_10809c294(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf6ef60(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1126fc558;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10809c2dc; end: 10809c2e3; -[SCValdiAutoDestroyingContext contextId] */

void FUN_10809c2dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_contextId_1125b13d0);
  return;
}



/* Entry: 10809c2e4; end: 10809c2eb; -[SCValdiAutoDestroyingContext runtime] */

void FUN_10809c2e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c142e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_runtime_11262e5a0);
  return;
}



/* Entry: 10809c2ec; end: 10809c2f3; -[SCValdiAutoDestroyingContext enableAccessibility] */

void FUN_10809c2ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8f090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_enableAccessibility_1125c15c8);
  return;
}



/* Entry: 10809c2f4; end: 10809c2fb; -[SCValdiAutoDestroyingContext setEnableAccessibility:] */

void FUN_10809c2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c194910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setEnableAccessibility__112642c60);
  return;
}



/* Entry: 10809c2fc; end: 10809c303; -[SCValdiAutoDestroyingContext viewInflationEnabled] */

void FUN_10809c2fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_viewInflationEnabled_112684e68);
  return;
}


