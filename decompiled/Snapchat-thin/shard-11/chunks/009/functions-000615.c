/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bc5860; end: 108bc5a4b; -[SCSnapchattersContactRequestCoordinator _fetchContactsWithContactRequest:addressBook:phoneContacts:completionQueue:completionHandler:] */

void FUN_108bc5860(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_78,param_2);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c12c920(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_4);
  func_0x00010bfa5d00(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bc5a4c; end: 108bc5b5b;  */

void FUN_108bc5a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _CACurrentMediaTime();
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  func_0x00010bf529e0(lVar1);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be534a0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be810a0(lVar1);
  _objc_release(lVar1);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be53460();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc5b5c; end: 108bc5e53; -[SCSnapchattersContactRequestCoordinator _processFetchContactsWithFindFriendsResponse:addressBook:contactBookSize:error:completionQueue:completionHandler:] */

void FUN_108bc5b5c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _CACurrentMediaTime();
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  _objc_retain(uVar7);
  iVar2 = (int)*(undefined8 *)(param_2 + 0x58);
  func_0x000108c7c97c();
  if (iVar2 == 0) {
    uStack_150 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar4;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  func_0x000108c7ca0c();
  _objc_initWeak(auStack_80,param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((param_4 == 0) || (param_7 != 0)) {
    if ((param_8 == 0) || (param_9 == 0)) goto LAB_108bc5dcc;
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_108bc5f58;
    puStack_130 = &UNK_11085b7b0;
    _objc_retain(param_9);
    lStack_120 = param_9;
    uStack_118 = param_6;
    _objc_retain(param_7);
    lStack_128 = param_7;
    func_0x000107c27d8c(param_8,&puStack_148);
    _objc_release(lStack_128);
    lVar5 = lStack_120;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 8);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_108bc5e54;
    puStack_b8 = &UNK_11094d590;
    _objc_retain(param_4);
    lStack_b0 = param_4;
    _objc_retain(uVar6);
    uStack_a8 = uVar6;
    _objc_retain(uStack_150);
    uStack_a0 = uStack_150;
    uStack_88 = uVar4;
    _objc_retain(param_5);
    uStack_98 = param_5;
    _objc_retain(uVar7);
    puStack_110 = puVar1;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_108bc5ed0;
    puStack_f8 = &UNK_110ab5cc0;
    uStack_e0 = param_1;
    uStack_90 = uVar7;
    _objc_copyWeak(auStack_e8,auStack_80);
    _objc_retain(param_9);
    lStack_f0 = param_9;
    uStack_d8 = param_6;
    func_0x00010c0f8500(uVar3);
    _objc_release(lStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    lVar5 = lStack_b0;
  }
  _objc_release(lVar5);
LAB_108bc5dcc:
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_150);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bc5e54; end: 108bc5ecf;  */

void FUN_108bc5e54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_2);
  func_0x000108c09214(param_2,uVar1,uVar3,uVar2,uVar5,uVar4);
  func_0x000108c0a564(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bc5ed0; end: 108bc5f57;  */

void FUN_108bc5ed0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _CACurrentMediaTime();
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be534c0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bc5f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,*(undefined8 *)(param_1 + 0x38),0);
    return;
  }
  return;
}



/* Entry: 108bc5f58; end: 108bc5f6f;  */

void FUN_108bc5f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bc5f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bc5f70; end: 108bc60ab; -[SCSnapchattersContactRequestCoordinator _deleteAllContactsWithCompletionQueue:completionHandler:] */

void FUN_108bc5f70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b280(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc60ac; end: 108bc60af;  */

void FUN_108bc60ac(void)

{
  return;
}



/* Entry: 108bc60b0; end: 108bc60e3;  */

void FUN_108bc60b0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be80ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc60e4; end: 108bc6183; -[SCSnapchattersContactRequestCoordinator _processDeleteAllContactsWithCompletionQueue:completionHandler:] */

void FUN_108bc60e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  pcStack_48 = FUN_108bc61cc;
  puStack_40 = &UNK_110842508;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110ab5d10,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 108bc6184; end: 108bc61cb;  */

void FUN_108bc6184(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x000108c20750(param_2);
  func_0x000108c208a4(param_2);
  func_0x000108c13578(param_2);
  func_0x000108c26d74(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bc61cc; end: 108bc61e3;  */

void FUN_108bc61cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bc61dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
    return;
  }
  return;
}



/* Entry: 108bc61e4; end: 108bc6227; -[SCSnapchattersContactRequestCoordinator _logFetchContactsResponseProcessingLatencyMs:] */

void FUN_108bc61e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bc6228; end: 108bc6277; -[SCSnapchattersContactRequestCoordinator _logFetchContactsNetworkLatencyMs:includingContactUpload:] */

void FUN_108bc6228(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bc6278; end: 108bc63c7; -[SCSnapchattersContactRequestCoordinator _logFetchConctacsInRegWithContactBookSize:] */

void FUN_108bc6278(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a68e0();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfcdc40();
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06f320();
    _objc_release(uVar1);
    _objc_release(uVar3);
    if ((int)uVar2 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a68c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108bc63c8; end: 108bc65d7; -[SCSnapchattersContactRequestCoordinator _logFetchContactsInRegWithFindFriendResponse:error:isContactBookIncluded:] */

void FUN_108bc63c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c13cf20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a56e0();
      _objc_release(uVar5);
    }
    lVar1 = param_3;
    func_0x00010c261ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5740();
      _objc_release(uVar5);
    }
    lVar1 = param_3;
    func_0x00010c13cf20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      lVar4 = param_3;
      func_0x00010c261ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      _objc_release(lVar1);
      if (lVar6 != 0) goto LAB_108bc6558;
      lVar1 = *(long *)(param_1 + 0x40);
      func_0x00010c269d40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5700();
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010bf3ec40(param_4);
    func_0x00010c0a5980(lVar1,param_2,lVar4);
  }
  _objc_release(lVar1);
LAB_108bc6558:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bc65d8; end: 108bc65df; -[SCSnapchattersContactRequestCoordinator fetchServerContactsWithCallbackQueue:completionBlock:] */

void FUN_108bc65d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaa190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fetchServerContactsWithCallbackQ_1125c8208);
  return;
}



/* Entry: 108bc65e0; end: 108bc6693; -[SCSnapchattersContactRequestCoordinator .cxx_destruct] */

void FUN_108bc65e0(long param_1)

{
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



/* Entry: 108bc6694; end: 108bc67db;  */

void FUN_108bc6694(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_1;
  if (param_6 < 1) {
    func_0x00010901dcb4(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c0b4ca0(param_3);
    func_0x00010901dd44((double)lVar1 / 1000.0,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = param_1;
  func_0x000108c235fc(param_1,uVar2,param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c232180();
  if ((int)uVar5 != 0) {
    func_0x000108c1e52c(param_4,param_1,param_6,uVar2);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108bc67dc; end: 108bc6a57; -[SCSnapchattersDataCoordinator handleSnapchatterFetchDataRequest:completionQueue:completionHandler:] */

void FUN_108bc67dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0bdcc0(param_3);
  puVar2 = PTR_PTR_1126b15e8;
  func_0x00010bfa9d20(PTR_PTR_1126b15e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126daff8;
  _objc_alloc(PTR_PTR_1126daff8);
  func_0x00010c008d00();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90));
  func_0x00010bf7be60(*(undefined8 *)(param_1 + 0x10));
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_108bc6a58;
  puStack_a8 = &UNK_110ab5d50;
  lStack_a0 = param_1;
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_5);
  uStack_88 = param_5;
  _objc_retain(param_4);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_108bc6c54;
  puStack_e0 = &UNK_1108942f0;
  lStack_d8 = param_1;
  uStack_90 = param_4;
  _objc_copyWeak(auStack_c8,auStack_78);
  _objc_retain(param_3);
  uStack_d0 = param_3;
  _objc_copyWeak(auStack_100,auStack_78);
  _objc_retain(param_3);
  func_0x00010c0bdcc0(param_3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_100);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc6a58; end: 108bc6b63;  */

void FUN_108bc6a58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010bfa6d60(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108bc6b64; end: 108bc6c3f;  */

void FUN_108bc6b64(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bdcb920();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x30);
  if ((lVar2 != 0) && (lVar1 = *(long *)(param_1 + 0x28), lVar1 != 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108bc6c40;
    puStack_50 = &UNK_1108523f8;
    _objc_retain(lVar2);
    lStack_40 = lVar2;
    uStack_38 = param_2;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x000107c27d8c(lVar1,&puStack_68);
    _objc_release(uStack_48);
    _objc_release(lStack_40);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108bc6c40; end: 108bc6c53;  */

void FUN_108bc6c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bc6c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bc6c54; end: 108bc6d43;  */

void FUN_108bc6c54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bfd29a0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 108bc6d44; end: 108bc6d9f;  */

void FUN_108bc6d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc6da0; end: 108bc6e8f;  */

void FUN_108bc6da0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bfd2ba0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 108bc6e90; end: 108bc6eeb;  */

void FUN_108bc6e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc6eec; end: 108bc734b; -[SCSnapchattersDataCoordinator handleSnapchatterUpdateDataRequest:] */

void FUN_108bc6eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  func_0x00010c0bc6c0(param_3);
  puVar2 = PTR_PTR_1126b15e8;
  func_0x00010c2894a0(PTR_PTR_1126b15e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126daff8;
  _objc_alloc(PTR_PTR_1126daff8);
  func_0x00010c008d00();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90));
  func_0x00010bf7bea0(*(undefined8 *)(param_1 + 0x10));
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108bc734c;
  puStack_a0 = &UNK_110ab5d80;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x108bc73b4;
  puStack_d8 = &UNK_110ab5db0;
  uStack_98 = param_3;
  lStack_90 = param_1;
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_3);
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x108bc741c;
  puStack_110 = &UNK_110ab5de0;
  uStack_d0 = param_3;
  lStack_c8 = param_1;
  _objc_copyWeak(auStack_f8,auStack_80);
  _objc_retain(param_3);
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x108bc7484;
  puStack_148 = &UNK_110ab5e10;
  uStack_108 = param_3;
  lStack_100 = param_1;
  _objc_copyWeak(auStack_130,auStack_80);
  _objc_retain(param_3);
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x108bc74ec;
  puStack_180 = &UNK_110ab5e40;
  uStack_140 = param_3;
  lStack_138 = param_1;
  _objc_copyWeak(auStack_168,auStack_80);
  _objc_retain(param_3);
  puStack_1d0 = puVar1;
  uStack_1c8 = 0xc2000000;
  uStack_1c0 = 0x108bc7554;
  puStack_1b8 = &UNK_110ab5e70;
  uStack_178 = param_3;
  lStack_170 = param_1;
  _objc_copyWeak(auStack_1a0,auStack_80);
  _objc_retain(param_3);
  puStack_208 = puVar1;
  uStack_200 = 0xc2000000;
  uStack_1f8 = 0x108bc75bc;
  puStack_1f0 = &UNK_110ab5e10;
  uStack_1b0 = param_3;
  lStack_1a8 = param_1;
  _objc_copyWeak(auStack_1d8,auStack_80);
  _objc_retain(param_3);
  puStack_240 = puVar1;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_108bc7624;
  puStack_228 = &UNK_1108576a8;
  lStack_220 = param_1;
  uStack_1e8 = param_3;
  lStack_1e0 = param_1;
  _objc_retain(param_3);
  uStack_218 = param_3;
  _objc_copyWeak(auStack_210,auStack_80);
  _objc_copyWeak(auStack_248,auStack_80);
  _objc_retain(param_3);
  func_0x00010c0bc6c0(param_3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_248);
  _objc_destroyWeak(auStack_210);
  _objc_release(uStack_218);
  _objc_release(uStack_1e8);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(uStack_1b0);
  _objc_destroyWeak(auStack_1a0);
  _objc_release(uStack_178);
  _objc_destroyWeak(auStack_168);
  _objc_release(uStack_140);
  _objc_destroyWeak(auStack_130);
  _objc_release(uStack_108);
  _objc_destroyWeak(auStack_f8);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc734c; end: 108bc7623;  */

void FUN_108bc734c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc6e20(lVar2,param_2,uVar1,uVar3,0);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108bc7624; end: 108bc7713;  */

void FUN_108bc7624(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c20d7e0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 108bc7714; end: 108bc77d7;  */

void FUN_108bc7714(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb9a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc77d8; end: 108bc79d7; -[SCSnapchattersDataCoordinator handleSnapchatterSuggestDataRequest:] */

void FUN_108bc77d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010c0bdc80(param_3);
  func_0x00010bdcba40(param_1);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108bc79d8;
  puStack_70 = &UNK_1108b6ad0;
  uStack_68 = param_1;
  _objc_retain(param_3);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_108bc79ec;
  puStack_a8 = &UNK_110ab5ed0;
  uStack_a0 = param_1;
  uStack_60 = param_3;
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_copyWeak(auStack_90,auStack_58);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_108bc7c48;
  puStack_e0 = &UNK_11085d500;
  uStack_d8 = param_1;
  _objc_retain(param_3);
  uStack_d0 = param_3;
  _objc_copyWeak(auStack_c8,auStack_58);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_100,auStack_58);
  func_0x00010c0bdc80(param_3);
  _objc_destroyWeak(auStack_100);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc79d8; end: 108bc79eb;  */

void FUN_108bc79d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be14d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchSuggestionWithSuggestReque_112562ce0,
             *(undefined8 *)(param_1 + 0x28),0,0);
  return;
}



/* Entry: 108bc79ec; end: 108bc7ba3;  */

void FUN_108bc79ec(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  func_0x00010bf7be80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2448a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    _objc_retain(param_2);
    lVar4 = param_2;
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  _objc_retain(lVar4);
  _objc_retain(uVar1);
  func_0x00010bfe2a00(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108bc7ba4; end: 108bc7c47;  */

void FUN_108bc7ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcb980(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066860();
    _objc_release(uVar1);
    func_0x00010bfe2a60(*(undefined8 *)(param_1 + 0x70));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bc7c48; end: 108bc7d2f;  */

void FUN_108bc7c48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  func_0x00010bf7be80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bfe17c0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108bc7d30; end: 108bc7d8b;  */

void FUN_108bc7d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc7d8c; end: 108bc7e87;  */

void FUN_108bc7d8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  func_0x00010bf7be80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c29e3a0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 108bc7e88; end: 108bc7ee3;  */

void FUN_108bc7e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc7ee4; end: 108bc80db; -[SCSnapchattersDataCoordinator handleSnapchatterContactDataRequest:completionQueue:completionHandler:] */

void FUN_108bc7ee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b15e8;
  func_0x00010bf4a360(PTR_PTR_1126b15e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126daff8;
  _objc_alloc(PTR_PTR_1126daff8);
  func_0x00010c008d00();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90));
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108bc80dc;
  puStack_90 = &UNK_1108843d8;
  lStack_88 = param_1;
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_retain(param_5);
  uStack_70 = param_5;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_b0,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0bdca0(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b0);
  _objc_release(param_3);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc80dc; end: 108bc822b;  */

void FUN_108bc80dc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,*(undefined8 *)(param_2 + 0x20));
  func_0x00010bf7be40(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x78);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar5);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar2);
  uStack_60 = param_1;
  func_0x00010bfa5d20(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 108bc822c; end: 108bc82d7;  */

void FUN_108bc822c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcb900();
  _objc_release(param_4);
  _objc_release(lVar1);
  _CACurrentMediaTime();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be53480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc82d8; end: 108bc83eb;  */

void FUN_108bc82d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  func_0x00010bf7be40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  func_0x00010bf6b2a0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108bc83ec; end: 108bc844f;  */

void FUN_108bc83ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb900();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc8450; end: 108bc84ef; -[SCSnapchattersDataCoordinator addFriendWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc8450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf0a520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7bea0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x00010bdc6e20(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bc84f0; end: 108bc8577; -[SCSnapchattersDataCoordinator addFriendWithUpdateRequest:operationQueue:] */

void FUN_108bc84f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf0a520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc6e40(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108bc8578; end: 108bc8653; -[SCSnapchattersDataCoordinator multiAddFriendsWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc8578(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0bc6c0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ad4660,
                      &PTR___NSConcreteGlobalBlock_110ad4680,&PTR___NSConcreteGlobalBlock_110ad46c0,
                      &PTR___NSConcreteGlobalBlock_110ad4700,&PTR___NSConcreteGlobalBlock_110ad4740,
                      &PTR___NSConcreteGlobalBlock_110ad4760,&PTR___NSConcreteGlobalBlock_110ad4780,
                      &PTR___NSConcreteGlobalBlock_110ad47a0,&PTR___NSConcreteGlobalBlock_110ad47c0)
  ;
  func_0x00010bf7bea0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x00010be615e0(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bc8654; end: 108bc872f; -[SCSnapchattersDataCoordinator deleteFriendWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc8654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0bc6c0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ad4660,
                      &PTR___NSConcreteGlobalBlock_110ad4680,&PTR___NSConcreteGlobalBlock_110ad46c0,
                      &PTR___NSConcreteGlobalBlock_110ad4700,&PTR___NSConcreteGlobalBlock_110ad4740,
                      &PTR___NSConcreteGlobalBlock_110ad4760,&PTR___NSConcreteGlobalBlock_110ad4780,
                      &PTR___NSConcreteGlobalBlock_110ad47a0,&PTR___NSConcreteGlobalBlock_110ad47c0)
  ;
  func_0x00010bf7bea0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x00010bdfa100(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bc8730; end: 108bc87cf; -[SCSnapchattersDataCoordinator blockSnapchatterWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc8730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf0a560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7bea0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x00010bdd4ee0(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bc87d0; end: 108bc88ab; -[SCSnapchattersDataCoordinator unblockSnapchatterWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc87d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0bc6c0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ad4660,
                      &PTR___NSConcreteGlobalBlock_110ad4680,&PTR___NSConcreteGlobalBlock_110ad46c0,
                      &PTR___NSConcreteGlobalBlock_110ad4700,&PTR___NSConcreteGlobalBlock_110ad4740,
                      &PTR___NSConcreteGlobalBlock_110ad4760,&PTR___NSConcreteGlobalBlock_110ad4780,
                      &PTR___NSConcreteGlobalBlock_110ad47a0,&PTR___NSConcreteGlobalBlock_110ad47c0)
  ;
  func_0x00010bf7bea0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x00010bed0f60(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bc88ac; end: 108bc8987; -[SCSnapchattersDataCoordinator setDisplayNameWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc88ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0bc6c0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ad4660,
                      &PTR___NSConcreteGlobalBlock_110ad4680,&PTR___NSConcreteGlobalBlock_110ad46c0,
                      &PTR___NSConcreteGlobalBlock_110ad4700,&PTR___NSConcreteGlobalBlock_110ad4740,
                      &PTR___NSConcreteGlobalBlock_110ad4760,&PTR___NSConcreteGlobalBlock_110ad4780,
                      &PTR___NSConcreteGlobalBlock_110ad47a0,&PTR___NSConcreteGlobalBlock_110ad47c0)
  ;
  func_0x00010bf7bea0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x00010bea3800(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bc8988; end: 108bc8a63; -[SCSnapchattersDataCoordinator setPostSendEmojiWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc8988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0bc6c0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ad4660,
                      &PTR___NSConcreteGlobalBlock_110ad4680,&PTR___NSConcreteGlobalBlock_110ad46c0,
                      &PTR___NSConcreteGlobalBlock_110ad4700,&PTR___NSConcreteGlobalBlock_110ad4740,
                      &PTR___NSConcreteGlobalBlock_110ad4760,&PTR___NSConcreteGlobalBlock_110ad4780,
                      &PTR___NSConcreteGlobalBlock_110ad47a0,&PTR___NSConcreteGlobalBlock_110ad47c0)
  ;
  func_0x00010bf7bea0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x00010bea6720(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bc8a64; end: 108bc8bd7; -[SCSnapchattersDataCoordinator _addFriendWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc8a64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bef8a80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc8bd8; end: 108bc8cc3;  */

void FUN_108bc8bd8(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdcb9a0(lVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    if ((lVar2 != 0) && (lVar3 = *(long *)(param_1 + 0x30), lVar3 != 0)) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_108bc8cc4;
      puStack_60 = &UNK_1108523f8;
      _objc_retain(lVar3);
      lStack_50 = lVar3;
      uStack_48 = param_2;
      _objc_retain(param_3);
      uStack_58 = param_3;
      func_0x000107c27d8c(lVar2,&puStack_78);
      _objc_release(uStack_58);
      _objc_release(lStack_50);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc8cc4; end: 108bc8cd7;  */

void FUN_108bc8cc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bc8cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bc8cd8; end: 108bc8e6b; -[SCSnapchattersDataCoordinator _addFriendWithUpdateRequest:operationQueue:] */

void FUN_108bc8cd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef8aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_opt_new(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x00010c21b4a0();
  _objc_initWeak(auStack_58,param_1);
  uVar1 = uVar2;
  func_0x00010c0e0e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uVar4 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108bc8e6c; end: 108bc8f07;  */

void FUN_108bc8e6c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = param_2;
    func_0x00010c252440();
    iVar1 = (int)uVar2;
    if ((iVar1 == 2) || (iVar1 == 1)) {
      func_0x00010bdcb9a0(param_1);
    }
    else if (iVar1 == 0) {
      func_0x00010bf7bea0(*(undefined8 *)(param_1 + 0x10));
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bc8f08; end: 108bc907b; -[SCSnapchattersDataCoordinator _multiAddFriendsWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc8f08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0d1b60(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc907c; end: 108bc90db;  */

void FUN_108bc907c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb9c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc90dc; end: 108bc9233; -[SCSnapchattersDataCoordinator _deleteFriendWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc90dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf6be60(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc9234; end: 108bc9293;  */

void FUN_108bc9234(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb9c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc9294; end: 108bc93eb; -[SCSnapchattersDataCoordinator _blockSnapchatterWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc9294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf1d520(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc93ec; end: 108bc944b;  */

void FUN_108bc93ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb9c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc944c; end: 108bc95a3; -[SCSnapchattersDataCoordinator _unblockSnapchatterWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc944c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c27f500(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc95a4; end: 108bc9603;  */

void FUN_108bc95a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb9c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc9604; end: 108bc97ff; -[SCSnapchattersDataCoordinator _setDisplayNameWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc9604(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010bf0a940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c071ae0();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c18fd20(uVar6);
    _objc_release(uVar6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
  }
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc9800; end: 108bc985f;  */

void FUN_108bc9800(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb9c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc9860; end: 108bc99b7; -[SCSnapchattersDataCoordinator _setPostSendEmojiWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc9860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c1df340(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc99b8; end: 108bc9a17;  */

void FUN_108bc99b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb9c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc9a18; end: 108bc9b6f; -[SCSnapchattersDataCoordinator _ignoreFriendWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bc9a18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfe6760(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc9b70; end: 108bc9bcf;  */

void FUN_108bc9b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb9c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc9bd0; end: 108bc9cff; -[SCSnapchattersDataCoordinator updateFriendRequestViewed:completionQueue:completionHandler:] */

void FUN_108bc9bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc9d00; end: 108bc9d37;  */

void FUN_108bc9d00(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed8780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc9d38; end: 108bc9e67; -[SCSnapchattersDataCoordinator promoteAddFriendsSuggestionsOfUserIds:completionQueue:completionHandler:] */

void FUN_108bc9d38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc9e68; end: 108bc9e9f;  */

void FUN_108bc9e68(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc9ea0; end: 108bc9fcf; -[SCSnapchattersDataCoordinator updateRecentFriendsByUserId:completionQueue:completionHandler:] */

void FUN_108bc9ea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc9fd0; end: 108bca007;  */

void FUN_108bc9fd0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bede5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bca008; end: 108bca0a3; -[SCSnapchattersDataCoordinator prefetchSuggestedSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108bca008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd780;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfab700(puVar1,param_2,1,0,5,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcba40(param_1,param_2,puVar1);
  func_0x00010be14d00(param_1,param_2,puVar1,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108bca0a4; end: 108bca20b; -[SCSnapchattersDataCoordinator setSnapStreakForUsername:snapstreakCount:expirationServerTimestamp:completionQueue:completionHandler:] */

void FUN_108bca0a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bca20c; end: 108bca247;  */

void FUN_108bca20c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bca248; end: 108bca377; -[SCSnapchattersDataCoordinator setSnapStreakForUserIdsToStreakMetadata:completionQueue:completionHandler:] */

void FUN_108bca248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bca378; end: 108bca3af;  */

void FUN_108bca378(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bca3b0; end: 108bca4bf; -[SCSnapchattersDataCoordinator handleDataRequest:] */

void FUN_108bca3b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b15e8;
  _objc_opt_class(PTR_PTR_1126b15e8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c0bdd00(param_3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bca4c0; end: 108bca4ff;  */

void FUN_108bca4c0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleSnapchatterFetchDataReques_1125d23e8,
             param_2,0,0);
  return;
}



/* Entry: 108bca500; end: 108bca507; -[SCSnapchattersDataCoordinator addDataUpdateListener:] */

void FUN_108bca500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108bca508; end: 108bca50f; -[SCSnapchattersDataCoordinator removeDataUpdateListener:] */

void FUN_108bca508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108bca510; end: 108bca513; -[SCSnapchattersDataCoordinator dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_108bca510(void)

{
  return;
}



/* Entry: 108bca514; end: 108bca613; -[SCSnapchattersDataCoordinator cleanAllDataWithCompletionQueue:completionHandler:] */

void FUN_108bca514(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bca614; end: 108bca647;  */

void FUN_108bca614(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddee60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bca648; end: 108bca64f; -[SCSnapchattersDataCoordinator handleSoJuFriendsResponse:completionQueue:completionHandler:] */

void FUN_108bca648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_handleSoJuFriendsResponse_comple_1125d2408);
  return;
}



/* Entry: 108bca650; end: 108bca82f; -[SCSnapchattersDataCoordinator _fetchSuggestionWithSuggestRequest:completionQueue:completionHandler:] */

void FUN_108bca650(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071480();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _CACurrentMediaTime();
    func_0x00010bf7be80(*(undefined8 *)(param_2 + 0x10));
    uVar2 = param_4;
    func_0x00010bf0a6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c07aa00();
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = 1;
    if ((int)uVar1 != 0) {
      uStack_78 = 2;
    }
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_5);
    uStack_70 = param_1;
    func_0x00010bfaaae0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bca830; end: 108bca9f7;  */

void FUN_108bca830(double param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    _CACurrentMediaTime();
    bVar1 = param_3 != 0 && param_4 == 0;
    func_0x00010bdcb980(lVar2);
    lVar6 = *(long *)(param_2 + 0x30);
    if (lVar6 != 0) {
      lVar5 = *(long *)(param_2 + 0x28);
      if (lVar5 == 0) {
        (**(code **)(lVar6 + 0x10))(lVar6,bVar1,param_4);
      }
      else {
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_108bca9f8;
        puStack_80 = &UNK_1108523f8;
        _objc_retain(lVar6);
        lStack_70 = lVar6;
        uStack_68 = bVar1;
        _objc_retain(param_4);
        lStack_78 = param_4;
        func_0x000107c27d8c(lVar5,&puStack_98);
        _objc_release(lStack_78);
        _objc_release(lStack_70);
      }
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1560();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar2 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    dVar7 = *(double *)(param_2 + 0x48);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf0a6a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b15c0((param_1 - dVar7) * 1000.0,uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bca9f8; end: 108bcaa0b;  */

void FUN_108bca9f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bcaa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bcaa0c; end: 108bcaaab; -[SCSnapchattersDataCoordinator _updateFriendRequestViewed:completionQueue:completionHandler:] */

void FUN_108bcaa0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108bcaaac;
  puStack_40 = &UNK_11085adb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,param_5);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcaaac; end: 108bcabbb;  */

void FUN_108bcaaac(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar8 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain(param_2);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar13 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar13);
  puVar10 = auStack_c8;
  uVar11 = 0x10;
  lVar12 = lVar13;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar15 = *plStack_100;
    do {
      lVar16 = 0;
      do {
        if (*plStack_100 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        lVar9 = *(long *)(lStack_108 + lVar16 * 8);
        func_0x000108c1dbac(param_2,lVar9,1);
        lVar16 = lVar16 + 1;
      } while (lVar12 != lVar16);
      puVar10 = auStack_c8;
      uVar11 = 0x10;
      lVar12 = lVar13;
      puVar8 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  _objc_retain(uVar11);
  puVar1 = *(undefined **)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf86620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c292720();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar8);
  _objc_retain(puVar3);
  puVar4 = (undefined1 *)puVar8;
  func_0x00010bf529e0();
  if (puVar4 == (undefined1 *)0x0) {
    _objc_retain(puVar3);
    puVar7 = puVar3;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    func_0x00010bf97f00(puVar8);
    _objc_retain(puVar6);
    puVar7 = puVar6;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(puVar6);
        }
        func_0x00010c066b00(puVar5);
        puVar14 = puVar14 + 1;
      } while (puVar7 != puVar14);
      puVar7 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar7 = puVar5;
    func_0x00010bf09f00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar8);
  puVar5 = PTR_PTR_1126db000;
  _objc_alloc();
  func_0x00010c032e00();
  uVar17 = *(undefined8 *)(param_2 + 8);
  _objc_retain();
  _objc_retain(uVar11);
  _objc_retain(puVar5);
  _objc_retain(puVar1);
  func_0x00010c0f8500(uVar17);
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)((long)puVar8 + 0x20);
  _objc_retain();
  _objc_retain(uVar11);
  puVar2 = PTR_PTR_1126db298;
  func_0x000108c3a018(PTR_PTR_1126db298,uVar11);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126db298;
    func_0x000108c39e98(PTR_PTR_1126db298,uVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar17 = uVar11;
    func_0x00010c292720(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar2);
    _objc_release(uVar17);
  }
  func_0x00010c25ed40(lVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 108bcabbc; end: 108bcaf33; -[SCSnapchattersDataCoordinator _directPromoteAddFriendsTopSuggestionsUserIds:completionQueue:completionHandler:] */

void FUN_108bcabbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = *(undefined **)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf86620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c292720();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(puVar3);
  lVar4 = param_3;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    _objc_retain(puVar3);
    puVar7 = puVar3;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    func_0x00010bf97f00(param_3);
    _objc_retain(puVar6);
    puVar7 = puVar6;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar6);
        }
        func_0x00010c066b00(puVar5);
        puVar10 = puVar10 + 1;
      } while (puVar7 != puVar10);
      puVar7 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar7 = puVar5;
    func_0x00010bf09f00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126db000;
  _objc_alloc();
  func_0x00010c032e00();
  uVar11 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(puVar5);
  _objc_retain(puVar1);
  func_0x00010c0f8500(uVar11);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain();
  _objc_retain(uVar11);
  puVar2 = PTR_PTR_1126db298;
  func_0x000108c3a018(PTR_PTR_1126db298,uVar11);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126db298;
    func_0x000108c39e98(PTR_PTR_1126db298,uVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar8 = uVar11;
    func_0x00010c292720(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar2);
    _objc_release(uVar8);
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bcaf34; end: 108bcaf43;  */

void FUN_108bcaf34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar3);
  puVar1 = PTR_PTR_1126db298;
  func_0x000108c3a018(PTR_PTR_1126db298,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126db298;
    func_0x000108c39e98(PTR_PTR_1126db298,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = uVar3;
    func_0x00010c292720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bcaf44; end: 108bcaf8f;  */

void FUN_108bcaf44(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c18ff40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),0);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bcaf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 108bcaf90; end: 108bcb037; -[SCSnapchattersDataCoordinator _updateRecentFriendsByUserId:completionQueue:completionHandler:] */

void FUN_108bcaf90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108bcb038;
  puStack_58 = &UNK_110864a38;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_70,param_4,param_5);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcb038; end: 108bcb247;  */

void FUN_108bcb038(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double unaff_d8;
  double unaff_d9;
  undefined1 auStack_2a8 [8];
  undefined1 *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined1 *puStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined1 *puStack_248;
  undefined1 auStack_240 [8];
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  double dStack_1b0;
  double dStack_1a8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  puVar3 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c1b1f0(lVar6,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  dVar13 = 0.0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar6);
  puVar4 = auStack_f8;
  lVar5 = 0x10;
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar11 = *plStack_130;
    do {
      lVar5 = 0;
      do {
        dVar14 = dVar13;
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(lVar6);
          dVar14 = dVar13;
        }
        lVar7 = *(long *)(lStack_138 + lVar5 * 8);
        lVar10 = *(long *)(param_1 + 0x28);
        lVar2 = lVar7;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 == 0) {
          unaff_d8 = 2.2250738585072014e-308;
        }
        else {
          func_0x00010c26f320(lVar10);
          unaff_d8 = dVar14;
        }
        _objc_release(lVar10);
        _objc_release(lVar2);
        lVar2 = lVar7;
        func_0x00010bfb8280();
        _objc_retainAutoreleasedReturnValue();
        dVar13 = dVar14;
        if (lVar2 != 0) {
          lVar10 = lVar7;
          func_0x00010bfb8280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0891c0();
          dVar13 = dVar14;
          _objc_release(lVar10);
          _objc_release(lVar2);
          unaff_d9 = dVar14;
          if (dVar14 < unaff_d8) {
            dVar13 = unaff_d8;
            func_0x000108c1e34c(param_2,lVar7);
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      puVar4 = auStack_f8;
      lVar5 = 0x10;
      lVar1 = lVar6;
      puVar3 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  dStack_1b0 = unaff_d9;
  dStack_1a8 = unaff_d8;
  _objc_retain(puVar3);
  _objc_retain(lVar5);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  puStack_1d0 = &uStack_1d8;
  uStack_1d8 = 0;
  uStack_1c8 = 0x2020000000;
  uStack_1c0 = (long)puVar4 < 1 || lVar5 != 0;
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x3032000000;
  pcStack_1f0 = FUN_108bcb514;
  uStack_1e8 = 0x108bcb524;
  uStack_1e0 = 0;
  uStack_238 = 0;
  uStack_228 = 0x3032000000;
  pcStack_220 = FUN_108bcb514;
  uStack_218 = 0x108bcb524;
  uStack_210 = 0;
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  puStack_230 = &uStack_238;
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x88);
  _objc_retain(uVar9);
  _objc_initWeak(auStack_240,param_2);
  uVar12 = *(undefined8 *)(param_2 + 8);
  puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_290 = 0xc2000000;
  pcStack_288 = FUN_108bcb52c;
  puStack_280 = &UNK_110ab6020;
  puStack_260 = &uStack_238;
  _objc_retain(puVar3);
  puStack_258 = &uStack_208;
  puStack_278 = (undefined1 *)puVar3;
  puStack_248 = puVar4;
  _objc_retain(lVar5);
  lStack_270 = lVar5;
  _objc_retain(uVar9);
  puStack_250 = &uStack_1d8;
  uStack_268 = uVar9;
  _objc_copyWeak(auStack_2a8,auStack_240);
  puStack_2a0 = puVar4;
  _objc_retain(lVar5);
  _objc_retain(uVar8);
  _objc_retain(in_x6);
  func_0x00010c0f8500(uVar12);
  _objc_release(in_x6);
  _objc_release(uVar8);
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_2a8);
  _objc_release(uStack_268);
  _objc_release(lStack_270);
  _objc_release(puStack_278);
  _objc_destroyWeak(auStack_240);
  _objc_release(uVar9);
  _objc_release(uVar8);
  __Block_object_dispose(&uStack_238,8);
  _objc_release(uStack_210);
  __Block_object_dispose(&uStack_208,8);
  _objc_release(uStack_1e0);
  __Block_object_dispose(&uStack_1d8,8);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(lVar5);
  _objc_release(puVar3);
  return;
}


