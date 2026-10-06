/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bcb248; end: 108bcb513; -[SCSnapchattersDataCoordinator _setSnapStreakForUsername:snapstreakCount:expirationServerTimestamp:completionQueue:completionHandler:] */

void FUN_108bcb248(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [8];
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = param_4 < 1 || param_5 != 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_108bcb514;
  uStack_a8 = 0x108bcb524;
  uStack_a0 = 0;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_108bcb514;
  uStack_d8 = 0x108bcb524;
  uStack_d0 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puStack_f0 = &uStack_f8;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_100,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_108bcb52c;
  puStack_140 = &UNK_110ab6020;
  puStack_120 = &uStack_f8;
  _objc_retain(param_3);
  puStack_118 = &uStack_c8;
  uStack_138 = param_3;
  lStack_108 = param_4;
  _objc_retain(param_5);
  lStack_130 = param_5;
  _objc_retain(uVar2);
  puStack_110 = &uStack_98;
  uStack_128 = uVar2;
  _objc_copyWeak(auStack_168,auStack_100);
  lStack_160 = param_4;
  _objc_retain(param_5);
  _objc_retain(uVar1);
  _objc_retain(param_7);
  func_0x00010c0f8500(uVar3);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_168);
  _objc_release(uStack_128);
  _objc_release(lStack_130);
  _objc_release(uStack_138);
  _objc_destroyWeak(auStack_100);
  _objc_release(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcb514; end: 108bcb52b;  */

void FUN_108bcb514(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108bcb52c; end: 108bcb61b;  */

void FUN_108bcb52c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x000108c1aa4c(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  if ((lVar3 == 0) || (func_0x000100bf119c(), (int)lVar3 == 0)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    FUN_108bc6694(uVar4,puVar1,*(undefined8 *)(param_1 + 0x28),param_2,
                  *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bcb61c; end: 108bcb723;  */

void FUN_108bcb61c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    func_0x00010c0f7fc0(uVar3);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b12c0();
      _objc_release(uVar3);
    }
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108bcb724; end: 108bcb73f;  */

void FUN_108bcb724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__announceDidEndSnapchattersFrien_1125507f0,
             *(undefined1 *)(param_1 + 0x40),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108bcb740; end: 108bcba27; -[SCSnapchattersDataCoordinator _setSnapStreakForUserIdsToStreakMetadata:completionQueue:completionHandler:] */

void FUN_108bcb740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_108bcb514;
  uStack_a8 = 0x108bcb524;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_108bcb514;
  uStack_d8 = 0x108bcb524;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_a0 = puVar1;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_108bcb514;
  uStack_108 = 0x108bcb524;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_120 = &uStack_128;
  puStack_d0 = puVar2;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  puStack_100 = puVar1;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar4);
  _objc_initWeak(auStack_130,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_108bcba28;
  puStack_168 = &UNK_110ab60b0;
  _objc_retain(param_3);
  uStack_160 = param_3;
  _objc_retain(uVar4);
  puStack_150 = &uStack_c8;
  puStack_148 = &uStack_98;
  puStack_140 = &uStack_f8;
  uStack_158 = uVar4;
  puStack_138 = &uStack_128;
  _objc_copyWeak(auStack_188,auStack_130);
  _objc_retain(uVar3);
  _objc_retain(param_5);
  func_0x00010c0f8500(uVar5);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_188);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_destroyWeak(auStack_130);
  _objc_release(uVar4);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(puStack_100);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(puStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(puStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcba28; end: 108bcbee3;  */

void FUN_108bcba28(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_2;
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar1);
      }
      puVar12 = *(undefined **)(lVar11 * 8);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x000100bed2fc(param_2,puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c25be80(uVar2);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010bf9c7e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        puVar5 = puVar3;
        func_0x000100bf119c();
        if ((int)puVar5 == 0) {
          func_0x00010c1d0560(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
        }
        else {
          uVar13 = *(undefined8 *)(param_1 + 0x28);
          _objc_retain(uVar13);
          _objc_retain(param_2);
          _objc_retain(uVar8);
          _objc_retain(puVar4);
          _objc_retain(puVar3);
          puVar5 = puVar4;
          func_0x00010c067fc0(puVar4);
          puVar6 = puVar3;
          puVar12 = puVar4;
          FUN_108bc6694(puVar3,puVar4,uVar8,param_2,uVar13,puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          _objc_release(param_2);
          _objc_release(uVar8);
          _objc_release(puVar4);
          _objc_release(puVar3);
          puVar5 = puVar6;
          func_0x00010bf529e0();
          if (puVar5 != (undefined *)0x0) {
            func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
          }
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
          func_0x00010c1d0560(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
          _objc_release(puVar6);
        }
      }
      _objc_release(uVar8);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
      lVar11 = lVar11 + 1;
    } while (lVar10 != lVar11);
    lVar10 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2 + 0x50;
  _objc_loadWeakRetained();
  if (puVar4 != (undefined *)0x0) {
    if (*(char *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18) == '\x01') {
      func_0x00010c0f7fc0(*(undefined8 *)(puVar4 + 0x50));
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x28);
    func_0x00010bf529e0();
    if (lVar7 != 0) {
      func_0x00010c0f7fc0(*(undefined8 *)(puVar4 + 0x50));
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
    func_0x00010bf529e0();
    if (lVar7 != 0) {
      lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
      _objc_retain(lVar9);
      lVar7 = lVar9;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar9);
          }
          uVar8 = *(undefined8 *)(param_2 + 0x20);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b12c0();
          _objc_release(uVar8);
          lVar11 = lVar11 + 1;
        } while (lVar7 != lVar11);
        lVar7 = lVar9;
        func_0x00010bf52a60();
      }
      _objc_release(lVar9);
    }
    lVar7 = *(long *)(param_2 + 0x28);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7,puVar12);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdcb970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar4 + 0x20),PTR_s__announceDidEndSnapchattersFrien_1125507f8,1,
             *(undefined8 *)(*(long *)(*(long *)(puVar4 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 108bcbee4; end: 108bcbf13;  */

void FUN_108bcbee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__announceDidEndSnapchattersFrien_1125507f8,1,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 108bcbf14; end: 108bcbf93;  */

void FUN_108bcbf14(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 108bcbf94; end: 108bcbfab; -[SCSnapchattersDataCoordinator _cleanAllDataWithCompletionQueue:completionHandler:] */

void FUN_108bcbf94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_performChanges_completionQueue_c_11261bb60,
             &PTR___NSConcreteGlobalBlock_110ab6110,param_3,param_4);
  return;
}



/* Entry: 108bcbfac; end: 108bcc02b;  */

void FUN_108bcbfac(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x000108c209fc(param_2);
  func_0x000108c11894(param_2);
  func_0x000108c208a4(param_2);
  func_0x000108c10be0(param_2);
  func_0x000108c0d684(param_2);
  func_0x000108c12240(param_2);
  func_0x000108c13578(param_2);
  func_0x000108c26d74(param_2);
  func_0x00010af53fcc(param_2);
  func_0x000108c103b8(param_2);
  func_0x000108c7b244(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bcc02c; end: 108bcc037; -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersUpdateDataRequest:withSuccess:andError:] */

void FUN_108bcc02c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceDidEndSnapchattersUpdat_112550810);
  return;
}



/* Entry: 108bcc038; end: 108bcc1ef; -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersUpdateDataRequest:withSuccess:error:completionQueue:completionHandler:] */

void FUN_108bcc038(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b15e8;
  _objc_retain(param_5);
  func_0x00010c2894a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126daff8;
  _objc_alloc(PTR_PTR_1126daff8);
  func_0x00010c008d00();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90));
  func_0x00010bf75c40(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_5);
  if (param_4 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    _objc_opt_class(param_1);
    func_0x00010bf63740();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b15e8;
    func_0x00010c2894a0(PTR_PTR_1126b15e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63720(uVar4);
    _objc_release(puVar3);
    _objc_release(param_1);
    if ((param_6 != 0) && (param_7 != 0)) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_108bcc1f0;
      puStack_78 = &UNK_11084a9b8;
      _objc_retain(param_7);
      uStack_68 = (undefined1)param_4;
      lStack_70 = param_7;
      func_0x000107c27d8c(param_6,&puStack_90);
      _objc_release(lStack_70);
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcc1f0; end: 108bcc203;  */

void FUN_108bcc1f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bcc200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 108bcc204; end: 108bcc277; -[SCSnapchattersDataCoordinator _announceDidStartSnapchattersSuggestDataRequest:] */

void FUN_108bcc204(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b15e8;
  func_0x00010c261d40(PTR_PTR_1126b15e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126daff8;
  _objc_alloc(PTR_PTR_1126daff8);
  func_0x00010c008d00();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108bcc278; end: 108bcc39b; -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersSuggestDataRequest:withSuccess:andError:] */

void FUN_108bcc278(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b15e8;
  _objc_retain(param_5);
  func_0x00010c261d40(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126daff8;
  _objc_alloc(PTR_PTR_1126daff8);
  func_0x00010c008d00();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90),param_2,puVar2);
  func_0x00010bf75c20(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  if ((int)param_4 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    _objc_opt_class(param_1);
    func_0x00010bf63740();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b15e8;
    func_0x00010c261d40(PTR_PTR_1126b15e8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63720(uVar4,param_2,param_1,puVar3);
    _objc_release(puVar3);
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bcc39c; end: 108bcc5af; -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersContactDataRequest:withSuccess:andError:contactBookSize:completionQueue:completionHandler:] */

void FUN_108bcc39c(long param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  byte bStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b15e8;
  func_0x00010bf4a360(PTR_PTR_1126b15e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126daff8;
  _objc_alloc(PTR_PTR_1126daff8);
  func_0x00010c008d00();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90));
  if ((param_7 != 0) && (param_8 != 0)) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108bcc5b0;
    puStack_80 = &UNK_1108523f8;
    _objc_retain(param_8);
    lStack_70 = param_8;
    bStack_68 = param_4;
    _objc_retain(param_5);
    uStack_78 = param_5;
    func_0x000107c27d8c(param_7,&puStack_98);
    _objc_release(uStack_78);
    _objc_release(lStack_70);
  }
  puVar4 = PTR_PTR_1126db008;
  if ((param_4 & 1) == 0) {
    func_0x00010bfa01c0(PTR_PTR_1126db008);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75bc0(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    func_0x00010c2618e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75bc0(*(undefined8 *)(param_1 + 0x10));
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    _objc_opt_class(param_1);
    func_0x00010bf63740();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b15e8;
    func_0x00010bf4a360(PTR_PTR_1126b15e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63720(uVar5);
    _objc_release(puVar3);
    _objc_release(param_1);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcc5b0; end: 108bcc5c3;  */

void FUN_108bcc5b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bcc5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bcc5c4; end: 108bcc6b3; -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersFriendInfoRequestWithSuccess:snapchatter:snapstreakCount:expirationServerTimestamp:] */

void FUN_108bcc5c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0x10);
  _objc_opt_respondsToSelector(uVar1,PTR_s_didEndSnapchattersFriendInfoRequ_1125bb0a8);
  puVar4 = PTR_PTR_1126db010;
  if ((uVar1 & 1) != 0) {
    uVar2 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c294420(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c243580(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bf75c00(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar4);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108bcc6b4; end: 108bcc733; -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersFriendInfoRequestWithSuccess:snapchatterToStreakMetadata:] */

void FUN_108bcc6b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x10);
  _objc_opt_respondsToSelector(uVar1,PTR_s_didEndSnapchattersFriendInfoRequ_1125bb0a8);
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_PTR_1126db010;
    func_0x00010c2435a0(PTR_PTR_1126db010);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75c00(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108bcc734; end: 108bcc783; -[SCSnapchattersDataCoordinator _logFetchContactsLatencyMs:includingContactUpload:] */

void FUN_108bcc734(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bcc784; end: 108bcc78b; -[SCSnapchattersDataCoordinator fetchServerContactsWithCallbackQueue:completionBlock:] */

void FUN_108bcc784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaa190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_fetchServerContactsWithCallbackQ_1125c8208);
  return;
}



/* Entry: 108bcc78c; end: 108bcc90b; -[SCSnapchattersDataCoordinator .cxx_destruct] */

void FUN_108bcc78c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
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



/* Entry: 108bcc90c; end: 108bcc923;  */

void FUN_108bcc90c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be701f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__parseFriendsResponseFromBootstr_112579a18,
             param_2);
  return;
}



/* Entry: 108bcc924; end: 108bcca07; -[SCSnapchattersDataInitializer _parseFriendsResponseFromBootstrapData:] */

void FUN_108bcc924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000108bee6ac(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2980();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb6f8;
  func_0x00010bfa6d80(PTR_PTR_1126bb6f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2920(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bcca08; end: 108bccb9b; -[SCSnapchattersFetchRequestCoordinator getAtlasBlockedUsersWithCursor:success:onError:] */

void FUN_108bcca08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf0c3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bfc30e0(lVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bccb9c; end: 108bccc17;  */

void FUN_108bccb9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be03de0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bccc18; end: 108bccc2b;  */

void FUN_108bccc18(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bccc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108bccc2c; end: 108bccdc7; -[SCSnapchattersFetchRequestCoordinator _dispatchBlockedUsersReconcile:] */

void FUN_108bccc2c(long param_1,uint param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010bf1f440();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (iVar2 != 0) {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lVar7 * 8);
        func_0x00010c2923e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(uVar5);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123400();
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if ((param_2 & 1) != 0) {
    return;
  }
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be72ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bccdc8; end: 108bccdfb;  */

void FUN_108bccdc8(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bccdfc; end: 108bccf97; -[SCSnapchattersFetchRequestCoordinator _performZombieHealingIfNeeded] */

void FUN_108bccdfc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  lVar4 = param_1;
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfacbe0();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 8);
    func_0x000108c18514();
    lVar5 = *(long *)(param_1 + 8);
    func_0x000108c187e8();
    if ((lVar4 < 1) && (lVar5 < 1)) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf561e0();
      _objc_release(puVar2);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar6 = *(undefined8 *)(param_1 + 8);
      _objc_copyWeak(auStack_60,auStack_48);
      lStack_58 = lVar4;
      lStack_50 = lVar5;
      _objc_retain(lVar1);
      func_0x00010c0f8500(uVar6);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108bccf98; end: 108bcd00f;  */

void FUN_108bccf98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = 0;
  func_0x000100c40dcc(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c10b50(param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = 0;
  func_0x000108c108f4(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c10b50(param_2,uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bcd010; end: 108bcd0cf;  */

void FUN_108bcd010(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3640();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a88c0();
      _objc_release(uVar1);
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf561e0();
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108bcd0d0; end: 108bcd227; -[SCSnapchattersFetchRequestCoordinator _startFetchForGroup:] */

void FUN_108bcd0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  _objc_initWeak(auStack_50,param_3);
  uVar1 = param_3;
  func_0x00010bfa9ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4c00(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_copyWeak(auStack_58,auStack_50);
  func_0x00010be11640(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcd228; end: 108bcd2a3;  */

void FUN_108bcd228(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (param_1 != 0)) {
    func_0x00010bde2da0(lVar1);
  }
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bcd2a4; end: 108bcd3af; -[SCSnapchattersFetchRequestCoordinator _completeInFlightGroup:success:error:] */

void FUN_108bcd2a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010bf89760(param_3,param_2,param_4,param_5);
  lVar4 = *(long *)(param_1 + 0x88);
  _objc_release(param_3);
  if (lVar4 == param_3) {
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    _objc_retain(uVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 != 0) {
      func_0x00010bfa9ce0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bf0a6e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c27c360();
      if (lVar4 - 1U < 6) {
        ppuVar3 = (undefined **)(&PTR_PTR_110ab6310)[lVar4 - 1U];
      }
      else {
        ppuVar3 = &PTR____CFConstantStringClassReference_110eec2d8;
      }
      func_0x00010be53500(param_1,param_2,&PTR____CFConstantStringClassReference_110eec3d8,ppuVar3);
      func_0x00010bebfe80(param_1,param_2,*(undefined8 *)(param_1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 108bcd3b0; end: 108bcd41f; -[SCSnapchattersFetchRequestCoordinator _logFetchDedupOutcome:trigger:] */

void FUN_108bcd3b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6580();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bcd420; end: 108bcd54f;  */

void FUN_108bcd420(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0abb00();
    _objc_release(uVar2);
    _CACurrentMediaTime();
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010bec9ac0(lVar1);
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcd550; end: 108bcd62f;  */

void FUN_108bcd550(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a88a0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3f60();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    lVar1 = param_2;
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar1 = *(long *)(param_1 + 0x28);
    }
    (**(code **)(lVar3 + 0x10))(lVar3,param_2 == 0 & *(byte *)(param_1 + 0x40),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bcd630; end: 108bcd833;  */

void FUN_108bcd630(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a88a0();
    _objc_release(uVar2);
    _CACurrentMediaTime();
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010bfa6d60(lVar1);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108bcd834; end: 108bcd993; -[SCSnapchattersFetchRequestCoordinator handleSoJuFriendsResponse:completionQueue:completionHandler:] */

void FUN_108bcd834(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcd994; end: 108bcd9e3;  */

void FUN_108bcd994(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81120(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bcd9e4; end: 108bcdb43; -[SCSnapchattersFetchRequestCoordinator handleSoJuFriendsResponseDictionary:completionQueue:completionHandler:] */

void FUN_108bcd9e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcdb44; end: 108bcdbcf;  */

void FUN_108bcdb44(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db020;
    _objc_alloc(PTR_PTR_1126db020);
    func_0x00010c0206e0();
  }
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81120(0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108bcdbd0; end: 108bcdd2f; -[SCSnapchattersFetchRequestCoordinator handleSyncFriendData:completionQueue:completionHandler:] */

void FUN_108bcdbd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcdd30; end: 108bcddcb;  */

void FUN_108bcdd30(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db028;
  _objc_alloc(PTR_PTR_1126db028);
  func_0x00010c008360();
  _objc_retain(0);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81080(0);
  _objc_release(0);
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 108bcddcc; end: 108bcddeb;  */

void FUN_108bcddcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bcddd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108bcddec; end: 108bcdee7;  */

void FUN_108bcddec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c247520();
  func_0x00010c27c360();
  func_0x00010be81080(*(undefined8 *)(param_1 + 0x50),lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bcdee8; end: 108bce293; -[SCSnapchattersFetchRequestCoordinator _processFetchAtlasFriendsResponse:userInfoRepository:error:completionQueue:completionHandler:ignoreBlizzardLogging:triggerSource:syncType:startTime:] */

void FUN_108bcdee8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7,long param_8,byte param_9,undefined8 param_10,
                  undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [8];
  double dStack_110;
  long lStack_108;
  byte bStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _CACurrentMediaTime();
  if ((param_4 == 0) || (param_6 != 0)) {
    if ((param_9 & 1) == 0) {
      lVar2 = param_6;
      func_0x00010c09e4e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be53560(param_2);
      _objc_release(lVar2);
    }
    if ((param_7 != 0) && (param_8 != 0)) {
      puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_190 = 0xc2000000;
      pcStack_188 = FUN_108bce458;
      puStack_180 = &UNK_11084aaa8;
      _objc_retain(param_8);
      lStack_170 = param_8;
      _objc_retain(param_6);
      lStack_178 = param_6;
      func_0x000107c27d8c(param_7,&puStack_198);
      _objc_release(lStack_178);
      _objc_release(lStack_170);
    }
  }
  else {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    puStack_90 = &UNK_100c33ecc;
    puStack_88 = &UNK_100c56164;
    uStack_80 = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(uVar5);
    _objc_initWeak(auStack_b0,param_2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar3 = *(undefined8 *)(param_2 + 8);
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_108bce294;
    puStack_e0 = &UNK_110ab6290;
    puStack_b8 = &uStack_a8;
    _objc_retain(param_4);
    lStack_d8 = param_4;
    _objc_retain(uVar5);
    uStack_d0 = uVar5;
    lStack_c8 = param_2;
    _objc_retain(uVar4);
    puStack_168 = puVar1;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_108bce2e4;
    puStack_150 = &UNK_110ab62c0;
    dStack_110 = param_1;
    bStack_100 = param_9;
    uStack_c0 = uVar4;
    _objc_copyWeak(auStack_118,auStack_b0);
    _objc_retain(param_10);
    uStack_148 = param_10;
    _objc_retain(param_11);
    uStack_140 = param_11;
    _objc_retain(param_4);
    lStack_138 = param_4;
    lStack_108 = (long)((dVar6 - param_1) * 1000.0);
    _objc_retain(param_8);
    puStack_120 = &uStack_a8;
    lStack_128 = param_8;
    _objc_retain(uVar4);
    uStack_130 = uVar4;
    func_0x00010c0f8500(uVar3);
    _objc_release(uStack_130);
    _objc_release(lStack_128);
    _objc_release(lStack_138);
    _objc_release(uStack_140);
    _objc_release(uStack_148);
    _objc_destroyWeak(auStack_118);
    _objc_release(uStack_c0);
    _objc_release(uStack_d0);
    _objc_release(lStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uVar5);
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bce294; end: 108bce2e3;  */

void FUN_108bce294(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000108c0c2f8(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48),
                      *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bce2e4; end: 108bce457;  */

void FUN_108bce2e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    _CACurrentMediaTime();
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0eea80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb9bc0();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf197a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf19640();
    func_0x00010be53560(lVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2,0);
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b12c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108bce458; end: 108bce47f;  */

void FUN_108bce458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bce468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bce480; end: 108bce48b; -[SCSnapchattersFetchRequestCoordinator atlasFriendsDataProvider] */

void FUN_108bce480(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x98,1);
  return;
}



/* Entry: 108bce48c; end: 108bce56f; -[SCSnapchattersFetchRequestCoordinator .cxx_destruct] */

void FUN_108bce48c(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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



/* Entry: 108bce570; end: 108bce63f;  */

void FUN_108bce570(long param_1,undefined8 param_2,undefined8 param_3)

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
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_108bce640;
      puStack_50 = &UNK_1108523f8;
      _objc_retain(lVar2);
      uStack_38 = (undefined1)param_2;
      lStack_40 = lVar2;
      _objc_retain(param_3);
      uStack_48 = param_3;
      func_0x000107c27d8c(lVar1,&puStack_68);
      _objc_release(uStack_48);
      _objc_release(lStack_40);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108bce640; end: 108bce653;  */

void FUN_108bce640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bce650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bce654; end: 108bce7d3; -[SCSnapchattersFriendScoreCoordinator initWithDocObjectContext:grpcService:currentDateProvider:grapheneLogger:] */

undefined1 *
FUN_108bce654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fdbd8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0c28;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bce7d4; end: 108bce903; -[SCSnapchattersFriendScoreCoordinator friendScoreWithUserId:completionQueue:completionHandler:] */

void FUN_108bce7d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108bce904;
  puStack_70 = &UNK_110857fd0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x000107c2a728(uVar1,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bce904; end: 108bce93b;  */

void FUN_108bce904(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be19380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bce93c; end: 108bcea6b; -[SCSnapchattersFriendScoreCoordinator friendsScoreWithUserIds:completionQueue:completionHandler:] */

void FUN_108bce93c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108bcea6c;
  puStack_70 = &UNK_110857fd0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x000107c2a728(uVar1,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcea6c; end: 108bceaab;  */

void FUN_108bcea6c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be19a00(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bceaac; end: 108bceddf; -[SCSnapchattersFriendScoreCoordinator _friendScoreWithUserId:completionQueue:completionHandler:] */

void FUN_108bceaac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000100bed2fc(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100bf119c();
  if (((uVar2 & 1) == 0) && (uVar2 = uVar1, func_0x00010901c5ac(), (uVar2 & 1) == 0)) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108bcede0;
    puStack_88 = &UNK_110849530;
    _objc_retain(param_5);
    uStack_80 = param_5;
    func_0x000107c27d8c(param_4,&puStack_a0);
    uVar4 = uStack_80;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x000108c11ba4(uVar3,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x000108c12088(uVar4,*(undefined8 *)(param_1 + 0x10));
    if ((int)uVar3 == 0) {
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_108bceed4;
      puStack_108 = &UNK_11084aaa8;
      _objc_retain(param_5);
      uStack_f8 = param_5;
      _objc_retain(uVar4);
      uStack_100 = uVar4;
      func_0x000107c27d8c(param_4,&puStack_120);
      _objc_release(uStack_100);
      _objc_release(uStack_f8);
    }
    else {
      _objc_initWeak(auStack_a8,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(uVar3);
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_108bcedf4;
      puStack_d8 = &UNK_110ab6340;
      _objc_copyWeak(auStack_b0,auStack_a8);
      _objc_retain(uVar1);
      uStack_d0 = uVar1;
      _objc_retain(uVar3);
      uStack_c8 = uVar3;
      _objc_retain(param_4);
      uStack_c0 = param_4;
      _objc_retain(param_5);
      ppuVar5 = &puStack_f0;
      uStack_b8 = param_5;
      _objc_retainBlock(ppuVar5);
      uVar2 = uVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = uVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be114a0(param_1);
      _objc_release(puVar6);
      _objc_release(uVar2);
      _objc_release(ppuVar5);
      _objc_release(uStack_b8);
      _objc_release(uStack_c0);
      _objc_release(uStack_c8);
      _objc_release(uStack_d0);
      _objc_destroyWeak(auStack_b0);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_a8);
    }
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000108bcedf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0,0);
  return;
}



/* Entry: 108bcede0; end: 108bcedf3;  */

void FUN_108bcede0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bcedf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 108bcedf4; end: 108bceed3;  */

void FUN_108bcedf4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_3);
    func_0x00010c0b2c80(uVar1);
    _objc_release(uVar1);
    func_0x00010be81100(param_1);
    if (param_3 != 0) {
      func_0x000108c7a000(*(undefined8 *)(param_1 + 0x30),PTR_PTR_1133bb3c0,1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bceed4; end: 108bceee7;  */

void FUN_108bceed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bceee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108bceee8; end: 108bcf4bb; -[SCSnapchattersFriendScoreCoordinator _friendsScoresWithUserIds:completionQueue:completionHandler:] */

void FUN_108bceee8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined **param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_108bcf4bc;
  puStack_1b0 = &UNK_1108465d0;
  _objc_retain(param_3);
  lStack_1a8 = param_3;
  _objc_retain(puVar3);
  puStack_1a0 = puVar3;
  _objc_retain(param_5);
  ppuStack_190 = param_5;
  _objc_retain(puVar1);
  ppuVar4 = &puStack_1c8;
  puStack_198 = puVar1;
  _objc_retainBlock();
  lVar5 = *(long *)(param_1 + 8);
  func_0x000108c1b05c(lVar5,param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  puStack_200 = (undefined8 *)0x0;
  _objc_retain();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  ppuVar15 = param_5;
  if (lVar6 != 0) {
    ppuVar15 = (undefined **)*puStack_200;
    do {
      lVar18 = 0;
      do {
        if ((undefined **)*puStack_200 != ppuVar15) {
          _objc_enumerationMutation(lVar5);
        }
        puVar13 = *(undefined **)(lStack_208 + lVar18 * 8);
        puVar7 = puVar13;
        func_0x000100bf119c();
        if ((((ulong)puVar7 & 1) == 0) &&
           (puVar8 = puVar13, func_0x00010901c5ac(), puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0,
           ((ulong)puVar8 & 1) == 0)) {
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar13);
        }
        else {
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          puVar7 = puVar13;
        }
        _objc_release(puVar7);
        lVar18 = lVar18 + 1;
      } while (lVar6 != lVar18);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar5);
  lVar18 = *(long *)(param_1 + 8);
  puVar7 = puVar2;
  func_0x00010bf002e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c11dd4(lVar18,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_238 = 0;
  puStack_240 = (undefined8 *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  _objc_retain(lVar18);
  lVar6 = lVar18;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    ppuVar15 = (undefined **)*puStack_240;
    do {
      lVar19 = 0;
      do {
        if ((undefined **)*puStack_240 != ppuVar15) {
          _objc_enumerationMutation(lVar18);
        }
        uVar14 = *(ulong *)(lStack_248 + lVar19 * 8);
        uVar9 = uVar14;
        func_0x000108c12088(uVar14,*(undefined8 *)(param_1 + 0x10));
        if ((uVar9 & 1) == 0) {
          uVar9 = uVar14;
          func_0x00010c2923e0(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(puVar2);
          _objc_release(uVar9);
          func_0x00010c2923e0(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar14);
        }
        lVar19 = lVar19 + 1;
      } while (lVar6 != lVar19);
      lVar6 = lVar18;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar18);
  puVar7 = puVar2;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c27d8c(param_4,ppuVar4);
  }
  else {
    _objc_initWeak(auStack_258,param_1);
    puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2a0 = 0xc2000000;
    pcStack_298 = FUN_108bcf650;
    puStack_290 = &UNK_110ab63a0;
    ppuVar15 = &puStack_2a8;
    _objc_copyWeak(auStack_260,auStack_258);
    _objc_retain(puVar1);
    puStack_288 = puVar1;
    _objc_retain(puVar2);
    puStack_280 = puVar2;
    _objc_retain(puVar3);
    puStack_278 = puVar3;
    _objc_retain(param_4);
    uStack_270 = param_4;
    _objc_retain(ppuVar4);
    ppuVar10 = &puStack_2a8;
    ppuStack_268 = ppuVar4;
    _objc_retainBlock();
    puVar7 = puVar2;
    func_0x00010bf002e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be114a0(param_1);
    _objc_release(uVar11);
    _objc_release(puVar7);
    _objc_release(ppuVar10);
    _objc_release(ppuStack_268);
    _objc_release(uStack_270);
    _objc_release(puStack_278);
    _objc_release(puStack_280);
    _objc_release(puStack_288);
    _objc_destroyWeak(auStack_260);
    _objc_destroyWeak(auStack_258);
  }
  _objc_release(lVar18);
  _objc_release(lVar5);
  _objc_release(ppuVar4);
  _objc_release(puStack_198);
  _objc_release(ppuStack_190);
  _objc_release(puStack_1a0);
  _objc_release(lStack_1a8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar15 + 9);
  _objc_destroyWeak(auStack_258);
  __Unwind_Resume();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf529e0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = *(long *)(param_3 + 0x20);
  _objc_retain(lVar19);
  lVar6 = lVar19;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar19);
      }
      lVar12 = *(long *)(param_3 + 0x28);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 != 0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(lVar12);
      lVar20 = lVar20 + 1;
    } while (lVar6 != lVar20);
    lVar6 = lVar19;
    func_0x00010bf52a60();
  }
  _objc_release(lVar19);
  lVar19 = *(long *)(param_3 + 0x38);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  lVar5 = *(long *)(param_3 + 0x30);
  func_0x00010bf51e00();
  puVar1 = puVar3;
  lVar6 = lVar5;
  (**(code **)(lVar19 + 0x10))(lVar19);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  lVar5 = lVar6;
  _objc_retain(puVar1);
  _objc_retain(lVar6);
  puVar3 = puVar2 + 0x48;
  _objc_loadWeakRetained();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010bf3ec40(lVar6);
    puVar13 = puVar3;
    func_0x00010be5a560();
    if (lVar6 != 0) {
      func_0x00010befa120(*(undefined8 *)(puVar2 + 0x20));
      puVar13 = *(undefined **)(puVar3 + 0x30);
      func_0x000108c7a000(puVar13,PTR_PTR_1133bb3c0,1);
    }
    _dispatch_group_create();
    _dispatch_group_enter();
    lVar20 = *(long *)(puVar2 + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar20;
    func_0x00010bf52a60();
    lVar19 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar19) {
          _objc_enumerationMutation(lVar20);
        }
        _dispatch_group_enter(puVar13);
        uVar11 = *(undefined8 *)(puVar3 + 0x18);
        func_0x00010c11de00(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(puVar2 + 0x20);
        _objc_retain(uVar16);
        uVar17 = *(undefined8 *)(puVar2 + 0x30);
        _objc_retain(uVar17);
        _objc_retain(puVar13);
        func_0x00010be81100(puVar3);
        _objc_release(uVar11);
        _objc_release(puVar13);
        _objc_release(uVar17);
        _objc_release(uVar16);
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar20;
      func_0x00010bf52a60();
    }
    _objc_release(lVar20);
    _dispatch_group_leave(puVar13);
    puVar7 = *(undefined **)(puVar2 + 0x38);
    lVar5 = *(long *)(puVar2 + 0x40);
    func_0x000107c27d98(puVar13);
    _objc_release(puVar13);
  }
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(lVar5);
  if (lVar5 != 0) {
    func_0x00010befa120(*(undefined8 *)(puVar1 + 0x20));
  }
  if (puVar7 != (undefined *)0x0) {
    uVar11 = *(undefined8 *)(puVar1 + 0x28);
    uVar16 = *(undefined8 *)(puVar1 + 0x30);
    func_0x00010c2923e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar11);
    _objc_release(uVar16);
  }
  _dispatch_group_leave(*(undefined8 *)(puVar1 + 0x38));
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 108bcf4bc; end: 108bcf64f;  */

void FUN_108bcf4bc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar11);
  lVar2 = lVar11;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar11);
      }
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        func_0x00010befa120(puVar1);
      }
      _objc_release(lVar3);
      lVar14 = lVar14 + 1;
    } while (lVar2 != lVar14);
    lVar2 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  lVar11 = *(long *)(param_1 + 0x38);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010bf51e00();
  puVar8 = puVar4;
  lVar2 = lVar5;
  (**(code **)(lVar11 + 0x10))(lVar11);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar8;
  lVar5 = lVar2;
  _objc_retain(puVar8);
  _objc_retain(lVar2);
  puVar4 = puVar1 + 0x48;
  _objc_loadWeakRetained();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010bf3ec40(lVar2);
    puVar6 = puVar4;
    func_0x00010be5a560();
    if (lVar2 != 0) {
      func_0x00010befa120(*(undefined8 *)(puVar1 + 0x20));
      puVar6 = *(undefined **)(puVar4 + 0x30);
      func_0x000108c7a000(puVar6,PTR_PTR_1133bb3c0,1);
    }
    _dispatch_group_create();
    _dispatch_group_enter();
    lVar14 = *(long *)(puVar1 + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar14;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar3 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar14);
        }
        _dispatch_group_enter(puVar6);
        uVar7 = *(undefined8 *)(puVar4 + 0x18);
        func_0x00010c11de00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(puVar1 + 0x20);
        _objc_retain(uVar12);
        uVar13 = *(undefined8 *)(puVar1 + 0x30);
        _objc_retain(uVar13);
        _objc_retain(puVar6);
        func_0x00010be81100(puVar4);
        _objc_release(uVar7);
        _objc_release(puVar6);
        _objc_release(uVar13);
        _objc_release(uVar12);
        lVar3 = lVar3 + 1;
      } while (lVar5 != lVar3);
      lVar5 = lVar14;
      func_0x00010bf52a60();
    }
    _objc_release(lVar14);
    _dispatch_group_leave(puVar6);
    puVar9 = *(undefined **)(puVar1 + 0x38);
    lVar5 = *(long *)(puVar1 + 0x40);
    func_0x000107c27d98(puVar6);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(lVar5);
  if (lVar5 != 0) {
    func_0x00010befa120(*(undefined8 *)(puVar8 + 0x20));
  }
  if (puVar9 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(puVar8 + 0x28);
    uVar12 = *(undefined8 *)(puVar8 + 0x30);
    func_0x00010c2923e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(uVar12);
  }
  _dispatch_group_leave(*(undefined8 *)(puVar8 + 0x38));
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 108bcf650; end: 108bcf8cf;  */

void FUN_108bcf650(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  lVar6 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf3ec40(param_3);
    lVar2 = lVar1;
    func_0x00010be5a560();
    if (param_3 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      lVar2 = *(long *)(lVar1 + 0x30);
      func_0x000108c7a000(lVar2,PTR_PTR_1133bb3c0,1);
    }
    _dispatch_group_create();
    _dispatch_group_enter();
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        _dispatch_group_enter(lVar2);
        uVar5 = *(undefined8 *)(lVar1 + 0x18);
        func_0x00010c11de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar9);
        uVar10 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar10);
        _objc_retain(lVar2);
        func_0x00010be81100(lVar1);
        _objc_release(uVar5);
        _objc_release(lVar2);
        _objc_release(uVar10);
        _objc_release(uVar9);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _dispatch_group_leave(lVar2);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar6 = *(long *)(param_1 + 0x40);
    func_0x000107c27d98(lVar2);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  _objc_retain(lVar6);
  if (lVar6 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
  }
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c2923e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(uVar9);
  }
  _dispatch_group_leave(*(undefined8 *)(param_2 + 0x38));
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 108bcf8d0; end: 108bcf967;  */

void FUN_108bcf8d0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1);
    _objc_release(uVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bcf968; end: 108bcfc1b; -[SCSnapchattersFriendScoreCoordinator _processFetchFriendScoreResponse:snapchatter:currentDateProvider:error:completionQueue:completionHandler:] */

void FUN_108bcf968(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_6 == 0) {
    lVar2 = param_4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar5 = param_3;
      func_0x00010c150d80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_4;
      func_0x00010c2923e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bfc6660();
      _objc_release(lVar3);
      _objc_release(uVar5);
      _objc_release(lVar2);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      if ((int)uVar4 != 0) {
        uStack_a8 = 0;
        uStack_98 = 0x3032000000;
        pcStack_90 = FUN_108bcfc1c;
        uStack_88 = 0x108bcfc2c;
        uStack_80 = 0;
        uVar5 = *(undefined8 *)(param_1 + 8);
        puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e0 = 0xc2000000;
        pcStack_d8 = FUN_108bcfc34;
        puStack_d0 = &UNK_110a18a10;
        puStack_b0 = &uStack_a8;
        puStack_a0 = &uStack_a8;
        _objc_retain(param_3);
        uStack_c8 = param_3;
        _objc_retain(param_4);
        lStack_c0 = param_4;
        _objc_retain(param_5);
        puStack_120 = puVar1;
        uStack_118 = 0xc2000000;
        pcStack_110 = FUN_108bcfc80;
        puStack_108 = &UNK_11089ab90;
        uStack_b8 = param_5;
        _objc_retain(param_8);
        uStack_100 = 0;
        uStack_f8 = param_8;
        puStack_f0 = &uStack_a8;
        func_0x00010c0f8500(uVar5);
        _objc_release(uStack_100);
        _objc_release(uStack_f8);
        _objc_release(uStack_b8);
        _objc_release(lStack_c0);
        _objc_release(uStack_c8);
        __Block_object_dispose(&uStack_a8,8);
        uVar5 = uStack_80;
        goto LAB_108bcfa38;
      }
    }
  }
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x108bcfca4;
  puStack_138 = &UNK_11084aaa8;
  _objc_retain(param_8);
  uStack_128 = param_8;
  _objc_retain(param_6);
  lStack_130 = param_6;
  func_0x000107c27d8c(param_7,&puStack_150);
  _objc_release(lStack_130);
  uVar5 = uStack_128;
LAB_108bcfa38:
  _objc_release(uVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bcfc1c; end: 108bcfc33;  */

void FUN_108bcfc1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108bcfc34; end: 108bcfc7f;  */

void FUN_108bcfc34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000108c090a0(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bcfc80; end: 108bcfcb7;  */

void FUN_108bcfc80(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bcfc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
               *(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 108bcfcb8; end: 108bcfe93; -[SCSnapchattersFriendScoreCoordinator _fetchFriendScoreFromAtlasGwWithUserIds:callbackQueue:completionBlock:] */

void FUN_108bcfcb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126db030;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x000107c31908(param_3,&PTR___NSConcreteGlobalBlock_110ab63d0);
  _objc_release(param_3);
  uVar2 = uVar4;
  func_0x00010c0d3c80(uVar4);
  func_0x00010c1a0420(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  puVar5 = PTR_PTR_1126db048;
  _objc_retain(param_5);
  _objc_opt_class(puVar5);
  func_0x00010c0199c0(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2c60();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar1);
  return;
}



/* Entry: 108bcfe94; end: 108bcff3f;  */

void FUN_108bcfe94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c057ea0();
  _objc_release(param_2);
  func_0x00010bfcb980(puVar1);
  _objc_release(puVar1);
  puVar6 = auStack_38;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  if (puVar6 == (undefined1 *)0x0) {
    puVar2 = PTR_PTR_1126db038;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126db040;
    _objc_opt_new(PTR_PTR_1126db040);
    func_0x00010c1f6dc0(puVar2);
    _objc_release(puVar3);
    uVar4 = uVar5;
    func_0x00010c150da0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010bf97e80(uVar4);
    _objc_release(uVar4);
    (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))(*(long *)(puVar1 + 0x20),puVar2,0);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  else {
    (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))(*(long *)(puVar1 + 0x20),0,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108bcff40; end: 108bd005b;  */

void FUN_108bcff40(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126db038;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126db040;
    _objc_opt_new(PTR_PTR_1126db040);
    func_0x00010c1f6dc0(puVar1);
    _objc_release(puVar2);
    uVar3 = param_2;
    func_0x00010c150da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010bf97e80(uVar3);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1,0);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bd005c; end: 108bd014f;  */

void FUN_108bd005c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c150d80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150c20(param_2);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_retainAutorelease(uVar2);
  func_0x00010bf25f00();
  func_0x00010c057e80(puVar1);
  puVar3 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1adce0(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108bd0150; end: 108bd01b7; -[SCSnapchattersFriendScoreCoordinator _logUserScoreResponseWithEndpoint:success:statusCode:] */

void FUN_108bd0150(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bd01b8; end: 108bd0217; -[SCSnapchattersFriendScoreCoordinator .cxx_destruct] */

void FUN_108bd01b8(long param_1)

{
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



/* Entry: 108bd0218; end: 108bd03fb; -[SCSnapchattersHiddenSuggestionCoordinator initWithDocObjectContext:preferences:suggestService:currentDateProvider:hiddenSuggestionCache:userIdToSnapchatterFetcher:] */

undefined1 *
FUN_108bd0218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fdbe0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfef240();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bd03fc; end: 108bd0503; -[SCSnapchattersHiddenSuggestionCoordinator fetchHiddenSuggestionSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108bd03fc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd0504; end: 108bd0537;  */

void FUN_108bd0504(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be11940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd0538; end: 108bd0667; -[SCSnapchattersHiddenSuggestionCoordinator insertHiddenSuggestedSnapchatter:completionQueue:completionHandler:] */

void FUN_108bd0538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 108bd0668; end: 108bd069f;  */

void FUN_108bd0668(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3c440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd06a0; end: 108bd07cf; -[SCSnapchattersHiddenSuggestionCoordinator removeHiddenSuggestedSnapchatter:completionQueue:completionHandler:] */

void FUN_108bd06a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 108bd07d0; end: 108bd0807;  */

void FUN_108bd07d0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8c400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd0808; end: 108bd0937; -[SCSnapchattersHiddenSuggestionCoordinator cacheHideRequestWithUserId:completionQueue:completionHandler:] */

void FUN_108bd0808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 108bd0938; end: 108bd096f;  */

void FUN_108bd0938(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd7920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd0970; end: 108bd0a6f; -[SCSnapchattersHiddenSuggestionCoordinator fetchCachedHiddenSuggestionsWithCompletionQueue:completionHandler:] */

void FUN_108bd0970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 108bd0a70; end: 108bd0aa3;  */

void FUN_108bd0a70(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be103a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd0aa4; end: 108bd0aeb; -[SCSnapchattersHiddenSuggestionCoordinator cachedHiddenSuggestionsObservable] */

void FUN_108bd0aa4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe1480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108bd0aec; end: 108bd0beb; -[SCSnapchattersHiddenSuggestionCoordinator fetchLastHiddenSuggestionPendingFeedbackWithCompletionQueue:completionHandler:] */

void FUN_108bd0aec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 108bd0bec; end: 108bd0c1f;  */

void FUN_108bd0bec(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd0c20; end: 108bd0d4f; -[SCSnapchattersHiddenSuggestionCoordinator undoCacheHideRequestWithUserId:completionQueue:completionHandler:] */

void FUN_108bd0c20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 108bd0d50; end: 108bd0d87;  */

void FUN_108bd0d50(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed0fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd0d88; end: 108bd0ebf; -[SCSnapchattersHiddenSuggestionCoordinator updateFeedbackIndex:forUser:completionQueue:completionHandler:] */

void FUN_108bd0d88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bd0ec0; end: 108bd0efb;  */

void FUN_108bd0ec0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed8060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd0efc; end: 108bd102f; -[SCSnapchattersHiddenSuggestionCoordinator hideCachedHiddenSuggestionsWithPlacement:completionQueue:completionHandler:] */

void FUN_108bd0efc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  func_0x00010bfa56c0(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bd1030; end: 108bd110f;  */

void FUN_108bd1030(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be35580();
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108bd1110;
    puStack_48 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_3);
    lStack_40 = param_3;
    func_0x000107c27d8c(uVar1,&puStack_60);
    _objc_release(lStack_40);
    param_1 = lStack_38;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108bd1110; end: 108bd112b;  */

void FUN_108bd1110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd1128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}


