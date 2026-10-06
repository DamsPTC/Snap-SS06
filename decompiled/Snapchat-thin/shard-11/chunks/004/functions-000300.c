/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085badfc; end: 1085bae07; -[SCTalkChatSessionImpl convoId] */

void FUN_1085badfc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xa0,1);
  return;
}



/* Entry: 1085bae08; end: 1085bae13; -[SCTalkChatSessionImpl presenceSession] */

void FUN_1085bae08(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xa8,1);
  return;
}



/* Entry: 1085bae14; end: 1085bae1b; -[SCTalkChatSessionImpl setPresenceSession:] */

void FUN_1085bae14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1085bae1c; end: 1085baf17; -[SCTalkChatSessionImpl .cxx_destruct] */

void FUN_1085bae1c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085baf18; end: 1085bb207; -[SCTalkChatUIController initWithConvoId:delegate:chatServices:identityServices:] */

undefined8 *
FUN_1085baf18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126fcf20;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar5 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar5);
    _objc_storeWeak(puVar1 + 4,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_initWeak(auStack_88,puVar1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1085bb208;
    puStack_98 = &UNK_11084d688;
    _objc_copyWeak(auStack_90,auStack_88);
    ppuVar3 = &puStack_b0;
    _objc_retainBlock(ppuVar3);
    puVar4 = PTR_PTR_1126da4a8;
    _objc_alloc();
    func_0x00010c050dc0();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar4;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c12a300();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar5);
    _objc_initWeak(auStack_b8,puVar1);
    uVar5 = puVar1[9];
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0e60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_b8);
    uVar2 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085bb208; end: 1085bb2cb;  */

void FUN_1085bb208(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    if (param_2 != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
  }
  else {
    func_0x00010be6e2e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bb2cc; end: 1085bb313; -[SCTalkChatUIController dealloc] */

void FUN_1085bb2cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x50));
  puStack_28 = PTR_PTR_1126fcf20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085bb314; end: 1085bb39f; -[SCTalkChatUIController requestUIReset] */

void FUN_1085bb314(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1085bb3a0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x00010c0f6120(param_1,param_2,&PTR____CFConstantStringClassReference_110ee4f58,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 1085bb3a0; end: 1085bb3a7;  */

void FUN_1085bb3a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_resetUI_11262c0d8);
  return;
}



/* Entry: 1085bb3a8; end: 1085bb3df; -[SCTalkChatUIController setPresenceBarAnimationsProvider:] */

void FUN_1085bb3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c136df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestUIUpdate_11262b598);
  return;
}



/* Entry: 1085bb3e0; end: 1085bb417; -[SCTalkChatUIController setTalkCorePresenceSessionState:] */

void FUN_1085bb3e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c136df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestUIUpdate_11262b598);
  return;
}



/* Entry: 1085bb418; end: 1085bb46b; -[SCTalkChatUIController pauseUIUpdates:completion:] */

void FUN_1085bb418(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  func_0x00010befa120(uVar1,param_2,param_3);
  func_0x00010c0f61e0(*(undefined8 *)(param_1 + 0x38),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085bb46c; end: 1085bb4ab; -[SCTalkChatUIController resumeUIUpdates:] */

void FUN_1085bb46c(long param_1)

{
  long lVar1;
  
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x40));
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c13d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_resume_11262ce90);
  return;
}



/* Entry: 1085bb4ac; end: 1085bb4b3; -[SCTalkChatUIController requestUIUpdate] */

void FUN_1085bb4ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_performOrSchedule_11261bd20);
  return;
}



/* Entry: 1085bb4b4; end: 1085bb4b7; -[SCTalkChatUIController setFullscreenModeIfPossible:] */

void FUN_1085bb4b4(void)

{
  return;
}



/* Entry: 1085bb4b8; end: 1085bb4bf; -[SCTalkChatUIController fullscreenMode] */

undefined8 FUN_1085bb4b8(void)

{
  return 0;
}



/* Entry: 1085bb4c0; end: 1085bb4c3; -[SCTalkChatUIController setExpandedLocalMediaModeIfPossible:] */

void FUN_1085bb4c0(void)

{
  return;
}



/* Entry: 1085bb4c4; end: 1085bb4cb; -[SCTalkChatUIController expandedLocalMediaMode] */

undefined8 FUN_1085bb4c4(void)

{
  return 0;
}



/* Entry: 1085bb4cc; end: 1085bb4cf; -[SCTalkChatUIController setLocalFullscreenModeIfPossible:] */

void FUN_1085bb4cc(void)

{
  return;
}



/* Entry: 1085bb4d0; end: 1085bb4d3; -[SCTalkChatUIController setAudioRouteMenuDisplayedIfNeeded:] */

void FUN_1085bb4d0(void)

{
  return;
}



/* Entry: 1085bb4d4; end: 1085bb95b; -[SCTalkChatUIController _createRemoteParticipanStatesWithRemoteParticiants:] */

void FUN_1085bb4d4(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long unaff_x20;
  long unaff_x21;
  undefined *unaff_x22;
  long lVar16;
  undefined *puVar17;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined *puStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  undefined1 uStack_288;
  undefined1 uStack_287;
  undefined1 uStack_286;
  undefined1 uStack_285;
  undefined8 uStack_280;
  undefined1 uStack_278;
  long lStack_268;
  long lStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined *puStack_248;
  long lStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    unaff_x22 = (undefined *)*puStack_1a0;
    do {
      lVar16 = 0;
      do {
        if ((undefined *)*puStack_1a0 != unaff_x22) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x20 = *(long *)(lStack_1a8 + lVar16 * 8);
        unaff_x21 = unaff_x20;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(unaff_x21);
        lVar16 = lVar16 + 1;
      } while (lVar8 != lVar16);
      lVar8 = param_3;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(param_3);
  puVar6 = *(undefined **)(param_1 + 0x28);
  func_0x00010c12a5e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_268 = param_3;
  func_0x0001085da194(param_3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  lStack_250 = param_3;
  _objc_release(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar8 = *(long *)(param_1 + 0x28);
  puStack_248 = puVar7;
  func_0x00010c12a5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = &uStack_1f0;
  lStack_260 = lVar8;
  func_0x00010bf52a60();
  lStack_238 = lVar8;
  if (lVar8 != 0) {
    lStack_240 = *plStack_1e0;
    puStack_258 = puVar5;
    do {
      unaff_x21 = 0;
      do {
        if (*plStack_1e0 != lStack_240) {
          _objc_enumerationMutation(lStack_260);
        }
        puVar17 = *(undefined **)(lStack_1e8 + unaff_x21 * 8);
        puVar6 = puVar17;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        if (puVar7 != (undefined *)0x0) {
          puVar5 = puVar17;
          func_0x00010c294c00();
          if ((((ulong)puVar5 & 1) == 0) &&
             (puVar5 = puVar17, func_0x00010c29f2a0(), ((ulong)puVar5 & 1) == 0)) {
            func_0x00010bfeb580(puVar17);
          }
          puVar5 = puVar17;
          func_0x00010c10d440();
          uStack_1f8 = 2;
          if ((int)puVar5 != 2) {
            uStack_1f8 = (ulong)((int)puVar5 == 1);
          }
          puVar5 = PTR_PTR_1126da480;
          _objc_alloc();
          puVar6 = puVar17;
          puStack_200 = puVar5;
          func_0x00010c27e300();
          uVar1 = (int)puVar6 - 1;
          lStack_208 = 0;
          if (uVar1 < 3) {
            lStack_208 = (ulong)uVar1 + 1;
          }
          puVar5 = puVar7;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar7;
          puStack_210 = puVar5;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar7;
          puStack_218 = puVar6;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar7;
          puStack_220 = puVar5;
          func_0x00010c10ac40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x22 = puVar7;
          puStack_228 = puVar6;
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c0fa800();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar17;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x20 = lStack_250;
          puStack_230 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar17;
          func_0x00010c079cc0();
          puVar10 = puVar17;
          func_0x00010c294c00();
          puVar11 = puVar17;
          func_0x00010c29f2a0();
          func_0x00010bfeb580();
          puVar12 = puVar7;
          func_0x00010c06bb80();
          puVar4 = puStack_210;
          puVar3 = puStack_218;
          puVar2 = puStack_220;
          puVar5 = puStack_228;
          uStack_278 = SUB81(puVar12,0);
          uStack_280 = 0;
          uStack_285 = SUB81(puVar17,0);
          uStack_286 = SUB81(puVar11,0);
          uStack_287 = SUB81(puVar10,0);
          uStack_288 = SUB81(puVar6,0);
          puVar6 = puStack_200;
          puStack_2a0 = unaff_x22;
          puStack_298 = puVar9;
          lStack_290 = unaff_x20;
          func_0x00010c056460();
          func_0x00010befa120(puStack_248);
          _objc_release(puVar6);
          _objc_release(unaff_x20);
          _objc_release(puStack_230);
          _objc_release(puVar9);
          _objc_release(unaff_x22);
          _objc_release(puVar5);
          _objc_release(puVar2);
          _objc_release(puVar3);
          _objc_release(puVar4);
          puVar5 = puStack_258;
        }
        _objc_release(puVar7);
        unaff_x21 = unaff_x21 + 1;
      } while (lStack_238 != unaff_x21);
      puVar14 = &uStack_1f0;
      lVar8 = lStack_260;
      func_0x00010bf52a60();
      lStack_238 = lVar8;
    } while (lVar8 != 0);
  }
  _objc_release(lStack_260);
  _objc_release(lStack_250);
  _objc_release(puVar5);
  lVar8 = lStack_268;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_248);
    return;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_1085bb95c;
  puStack_2d0 = unaff_x22;
  lStack_2c8 = unaff_x21;
  lStack_2c0 = unaff_x20;
  puStack_2b8 = puVar6;
  puStack_2b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar14);
  if (*(long *)(lVar8 + 0x28) == 0) {
    lVar16 = lVar8 + 0x20;
    _objc_loadWeakRetained();
    lVar13 = lVar16;
    func_0x00010bfc9020();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(lVar8 + 0x28);
    *(long *)(lVar8 + 0x28) = lVar13;
    _objc_release(uVar15);
    _objc_release(lVar16);
    if (*(long *)(lVar8 + 0x28) == 0) {
      (*(code *)puVar14[2])(puVar14,0);
      goto LAB_1085bbaa8;
    }
  }
  lVar16 = lVar8 + 0x18;
  _objc_loadWeakRetained();
  if (lVar16 == 0) {
    (*(code *)puVar14[2])(puVar14,0);
  }
  else if (*(long *)(lVar8 + 0x30) == 0) {
    _objc_initWeak(auStack_2d8,lVar8);
    _objc_copyWeak(auStack_2e0,auStack_2d8);
    _objc_retain(puVar14);
    func_0x00010c12a2c0(lVar16);
    _objc_release(puVar14);
    _objc_destroyWeak(auStack_2e0);
    _objc_destroyWeak(auStack_2d8);
  }
  else {
    func_0x00010bdf2480(lVar8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)puVar14[2])(puVar14,lVar8);
    _objc_release(lVar8);
  }
  _objc_release(lVar16);
LAB_1085bbaa8:
  _objc_release(puVar14);
  return;
}



/* Entry: 1085bb95c; end: 1085bbaf3; -[SCTalkChatUIController _getRemoteParticipantStatesWithCompletion:] */

void FUN_1085bb95c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bfc9020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    if (*(long *)(param_1 + 0x28) == 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
      goto LAB_1085bbaa8;
    }
  }
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else if (*(long *)(param_1 + 0x30) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c12a2c0(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010bdf2480(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
LAB_1085bbaa8:
  _objc_release(param_3);
  return;
}



/* Entry: 1085bbaf4; end: 1085bbb9f;  */

void FUN_1085bbaf4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 == 0) || (lVar1 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(long *)(lVar1 + 0x30) = param_2;
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x20);
    lVar3 = lVar1;
    func_0x00010bdf2480(lVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,lVar3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bbba0; end: 1085bbc73; -[SCTalkChatUIController _orchestrateWithCompletion:] */

void FUN_1085bbba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be22120(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085bbc74; end: 1085bbd77;  */

void FUN_1085bbc74(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 == 0) || (lVar1 == 0)) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
  else {
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010be6e300(lVar1);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1085bbd78; end: 1085bbdc7;  */

void FUN_1085bbd78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be65180();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085bbdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085bbdc8; end: 1085bbe67; -[SCTalkChatUIController _orchestrateWithRemoteParticipantStates:completion:] */

void FUN_1085bbdc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf04160();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (lVar1 != 0) {
    lVar3 = lVar1;
    _objc_retainBlock(lVar1);
    func_0x00010befa120(puVar2);
    _objc_release(lVar3);
  }
  FUN_1086179c0(puVar2,param_4);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085bbe68; end: 1085bc017; -[SCTalkChatUIController _notifyTalkSessionDelegateOfChangesWithRemoteParticipantStates:] */

void FUN_1085bbe68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar7 = *(long *)(lVar9 * 8);
      lVar5 = lVar7;
      func_0x00010c0fe180();
      puVar8 = puVar2;
      if ((lVar5 == 2) || (lVar5 = lVar7, func_0x00010c0fe180(), puVar8 = puVar3, lVar5 == 1)) {
        func_0x00010c2923e0(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8);
        _objc_release(lVar7);
      }
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c268ac0();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_storeStrong(param_3 + 0x50,0);
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_destroyWeak(param_3 + 0x20);
  _objc_destroyWeak(param_3 + 0x18);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1085bc018; end: 1085bc0ab; -[SCTalkChatUIController .cxx_destruct] */

void FUN_1085bc018(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085bc0ac; end: 1085bc13b; -[SCTChatPresenceBar pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1085bc0ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&lStack_40;
  puStack_38 = PTR_PTR_1126fcf28;
  lStack_40 = param_3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_pointInside_withEvent__11261e4e8);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    param_3 = param_3 + _DAT_112776ecc;
    _objc_loadWeakRetained(param_3);
    lVar2 = param_3;
    func_0x00010c10abe0(param_1,param_2);
    _objc_release(param_3);
  }
  return lVar2;
}



/* Entry: 1085bc13c; end: 1085bc15b; -[SCTChatPresenceBar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bc13c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112776ecc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085bc15c; end: 1085bc16f; -[SCTChatPresenceBar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bc15c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112776ecc,param_3);
  return;
}



/* Entry: 1085bc170; end: 1085bc17f; -[SCTChatPresenceBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bc170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112776ecc);
  return;
}



/* Entry: 1085bc180; end: 1085bc23b; -[SCTChatPresenceController initWithAvatarServices:chatServices:talkUIController:presenceRenderGrapheneLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1085bc180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fcf30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithAvatarServices_presenceR_11253bf08,param_3,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112776ed0),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112776ed4),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1085bc23c; end: 1085bc283; -[SCTChatPresenceController view] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bc23c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112776ed8;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    func_0x00010be3a9e0();
    lVar1 = *(long *)(param_1 + lVar2);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1085bc284; end: 1085bc57f; -[SCTChatPresenceController _initView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bc284(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fcf30;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s__initView_11256c418);
  puVar1 = PTR_PTR_1126da4b0;
  _objc_opt_new();
  lVar5 = (long)_DAT_112776ed8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c17d4c0();
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x00010c050900();
  func_0x00010c1d8ea0(param_1);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010c0f36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  lVar2 = param_1;
  func_0x00010c0f36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(uVar4);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  func_0x00010c1db900(param_1);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010c0fbe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0fbe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8340(0);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fbe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(lVar2);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1085bc580; end: 1085bc60b;  */

void FUN_1085bc580(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_1085bc60c();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bc60c; end: 1085bc647;  */

void FUN_1085bc60c(undefined8 param_1,undefined8 param_2)

{
  undefined4 in_stack_00000000;
  
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,in_stack_00000000);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085bc648; end: 1085bc7cb;  */

void FUN_1085bc648(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc054000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085bc7cc; end: 1085bc853;  */

void FUN_1085bc7cc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
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



/* Entry: 1085bc854; end: 1085bc887; -[SCTChatPresenceController _scheduleUIUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bc854(long param_1)

{
  param_1 = param_1 + _DAT_112776ed4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c136de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085bc888; end: 1085bc8e7; -[SCTChatPresenceController presenceBar:pointInside:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bc888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = puVar1 + _DAT_112776ed0;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c1f7bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085bc8e8; end: 1085bc91f; -[SCTChatPresenceController scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bc8e8(long param_1)

{
  param_1 = param_1 + _DAT_112776ed0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f7bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085bc920; end: 1085bc957; -[SCTChatPresenceController scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bc920(long param_1)

{
  param_1 = param_1 + _DAT_112776ed0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f7bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085bc958; end: 1085bc997; -[SCTChatPresenceController scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bc958(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return;
  }
  param_1 = param_1 + _DAT_112776ed0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f7bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085bc998; end: 1085bc99b; -[SCTChatPresenceController presenceBarPane] */

void FUN_1085bc998(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_view_1126849e8);
  return;
}



/* Entry: 1085bc99c; end: 1085bca63; -[SCTChatPresenceController animationsForRemoteParticipantStates:] */

void FUN_1085bc99c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1085bca64;
    puStack_48 = &UNK_1109101a8;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    _objc_retainBlock(&puStack_60);
    puVar3 = (undefined1 *)ppuVar2;
    _objc_retainBlock();
    _objc_release(ppuVar2);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085bca64; end: 1085bca73;  */

void FUN_1085bca64(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be79cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presenceAnimationForRemoteParti_11257c0c8,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1085bca74; end: 1085bca7f; -[SCTChatPresenceController presencePill:selectionChanged:] */

void FUN_1085bca74(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be723b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performPostponedPillTapReportIf_11257a288)
    ;
    return;
  }
  return;
}



/* Entry: 1085bca80; end: 1085bcad3; -[SCTChatPresenceController _createPillView] */

void FUN_1085bca80(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  lVar2 = param_3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_3);
  _objc_exception_throw(puVar1);
  lVar3 = lVar2;
  _objc_retain(lVar4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(lVar2);
  _objc_exception_throw(puVar1);
  lVar2 = lVar3;
  _objc_retain(lVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(lVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(lVar2);
  _objc_exception_throw();
  dVar5 = param_1;
  _objc_retain(lVar3);
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(puVar1);
  if ((double)(long)dVar5 == (double)(long)param_1) {
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3);
    }
  }
  else {
    puVar1 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    func_0x00010bef8560(0,0x3fd3333340000000,(long)dVar5,(long)param_1);
    _objc_retain(lVar3);
    func_0x00010bf42780(puVar1);
    _objc_release(lVar3);
    _objc_release(puVar1);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 1085bcad4; end: 1085bcb3f; -[SCTChatPresenceController _presenceAnimationForRemoteParticipantStates:completion:] */

void FUN_1085bcad4(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar2 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_3);
  _objc_exception_throw(puVar1);
  lVar3 = lVar2;
  _objc_retain(lVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(lVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(lVar3);
  _objc_exception_throw();
  dVar5 = param_1;
  _objc_retain(lVar2);
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(puVar1);
  if ((double)(long)dVar5 == (double)(long)param_1) {
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
  }
  else {
    puVar1 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    func_0x00010bef8560(0,0x3fd3333340000000,(long)dVar5,(long)param_1);
    _objc_retain(lVar2);
    func_0x00010bf42780(puVar1);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1085bcb40; end: 1085bcb9f; -[SCTChatPresenceController _pillForUserId:] */

void FUN_1085bcb40(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar2 = param_3;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(lVar2);
  _objc_exception_throw();
  dVar4 = param_1;
  _objc_retain(lVar3);
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(puVar1);
  if ((double)(long)dVar4 == (double)(long)param_1) {
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3);
    }
  }
  else {
    puVar1 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    func_0x00010bef8560(0,0x3fd3333340000000,(long)dVar4,(long)param_1);
    _objc_retain(lVar3);
    func_0x00010bf42780(puVar1);
    _objc_release(lVar3);
    _objc_release(puVar1);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 1085bcba0; end: 1085bcbf3; -[SCTChatPresenceController _orderedParticipants] */

void FUN_1085bcba0(double param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_3);
  _objc_exception_throw();
  dVar3 = param_1;
  _objc_retain(lVar2);
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(puVar1);
  if ((double)(long)dVar3 == (double)(long)param_1) {
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
  }
  else {
    puVar1 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    func_0x00010bef8560(0,0x3fd3333340000000,(long)dVar3,(long)param_1);
    _objc_retain(lVar2);
    func_0x00010bf42780(puVar1);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1085bcbf4; end: 1085bcd3b; -[SCTChatPresenceController _animateToHeight:completion:] */

void FUN_1085bcbf4(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  uVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(uVar2);
  if ((double)(long)dVar4 == (double)(long)param_1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puVar3 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1085bcd3c;
    puStack_60 = &UNK_110846710;
    uStack_58 = param_2;
    func_0x00010bef8560(0,0x3fd3333340000000,(long)dVar4,(long)param_1);
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1085bcd44;
    puStack_90 = &UNK_11084aaa8;
    uStack_88 = param_2;
    _objc_retain(param_4);
    lStack_80 = param_4;
    func_0x00010bf42780(puVar3,param_3,&puStack_a8);
    _objc_release(lStack_80);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1085bcd3c; end: 1085bcd43;  */

void FUN_1085bcd3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateToHeight__1125962b0);
  return;
}



/* Entry: 1085bcd44; end: 1085bcd97;  */

void FUN_1085bcd44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085bcd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085bcd98; end: 1085bce9b; -[SCTChatPresenceController _updateToHeight:] */

void FUN_1085bcd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_5;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bc850d8();
  uVar2 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1085bce9c; end: 1085bcf2b;  */

void FUN_1085bce9c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x20),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bcf2c; end: 1085bd113; -[SCTChatPresenceController _createParticipantWithState:uniqueLabel:birthdayVariant:] */

void FUN_1085bcf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf14c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ee4f98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c1fb9c0(uVar1,param_2,param_1);
  puVar3 = PTR_PTR_1126da4b8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c10ac40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf1acc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0fa800();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c06bb80();
  _objc_release(param_3);
  func_0x00010c05f720(puVar3,param_2,uVar2,uVar4,uVar5,param_4,uVar6,uVar7,uVar8,param_5,(char)uVar9
                     );
  _objc_release(param_4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085bd114; end: 1085bd28f; -[SCTChatPresenceController _updateSelection:forParticipant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bd114(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  ppuVar4 = &puStack_70;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c159240();
  if ((int)param_3 != (int)lVar1) {
    func_0x00010c289ae0(param_4,param_2,param_3);
    if (*(long *)(param_1 + _DAT_112776edc) == 2) {
      param_1 = param_4;
      func_0x00010c0fbcc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010c0fbcc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2524c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28b2a0(param_1,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else if (*(long *)(param_1 + _DAT_112776edc) == 0) {
      param_1 = param_1 + _DAT_112776ed4;
      _objc_loadWeakRetained(param_1);
      func_0x00010c136de0();
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_1085bd290;
      puStack_58 = &UNK_110845ce0;
      _objc_retain(param_4);
      uStack_48 = (undefined1)param_3;
      lStack_50 = param_4;
      _objc_retainBlock();
      uVar5 = *(undefined8 *)(param_1 + _DAT_112776ee0);
      *(undefined ***)(param_1 + _DAT_112776ee0) = ppuVar4;
      _objc_release(uVar5);
      param_1 = lStack_50;
    }
    _objc_release(param_1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1085bd290; end: 1085bd327;  */

void FUN_1085bd290(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fbcc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fbcc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2524c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b2a0(uVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085bd328; end: 1085bd39f; -[SCTChatPresenceController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

bool FUN_1085bd328(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_3 != lVar1) {
    func_0x00010c0fbe00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  return param_3 != lVar1;
}



/* Entry: 1085bd3a0; end: 1085bd437; -[SCTChatPresenceController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

uint FUN_1085bd3a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0fbe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  if (param_3 == param_1) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    uVar3 = (uint)uVar2;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_4);
  return uVar3 & 1;
}



/* Entry: 1085bd438; end: 1085bd4fb; -[SCTChatPresenceController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1085bd438(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_4 == lVar1) {
    func_0x00010c0f36c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00();
    bVar2 = 0.0 < param_1;
    _objc_release(param_2);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0fbe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_4 == lVar1) {
      bVar2 = *(byte *)(param_2 + _DAT_112776ee4) ^ 1;
    }
    else {
      bVar2 = 1;
    }
  }
  _objc_release(param_4);
  return bVar2 & 1;
}



/* Entry: 1085bd4fc; end: 1085bd767; -[SCTChatPresenceController _panGestureRecognized:] */

void FUN_1085bd4fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010bf89680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c14c8a0();
      goto LAB_1085bd720;
    }
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5);
    _objc_release(lVar1);
    _objc_initWeak(auStack_48,param_3);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1085bd768;
    puStack_70 = &UNK_11084d6b8;
    _objc_copyWeak(auStack_60,auStack_48);
    _objc_retain(param_5);
    lStack_68 = param_5;
    uStack_58 = param_1;
    uStack_50 = param_2;
    func_0x00010be70f80(param_3);
    _objc_release(lStack_68);
    puVar3 = auStack_60;
  }
  else {
    lVar1 = param_5;
    func_0x00010c252440();
    if (lVar1 == 2) {
      lVar1 = param_3;
      func_0x00010bf89680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_3;
        func_0x00010bf89680(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_5);
        func_0x00010c287600(lVar1);
        _objc_release(lVar2);
        _objc_release(lVar1);
        func_0x00010be80e00(param_3);
      }
      goto LAB_1085bd720;
    }
    lVar1 = param_5;
    func_0x00010c252440();
    if ((lVar1 != 3) && (lVar1 = param_5, func_0x00010c252440(), lVar1 != 4)) goto LAB_1085bd720;
    lVar1 = param_3;
    func_0x00010bf89680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_1085bd720;
    _objc_initWeak(auStack_48,param_3);
    _objc_copyWeak(auStack_90,auStack_48);
    func_0x00010be80de0(param_3);
    puVar3 = auStack_90;
  }
  _objc_destroyWeak(puVar3);
  _objc_destroyWeak(auStack_48);
LAB_1085bd720:
  _objc_release(param_5);
  return;
}



/* Entry: 1085bd768; end: 1085bd8b3;  */

void FUN_1085bd768(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1085bd89c;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c252440();
  if (lVar2 == 1) {
LAB_1085bd7b0:
    lVar2 = lVar1;
    func_0x00010bded420(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1916c0(lVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c252440();
    if (lVar2 == 2) goto LAB_1085bd7b0;
  }
  lVar2 = lVar1;
  func_0x00010bf89680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010be95f20();
    goto LAB_1085bd89c;
  }
  lVar2 = lVar1;
  func_0x00010c0fbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c252440();
  if (lVar3 == 1) {
    _objc_release(lVar2);
LAB_1085bd860:
    lVar2 = lVar1;
    func_0x00010c0fbe00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c8a0();
    _objc_release(lVar2);
  }
  else {
    lVar3 = lVar1;
    func_0x00010c0fbe00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c252440();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 2) goto LAB_1085bd860;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c252440();
  if (lVar2 == 2) {
    func_0x00010be6fdc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
LAB_1085bd89c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085bd8b4; end: 1085bd8f3;  */

void FUN_1085bd8b4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1916c0(param_1,param_2,0);
    func_0x00010be95f20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085bd8f4; end: 1085bda0b; -[SCTChatPresenceController _pauseUIUpdatesWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bd8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112776edc) == 0) {
    *(undefined8 *)(param_1 + _DAT_112776edc) = 1;
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c268aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f6120(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085bda0c; end: 1085bda6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bda0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + _DAT_112776edc) == 1)) {
    *(undefined8 *)(lVar1 + _DAT_112776edc) = 2;
    func_0x00010be723c0(lVar1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085bda70; end: 1085bdad3; -[SCTChatPresenceController _resumeUIUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bda70(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112776edc) - 1U < 2) {
    *(undefined8 *)(param_1 + _DAT_112776edc) = 0;
    lVar1 = param_1;
    func_0x00010c268aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13da40();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be723d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performPostponedUserSelectionIf_11257a290)
    ;
    return;
  }
  return;
}



/* Entry: 1085bdad4; end: 1085bdb1b; -[SCTChatPresenceController _performPostponedUserSelectionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bdad4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112776ee0;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1085bdb1c; end: 1085bdb6f; -[SCTChatPresenceController _createDragContextWithPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bdb1c(double param_1,double param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  lVar9 = param_4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_4);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  lVar2 = lVar9;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar9;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(lVar9);
  _objc_exception_throw(puVar1);
  _objc_retain(lVar7);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(lVar2);
  _objc_exception_throw();
  _objc_retain(lVar7);
  lVar9 = lVar7;
  func_0x00010c252440();
  if (lVar9 == 1) {
    puVar3 = puVar1;
    func_0x00010be70720();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112776ee8;
    uVar8 = *(undefined8 *)(puVar1 + lVar9);
    *(undefined **)(puVar1 + lVar9) = puVar3;
    _objc_release(uVar8);
    if (*(long *)(puVar1 + lVar9) != 0) {
      lVar9 = (long)_DAT_112776eec;
      puVar3 = puVar1;
      func_0x00010bf4dce0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(lVar7);
      *(double *)(puVar1 + lVar9) = param_1;
      *(double *)((long)(puVar1 + lVar9) + 8) = param_2;
      _objc_release(puVar3);
      func_0x00010be9b240(puVar1);
      func_0x00010be9b800(puVar1);
      goto LAB_1085bde40;
    }
  }
  else {
    lVar9 = lVar7;
    func_0x00010c252440();
    if (lVar9 != 2) {
      lVar9 = lVar7;
      func_0x00010c252440();
      if (lVar9 == 3) {
        func_0x00010be8ffc0(puVar1);
        func_0x00010bddaa40(puVar1);
        func_0x00010bddae20(puVar1);
        uVar8 = *(undefined8 *)(puVar1 + _DAT_112776ee8);
        *(undefined8 *)(puVar1 + _DAT_112776ee8) = 0;
      }
      else {
        lVar9 = lVar7;
        func_0x00010c252440();
        if ((lVar9 != 4) || (lVar9 = (long)_DAT_112776ee8, *(long *)(puVar1 + lVar9) == 0))
        goto LAB_1085bde40;
        if ((puVar1[_DAT_112776ee4] & 1) == 0) {
          func_0x00010bedf7c0(puVar1);
        }
        func_0x00010bddaa40(puVar1);
        func_0x00010bddae20(puVar1);
        uVar8 = *(undefined8 *)(puVar1 + lVar9);
        *(undefined8 *)(puVar1 + lVar9) = 0;
      }
      _objc_release(uVar8);
      goto LAB_1085bde40;
    }
    puVar3 = puVar1;
    func_0x00010be6e400();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112776ee8;
    puVar4 = puVar3;
    func_0x00010bf4b900();
    _objc_release(puVar3);
    if ((int)puVar4 != 0) {
      puVar3 = puVar1;
      func_0x00010bf4dce0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(lVar7);
      _objc_release(puVar3);
      uVar5 = *(ulong *)(puVar1 + lVar9);
      func_0x00010c0fbcc0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      _objc_release(uVar5);
      if (((uVar6 & 1) != 0) && (ABS(*(double *)(puVar1 + _DAT_112776eec) - param_1) <= 10.0))
      goto LAB_1085bde40;
    }
  }
  func_0x00010c14c8a0(lVar7);
LAB_1085bde40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1085bdb70; end: 1085bdbc3; -[SCTChatPresenceController _processDragMove] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bdb70(double param_1,double param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  lVar8 = param_4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_4);
  _objc_exception_throw(puVar1);
  _objc_retain(lVar6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(lVar8);
  _objc_exception_throw();
  _objc_retain(lVar6);
  lVar8 = lVar6;
  func_0x00010c252440();
  if (lVar8 == 1) {
    puVar2 = puVar1;
    func_0x00010be70720();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112776ee8;
    uVar7 = *(undefined8 *)(puVar1 + lVar8);
    *(undefined **)(puVar1 + lVar8) = puVar2;
    _objc_release(uVar7);
    if (*(long *)(puVar1 + lVar8) != 0) {
      lVar8 = (long)_DAT_112776eec;
      puVar2 = puVar1;
      func_0x00010bf4dce0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(lVar6);
      *(double *)(puVar1 + lVar8) = param_1;
      *(double *)((long)(puVar1 + lVar8) + 8) = param_2;
      _objc_release(puVar2);
      func_0x00010be9b240(puVar1);
      func_0x00010be9b800(puVar1);
      goto LAB_1085bde40;
    }
  }
  else {
    lVar8 = lVar6;
    func_0x00010c252440();
    if (lVar8 != 2) {
      lVar8 = lVar6;
      func_0x00010c252440();
      if (lVar8 == 3) {
        func_0x00010be8ffc0(puVar1);
        func_0x00010bddaa40(puVar1);
        func_0x00010bddae20(puVar1);
        uVar7 = *(undefined8 *)(puVar1 + _DAT_112776ee8);
        *(undefined8 *)(puVar1 + _DAT_112776ee8) = 0;
      }
      else {
        lVar8 = lVar6;
        func_0x00010c252440();
        if ((lVar8 != 4) || (lVar8 = (long)_DAT_112776ee8, *(long *)(puVar1 + lVar8) == 0))
        goto LAB_1085bde40;
        if ((puVar1[_DAT_112776ee4] & 1) == 0) {
          func_0x00010bedf7c0(puVar1);
        }
        func_0x00010bddaa40(puVar1);
        func_0x00010bddae20(puVar1);
        uVar7 = *(undefined8 *)(puVar1 + lVar8);
        *(undefined8 *)(puVar1 + lVar8) = 0;
      }
      _objc_release(uVar7);
      goto LAB_1085bde40;
    }
    puVar2 = puVar1;
    func_0x00010be6e400();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112776ee8;
    puVar3 = puVar2;
    func_0x00010bf4b900();
    _objc_release(puVar2);
    if ((int)puVar3 != 0) {
      puVar2 = puVar1;
      func_0x00010bf4dce0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(lVar6);
      _objc_release(puVar2);
      uVar4 = *(ulong *)(puVar1 + lVar8);
      func_0x00010c0fbcc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      _objc_release(uVar4);
      if (((uVar5 & 1) != 0) && (ABS(*(double *)(puVar1 + _DAT_112776eec) - param_1) <= 10.0))
      goto LAB_1085bde40;
    }
  }
  func_0x00010c14c8a0(lVar6);
LAB_1085bde40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1085bdbc4; end: 1085bdc23; -[SCTChatPresenceController _processDragEndWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bdbc4(double param_1,double param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_4);
  _objc_exception_throw();
  _objc_retain(lVar6);
  lVar8 = lVar6;
  func_0x00010c252440();
  if (lVar8 == 1) {
    puVar2 = puVar1;
    func_0x00010be70720();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112776ee8;
    uVar7 = *(undefined8 *)(puVar1 + lVar8);
    *(undefined **)(puVar1 + lVar8) = puVar2;
    _objc_release(uVar7);
    if (*(long *)(puVar1 + lVar8) != 0) {
      lVar8 = (long)_DAT_112776eec;
      puVar2 = puVar1;
      func_0x00010bf4dce0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(lVar6);
      *(double *)(puVar1 + lVar8) = param_1;
      *(double *)((long)(puVar1 + lVar8) + 8) = param_2;
      _objc_release(puVar2);
      func_0x00010be9b240(puVar1);
      func_0x00010be9b800(puVar1);
      goto LAB_1085bde40;
    }
  }
  else {
    lVar8 = lVar6;
    func_0x00010c252440();
    if (lVar8 != 2) {
      lVar8 = lVar6;
      func_0x00010c252440();
      if (lVar8 == 3) {
        func_0x00010be8ffc0(puVar1);
        func_0x00010bddaa40(puVar1);
        func_0x00010bddae20(puVar1);
        uVar7 = *(undefined8 *)(puVar1 + _DAT_112776ee8);
        *(undefined8 *)(puVar1 + _DAT_112776ee8) = 0;
      }
      else {
        lVar8 = lVar6;
        func_0x00010c252440();
        if ((lVar8 != 4) || (lVar8 = (long)_DAT_112776ee8, *(long *)(puVar1 + lVar8) == 0))
        goto LAB_1085bde40;
        if ((puVar1[_DAT_112776ee4] & 1) == 0) {
          func_0x00010bedf7c0(puVar1);
        }
        func_0x00010bddaa40(puVar1);
        func_0x00010bddae20(puVar1);
        uVar7 = *(undefined8 *)(puVar1 + lVar8);
        *(undefined8 *)(puVar1 + lVar8) = 0;
      }
      _objc_release(uVar7);
      goto LAB_1085bde40;
    }
    puVar2 = puVar1;
    func_0x00010be6e400();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112776ee8;
    puVar3 = puVar2;
    func_0x00010bf4b900();
    _objc_release(puVar2);
    if ((int)puVar3 != 0) {
      puVar2 = puVar1;
      func_0x00010bf4dce0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(lVar6);
      _objc_release(puVar2);
      uVar4 = *(ulong *)(puVar1 + lVar8);
      func_0x00010c0fbcc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      _objc_release(uVar4);
      if (((uVar5 & 1) != 0) && (ABS(*(double *)(puVar1 + _DAT_112776eec) - param_1) <= 10.0))
      goto LAB_1085bde40;
    }
  }
  func_0x00010c14c8a0(lVar6);
LAB_1085bde40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1085bdc24; end: 1085bde5b; -[SCTChatPresenceController _pillPressedRecognized:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bdc24(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_5);
  lVar5 = param_5;
  func_0x00010c252440();
  if (lVar5 == 1) {
    lVar5 = param_3;
    func_0x00010be70720();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112776ee8;
    uVar3 = *(undefined8 *)(param_3 + lVar4);
    *(long *)(param_3 + lVar4) = lVar5;
    _objc_release(uVar3);
    if (*(long *)(param_3 + lVar4) != 0) {
      lVar4 = (long)_DAT_112776eec;
      lVar5 = param_3;
      func_0x00010bf4dce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5,param_4,lVar5);
      *(double *)(param_3 + lVar4) = param_1;
      ((double *)(param_3 + lVar4))[1] = param_2;
      _objc_release(lVar5);
      func_0x00010be9b240(param_3);
      func_0x00010be9b800(param_3);
      goto LAB_1085bde40;
    }
  }
  else {
    lVar5 = param_5;
    func_0x00010c252440();
    if (lVar5 != 2) {
      lVar5 = param_5;
      func_0x00010c252440();
      if (lVar5 == 3) {
        func_0x00010be8ffc0(param_3,param_4,0);
        func_0x00010bddaa40(param_3);
        func_0x00010bddae20(param_3);
        uVar3 = *(undefined8 *)(param_3 + _DAT_112776ee8);
        *(undefined8 *)(param_3 + _DAT_112776ee8) = 0;
      }
      else {
        lVar5 = param_5;
        func_0x00010c252440();
        if ((lVar5 != 4) || (lVar5 = (long)_DAT_112776ee8, *(long *)(param_3 + lVar5) == 0))
        goto LAB_1085bde40;
        if ((*(byte *)(param_3 + _DAT_112776ee4) & 1) == 0) {
          func_0x00010bedf7c0(param_3,param_4,0);
        }
        func_0x00010bddaa40(param_3);
        func_0x00010bddae20(param_3);
        uVar3 = *(undefined8 *)(param_3 + lVar5);
        *(undefined8 *)(param_3 + lVar5) = 0;
      }
      _objc_release(uVar3);
      goto LAB_1085bde40;
    }
    lVar5 = param_3;
    func_0x00010be6e400();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112776ee8;
    lVar4 = lVar5;
    func_0x00010bf4b900();
    _objc_release(lVar5);
    if ((int)lVar4 != 0) {
      lVar5 = param_3;
      func_0x00010bf4dce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5,param_4,lVar5);
      _objc_release(lVar5);
      uVar1 = *(ulong *)(param_3 + lVar6);
      func_0x00010c0fbcc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      _objc_release(uVar1);
      if (((uVar2 & 1) != 0) && (ABS(*(double *)(param_3 + _DAT_112776eec) - param_1) <= 10.0))
      goto LAB_1085bde40;
    }
  }
  func_0x00010c14c8a0(param_5);
LAB_1085bde40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1085bde5c; end: 1085bde73; -[SCTChatPresenceController _scheduleTappedParticipantSelection] */

void FUN_1085bde5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fb99999a0000000,param_1,PTR_s_performSelector_withObject_after_11261bdf0,
             PTR_s__selectTappedParticipant_11253bf18,0);
  return;
}



/* Entry: 1085bde74; end: 1085bde8f; -[SCTChatPresenceController _cancelTappedParticipantSelection] */

void FUN_1085bde74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSObject_1126b1300,PTR_s_cancelPreviousPerformRequestsWit_1125a9490,
             param_1,PTR_s__selectTappedParticipant_11253bf18,0);
  return;
}



/* Entry: 1085bde90; end: 1085bdea3; -[SCTChatPresenceController _selectTappedParticipant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bde90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSelection_forParticipant__112595798,1,
             *(undefined8 *)(param_1 + _DAT_112776ee8));
  return;
}



/* Entry: 1085bdea4; end: 1085bdeb7; -[SCTChatPresenceController _scheduleLongPressProcessing] */

void FUN_1085bdea4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe0000000000000,param_1,PTR_s_performSelector_withObject_after_11261bdf0,
             PTR_s__processLongPress_11253bf20,0);
  return;
}



/* Entry: 1085bdeb8; end: 1085bded3; -[SCTChatPresenceController _cancelLongPressProcessing] */

void FUN_1085bdeb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSObject_1126b1300,PTR_s_cancelPreviousPerformRequestsWit_1125a9490,
             param_1,PTR_s__processLongPress_11253bf20,0);
  return;
}



/* Entry: 1085bded4; end: 1085bdf13; -[SCTChatPresenceController _processLongPress] */

void FUN_1085bded4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be8ffc0(param_1,param_2,1);
  func_0x00010c0fbe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085bdf14; end: 1085be0a7; -[SCTChatPresenceController _participantFromPillPressRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bdf14(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong unaff_x22;
  long lVar12;
  ulong unaff_x23;
  long lVar13;
  long unaff_x24;
  long lVar14;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined1 uStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_1;
  func_0x00010c0fbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(lVar9);
  _objc_release(lVar14);
  _objc_release(lVar9);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x00010be6e400();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    unaff_x24 = *plStack_120;
    lVar9 = lVar14;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        uVar11 = *(ulong *)(lStack_128 + lVar14 * 8);
        unaff_x22 = uVar11;
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x22;
        func_0x00010bfb68e0();
        _CGRectContainsPoint();
        _objc_release(unaff_x22);
        if ((unaff_x23 & 1) != 0) {
          _objc_retain(uVar11);
          goto LAB_1085be060;
        }
        lVar14 = lVar14 + 1;
      } while (lVar9 != lVar14);
      lVar9 = param_1;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  uVar11 = 0;
LAB_1085be060:
  lVar14 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar7 = &uStack_240;
    pcStack_138 = FUN_1085be0a8;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    uStack_160 = unaff_x22;
    uStack_158 = uVar11;
    lStack_150 = lVar9;
    lStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010be6e400();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar14;
    func_0x00010bf52a60();
    uVar6 = SUB81(puVar7,0);
    if (lVar9 != 0) {
      lVar12 = *plStack_230;
      do {
        lVar13 = 0;
        do {
          if (*plStack_230 != lVar12) {
            _objc_enumerationMutation(lVar14);
          }
          uVar11 = *(ulong *)(lStack_238 + lVar13 * 8);
          uVar1 = uVar11;
          func_0x00010c159240();
          uVar6 = SUB81(puVar7,0);
          if ((uVar1 & 1) != 0) {
            _objc_retain(uVar11);
            goto LAB_1085be174;
          }
          lVar13 = lVar13 + 1;
        } while (lVar9 != lVar13);
        lVar9 = lVar14;
        puVar7 = &uStack_240;
        func_0x00010bf52a60();
        uVar6 = SUB81(puVar7,0);
      } while (lVar9 != 0);
    }
    uVar11 = 0;
LAB_1085be174:
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      ppuVar2 = &puStack_2d0;
      *(undefined1 *)(lVar14 + _DAT_112776ee4) = 1;
      lVar9 = (long)_DAT_112776ee8;
      uVar11 = *(ulong *)(lVar14 + lVar9);
      func_0x00010c159240();
      if ((uVar11 & 1) == 0) {
        func_0x00010bedf7c0(lVar14);
      }
      uVar10 = *(undefined8 *)(lVar14 + lVar9);
      _objc_retain(uVar10);
      _objc_initWeak(auStack_298,lVar14);
      puStack_2d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2c8 = 0xc2000000;
      pcStack_2c0 = FUN_1085be34c;
      puStack_2b8 = &UNK_1108488f8;
      _objc_copyWeak(auStack_2a8,auStack_298);
      _objc_retain(uVar10);
      uStack_2b0 = uVar10;
      uStack_2a0 = uVar6;
      _objc_retainBlock();
      uVar8 = uVar10;
      func_0x00010c0fbcc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c159240();
      _objc_release(uVar3);
      _objc_release(uVar8);
      if ((int)uVar4 == 0) {
        puVar5 = (undefined1 *)ppuVar2;
        _objc_retainBlock();
        uVar8 = *(undefined8 *)(lVar14 + _DAT_112776ef0);
        *(undefined1 **)(lVar14 + _DAT_112776ef0) = puVar5;
        _objc_release(uVar8);
      }
      else {
        (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
      }
      _objc_release(ppuVar2);
      _objc_release(uStack_2b0);
      _objc_destroyWeak(auStack_2a8);
      _objc_destroyWeak(auStack_298);
      _objc_release(uVar10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 1085be0a8; end: 1085be1b3; -[SCTChatPresenceController _selectedParticipant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be0a8(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined1 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar7 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010be6e400();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf52a60();
  uVar6 = SUB81(puVar7,0);
  if (lVar9 != 0) {
    lVar12 = *plStack_100;
    do {
      lVar13 = 0;
      do {
        if (*plStack_100 != lVar12) {
          _objc_enumerationMutation(param_1);
        }
        uVar11 = *(ulong *)(lStack_108 + lVar13 * 8);
        uVar1 = uVar11;
        func_0x00010c159240();
        uVar6 = SUB81(puVar7,0);
        if ((uVar1 & 1) != 0) {
          _objc_retain(uVar11);
          goto LAB_1085be174;
        }
        lVar13 = lVar13 + 1;
      } while (lVar9 != lVar13);
      lVar9 = param_1;
      puVar7 = &uStack_110;
      func_0x00010bf52a60();
      uVar6 = SUB81(puVar7,0);
    } while (lVar9 != 0);
  }
  uVar11 = 0;
LAB_1085be174:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_1a0;
  *(undefined1 *)(param_1 + _DAT_112776ee4) = 1;
  lVar9 = (long)_DAT_112776ee8;
  uVar1 = *(ulong *)(param_1 + lVar9);
  func_0x00010c159240();
  if ((uVar1 & 1) == 0) {
    func_0x00010bedf7c0(param_1);
  }
  uVar10 = *(undefined8 *)(param_1 + lVar9);
  _objc_retain(uVar10);
  _objc_initWeak(auStack_168,param_1);
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1085be34c;
  puStack_188 = &UNK_1108488f8;
  _objc_copyWeak(auStack_178,auStack_168);
  _objc_retain(uVar10);
  uStack_180 = uVar10;
  uStack_170 = uVar6;
  _objc_retainBlock();
  uVar8 = uVar10;
  func_0x00010c0fbcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c159240();
  _objc_release(uVar3);
  _objc_release(uVar8);
  if ((int)uVar4 == 0) {
    puVar5 = (undefined1 *)ppuVar2;
    _objc_retainBlock();
    uVar8 = *(undefined8 *)(param_1 + _DAT_112776ef0);
    *(undefined1 **)(param_1 + _DAT_112776ef0) = puVar5;
    _objc_release(uVar8);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_168);
  _objc_release(uVar10);
  return;
}



/* Entry: 1085be1b4; end: 1085be34b; -[SCTChatPresenceController _reportPillTapLongPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be1b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar2 = &puStack_90;
  *(undefined1 *)(param_1 + _DAT_112776ee4) = 1;
  lVar7 = (long)_DAT_112776ee8;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c159240();
  if ((uVar1 & 1) == 0) {
    func_0x00010bedf7c0(param_1);
  }
  uVar8 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(uVar8);
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1085be34c;
  puStack_78 = &UNK_1108488f8;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(uVar8);
  uStack_70 = uVar8;
  uStack_60 = param_3;
  _objc_retainBlock();
  uVar6 = uVar8;
  func_0x00010c0fbcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c159240();
  _objc_release(uVar3);
  _objc_release(uVar6);
  if ((int)uVar4 == 0) {
    puVar5 = (undefined1 *)ppuVar2;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112776ef0);
    *(undefined1 **)(param_1 + _DAT_112776ef0) = puVar5;
    _objc_release(uVar6);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar8);
  return;
}



/* Entry: 1085be34c; end: 1085be47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be34c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1 + _DAT_112776ed0;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c294420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  func_0x00010c133820(lVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  return;
}



/* Entry: 1085be47c; end: 1085be4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be47c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112776ee4) = 0;
    func_0x00010bedf7c0(lVar1,param_2,0,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085be4c8; end: 1085be50f; -[SCTChatPresenceController _performPostponedPillTapReportIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be4c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112776ef0;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1085be510; end: 1085be52f; -[SCTChatPresenceController talkUIController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be510(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112776ed4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085be530; end: 1085be5a7; -[SCTChatPresenceController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be530(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776ef0,0);
  _objc_storeStrong(param_1 + _DAT_112776ee0,0);
  _objc_storeStrong(param_1 + _DAT_112776ee8,0);
  _objc_storeStrong(param_1 + _DAT_112776ed8,0);
  _objc_destroyWeak(param_1 + _DAT_112776ed4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112776ed0);
  return;
}



/* Entry: 1085be5a8; end: 1085be6af; -[SCTChatPresenceParticipant initWithUsername:userId:displayName:uniqueLabel:presenceColor:bitmojiAvatarId:petImageURL:birthdayVariant:isAiChatbot:pill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1085be5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126fcf38;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUsername_userId_displayN_11253bf48,param_3,param_4,
                      param_5,param_6,param_7,param_8,param_9,param_11);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bde24c0(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112776f04) = param_10;
    lVar3 = (long)_DAT_112776f08;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar3));
    func_0x00010c286dc0(*(undefined8 *)((long)puVar1 + lVar3));
  }
  _objc_release(param_13);
  return puVar1;
}



/* Entry: 1085be6b0; end: 1085be71b; -[SCTChatPresenceParticipant initWithUsername:displayName:presenceColor:] */

undefined8 *
FUN_1085be6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fcf38;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUsername_userId_displayN_11253bf48,param_3,param_3,
                      param_4,param_4,param_5,0,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bde24c0(puVar1);
  }
  return puVar1;
}



/* Entry: 1085be71c; end: 1085be737; -[SCTChatPresenceParticipant _commonInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be71c(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112776f0c) = 0;
  *(undefined8 *)(param_1 + _DAT_112776f10) = 0;
  return;
}



/* Entry: 1085be738; end: 1085be787; -[SCTChatPresenceParticipant updateUniqueLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be738(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fcf38;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_updateUniqueLabel__112680800);
  func_0x00010c286dc0(*(undefined8 *)(param_1 + _DAT_112776f08));
  return;
}



/* Entry: 1085be788; end: 1085be797; -[SCTChatPresenceParticipant isActionPose] */

void FUN_1085be788(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126da4c0,PTR_s_isActionPose__1125f8790,param_1);
  return;
}



/* Entry: 1085be798; end: 1085be84b; -[SCTChatPresenceParticipant updatePresenceState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27e300(param_3);
  func_0x00010c21ae00(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c0fe180(param_3);
  func_0x00010c1dcf40(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c082a20(param_3);
  func_0x00010c21fb40(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c083620(param_3);
  func_0x00010c223200(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c075460(param_3);
  func_0x00010c1ab9c0(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf1a900();
  _objc_release(param_3);
  *(undefined8 *)(param_1 + _DAT_112776f04) = uVar1;
  return;
}



/* Entry: 1085be84c; end: 1085be88f; -[SCTChatPresenceParticipant labelTextForPresencePill:] */

void FUN_1085be84c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2805c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085be890; end: 1085be893; -[SCTChatPresenceParticipant colorForPresencePill:] */

void FUN_1085be890(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presenceColor_112620530);
  return;
}



/* Entry: 1085be894; end: 1085be897; -[SCTChatPresenceParticipant bitmojiForPresencePill:] */

void FUN_1085be894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presenceBitmoji_112620528);
  return;
}



/* Entry: 1085be898; end: 1085be89b; -[SCTChatPresenceParticipant typingBubbleOnlyForPresencePill:] */

void FUN_1085be898(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_typingBubbleOnly_11267d2c0);
  return;
}



/* Entry: 1085be89c; end: 1085be8ab; -[SCTChatPresenceParticipant media] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085be89c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776f0c);
}


