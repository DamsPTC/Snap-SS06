/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067d3b78; end: 1067d3c13; -[SCSecurityDuplexLoggerImpl logSubmitEvent:useCase:] */

void FUN_1067d3b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce240;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c212840();
  func_0x00010c21d640(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  FUN_1067d43a4(*(undefined8 *)(param_1 + 0x10),param_3,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d3c14; end: 1067d3caf; -[SCSecurityDuplexLoggerImpl logEventReceived:useCase:] */

void FUN_1067d3c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce248;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c212840();
  func_0x00010c21d640(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  FUN_1067d4518(*(undefined8 *)(param_1 + 0x10),param_3,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d3cb0; end: 1067d3cdf; -[SCSecurityDuplexLoggerImpl .cxx_destruct] */

void FUN_1067d3cb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d3ce0; end: 1067d3ddb; -[SCSecurityDuplexSyncTriggerHandler initWithDuplexSyncTriggerService:userSessionValidator:tivRequestHandler:userSession:] */

undefined1 *
FUN_1067d3ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f33c0;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067d3ddc; end: 1067d3e1b; -[SCSecurityDuplexSyncTriggerHandler beginSubscribing] */

void FUN_1067d3ddc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067d3e1c; end: 1067d3e5b; -[SCSecurityDuplexSyncTriggerHandler endSubscribing] */

void FUN_1067d3e1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067d3e5c; end: 1067d3fb3; -[SCSecurityDuplexSyncTriggerHandler onReceivePayloadType:message:] */

void FUN_1067d3e5c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_4);
  if ((int)param_3 == 4) {
    puVar1 = PTR_PTR_1126ce250;
    _objc_opt_class(PTR_PTR_1126ce250);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    uVar3 = param_4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    if (uVar3 != 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      uVar3 = param_4;
      func_0x00010c0ebbe0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf52a60();
      if (uVar2 != 0) {
        lVar7 = *plStack_110;
        do {
          uVar8 = 0;
          do {
            if (*plStack_110 != lVar7) {
              _objc_enumerationMutation(uVar3);
            }
            func_0x00010be72280(param_1);
            uVar8 = uVar8 + 1;
          } while (uVar2 != uVar8);
          uVar2 = uVar3;
          puVar6 = &uStack_120;
          func_0x00010bf52a60();
        } while (uVar2 != 0);
      }
      _objc_release(uVar3);
      _objc_release(param_4);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010c0eba80();
  if ((int)puVar4 == 3) {
    puVar4 = puVar5;
    func_0x00010c15ce80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea09a0(param_4);
    _objc_release(puVar4);
  }
  else if ((int)puVar4 == 1) {
    func_0x00010bee7c20(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1067d3fb4; end: 1067d4033; -[SCSecurityDuplexSyncTriggerHandler _performOperationAction:] */

void FUN_1067d3fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0eba80();
  if ((int)uVar1 == 3) {
    uVar1 = param_3;
    func_0x00010c15ce80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea09a0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  else if ((int)uVar1 == 1) {
    func_0x00010bee7c20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067d4034; end: 1067d407b; -[SCSecurityDuplexSyncTriggerHandler _validateSession] */

void FUN_1067d4034(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067d407c; end: 1067d407f;  */

void FUN_1067d407c(void)

{
  return;
}



/* Entry: 1067d4080; end: 1067d4173; -[SCSecurityDuplexSyncTriggerHandler _sendTivRequest:] */

void FUN_1067d4080(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bfd8320();
  if ((int)uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010c087dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bfdd6c0();
    _objc_release(uVar3);
    if ((int)uVar1 != 0) {
      puVar2 = PTR_PTR_1126ce258;
      _objc_alloc(PTR_PTR_1126ce258);
      uVar3 = param_3;
      func_0x00010c087dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff34a0(puVar2,param_2,uVar1,1);
      _objc_release(uVar1);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25f8c0();
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067d4174; end: 1067d41bb; -[SCSecurityDuplexSyncTriggerHandler .cxx_destruct] */

void FUN_1067d4174(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d41bc; end: 1067d422f; -[SCGrapheneSecurityDuplexMetric2 init] */

undefined1 * FUN_1067d41bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f33c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067d4230; end: 1067d43a3;  */

undefined * FUN_1067d4230(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f397f24;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11093d870;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093d870,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_1067d43a4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar8 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f397f24;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_11093d8c0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093d8c0,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_108 = FUN_1067d4518;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f397f24;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093d910,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_1b0;
  pcStack_188 = FUN_1067d468c;
  puStack_1a0 = puVar1;
  puStack_198 = puVar5;
  ppuStack_190 = &ppuStack_110;
  _objc_retain(puVar6);
  puStack_1a8 = PTR_PTR_1126f33d0;
  puStack_1b0 = puVar2;
  _objc_msgSendSuper2(&puStack_1b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain(puVar6);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined1 **)((long)ppuVar3 + 8) = puVar6;
    _objc_release(uVar4);
  }
  _objc_release(puVar6);
  return (undefined *)ppuVar3;
}



/* Entry: 1067d43a4; end: 1067d4517;  */

undefined * FUN_1067d43a4(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f397f24;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11093d8c0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093d8c0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_1067d4518;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f397f24;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093d910,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  ppuVar4 = &puStack_130;
  pcStack_108 = FUN_1067d468c;
  puStack_120 = puVar2;
  puStack_118 = puVar1;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar8);
  puStack_128 = PTR_PTR_1126f33d0;
  puStack_130 = puVar3;
  _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    _objc_retain(puVar8);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined1 **)((long)ppuVar4 + 8) = puVar8;
    _objc_release(uVar5);
  }
  _objc_release(puVar8);
  return (undefined *)ppuVar4;
}



/* Entry: 1067d4518; end: 1067d468b;  */

undefined * FUN_1067d4518(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f397f24;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11093d910,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_b0;
  pcStack_88 = FUN_1067d468c;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_a8 = PTR_PTR_1126f33d0;
  puStack_b0 = puVar2;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined1 **)((long)ppuVar3 + 8) = puVar5;
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
  return (undefined *)ppuVar3;
}



/* Entry: 1067d468c; end: 1067d46ff; -[UNISCSecurityDuplexSecurityDuplexService initWithUnifiedGrpcService:] */

undefined1 * FUN_1067d468c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f33d0;
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



/* Entry: 1067d4700; end: 1067d47e3; -[UNISCSecurityDuplexSecurityDuplexService triggerHermodEventWithRequest:callOptionsBuilder:handler:] */

void FUN_1067d4700(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126ce260;
  _objc_opt_class(PTR_PTR_1126ce260);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5fcb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067d47e4; end: 1067d48c7; -[UNISCSecurityDuplexSecurityDuplexService ackHermodEventWithRequest:callOptionsBuilder:handler:] */

void FUN_1067d47e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126ce268;
  _objc_opt_class(PTR_PTR_1126ce268);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5fcd8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067d48c8; end: 1067d49ab; -[UNISCSecurityDuplexSecurityDuplexService submitHermodClientPayloadWithRequest:callOptionsBuilder:handler:] */

void FUN_1067d48c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126ce270;
  _objc_opt_class(PTR_PTR_1126ce270);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5fcf8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067d49ac; end: 1067d4a8f; -[UNISCSecurityDuplexSecurityDuplexService getTaskStatusWithRequest:callOptionsBuilder:handler:] */

void FUN_1067d49ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126ce278;
  _objc_opt_class(PTR_PTR_1126ce278);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5fd18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067d4a90; end: 1067d4a9b; -[UNISCSecurityDuplexSecurityDuplexService .cxx_destruct] */

void FUN_1067d4a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d4a9c; end: 1067d4b17;  */

undefined * FUN_1067d4a9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4538 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5fd38,
                        &UNK_10dddfae4,&UNK_10dddfb04,4,FUN_1067d4b18,0);
    do {
      if (puRam00000001136c4538 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4538;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4538,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4538 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4538;
}



/* Entry: 1067d4b18; end: 1067d4b23;  */

bool FUN_1067d4b18(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1067d4b24; end: 1067d4b9f;  */

undefined * FUN_1067d4b24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4540 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5fd58,
                        &UNK_10dddfb14,&UNK_10dddfb44,4,FUN_1067d4ba0,0);
    do {
      if (puRam00000001136c4540 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4540;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4540,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4540 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4540;
}



/* Entry: 1067d4ba0; end: 1067d4bab;  */

bool FUN_1067d4ba0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1067d4bac; end: 1067d4c27;  */

undefined * FUN_1067d4bac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4548 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5fd78,
                        &UNK_10dddfb54,&UNK_10dddfb8c,3,FUN_1067d4c28,0);
    do {
      if (puRam00000001136c4548 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4548;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4548,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4548 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4548;
}



/* Entry: 1067d4c28; end: 1067d4c33;  */

bool FUN_1067d4c28(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1067d4c34; end: 1067d4caf;  */

undefined * FUN_1067d4c34(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4550 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5fd98,
                        &UNK_10dddfb98,&UNK_10dddfbdc,6,FUN_1067d4cb0,0);
    do {
      if (puRam00000001136c4550 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4550;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4550,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4550 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4550;
}



/* Entry: 1067d4cb0; end: 1067d4cbb;  */

bool FUN_1067d4cb0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1067d4cbc; end: 1067d4d23; +[SCSecurityDuplexTriggerHermodEventRequest descriptor] */

void FUN_1067d4cbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4558 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afe500,
                        &PTR____CFConstantStringClassReference_110e5fdb8,&PTR_DAT_1131641d8,
                        &PTR_s_userId_113164350,9,0x48,0x1c);
    puRam00000001136c4558 = puVar1;
  }
  return;
}



/* Entry: 1067d4d24; end: 1067d4d8b; +[SCSecurityDuplexRetryPolicy descriptor] */

void FUN_1067d4d24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afe550,
                        &PTR____CFConstantStringClassReference_110e5fdd8,&PTR_DAT_1131641d8,
                        &PTR_DAT_113164230,3,0x10,0x1c);
    puRam00000001136c4560 = puVar1;
  }
  return;
}



/* Entry: 1067d4d8c; end: 1067d4df3; +[SCSecurityDuplexTriggerHermodEventResponse descriptor] */

void FUN_1067d4d8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4568 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afe5a0,
                        &PTR____CFConstantStringClassReference_110e5fdf8,&PTR_DAT_1131641d8,
                        &PTR_s_taskId_1131641f0,1,0x10,0x1c);
    puRam00000001136c4568 = puVar1;
  }
  return;
}



/* Entry: 1067d4df4; end: 1067d4e5b; +[SCSecurityDuplexSubmitHermodClientPayloadRequest descriptor] */

void FUN_1067d4df4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4570 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afe5f0,
                        &PTR____CFConstantStringClassReference_110e5fe18,&PTR_DAT_1131641d8,
                        &PTR_s_taskId_113164290,3,0x18,0x1c);
    puRam00000001136c4570 = puVar1;
  }
  return;
}



/* Entry: 1067d4e5c; end: 1067d4ec3; +[SCSecurityDuplexSubmitHermodClientPayloadResponse descriptor] */

void FUN_1067d4e5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4578 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afe640,
                        &PTR____CFConstantStringClassReference_110e5fe38,&PTR_DAT_1131641d8,0,0,4,
                        0x1c);
    puRam00000001136c4578 = puVar1;
  }
  return;
}



/* Entry: 1067d4ec4; end: 1067d4f2b; +[SCSecurityDuplexAckHermodEventRequest descriptor] */

void FUN_1067d4ec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afe690,
                        &PTR____CFConstantStringClassReference_110e5fe58,&PTR_DAT_1131641d8,
                        &PTR_s_taskId_1131642f0,3,0x18,0x1c);
    puRam00000001136c4580 = puVar1;
  }
  return;
}



/* Entry: 1067d4f2c; end: 1067d4f93; +[SCSecurityDuplexAckHermodEventResponse descriptor] */

void FUN_1067d4f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4588 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afe6e0,
                        &PTR____CFConstantStringClassReference_110e5fe78,&PTR_DAT_1131641d8,0,0,4,
                        0x1c);
    puRam00000001136c4588 = puVar1;
  }
  return;
}



/* Entry: 1067d4f94; end: 1067d4ffb; +[SCSecurityDuplexGetTaskStatusRequest descriptor] */

void FUN_1067d4f94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4590 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afe730,
                        &PTR____CFConstantStringClassReference_110e5fe98,&PTR_DAT_1131641d8,
                        &PTR_s_taskId_113164210,1,0x10,0x1c);
    puRam00000001136c4590 = puVar1;
  }
  return;
}



/* Entry: 1067d4ffc; end: 1067d5063; +[SCSecurityDuplexGetTaskStatusResponse descriptor] */

void FUN_1067d4ffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4598 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afe780,
                        &PTR____CFConstantStringClassReference_110e5feb8,&PTR_DAT_1131641d8,
                        &PTR_s_taskId_113164470,10,0x48,0x1c);
    puRam00000001136c4598 = puVar1;
  }
  return;
}



/* Entry: 1067d5064; end: 1067d516f; -[SCTIVExtensionEventProcessor initWithUserId:tivRequestHandler:performerProvider:] */

undefined1 *
FUN_1067d5064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f33d8;
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
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067d5170; end: 1067d53b3; -[SCTIVExtensionEventProcessor _processEventsForV1] */

void FUN_1067d5170(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b7490;
  _objc_alloc();
  func_0x00010bfef900();
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_1067d53b4;
  uStack_f8 = 0x1067d53c4;
  uStack_f0 = 0;
  func_0x00010c0d0480();
  _objc_retain(0);
  lVar3 = puStack_110[5];
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar6 = puStack_110[5];
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        lVar4 = *(long *)(lVar7 * 8);
        FUN_1067d5974();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40();
          _objc_release(uVar5);
        }
        _objc_release(lVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
  }
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uStack_f0);
  _objc_release(0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar3 = 8;
    __Block_object_dispose(&uStack_118);
    __Unwind_Resume();
    *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 1067d53b4; end: 1067d53cb;  */

void FUN_1067d53b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1067d53cc; end: 1067d54cf;  */

undefined8 FUN_1067d53cc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    _objc_retain(0);
    func_0x00010c1ec620(puVar1);
    puVar2 = puVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar3;
    _objc_release(uVar5);
    _objc_release(0);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  return 0;
}



/* Entry: 1067d54d0; end: 1067d5713; -[SCTIVExtensionEventProcessor _processEventsForV2] */

undefined * FUN_1067d54d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b7490;
  _objc_alloc();
  func_0x00010bfef900();
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_1067d53b4;
  uStack_f8 = 0x1067d53c4;
  uStack_f0 = 0;
  func_0x00010c0d0480();
  _objc_retain(0);
  lVar2 = puStack_110[5];
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar10 = puStack_110[5];
    _objc_retain(lVar10);
    lVar2 = lVar10;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar10);
        }
        lVar3 = *(long *)(lVar11 * 8);
        FUN_1067d5d44();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25f8c0();
          _objc_release(uVar4);
        }
        _objc_release(lVar3);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
  }
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uStack_f0);
  _objc_release(0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar9 = 8;
    __Block_object_dispose(&uStack_118);
    __Unwind_Resume();
    _objc_retain(lVar9);
    lVar2 = lVar9;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      _objc_alloc();
      func_0x00010bfeea60();
      _objc_retain(0);
      func_0x00010c1ec620(puVar5);
      puVar6 = puVar5;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar8 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar7);
      puVar7 = puVar6;
      if (((ulong)puVar8 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar6);
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28);
      *(undefined **)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28) = puVar7;
      _objc_release(uVar4);
      _objc_release(0);
      _objc_release(puVar5);
    }
    _objc_release(lVar9);
    return (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 1067d5714; end: 1067d5817;  */

undefined8 FUN_1067d5714(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    _objc_retain(0);
    func_0x00010c1ec620(puVar1);
    puVar2 = puVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar3;
    _objc_release(uVar5);
    _objc_release(0);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  return 0;
}



/* Entry: 1067d5818; end: 1067d5873; -[SCTIVExtensionEventProcessor onUserResumed:didLaunchWithDataUnavailable:] */

void FUN_1067d5818(long param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (param_3 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1067d5874;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  }
  return;
}



/* Entry: 1067d5874; end: 1067d589b;  */

void FUN_1067d5874(long param_1)

{
  func_0x00010be80f80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be80fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processEventsForV2_11257dd88);
  return;
}



/* Entry: 1067d589c; end: 1067d58f3; -[SCTIVExtensionEventProcessor onAppWillEnterForeground] */

void FUN_1067d589c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1067d58f4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 1067d58f4; end: 1067d591b;  */

void FUN_1067d58f4(long param_1)

{
  func_0x00010be80f80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be80fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processEventsForV2_11257dd88);
  return;
}



/* Entry: 1067d591c; end: 1067d591f; -[SCTIVExtensionEventProcessor onAppDidBecomeActive] */

void FUN_1067d591c(void)

{
  return;
}



/* Entry: 1067d5920; end: 1067d5923; -[SCTIVExtensionEventProcessor onAppDidEnterBackground] */

void FUN_1067d5920(void)

{
  return;
}



/* Entry: 1067d5924; end: 1067d5927; -[SCTIVExtensionEventProcessor onAppDidFinishLaunching] */

void FUN_1067d5924(void)

{
  return;
}



/* Entry: 1067d5928; end: 1067d592b; -[SCTIVExtensionEventProcessor onAppWillResignActive] */

void FUN_1067d5928(void)

{
  return;
}



/* Entry: 1067d592c; end: 1067d592f; -[SCTIVExtensionEventProcessor onAppWillTerminate] */

void FUN_1067d592c(void)

{
  return;
}



/* Entry: 1067d5930; end: 1067d5933; -[SCTIVExtensionEventProcessor onUserLoggedIn] */

void FUN_1067d5930(void)

{
  return;
}



/* Entry: 1067d5934; end: 1067d5937; -[SCTIVExtensionEventProcessor onUserRegistered] */

void FUN_1067d5934(void)

{
  return;
}



/* Entry: 1067d5938; end: 1067d5973; -[SCTIVExtensionEventProcessor .cxx_destruct] */

void FUN_1067d5938(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d5974; end: 1067d5d43;  */

void FUN_1067d5974(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
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
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long alStack_70 [2];
  
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain();
  _objc_alloc();
  func_0x00010bff6b20();
  _objc_release(param_1);
  alStack_70[0] = 0;
  puVar3 = PTR_PTR_1126ce280;
  func_0x00010c0f40e0(PTR_PTR_1126ce280,param_2,puVar2,alStack_70);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = (undefined *)0x0;
  if ((alStack_70[0] == 0) && (puVar3 != (undefined *)0x0)) {
    puVar22 = puVar3;
    func_0x00010c279780();
    uVar1 = (uint)puVar22;
    puVar4 = puVar3;
    func_0x00010bf70280();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ce288;
    _objc_alloc();
    puVar22 = puVar4;
    func_0x00010c291200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf6fd20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c0edc20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf21580(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a7e0(puVar5,param_2,puVar22,puVar6,puVar7,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar22);
    puVar6 = puVar3;
    func_0x00010c2797e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ce290;
    _objc_alloc();
    puVar22 = puVar6;
    func_0x00010c2711a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf6eb60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052e60(puVar7,param_2,puVar22,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar22);
    puVar22 = PTR_PTR_1126ce298;
    _objc_alloc();
    puVar8 = puVar3;
    func_0x00010c279800(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010bf21380(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010c2808c0();
    puVar13 = puVar3;
    func_0x00010c2808a0();
    puVar14 = puVar3;
    func_0x00010c280860();
    puVar15 = puVar3;
    func_0x00010c09ed60();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf39960();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar3;
    func_0x00010c09ed60();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf53220();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar3;
    func_0x00010c0fe300();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bf8b520();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010bf64c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0550e0(puVar22,param_2,puVar8,puVar9,puVar10,puVar11,puVar12,puVar13,puVar14,
                        puVar16,puVar18,puVar5,(3 < uVar1 || uVar1 == 1) && uVar1 != 0xfbadbeef,
                        puVar7,0,puVar21);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 1067d5d44; end: 1067d5d8f;  */

void FUN_1067d5d44(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce258;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010bff34a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067d5d90; end: 1067d5eff; -[SCTIVNotificationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d5d90(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ce2a0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112750a14;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c135640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0500e0();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112750a18);
  *(undefined **)(param_1 + _DAT_112750a18) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112750a1c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befabc0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar5 = 0xfffffffffffffffe;
  _dispatch_get_global_queue(0xfffffffffffffffe,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1067d5f00;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010007380c(uVar5,&puStack_70);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1067d5f00; end: 1067d5f2b;  */

void FUN_1067d5f00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be80fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067d5f2c; end: 1067d5fdf; -[SCTIVNotificationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d5f2c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_112750a1c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dd20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_48 = PTR_PTR_1126f33e0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067d5fe0; end: 1067d619f; -[SCTIVNotificationEntryPoint _processExtensionEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d5fe0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126ce2a8;
  _objc_alloc(PTR_PTR_1126ce2a8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112750a2c;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = lVar8;
  func_0x00010c293740(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112750a14;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c135640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112750a20;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bd40(puVar1,param_2,lVar9,lVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112750a28;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar8;
  func_0x00010bf06620();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf54940();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112750a24;
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = lVar2;
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar8);
  func_0x00010bf18720(*(undefined8 *)(param_1 + lVar9),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d61a0; end: 1067d6227; -[SCTIVNotificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d61a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112750a20);
  _objc_destroyWeak(param_1 + _DAT_112750a14);
  _objc_destroyWeak(param_1 + _DAT_112750a1c);
  _objc_destroyWeak(param_1 + _DAT_112750a30);
  _objc_destroyWeak(param_1 + _DAT_112750a2c);
  _objc_destroyWeak(param_1 + _DAT_112750a28);
  _objc_storeStrong(param_1 + _DAT_112750a24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112750a18,0);
  return;
}



/* Entry: 1067d6228; end: 1067d629b; -[SCTIVNotificationProcessor initWithTIVRequestHandler:] */

undefined1 * FUN_1067d6228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f33e8;
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



/* Entry: 1067d629c; end: 1067d62bf; -[SCTIVNotificationProcessor shouldFilterNotification:] */

undefined8 FUN_1067d629c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c11c420();
  uVar1 = 2;
  if (param_3 != 0xa5) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1067d62c0; end: 1067d63a3; -[SCTIVNotificationProcessor processNotification:] */

void FUN_1067d62c0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11c420();
  if (uVar1 == 0xa5) {
    uVar1 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar1 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      if ((uVar1 & 1) != 0) {
        uVar1 = uVar2;
        FUN_1067d5974();
        _objc_retainAutoreleasedReturnValue();
        if (uVar1 != 0) {
          uVar4 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40();
          _objc_release(uVar4);
        }
        _objc_release(uVar1);
      }
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067d63a4; end: 1067d63af; -[SCTIVNotificationProcessor .cxx_destruct] */

void FUN_1067d63a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d63b0; end: 1067d647b; -[SCTIVPageLaunchHandler initWithTivServices:userSession:navigationDelegate:] */

undefined1 *
FUN_1067d63b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f33f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = 0x2c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067d647c; end: 1067d6607; -[SCTIVPageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_1067d647c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010c271980();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd8320();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  }
  else {
    puVar1 = param_3;
    func_0x00010c271980();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c087dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf05800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar3 != (undefined *)0x0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_1067d6608;
      puStack_60 = &UNK_11084a9e8;
      uStack_58 = param_1;
      _objc_retain(param_3);
      puStack_50 = param_3;
      _objc_retain(param_5);
      lStack_48 = param_5;
      func_0x0001000d76cc("APPSTORE",&puStack_78);
      _objc_release(lStack_48);
      puVar1 = puStack_50;
      goto LAB_1067d65dc;
    }
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  }
  func_0x00010c00e2e0();
  (**(code **)(param_5 + 0x10))(param_5,puVar1);
LAB_1067d65dc:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1067d6608; end: 1067d66db;  */

void FUN_1067d6608(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1067d66dc;
  puStack_50 = &UNK_11084a9e8;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar4;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010c10d100(lVar2,param_2,0,0,0,&puStack_68);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1067d66dc; end: 1067d67cb;  */

void FUN_1067d66dc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ce258;
  _objc_alloc(PTR_PTR_1126ce258);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c271980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c087dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff34a0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c135640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f8c0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d67cc; end: 1067d67d3; -[SCTIVPageLaunchHandler screen] */

undefined4 FUN_1067d67cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 1067d67d4; end: 1067d680b; -[SCTIVPageLaunchHandler .cxx_destruct] */

void FUN_1067d67d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d680c; end: 1067d694b; -[SCTIVPageLauncherPlugin initWithTivServices:userSession:navigationServices:] */

undefined1 *
FUN_1067d680c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f33f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ce2b0;
    _objc_alloc();
    uVar4 = param_5;
    func_0x00010c0d6760(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053d00();
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  return *(undefined1 **)(param_3 + 8);
}



/* Entry: 1067d694c; end: 1067d6953; -[SCTIVPageLauncherPlugin handlers] */

undefined8 FUN_1067d694c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067d6954; end: 1067d6983; -[SCTIVPageLauncherPlugin setHandlers:] */

void FUN_1067d6954(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1067d6984; end: 1067d698f; -[SCTIVPageLauncherPlugin .cxx_destruct] */

void FUN_1067d6984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d6990; end: 1067d6a0b;  */

undefined * FUN_1067d6990(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c45a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5ffb8,
                        &UNK_10dddfbf4,&UNK_10dddfc24,4,FUN_1067d6a0c,0);
    do {
      if (puRam00000001136c45a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c45a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c45a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c45a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c45a0;
}



/* Entry: 1067d6a0c; end: 1067d6a17;  */

bool FUN_1067d6a0c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1067d6a18; end: 1067d6a93;  */

undefined * FUN_1067d6a18(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c45a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5ffd8,
                        &UNK_10dddfc34,&UNK_10dddfc58,3,FUN_1067d6a94,0);
    do {
      if (puRam00000001136c45a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c45a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c45a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c45a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c45a8;
}



/* Entry: 1067d6a94; end: 1067d6a9f;  */

bool FUN_1067d6a94(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1067d6aa0; end: 1067d6b1b;  */

undefined * FUN_1067d6aa0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c45b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5fff8,
                        &UNK_10dddfc64,&UNK_10dddfc98,5,FUN_1067d6b1c,0);
    do {
      if (puRam00000001136c45b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c45b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c45b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c45b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c45b0;
}



/* Entry: 1067d6b1c; end: 1067d6b27;  */

bool FUN_1067d6b1c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1067d6b28; end: 1067d6b8f; +[LocationData descriptor] */

void FUN_1067d6b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c45b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afe9b0,
                        &PTR____CFConstantStringClassReference_110e60018,&PTR_DAT_1131645c0,
                        &PTR_s_city_113164978,6,0x30,0x1c);
    puRam00000001136c45b8 = puVar1;
  }
  return;
}



/* Entry: 1067d6b90; end: 1067d6bf7; +[DeviceData descriptor] */

void FUN_1067d6b90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c45c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afea00,
                        &PTR____CFConstantStringClassReference_110e5cff8,&PTR_DAT_1131645c0,
                        &PTR_s_deviceId_1131648d8,5,0x30,0x1c);
    puRam00000001136c45c0 = puVar1;
  }
  return;
}



/* Entry: 1067d6bf8; end: 1067d6c5f; +[TivRequestDwebData descriptor] */

void FUN_1067d6bf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c45c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afea50,
                        &PTR____CFConstantStringClassReference_110e60038,&PTR_DAT_1131645c0,
                        &PTR_s_data_p_1131645d8,1,0x10,0x1c);
    puRam00000001136c45c8 = puVar1;
  }
  return;
}



/* Entry: 1067d6c60; end: 1067d6cc7; +[TivRequestInfo descriptor] */

void FUN_1067d6c60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c45d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afeaa0,
                        &PTR____CFConstantStringClassReference_110e60058,&PTR_DAT_1131645c0,
                        &PTR_DAT_1131645f8,1,0x10,0x1c);
    puRam00000001136c45d0 = puVar1;
  }
  return;
}



/* Entry: 1067d6cc8; end: 1067d6d2f; +[TivRequest descriptor] */

void FUN_1067d6cc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c45d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afeaf0,
                        &PTR____CFConstantStringClassReference_110e60078,&PTR_DAT_1131645c0,
                        &PTR_s_transactionId_113164a38,0xe,0x70,0x1c);
    puRam00000001136c45d8 = puVar1;
  }
  return;
}



/* Entry: 1067d6d30; end: 1067d6d97; +[TivResponse descriptor] */

void FUN_1067d6d30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c45e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afeb40,
                        &PTR____CFConstantStringClassReference_110e60098,&PTR_DAT_1131645c0,
                        &PTR_s_transactionId_113164718,3,0x18,0x1c);
    puRam00000001136c45e0 = puVar1;
  }
  return;
}



/* Entry: 1067d6d98; end: 1067d6dff; +[TransactionDescription descriptor] */

void FUN_1067d6d98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c45e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afeb90,
                        &PTR____CFConstantStringClassReference_110e600b8,&PTR_DAT_1131645c0,
                        &PTR_s_title_113164698,2,0x18,0x1c);
    puRam00000001136c45e8 = puVar1;
  }
  return;
}



/* Entry: 1067d6e00; end: 1067d6e67; +[InAppApprovalRequest descriptor] */

void FUN_1067d6e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c45f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afebe0,
                        &PTR____CFConstantStringClassReference_110e600d8,&PTR_DAT_1131645c0,
                        &PTR_s_response_1131646d8,2,0x18,0x1c);
    puRam00000001136c45f0 = puVar1;
  }
  return;
}



/* Entry: 1067d6e68; end: 1067d6ecf; +[InAppApprovalResponse descriptor] */

void FUN_1067d6e68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c45f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afec30,
                        &PTR____CFConstantStringClassReference_110e600f8,&PTR_DAT_1131645c0,
                        &PTR_s_response_113164618,1,0x10,0x1c);
    puRam00000001136c45f8 = puVar1;
  }
  return;
}



/* Entry: 1067d6ed0; end: 1067d6f37; +[TivResponseDwebData descriptor] */

void FUN_1067d6ed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afec80,
                        &PTR____CFConstantStringClassReference_110e60118,&PTR_DAT_1131645c0,
                        &PTR_s_data_p_113164638,1,0x10,0x1c);
    puRam00000001136c4600 = puVar1;
  }
  return;
}



/* Entry: 1067d6f38; end: 1067d6f9f; +[TransactionDwebData descriptor] */

void FUN_1067d6f38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afecd0,
                        &PTR____CFConstantStringClassReference_110e60138,&PTR_DAT_1131645c0,
                        &PTR_s_transactionId_1131647d8,4,0x28,0x1c);
    puRam00000001136c4608 = puVar1;
  }
  return;
}



/* Entry: 1067d6fa0; end: 1067d702b; +[PlatformRequestData descriptor] */

undefined * FUN_1067d6fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4610 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afed20,
                        &PTR____CFConstantStringClassReference_110e60158,&PTR_DAT_1131645c0,
                        &PTR_DAT_113164658,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001136c4610 = puVar1;
  }
  return puRam00000001136c4610;
}



/* Entry: 1067d702c; end: 1067d70b7; +[PlatformResponseData descriptor] */

undefined * FUN_1067d702c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afed70,
                        &PTR____CFConstantStringClassReference_110e60178,&PTR_DAT_1131645c0,
                        &PTR_DAT_113164678,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001136c4618 = puVar1;
  }
  return puRam00000001136c4618;
}



/* Entry: 1067d70b8; end: 1067d711f; +[LogTivNotificationDisplayedRequest descriptor] */

void FUN_1067d70b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afedc0,
                        &PTR____CFConstantStringClassReference_110e60198,&PTR_DAT_1131645c0,
                        &PTR_s_transactionId_113164858,4,0x20,0x1c);
    puRam00000001136c4620 = puVar1;
  }
  return;
}



/* Entry: 1067d7120; end: 1067d7187; +[LogTivNotificationDisplayedResponse descriptor] */

void FUN_1067d7120(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afee10,
                        &PTR____CFConstantStringClassReference_110e601b8,&PTR_DAT_1131645c0,0,0,4,
                        0x1c);
    puRam00000001136c4628 = puVar1;
  }
  return;
}



/* Entry: 1067d7188; end: 1067d71ef; +[LogTivNotificationReceivedRequest descriptor] */

void FUN_1067d7188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afee60,
                        &PTR____CFConstantStringClassReference_110e601d8,&PTR_DAT_1131645c0,
                        &PTR_s_transactionId_113164778,3,0x18,0x1c);
    puRam00000001136c4630 = puVar1;
  }
  return;
}


