/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052cbc7c; end: 1052cbe37; -[SCAudioSessionImpl _performRequestWithLabel:tokensSet:tokensSet:deactivation:shouldRetryRequest:shouldInterruptCalling:callbackPerformer:callback:] */

void FUN_1052cbc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long in_stack_00000000;
  long in_stack_00000008;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  if (in_stack_00000000 == 0 && in_stack_00000008 != 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bfbfcc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(in_stack_00000000);
    _objc_retain(in_stack_00000008);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_retain(uVar1);
    _objc_release(in_stack_00000008);
    _objc_release(in_stack_00000000);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052cbe38; end: 1052cbf5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cbe38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
  func_0x00010bede280(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112720cb4));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x59) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be97110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s__retryUpdateAVAudioSessionBefore_1125835e0,
               *(undefined1 *)(param_1 + 0x5a),1,*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x48));
    return;
  }
  func_0x00010bed2440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x48);
  if ((lVar3 != 0) && (lVar2 = *(long *)(param_1 + 0x40), lVar2 != 0)) {
    _objc_retain(lVar3);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(lVar2);
    _objc_release(uVar1);
    _objc_release(lVar3);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1052cbf60; end: 1052cbf6f;  */

void FUN_1052cbf60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052cbf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1052cbf70; end: 1052cc113; -[SCAudioSessionImpl _retryUpdateAVAudioSessionBeforeCallbackWithDeactivation:numRetries:performer:callBack:] */

void FUN_1052cbf70(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 == 0) && (param_6 != 0)) goto LAB_1052cc0e8;
  lVar1 = param_1;
  func_0x00010bed2440(param_1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf3ec40();
  if ((param_4 < 1) || (lVar2 != 1)) {
    if ((param_5 != 0) && (param_6 != 0)) {
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x1052cc12c;
      puStack_b0 = &UNK_11084aaa8;
      _objc_retain(param_6);
      lStack_a0 = param_6;
      _objc_retain(lVar1);
      lStack_a8 = lVar1;
      func_0x00010c0f7fc0(param_5,param_2,&puStack_c8);
      _objc_release(lStack_a8);
      lVar2 = lStack_a0;
      goto LAB_1052cc0dc;
    }
  }
  else {
    lVar2 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1052cc114;
    puStack_80 = &UNK_110875f40;
    uStack_58 = (undefined1)param_3;
    lStack_78 = param_1;
    lStack_60 = param_4;
    _objc_retain(param_5);
    lStack_70 = param_5;
    _objc_retain(param_6);
    lStack_68 = param_6;
    func_0x00010c0f7fe0(0x3fc99999a0000000,lVar2,param_2,&puStack_98);
    _objc_release(lVar2);
    _objc_release(lStack_68);
    lVar2 = lStack_70;
LAB_1052cc0dc:
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_1052cc0e8:
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1052cc114; end: 1052cc13b;  */

void FUN_1052cc114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be97110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__retryUpdateAVAudioSessionBefore_1125835e0,
             *(undefined1 *)(param_1 + 0x40),*(long *)(param_1 + 0x38) + -1,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1052cc13c; end: 1052cc1eb; -[SCAudioSessionImpl callKitDidActivateAudioSession:] */

void FUN_1052cc13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 1052cc1ec; end: 1052cc347;  */

void FUN_1052cc1ec(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  func_0x00010bf33240();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dcf238;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar5 = ppuVar1;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar1);
  ppuVar2 = *(undefined ***)(param_1 + 0x20);
  func_0x00010c0cfd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcf238;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dbd20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f78cf8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f78d18;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_58 = ppuVar5;
  ppuStack_50 = ppuVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f1f8b8,uVar6,puVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(ppuVar5);
  return;
}



/* Entry: 1052cc348; end: 1052cc403; -[SCAudioSessionImpl callKitWillDeactivateAudioSession:] */

void FUN_1052cc348(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1052cc404; end: 1052cc493; -[SCAudioSessionImpl generateNewTokenWithLabel:] */

void FUN_1052cc404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c156d80(puVar1,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052cc494; end: 1052cc5eb; -[SCAudioSessionImpl updateAudioConfigForToken:configRequest:callbackPerformer:callback:] */

void FUN_1052cc494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b6e18;
  if ((param_5 != 0) || (param_6 == 0)) {
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010bff5560();
    _objc_release(param_3);
    uVar2 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1052cc5ec;
    puStack_70 = &UNK_11084e180;
    _objc_retain(param_4);
    puStack_68 = puVar1;
    uStack_60 = param_1;
    uStack_50 = param_4;
    _objc_retain(param_6);
    lStack_48 = param_6;
    _objc_retain(param_5);
    lStack_58 = param_5;
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_88);
    _objc_release(uVar2);
    _objc_release(lStack_58);
    _objc_release(lStack_48);
    _objc_release(puStack_68);
    _objc_release(uStack_50);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1052cc5ec; end: 1052cc6bb;  */

void FUN_1052cc5ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bed2440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x40);
  if ((lVar3 != 0) && (lVar2 = *(long *)(param_1 + 0x30), lVar2 != 0)) {
    _objc_retain(lVar3);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(lVar2);
    _objc_release(uVar1);
    _objc_release(lVar3);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1052cc6bc; end: 1052cc6cb;  */

void FUN_1052cc6bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052cc6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1052cc6cc; end: 1052cc827; -[SCAudioSessionImpl updateProximityMonitoringForToken:configRequest:callbackPerformer:callback:] */

void FUN_1052cc6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b6e18;
  if ((param_5 != 0) || (param_6 == 0)) {
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010bff5560();
    _objc_release(param_3);
    uVar2 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1052cc828;
    puStack_70 = &UNK_11084e180;
    uStack_68 = param_1;
    _objc_retain(param_4);
    puStack_60 = puVar1;
    uStack_50 = param_4;
    _objc_retain(param_6);
    lStack_48 = param_6;
    _objc_retain(param_5);
    lStack_58 = param_5;
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_88);
    _objc_release(uVar2);
    _objc_release(lStack_58);
    _objc_release(lStack_48);
    _objc_release(puStack_60);
    _objc_release(uStack_50);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1052cc828; end: 1052cc8db;  */

void FUN_1052cc828(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb57a0();
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb57a0();
  if (iVar1 != iVar2) {
    func_0x00010bede280(*(undefined8 *)(param_1 + 0x20));
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if ((lVar4 != 0) && (lVar3 = *(long *)(param_1 + 0x30), lVar3 != 0)) {
    _objc_retain(lVar4);
    func_0x00010c0f7fc0(lVar3);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 1052cc8dc; end: 1052cc8e7;  */

void FUN_1052cc8dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052cc8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1052cc8e8; end: 1052ccbaf; -[SCAudioSessionImpl preferredOrFirstAvailableRouteType] */

undefined1 * FUN_1052cc8e8(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar8 = param_1;
  func_0x00010c106c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar8 != 0) {
    uVar8 = param_1;
    func_0x00010c106c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar8);
    _objc_release(uVar8);
  }
  uVar8 = param_1;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c066460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar8);
  uVar8 = 0;
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bf5fe60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c066460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010bf12720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    func_0x00010bf12720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,param_1);
    _objc_release(param_1);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar1);
  puVar6 = auStack_e8;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar9 = *plStack_120;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(puVar1);
        }
        uVar8 = *(ulong *)(lStack_128 + (long)puVar10 * 8);
        uVar2 = uVar8;
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar4 & 1) == 0) {
          uVar4 = uVar8;
          func_0x00010c104100();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = *(undefined8 **)PTR__AVAudioSessionPortBuiltInMic_11034cec8;
          uVar2 = uVar4;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          if ((uVar2 & 1) == 0) {
            uVar4 = uVar8;
            func_0x00010c104100();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = *(undefined8 **)PTR__AVAudioSessionPortHeadsetMic_11034cef0;
            uVar2 = uVar4;
            func_0x00010c0720c0();
            _objc_release(uVar4);
            puVar7 = (undefined1 *)0x3;
            if ((int)uVar2 == 0) {
              puVar7 = (undefined1 *)0x0;
            }
          }
          else {
            puVar7 = (undefined1 *)0x1;
          }
          goto LAB_1052ccb60;
        }
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar6 = auStack_e8;
      puVar3 = puVar1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      uVar2 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  puVar7 = (undefined1 *)0x0;
LAB_1052ccb60:
  _objc_release(puVar1);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1052ccbb0;
    uStack_160 = uVar8;
    uStack_158 = uVar2;
    puStack_150 = puVar7;
    puStack_148 = puVar1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    puVar1 = puVar3;
    func_0x00010c0f98a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_1052ccc80;
    puStack_180 = &UNK_11084a9e8;
    puStack_178 = puVar3;
    puStack_170 = (undefined1 *)puVar5;
    puStack_168 = puVar6;
    _objc_retain(puVar6);
    _objc_retain(puVar5);
    func_0x00010c0f7fc0(puVar1,param_2,&puStack_198);
    _objc_release(puVar1);
    _objc_release(puStack_168);
    _objc_release(puStack_170);
    _objc_release(puVar6);
    _objc_release(puVar5);
    return (undefined1 *)puVar5;
  }
  return puVar7;
}



/* Entry: 1052ccbb0; end: 1052ccc7f; -[SCAudioSessionImpl performApplyAudioRoute:completion:] */

void FUN_1052ccbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1052ccc80;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052ccc80; end: 1052cccc3;  */

void FUN_1052ccc80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdcdae0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001052cccb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    return;
  }
  return;
}



/* Entry: 1052cccc4; end: 1052ccd73; -[SCAudioSessionImpl _applyAudioRoute:] */

ulong FUN_1052cccc4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27dd80();
  if ((uVar1 < 2) || (uVar1 == 3)) {
    uVar1 = param_3;
    func_0x00010c065dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea6740(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  else if ((uVar1 == 2) && (uVar1 = param_1, func_0x00010be43e80(), (uVar1 & 1) == 0)) {
    func_0x00010be6eda0(param_1,param_2,1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1052ccd74; end: 1052ccec7; -[SCAudioSessionImpl _isSpeakerOn] */

long FUN_1052ccd74(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar6 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      lVar6 = 0;
LAB_1052cce84:
      _objc_release(lVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return lVar6;
      }
      ___stack_chk_fail();
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c0f0320();
      _objc_release(lVar2);
      return lVar6;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar3 = *(ulong *)(lVar7 * 8);
      func_0x00010c104100();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        lVar6 = 1;
        goto LAB_1052cce84;
      }
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar7);
    lVar6 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1052ccec8; end: 1052ccf27; -[SCAudioSessionImpl _overrideOutputAudioPortWithSpeaker:] */

undefined8 FUN_1052ccec8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f0320();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052ccf28; end: 1052ccf9b; -[SCAudioSessionImpl _setPreferredAudioInput:] */

undefined8 FUN_1052ccf28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1e0080();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052ccf9c; end: 1052cd1d3; -[SCAudioSessionImpl availableRoutes] */

void FUN_1052ccf9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf12720();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_f0;
  uVar9 = 0x10;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        uVar11 = *(ulong *)(lStack_128 + lVar12 * 8);
        uVar3 = uVar11;
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) {
          uVar3 = uVar11;
          func_0x00010c104100();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) goto LAB_1052cd0f8;
          func_0x00010c104100();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar11;
          func_0x00010c0720c0();
          _objc_release(uVar11);
          if ((uVar3 & 1) == 0) goto LAB_1052cd0f8;
        }
        else {
LAB_1052cd0f8:
          puVar5 = PTR_PTR_1126b6dc8;
          _objc_alloc(PTR_PTR_1126b6dc8);
          func_0x00010c040520();
          func_0x00010befa120(puVar1,param_2,puVar5);
          _objc_release(puVar5);
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar8 = auStack_f0;
      uVar9 = 0x10;
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,puVar8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126b6dc8;
  _objc_alloc();
  func_0x00010bfee380();
  puVar7 = puVar5;
  func_0x00010befa120(puVar1,param_2,puVar5);
  puVar6 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar5);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(uVar9);
    _objc_retain(puVar8);
    func_0x00010c272ec0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8a580(puVar1,param_2,puVar7,puVar8,uVar9);
    _objc_release(uVar9);
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1052cd1d4; end: 1052cd24f; -[SCAudioSessionImpl relinquishConfiguration:performer:completion:] */

void FUN_1052cd1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c272ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8a580(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052cd250; end: 1052cd507; -[SCAudioSessionImpl _releaseToken:callbackPerformer:callback:] */

void FUN_1052cd250(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) || (param_5 == 0)) {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052cd508; end: 1052cd517;  */

void FUN_1052cd508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052cd514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1052cd518; end: 1052cd557; -[SCAudioSessionImpl updateConfigurationIfNeeded] */

void FUN_1052cd518(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed59e0(param_1,param_2,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052cd558; end: 1052cd643; -[SCAudioSessionImpl _updateConfigurationIfNeededWithPerformer:callback:] */

void FUN_1052cd558(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) || (param_4 == 0)) {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052cd644; end: 1052cd6ff;  */

void FUN_1052cd644(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bed2460(uVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x30);
  if ((lVar3 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1052cd700;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar3);
    lStack_38 = lVar3;
    _objc_retain(uVar1);
    uStack_40 = uVar1;
    func_0x00010c0f7fc0(lVar2,param_2,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1052cd700; end: 1052cd70f;  */

void FUN_1052cd700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052cd70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1052cd710; end: 1052cd7b7; -[SCAudioSessionImpl performReactivateAudioSessionWithCompletion:] */

void FUN_1052cd710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1052cd7b8;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1052cd7b8; end: 1052cd887;  */

void FUN_1052cd7b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15fac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1624c0();
  _objc_retain(0);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15fac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c1624c0();
  _objc_retain(0);
  _objc_release(0);
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,(uint)uVar1 & (uint)uVar2);
  }
  _objc_release(0);
  return;
}



/* Entry: 1052cd888; end: 1052cd8c7; -[SCAudioSessionImpl _resumeFromBackground] */

void FUN_1052cd888(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010beb7100();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010beb7120(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c2847b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateConfigurationIfNeeded_11267ec10);
    return;
  }
  return;
}



/* Entry: 1052cd8c8; end: 1052cd8ef; -[SCAudioSessionImpl _shouldRouteBasedOnProximitySensor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1052cd8c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112720cb0);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1052cd8f0; end: 1052cd917; -[SCAudioSessionImpl _shouldUseCallingSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1052cd8f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112720ca8);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1052cd918; end: 1052cd93f; -[SCAudioSessionImpl _shouldUseCallKitSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1052cd918(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112720cac);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1052cd940; end: 1052cd967; -[SCAudioSessionImpl _shouldUseRecordingSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1052cd940(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112720ca4);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1052cd968; end: 1052cd98f; -[SCAudioSessionImpl _shouldUseVideoRecordingModeForRecordingSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1052cd968(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112720cbc);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1052cd990; end: 1052cd9b7; -[SCAudioSessionImpl _shouldUseVideoRecordingSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1052cd990(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112720cb8);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1052cd9b8; end: 1052cd9df; -[SCAudioSessionImpl _shouldUsePlaybackSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1052cd9b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112720c9c);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1052cd9e0; end: 1052cda07; -[SCAudioSessionImpl _shouldUsePlaybackMixWithOthersSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1052cd9e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112720ca0);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1052cda08; end: 1052cda2f; -[SCAudioSessionImpl _shouldInterruptCallingSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1052cda08(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112720cb4);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1052cda30; end: 1052cda3b; -[SCAudioSessionImpl _updateAVAudioSessionIfNeededWithShouldAutoRetry:] */

void FUN_1052cda30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed2450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateAVAudioSessionIfNeededWit_1125922b8,1,param_3);
  return;
}



/* Entry: 1052cda3c; end: 1052cdeaf; -[SCAudioSessionImpl _updateAVAudioSessionIfNeededWithDeactivation:shouldAutoRetry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cda3c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar5 = param_1;
  func_0x00010beb4360();
  if (((int)uVar5 != 0) && (lVar8 = (long)_DAT_112720cd4, (*(byte *)(param_1 + lVar8) & 1) == 0)) {
    uVar5 = param_1;
    func_0x00010bf287c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0fc60();
    _objc_release(uVar5);
    *(undefined1 *)(param_1 + lVar8) = 1;
  }
  uVar5 = param_1;
  func_0x00010beb7100();
  if ((((uVar5 & 1) != 0) || (uVar5 = param_1, func_0x00010beb7120(), (int)uVar5 != 0)) &&
     (uVar5 = param_1, func_0x00010beb4360(), (uVar5 & 1) == 0)) {
    uVar5 = param_1;
    func_0x00010beb7100();
    if ((uVar5 & 1) == 0) {
      uVar9 = 4;
      if (*(char *)(param_1 + (long)_DAT_112720cd8) == '\0') {
        uVar9 = 7;
      }
    }
    else {
      uVar9 = 0;
    }
    uVar4 = *(undefined8 *)PTR__AVAudioSessionModeVoiceChat_11034ce88;
    _objc_retain(uVar4);
    uVar2 = param_1;
    func_0x00010beb7540();
    uVar7 = uVar4;
    if ((int)uVar2 != 0) {
      uVar7 = *(undefined8 *)PTR__AVAudioSessionModeVideoRecording_11034ce80;
      _objc_retain(uVar7);
      _objc_release(uVar4);
      uVar9 = uVar9 | 3;
    }
    uVar2 = param_1;
    func_0x00010beb7540(param_1);
    uVar3 = param_1;
    func_0x00010bed2420(param_1,param_2,
                        *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_11034ce30,uVar9,
                        uVar7,uVar5,uVar2,(uint)uVar5 ^ 1,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112720cd4;
    if (*(char *)(param_1 + lVar8) == '\x01') {
      uVar5 = param_1;
      func_0x00010bf287c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0fcc0();
      _objc_release(uVar5);
      *(undefined1 *)(param_1 + lVar8) = 0;
    }
    _objc_release(uVar7);
    goto LAB_1052cde78;
  }
  uVar5 = param_1;
  func_0x00010beb4360();
  if (((uVar5 & 1) == 0) && (lVar8 = (long)_DAT_112720cd4, *(char *)(param_1 + lVar8) == '\x01')) {
    uVar5 = param_1;
    func_0x00010bf287c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0fcc0();
    _objc_release(uVar5);
    *(undefined1 *)(param_1 + lVar8) = 0;
  }
  uVar5 = param_1;
  func_0x00010beb57a0();
  if ((int)uVar5 == 0) {
    uVar5 = param_1;
    func_0x00010beb7540();
    if ((int)uVar5 == 0) {
      uVar5 = param_1;
      func_0x00010beb73c0();
      if ((int)uVar5 == 0) {
        uVar5 = param_1;
        func_0x00010beb7380();
        if ((int)uVar5 == 0) {
          puVar1 = (undefined8 *)PTR__AVAudioSessionCategoryPlayback_11034ce38;
          if (*(char *)(param_1 + (long)_DAT_112720cc8) == '\0') {
            puVar1 = (undefined8 *)PTR__AVAudioSessionCategoryAmbient_11034ce28;
          }
          uVar4 = *puVar1;
          uVar6 = *(undefined8 *)PTR__AVAudioSessionModeDefault_11034ce78;
          uVar5 = 1;
          goto LAB_1052cde5c;
        }
        uVar5 = param_1;
        func_0x00010beb7360(param_1);
        uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayback_11034ce38;
        uVar5 = uVar5 & 0xffffffff;
        uVar6 = *(undefined8 *)PTR__AVAudioSessionModeDefault_11034ce78;
        param_3 = 0;
        uVar7 = 0;
      }
      else {
        uVar5 = param_1;
        func_0x00010beb7520();
        puVar1 = (undefined8 *)PTR__AVAudioSessionModeVideoRecording_11034ce80;
        if ((int)uVar5 == 0) {
          puVar1 = (undefined8 *)PTR__AVAudioSessionModeDefault_11034ce78;
        }
        uVar6 = *puVar1;
        uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_11034ce30;
        uVar5 = 0x29;
        uVar7 = param_3;
      }
    }
    else {
      uVar5 = 0x2c;
      if (*(char *)(param_1 + (long)_DAT_112720cd8) == '\0') {
        uVar5 = 0x2f;
      }
      uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_11034ce30;
      uVar6 = *(undefined8 *)PTR__AVAudioSessionModeVideoRecording_11034ce80;
      uVar7 = 1;
    }
  }
  else {
    uVar5 = param_1;
    func_0x00010c119ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c252440();
    _objc_release(uVar5);
    if ((int)uVar9 == 0) {
      uVar5 = param_1;
      func_0x00010beb7540();
      if ((int)uVar5 == 0) {
        uVar5 = param_1;
        func_0x00010beb73c0();
        if ((int)uVar5 == 0) {
          uVar5 = param_1;
          func_0x00010beb7380();
          uVar6 = *(undefined8 *)PTR__AVAudioSessionModeDefault_11034ce78;
          if ((int)uVar5 == 0) {
            uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryAmbient_11034ce28;
            uVar5 = 1;
          }
          else {
            uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayback_11034ce38;
            uVar5 = 0;
          }
        }
        else {
          uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_11034ce30;
          uVar6 = *(undefined8 *)PTR__AVAudioSessionModeVoiceChat_11034ce88;
          uVar5 = 0x2c;
        }
        goto LAB_1052cdb68;
      }
      uVar5 = 0x2c;
      if (*(char *)(param_1 + (long)_DAT_112720cd8) == '\0') {
        uVar5 = 0x2f;
      }
      uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_11034ce30;
      uVar6 = *(undefined8 *)PTR__AVAudioSessionModeVideoRecording_11034ce80;
LAB_1052cde5c:
      uVar7 = 1;
    }
    else {
      uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_11034ce30;
      uVar6 = *(undefined8 *)PTR__AVAudioSessionModeVoiceChat_11034ce88;
      uVar5 = 0x24;
LAB_1052cdb68:
      uVar7 = 0;
    }
    param_3 = 1;
  }
  func_0x00010bed2420(param_1,param_2,uVar4,uVar5,uVar6,0,uVar7,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
LAB_1052cde78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1052cdeb0; end: 1052cebef; -[SCAudioSessionImpl _updateAVAudioSessionCategory:categoryOptions:mode:setModeExplicitly:deactivating:activating:shouldAutoRetry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cdeb0(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,int param_6,int param_7,int param_8,char param_9)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  *(long *)((long)param_1 + (long)_DAT_112720cdc) =
       *(long *)((long)param_1 + (long)_DAT_112720cdc) + 1;
  ppuVar2 = param_1;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf33240();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar3;
  func_0x00010c0720c0();
  if ((int)ppuVar15 == 0) {
    bVar1 = true;
  }
  else {
    ppuVar15 = param_1;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar15;
    func_0x00010bf33580();
    bVar1 = ppuVar4 != param_4;
    _objc_release(ppuVar15);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0cfd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar3;
  func_0x00010c0720c0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  lVar14 = (long)_DAT_112720ce0;
  if ((((param_7 == param_8) && ((*(byte *)((long)param_1 + lVar14) & 1) == 0)) && (!bVar1)) &&
     ((int)ppuVar15 != 0)) {
    puVar13 = (undefined *)0x0;
    goto LAB_1052ceba0;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)((long)param_1 + lVar14) = 0;
  if (param_7 == 0) {
LAB_1052ce324:
    ppuVar8 = *(undefined ***)PTR__AVAudioSessionModeDefault_11034ce78;
    if (param_6 == 0) {
      ppuVar8 = param_5;
    }
    _objc_retain(ppuVar8);
    ppuVar2 = param_1;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c17a0a0();
    ppuVar15 = (undefined **)0x0;
    _objc_retain(0);
    _objc_release(0);
    _objc_release(ppuVar2);
    if (((ulong)ppuVar3 & 1) == 0) {
      ppuStack_118 = &PTR____CFConstantStringClassReference_110dcf698;
      ppuStack_150 = &PTR____CFConstantStringClassReference_110dad058;
      ppuStack_148 = &PTR____CFConstantStringClassReference_110dcf618;
      ppuVar2 = param_1;
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010bf33240();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_110 = &PTR____CFConstantStringClassReference_110dcf238;
      if (ppuVar3 != (undefined **)0x0) {
        ppuStack_110 = ppuVar3;
      }
      ppuStack_108 = &PTR____CFConstantStringClassReference_110dcf238;
      if (param_3 != (undefined **)0x0) {
        ppuStack_108 = param_3;
      }
      ppuStack_140 = &PTR____CFConstantStringClassReference_110dcf638;
      ppuStack_138 = &PTR____CFConstantStringClassReference_110dcef38;
      ppuVar4 = param_1;
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar4;
      func_0x00010bf33240();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_100 = &PTR____CFConstantStringClassReference_110dcf238;
      if (ppuVar6 != (undefined **)0x0) {
        ppuStack_100 = ppuVar6;
      }
      ppuStack_130 = &PTR____CFConstantStringClassReference_110dcf2b8;
      ppuVar7 = param_1;
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar7;
      func_0x00010c0cfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110dcf238;
      if (ppuVar9 != (undefined **)0x0) {
        ppuStack_f8 = ppuVar9;
      }
      ppuStack_128 = &PTR____CFConstantStringClassReference_110db0dd8;
      ppuVar10 = ppuVar15;
      func_0x00010bf3ec40(0);
      func_0x00010c0df780(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_120 = &PTR____CFConstantStringClassReference_110daeeb8;
      puStack_f0 = puVar13;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110dcf238;
      if (ppuVar15 != (undefined **)0x0) {
        ppuStack_e8 = ppuVar15;
      }
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_118,
                          &ppuStack_150,7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      _objc_release(puVar13);
      _objc_release(ppuVar9);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      func_0x00010c1d0640(puVar5,param_2,puVar11,&PTR____CFConstantStringClassReference_110dcf698);
      _objc_release(puVar11);
    }
    if (param_6 != 0) {
      ppuVar2 = param_1;
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010c1c8c80();
      ppuVar15 = (undefined **)0x0;
      _objc_retain(0);
      _objc_release(0);
      _objc_release(ppuVar2);
      if (((ulong)ppuVar3 & 1) == 0) {
        ppuStack_188 = &PTR____CFConstantStringClassReference_110dcf6b8;
        ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dad058;
        ppuStack_1b8 = &PTR____CFConstantStringClassReference_110dcf618;
        ppuVar2 = param_1;
        func_0x00010c15fac0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010c0cfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_180 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar3 != (undefined **)0x0) {
          ppuStack_180 = ppuVar3;
        }
        ppuStack_178 = &PTR____CFConstantStringClassReference_110dcf238;
        if (param_5 != (undefined **)0x0) {
          ppuStack_178 = param_5;
        }
        ppuStack_1b0 = &PTR____CFConstantStringClassReference_110dcf638;
        ppuStack_1a8 = &PTR____CFConstantStringClassReference_110dcef38;
        ppuVar4 = param_1;
        func_0x00010c15fac0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar4;
        func_0x00010bf33240();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_170 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar6 != (undefined **)0x0) {
          ppuStack_170 = ppuVar6;
        }
        ppuStack_1a0 = &PTR____CFConstantStringClassReference_110dcf2b8;
        ppuVar7 = param_1;
        func_0x00010c15fac0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar7;
        func_0x00010c0cfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_168 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar9 != (undefined **)0x0) {
          ppuStack_168 = ppuVar9;
        }
        ppuStack_198 = &PTR____CFConstantStringClassReference_110db0dd8;
        ppuVar10 = ppuVar15;
        func_0x00010bf3ec40(0);
        func_0x00010c0df780(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_190 = &PTR____CFConstantStringClassReference_110daeeb8;
        puStack_160 = puVar13;
        func_0x00010bf6e340();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_158 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar15 != (undefined **)0x0) {
          ppuStack_158 = ppuVar15;
        }
        puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_188,
                            &ppuStack_1c0,7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
        _objc_release(puVar13);
        _objc_release(ppuVar9);
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        func_0x00010c1d0640(puVar5,param_2,puVar11,&PTR____CFConstantStringClassReference_110dcf6b8)
        ;
        _objc_release(puVar11);
      }
    }
    if (param_8 != 0) {
      ppuVar2 = param_1;
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010c1624c0();
      ppuVar15 = (undefined **)0x0;
      _objc_retain(0);
      _objc_release(0);
      _objc_release(ppuVar2);
      if (((ulong)ppuVar3 & 1) == 0) {
        ppuStack_230 = &PTR____CFConstantStringClassReference_110dad058;
        ppuStack_228 = &PTR____CFConstantStringClassReference_110dcf618;
        ppuStack_1f8 = &PTR____CFConstantStringClassReference_110dcf5f8;
        ppuStack_1f0 = &PTR____CFConstantStringClassReference_110daf6b8;
        ppuStack_1e8 = &PTR____CFConstantStringClassReference_110dcf6d8;
        ppuStack_220 = &PTR____CFConstantStringClassReference_110dcf638;
        ppuStack_218 = &PTR____CFConstantStringClassReference_110dcef38;
        ppuVar2 = param_1;
        func_0x00010c15fac0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010bf33240();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1e0 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar3 != (undefined **)0x0) {
          ppuStack_1e0 = ppuVar3;
        }
        ppuStack_210 = &PTR____CFConstantStringClassReference_110dcf2b8;
        ppuVar4 = param_1;
        func_0x00010c15fac0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar4;
        func_0x00010c0cfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar6 != (undefined **)0x0) {
          ppuStack_1d8 = ppuVar6;
        }
        ppuStack_208 = &PTR____CFConstantStringClassReference_110db0dd8;
        ppuVar7 = ppuVar15;
        func_0x00010bf3ec40(0);
        func_0x00010c0df780(puVar13,param_2,ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_200 = &PTR____CFConstantStringClassReference_110daeeb8;
        puStack_1d0 = puVar13;
        func_0x00010bf6e340();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar15 != (undefined **)0x0) {
          ppuStack_1c8 = ppuVar15;
        }
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_1f8,
                            &ppuStack_230,7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
        _objc_release(puVar13);
        _objc_release(ppuVar6);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        func_0x00010c1d0640(puVar5,param_2,ppuVar7,&PTR____CFConstantStringClassReference_110dcf5f8)
        ;
        *(undefined1 *)((long)param_1 + lVar14) = 1;
      }
      else {
        if (param_3 == (undefined **)0x0) {
          ppuVar2 = param_1;
          func_0x00010c15fac0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
          func_0x00010bf33240();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = &PTR____CFConstantStringClassReference_110dcf238;
          if (ppuVar3 != (undefined **)0x0) {
            ppuVar7 = ppuVar3;
          }
          _objc_retain(ppuVar7);
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
        }
        else {
          _objc_retain(param_3);
          ppuVar7 = param_3;
        }
        if (param_5 == (undefined **)0x0) {
          ppuVar3 = param_1;
          func_0x00010c15fac0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar3;
          func_0x00010c0cfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = &PTR____CFConstantStringClassReference_110dcf238;
          if (ppuVar15 != (undefined **)0x0) {
            ppuVar2 = ppuVar15;
          }
          _objc_retain(ppuVar2);
          _objc_release(ppuVar15);
          _objc_release(ppuVar3);
        }
        else {
          _objc_retain(param_5);
          ppuVar2 = param_5;
        }
        ppuVar3 = param_1;
        func_0x00010c0dbd20(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_250 = &PTR____CFConstantStringClassReference_110f78cf8;
        ppuStack_248 = &PTR____CFConstantStringClassReference_110f78d18;
        puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuStack_240 = ppuVar7;
        ppuStack_238 = ppuVar2;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_240,
                            &ppuStack_250,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1049a0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110f1f8b8,param_1
                            ,puVar13);
        _objc_release(puVar13);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
      }
      _objc_release(ppuVar7);
    }
    puVar13 = puVar5;
    func_0x00010bf529e0();
    if (puVar13 != (undefined *)0x0) {
      if (param_9 != '\0') {
        func_0x00010be9ada0(param_1,param_2,0);
        func_0x00010bec0a00(param_1);
      }
      uVar12 = 3;
      goto LAB_1052ceb54;
    }
    func_0x00010bec3320(param_1);
    if (param_8 != 0) {
      func_0x00010bfb4b20(param_1);
    }
    puVar13 = (undefined *)0x0;
  }
  else {
    ppuVar2 = param_1;
    func_0x00010c0dbd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104980();
    _objc_release(ppuVar2);
    ppuVar2 = param_1;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c162500();
    ppuVar15 = (undefined **)0x0;
    _objc_retain(0);
    _objc_release(ppuVar2);
    if (((ulong)ppuVar3 & 1) != 0) goto LAB_1052ce324;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110dcf618;
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110dcf5f8;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110daf6b8;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110dcf658;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110dcf638;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110dcef38;
    ppuVar2 = param_1;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf33240();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dcf238;
    if (ppuVar3 != (undefined **)0x0) {
      ppuStack_90 = ppuVar3;
    }
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110dcf2b8;
    ppuVar4 = param_1;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x00010c0cfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dcf238;
    if (ppuVar6 != (undefined **)0x0) {
      ppuStack_88 = ppuVar6;
    }
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110db0dd8;
    ppuVar7 = ppuVar15;
    func_0x00010bf3ec40(0);
    func_0x00010c0df780(puVar13,param_2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110daeeb8;
    ppuVar7 = ppuVar15;
    puStack_80 = puVar13;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dcf238;
    if (ppuVar7 != (undefined **)0x0) {
      ppuStack_78 = ppuVar7;
    }
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_a8,&ppuStack_e0,7
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(puVar13);
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    func_0x00010bf3ec40();
    if (((ppuVar15 != (undefined **)0x21616374) ||
        (ppuVar2 = param_1, func_0x00010c079600(), (int)ppuVar2 == 0)) ||
       (param_3 == *(undefined ***)PTR__AVAudioSessionCategoryPlayAndRecord_11034ce30)) {
      func_0x00010c1d0640(puVar5,param_2,ppuVar8,&PTR____CFConstantStringClassReference_110dcf678);
      _objc_release(ppuVar8);
      goto LAB_1052ce324;
    }
    if (param_9 != '\0') {
      func_0x00010c0f98a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fe0(0x3fc99999a0000000);
      _objc_release(param_1);
    }
    func_0x00010c1d0640(puVar5,param_2,ppuVar8,&PTR____CFConstantStringClassReference_110dcf678);
    uVar12 = 1;
LAB_1052ceb54:
    puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110dcf598,uVar12,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar8);
  _objc_release(puVar5);
  _objc_release(0);
LAB_1052ceba0:
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010bed2460(param_3[4],param_2,*(undefined1 *)(param_3 + 5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1052cebf0; end: 1052cec17;  */

void FUN_1052cebf0(long param_1,undefined8 param_2)

{
  func_0x00010bed2460(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1052cec18; end: 1052cecaf; -[SCAudioSessionImpl _scheduleAVAudioSessionUpdateRetry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cec18(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fe0(0x3fc999999999999a);
  _objc_release(param_1);
  return;
}



/* Entry: 1052cecb0; end: 1052ced07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cecb0(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010bfb4b20(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112720cdc) == *(long *)(param_1 + 0x28)) {
    func_0x00010bed2460(*(long *)(param_1 + 0x20),param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1052ced08; end: 1052ced2f; -[SCAudioSessionImpl _updateProximityMonitoringStatus] */

void FUN_1052ced08(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beb57a0();
                    /* WARNING: Could not recover jumptable at 0x00010c1e5430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setProximityMonitoringEnabled__112656f30,uVar1);
  return;
}



/* Entry: 1052ced30; end: 1052cedc3; -[SCAudioSessionImpl _startObservingCallStateChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052ced30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112720ce4;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___CXCallObserver_1126b6e20;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  lVar5 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b640(lVar4,param_2,param_1,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1052cedc4; end: 1052cede3; -[SCAudioSessionImpl _stopObservingCallStateChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cedc4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112720ce4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c18b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112720ce4),PTR_s_setDelegate_queue__1126407b0,0,0);
    return;
  }
  return;
}



/* Entry: 1052cede4; end: 1052cee1f; -[SCAudioSessionImpl callObserver:callChanged:] */

void FUN_1052cede4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x00010bfd6ae0();
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__scheduleAVAudioSessionUpdateRet_112584510,1);
    return;
  }
  return;
}



/* Entry: 1052cee20; end: 1052cee4f; -[SCAudioSessionImpl playbackTokens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cee20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720c9c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052cee50; end: 1052cee7f; -[SCAudioSessionImpl recordTokens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cee50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720ca4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052cee80; end: 1052ceeaf; -[SCAudioSessionImpl videoRecordTokens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cee80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720cb8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052ceeb0; end: 1052ceedf; -[SCAudioSessionImpl callingTokens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052ceeb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720ca8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052ceee0; end: 1052cef0f; -[SCAudioSessionImpl callKitTokens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052ceee0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720cac);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052cef10; end: 1052cef3f; -[SCAudioSessionImpl proximityRoutingTokens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cef10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720cb0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052cef40; end: 1052cef6f; -[SCAudioSessionImpl tokenSets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cef40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720cc0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052cef70; end: 1052cef7f; -[SCAudioSessionImpl setCallingAvoidMixingExternalAudio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cef70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112720cd8) = param_3;
  return;
}



/* Entry: 1052cef80; end: 1052cf0fb; -[SCAudioSessionImpl onAVAudioSessionInterruption:] */

void FUN_1052cef80(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_onAVAudioSessionInterruption__1125289a8;
  ppuVar5 = &puStack_80;
  puStack_48 = PTR_PTR_1126e74d8;
  uStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_50,puVar1,param_3);
  uVar2 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c067fc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1052cf0fc;
  puStack_68 = &UNK_110848c48;
  uStack_60 = param_1;
  uStack_58 = param_2;
  _objc_retainBlock(&puStack_80);
  uVar2 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c2827c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (uVar4 == 0 && (uVar6 & 1) != 0) {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(param_1);
  }
  _objc_release(ppuVar5);
  return;
}



/* Entry: 1052cf0fc; end: 1052cf1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cf0fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bed2460(*(undefined8 *)(param_1 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112720c9c);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112720ca4);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112720cb8);
      func_0x00010bf529e0();
      if (lVar1 == 0) {
        lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112720cb0);
        func_0x00010bf529e0();
        if (lVar1 == 0) {
          return;
        }
      }
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15fac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1624c0();
  _objc_retain(0);
  _objc_release(uVar2);
  _objc_release(0);
  return;
}



/* Entry: 1052cf1d4; end: 1052cf2a7; -[SCAudioSessionImpl onAVAudioSessionMediaServicesWereLost:] */

void FUN_1052cf1d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e74d8;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_onAVAudioSessionMediaServicesWer_1125289b0);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed59e0(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 1052cf2a8; end: 1052cf37b; -[SCAudioSessionImpl onAVAudioSessionMediaServicesWereReset:] */

void FUN_1052cf2a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e74d8;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_onAVAudioSessionMediaServicesWer_1125289b8);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed59e0(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 1052cf37c; end: 1052cf427; -[SCAudioSessionImpl proximityDevice:onProximityStateChange:] */

void FUN_1052cf37c(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e74d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_proximityDevice_onProximityState_112624160);
  uVar1 = param_1;
  func_0x00010beb7120();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010beb7100(), (uVar1 & 1) == 0)) {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1052cf428; end: 1052cf44b;  */

void FUN_1052cf428(long param_1,undefined8 param_2)

{
  func_0x00010bed2460(*(undefined8 *)(param_1 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1052cf44c; end: 1052cf533; -[SCAudioSessionImpl debugInfoWithUploadInfoCompletion:] */

void FUN_1052cf44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1052cf534;
  puStack_50 = &UNK_110875fd0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  puStack_70 = PTR_PTR_1126e74d8;
  uStack_78 = param_1;
  uStack_48 = param_3;
  _objc_msgSendSuper2(&uStack_78,PTR_s_debugInfoWithUploadInfoCompletio_1125b7238,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1052cf534; end: 1052cf63b;  */

void FUN_1052cf534(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c0f98a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(lVar2);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1052cf63c; end: 1052cf85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cf63c(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d3c80(uVar1);
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (uVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    _objc_opt_isKindOfClass(uVar4,puVar5);
    if ((uVar4 & 1) != 0) {
      puVar5 = *(undefined **)(param_1 + 0x20);
      _objc_retain(puVar5);
      goto LAB_1052cf6a8;
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
LAB_1052cf6a8:
  _objc_release(uVar1);
  func_0x00010bf070e0(puVar5);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1052cf85c;
  puStack_40 = &UNK_110875fa0;
  _objc_retain(puVar5);
  ppuVar2 = &puStack_58;
  puStack_38 = puVar5;
  _objc_retainBlock();
  (*(code *)ppuVar2[2])();
  (*(code *)ppuVar2[2])
            (ppuVar2,&PTR____CFConstantStringClassReference_110dcf758,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112720ca0));
  (*(code *)ppuVar2[2])
            (ppuVar2,&PTR____CFConstantStringClassReference_110dcf778,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112720ca4));
  (*(code *)ppuVar2[2])
            (ppuVar2,&PTR____CFConstantStringClassReference_110dcf798,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112720cb8));
  (*(code *)ppuVar2[2])
            (ppuVar2,&PTR____CFConstantStringClassReference_110dc8458,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112720ca8));
  (*(code *)ppuVar2[2])
            (ppuVar2,&PTR____CFConstantStringClassReference_110dcf7b8,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112720cac));
  (*(code *)ppuVar2[2])
            (ppuVar2,&PTR____CFConstantStringClassReference_110dcf7d8,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112720cb0));
  (*(code *)ppuVar2[2])
            (ppuVar2,&PTR____CFConstantStringClassReference_110dcf7f8,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112720cb4));
  func_0x00010bf070e0(puVar5);
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))
              (lVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(ppuVar2);
  _objc_release(puStack_38);
  _objc_release(puVar5);
  return;
}



/* Entry: 1052cf85c; end: 1052cf933;  */

void FUN_1052cf85c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bf06ba0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_3;
  func_0x00010bf529e0();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    func_0x00010bf070e0(uVar3);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf00560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010bf070e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052cf934; end: 1052cf96f; -[SCAudioSessionImpl applicationWillEnterForeground] */

void FUN_1052cf934(undefined8 param_1)

{
  func_0x00010be95cc0();
  func_0x00010c119ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052cf970; end: 1052cf97f; -[SCAudioSessionImpl lastRecordingRequestDebugInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1052cf970(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112720ce8);
}



/* Entry: 1052cf980; end: 1052cf9bf; -[SCAudioSessionImpl setLastRecordingRequestDebugInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cf980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112720ce8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052cf9c0; end: 1052cf9ff; -[SCAudioSessionImpl setHiddenVolumeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cf9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112720ccc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052cfa00; end: 1052cfa13; -[SCAudioSessionImpl setHiddenVolumeSlider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cfa00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112720cd0,param_3);
  return;
}



/* Entry: 1052cfa14; end: 1052cfb0f; -[SCAudioSessionImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cfa14(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112720cd0);
  _objc_storeStrong(param_1 + _DAT_112720ccc,0);
  _objc_storeStrong(param_1 + _DAT_112720ce8,0);
  _objc_storeStrong(param_1 + _DAT_112720ce4,0);
  _objc_storeStrong(param_1 + _DAT_112720cc0,0);
  _objc_storeStrong(param_1 + _DAT_112720cbc,0);
  _objc_storeStrong(param_1 + _DAT_112720cb8,0);
  _objc_storeStrong(param_1 + _DAT_112720cb4,0);
  _objc_storeStrong(param_1 + _DAT_112720cb0,0);
  _objc_storeStrong(param_1 + _DAT_112720cac,0);
  _objc_storeStrong(param_1 + _DAT_112720ca8,0);
  _objc_storeStrong(param_1 + _DAT_112720ca4,0);
  _objc_storeStrong(param_1 + _DAT_112720ca0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720c9c,0);
  return;
}



/* Entry: 1052cfb10; end: 1052cfbb3; -[SCAudioSessionTalkConfigurationMakerImpl initWithAudioSession:token:] */

undefined1 *
FUN_1052cfb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e74e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052cfbb4; end: 1052cfbef; -[SCAudioSessionTalkConfigurationMakerImpl requestPlayback] */

void FUN_1052cfbb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c100580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052cfbf0; end: 1052cfc2b; -[SCAudioSessionTalkConfigurationMakerImpl releasePlayback] */

void FUN_1052cfbf0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c100580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052cfc2c; end: 1052cfc67; -[SCAudioSessionTalkConfigurationMakerImpl requestRecording] */

void FUN_1052cfc2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c123b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052cfc68; end: 1052cfca3; -[SCAudioSessionTalkConfigurationMakerImpl releaseRecording] */

void FUN_1052cfc68(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c123b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052cfca4; end: 1052cfcf7; -[SCAudioSessionTalkConfigurationMakerImpl requestCallingWithAvoidExternalAudioMixing:] */

void FUN_1052cfca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf288e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c175c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCallingAvoidMixingExternalAud_11263b138,param_3);
  return;
}



/* Entry: 1052cfcf8; end: 1052cfd3f; -[SCAudioSessionTalkConfigurationMakerImpl releaseCalling] */

void FUN_1052cfcf8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf288e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c175c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCallingAvoidMixingExternalAud_11263b138,0);
  return;
}



/* Entry: 1052cfd40; end: 1052cfdaf; -[SCAudioSessionTalkConfigurationMakerImpl requestCallKit] */

void FUN_1052cfd40(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf28060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1052cfdb0; end: 1052cfe1f; -[SCAudioSessionTalkConfigurationMakerImpl releaseCallKit] */

void FUN_1052cfdb0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf28060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1052cfe20; end: 1052cfe5b; -[SCAudioSessionTalkConfigurationMakerImpl requestProximityRouting] */

void FUN_1052cfe20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c119d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052cfe5c; end: 1052cfe97; -[SCAudioSessionTalkConfigurationMakerImpl releaseProximityRouting] */

void FUN_1052cfe5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c119d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052cfe98; end: 1052cff93; -[SCAudioSessionTalkConfigurationMakerImpl releaseAll] */

void FUN_1052cfe98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c273220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c12d360(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
  return;
}



/* Entry: 1052cff94; end: 1052cffc3; -[SCAudioSessionTalkConfigurationMakerImpl .cxx_destruct] */

void FUN_1052cff94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052cffc4; end: 1052d005b; -[SCProximityDevice applicationWillEnterForeground] */

void FUN_1052cffc4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if ((int)lVar1 != 0) {
    func_0x00010c209fc0(param_1);
    uVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      lVar1 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c252440(param_1);
      func_0x00010c119d00(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1052d005c; end: 1052d00f7; -[SCProximityDevice _onUIDeviceProximityStateChanged:] */

void FUN_1052d005c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x00010c252440();
  func_0x00010c119d40(*(undefined8 *)(param_1 + 8));
  func_0x00010c209fc0(param_1);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c252440(param_1);
    func_0x00010c119d00(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1052d00f8; end: 1052d01c3; -[SCProximityDevice updateProximityMonitoringStatus:performer:completeHandler:] */

void FUN_1052d00f8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1052d01c4;
  puStack_70 = &UNK_110875f40;
  uStack_68 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_2;
  uStack_48 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1052d01c4; end: 1052d021f;  */

void FUN_1052d01c4(long param_1,undefined8 param_2)

{
  func_0x00010c1e5420(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,
                      *(undefined1 *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010c119d40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  }
  func_0x00010c209fc0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0f7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_perform__11261ba10,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1052d0220; end: 1052d0237; -[SCProximityDevice delegate] */

void FUN_1052d0220(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052d0238; end: 1052d023f; -[SCProximityDevice state] */

undefined1 FUN_1052d0238(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1052d0240; end: 1052d0247; -[SCProximityDevice setState:] */

void FUN_1052d0240(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1052d0248; end: 1052d027f; -[SCProximityDevice .cxx_destruct] */

void FUN_1052d0248(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052d0280; end: 1052d0297;  */

void FUN_1052d0280(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcf818;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dcf818,
                      &PTR____CFConstantStringClassReference_110dcf838,0);
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



/* Entry: 1052d0298; end: 1052d02c3; +[SCGrapheneCremaServerMetric webServer] */

void FUN_1052d0298(void)

{
  _objc_alloc(PTR_PTR_1126b6e28);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052d02c4; end: 1052d02ef; +[SCGrapheneCremaServerMetric backdoor] */

void FUN_1052d02c4(void)

{
  _objc_alloc(PTR_PTR_1126b6e28);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


