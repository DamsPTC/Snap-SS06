/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a20c40; end: 106a20ca3; -[SCChatInputAudioNoteController _handleTapToRecordKeyboardSendFromTypingFinished] */

void FUN_106a20c40(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x88) != 0) && (lVar1 = param_1, func_0x00010c252440(), lVar1 == 5)) {
                    /* WARNING: Could not recover jumptable at 0x00010be17350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishTapToRecordAndSend_112563670);
    return;
  }
  if ((*(long *)(param_1 + 0x90) != 0) && (*(long *)(param_1 + 0x98) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be6b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onSendButtonTapped_112578708);
    return;
  }
  return;
}



/* Entry: 106a20ca4; end: 106a20d8f; -[SCChatInputAudioNoteController _subscribeToConversationEvents] */

void FUN_106a20ca4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106a20d90; end: 106a20e3f;  */

void FUN_106a20d90(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd100(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106a20e40; end: 106a20ee7;  */

void FUN_106a20e40(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a20ee8;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106a20ee8; end: 106a20f13;  */

void FUN_106a20ee8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a20f14; end: 106a20fab; -[SCChatInputAudioNoteController _cancelTapToRecord] */

void FUN_106a20f14(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123b40(*(undefined8 *)(param_1 + 0xb0));
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c0fe440(*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c0b3400(uVar3,uVar1);
  _objc_release(uVar1);
  uVar2 = param_1;
  func_0x00010c252440();
  if ((uVar2 & 0xfffffffffffffffe) == 4) {
    func_0x00010be171c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpTapToRecord_112555640);
  return;
}



/* Entry: 106a20fac; end: 106a21513; -[SCChatInputAudioNoteController _presentRecordingView] */

void FUN_106a20fac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cfcb8;
  _objc_opt_new();
  puStack_130 = puVar1;
  _objc_initWeak(auStack_a8,param_1);
  puVar2 = PTR_PTR_1126cfcc0;
  _objc_opt_new();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106a21514;
  puStack_b8 = &UNK_1108434b0;
  puStack_128 = puVar2;
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c1d1780(puStack_128);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x106a215b8;
  puStack_e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d8,auStack_a8);
  func_0x00010c1d3780(puStack_128);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_106a216dc;
  puStack_108 = &UNK_1108434b0;
  _objc_copyWeak(auStack_100,auStack_a8);
  func_0x00010c1d34a0(puStack_128);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  puVar12 = (undefined8 *)(param_1 + 0x80);
  uVar11 = *puVar12;
  *puVar12 = puVar1;
  _objc_release(uVar11);
  uVar11 = *puVar12;
  func_0x00010c272120(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3c40(puStack_128);
  _objc_release(uVar11);
  func_0x00010c1b4b00(puStack_130);
  puVar1 = PTR_PTR_1126cfcc8;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  _objc_release(uVar11);
  _objc_release(uVar3);
  func_0x00010c219b60(puVar1);
  _objc_retain(puVar1);
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar11);
  lVar4 = param_1 + 0xe0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  puStack_198 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0xe0;
  puStack_148 = puVar2;
  _objc_loadWeakRetained();
  lStack_138 = lVar4;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_148;
  lStack_150 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_158 = puVar2;
  puStack_a0 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0xe0;
  puStack_170 = puVar6;
  _objc_loadWeakRetained();
  lStack_160 = lVar4;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_170;
  lStack_178 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_180 = puVar2;
  puStack_98 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0xe0;
  puStack_190 = puVar6;
  _objc_loadWeakRetained();
  lStack_188 = lVar4;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_190;
  func_0x00010bf493c0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_90 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_198);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lStack_188);
  _objc_release(puStack_190);
  _objc_release(puStack_180);
  _objc_release(lStack_178);
  _objc_release(lStack_168);
  _objc_release(lStack_160);
  _objc_release(puStack_170);
  _objc_release(puStack_158);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(lStack_138);
  _objc_release(puStack_148);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puStack_128);
  _objc_destroyWeak(auStack_a8);
  puVar1 = puStack_130;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  puVar2 = puVar1;
  __Unwind_Resume(puVar1);
  pcStack_1a8 = FUN_106a21514;
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x106a2158c;
  puStack_1d0 = &UNK_1108434b0;
  lStack_1c0 = lVar5;
  puStack_1b8 = puVar1;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_1c8,puVar2 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_1e8);
  _objc_destroyWeak(auStack_1c8);
  return;
}



/* Entry: 106a21514; end: 106a2162f;  */

void FUN_106a21514(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106a2158c;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a21630; end: 106a216db;  */

void FUN_106a21630(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  puVar1 = auStack_28;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar1 != (undefined1 *)0x0) {
    puVar1 = auStack_28;
    _objc_loadWeakRetained();
    puVar2 = puVar1;
    func_0x00010c252440();
    _objc_release(puVar1);
    puVar1 = auStack_28;
    _objc_loadWeakRetained(puVar1);
    if (puVar2 == (undefined1 *)0x5) {
      func_0x00010be171e0(puVar1);
    }
    else {
      func_0x00010bddae00(puVar1);
    }
    _objc_release(puVar1);
  }
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a216dc; end: 106a2177f;  */

void FUN_106a216dc(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106a21754;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a21780; end: 106a217a7; -[SCChatInputAudioNoteController _finishTapToRecordAndSend] */

void FUN_106a21780(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c209fc0(param_1,param_2,6);
                    /* WARNING: Could not recover jumptable at 0x00010be171f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishRecordingWithHaptic_112563618);
  return;
}



/* Entry: 106a217a8; end: 106a21843; -[SCChatInputAudioNoteController _dismissHoldUIAndPresentPreviewWithData:duration:] */

void FUN_106a217a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  _objc_retain(param_4);
  func_0x00010c195460(uVar2,param_3,0);
  func_0x00010be35f00(param_2);
  func_0x00010becf380(param_2);
  lVar1 = param_2;
  func_0x00010c2779a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dc40();
  _objc_release(lVar1);
  func_0x00010bec69e0(param_2);
  func_0x00010be7d900(param_1,param_2,param_3,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a21844; end: 106a22063; -[SCChatInputAudioNoteController _presentPreviewViewWithData:duration:recordType:] */

void FUN_106a21844(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined1 auStack_288 [8];
  long lStack_280;
  long lStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined *puStack_258;
  long lStack_250;
  undefined *puStack_248;
  long lStack_240;
  long lStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  long lStack_218;
  long lStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf0f7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1820();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae820;
  _objc_opt_new();
  puVar11 = PTR_PTR_1126cfcd0;
  _objc_alloc();
  lStack_250 = param_4;
  puStack_1d8 = puVar2;
  func_0x00010c008320(param_1);
  _objc_retain();
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined **)(param_2 + 0xb0) = puVar11;
  puStack_1d0 = puVar11;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cfcd8;
  _objc_opt_new();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = puVar2;
  func_0x00010c192ee0(puVar2);
  _objc_release(puVar11);
  _objc_initWeak(auStack_a8,param_2);
  puVar2 = PTR_PTR_1126cfce0;
  _objc_opt_new();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106a22064;
  puStack_b8 = &UNK_1108434b0;
  puStack_1c8 = puVar2;
  _objc_copyWeak(auStack_b0,auStack_a8);
  puVar10 = puStack_1c8;
  func_0x00010c1d1780(puStack_1c8);
  puVar11 = puStack_1d0;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x106a22108;
  puStack_e0 = &UNK_1108c9a88;
  _objc_retain(puStack_1d0);
  puStack_d8 = puVar11;
  func_0x00010c1d2e20(puVar10);
  puStack_120 = puVar2;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_106a221a0;
  puStack_108 = &UNK_1108434b0;
  _objc_copyWeak(auStack_100,auStack_a8);
  puVar11 = puStack_1c8;
  func_0x00010c1d34a0(puStack_1c8);
  puVar2 = puStack_1d0;
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x106a22244;
  puStack_130 = &UNK_110841f20;
  _objc_retain(puStack_1d0);
  puStack_128 = puVar2;
  func_0x00010c1d44a0(puVar11);
  puVar2 = puStack_1d0;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_106a222dc;
  puStack_158 = &UNK_110846710;
  _objc_retain(puStack_1d0);
  puStack_150 = puVar2;
  func_0x00010c1f9a60(puStack_1c8);
  puVar2 = puStack_1d8;
  func_0x00010c272120(puStack_1d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd900(puStack_1c8);
  _objc_release(puVar2);
  lVar3 = param_2 + 0xa8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c17bd60(puStack_1c8);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126cfce8;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  _objc_release(uVar1);
  _objc_release(uVar4);
  func_0x00010c219b60(puVar2);
  _objc_retain(puVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined **)(param_2 + 0x90) = puVar2;
  _objc_release(uVar1);
  lVar3 = param_2 + 0xe0;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  _objc_release(lVar3);
  puStack_258 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar11 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2 + 0xe0;
  puStack_1f8 = puVar11;
  _objc_loadWeakRetained();
  lStack_1e8 = lVar3;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puStack_1f8;
  lStack_200 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  puStack_208 = puVar11;
  puStack_a0 = puVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2 + 0xe0;
  puStack_220 = puVar10;
  _objc_loadWeakRetained();
  lStack_210 = lVar3;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puStack_220;
  lStack_228 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  puStack_230 = puVar11;
  puStack_98 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2 + 0xe0;
  puStack_248 = puVar10;
  _objc_loadWeakRetained();
  lStack_238 = lVar3;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  lStack_240 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puStack_248;
  func_0x00010bf493c0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  puStack_90 = puVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2 + 0xe0;
  _objc_loadWeakRetained();
  lVar8 = lVar5;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_258);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(lStack_240);
  _objc_release(lStack_238);
  _objc_release(puStack_248);
  _objc_release(puStack_230);
  _objc_release(lStack_228);
  _objc_release(lStack_218);
  _objc_release(lStack_210);
  _objc_release(puStack_220);
  _objc_release(puStack_208);
  _objc_release(lStack_200);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e8);
  _objc_release(puStack_1f8);
  puVar11 = *(undefined **)(param_2 + 0x88);
  _objc_retain(puVar11);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  _objc_release(uVar1);
  if (puVar11 == (undefined *)0x0) {
    func_0x00010c1677c0(0,puVar2);
    puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    uStack_1b0 = 0x106a22378;
    puStack_1a8 = &UNK_110842e18;
    _objc_retain(puVar2);
    puStack_1a0 = puVar2;
    func_0x00010bf03400(0x3fc999999999999a,puVar10);
    puVar10 = puStack_1a0;
  }
  else {
    func_0x00010c1a7f60(puVar2);
    lVar3 = param_2 + 0xe0;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar5);
    _objc_release(lVar3);
    puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    uStack_188 = 0x106a22370;
    puStack_180 = &UNK_110841f20;
    _objc_retain(puVar11);
    puStack_178 = puVar11;
    func_0x00010c27a9a0(0x3fc999999999999a,puVar10);
    puVar10 = puStack_178;
  }
  _objc_release(puVar10);
  lVar3 = lStack_250;
  _objc_retain(lStack_250);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(long *)(param_2 + 0x98) = lVar3;
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0xa0) = param_1;
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puStack_150);
  _objc_release(puStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_release(puStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puStack_1c8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1d8);
  lVar5 = lStack_250;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  lVar8 = lVar5;
  __Unwind_Resume(lVar5);
  lStack_280 = lVar3;
  pcStack_268 = FUN_106a22064;
  puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a0 = 0xc2000000;
  uStack_298 = 0x106a220dc;
  puStack_290 = &UNK_1108434b0;
  lStack_278 = lVar5;
  puStack_270 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_288,lVar8 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_2a8);
  _objc_destroyWeak(auStack_288);
  return;
}



/* Entry: 106a22064; end: 106a22183;  */

void FUN_106a22064(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106a220dc;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a22184; end: 106a2219f;  */

void FUN_106a22184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e7090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onTapPlayWithState_completionHan_112617638,
             *(undefined4 *)(param_1 + 0x28),&PTR___NSConcreteGlobalBlock_110953898);
  return;
}



/* Entry: 106a221a0; end: 106a222bf;  */

void FUN_106a221a0(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106a22218;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a222c0; end: 106a222db;  */

void FUN_106a222c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onScrub_completionHandler__1126172e0,
             *(undefined1 *)(param_1 + 0x28),&PTR___NSConcreteGlobalBlock_1109538b8);
  return;
}



/* Entry: 106a222dc; end: 106a2235f;  */

void FUN_106a222dc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106a22360;
  puStack_48 = &UNK_110848c48;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  uStack_38 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 106a22360; end: 106a22383;  */

void FUN_106a22360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),PTR_s_onSeek__112617300
            );
  return;
}



/* Entry: 106a22384; end: 106a22423; -[SCChatInputAudioNoteController _onSendButtonTapped] */

void FUN_106a22384(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bea1340();
  func_0x00010bf94a20(uVar1);
  func_0x00010be9e940(*(undefined8 *)(param_1 + 0xa0),param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123b40(*(undefined8 *)(param_1 + 0xb0));
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c0fe440(*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c0b3400(uVar2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bddf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpTapToRecord_112555640);
  return;
}



/* Entry: 106a22424; end: 106a2262f; -[SCChatInputAudioNoteController _cleanUpTapToRecord] */

void FUN_106a22424(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  func_0x00010bf94a20(*(undefined8 *)(param_1 + 0x40),param_2,1);
  func_0x00010c209fc0(param_1,param_2,0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0f7c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1820();
  _objc_release(uVar3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x78));
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106a22630;
    puStack_80 = &UNK_110842e18;
    _objc_retain(lVar4);
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x106a2263c;
    puStack_a8 = &UNK_110841f20;
    lStack_78 = lVar4;
    _objc_retain(lVar4);
    lStack_a0 = lVar4;
    func_0x00010bf03420(0x3fc999999999999a,puVar2,param_2,&puStack_98,&puStack_c0);
    _objc_release(lStack_a0);
    _objc_release(lStack_78);
  }
  lVar5 = *(long *)(param_1 + 0x90);
  _objc_retain(lVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (lVar5 != 0) {
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x106a22644;
    puStack_d0 = &UNK_110842e18;
    _objc_retain(lVar5);
    puStack_110 = puVar1;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x106a22650;
    puStack_f8 = &UNK_110841f20;
    lStack_c8 = lVar5;
    _objc_retain(lVar5);
    lStack_f0 = lVar5;
    func_0x00010bf03420(0x3fc999999999999a,puVar2,param_2,&puStack_e8,&puStack_110);
    _objc_release(lStack_f0);
    _objc_release(lStack_c8);
  }
  func_0x00010c0e65a0(*(undefined8 *)(param_1 + 0xb0));
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x50),param_2,1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  return;
}



/* Entry: 106a22630; end: 106a22657;  */

void FUN_106a22630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106a22658; end: 106a2266f; -[SCChatInputAudioNoteController inputItem] */

void FUN_106a22658(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a22670; end: 106a22677; -[SCChatInputAudioNoteController style] */

undefined8 FUN_106a22670(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 106a22678; end: 106a2268f; -[SCChatInputAudioNoteController inputController] */

void FUN_106a22678(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a22690; end: 106a2269b; -[SCChatInputAudioNoteController setInputController:] */

void FUN_106a22690(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe0,param_3);
  return;
}



/* Entry: 106a2269c; end: 106a226a3; -[SCChatInputAudioNoteController state] */

undefined8 FUN_106a2269c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 106a226a4; end: 106a226ab; -[SCChatInputAudioNoteController setState:] */

void FUN_106a226a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  return;
}



/* Entry: 106a226ac; end: 106a227d3; -[SCChatInputAudioNoteController .cxx_destruct] */

void FUN_106a226ac(long param_1)

{
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_release(*(undefined8 *)(param_1 + 0x98));
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 106a227d4; end: 106a227db; -[SCChatInputAudioNoteRecordEvent audioNote] */

undefined8 FUN_106a227d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a227dc; end: 106a2280b; -[SCChatInputAudioNoteRecordEvent setAudioNote:] */

void FUN_106a227dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2280c; end: 106a22813; -[SCChatInputAudioNoteRecordEvent information] */

undefined8 FUN_106a2280c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a22814; end: 106a22843; -[SCChatInputAudioNoteRecordEvent setInformation:] */

void FUN_106a22814(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106a22844; end: 106a2284b; -[SCChatInputAudioNoteRecordEvent replyAllGroupId] */

undefined8 FUN_106a22844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a2284c; end: 106a2287b; -[SCChatInputAudioNoteRecordEvent setReplyAllGroupId:] */

void FUN_106a2284c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2287c; end: 106a228b7; -[SCChatInputAudioNoteRecordEvent .cxx_destruct] */

void FUN_106a2287c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a228b8; end: 106a22b77; -[SCChatInputAudioNotePlugin initWithAudioNotePlayer:drawerMediaSender:storyReplySender:storyShareSender:groupFetcher:activeConversationInformation:replyAllGroupId:chatLogger:messagingExperimentService:conversationEventObservable:valdiRuntimeProvider:spotlightShareSender:applicationStateProvider:inputScopeContext:] */

undefined8 *
FUN_106a228b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f4428;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cfcf0;
    _objc_alloc();
    func_0x00010bff5340();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar3);
    puVar1[0xd] = param_16;
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ba4f0;
    _objc_opt_new();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar3);
    func_0x00010bec7320(puVar1);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a22b78; end: 106a22b7f; -[SCChatInputAudioNotePlugin setChatScrollHandler:] */

void FUN_106a22b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17bd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setChatScrollHandler__11263c978);
  return;
}



/* Entry: 106a22b80; end: 106a22d2b; -[SCChatInputAudioNotePlugin _subscribeToAudioNoteEvents] */

void FUN_106a22b80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0f4e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfad7a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2b2440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x38);
  uVar2 = uVar3;
  if (lVar4 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106a22df4;
    puStack_60 = &UNK_110953968;
    lStack_58 = lVar4;
    _objc_retain(lVar4);
    func_0x00010bfb26a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
  _objc_initWeak(auStack_80,param_1);
  _objc_copyWeak(auStack_88,auStack_80);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  func_0x00010bec82c0(param_1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106a22d2c; end: 106a22d63;  */

bool FUN_106a22d2c(undefined8 param_1,long param_2)

{
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 106a22d64; end: 106a22df3;  */

void FUN_106a22d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cfcf8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c16bf00();
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010c0ec5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1ac6c0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a22df4; end: 106a22f27;  */

void FUN_106a22df4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a22f28; end: 106a23097; -[SCChatInputAudioNotePlugin _subscribeToRecordStartDestination] */

void FUN_106a22f28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + 0x68) == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106a23098;
    puStack_68 = &UNK_11084eff0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0f500(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    uVar2 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 106a23098; end: 106a23167;  */

void FUN_106a23098(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bea52c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a23168; end: 106a232fb; -[SCChatInputAudioNotePlugin _setLatestConversationInformation:] */

void FUN_106a23168(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    _objc_release(param_3);
    lVar2 = 0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    lVar2 = param_3;
    func_0x00010bf36840(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_3);
    func_0x00010c0c11e0(lVar2);
    _objc_release(lVar2);
    cVar1 = *(char *)(puStack_68 + 3);
    _objc_release(param_3);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(param_3);
    lVar2 = param_3;
    if (cVar1 == '\0') {
      lVar2 = 0;
    }
  }
  _objc_retain(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar2;
  _objc_release(uVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a232fc; end: 106a2333f; -[SCChatInputAudioNotePlugin _captureRecordStartDestinationWithType:] */

void FUN_106a232fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 106a23340; end: 106a234d7; -[SCChatInputAudioNotePlugin _redirectSendToRecordedConversation:] */

void FUN_106a23340(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x68) == 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bfee140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (((lVar2 == 0) || (lVar2 = lVar3, func_0x00010c08fa60(), lVar2 == 0)) ||
       (lVar2 = lVar1, func_0x00010c0720c0(), (int)lVar2 != 0)) {
      lVar2 = lVar1;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110e67af8;
      }
      else {
        lVar2 = lVar3;
        func_0x00010c08fa60();
        ppuVar5 = &PTR____CFConstantStringClassReference_110e67b18;
        if (lVar2 != 0) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110e67b38;
        }
      }
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x000106a1d9d4(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108461668(uVar6,ppuVar5,uVar4,1);
      _objc_release(uVar4);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x000106a1d9d4(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108461668(uVar6,&PTR____CFConstantStringClassReference_110e67ad8,uVar4,1);
      _objc_release(uVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c083900();
      _objc_release(uVar6);
      if ((int)uVar4 != 0) {
        func_0x00010c1ac6c0(param_3);
      }
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a234d8; end: 106a235d3; -[SCChatInputAudioNotePlugin configureInputItem:] */

void FUN_106a234d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_3);
  func_0x00010c23bba0(puVar1,param_2,0x2e8,3,0xcd);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x400000cd);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff800000cc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa060(param_3,param_2,puVar1,puVar2,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c1ba020(param_3,param_2,1000);
  func_0x00010c223c40(param_3,param_2,1);
  func_0x00010c1ad540(param_3,param_2,4);
  func_0x00010c160fc0(param_3,param_2,&PTR____CFConstantStringClassReference_110e67a38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a235d4; end: 106a235db; -[SCChatInputAudioNotePlugin position] */

undefined8 FUN_106a235d4(void)

{
  return 2;
}



/* Entry: 106a235dc; end: 106a235e3; -[SCChatInputAudioNotePlugin pluginType] */

undefined8 FUN_106a235dc(void)

{
  return 2;
}



/* Entry: 106a235e4; end: 106a235eb; -[SCChatInputAudioNotePlugin createDrawer] */

undefined8 FUN_106a235e4(void)

{
  return 0;
}



/* Entry: 106a235ec; end: 106a23613; -[SCChatInputAudioNotePlugin createItemController] */

void FUN_106a235ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a23614; end: 106a23da7; -[SCChatInputAudioNotePlugin _handleAudioNoteRecordEvent:] */

void FUN_106a23614(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  ulong uStack_138;
  long lStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010be87f00(param_1);
  func_0x000108461d34(*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110dbf578,1);
  lVar1 = param_1;
  func_0x00010bdeaf40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfee140(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c1319e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be74420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_a0,param_1);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106a23da8;
  puStack_b0 = &UNK_110850658;
  _objc_copyWeak(auStack_a8,auStack_a0);
  ppuVar5 = &puStack_c8;
  _objc_retainBlock();
  uVar2 = param_3;
  func_0x00010bfee140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfee140();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c06f6c0();
  if ((int)uVar3 == 0) {
    uVar3 = param_3;
    func_0x00010c1319e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0 && uVar6 != 0) {
      puVar12 = PTR_PTR_1126c2810;
      _objc_alloc(PTR_PTR_1126c2810);
      uVar3 = uVar6;
      func_0x00010c15f2e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar6;
      func_0x00010c0c5340(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010c04e240(puVar12);
      _objc_release(uVar13);
      _objc_release(uVar3);
      lVar15 = lVar4;
      func_0x000108604d34(lVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      _objc_retain(uVar16);
      ppuVar14 = *(undefined ***)(param_1 + 0x78);
      _objc_retain(ppuVar14);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c1319e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_90 = uVar3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      uStack_158 = 0x106a23f98;
      puStack_150 = &UNK_110952e30;
      _objc_retain(ppuVar5);
      uStack_148 = uVar16;
      ppuStack_120 = ppuVar5;
      _objc_retain(lVar1);
      lStack_140 = lVar1;
      _objc_retain(param_3);
      uStack_138 = param_3;
      _objc_retain(lVar4);
      lStack_130 = lVar4;
      ppuStack_128 = ppuVar14;
      func_0x00010c15d8c0(uVar7);
      _objc_release(puVar8);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(lStack_130);
      _objc_release(uStack_138);
      _objc_release(lStack_140);
      _objc_release(ppuStack_120);
      goto LAB_106a23ae0;
    }
    if ((uVar6 == 0) || (uVar3 = uVar6, func_0x00010853b5e0(), (uVar3 & 1) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bfee140(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar3;
      func_0x00010c11eca0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar13;
      func_0x00010c11ecc0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_3;
      func_0x00010bfee140();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_98 = uVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15b640(uVar7);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar13);
      _objc_release(uVar3);
      _objc_release(uVar7);
      func_0x000108461d34(*(undefined8 *)(param_1 + 0x78),
                          &PTR____CFConstantStringClassReference_110dbb9d8,1);
      goto LAB_106a23b00;
    }
    puVar12 = PTR_PTR_1126b6078;
    func_0x00010bf0f5e0(PTR_PTR_1126b6078);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bfee140();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cd40(uVar7);
    _objc_release(uVar13);
    _objc_release(uVar3);
    _objc_release(uVar7);
    func_0x000108461d34(*(undefined8 *)(param_1 + 0x78),
                        &PTR____CFConstantStringClassReference_110e12f98,1);
  }
  else {
    puVar12 = PTR_PTR_1126b5bd0;
    _objc_alloc(PTR_PTR_1126b5bd0);
    uVar3 = uVar2;
    func_0x00010c25a520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010853bdd8();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b5bd8;
    func_0x00010c24bd60(PTR_PTR_1126b5bd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000c00(puVar12);
    _objc_release(puVar8);
    _objc_release(uVar13);
    _objc_release(uVar3);
    lVar15 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar15);
    uVar16 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar16);
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_106a23e28;
    puStack_100 = &UNK_110952e30;
    _objc_retain(ppuVar5);
    lStack_f8 = lVar15;
    ppuStack_d0 = ppuVar5;
    _objc_retain(lVar1);
    lStack_f0 = lVar1;
    uStack_e8 = uVar2;
    _objc_retain(lVar4);
    lStack_e0 = lVar4;
    uStack_d8 = uVar16;
    func_0x00010c15cbe0(uVar7);
    _objc_release(puVar8);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(lStack_e0);
    _objc_release(lStack_f0);
    ppuVar14 = ppuStack_d0;
LAB_106a23ae0:
    _objc_release(ppuVar14);
    _objc_release(uVar16);
    _objc_release(lVar15);
  }
  _objc_release(puVar12);
LAB_106a23b00:
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_106a24120;
  puStack_178 = &UNK_110842e18;
  lStack_170 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_190);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume(param_3);
  lVar1 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c065820();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b6120;
  func_0x00010bf0f400(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04520(lVar4);
  _objc_release(puVar12);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a23da8; end: 106a23e27;  */

void FUN_106a23da8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c065820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6120;
  func_0x00010bf0f400(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04520(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a23e28; end: 106a2411f;  */

void FUN_106a23e28(long param_1,undefined **param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (undefined **)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11eca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c11ecc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b640(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x40);
    param_2 = &PTR____CFConstantStringClassReference_110e67b58;
    func_0x000108461d34(lVar1,&PTR____CFConstantStringClassReference_110e67b58,1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x48);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000106a23e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))();
      return;
    }
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (undefined **)0x0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bfee140(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c11eca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c11ecc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c1319e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b640(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar5);
    lVar1 = *(long *)(lVar1 + 0x40);
    func_0x000108461d34(lVar1,&PTR____CFConstantStringClassReference_110e67b78,1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x48);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000106a24004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))();
      return;
    }
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(lVar1 + 0x20);
  func_0x00010c065820(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6120;
  func_0x00010bf0f400(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04500(uVar7);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 106a24120; end: 106a2417b;  */

void FUN_106a24120(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c065820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6120;
  func_0x00010bf0f400(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04500(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2417c; end: 106a24317; -[SCChatInputAudioNotePlugin _createAudioNoteDataModelFromEvent:] */

void FUN_106a2417c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bfca8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_3,0x20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_3,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar1,param_3,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c6bf0;
  uVar4 = param_4;
  func_0x00010bf0f400(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  func_0x00010bf8b4e0(puVar2,param_3,(long)(param_1 * 1000.0));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c6bf8;
  _objc_alloc(PTR_PTR_1126c6bf8);
  puVar5 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029720(puVar3,param_3,puVar5,0xffffffffffffffff,0,0,puVar1,puVar2);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c6c08;
  _objc_alloc(PTR_PTR_1126c6c08);
  uVar4 = param_4;
  func_0x00010bf0f400(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c028f40(puVar5,param_3,uVar4,puVar3);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a24318; end: 106a2456f; -[SCChatInputAudioNotePlugin _platformAnalyticsForConversationInformation:replyAllGroupId:] */

void FUN_106a24318(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    if (param_4 == (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010bf36840(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010bf50280(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR_PTR_1126b01c0;
      func_0x00010bfcf680(PTR_PTR_1126b01c0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      puVar2 = param_4;
    }
    puVar7 = param_3;
    func_0x00010c10ad20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c0df180();
    puVar4 = param_3;
    func_0x00010c10ad20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0df160();
    puVar6 = puVar1;
    func_0x000108606910(puVar1,puVar2,puVar3,puVar5,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar7);
    puVar7 = param_3;
    func_0x00010c11eca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x000108606d64();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar4 = PTR_PTR_1126b1a40;
    _objc_opt_new(PTR_PTR_1126b1a40);
    func_0x00010bf37160(param_3);
    func_0x00010c2b9b80(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa660(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c2ac2e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010c2aa640(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010bfdb620(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2af3e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106a24570; end: 106a245cf; -[SCChatInputAudioNotePlugin willPresentContent] */

void FUN_106a24570(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_1126a5460;
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010010fab4(lVar4,puVar2);
  lVar1 = lVar4;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar4);
  if (lVar1 != 0) {
    func_0x00010c2a6880(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a245d0; end: 106a245d7; -[SCChatInputAudioNotePlugin inputItem] */

undefined8 FUN_106a245d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106a245d8; end: 106a24607; -[SCChatInputAudioNotePlugin setInputItem:] */

void FUN_106a245d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a24608; end: 106a2461f; -[SCChatInputAudioNotePlugin inputContext] */

void FUN_106a24608(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a24620; end: 106a2462b; -[SCChatInputAudioNotePlugin setInputContext:] */

void FUN_106a24620(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 106a2462c; end: 106a246f3; -[SCChatInputAudioNotePlugin .cxx_destruct] */

void FUN_106a2462c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 106a246f4; end: 106a247fb;  */

void FUN_106a246f4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c122e00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c0720c0();
    *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a247fc; end: 106a24a87; -[SCChatInputAudioNotePluginProvider initWithAudioNotePlayer:drawerMediaSender:storyReplySender:storyShareSender:groupFetcher:chatLogger:messagingExperimentService:conversationEventObservable:valdiRuntimeProvider:spotlightShareSender:applicationStateProvider:inputScopeContext:] */

undefined8 *
FUN_106a247fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f4430;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    puVar1[0xc] = param_14;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a24a88; end: 106a24a8f; -[SCChatInputAudioNotePluginProvider providerType] */

undefined8 FUN_106a24a88(void)

{
  return 1;
}



/* Entry: 106a24a90; end: 106a24b2b; -[SCChatInputAudioNotePluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

void FUN_106a24a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cfd00;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff5360();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a24b2c; end: 106a24b33; -[SCChatInputAudioNotePluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

undefined8 FUN_106a24b2c(void)

{
  return 0;
}



/* Entry: 106a24b34; end: 106a24bcf; -[SCChatInputAudioNotePluginProvider .cxx_destruct] */

void FUN_106a24b34(long param_1)

{
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



/* Entry: 106a24bd0; end: 106a24c53; -[SCChatBaseNoteMediaMessage initWithData:duration:] */

undefined1 *
FUN_106a24bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4438;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106a24c54; end: 106a24c5b; -[SCChatBaseNoteMediaMessage mediaContentType] */

undefined8 FUN_106a24c54(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 106a24c5c; end: 106a24c63; -[SCChatBaseNoteMediaMessage isZipped] */

undefined8 FUN_106a24c5c(void)

{
  return 0;
}



/* Entry: 106a24c64; end: 106a24c73; -[SCChatBaseNoteMediaMessage prepareDataToUploadForMediaId:completionHandler:] */

void FUN_106a24c64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000106a24c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 106a24c74; end: 106a24c7b; -[SCChatBaseNoteMediaMessage chatKey] */

undefined8 FUN_106a24c74(void)

{
  return 0;
}



/* Entry: 106a24c7c; end: 106a24c83; -[SCChatBaseNoteMediaMessage chatIV] */

undefined8 FUN_106a24c7c(void)

{
  return 0;
}



/* Entry: 106a24c84; end: 106a24c8b; -[SCChatBaseNoteMediaMessage duration] */

undefined8 FUN_106a24c84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a24c8c; end: 106a24c93; -[SCChatBaseNoteMediaMessage snapAttachmentUrl] */

undefined8 FUN_106a24c8c(void)

{
  return 0;
}



/* Entry: 106a24c94; end: 106a24c9b; -[SCChatBaseNoteMediaMessage venueId] */

undefined8 FUN_106a24c94(void)

{
  return 0;
}



/* Entry: 106a24c9c; end: 106a24ca3; -[SCChatBaseNoteMediaMessage isInfiniteDuration] */

undefined8 FUN_106a24c9c(void)

{
  return 0;
}



/* Entry: 106a24ca4; end: 106a24cab; -[SCChatBaseNoteMediaMessage isRotationLocked] */

undefined8 FUN_106a24ca4(void)

{
  return 0;
}



/* Entry: 106a24cac; end: 106a24cb3; -[SCChatBaseNoteMediaMessage miniThumbnailData] */

undefined8 FUN_106a24cac(void)

{
  return 0;
}



/* Entry: 106a24cb4; end: 106a24cbb; -[SCChatBaseNoteMediaMessage snapMetadata] */

undefined8 FUN_106a24cb4(void)

{
  return 0;
}



/* Entry: 106a24cbc; end: 106a24d07; -[SCChatBaseNoteMediaMessage width] */

undefined8 FUN_106a24cbc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd20();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106a24d08; end: 106a24d53; -[SCChatBaseNoteMediaMessage height] */

undefined8 FUN_106a24d08(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd00();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106a24d54; end: 106a24d5b; -[SCChatBaseNoteMediaMessage mediaOrigins] */

undefined8 FUN_106a24d54(void)

{
  return 0;
}



/* Entry: 106a24d5c; end: 106a24d63; -[SCChatBaseNoteMediaMessage data] */

undefined8 FUN_106a24d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a24d64; end: 106a24d6f; -[SCChatBaseNoteMediaMessage .cxx_destruct] */

void FUN_106a24d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a24d70; end: 106a251c3; +[SCDrawerMediaContentBuilder contentFromDrawerMedias:quotedMessageId:platformAnalytics:notificationDisplayHintEnabled:botMetadata:] */

void FUN_106a24d70(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,long param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  int iVar19;
  uint uStack_94;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c33a0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109539c8);
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  func_0x00010c206120(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ba668;
  _objc_alloc_init();
  func_0x00010c199640();
  if (param_7 != 0) {
    lVar5 = param_7;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      puVar6 = PTR_PTR_1126bc778;
      _objc_alloc_init(PTR_PTR_1126bc778);
      lVar5 = param_7;
      func_0x00010bfceb20(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(puVar6);
      _objc_release(lVar5);
      puVar7 = PTR_PTR_1126be7d8;
      _objc_alloc_init(PTR_PTR_1126be7d8);
      func_0x00010c1a4760();
      func_0x00010c276780(param_7);
      func_0x00010c218480(puVar7);
      lVar5 = param_7;
      func_0x00010bf4f340(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1733c0(puVar7);
      _objc_release(lVar5);
      puVar8 = PTR_PTR_1126be7d0;
      _objc_alloc_init(PTR_PTR_1126be7d0);
      func_0x00010c1733e0();
      puVar9 = PTR_PTR_1126be7e0;
      _objc_alloc_init(PTR_PTR_1126be7e0);
      func_0x00010c21e040();
      func_0x00010c18a500(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
  }
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109539e8);
  uVar3 = param_3;
  func_0x00010bf529e0();
  if (uVar3 < 2) {
    uVar10 = param_3;
    func_0x00010bf529e0();
    if (uVar10 == 1) {
      uVar10 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c0c4660();
      _objc_release(uVar11);
      _objc_release(uVar10);
      uStack_94 = (uint)(uVar12 == 0xb);
      uVar18 = 0x24;
      if (uVar12 != 0xb) {
        uVar18 = 5;
      }
    }
    else {
      uStack_94 = 0;
      uVar18 = 5;
    }
  }
  else {
    uStack_94 = 0;
    uVar18 = 6;
  }
  puVar6 = puVar4;
  func_0x00010bf9e280();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c245400();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar9;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar14 == (undefined *)0x0) {
    uVar15 = 5;
    uVar17 = 0;
    goto LAB_106a2510c;
  }
  puVar6 = puVar14;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c27dd80();
  _objc_release(puVar6);
  uVar15 = 2;
  iVar19 = (int)puVar7;
  if (iVar19 < 3) {
    if (iVar19 == -0x4524111) {
LAB_106a250e4:
      uVar15 = 5;
    }
    else {
      if (iVar19 == 0) {
        uVar15 = 1;
        uVar17 = 3;
        goto LAB_106a2510c;
      }
      if (iVar19 == 2) {
        uVar15 = 4;
        uVar17 = 0;
        goto LAB_106a2510c;
      }
    }
  }
  else if (iVar19 - 3U < 2) goto LAB_106a250e4;
  uVar16 = 4;
  if (iVar19 != 1) {
    uVar16 = 0;
  }
  uVar17 = 3;
  if (iVar19 != 0) {
    uVar17 = uVar16;
  }
LAB_106a2510c:
  uStack_94 = uStack_94 | param_6 ^ 1;
  if (1 < uVar3) {
    uStack_94 = 1;
  }
  uVar16 = 0;
  if (uStack_94 == 0) {
    uVar16 = uVar17;
  }
  puVar6 = puVar4;
  FUN_106a2525c(puVar4,param_5,uVar2,3,uVar18,uVar15,param_4,0,uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar14);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a251c4; end: 106a251cb;  */

void FUN_106a251c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23fe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapDoc_11266d9a8);
  return;
}



/* Entry: 106a251cc; end: 106a2525b;  */

void FUN_106a251cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c240200(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c23fe00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x000107d6ae7c(uVar1,uVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106a2525c; end: 106a25513;  */

void FUN_106a2525c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,uint param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  long unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  int *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar6 = param_7;
    uVar4 = param_2;
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(int **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (int *)((long)register0x00000008 + -0x10);
    *(uint *)((long)register0x00000008 + -0x84) = param_8;
    *(undefined **)((long)register0x00000008 + -0x90) = param_4;
    iVar1 = *(int *)register0x00000008;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(uVar4);
    _objc_retain(param_3);
    _objc_retain(lVar6);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar6 == 0) {
      *(int *)((long)register0x00000008 + -0x78) = 0;
      *(int *)((long)register0x00000008 + -0x74) = 0;
    }
    else {
      func_0x00010c067fc0(lVar6);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -0x78) = puVar2;
    }
    puVar2 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    unaff_x25 = puVar2;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (iVar1 == 0) {
      unaff_x27 = (undefined *)0x0;
      unaff_x28 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      unaff_x27 = PTR_PTR_1126c1418;
      func_0x00010bf57480();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = PTR____NSArray0__struct_11034ab48;
      if (unaff_x27 != (undefined *)0x0) {
        *(undefined **)((long)register0x00000008 + -0x70) = unaff_x27;
        unaff_x28 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    unaff_x19 = PTR_PTR_1126be6d0;
    _objc_alloc();
    *(undefined **)((long)register0x00000008 + -0x80) = param_1;
    func_0x00010bf63640(param_1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x25;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    param_2 = *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined **)((long)register0x00000008 + -0x90) = param_3;
    puVar2 = unaff_x23;
    func_0x00010c002b80();
    unaff_x21 = unaff_x19;
    func_0x00010c2a8220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)((long)register0x00000008 + -0x78);
    unaff_x24 = unaff_x21;
    func_0x00010c2b66c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x21);
    _objc_release(unaff_x19);
    _objc_release(unaff_x23);
    _objc_release(param_1);
    uVar3 = uVar4;
    param_4 = param_3;
    func_0x000108606f6c();
    param_1 = puVar5;
    param_3 = puVar2;
    if ((int)uVar3 != 0) {
      unaff_x19 = PTR_PTR_1126be7b0;
      _objc_alloc_init();
      param_1 = unaff_x19;
      func_0x00010c2ad920(unaff_x24);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x19);
      param_3 = puVar2;
    }
    unaff_x26 = unaff_x24;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x24);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x25);
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x78));
    _objc_release(lVar6);
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x90));
    _objc_release(uVar4);
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x80));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
    break;
    unaff_x30 = FUN_106a25514;
    ___stack_chk_fail();
    param_7 = *(long *)((long)register0x00000008 + -0x90);
    param_8 = (uint)*(byte *)((long)register0x00000008 + -0x88);
    *(int *)((long)register0x00000008 + -0x90) = *(int *)((long)register0x00000008 + -0x84);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    unaff_x20 = uVar4;
    unaff_x22 = lVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x26);
  return;
}



/* Entry: 106a25514; end: 106a25547; +[SCDrawerMediaContentBuilder contentFromContents:analyticsDataModel:localMediaReferences:contentType:metricsMessageType:metricsMessageMediaType:quotedMessageId:allowsTranscription:notificationDisplayHintType:] */

void FUN_106a25514(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *unaff_x19;
  long unaff_x20;
  undefined *unaff_x21;
  long unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  long *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar4 = param_4;
    lVar5 = *(long *)register0x00000008;
    *(int *)register0x00000008 = *(int *)((long)register0x00000008 + 0xc);
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(long **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (long *)((long)register0x00000008 + -0x10);
    *(uint *)((long)register0x00000008 + -0x84) = (uint)*(byte *)((long)register0x00000008 + 8);
    *(undefined **)((long)register0x00000008 + -0x90) = param_6;
    lVar2 = *(long *)register0x00000008;
    *(long *)((long)register0x00000008 + -0x68) = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(lVar4);
    _objc_retain(param_5);
    _objc_retain(lVar5);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar5 == 0) {
      *(long *)((long)register0x00000008 + -0x78) = 0;
    }
    else {
      func_0x00010c067fc0(lVar5);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -0x78) = puVar1;
    }
    puVar1 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    unaff_x25 = puVar1;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if ((int)lVar2 == 0) {
      unaff_x27 = (undefined *)0x0;
      unaff_x28 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      unaff_x27 = PTR_PTR_1126c1418;
      func_0x00010bf57480();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = PTR____NSArray0__struct_11034ab48;
      if (unaff_x27 != (undefined *)0x0) {
        *(undefined **)((long)register0x00000008 + -0x70) = unaff_x27;
        unaff_x28 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    unaff_x19 = PTR_PTR_1126be6d0;
    _objc_alloc();
    *(undefined **)((long)register0x00000008 + -0x80) = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x25;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    param_4 = *(long *)((long)register0x00000008 + -0x90);
    *(undefined **)((long)register0x00000008 + -0x90) = param_5;
    puVar1 = unaff_x23;
    func_0x00010c002b80();
    unaff_x21 = unaff_x19;
    func_0x00010c2a8220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)((long)register0x00000008 + -0x78);
    unaff_x24 = unaff_x21;
    func_0x00010c2b66c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x21);
    _objc_release(unaff_x19);
    _objc_release(unaff_x23);
    _objc_release(param_3);
    lVar2 = lVar4;
    param_6 = param_5;
    func_0x000108606f6c();
    param_3 = puVar3;
    param_5 = puVar1;
    if ((int)lVar2 != 0) {
      unaff_x19 = PTR_PTR_1126be7b0;
      _objc_alloc_init();
      param_3 = unaff_x19;
      func_0x00010c2ad920(unaff_x24);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x19);
      param_5 = puVar1;
    }
    unaff_x26 = unaff_x24;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x24);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x25);
    _objc_release(*(long *)((long)register0x00000008 + -0x78));
    _objc_release(lVar5);
    _objc_release(*(long *)((long)register0x00000008 + -0x90));
    _objc_release(lVar4);
    _objc_release(*(long *)((long)register0x00000008 + -0x80));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
    break;
    unaff_x30 = FUN_106a25514;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    unaff_x20 = lVar4;
    unaff_x22 = lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x26);
  return;
}



/* Entry: 106a25548; end: 106a2565f; -[SCDrawerMediaSender initWithCoreMessageSender:externalMediaPreparer:voiceNoteTranscriptionService:messagingExperimentService:] */

undefined1 *
FUN_106a25548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4440;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ba4f0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a25660; end: 106a2588b; -[SCDrawerMediaSender sendDrawerMedias:quotedMessageId:conversationIds:platformAnalytics:botMetadata:completionHandler:] */

void FUN_106a25660(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
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
  puVar11 = param_3;
  lVar10 = param_4;
  lVar7 = param_5;
  lVar8 = param_6;
  uVar12 = param_7;
  uVar9 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if ((puVar1 != (undefined *)0x0) && (lVar2 = param_5, func_0x00010bf529e0(), lVar2 != 0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    if (puVar1 != (undefined *)0x0) {
      lVar10 = *plStack_120;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          uVar12 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
          lVar7 = param_6;
          func_0x00010c294d60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be79660(param_1,param_2,uVar12,lVar7,param_5);
          _objc_release(lVar7);
          puVar11 = puVar11 + 1;
        } while (puVar1 != puVar11);
        puVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar1 = PTR_PTR_1126cfaf0;
    func_0x00010bf4c600(PTR_PTR_1126cfaf0,param_2,param_3,param_4,param_6,1,param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = 0;
    lVar8 = 0;
    puVar11 = puVar1;
    lVar10 = param_5;
    uVar12 = param_8;
    func_0x00010c15c280();
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  _objc_retain(lVar7);
  _objc_retain(lVar8);
  _objc_retain(uVar12);
  _objc_retain(uVar9);
  lVar2 = lVar8;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x000107d6b2ec(lVar10);
    puVar1 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar4 = puVar1;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002b60(puVar1,param_2,puVar11,3,puVar5,lVar7,1);
    puVar6 = puVar1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar5);
    uVar3 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c280();
    _objc_release(uVar3);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(uVar9);
  _objc_release(uVar12);
  _objc_release(lVar8);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 106a2588c; end: 106a25a23; -[SCDrawerMediaSender forwardExternalMedias:mediaType:localMediaReferences:conversationIds:platformAnalytics:completionHandler:] */

void FUN_106a2588c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_6;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x000107d6b2ec(param_4);
    puVar2 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar3 = puVar2;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002b60(puVar2,param_2,param_3,3,puVar4,param_5,1);
    puVar5 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c280();
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a25a24; end: 106a25bc7; -[SCDrawerMediaSender sendGif:quotedMessageId:conversationIds:platformAnalytics:completionHandler:] */

void FUN_106a25a24(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  lVar6 = param_4;
  lVar7 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 != (undefined *)0x0) && (lVar1 = param_5, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar4 = param_6;
    func_0x00010c294d60(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be79660(param_1,param_2,param_3,uVar4,param_5);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126cfaf0;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c600(puVar3,param_2,puVar2,param_4,param_6,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = 0;
    puVar2 = puVar3;
    lVar6 = param_5;
    func_0x00010c15c280();
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(lVar6);
  _objc_retain(lVar7);
  if ((puVar2 != (undefined *)0x0) && (lVar1 = lVar6, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c3fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0c5900(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a360(uVar4,param_2,puVar3,puVar5,lVar7,0,lVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a25bc8; end: 106a25cab; -[SCDrawerMediaSender prepareUploadForAudioNote:conversationIds:trackingId:] */

void FUN_106a25bc8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0c5900(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a360(uVar2,param_2,lVar1,lVar3,param_5,0,param_4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a25cac; end: 106a25fff; -[SCDrawerMediaSender sendAudioNote:quotedMessageId:conversationIds:platformAnalytics:completionHandler:] */

void FUN_106a25cac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 != 0) && (lVar1 = param_5, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0c5900(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010c294d60(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a360(uVar2);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be4f460();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(param_6);
    _objc_retain(param_4);
    lVar3 = param_3;
    func_0x00010c0c5900();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x000107d6b30c();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cf250;
    _objc_alloc_init(PTR_PTR_1126cf250);
    func_0x00010c1cdd20();
    func_0x00010c21eae0(puVar6);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126cf258;
    _objc_alloc_init(PTR_PTR_1126cf258);
    func_0x00010c16ba00();
    puVar8 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    func_0x00010c1cdd20();
    lVar9 = lVar3;
    func_0x000107d6ad3c();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126cfaf0;
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c5e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    func_0x00010c15c280(uVar4);
    _objc_release(puVar11);
    _objc_release(lVar1);
    _objc_release(uVar4);
    func_0x000108461d34(*(undefined8 *)(param_1 + 0x28),
                        &PTR____CFConstantStringClassReference_110e67b98,1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  puVar11 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar11;
  func_0x00010c087ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0817a0();
  puVar11 = puVar6;
  if ((int)uVar4 == 0) {
    puVar11 = (undefined *)0x0;
  }
  _objc_retain(puVar11);
  _objc_release(uVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106a26000; end: 106a26093; -[SCDrawerMediaSender _locale] */

void FUN_106a26000(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c087ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0817a0();
  puVar1 = puVar2;
  if ((int)uVar4 == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


