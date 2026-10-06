/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b101cc; end: 106b1034b; -[SCLensProcessingURIServiceVoiceMLHandler _handleGetTweaksWithRequest:completion:] */

void FUN_106b101cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_106b12344();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1ce0;
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar4;
  func_0x00010c059e80();
  _objc_release(uVar4);
  (**(code **)(param_4 + 0x10))(param_4,puVar3);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  uVar4 = uVar6;
  func_0x00010bf1e9c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar3);
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00010c0d9840(*(undefined8 *)(puVar2 + 0x28));
  }
  _objc_release(puVar1);
  _objc_release(0);
  _objc_release(uVar6);
  return;
}



/* Entry: 106b1034c; end: 106b1043f; -[SCLensProcessingURIServiceVoiceMLHandler _handleVoiceActivityUpdateWithRequest:] */

void FUN_106b1034c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  uVar1 = param_3;
  func_0x00010bf1e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar2);
  _objc_release(0);
  _objc_release(param_3);
  return;
}



/* Entry: 106b10440; end: 106b105ef; -[SCLensProcessingURIServiceVoiceMLHandler _handleVoiceCommandsWithRequest:] */

void FUN_106b10440(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_3;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = param_3;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c08fa60();
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    if (ppuVar3 != (undefined **)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      ppuVar1 = param_3;
      func_0x00010bf1e9c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar1;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      ppuVar2 = param_3;
      func_0x00010bf1e9c0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = ppuVar2;
      func_0x00010c08fa60();
      func_0x00010bffa180();
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
      if ((puVar7 != (undefined *)0x0) &&
         (puVar5 = puVar7, func_0x00010c08fa60(), puVar5 != (undefined *)0x0)) {
        puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x00010bf68fa0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_58 = &PTR____CFConstantStringClassReference_110dc9758;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_50 = puVar7;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,
                            &ppuStack_58,1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110dc97b8;
        param_4 = (undefined **)0x0;
        func_0x00010c1049a0(puVar5);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      _objc_release(puVar7);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  puVar7 = param_3[3];
  param_3[3] = (undefined *)ppuVar4;
  _objc_retain(ppuVar4);
  _objc_retain(param_4);
  _objc_release(puVar7);
  ppuVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puVar7 = param_3[4];
  param_3[4] = (undefined *)ppuVar1;
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 106b105f0; end: 106b10667; -[SCLensProcessingURIServiceVoiceMLHandler _handleGetListeningStateWithRequest:completion:] */

void FUN_106b105f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b10668; end: 106b106db; -[SCLensProcessingURIServiceVoiceMLHandler voiceListeningStateChanged:] */

void FUN_106b10668(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf1f3c0(lVar1);
    func_0x00010be652c0(param_1,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b106dc; end: 106b10843; -[SCLensProcessingURIServiceVoiceMLHandler _notifyVoiceListeningStateChanged:] */

void FUN_106b106dc(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    puVar1 = PTR____kCFBooleanTrue_11034ab68;
    if ((int)param_3 == 0) {
      puVar1 = PTR____kCFBooleanFalse_11034ab60;
    }
    _objc_retain(puVar1);
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    lVar5 = *(long *)(param_1 + 0x18);
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar5;
    func_0x00010c059e80(puVar4);
    _objc_release(lVar5);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar4);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_1 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = lVar7;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if ((lVar5 != 0) && (lVar6 != 0)) {
    func_0x00010be89b00(param_1);
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106b10844; end: 106b1090b; -[SCLensProcessingURIServiceVoiceMLHandler registerToVoiceActivityUpdates:] */

void FUN_106b10844(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010c0dff20(lVar1,param_2,&PTR____CFConstantStringClassReference_110dc9558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    func_0x00010be89b00(param_1,param_2,lVar2,lVar3);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b1090c; end: 106b1097f; -[SCLensProcessingURIServiceVoiceMLHandler _registerObserverForVoiceActivityUpdates:activityUpdatesBlock:] */

void FUN_106b1090c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010c25ff60(lVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106b10980; end: 106b109d3; -[SCLensProcessingURIServiceVoiceMLHandler .cxx_destruct] */

void FUN_106b10980(long param_1)

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



/* Entry: 106b109d4; end: 106b10f3f; -[SCLensURIKeyboardAccessoryView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106b109d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126f4f00;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b0ac8;
    _objc_alloc_init();
    lVar13 = (long)_DAT_1127582e8;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar10);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befbb60(puVar1);
    puVar3 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar13);
    puStack_b0 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar10;
    func_0x00010bf493c0(0xc022000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    puStack_c0 = puVar3;
    puStack_98 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar13);
    puStack_c8 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar10;
    func_0x00010bf493c0(0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_90 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c274200(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493c0(0xc022000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    puStack_88 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010bf1ff80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493c0(0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef79e0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar10);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uStack_d0);
    _objc_release(puStack_c8);
    _objc_release(puStack_c0);
    _objc_release(uStack_b8);
    _objc_release(puStack_b0);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar2);
    func_0x00010c2131e0(0x4020000000000000,0x402e000000000000,0x4020000000000000,0x402e000000000000,
                        *(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar2);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befa220(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = 0x4043800000000000;
    uVar10 = uVar7;
    func_0x00010bf49420(0x4043800000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127582ec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127582ec) = uVar10;
    _objc_release(uVar11);
    _objc_release(uVar7);
    func_0x00010bef7980(*(undefined8 *)((long)puVar1 + lVar13));
    unaff_x20 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar13));
    _CGRectGetWidth();
    uVar10 = uVar14;
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar13));
    _CGRectGetHeight();
    func_0x00010c013de0(0,0,uVar14,uVar10);
    puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193d20(unaff_x20);
    _objc_release(puVar2);
    lVar12 = (long)_DAT_1127582f0;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = unaff_x20;
    _objc_retain(unaff_x20);
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_1127582f4;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010bf199e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar2);
    uVar10 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar10);
    func_0x00010c066fa0(puVar1);
    puVar2 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_100;
  pcStack_d8 = FUN_106b10f40;
  puStack_f0 = unaff_x20;
  puStack_e8 = puVar1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010c12d580(*(undefined8 *)(puVar2 + _DAT_1127582e8));
  puStack_f8 = PTR_PTR_1126f4f00;
  puStack_100 = puVar2;
  _objc_msgSendSuper2(&puStack_100,PTR_s_dealloc_112525b20);
  return ppuVar9;
}



/* Entry: 106b10f40; end: 106b10f9b; -[SCLensURIKeyboardAccessoryView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b10f40(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12d580(*(undefined8 *)(param_1 + _DAT_1127582e8),param_2,param_1,
                      &PTR____CFConstantStringClassReference_110dbf1d8);
  puStack_28 = PTR_PTR_1126f4f00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106b10f9c; end: 106b10fd3; -[SCLensURIKeyboardAccessoryView subscribeOnTextChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b10f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127582f8);
  *(undefined8 *)(param_1 + _DAT_1127582f8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b10fd4; end: 106b11147; -[SCLensURIKeyboardAccessoryView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b10fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f4f00;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar4 = (long)_DAT_1127582f4;
  if ((*(long *)(param_5 + lVar4) != 0) &&
     (lVar3 = (long)_DAT_1127582f0, *(long *)(param_5 + lVar3) != 0)) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_1127582e8));
    uVar1 = *(ulong *)(param_5 + lVar3);
    uVar5 = param_1;
    uVar6 = param_2;
    uVar7 = param_3;
    uVar8 = param_4;
    func_0x00010bfb68e0();
    _CGRectEqualToRect();
    if ((uVar1 & 1) == 0) {
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar3));
      uVar5 = param_1;
      uVar6 = param_2;
      uVar7 = param_3;
      uVar8 = param_4;
    }
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
    uVar1 = *(ulong *)(param_5 + lVar4);
    func_0x00010bfb68e0();
    _CGRectEqualToRect();
    if ((uVar1 & 1) == 0) {
      func_0x00010c19f0e0(uVar5,uVar6,uVar7,uVar8,*(undefined8 *)(param_5 + lVar4));
      puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf199e0(uVar5,uVar6,uVar7,uVar8,0x4033800000000000,0x4033800000000000,
                          PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc1040();
      func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar4));
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 106b11148; end: 106b11197; -[SCLensURIKeyboardAccessoryView textUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b11148(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127582e8);
  func_0x00010c073040();
  if (iVar1 != 0) {
    if (*(long *)(param_1 + _DAT_1127582f8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106b11188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + _DAT_1127582f8) + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 106b11198; end: 106b112eb; -[SCLensURIKeyboardAccessoryView observeValueForKeyPath:ofObject:change:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b11198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_5);
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf1d8);
  if ((int)param_3 != 0) {
    lVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_2,*(undefined8 *)PTR__NSKeyValueChangeKindKey_1103454f8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2827c0();
    _objc_release(lVar1);
    if (lVar2 == 1) {
      lVar1 = param_5;
      func_0x00010c0e00e0(param_5,param_2,*(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        lVar3 = param_5;
        func_0x00010c0e00e0(param_5,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        if ((lVar5 != 0) && (*(long *)(param_1 + _DAT_1127582f8) != 0)) {
          (**(code **)(*(long *)(param_1 + _DAT_1127582f8) + 0x10))();
        }
      }
      else {
        _objc_release(lVar2);
        _objc_release(lVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106b112ec; end: 106b112fb; -[SCLensURIKeyboardAccessoryView textView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b112ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127582e8);
}



/* Entry: 106b112fc; end: 106b1133b; -[SCLensURIKeyboardAccessoryView setTextView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b112fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127582e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b1133c; end: 106b1134b; -[SCLensURIKeyboardAccessoryView preferredHeightConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b1133c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127582ec);
}



/* Entry: 106b1134c; end: 106b1138b; -[SCLensURIKeyboardAccessoryView setPreferredHeightConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b1134c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127582ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b1138c; end: 106b1139b; -[SCLensURIKeyboardAccessoryView textChangedBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b1138c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127582f8);
}



/* Entry: 106b1139c; end: 106b113a7; -[SCLensURIKeyboardAccessoryView setTextChangedBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b1139c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b113a8; end: 106b11417; -[SCLensURIKeyboardAccessoryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b113a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127582f8,0);
  _objc_storeStrong(param_1 + _DAT_1127582ec,0);
  _objc_storeStrong(param_1 + _DAT_1127582e8,0);
  _objc_storeStrong(param_1 + _DAT_1127582f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127582f4,0);
  return;
}



/* Entry: 106b11418; end: 106b114e3; -[SCLensProcessingURIServiceSaveTextureGalleryWorkerImpl initWithSnapSaver:memories:featureSettingsService:] */

undefined1 *
FUN_106b11418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4f08;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b114e4; end: 106b117f3; -[SCLensProcessingURIServiceSaveTextureGalleryWorkerImpl saveImageAtPath:completion:] */

void FUN_106b114e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x3032000000;
    pcStack_80 = FUN_106b117f4;
    uStack_78 = 0x106b11804;
    uStack_70 = 0;
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_106b117f4;
    uStack_a8 = 0x106b11804;
    uStack_a0 = 0;
    _dispatch_group_create();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9380();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar3 = puVar2;
    _UIImageJPEGRepresentation(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x000108e00d3c();
    _objc_release(uVar5);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)uVar6 == 0) {
      uVar5 = 0;
    }
    else {
      _dispatch_group_enter(lVar1);
      puStack_f8 = puVar3;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_106b1180c;
      puStack_e0 = &UNK_1108646c8;
      puStack_d0 = &uStack_98;
      _objc_retain(lVar1);
      lStack_d8 = lVar1;
      func_0x00010be99320(param_1);
      _objc_release(lStack_d8);
      uVar5 = 2;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x000108e00cf8();
    _objc_release(uVar7);
    if ((int)uVar8 != 0) {
      _dispatch_group_enter(lVar1);
      puStack_128 = puVar3;
      uStack_120 = 0xc2000000;
      uStack_118 = 0x106b11868;
      puStack_110 = &UNK_1108646c8;
      puStack_100 = &uStack_c8;
      _objc_retain(lVar1);
      lStack_108 = lVar1;
      func_0x00010be992e0(param_1);
      uVar5 = 3;
      if ((int)uVar6 == 0) {
        uVar5 = 1;
      }
      _objc_release(lStack_108);
    }
    puStack_168 = puVar3;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_106b118c4;
    puStack_150 = &UNK_110961240;
    puStack_140 = &uStack_98;
    puStack_138 = &uStack_c8;
    _objc_retain(param_4);
    lStack_148 = param_4;
    uStack_130 = uVar5;
    func_0x000100bc0718(lVar1,PTR___dispatch_main_q_11034be20,&puStack_168);
    _objc_release(lStack_148);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(lVar1);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uStack_70);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b117f4; end: 106b1180b;  */

void FUN_106b117f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106b1180c; end: 106b118c3;  */

void FUN_106b1180c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b118c4; end: 106b11907;  */

void FUN_106b118c4(long param_1)

{
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000106b11904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000106b118f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106b11908; end: 106b1199f; -[SCLensProcessingURIServiceSaveTextureGalleryWorkerImpl _saveImageToCameraRoll:completion:] */

void FUN_106b11908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b119a0;
  puStack_40 = &UNK_110859a38;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c14ae40(uVar1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106b119a0; end: 106b119ab;  */

void FUN_106b119a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106b119a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106b119ac; end: 106b11bdb; -[SCLensProcessingURIServiceSaveTextureGalleryWorkerImpl _saveImageToMemories:completion:] */

void FUN_106b119ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_5);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0xffffffffa9fc90cc;
  func_0x00010b77c6b4(0xffffffffa9fc90cc);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bfe8380();
  func_0x00010bf2a7e0(PTR_PTR_1126b6600);
  uVar5 = 0;
  func_0x000108dfcd80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2220;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560(puVar6,param_3,&PTR____CFConstantStringClassReference_110ec3458,
                      &PTR____CFConstantStringClassReference_110e72d78,puVar7,0,0,0,0);
  _objc_retain(param_5);
  func_0x00010befa860(param_1,uVar8,param_3,param_4,0,uVar1,3,0,0,puVar2,puVar3,uVar4,0,uVar5,0,0,0)
  ;
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(param_5);
  _objc_release(param_5);
  return;
}



/* Entry: 106b11bdc; end: 106b11beb;  */

void FUN_106b11bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106b11be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 106b11bec; end: 106b11c27; -[SCLensProcessingURIServiceSaveTextureGalleryWorkerImpl .cxx_destruct] */

void FUN_106b11bec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b11c28; end: 106b11d23; -[SCLensProcessingURIServiceSaveTextureHandler initWithGalleryWorker:logger:performer:fileManager:] */

undefined1 *
FUN_106b11c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4f10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b11d24; end: 106b11e03; -[SCLensProcessingURIServiceSaveTextureHandler initWithGalleryWorker:logger:] */

undefined8
FUN_106b11d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2,param_2,0x19,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0173e0(param_1,param_2,param_3,param_4,puVar2,puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return param_1;
}



/* Entry: 106b11e04; end: 106b12237; -[SCLensProcessingURIServiceSaveTextureHandler handleWithRequest:completion:] */

void FUN_106b11e04(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c135e00();
  if (uVar1 != 1) {
    uVar1 = param_3;
    func_0x00010c069c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,uVar1);
    goto LAB_106b11f9c;
  }
  uVar2 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_3;
  if (uVar2 == 2) {
    uVar2 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) goto LAB_106b11f64;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(param_4);
  }
  else {
LAB_106b11f64:
    func_0x00010bf98ee0(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,uVar3);
  }
  _objc_release(uVar3);
LAB_106b11f9c:
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b12238; end: 106b1223b; -[SCLensProcessingURIServiceSaveTextureHandler reset] */

void FUN_106b12238(void)

{
  return;
}



/* Entry: 106b1223c; end: 106b122e7; -[SCLensProcessingURIServiceSaveTextureHandler .cxx_destruct] */

void FUN_106b1223c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b122e8; end: 106b12343;  */

undefined8 FUN_106b122e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010901d430();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010901ccf8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106b12284();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106b12344; end: 106b1234f;  */

void FUN_106b12344(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8398,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 106b12350; end: 106b123b7; +[SCLensUserLocationInfo descriptor] */

void FUN_106b12350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c66c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b157f0,
                        &PTR____CFConstantStringClassReference_110e72df8,
                        &PTR_s_snapchat_lenses_113171178,&PTR_DAT_1131711b0,4,0x28,0x1c);
    puRam00000001136c66c8 = puVar1;
  }
  return;
}



/* Entry: 106b123b8; end: 106b1241f; +[SCLensUserLocationInfoRequest descriptor] */

void FUN_106b123b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c66d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15840,
                        &PTR____CFConstantStringClassReference_110e72e18,
                        &PTR_s_snapchat_lenses_113171178,&PTR_s_userId_113171190,1,0x10,0x1c);
    puRam00000001136c66d0 = puVar1;
  }
  return;
}



/* Entry: 106b12420; end: 106b12487; +[SCLensUserGroupData descriptor] */

void FUN_106b12420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c66d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b158e0,
                        &PTR____CFConstantStringClassReference_110e72e38,
                        &PTR_s_snapchat_lenses_113171230,&PTR_s_id_p_113171268,5,0x28,0x1c);
    puRam00000001136c66d8 = puVar1;
  }
  return;
}



/* Entry: 106b12488; end: 106b124ef; +[SCLensUserGroupDataList descriptor] */

void FUN_106b12488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c66e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15930,
                        &PTR____CFConstantStringClassReference_110e72e58,
                        &PTR_s_snapchat_lenses_113171230,&PTR_DAT_113171248,1,0x10,0x1c);
    puRam00000001136c66e0 = puVar1;
  }
  return;
}



/* Entry: 106b124f0; end: 106b12593; -[SCConnectedLensInTalkServices initWithDelegate:connectedLensInTalkService:] */

undefined1 *
FUN_106b124f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4f18;
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



/* Entry: 106b12594; end: 106b1259b; -[SCConnectedLensInTalkServices delegate] */

undefined8 FUN_106b12594(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b1259c; end: 106b125a3; -[SCConnectedLensInTalkServices connectedLensInTalkService] */

undefined8 FUN_106b1259c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b125a4; end: 106b1264f; -[SCConnectedLensInTalkServices .cxx_destruct] */

void FUN_106b125a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b12650; end: 106b1265b;  */

bool FUN_106b12650(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106b1265c; end: 106b126d7;  */

undefined * FUN_106b1265c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c66f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e72e98,
                        &UNK_10dde5a20,&UNK_10dde5a44,3,FUN_106b126d8,0);
    do {
      if (puRam00000001136c66f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c66f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c66f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c66f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c66f0;
}



/* Entry: 106b126d8; end: 106b126e3;  */

bool FUN_106b126d8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106b126e4; end: 106b1275f;  */

undefined * FUN_106b126e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c66f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e72eb8,
                        &UNK_10dde5a50,&UNK_10dde5a64,3,FUN_106b12760,0);
    do {
      if (puRam00000001136c66f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c66f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c66f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c66f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c66f8;
}



/* Entry: 106b12760; end: 106b1276b;  */

bool FUN_106b12760(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106b1276c; end: 106b127e7;  */

undefined * FUN_106b1276c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6700 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e72ed8,
                        &UNK_10dde5a70,&UNK_10dde5a90,2,FUN_106b127e8,0);
    do {
      if (puRam00000001136c6700 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6700;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6700,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6700 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6700;
}



/* Entry: 106b127e8; end: 106b127f3;  */

bool FUN_106b127e8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106b127f4; end: 106b1286f; +[SCGamesLeaderboardsClientLeaderboard descriptor] */

undefined * FUN_106b127f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15a20,
                        &PTR____CFConstantStringClassReference_110e72ef8,&PTR_DAT_113171310,
                        &PTR_s_id_p_113171ac8,7,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c6708 = puVar1;
  }
  return puRam00000001136c6708;
}



/* Entry: 106b12870; end: 106b128d7; +[SCGamesLeaderboardsClientLeaderboardRecord descriptor] */

void FUN_106b12870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15a70,
                        &PTR____CFConstantStringClassReference_110e72f18,&PTR_DAT_113171310,
                        &PTR_s_userId_113171ca8,9,0x48,0x1c);
    puRam00000001136c6710 = puVar1;
  }
  return;
}



/* Entry: 106b128d8; end: 106b12963; +[SCGamesLeaderboardsScoreVisibility descriptor] */

undefined * FUN_106b128d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15ac0,
                        &PTR____CFConstantStringClassReference_110e00a78,&PTR_DAT_113171310,
                        &PTR_s_appId_1131715c8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c6718 = puVar1;
  }
  return puRam00000001136c6718;
}



/* Entry: 106b12964; end: 106b129cb; +[SCGamesLeaderboardsGlobalLeaderboardOptIn descriptor] */

void FUN_106b12964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15b10,
                        &PTR____CFConstantStringClassReference_110e72f38,&PTR_DAT_113171310,
                        &PTR_DAT_113171328,1,8,0x1c);
    puRam00000001136c6720 = puVar1;
  }
  return;
}



/* Entry: 106b129cc; end: 106b12a33; +[SCGamesLeaderboardsGetOptInStatusRequest descriptor] */

void FUN_106b129cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15b60,
                        &PTR____CFConstantStringClassReference_110e72f58,&PTR_DAT_113171310,0,0,4,
                        0x1c);
    puRam00000001136c6728 = puVar1;
  }
  return;
}



/* Entry: 106b12a34; end: 106b12a9b; +[SCGamesLeaderboardsGetOptInStatusResponse descriptor] */

void FUN_106b12a34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15bb0,
                        &PTR____CFConstantStringClassReference_110e72f78,&PTR_DAT_113171310,
                        &PTR_DAT_113171348,1,0x10,0x1c);
    puRam00000001136c6730 = puVar1;
  }
  return;
}



/* Entry: 106b12a9c; end: 106b12b03; +[SCGamesLeaderboardsSetOptInStatusRequest descriptor] */

void FUN_106b12a9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15c00,
                        &PTR____CFConstantStringClassReference_110e72f98,&PTR_DAT_113171310,
                        &PTR_DAT_113171368,1,0x10,0x1c);
    puRam00000001136c6738 = puVar1;
  }
  return;
}



/* Entry: 106b12b04; end: 106b12b6b; +[SCGamesLeaderboardsSetOptInStatusResponse descriptor] */

void FUN_106b12b04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15c50,
                        &PTR____CFConstantStringClassReference_110e72fb8,&PTR_DAT_113171310,0,0,4,
                        0x1c);
    puRam00000001136c6740 = puVar1;
  }
  return;
}



/* Entry: 106b12b6c; end: 106b12bd3; +[SCGamesLeaderboardsClientSubmitScoreRequest descriptor] */

void FUN_106b12b6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15ca0,
                        &PTR____CFConstantStringClassReference_110e72fd8,&PTR_DAT_113171310,
                        &PTR_DAT_113171ba8,8,0x38,0x1c);
    puRam00000001136c6748 = puVar1;
  }
  return;
}



/* Entry: 106b12bd4; end: 106b12c3b; +[SCGamesLeaderboardsClientSubmitScoreResponse descriptor] */

void FUN_106b12bd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15cf0,
                        &PTR____CFConstantStringClassReference_110e72ff8,&PTR_DAT_113171310,
                        &PTR_s_score_113171628,3,0x20,0x1c);
    puRam00000001136c6750 = puVar1;
  }
  return;
}



/* Entry: 106b12c3c; end: 106b12ca3; +[SCGamesLeaderboardsGetClientLeaderboardRequest descriptor] */

void FUN_106b12c3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15d40,
                        &PTR____CFConstantStringClassReference_110e73018,&PTR_DAT_113171310,
                        &PTR_DAT_113171508,2,0x10,0x1c);
    puRam00000001136c6758 = puVar1;
  }
  return;
}



/* Entry: 106b12ca4; end: 106b12d0b; +[SCGamesLeaderboardsGetClientLeaderboardResponse descriptor] */

void FUN_106b12ca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15d90,
                        &PTR____CFConstantStringClassReference_110e73038,&PTR_DAT_113171310,
                        &PTR_DAT_113171388,1,0x10,0x1c);
    puRam00000001136c6760 = puVar1;
  }
  return;
}



/* Entry: 106b12d0c; end: 106b12d73; +[SCGamesLeaderboardsListFriendLeaderboardEntriesRequest descriptor] */

void FUN_106b12d0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15de0,
                        &PTR____CFConstantStringClassReference_110e009f8,&PTR_DAT_113171310,
                        &PTR_DAT_113171928,4,0x18,0x1c);
    puRam00000001136c6768 = puVar1;
  }
  return;
}



/* Entry: 106b12d74; end: 106b12ddb; +[SCGamesLeaderboardsListFriendLeaderboardEntriesResponse descriptor] */

void FUN_106b12d74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15e30,
                        &PTR____CFConstantStringClassReference_110e00a18,&PTR_DAT_113171310,
                        &PTR_DAT_113171688,3,0x18,0x1c);
    puRam00000001136c6770 = puVar1;
  }
  return;
}



/* Entry: 106b12ddc; end: 106b12e43; +[SCGamesLeaderboardsSetScoreVisibilityRequest descriptor] */

void FUN_106b12ddc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15e80,
                        &PTR____CFConstantStringClassReference_110e00a98,&PTR_DAT_113171310,
                        &PTR_DAT_1131713a8,1,0x10,0x1c);
    puRam00000001136c6778 = puVar1;
  }
  return;
}



/* Entry: 106b12e44; end: 106b12eab; +[SCGamesLeaderboardsSetScoreVisibilityResponse descriptor] */

void FUN_106b12e44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15ed0,
                        &PTR____CFConstantStringClassReference_110e00ab8,&PTR_DAT_113171310,
                        &PTR_DAT_1131713c8,1,0x10,0x1c);
    puRam00000001136c6780 = puVar1;
  }
  return;
}



/* Entry: 106b12eac; end: 106b12f13; +[SCGamesLeaderboardsGetScoreVisibilitiesRequest descriptor] */

void FUN_106b12eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15f20,
                        &PTR____CFConstantStringClassReference_110e00ad8,&PTR_DAT_113171310,
                        &PTR_s_appId_1131713e8,1,0x10,0x1c);
    puRam00000001136c6788 = puVar1;
  }
  return;
}



/* Entry: 106b12f14; end: 106b12f7b; +[SCGamesLeaderboardsGetScoreVisibilitiesResponse descriptor] */

void FUN_106b12f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15f70,
                        &PTR____CFConstantStringClassReference_110e00af8,&PTR_DAT_113171310,
                        &PTR_DAT_113171408,1,0x10,0x1c);
    puRam00000001136c6790 = puVar1;
  }
  return;
}



/* Entry: 106b12f7c; end: 106b12fe3; +[SCGamesLeaderboardsBatchGetLeaderboardEntriesRequest descriptor] */

void FUN_106b12f7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b15fc0,
                        &PTR____CFConstantStringClassReference_110e00b18,&PTR_DAT_113171310,
                        &PTR_DAT_1131716e8,3,0x18,0x1c);
    puRam00000001136c6798 = puVar1;
  }
  return;
}



/* Entry: 106b12fe4; end: 106b1304b; +[SCGamesLeaderboardsBatchGetLeaderboardEntriesResponse descriptor] */

void FUN_106b12fe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16010,
                        &PTR____CFConstantStringClassReference_110e00b38,&PTR_DAT_113171310,
                        &PTR_DAT_113171428,1,0x10,0x1c);
    puRam00000001136c67a0 = puVar1;
  }
  return;
}



/* Entry: 106b1304c; end: 106b130b3; +[SCGamesLeaderboardsGetLeaderboardTopScoresRequest descriptor] */

void FUN_106b1304c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16060,
                        &PTR____CFConstantStringClassReference_110e73058,&PTR_DAT_113171310,
                        &PTR_DAT_1131719a8,4,0x18,0x1c);
    puRam00000001136c67a8 = puVar1;
  }
  return;
}



/* Entry: 106b130b4; end: 106b1311b; +[SCGamesLeaderboardsGetLeaderboardTopScoresResponse descriptor] */

void FUN_106b130b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b160b0,
                        &PTR____CFConstantStringClassReference_110e73078,&PTR_DAT_113171310,
                        &PTR_DAT_113171548,2,0x18,0x1c);
    puRam00000001136c67b0 = puVar1;
  }
  return;
}



/* Entry: 106b1311c; end: 106b13183; +[SCGamesLeaderboardsGetEligibleLeaderboardNotificationsRequest descriptor] */

void FUN_106b1311c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16100,
                        &PTR____CFConstantStringClassReference_110e73098,&PTR_DAT_113171310,
                        &PTR_s_userId_113171a28,5,0x28,0x1c);
    puRam00000001136c67b8 = puVar1;
  }
  return;
}



/* Entry: 106b13184; end: 106b131eb; +[SCGamesLeaderboardsGetEligibleLeaderboardNotificationsResponse descriptor] */

void FUN_106b13184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16150,
                        &PTR____CFConstantStringClassReference_110e730b8,&PTR_DAT_113171310,
                        &PTR_DAT_113171448,1,0x10,0x1c);
    puRam00000001136c67c0 = puVar1;
  }
  return;
}



/* Entry: 106b131ec; end: 106b13267; +[SCGamesLeaderboardsGetEligibleLeaderboardNotificationsResponse_Recipient descriptor] */

undefined * FUN_106b131ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b161a0,
                        &PTR____CFConstantStringClassReference_110e730d8,&PTR_DAT_113171310,
                        &PTR_DAT_113171588,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c67c8 = puVar1;
  }
  return puRam00000001136c67c8;
}



/* Entry: 106b13268; end: 106b132cf; +[SCGamesLeaderboardsDeleteScoreRequest descriptor] */

void FUN_106b13268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b161f0,
                        &PTR____CFConstantStringClassReference_110e730f8,&PTR_DAT_113171310,
                        &PTR_DAT_113171468,1,0x10,0x1c);
    puRam00000001136c67d0 = puVar1;
  }
  return;
}



/* Entry: 106b132d0; end: 106b13337; +[SCGamesLeaderboardsDeleteScoreResponse descriptor] */

void FUN_106b132d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16240,
                        &PTR____CFConstantStringClassReference_110e73118,&PTR_DAT_113171310,0,0,4,
                        0x1c);
    puRam00000001136c67d8 = puVar1;
  }
  return;
}



/* Entry: 106b13338; end: 106b1339f; +[SCGamesLeaderboardsDeleteUserLensDataRequest descriptor] */

void FUN_106b13338(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16290,
                        &PTR____CFConstantStringClassReference_110e73138,&PTR_DAT_113171310,
                        &PTR_s_lensIdsArray_113171488,1,0x10,0x1c);
    puRam00000001136c67e0 = puVar1;
  }
  return;
}



/* Entry: 106b133a0; end: 106b13407; +[SCGamesLeaderboardsDeleteUserLensDataResponse descriptor] */

void FUN_106b133a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b162e0,
                        &PTR____CFConstantStringClassReference_110e73158,&PTR_DAT_113171310,0,0,4,
                        0x1c);
    puRam00000001136c67e8 = puVar1;
  }
  return;
}



/* Entry: 106b13408; end: 106b1346f; +[SCGamesLeaderboardsDeleteAllUserDataRequest descriptor] */

void FUN_106b13408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16330,
                        &PTR____CFConstantStringClassReference_110e73178,&PTR_DAT_113171310,
                        &PTR_s_userIdsArray_1131714a8,1,0x10,0x1c);
    puRam00000001136c67f0 = puVar1;
  }
  return;
}



/* Entry: 106b13470; end: 106b134d7; +[SCGamesLeaderboardsDeleteAllUserDataResponse descriptor] */

void FUN_106b13470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c67f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16380,
                        &PTR____CFConstantStringClassReference_110e73198,&PTR_DAT_113171310,0,0,4,
                        0x1c);
    puRam00000001136c67f8 = puVar1;
  }
  return;
}



/* Entry: 106b134d8; end: 106b1353f; +[SCGamesLeaderboardsSendLeaderboardNotificationsRequest descriptor] */

void FUN_106b134d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b163d0,
                        &PTR____CFConstantStringClassReference_110e731b8,&PTR_DAT_113171310,
                        &PTR_s_lensId_113171748,3,0x20,0x1c);
    puRam00000001136c6800 = puVar1;
  }
  return;
}



/* Entry: 106b13540; end: 106b135a7; +[SCGamesLeaderboardsSendLeaderboardNotificationsResponse descriptor] */

void FUN_106b13540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16420,
                        &PTR____CFConstantStringClassReference_110e731d8,&PTR_DAT_113171310,0,0,4,
                        0x1c);
    puRam00000001136c6808 = puVar1;
  }
  return;
}



/* Entry: 106b135a8; end: 106b1360f; +[SCGamesLeaderboardsGetClientLeaderboardV2Request descriptor] */

void FUN_106b135a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16470,
                        &PTR____CFConstantStringClassReference_110e731f8,&PTR_DAT_113171310,
                        &PTR_s_lensId_1131714c8,1,0x10,0x1c);
    puRam00000001136c6810 = puVar1;
  }
  return;
}



/* Entry: 106b13610; end: 106b13677; +[SCGamesLeaderboardsGetClientLeaderboardV2Response descriptor] */

void FUN_106b13610(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b164c0,
                        &PTR____CFConstantStringClassReference_110e73218,&PTR_DAT_113171310,
                        &PTR_DAT_1131714e8,1,0x10,0x1c);
    puRam00000001136c6818 = puVar1;
  }
  return;
}



/* Entry: 106b13678; end: 106b136df; +[SCGamesLeaderboardsListFriendLeaderboardEntriesV2Request descriptor] */

void FUN_106b13678(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6820 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16510,
                        &PTR____CFConstantStringClassReference_110e73238,&PTR_DAT_113171310,
                        &PTR_s_lensId_1131717a8,3,0x10,0x1c);
    puRam00000001136c6820 = puVar1;
  }
  return;
}



/* Entry: 106b136e0; end: 106b13747; +[SCGamesLeaderboardsListFriendLeaderboardEntriesV2Response descriptor] */

void FUN_106b136e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6828 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16560,
                        &PTR____CFConstantStringClassReference_110e73258,&PTR_DAT_113171310,
                        &PTR_DAT_113171808,3,0x18,0x1c);
    puRam00000001136c6828 = puVar1;
  }
  return;
}



/* Entry: 106b13748; end: 106b137af; +[SCGamesLeaderboardsGetLeaderboardTopScoresV2Request descriptor] */

void FUN_106b13748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b165b0,
                        &PTR____CFConstantStringClassReference_110e73278,&PTR_DAT_113171310,
                        &PTR_s_lensId_113171868,3,0x10,0x1c);
    puRam00000001136c6830 = puVar1;
  }
  return;
}



/* Entry: 106b137b0; end: 106b13817; +[SCGamesLeaderboardsGetLeaderboardTopScoresV2Response descriptor] */

void FUN_106b137b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6838 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16600,
                        &PTR____CFConstantStringClassReference_110e73298,&PTR_DAT_113171310,
                        &PTR_DAT_1131718c8,3,0x20,0x1c);
    puRam00000001136c6838 = puVar1;
  }
  return;
}



/* Entry: 106b13818; end: 106b13933; -[SCLensesCollectionModularCameraUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b13818(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_112758328);
  }
  lVar6 = (long)_DAT_112758320;
  _objc_retain(uVar7);
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar6);
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112758324;
    _objc_loadWeakRetained(lVar1);
  }
  lVar2 = lVar1;
  func_0x00010c131e40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf16600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d6ca0();
  lVar5 = lVar6;
  func_0x00010bf238e0(lVar6,param_2,5,0,0,8,2,lVar4,4,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar7,param_2,lVar5);
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 106b13934; end: 106b1397b; -[SCLensesCollectionModularCameraUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b13934(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758328,0);
  _objc_destroyWeak(param_1 + _DAT_112758320);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758324);
  return;
}



/* Entry: 106b1397c; end: 106b13983; -[SCRealTimeScanLoggingServices logger] */

undefined8 FUN_106b1397c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b13984; end: 106b1398b; -[SCRealTimeScanLoggingServices verticalToolbarLogger] */

undefined8 FUN_106b13984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b1398c; end: 106b139bb; -[SCRealTimeScanLoggingServices .cxx_destruct] */

void FUN_106b1398c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b139bc; end: 106b139c7; -[SCMainCameraScopedRealTimeScanLoggingServices .cxx_destruct] */

void FUN_106b139bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b139c8; end: 106b13b73;  */

void FUN_106b139c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc1b8;
  func_0x000106b13ab0(PTR_PTR_1126bc1b8,param_2,param_3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


