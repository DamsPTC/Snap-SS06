/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fa6e78; end: 105fa6eab;  */

void FUN_105fa6e78(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_complete_1125ae760)
    ;
    return;
  }
  return;
}



/* Entry: 105fa6eac; end: 105fa718f; -[SCChatMediaMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

void FUN_105fa6eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b1a40;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b0820(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = param_5;
  func_0x00010bf026a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(uVar5);
  func_0x0001085439dc();
  uVar7 = param_3;
  func_0x00010c0cb340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar8 = uVar7;
  func_0x00010c09dc00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010bf50b20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  func_0x00010bfb6300(uVar6);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(uVar5);
  _objc_release(puVar1);
  return;
}



/* Entry: 105fa7190; end: 105fa71a3;  */

void FUN_105fa7190(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105fa71a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0);
  return;
}



/* Entry: 105fa71a4; end: 105fa75bb; -[SCChatMediaMessagePlugin _valdiContextParamsForQuotedMessage:conversationParticipants:isPreview:] */

void FUN_105fa71a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  byte bStack_78;
  undefined1 uStack_77;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c6a48;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b38c0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c6a50;
  _objc_opt_new(PTR_PTR_1126c6a50);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  FUN_1065c2f88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c205000(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221d20(puVar2);
  _objc_release(uVar5);
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar12);
  uVar5 = uVar12;
  func_0x00010c0cbe00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be21140(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  func_0x00010c0d9840(lVar6);
  puVar7 = PTR_PTR_1126ba150;
  func_0x00010c22e480();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105fa75bc;
  puStack_88 = &UNK_110902ac0;
  _objc_retain(uVar12);
  uStack_77 = SUB81(puVar7,0);
  lVar8 = lVar6;
  uStack_80 = uVar12;
  bStack_78 = param_5;
  func_0x00010c0b8600(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5760(puVar2);
  _objc_release(lVar10);
  _objc_release(lVar9);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ff00(puVar2);
  _objc_release(uVar5);
  if ((param_5 & 1) == 0) {
    _objc_initWeak(auStack_a8,param_1);
    _objc_copyWeak(auStack_b0,auStack_a8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c1d3960(puVar2);
    uVar5 = uVar12;
    func_0x00010c0cbe00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf490e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beea000(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c7240(puVar2);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  puVar7 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar11 = PTR_PTR_1126c6a58;
  func_0x00010bf44480(PTR_PTR_1126c6a58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar7);
  _objc_release(puVar11);
  _objc_release(lVar8);
  _objc_release(uStack_80);
  _objc_release(lVar6);
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105fa75bc; end: 105fa77a7;  */

void FUN_105fa75bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010c11ec20(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c72c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = uVar1;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010bf37400();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf490e0();
    _objc_retainAutoreleasedReturnValue();
  }
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar4 = param_2;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c11ec40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    uVar7 = uVar1;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105fa77a8;
  puStack_88 = &UNK_110902a90;
  uStack_68 = *(undefined2 *)(param_1 + 0x28);
  uStack_80 = uVar3;
  uStack_78 = uVar7;
  uStack_70 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(uVar7);
  _objc_retain(uVar3);
  uVar4 = uVar2;
  func_0x000100504554(uVar2,&puStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105fa77a8; end: 105fa785f;  */

void FUN_105fa77a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf50280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c271b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if ((*(char *)(param_1 + 0x39) == '\x01') &&
     (uVar1 = param_2, func_0x00010c22e460(), (int)uVar1 != 0)) {
    func_0x00010c1b0880(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fa7860; end: 105fa78c7;  */

void FUN_105fa7860(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  func_0x00010bec1040(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fa78c8; end: 105fa7b63; -[SCChatMediaMessagePlugin _startPlaybackForMessage:conversationParticipants:view:index:isQuoted:] */

void FUN_105fa78c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,ulong param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c0cbe00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    uVar4 = uVar2;
    if ((param_7 & 1) == 0) {
      func_0x00010bf490e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb8c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf37400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf374c0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = param_5;
    func_0x0001070b1c70();
    if ((uVar5 & 1) == 0) {
      uVar5 = param_5;
      func_0x0001070b1d3c(param_5,*(undefined8 *)(param_2 + 8));
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
    }
    else {
      uVar7 = 0;
    }
    puVar6 = PTR_PTR_1126c6a60;
    func_0x00010c0c7260();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_78,param_2);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105fa7b64;
    puStack_b8 = &UNK_110852860;
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(lVar1);
    lStack_b0 = lVar1;
    _objc_retain(puVar6);
    puStack_a8 = puVar6;
    _objc_retain(uVar3);
    uStack_a0 = uVar3;
    uStack_80 = param_1;
    _objc_retain(uVar4);
    uStack_98 = uVar4;
    _objc_retain(uVar7);
    uStack_90 = uVar7;
    func_0x0001000d76cc("APPSTORE",&puStack_d0);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(puStack_a8);
    _objc_release(lStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar6);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105fa7b64; end: 105fa7ba7;  */

void FUN_105fa7b64(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa7ba8; end: 105fa7c1f; -[SCChatMediaMessagePlugin _fetchContentAvailability:completion:] */

void FUN_105fa7ba8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b540();
    _objc_release(param_4);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105fa7c20; end: 105fa7c87; -[SCChatMediaMessagePlugin _handlePlayChatMediaFromView:configuration:messageId:index:senderUserId:recipientUserId:] */

void FUN_105fa7c20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d960();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa7c88; end: 105fa7d1b; -[SCChatMediaMessagePlugin _handleCompleteDisplayForMessage:conversationId:isGroup:] */

void FUN_105fa7c88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 & 1) == 0) {
    _os_unfair_lock_lock(param_1 + 0x90);
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,*(undefined8 *)(param_1 + 0x80));
    if ((int)uVar1 != 0) {
      func_0x00010bf7b800(*(undefined8 *)(param_1 + 0x10),param_2,param_4,param_3);
    }
    _os_unfair_lock_unlock(param_1 + 0x90);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fa7d1c; end: 105fa7daf; -[SCChatMediaMessagePlugin _handlePendingDisplayForMessage:conversationId:isGroup:] */

void FUN_105fa7d1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 & 1) == 0) {
    _os_unfair_lock_lock(param_1 + 0x90);
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,*(undefined8 *)(param_1 + 0x80));
    if ((int)uVar1 != 0) {
      func_0x00010bf7b8c0(*(undefined8 *)(param_1 + 0x10),param_2,param_4,param_3);
    }
    _os_unfair_lock_unlock(param_1 + 0x90);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fa7db0; end: 105fa7e4b; -[SCChatMediaMessagePlugin _getOrCreateMessageSubjectForMessageId:] */

void FUN_105fa7db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x90);
  puVar1 = *(undefined **)(param_1 + 0x70);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,puVar1,param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x90);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fa7e4c; end: 105fa7f2f; -[SCChatMediaMessagePlugin _getOrCreateViewModelForMessage:] */

void FUN_105fa7e4c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x90);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0cbe00(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf490e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = *(undefined **)(param_1 + 0x78);
    func_0x00010c0e00e0(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126c6a68;
      _objc_opt_new(PTR_PTR_1126c6a68);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78),param_2,puVar3,uVar2);
    }
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x90);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fa7f30; end: 105fa7f93; -[SCChatMediaMessagePlugin _handleConversationChange:] */

void FUN_105fa7f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x90);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x90);
  return;
}



/* Entry: 105fa7f94; end: 105fa8063; -[SCChatMediaMessagePlugin _visibilityObservableForMessage:] */

void FUN_105fa7f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105fa8064;
  puStack_40 = &UNK_110900418;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0b8600(uVar3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fa8064; end: 105fa8097;  */

void FUN_105fa8064(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf4b900(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105fa8098; end: 105fa809f; -[SCChatMediaMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fa8098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105fa80a0; end: 105fa80a7; -[SCChatMediaMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fa80a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105fa80a8; end: 105fa80d7; -[SCChatMediaMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fa80a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fa80d8; end: 105fa80ef; -[SCChatMediaMessagePlugin playbackPresenter] */

void FUN_105fa80d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa80f0; end: 105fa80fb; -[SCChatMediaMessagePlugin setPlaybackPresenter:] */

void FUN_105fa80f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 105fa80fc; end: 105fa8103; -[SCChatMediaMessagePlugin messageViewEvents] */

undefined8 FUN_105fa80fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105fa8104; end: 105fa8133; -[SCChatMediaMessagePlugin setMessageViewEvents:] */

void FUN_105fa8104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fa8134; end: 105fa813b; -[SCChatMediaMessagePlugin visibleMessageIds] */

undefined8 FUN_105fa8134(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105fa813c; end: 105fa816b; -[SCChatMediaMessagePlugin setVisibleMessageIds:] */

void FUN_105fa813c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fa816c; end: 105fa8183; -[SCChatMediaMessagePlugin uiContainer] */

void FUN_105fa816c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa8184; end: 105fa818f; -[SCChatMediaMessagePlugin setUiContainer:] */

void FUN_105fa8184(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 105fa8190; end: 105fa82b3; -[SCChatMediaMessagePlugin .cxx_destruct] */

void FUN_105fa8190(long param_1)

{
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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



/* Entry: 105fa82b4; end: 105fa8343;  */

void FUN_105fa82b4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e34b78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e34b78,
                      &PTR____CFConstantStringClassReference_110e34b98,0);
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



/* Entry: 105fa8344; end: 105fa8547;  */

ulong FUN_105fa8344(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  func_0x00010707a840(param_1,param_2);
  if ((param_3 == 0) && ((param_1 & 1) != 0)) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf529e0();
    uVar3 = param_3 - (param_1 & 0xffffffff);
    uVar3 = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
    uVar1 = lVar2 - 1U;
    if ((long)uVar3 <= (long)(lVar2 - 1U)) {
      uVar1 = uVar3;
    }
    uVar3 = 0xffffffffffffffff;
    if (lVar2 != 0) {
      uVar3 = uVar1;
    }
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105fa8548; end: 105fa866f;  */

undefined8 FUN_105fa8548(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010c07fd80();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
    goto LAB_105fa8650;
  }
  uVar1 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4ce20();
  uVar2 = uVar1;
  if ((int)uVar3 == 7) {
    func_0x00010c242c40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c242940();
    _objc_retainAutoreleasedReturnValue();
LAB_105fa8624:
    _objc_release(uVar2);
  }
  else {
    uVar3 = uVar1;
    func_0x00010bf676a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfdcce0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      func_0x00010bf676a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c25ada0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c242940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      goto LAB_105fa8624;
    }
    uVar4 = 0;
  }
  uVar3 = uVar4;
  func_0x00010c131c80(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar1);
LAB_105fa8650:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 105fa8670; end: 105fa88ab;  */

undefined * FUN_105fa8670(undefined *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
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
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c131d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126b2378;
  if (puVar3 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf4e840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe3740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf43580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar2 = puVar3;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c2698a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010bf52a60();
    puVar10 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar5);
          }
          puVar8 = *(undefined **)(lStack_128 + (long)puVar10 * 8);
          puVar6 = puVar8;
          func_0x00010c0cc5c0();
          if ((int)puVar6 == 2) {
            func_0x00010c11dc80(puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar8;
            func_0x00010c11ddc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            goto LAB_105fa883c;
          }
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = puVar5;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
      puVar10 = (undefined *)0x0;
    }
LAB_105fa883c:
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    param_3 = (undefined1 *)puVar7;
    puVar2 = puVar4;
  }
  _objc_release(puVar1);
  puVar4 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105fa88ac;
  puStack_160 = puVar3;
  puStack_158 = puVar2;
  puStack_150 = puVar1;
  puStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x2020000000;
  uStack_168 = 0;
  func_0x00010c0be080(param_3);
  puVar1 = puVar4;
  FUN_105fa8344(puVar4,param_2,puStack_178[3]);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar4);
  return puVar1;
}



/* Entry: 105fa88ac; end: 105fa89a7;  */

undefined8 FUN_105fa88ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0be080(param_3);
  uVar1 = param_1;
  FUN_105fa8344(param_1,param_2,puStack_48[3]);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105fa89a8; end: 105fa89b7;  */

void FUN_105fa89a8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105fa89b8; end: 105fa8b9b; -[SCChatTextMessagePlugin initWithCurrentUserId:urlPreviewProvider:chatAttachmentHandlerScopeExposer:storyReplyQuoteActionHandler:textSender:valdiRuntimeProvider:messagingExperimentService:messagingMessageProvider:] */

undefined1 *
FUN_105fa89b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126eea08;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x60) = 0;
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
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fa8b9c; end: 105fa9287; -[SCChatTextMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fa8b9c(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_105fa9288();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    puVar13 = (undefined *)0x0;
    goto LAB_105fa9104;
  }
  puVar4 = param_1;
  func_0x00010be6e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uVar6 = uVar1;
    func_0x00010c07fd80();
    _objc_release(uVar5);
    if ((uVar6 & 1) != 0) goto LAB_105fa8ca0;
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar10;
    func_0x00010c06e720();
    _objc_release(uVar10);
    if ((int)uVar7 != 0) {
      puVar13 = PTR_PTR_1126c67d8;
      _objc_alloc(PTR_PTR_1126c67d8);
      puVar11 = PTR_PTR_1126c6a88;
      func_0x00010bf44480(PTR_PTR_1126c6a88);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_1;
      func_0x00010bdd6ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd5f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000660(puVar13);
      _objc_release(param_1);
      _objc_release(puVar12);
      goto LAB_105fa90f0;
    }
    puVar13 = (undefined *)0x0;
  }
  else {
    _objc_release();
    _objc_release(uVar5);
LAB_105fa8ca0:
    uVar5 = uVar1;
    func_0x00010bf490e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010be21140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010c0d9840(puVar11);
    _objc_initWeak(auStack_80,param_1);
    puVar12 = PTR_PTR_1126c6a78;
    _objc_opt_new(PTR_PTR_1126c6a78);
    uVar5 = uVar3;
    func_0x00010bf0e740();
    if (uVar5 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21d480(puVar12);
      _objc_release(uVar7);
      puVar13 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_105fa9354;
      puStack_a0 = &UNK_110860788;
      _objc_copyWeak(auStack_88,auStack_80);
      _objc_retain(uVar2);
      uStack_98 = uVar2;
      _objc_retain(puVar4);
      puStack_90 = puVar4;
      func_0x00010c1d3ee0(puVar12);
      puStack_f0 = puVar13;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_105fa9478;
      puStack_d8 = &UNK_110860788;
      _objc_copyWeak(auStack_c0,auStack_80);
      _objc_retain(uVar2);
      uStack_d0 = uVar2;
      _objc_retain(puVar4);
      puStack_c8 = puVar4;
      func_0x00010c1d39a0(puVar12);
      puStack_128 = puVar13;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_105fa959c;
      puStack_110 = &UNK_110860788;
      _objc_copyWeak(auStack_f8,auStack_80);
      _objc_retain(uVar2);
      uStack_108 = uVar2;
      _objc_retain(puVar4);
      puStack_100 = puVar4;
      func_0x00010c1d3c80(puVar12);
      _objc_release(puStack_100);
      _objc_release(uStack_108);
      _objc_destroyWeak(auStack_f8);
      _objc_release(puStack_c8);
      _objc_release(uStack_d0);
      _objc_destroyWeak(auStack_c0);
      _objc_release(puStack_90);
      _objc_release(uStack_98);
      _objc_destroyWeak(auStack_88);
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    _objc_retain(uVar7);
    uVar5 = uVar1;
    func_0x00010c07fd80();
    if ((int)uVar5 == 0) {
LAB_105fa8fb0:
      _objc_release(uVar7);
      _objc_release(uVar1);
      _objc_release(param_3);
    }
    else {
      uVar5 = uVar1;
      FUN_105fa8548();
      if (((uVar5 & 1) == 0) && (uVar5 = param_3, func_0x000105fa84c4(), (uVar5 & 1) == 0)) {
        uVar5 = uVar1;
        FUN_105fa8670();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c08fa60();
        _objc_release(uVar5);
        if (uVar6 == 0) goto LAB_105fa8fb0;
      }
      uVar5 = uVar1;
      func_0x00010c0cb8c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(uVar1);
      _objc_release(param_3);
      if ((uVar6 & 1) == 0) {
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_158 = 0xc2000000;
        pcStack_150 = FUN_105fa96c0;
        puStack_148 = &UNK_110848218;
        _objc_copyWeak(auStack_130,auStack_80);
        _objc_retain(param_3);
        uStack_140 = param_3;
        _objc_retain(param_4);
        uStack_138 = param_4;
        func_0x00010c1d3d00(puVar12);
        _objc_release(uStack_138);
        _objc_release(uStack_140);
        _objc_destroyWeak(auStack_130);
      }
    }
    _objc_copyWeak(auStack_168,auStack_80);
    puVar13 = puVar11;
    func_0x00010c0b8600(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar13;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c44a0(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126c67d8;
    _objc_alloc(PTR_PTR_1126c67d8);
    puVar8 = PTR_PTR_1126c6a80;
    func_0x00010bf44480(PTR_PTR_1126c6a80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd6ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar13);
    _objc_release(param_1);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_168);
    _objc_release(puVar12);
    _objc_destroyWeak(auStack_80);
LAB_105fa90f0:
    _objc_release(puVar11);
  }
  _objc_release(uVar2);
  _objc_release(puVar4);
LAB_105fa9104:
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105fa9288; end: 105fa9353;  */

void FUN_105fa9288(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 2) {
    uVar2 = param_1;
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_1;
    func_0x00010bf4ce20();
    if ((int)uVar2 == 7) {
      uVar2 = param_1;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c131be0();
      _objc_release(uVar2);
      if ((int)uVar1 == 0xb) {
        uVar1 = param_1;
        func_0x00010c242c40(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c132180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        goto LAB_105fa9338;
      }
    }
    uVar2 = 0;
  }
LAB_105fa9338:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fa9354; end: 105fa943f;  */

void FUN_105fa9354(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105fa9440;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105fa9440; end: 105fa9477;  */

void FUN_105fa9440(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa9478; end: 105fa9563;  */

void FUN_105fa9478(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105fa9564;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105fa9564; end: 105fa959b;  */

void FUN_105fa9564(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ce40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa959c; end: 105fa9687;  */

void FUN_105fa959c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105fa9688;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105fa9688; end: 105fa96bf;  */

void FUN_105fa9688(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa96c0; end: 105fa9783;  */

void FUN_105fa96c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105fa9784;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105fa9784; end: 105fa97b7;  */

void FUN_105fa9784(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2eae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa97b8; end: 105fa9833;  */

void FUN_105fa97b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb5440();
  _objc_release(param_2);
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fa9834; end: 105fa99db; -[SCChatTextMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_105fa9834(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_105fa9288();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010be6e700(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c67d8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126c6a88;
    func_0x00010bf44480(PTR_PTR_1126c6a88);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bdd6ec0(param_1,param_2,lVar3,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf374c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd5f40(param_1,param_2,lVar3,lVar6,lVar2,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar7,param_2,puVar4,lVar5,param_1);
    _objc_release(param_1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105fa99dc; end: 105fa9b83; -[SCChatTextMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_105fa99dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_105fa9288();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010be6e700(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c67d8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126c6a88;
    func_0x00010bf44480(PTR_PTR_1126c6a88);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bdd6ec0(param_1,param_2,lVar3,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c0cb8c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd5f40(param_1,param_2,lVar3,lVar6,lVar2,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar7,param_2,puVar4,lVar5,param_1);
    _objc_release(param_1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105fa9b84; end: 105fa9b8b; -[SCChatTextMessagePlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_105fa9b84(void)

{
  return 0;
}



/* Entry: 105fa9b8c; end: 105fa9bbb; -[SCChatTextMessagePlugin identifier] */

void FUN_105fa9b8c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeb978);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeb978);
  return;
}



/* Entry: 105fa9bbc; end: 105fa9bc3; -[SCChatTextMessagePlugin pluginType] */

undefined8 FUN_105fa9bbc(void)

{
  return 0;
}



/* Entry: 105fa9bc4; end: 105fa9cdf; -[SCChatTextMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fa9bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105fa9ce0; end: 105fa9d0b;  */

void FUN_105fa9ce0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa9d0c; end: 105fa9e27; -[SCChatTextMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fa9d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105fa9e28; end: 105fa9f13;  */

void FUN_105fa9e28(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105fa9f14;
  puStack_50 = &UNK_110863ad8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bf0a0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105fa9f14; end: 105fa9f8b;  */

void FUN_105fa9f14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be278e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa9f8c; end: 105fa9f8f; -[SCChatTextMessagePlugin dismissPresentedView] */

void FUN_105fa9f8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didDismissChatAttachment_1125baca0);
  return;
}



/* Entry: 105fa9f90; end: 105faa063; -[SCChatTextMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

bool FUN_105fa9f90(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  FUN_105faa064();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = lVar3;
    FUN_105faa0a8();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x0001006372a4();
    _objc_release(lVar2);
    lVar2 = lVar4;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      bVar1 = true;
    }
    else {
      lVar2 = lVar4;
      func_0x00010bf529e0(lVar4);
      bVar1 = lVar2 == 1;
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 105faa064; end: 105faa0a7;  */

void FUN_105faa064(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_105fa9288();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105faa0a8; end: 105faa167;  */

void FUN_105faa0a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  FUN_105fa9288();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf0e740();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf0e720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105facd48;
    puStack_40 = &UNK_110902be0;
    _objc_retain(param_1);
    lVar2 = lVar1;
    lStack_38 = param_1;
    func_0x000100504554(lVar1,&puStack_58);
    _objc_release(lStack_38);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105faa168; end: 105faa16f;  */

undefined1 FUN_105faa168(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010bf4df40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0becc0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105faa170; end: 105faa263;  */

undefined1 FUN_105faa170(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bf4df40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0becc0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105faa264; end: 105faa3ab; -[SCChatTextMessagePlugin canForwardMessageFromCTA:] */

bool FUN_105faa264(long param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  ppuVar2 = *(undefined ***)(param_1 + 0x40);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar3;
  FUN_105faa064();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
    bVar1 = false;
  }
  else {
    ppuVar4 = ppuVar3;
    FUN_105faa0a8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR___NSConcreteGlobalBlock_110902b70;
    ppuVar5 = ppuVar4;
    func_0x0001006372a4();
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar5;
    func_0x00010bf529e0();
    if (ppuVar4 == (undefined **)0x1) {
      puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar2;
      func_0x00010c25d0a0(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      ppuVar7 = ppuVar5;
      func_0x00010bfb1920(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f2a0();
      _objc_release(ppuVar7);
      ppuVar7 = ppuVar4;
      func_0x00010c08fa60(ppuVar4);
      bVar1 = ppuVar7 == ppuVar8;
      _objc_release(ppuVar4);
    }
    else {
      bVar1 = false;
    }
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
  return bVar1;
}



/* Entry: 105faa3ac; end: 105faa3b3;  */

undefined1 FUN_105faa3ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010bf4df40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0becc0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105faa3b4; end: 105faa6e3; -[SCChatTextMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

void FUN_105faa3b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar7 = *(undefined **)(param_1 + 0x40);
  _objc_retain(param_4);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar2 = puVar1;
  FUN_105faa064();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_105faa0a8();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar7 = puVar3;
  }
  _objc_retain(puVar7);
  _objc_release(puVar3);
  puVar3 = puVar2;
  FUN_105fa88ac(puVar2,puVar7,param_4);
  _objc_release(param_4);
  puVar4 = puVar7;
  func_0x00010bf529e0();
  if ((puVar4 == (undefined *)0x0) ||
     (puVar4 = puVar7, func_0x00010bf529e0(), (long)puVar3 < (long)puVar4)) {
    puVar4 = PTR_PTR_1126b1a40;
    _objc_opt_new(PTR_PTR_1126b1a40);
    func_0x00010c2b9b80();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa660(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2b0820(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2afd40(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = param_5;
    func_0x00010bf026a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0001086063f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac2e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf529e0();
    if ((puVar6 == (undefined *)0x0) || ((long)puVar3 < 0)) {
      puVar3 = param_5;
      func_0x00010bf50b20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea0980(param_1);
    }
    else {
      puVar6 = puVar7;
      func_0x00010c0dfd40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_105faa6e4(puVar2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = param_5;
      func_0x00010bf50b20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea1020(param_1);
      _objc_release(puVar6);
    }
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,0);
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105faa6e4; end: 105faa84f;  */

void FUN_105faa6e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105faaf2c;
  uStack_60 = 0x105faaf3c;
  uStack_58 = 0;
  uVar1 = param_2;
  func_0x00010bf4df40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010c0becc0(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105faa850; end: 105faacd3; -[SCChatTextMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_105faa850(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar12 = *(undefined **)(param_1 + 0x40);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uStack_a8 = param_3;
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar12;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_105faa064();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_105faa0a8();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR____NSArray0__struct_11034ab48;
  if (puVar4 != (undefined *)0x0) {
    puVar11 = puVar4;
  }
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lStack_88 = param_4;
  puStack_78 = puVar3;
  FUN_105fa88ac(puVar3,puVar11,param_4);
  puStack_90 = puVar2;
  FUN_105fa9288();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_80 = puVar11;
  func_0x00010bf529e0();
  puVar4 = puVar2;
  if ((puVar11 != (undefined *)0x0) && (-1 < (long)puVar3)) {
    puVar4 = PTR_PTR_1126be7c8;
    _objc_opt_new(PTR_PTR_1126be7c8);
    _objc_release(puVar2);
    puVar11 = puStack_80;
    func_0x00010c0dfd40(puStack_80);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_78;
    FUN_105faa6e4(puStack_78,puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar11);
    puVar11 = puVar2;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    if (puVar3 != (undefined *)0x0) {
      puVar11 = puVar3;
      func_0x00010bf51e00();
      puVar5 = PTR_PTR_1126c6a90;
      _objc_opt_new(PTR_PTR_1126c6a90);
      func_0x00010c1bf6c0();
      puVar6 = puVar4;
      func_0x00010c26b700(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010c1ba840(puVar5);
      _objc_release(puVar6);
      func_0x00010c1e6f40(puVar11);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0d3c80();
      func_0x00010c16b820(puVar4);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar11);
    }
    _objc_release(puVar3);
  }
  lVar8 = param_1;
  func_0x00010be6e700();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c67d8;
  _objc_alloc();
  puVar3 = PTR_PTR_1126c6a88;
  func_0x00010bf44480(PTR_PTR_1126c6a88);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bdd6ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar2;
  _objc_release(param_5);
  puVar2 = puVar12;
  func_0x00010c0cb8c0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_a8;
  lVar10 = param_1;
  func_0x00010bdd5f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar12;
  func_0x00010c000660();
  _objc_release(lVar10);
  _objc_release(puVar2);
  _objc_release(lVar9);
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126c6898;
  func_0x00010bf44ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c68a0;
  func_0x00010bfbb8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lStack_88;
  func_0x00010bea0b20(param_1);
  _objc_release(uVar1);
  puVar12 = PTR_PTR_1126c68a8;
  _objc_alloc();
  puVar5 = puVar2;
  puVar6 = puVar3;
  func_0x00010c039de0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(lVar8);
  _objc_release(puVar4);
  _objc_release(puStack_98);
  _objc_release(puStack_80);
  _objc_release(puStack_78);
  _objc_release(puStack_90);
  _objc_release(puStack_a0);
  lVar10 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_f0 = lVar9;
  pcStack_b8 = FUN_105faacd4;
  puStack_e8 = puVar3;
  lStack_e0 = lVar8;
  puStack_d8 = puVar2;
  puStack_d0 = puVar11;
  puStack_c8 = puVar12;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  lVar9 = lVar10;
  func_0x00010bf2ca60();
  if ((int)lVar9 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar11 = *(undefined **)(lVar10 + 0x40);
    func_0x00010c0cbe00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar3 = puVar2;
    FUN_105faa0a8();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      puVar11 = puVar3;
    }
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x3032000000;
    pcStack_108 = FUN_105faaf2c;
    uStack_100 = 0x105faaf3c;
    FUN_105fad9a4();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar11;
    puStack_f8 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
LAB_105faae9c:
      puVar12 = (undefined *)puStack_118[5];
      _objc_retain(puVar12);
    }
    else {
      puVar3 = puVar2;
      FUN_105faa064();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_105fa88ac();
      _objc_release(puVar3);
      if (-1 < (long)puVar4) {
        puVar3 = puVar11;
        func_0x00010c0dfd40(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf4df40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0becc0();
        _objc_release(puVar4);
        _objc_release(puVar3);
        goto LAB_105faae9c;
      }
      puVar12 = (undefined *)0x0;
    }
    __Block_object_dispose(&uStack_120,8);
    _objc_release(puStack_f8);
    _objc_release(puVar11);
    _objc_release(puVar2);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105faacd4; end: 105faaf2b; -[SCChatTextMessagePlugin actionMenuButtonTextForMessage:focusedMessageContent:] */

void FUN_105faacd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf2ca60();
  if ((int)lVar1 == 0) {
    uVar6 = 0;
    goto LAB_105faaee0;
  }
  puVar2 = *(undefined **)(param_1 + 0x40);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = puVar3;
  FUN_105faa0a8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
  }
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_105faaf2c;
  uStack_50 = 0x105faaf3c;
  FUN_105fad9a4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  puStack_48 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
LAB_105faae9c:
    uVar6 = puStack_68[5];
    _objc_retain(uVar6);
  }
  else {
    puVar4 = puVar3;
    FUN_105faa064();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_105fa88ac();
    _objc_release(puVar4);
    if (-1 < (long)puVar5) {
      puVar4 = puVar2;
      func_0x00010c0dfd40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0becc0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      goto LAB_105faae9c;
    }
    uVar6 = 0;
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
  _objc_release(puVar2);
  _objc_release(puVar3);
LAB_105faaee0:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105faaf2c; end: 105faaf43;  */

void FUN_105faaf2c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105faaf44; end: 105faafc3;  */

void FUN_105faaf44(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x000105fad9d4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105faafc4; end: 105fab00b; -[SCChatTextMessagePlugin didDismissChatAttachment] */

void FUN_105faafc4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fab00c; end: 105fab12f; -[SCChatTextMessagePlugin _sendTextMessageWithText:conversations:platformAnalytics:completion:] */

void FUN_105fab00c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e820();
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105fab130;
  puStack_50 = &UNK_110852668;
  uStack_48 = param_6;
  _objc_retain(param_6);
  func_0x00010c15b620(uVar2,param_2,puVar1,0,param_4,0,param_5,&puStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_6);
  return;
}



/* Entry: 105fab130; end: 105fab14b;  */

void FUN_105fab130(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105fab144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
    return;
  }
  return;
}



/* Entry: 105fab14c; end: 105fab24b; -[SCChatTextMessagePlugin _sendURLTextMessageWithForwardedContent:conversations:platformAnalytics:completion:] */

void FUN_105fab14c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105fab24c;
  puStack_50 = &UNK_110852668;
  uStack_48 = param_6;
  _objc_retain(param_6);
  func_0x00010c15d840(uVar1,param_2,param_3,0,param_4,param_5,&puStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_6);
  return;
}



/* Entry: 105fab24c; end: 105fab267;  */

void FUN_105fab24c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105fab260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
    return;
  }
  return;
}



/* Entry: 105fab268; end: 105fab46f; -[SCChatTextMessagePlugin _sendToMediaTypeForMessage:focusedMessageContent:] */

undefined8 FUN_105fab268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0x40);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  FUN_105faa0a8();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = puVar2;
    FUN_105faa064();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_105fa88ac();
    _objc_release(puVar3);
    if (-1 < (long)puVar4) {
      puVar3 = puVar1;
      func_0x00010bf529e0();
      uVar5 = 0xffffffffffffffff;
      if ((long)puVar4 < (long)puVar3) {
        puStack_58 = &uStack_60;
        uStack_60 = 0;
        uStack_50 = 0x2020000000;
        uStack_48 = 0xffffffffffffffff;
        puVar3 = puVar1;
        func_0x00010c0dfd40(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf4df40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0becc0();
        _objc_release(puVar4);
        uVar5 = puStack_58[3];
        _objc_release(puVar3);
        __Block_object_dispose(&uStack_60,8);
      }
      goto LAB_105fab41c;
    }
  }
  uVar5 = 0xffffffffffffffff;
LAB_105fab41c:
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105fab470; end: 105fab4ab;  */

void FUN_105fab470(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 4;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uVar1 = 5;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 105fab4ac; end: 105fab5b3; -[SCChatTextMessagePlugin _openAttachment:senderUserId:otherParticipantId:] */

void FUN_105fab4ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x60);
  puVar1 = PTR_PTR_1126b4488;
  _objc_alloc(PTR_PTR_1126b4488);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf50940(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bff4980(puVar1,param_2,param_3,param_4,param_5,uVar2,lVar3,param_1);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x60);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fab5b4; end: 105fab667; -[SCChatTextMessagePlugin _openUrl:senderUserId:otherParticipantId:] */

void FUN_105fab5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b4480;
    func_0x00010c28fb40(PTR_PTR_1126b4480,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6cec0(param_1,param_2,puVar2,param_4,param_5);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105fab668; end: 105fab6f7; -[SCChatTextMessagePlugin _openAddress:senderUserId:otherParticipantId:] */

void FUN_105fab668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4480;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010befd780(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6cec0(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105fab6f8; end: 105fab787; -[SCChatTextMessagePlugin _openPhoneNumber:senderUserId:otherParticipantId:] */

void FUN_105fab6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4480;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0fb0e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6cec0(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105fab788; end: 105fab877; -[SCChatTextMessagePlugin _handleQuoteTap:conversationParticipants:] */

void FUN_105fab788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0cbe00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x0001070b210c(param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2d80(uVar2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fab878; end: 105fab8db; -[SCChatTextMessagePlugin _shouldRenderWithBubble:] */

bool FUN_105fab878(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11ede0();
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1 == 1;
}



/* Entry: 105fab8dc; end: 105fab977; -[SCChatTextMessagePlugin _getOrCreateMessageSubjectForMessageId:] */

void FUN_105fab8dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x60);
  puVar1 = *(undefined **)(param_1 + 0x48);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,puVar1,param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x60);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fab978; end: 105fab9bb; -[SCChatTextMessagePlugin _handleConversationChange] */

void FUN_105fab978(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x60);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x60);
  return;
}



/* Entry: 105fab9bc; end: 105fab9fb; -[SCChatTextMessagePlugin _handleConversationInformationUpdate:] */

void FUN_105fab9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x60);
  return;
}



/* Entry: 105fab9fc; end: 105faba7b; -[SCChatTextMessagePlugin _otherParticipantIdForConversationParticipants:] */

void FUN_105fab9fc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001070b1c70();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x0001070b1d3c(param_3,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105faba7c; end: 105fac303; -[SCChatTextMessagePlugin _buildViewModelForTextContent:conversationParticipants:isContextualReplyFormat:] */

void FUN_105faba7c(long param_1,undefined **param_2,undefined *param_3,undefined8 param_4,
                  ulong param_5)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  double dVar18;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar11 = (undefined **)PTR_PTR_1126c6a98;
  _objc_alloc();
  puVar16 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0511e0();
  _objc_release(puVar16);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((param_5 & 1) == 0) {
    puVar16 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292ae0();
  }
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200dc0(ppuVar11);
  _objc_release(puVar3);
  if ((param_5 & 1) == 0) {
    _objc_release(puVar16);
  }
  dVar18 = 0.0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  puVar3 = param_3;
  func_0x00010bf0e720();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar3;
  func_0x00010bf52a60();
  if (puVar16 != (undefined *)0x0) {
    lVar15 = *plStack_130;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar15) {
          _objc_enumerationMutation(puVar3);
        }
        puVar12 = *(undefined **)(lStack_138 + (long)puVar17 * 8);
        puVar4 = puVar12;
        func_0x00010bf0dec0();
        if ((int)puVar4 == 6) {
          puVar16 = puVar12;
          func_0x00010c14e140(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          _objc_release(puVar16);
          puVar16 = param_3;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010c08fa60();
          bVar1 = true;
          if ((0.0 < dVar18) && (bVar1 = false, !NAN(dVar18))) {
            bVar1 = dVar18 == 1.0;
          }
          if (!bVar1) {
            _objc_release(puVar16);
            puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((1.0 <= dVar18) && ((undefined *)0x3e7 < puVar17)) goto LAB_105fabccc;
            func_0x00010c14e140();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14e120();
            func_0x00010c0df720();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1f5fe0(ppuVar11);
            _objc_release(puVar16);
            puVar16 = puVar12;
          }
          _objc_release(puVar16);
          goto LAB_105fabccc;
        }
        puVar17 = puVar17 + 1;
      } while (puVar16 != puVar17);
      puVar16 = puVar3;
      func_0x00010bf52a60();
    } while (puVar16 != (undefined *)0x0);
  }
LAB_105fabccc:
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010bf0e740();
  if (puVar3 != (undefined *)0x0) {
    uVar10 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar10);
    puVar3 = param_3;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    uStack_168 = 0x105fabddc;
    puStack_160 = &UNK_110902b90;
    _objc_retain(param_4);
    uStack_158 = param_4;
    uStack_150 = uVar10;
    _objc_retain(param_3);
    param_2 = &puStack_178;
    puVar16 = puVar3;
    puStack_148 = param_3;
    func_0x000100504554();
    func_0x00010c16b7c0(ppuVar11);
    _objc_release(puVar16);
    _objc_release(puVar3);
    _objc_release(puStack_148);
    _objc_release(uStack_158);
    _objc_release(uVar10);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar3 = *(undefined **)(param_3 + 0x20);
  uVar10 = *(undefined8 *)(param_3 + 0x28);
  uVar9 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(param_2);
  func_0x00010c26b700(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(puVar3);
  _objc_retain(uVar10);
  _objc_retain(uVar9);
  ppuVar13 = param_2;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuVar11 = (undefined **)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar14 = param_2;
    func_0x00010bf0dec0();
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
    ppuVar11 = (undefined **)0x0;
    iVar2 = (int)ppuVar14;
    if (iVar2 < 4) {
      if (iVar2 == 2) {
        ppuVar11 = param_2;
        func_0x00010bfb58c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar11;
        func_0x00010c26c020();
        _objc_release(ppuVar11);
        if ((uint)ppuVar13 < 3) {
          ppuVar11 = (undefined **)0x0;
          ppuVar13 = (undefined **)0x0;
          ppuVar14 = (undefined **)0x0;
          puVar16 = (undefined *)0x0;
          goto LAB_105fac18c;
        }
        ppuVar11 = (undefined **)0x0;
      }
      else if (iVar2 == 3) {
        ppuVar11 = param_2;
        func_0x00010c0c4180();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar11;
        func_0x00010c26c3c0();
        _objc_release(ppuVar11);
        ppuVar11 = (undefined **)0x0;
        if ((int)ppuVar13 == 0) {
          ppuVar14 = (undefined **)0x0;
          puVar16 = (undefined *)0x0;
          ppuVar13 = ppuVar11;
        }
        else {
          if ((int)ppuVar13 != 1) goto LAB_105fac248;
          ppuVar11 = param_2;
          func_0x00010c11f2a0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09ea00();
          ppuVar13 = param_2;
          func_0x00010c11f2a0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          _objc_release(ppuVar13);
          _objc_release(ppuVar11);
          uVar5 = uVar9;
          func_0x00010c260c80(uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = PTR_PTR_1126aed98;
          puVar17 = PTR__OBJC_CLASS___NSLocale_1126af788;
          func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar17;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb5da0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(puVar17);
          _objc_release(uVar5);
          ppuVar11 = (undefined **)0x0;
          ppuVar14 = (undefined **)0x0;
          ppuVar13 = (undefined **)0x0;
        }
        goto LAB_105fac18c;
      }
    }
    else {
      if (iVar2 == 4) {
        ppuVar11 = param_2;
        func_0x00010bdc2c40(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar11;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar14);
        _objc_release(ppuVar11);
        ppuVar11 = ppuVar13;
        func_0x00010c083ac0();
        if (((ulong)ppuVar11 & 1) != 0) {
          ppuVar11 = param_2;
          func_0x00010bdc2c40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c065360();
          _objc_release(ppuVar11);
          ppuVar11 = param_2;
          func_0x00010bdc2c40(param_2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar11;
          func_0x00010bdc2b80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar11);
          _objc_release(ppuVar13);
          ppuVar11 = (undefined **)0x0;
          puVar16 = (undefined *)0x0;
          ppuVar13 = (undefined **)0x0;
          goto LAB_105fac18c;
        }
        ppuVar11 = (undefined **)0x0;
      }
      else {
        if (iVar2 == 5) {
          ppuVar11 = param_2;
          func_0x00010c0ca400(param_2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar11;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar14;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar14);
          _objc_release(ppuVar11);
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar16 = puVar3;
          func_0x0001070b244c(puVar3,ppuVar13,uVar10);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (iVar2 != 7) goto LAB_105fac248;
          ppuVar11 = param_2;
          func_0x00010c0dae20(param_2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar11;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar14;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar14);
          _objc_release(ppuVar11);
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010bf09c20();
        func_0x00010c0df760(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        ppuVar14 = (undefined **)0x0;
        puVar16 = (undefined *)0x0;
LAB_105fac18c:
        ppuVar6 = param_2;
        func_0x00010c11f2a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010c09ea00();
        _objc_release(ppuVar6);
        ppuVar6 = param_2;
        func_0x00010c11f2a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar6;
        func_0x00010c08fa60();
        _objc_release(ppuVar6);
        ppuVar6 = (undefined **)PTR_PTR_1126c6a70;
        _objc_alloc(PTR_PTR_1126c6a70);
        func_0x00010c04b880((double)((ulong)ppuVar7 & 0xffffffff),
                            (double)((ulong)ppuVar7 & 0xffffffff) +
                            (double)((ulong)ppuVar8 & 0xffffffff));
        func_0x00010c1c6a00();
        func_0x00010c17e800(ppuVar6);
        func_0x00010c21d340(ppuVar6);
        func_0x00010c19ece0(ppuVar6);
        _objc_release(puVar16);
        _objc_release(ppuVar14);
        _objc_release(ppuVar13);
        ppuVar13 = ppuVar11;
        ppuVar11 = ppuVar6;
      }
      _objc_release(ppuVar13);
    }
  }
LAB_105fac248:
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar9);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return;
}



/* Entry: 105fac304; end: 105fac783; -[SCChatTextMessagePlugin _buildContextForTextContent:messageSender:otherParticipantId:enableInteraction:message:] */

void FUN_105fac304(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126c6aa0;
  _objc_opt_new(PTR_PTR_1126c6aa0);
  lVar3 = param_3;
  func_0x00010bf0e740();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    _objc_initWeak(auStack_80,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d480(puVar2);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010707c46c(uVar4,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224fa0(puVar2);
    _objc_release(uVar4);
    func_0x00010707c878();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f440(puVar2);
    _objc_release(uVar4);
    if (param_6 != 0) {
      puStack_b8 = puVar1;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_105fac784;
      puStack_a0 = &UNK_110860788;
      _objc_copyWeak(auStack_88,auStack_80);
      _objc_retain(param_4);
      uStack_98 = param_4;
      _objc_retain(param_5);
      uStack_90 = param_5;
      func_0x00010c1d3ee0(puVar2);
      puStack_f0 = puVar1;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_105fac8a8;
      puStack_d8 = &UNK_110860788;
      _objc_copyWeak(auStack_c0,auStack_80);
      _objc_retain(param_4);
      uStack_d0 = param_4;
      _objc_retain(param_5);
      uStack_c8 = param_5;
      func_0x00010c1d39a0(puVar2);
      _objc_copyWeak(auStack_f8,auStack_80);
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x00010c1d3c80(puVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_f8);
      _objc_release(uStack_c8);
      _objc_release(uStack_d0);
      _objc_destroyWeak(auStack_c0);
      _objc_release(uStack_90);
      _objc_release(uStack_98);
      _objc_destroyWeak(auStack_88);
    }
    _objc_destroyWeak(auStack_80);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar9);
  uVar4 = uVar9;
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar3 = param_1;
  func_0x00010be21140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_retain(uVar9);
  lVar6 = lVar3;
  func_0x00010c0b8600(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar7;
  func_0x00010c272120(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c70a0(puVar2);
  _objc_release(lVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar5);
  func_0x00010bfad7a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar4;
  func_0x00010c272120(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7240(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(lVar7);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fac784; end: 105fac86f;  */

void FUN_105fac784(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105fac870;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105fac870; end: 105fac8a7;  */

void FUN_105fac870(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fac8a8; end: 105fac993;  */

void FUN_105fac8a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105fac994;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105fac994; end: 105fac9cb;  */

void FUN_105fac994(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ce40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fac9cc; end: 105facab7;  */

void FUN_105fac9cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105facab8;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105facab8; end: 105facb4f;  */

void FUN_105facab8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105facb50; end: 105facb5f;  */

byte FUN_105facb50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar3);
  uVar1 = param_2;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    bVar4 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar1 = param_2;
    func_0x00010bfee140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c16a0();
    _objc_release(uVar1);
    bVar4 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(uVar3);
  _objc_release(param_2);
  return bVar4 & 1;
}



/* Entry: 105facb60; end: 105facbbb;  */

void FUN_105facb60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfee140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070b31f8();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105facbbc; end: 105facbc3; -[SCChatTextMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105facbbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


