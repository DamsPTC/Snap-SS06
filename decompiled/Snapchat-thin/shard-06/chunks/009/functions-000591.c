/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f4fb14; end: 104f4fbd7; -[SCFriendClearConversationAction _handleClearConversationTappedWithSender:] */

void FUN_104f4fb14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef20();
  _objc_release(uVar2);
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,7);
  puVar1 = PTR_PTR_1126b2a28;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f4fbd8;
  puStack_48 = &UNK_110848bd8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf85460(puVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f4fbd8; end: 104f4fbeb;  */

void FUN_104f4fbd8(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__clearConversationConfirmedWithS_112555a00,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 104f4fbec; end: 104f4fe37; -[SCFriendClearConversationAction _clearConversationConfirmedWithSender:] */

void FUN_104f4fbec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_104f4fe38;
  uStack_110 = 0x104f4fe48;
  uStack_108 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfba060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf51e00();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar5 = *(undefined8 *)(lVar4 * 8);
      func_0x00010bf96da0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c0020();
      _objc_release(uVar5);
      if (puStack_128[5] != 0) goto LAB_104f4fd94;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
LAB_104f4fd94:
  _objc_release(lVar2);
  func_0x00010bde01a0(param_1);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  return;
}



/* Entry: 104f4fe38; end: 104f4fe4f;  */

void FUN_104f4fe38(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f4fe50; end: 104f4fecb;  */

void FUN_104f4fe50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(uVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104f4fecc; end: 104f4fed3;  */

void FUN_104f4fecc(void)

{
  return;
}



/* Entry: 104f4fed4; end: 104f4ff6b; -[SCFriendClearConversationAction _clearConversationForFeedItem:sender:] */

void FUN_104f4fed4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bfa3d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b440(uVar2,param_2,lVar1,1);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f4ff6c; end: 104f4ff73; -[SCFriendClearConversationAction position] */

undefined8 FUN_104f4ff6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f4ff74; end: 104f4ff7b; -[SCFriendClearConversationAction prominentActionButton] */

undefined8 FUN_104f4ff74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f4ff7c; end: 104f4ffdb; -[SCFriendClearConversationAction .cxx_destruct] */

void FUN_104f4ff7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f4ffdc; end: 104f50467; -[SCFriendMessageCustomSoundsAction initWithFriendSnapchatter:context:conversationServices:conversationIdServices:plusServices:pageScopeFactoryServices:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:circumstanceEngine:soundType:] */

undefined8 *
FUN_104f4ffdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined **param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined8 uStack_128;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_90 = PTR_PTR_1126e52f8;
  puVar1 = &uStack_98;
  puVar7 = PTR_s_init_1125d9248;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  ppuVar9 = param_9;
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
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uStack_128 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release();
    puVar1[10] = param_12;
    if (param_12 == 1) {
      puVar1[0xc] = 0x22;
      func_0x000104f625e8();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_12 == 0) {
      puVar1[0xc] = 0x12;
      func_0x000104f623a8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uStack_128 = 0;
    }
    _objc_initWeak(auStack_a0,puVar1);
    puVar3 = PTR_PTR_1126b10a0;
    func_0x00010c296e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104f50468;
    puStack_b0 = &UNK_110852cd0;
    _objc_copyWeak(auStack_a8,auStack_a0);
    puVar4 = puVar3;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1 + 0xe;
    uVar2 = *puVar8;
    *puVar8 = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    func_0x00010c195460(*puVar8);
    uVar2 = param_6;
    func_0x00010bf50420();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b01c0;
    lVar6 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_f0 = puVar7;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_104f504b0;
    puStack_d8 = &UNK_110842c58;
    ppuVar9 = &puStack_f0;
    puVar7 = auStack_a0;
    _objc_copyWeak(auStack_d0,puVar7);
    func_0x00010bf504e0(uVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uStack_128);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar9 + 4);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume(param_3);
  _objc_retain(puVar7);
  puVar1 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained(puVar1);
  func_0x00010be27080();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 104f50468; end: 104f504af;  */

void FUN_104f50468(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f504b0; end: 104f5051f;  */

void FUN_104f504b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdfdd80(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f50520; end: 104f50577; -[SCFriendMessageCustomSoundsAction _didFetchConversationId:] */

void FUN_104f50520(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = param_3;
    _objc_release(uVar1);
    func_0x00010c195460(*(undefined8 *)(param_1 + 0x70),param_2,1);
    func_0x00010bee0600(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f50578; end: 104f50593; -[SCFriendMessageCustomSoundsAction _updateSoundName] */

void FUN_104f50578(long param_1)

{
  if (*(long *)(param_1 + 0x50) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bedec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateRingtoneSoundName_1125954b0);
    return;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bedc390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateNotificationSoundName_112594a88);
    return;
  }
  return;
}



/* Entry: 104f50594; end: 104f50757; -[SCFriendMessageCustomSoundsAction _updateNotificationSoundName] */

void FUN_104f50594(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf619c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252440();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 3) {
      func_0x000107fd4248();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beeeee0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220340();
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
    _objc_initWeak(auStack_48,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf50600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfa5f20(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 104f50758; end: 104f50813;  */

void FUN_104f50758(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f50814;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104f50814; end: 104f508a7;  */

void FUN_104f50814(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf619a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2827c0();
  if (0xc < uVar2) {
    uVar2 = 0;
  }
  func_0x000107fd4144(uVar2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f508a8; end: 104f50a77; -[SCFriendMessageCustomSoundsAction _updateRingtoneSoundName] */

void FUN_104f508a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf61b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252440();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 3) {
      puVar8 = PTR_PTR_1126b2a30;
      func_0x00010c09e660(PTR_PTR_1126b2a30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beeeee0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220340();
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
    _objc_initWeak(auStack_48,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf50600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfa5f20(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 104f50a78; end: 104f50b33;  */

void FUN_104f50a78(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f50b34;
  puStack_48 = &UNK_110841fb0;
  _objc_retain(param_2);
  uStack_40 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 104f50b34; end: 104f50bdb;  */

void FUN_104f50b34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b2a30;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf61b60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf61b20(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2a30;
  func_0x00010c09e660(PTR_PTR_1126b2a30,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340();
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104f50bdc; end: 104f50daf; -[SCFriendMessageCustomSoundsAction _handleCellTappedWithActionSheet:] */

void FUN_104f50bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010be51640(param_1);
    if (((*(long *)(param_1 + 0x50) == 0) && (lVar6 = *(long *)(param_1 + 0x30), lVar6 != 0)) &&
       (*(long *)(param_1 + 0x38) != 0)) {
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 != 0) goto LAB_104f50d04;
      puVar7 = *(undefined **)(param_1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0cfc40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf22d60(puVar7,param_2,uVar3,0x29,2,uVar2,param_1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar7);
    }
    else {
      if (*(long *)(param_1 + 0x58) != 0) goto LAB_104f50d04;
      puVar7 = PTR_PTR_1126b2a38;
      _objc_alloc(PTR_PTR_1126b2a38);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf85d80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0cfc40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c247a20(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c15ffa0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = (undefined1)*(undefined8 *)(param_1 + 8);
      func_0x00010901ca64();
      func_0x00010c004d00(puVar7,param_2,uVar8,uVar2,uVar3,uVar4,uVar5,param_1,uVar9,uVar1);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf21f80(uVar2,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = uVar2;
      _objc_release(uVar3);
    }
    _objc_release(puVar7);
  }
LAB_104f50d04:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f50db0; end: 104f50dd7; -[SCFriendMessageCustomSoundsAction _logCellTap] */

void FUN_104f50db0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar1 = 0xd1;
  }
  else {
    if (*(long *)(param_1 + 0x50) != 1) {
      return;
    }
    uVar1 = 0xe1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a0450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_logActionWithName__112605b20,uVar1);
  return;
}



/* Entry: 104f50dd8; end: 104f50e03; -[SCFriendMessageCustomSoundsAction customNotificationSoundsPageDidDismiss] */

void FUN_104f50dd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee0610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSoundName_112595b28);
  return;
}



/* Entry: 104f50e04; end: 104f50e07; -[SCFriendMessageCustomSoundsAction willDisplayChatCustomizationHubScope:] */

void FUN_104f50e04(void)

{
  return;
}



/* Entry: 104f50e08; end: 104f50e5f; -[SCFriendMessageCustomSoundsAction didRequestDismissal:] */

void FUN_104f50e08(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f50e60;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104f50e60; end: 104f50eb3;  */

void FUN_104f50e60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f50eb4; end: 104f50eff; -[SCFriendMessageCustomSoundsAction didDismissChatCustomizationHubScope:] */

void FUN_104f50eb4(long param_1)

{
  long lVar1;
  
  func_0x00010bee0600();
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f50f00; end: 104f50f07; -[SCFriendMessageCustomSoundsAction position] */

undefined8 FUN_104f50f00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104f50f08; end: 104f50f0f; -[SCFriendMessageCustomSoundsAction prominentActionButton] */

undefined8 FUN_104f50f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104f50f10; end: 104f50f17; -[SCFriendMessageCustomSoundsAction actionSheetCell] */

undefined8 FUN_104f50f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104f50f18; end: 104f50fbf; -[SCFriendMessageCustomSoundsAction .cxx_destruct] */

void FUN_104f50f18(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 104f50fc0; end: 104f51347; -[SCFriendMessageRetentionAction initWithFriendSnapchatter:context:chatMessageActionHandler:conversationIdResolver:withAccessibilityIdentifier:] */

undefined8 *
FUN_104f50fc0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined **param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined **ppuVar9;
  ulong uStack_110;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_90 = PTR_PTR_1126e5300;
  puVar1 = &uStack_98;
  puVar7 = PTR_s_init_1125d9248;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  ppuVar9 = param_7;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    puVar8 = puVar1 + 1;
    uVar2 = *puVar8;
    *puVar8 = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar3 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar3);
    puVar1[8] = 0xe;
    uStack_110 = *puVar8;
    func_0x00010901c54c();
    if ((uStack_110 & 1) == 0) {
      func_0x000104f625d0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000104f62600();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126b10a0;
    func_0x00010c296e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165ea0();
    _objc_initWeak(auStack_a0,puVar1);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104f51348;
    puStack_b0 = &UNK_110852cd0;
    _objc_copyWeak(auStack_a8,auStack_a0);
    puVar5 = puVar4;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[10];
    puVar1[10] = puVar5;
    _objc_release(uVar3);
    func_0x00010c195460(puVar4);
    func_0x00010c160fc0(puVar4);
    uVar3 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b01c0;
    uVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_f8 = puVar7;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_104f51390;
    puStack_e0 = &UNK_11085c6a8;
    ppuVar9 = &puStack_f8;
    puVar7 = auStack_a0;
    _objc_copyWeak(auStack_d0,puVar7);
    puStack_d8 = puVar4;
    func_0x00010bf504e0(uVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_release(puVar4);
    _objc_release(uStack_110);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar9 + 5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume(param_3);
  _objc_retain(puVar7);
  puVar1 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained(puVar1);
  func_0x00010be2c440();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 104f51348; end: 104f5138f;  */

void FUN_104f51348(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f51390; end: 104f51403;  */

void FUN_104f51390(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be12920(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f51404; end: 104f5150b; -[SCFriendMessageRetentionAction _fetchMessageRetentionWithConversationId:cell:] */

void FUN_104f51404(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    func_0x00010bfa5f20(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f5150c; end: 104f51597;  */

void FUN_104f5150c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0cb880(param_2);
  uVar1 = param_2;
  func_0x00010bf12980(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be692e0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f51598; end: 104f5169f; -[SCFriendMessageRetentionAction _onFetchedConversation:availableRetentionModes:cell:] */

void FUN_104f51598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104f516a0;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_5);
  uStack_50 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f516a0; end: 104f516d7;  */

void FUN_104f516a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f516d8; end: 104f5175f; -[SCFriendMessageRetentionAction _setMessageRetentionMode:cell:] */

void FUN_104f516d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_4);
  func_0x000107d40874(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340(param_4,param_2,param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010beeeee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f51760; end: 104f51837; -[SCFriendMessageRetentionAction _handleMessageNotificationsTappedWithActionSheet:] */

void FUN_104f51760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x18),param_2,0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107d3fcb4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126b2a40;
    _objc_alloc();
    func_0x00010bfee6a0();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x28);
  }
  uVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(lVar4,param_2,param_3,uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f51838; end: 104f5186b; -[SCFriendMessageRetentionAction didStartChangeRetentionPolicy] */

void FUN_104f51838(undefined8 param_1)

{
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5186c; end: 104f51927; -[SCFriendMessageRetentionAction didChangeRetentionPolicyWithSuccess:retentionMode:] */

void FUN_104f5186c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104f51928;
  puStack_58 = &UNK_11085da78;
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_4;
  uStack_40 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f51928; end: 104f5195f;  */

void FUN_104f51928(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfca60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f51960; end: 104f519eb; -[SCFriendMessageRetentionAction _didChangeRetentionPolicyWithSuccess:retentionMode:] */

void FUN_104f51960(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0x30) = param_4;
    func_0x000107d40874(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010beeeee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220340();
    _objc_release(lVar1);
    _objc_release(param_4);
  }
  func_0x00010beeeee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f519ec; end: 104f519f3; -[SCFriendMessageRetentionAction position] */

undefined8 FUN_104f519ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f519f4; end: 104f519fb; -[SCFriendMessageRetentionAction prominentActionButton] */

undefined8 FUN_104f519f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f519fc; end: 104f51a03; -[SCFriendMessageRetentionAction actionSheetCell] */

undefined8 FUN_104f519fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104f51a04; end: 104f51a7b; -[SCFriendMessageRetentionAction .cxx_destruct] */

void FUN_104f51a04(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f51a7c; end: 104f51c07; -[SCFriendMessageSnapstreakReminderAction initWithConversationId:friendUserId:context:conversationServices:notificationServices:notificationPermissionServices:userTrackedBlizzardLogger:] */

undefined1 *
FUN_104f51a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5308;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = 0x11;
    func_0x00010beab7a0(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f51c08; end: 104f51d87; -[SCFriendMessageSnapstreakReminderAction _setupCell] */

void FUN_104f51c08(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126b10a0;
  lVar1 = param_1;
  func_0x000104f626a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2655e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x000104f626c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0(puVar2);
  _objc_release(lVar1);
  func_0x00010c195460(puVar2);
  _objc_initWeak(auStack_38,puVar2);
  _objc_initWeak(auStack_40,param_1);
  _objc_copyWeak(auStack_50,auStack_38);
  _objc_copyWeak(auStack_48,auStack_40);
  func_0x00010bf1d200(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
  _objc_release(uVar3);
  func_0x00010be0f860(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  return;
}



/* Entry: 104f51d88; end: 104f51df3;  */

void FUN_104f51d88(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be31e40();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f51df4; end: 104f51f03; -[SCFriendMessageSnapstreakReminderAction _fetchAndUpdate] */

void FUN_104f51df4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfa5f80(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104f51f04; end: 104f51fc3;  */

void FUN_104f51f04(long param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104f51fc4;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104f51fc4; end: 104f5200b;  */

void FUN_104f51fc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25c120(uVar2);
  func_0x00010bed50c0(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f5200c; end: 104f5205f; -[SCFriendMessageSnapstreakReminderAction _updateCellWithStreakReminderEnabled:cell:animated:] */

void FUN_104f5200c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  func_0x00010c1fade0(param_4,param_2,param_3,param_5);
  func_0x00010c195460(param_4,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f52060; end: 104f523a7; -[SCFriendMessageSnapstreakReminderAction _handleTappedWithActionSheet:cell:] */

void FUN_104f52060(long param_1,undefined1 *param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [8];
  byte bStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar8 = &puStack_e0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c07d660();
  func_0x00010c195460(param_4);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0dc400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c079e00();
    puVar4 = PTR_PTR_1126aed70;
    if ((int)uVar3 != 0) {
      func_0x000104f62720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126aed70;
      func_0x000104f62738();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x104f523f4;
      puStack_88 = &UNK_110848c78;
      _objc_retain(param_4);
      uStack_80 = param_4;
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar6 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      puVar7 = puVar6;
      func_0x000104f626f0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = (undefined **)puVar7;
      func_0x000104f62708();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar4;
      puStack_70 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ec0(puVar6);
      _objc_release(puVar9);
      _objc_release(ppuVar8);
      _objc_release(puVar7);
      func_0x00010c10eda0(param_3);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uStack_80);
      _objc_release(puVar4);
      _objc_release(uVar2);
      goto LAB_104f52330;
    }
    _objc_release(uVar2);
  }
  func_0x00010be59d40(param_1);
  _objc_initWeak(auStack_a8,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_104f52478;
  puStack_c8 = &UNK_110853630;
  param_2 = auStack_a8;
  _objc_copyWeak(auStack_b8,param_2);
  bStack_b0 = (byte)uVar1 ^ 1;
  _objc_retain(param_4);
  uStack_c0 = param_4;
  func_0x00010c0d05a0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_a8);
LAB_104f52330:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)ppuVar8 + 0x28));
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             &PTR___NSConcreteGlobalBlock_11085daf8);
  return;
}



/* Entry: 104f523a8; end: 104f523bb;  */

void FUN_104f523a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             &PTR___NSConcreteGlobalBlock_11085daf8);
  return;
}



/* Entry: 104f523bc; end: 104f5246b;  */

void FUN_104f523bc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f5246c; end: 104f52477;  */

void FUN_104f5246c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setEnabled__112642f38,1);
  return;
}



/* Entry: 104f52478; end: 104f52533;  */

void FUN_104f52478(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104f52534;
  puStack_50 = &UNK_110859060;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uStack_37 = *(undefined1 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 104f52534; end: 104f5256f;  */

void FUN_104f52534(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f52570; end: 104f525cb; -[SCFriendMessageSnapstreakReminderAction _handleModifyResult:enabled:cell:] */

void FUN_104f52570(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if ((param_3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setEnabled__112642f38,1);
    return;
  }
  func_0x00010bed50c0(param_1,param_2,param_4,param_5,1);
  if ((int)param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentEnabledToast_11257c650);
    return;
  }
  return;
}



/* Entry: 104f525cc; end: 104f52677; -[SCFriendMessageSnapstreakReminderAction _logToggleWithEnabled:] */

void FUN_104f525cc(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b2a48;
  _objc_opt_new(PTR_PTR_1126b2a48);
  func_0x00010c161620();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc318;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbc338;
  }
  func_0x00010c1b5f20(puVar2,param_2,ppuVar1);
  func_0x00010c1b6340(puVar2,param_2,0x1c);
  func_0x00010c1d8800(puVar2,param_2,0x6a);
  func_0x00010c1844c0(puVar2,param_2,*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f52678; end: 104f52797; -[SCFriendMessageSnapstreakReminderAction _presentEnabledToast] */

void FUN_104f52678(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126ae558;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bb80(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,0x80,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126b0ae0;
  func_0x000104f62678();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x000104f626d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57ee0(puVar4,param_2,puVar2,puVar1,puVar3,0,1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dc640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f52798; end: 104f5279f; -[SCFriendMessageSnapstreakReminderAction position] */

undefined8 FUN_104f52798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f527a0; end: 104f527a7; -[SCFriendMessageSnapstreakReminderAction prominentActionButton] */

undefined8 FUN_104f527a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f527a8; end: 104f527af; -[SCFriendMessageSnapstreakReminderAction actionSheetCell] */

undefined8 FUN_104f527a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104f527b0; end: 104f52833; -[SCFriendMessageSnapstreakReminderAction .cxx_destruct] */

void FUN_104f527b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104f52834; end: 104f52a13; -[SCFriendMuteChatsOrCallsAction initWithFriendUserId:muteType:context:notificationServices:conversationUpdatesPublisher:actionHandler:withAccessibilityIdentifier:] */

undefined1 *
FUN_104f52834(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5310;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(long *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x68) = 0x10;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release();
    if (param_4 == 1) {
      func_0x000104f62420();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 0) {
      func_0x000104f62408();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bddc140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined1 **)((long)puVar1 + 0x70) = puVar4;
    _objc_release(uVar2);
    func_0x00010be0f5a0(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f52a14; end: 104f52b5b; -[SCFriendMuteChatsOrCallsAction _cell] */

void FUN_104f52a14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126b10a0;
  puVar3 = *(undefined **)(param_1 + 0x70);
  _objc_retain(puVar3);
  _objc_opt_class(puVar1);
  puVar2 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b10a0;
    func_0x00010c2655e0(PTR_PTR_1126b10a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    func_0x00010c195460(puVar3);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf1d200(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_retain(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    _objc_retain(puVar3);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f52b5c; end: 104f52ba3;  */

void FUN_104f52b5c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f52ba4; end: 104f52cd7; -[SCFriendMuteChatsOrCallsAction _fetchAndObserveConvo] */

void FUN_104f52ba4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa4ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104f52cd8; end: 104f52d47;  */

void FUN_104f52cd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf500c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be80b00(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f52d48; end: 104f52e77; -[SCFriendMuteChatsOrCallsAction _processConvo:] */

void FUN_104f52d48(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x48);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_104f52e5c;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(ulong *)(param_1 + 0x48) = param_3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x50) = uVar1;
    _objc_release(uVar2);
    _objc_release(uVar3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104f52e78;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
  }
LAB_104f52e5c:
  _objc_release(param_3);
  return;
}



/* Entry: 104f52e78; end: 104f52e7f;  */

void FUN_104f52e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea8f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__setUpCell_112587d88)
  ;
  return;
}



/* Entry: 104f52e80; end: 104f530bb; -[SCFriendMuteChatsOrCallsAction _setUpCell] */

void FUN_104f52e80(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  
  lVar1 = param_2;
  func_0x00010bddc140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_2 + 0x10) == 1) {
    lVar2 = *(long *)(param_2 + 0x48);
    func_0x000107d063f8(lVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (0.0 < param_1) {
      dVar7 = (double)(long)(param_1 / 60.0);
      if (60.0 <= dVar7) {
        dVar7 = (double)(long)(param_1 / 3600.0);
        func_0x000104f62588();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000104f62570();
        _objc_retainAutoreleasedReturnValue();
      }
LAB_104f53024:
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c5c0(lVar1,param_3,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      goto LAB_104f5307c;
    }
    lVar2 = *(long *)(param_2 + 0x48);
    func_0x00010bf28800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf69d60();
    _objc_release(lVar2);
    if (lVar3 == 1) {
      func_0x000104f62558();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104f52fb0;
    }
LAB_104f52fc4:
    func_0x00010c18c5c0(lVar1,param_3,0);
    uVar6 = 0;
  }
  else {
    if (*(long *)(param_2 + 0x10) != 0) goto LAB_104f53094;
    lVar2 = *(long *)(param_2 + 0x48);
    func_0x000107d063b4(lVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (0.0 < param_1) {
      dVar7 = (double)(long)(param_1 / 60.0);
      if (60.0 <= dVar7) {
        dVar7 = (double)(long)(param_1 / 3600.0);
        func_0x000104f624f8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000104f624e0();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104f53024;
    }
    lVar2 = *(long *)(param_2 + 0x48);
    func_0x00010bf370e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf69d60();
    _objc_release(lVar2);
    if (lVar3 != 1) goto LAB_104f52fc4;
    func_0x000104f624c8();
    _objc_retainAutoreleasedReturnValue();
LAB_104f52fb0:
    func_0x00010c18c5c0(lVar1,param_3,lVar2);
LAB_104f5307c:
    _objc_release(lVar2);
    uVar6 = 1;
  }
  func_0x00010c1fade0(lVar1,param_3,uVar6,0);
LAB_104f53094:
  func_0x00010c195460(lVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f530bc; end: 104f53473; -[SCFriendMuteChatsOrCallsAction _handleMessageNotificationsTappedWithActionSheet:] */

void FUN_104f530bc(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bddc140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d660();
  func_0x00010c0a0440(*(undefined8 *)(param_2 + 0x18));
  if ((uVar2 & 1) == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104f53474;
    puStack_70 = &UNK_11085db18;
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_11117e4f0;
    uStack_68 = param_2;
    func_0x000100504554(&PTR__OBJC_CLASS___NSConstantArray_11117e4f0,&puStack_88);
    ppuVar4 = ppuVar3;
    func_0x000100504554();
    puVar6 = PTR_PTR_1126b10a0;
    ppuVar5 = ppuVar4;
    func_0x000104f62330();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    puVar6 = PTR_PTR_1126b10a8;
    _objc_alloc(PTR_PTR_1126b10a8);
    func_0x00010c019f40();
    func_0x00010c10af80(param_4);
    uVar9 = *(undefined8 *)(param_2 + 0x60);
    *(undefined ***)(param_2 + 0x60) = ppuVar3;
    _objc_release(uVar9);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(ppuVar4);
    goto LAB_104f53410;
  }
  func_0x00010c195460(uVar1);
  _objc_initWeak(auStack_90,param_2);
  if (*(long *)(param_2 + 0x10) == 1) {
    func_0x000107d063f8(*(undefined8 *)(param_2 + 0x48));
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    if ((long)param_1 < 1) {
      puVar8 = auStack_110;
      _objc_copyWeak(puVar8,auStack_90);
      func_0x00010bf50300(uVar9);
    }
    else {
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      uStack_f8 = 0x104f53658;
      puStack_f0 = &UNK_110849200;
      puVar8 = auStack_e8;
      _objc_copyWeak(puVar8,auStack_90);
      func_0x00010bf50340(uVar9);
    }
LAB_104f53400:
    _objc_destroyWeak(puVar8);
  }
  else if (*(long *)(param_2 + 0x10) == 0) {
    func_0x000107d063b4(*(undefined8 *)(param_2 + 0x48));
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    if (param_1 <= 0.0) {
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x104f53624;
      puStack_c8 = &UNK_110849200;
      puVar8 = auStack_c0;
      _objc_copyWeak(puVar8,auStack_90);
      func_0x00010bf50320(uVar9);
    }
    else {
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_104f535f0;
      puStack_a0 = &UNK_110849200;
      puVar8 = auStack_98;
      _objc_copyWeak(puVar8,auStack_90);
      func_0x00010bf50360(uVar9);
    }
    goto LAB_104f53400;
  }
  _objc_destroyWeak(auStack_90);
LAB_104f53410:
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 104f53474; end: 104f5357f;  */

void FUN_104f53474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  func_0x00010c067ec0();
  puVar1 = PTR_PTR_1126b2a50;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c015e00(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f53580; end: 104f535df;  */

void FUN_104f53580(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b10a0;
  _objc_opt_class(PTR_PTR_1126b10a0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f535e0; end: 104f535ef;  */

void FUN_104f535e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f535f0; end: 104f536bf;  */

void FUN_104f535f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f536c0; end: 104f5371b; -[SCFriendMuteChatsOrCallsAction _onUpdatedNotificationStatus:] */

void FUN_104f536c0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_104f5371c;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 104f5371c; end: 104f5372b;  */

void FUN_104f5371c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didUpdateNotificationSucceed__11255df70,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 104f5372c; end: 104f537e3; -[SCFriendMuteChatsOrCallsAction _didUpdateNotificationSucceed:] */

void FUN_104f5372c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bddc140();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 & 1) == 0) {
    lVar2 = lVar1;
    if (*(long *)(param_1 + 0x10) == 1) {
      func_0x000104f625b8();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (*(long *)(param_1 + 0x10) == 0) {
      func_0x000104f625a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = 0;
    }
    func_0x00010be7b3c0(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
  else {
    func_0x00010c1fade0(lVar1,param_2,0,1);
    func_0x00010c18c5c0(lVar1,param_2,0);
  }
  func_0x00010c195460(lVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f537e4; end: 104f5387f; -[SCFriendMuteChatsOrCallsAction _presentErrorStatusMessage:] */

void FUN_104f537e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0dc640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25f340(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f53880; end: 104f53887; -[SCFriendMuteChatsOrCallsAction position] */

undefined8 FUN_104f53880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104f53888; end: 104f5388f; -[SCFriendMuteChatsOrCallsAction actionSheetCell] */

undefined8 FUN_104f53888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104f53890; end: 104f53897; -[SCFriendMuteChatsOrCallsAction prominentActionButton] */

undefined8 FUN_104f53890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104f53898; end: 104f5394b; -[SCFriendMuteChatsOrCallsAction .cxx_destruct] */

void FUN_104f53898(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f5394c; end: 104f53abb; -[SCFriendMuteConversationAction initWithFriendUserId:conversationId:muteType:expirationDuration:context:actionHandler:notificationServices:withAccessibilityIdentifier:] */

undefined1 *
FUN_104f5394c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e5318;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = 0x10;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f53abc; end: 104f53c33; -[SCFriendMuteConversationAction actionSheetCell] */

void FUN_104f53abc(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  lVar4 = *(long *)(param_1 + 0x18);
  puVar5 = (undefined1 *)0x0;
  if (lVar4 < 2) {
    if (lVar4 == 0) {
      func_0x000104f62468();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
    }
    else if (lVar4 == 1) {
      func_0x000104f62480();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
    }
  }
  else if (lVar4 == 2) {
    func_0x000104f62498();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
  }
  else if (lVar4 == 3) {
    func_0x000104f624b0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
  }
  puVar2 = PTR_PTR_1126b10a0;
  func_0x00010c0ec240(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c160fc0(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f53c34; end: 104f53c7b;  */

void FUN_104f53c34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f53c7c; end: 104f53f43; -[SCFriendMuteConversationAction _handleMessageNotificationsTappedWithActionSheet:] */

void FUN_104f53c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x28));
  _objc_initWeak(auStack_58,param_1);
  if (*(ulong *)(param_1 + 0x18) < 3) {
    if (*(long *)(param_1 + 0x10) == 1) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x104f53f8c;
      puStack_a0 = &UNK_11084b7a0;
      puVar1 = auStack_90;
      _objc_copyWeak(puVar1,auStack_58);
      _objc_retain(param_3);
      uStack_98 = param_3;
      func_0x00010bf50340(uVar2);
      uVar2 = uStack_98;
    }
    else {
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_104f53ef0;
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_104f53f44;
      puStack_70 = &UNK_11084b7a0;
      puVar1 = auStack_60;
      _objc_copyWeak(puVar1,auStack_58);
      _objc_retain(param_3);
      uStack_68 = param_3;
      func_0x00010bf50360(uVar2);
      uVar2 = uStack_68;
    }
  }
  else if (*(long *)(param_1 + 0x10) == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = auStack_f0;
    _objc_copyWeak(puVar1,auStack_58);
    _objc_retain(param_3);
    func_0x00010bf50300(uVar2);
    uVar2 = param_3;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0) goto LAB_104f53ef0;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x104f53fd4;
    puStack_d0 = &UNK_11084b7a0;
    puVar1 = auStack_c0;
    _objc_copyWeak(puVar1,auStack_58);
    _objc_retain(param_3);
    uStack_c8 = param_3;
    func_0x00010bf50320(uVar2);
    uVar2 = uStack_c8;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(puVar1);
LAB_104f53ef0:
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104f53f44; end: 104f54063;  */

void FUN_104f53f44(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f54064; end: 104f54103; -[SCFriendMuteConversationAction _onUpdatedNotificationStatus:notificationOn:actionSheet:] */

void FUN_104f54064(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104f54104;
  puStack_50 = &UNK_11085db88;
  uStack_48 = param_1;
  uStack_40 = param_5;
  uStack_38 = param_3;
  uStack_37 = param_4;
  _objc_retain(param_5);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_5);
  return;
}



/* Entry: 104f54104; end: 104f54117;  */

void FUN_104f54104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didUpdateNotificationSucceed_no_11255df78,
             *(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104f54118; end: 104f541b3; -[SCFriendMuteConversationAction _didUpdateNotificationSucceed:notificationOn:actionSheet:] */

void FUN_104f54118(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  _objc_retain(param_5);
  if ((param_3 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == 1) {
      func_0x000104f625b8();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (*(long *)(param_1 + 0x10) == 0) {
      func_0x000104f625a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar1 = 0;
    }
    func_0x00010be7b3c0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  else {
    func_0x00010bf84b00(param_5,param_2,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104f541b4; end: 104f5424f; -[SCFriendMuteConversationAction _presentErrorStatusMessage:] */

void FUN_104f541b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0dc640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25f340(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f54250; end: 104f54257; -[SCFriendMuteConversationAction position] */

undefined8 FUN_104f54250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


