/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056f463c; end: 1056f4683;  */

void FUN_1056f463c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed73e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056f4684; end: 1056f476f; -[SCSponsoredLensEncryptedUserDataUpdater _validNoFillLensesNamespaces] */

void FUN_1056f4684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f78638;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f310d8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f78658;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR___NSConcreteGlobalBlock_1108ab650;
  puVar2 = puVar1;
  func_0x000100504554();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b6868;
    _objc_retain(ppuVar3);
    _objc_alloc(puVar2);
    func_0x00010c02dd60();
    _objc_release(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056f4770; end: 1056f4883; -[SCSponsoredLensEncryptedUserDataUpdater _eutdFromNamespaceData:] */

void FUN_1056f4770(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf93ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_3;
  if (lVar2 == 0) {
    func_0x00010bef0bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be0b440(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = param_3;
      func_0x00010c105c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0b440(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    else {
      _objc_retain(lVar2);
      param_1 = lVar2;
    }
    _objc_release(lVar2);
  }
  else {
    func_0x00010bf93ca0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010bf15dc0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056f4884; end: 1056f4a03; -[SCSponsoredLensEncryptedUserDataUpdater _eutdFromLenses:] */

void FUN_1056f4884(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  lVar8 = 0;
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        lVar2 = lVar7;
        func_0x00010c2813a0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf93ca0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if (lVar4 != 0) {
          func_0x00010c2813a0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bf93ca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          goto LAB_1056f49b4;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
    lVar8 = 0;
  }
LAB_1056f49b4:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(puVar5);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195be0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1056f4a04; end: 1056f4a53; -[SCSponsoredLensEncryptedUserDataUpdater _updateEUTD:] */

void FUN_1056f4a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195be0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056f4a54; end: 1056f4a9b; -[SCSponsoredLensEncryptedUserDataUpdater .cxx_destruct] */

void FUN_1056f4a54(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056f4a9c; end: 1056f4b97; -[SCAdPreviewManager initWithRequestManager:adConfigProvider:snapTokenProvider:adRenderDataParser:] */

undefined1 *
FUN_1056f4a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e9cd8;
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



/* Entry: 1056f4b98; end: 1056f4dd7; -[SCAdPreviewManager fetchAdCreativeForPreviewFromV3WithEntityType:entityId:successBlock:failureBlock:] */

void FUN_1056f4b98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8fd20();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110df8478;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(ppuVar4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010be9ff20(param_1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(ppuVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1056f4dd8; end: 1056f4e2f;  */

void FUN_1056f4dd8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b5e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056f4e30; end: 1056f4e43;  */

void FUN_1056f4e30(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001056f4e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1056f4e44; end: 1056f5093; -[SCAdPreviewManager _onSendRequestToEndpointSuccessWithResponseData:entityId:endpointUrl:successBlock:failureBlock:] */

/* WARNING: Removing unreachable block (ram,0x0001056f4fec) */
/* WARNING: Removing unreachable block (ram,0x0001056f4ff0) */

void FUN_1056f4e44(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_x4;
  long in_x5;
  undefined8 in_x6;
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  puVar1 = PTR_PTR_1126bd4d8;
  _objc_retain(in_x4);
  func_0x00010c0f40e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar2 = PTR_PTR_1126afeb8;
  _objc_alloc(PTR_PTR_1126afeb8);
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126afeb0;
  _objc_alloc();
  func_0x00010c04e0a0();
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010bff1c00(0,0,0,0,0,param_1,puVar2);
  _objc_release(in_x4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  uVar7 = uVar6;
  func_0x00010c0f3e00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (in_x5 != 0) {
    (**(code **)(in_x5 + 0x10))(in_x5,uVar7);
  }
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(in_x6);
  _objc_release(in_x5);
  return;
}



/* Entry: 1056f5094; end: 1056f532f; -[SCAdPreviewManager _sendRequestToEndpoint:parameters:requestManager:successBlock:failureBlock:] */

void FUN_1056f5094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8fd20();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                        &PTR____CFConstantStringClassReference_110df8538);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar3,param_2,param_3,&PTR____CFConstantStringClassReference_110df8558);
    puVar5 = puVar4;
    func_0x00010beec820(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110df8578);
    _objc_release(puVar5);
    uVar2 = param_4;
    func_0x00010c085d00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar3,param_2,uVar2,&PTR____CFConstantStringClassReference_110df8598);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126bbf20;
    func_0x00010bdc1d20(PTR_PTR_1126bbf20);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    _objc_retain(param_7);
    puVar5 = PTR___dispatch_main_q_11034be20;
    func_0x00010c25f1c0(param_5,param_2,&PTR____CFConstantStringClassReference_110df84b8,puVar3,0,0,
                        PTR____NSArray0__struct_11034ab48,puVar6,3,1,1);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    func_0x00010be9f380(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056f5330; end: 1056f535f;  */

void FUN_1056f5330(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001056f5340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1056f5360; end: 1056f5577; -[SCAdPreviewManager _sendGetRequestToEndpoint:parameters:requestManager:successBlock:failureBlock:] */

void FUN_1056f5360(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___dispatch_main_q_11034be20;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_7);
  func_0x00010bfa48e0(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056f5578; end: 1056f55d3;  */

void FUN_1056f5578(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5c0c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056f55d4; end: 1056f55e7;  */

void FUN_1056f55d4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001056f55e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1056f55e8; end: 1056f586f; -[SCAdPreviewManager _makeRequestWithSnapToken:endpoint:parameters:requestManager:successBlock:failureBlock:] */

void FUN_1056f55e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bbf20;
  func_0x00010bdc1d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  _objc_retain(param_7);
  puVar1 = PTR___dispatch_main_q_11034be20;
  puVar7 = puVar3;
  func_0x00010c25f700(param_6);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(puVar2 + 0x20);
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001056f5880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x10))(lVar8,puVar7);
    return;
  }
  return;
}



/* Entry: 1056f5870; end: 1056f589f;  */

void FUN_1056f5870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001056f5880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_4);
    return;
  }
  return;
}



/* Entry: 1056f58a0; end: 1056f58e7; -[SCAdPreviewManager .cxx_destruct] */

void FUN_1056f58a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056f58e8; end: 1056f59cb; -[SCAdPreviewServiceProvider provide] */

void FUN_1056f58e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd4e0;
  _objc_alloc(PTR_PTR_1126bd4e0);
  func_0x00010bff1400();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056f59cc; end: 1056f5a0b;  */

void FUN_1056f59cc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056f5a0c; end: 1056f5b57; -[SCAdPreviewServiceProvider _createAdCreativeFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f5a0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126bd4e8;
  _objc_alloc(PTR_PTR_1126bd4e8);
  lVar2 = param_1 + _DAT_1127280f8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127280fc;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112728100;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112728104;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c22a0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f120(puVar1,param_2,lVar4,lVar6,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056f5b58; end: 1056f5ba7; -[SCAdPreviewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f5b58(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112728104);
  _objc_destroyWeak(param_1 + _DAT_112728100);
  _objc_destroyWeak(param_1 + _DAT_1127280fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127280f8);
  return;
}



/* Entry: 1056f5ba8; end: 1056f5c3f; -[SCLegacyAuthFlowProxy authenticatedWithActiveUserSession:isNewRegistration:] */

void FUN_1056f5ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1056f5c40;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1056f5c40; end: 1056f5c53;  */

void FUN_1056f5c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf10bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_authenticatedWithActiveUserSessi_1125a1c90,*(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 1056f5c54; end: 1056f5d07; -[SCLegacyAuthFlowProxy logout:] */

void FUN_1056f5c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1056f5cd8;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bcbe2c4("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056f5d08; end: 1056f5de3; -[SCLegacyAuthFlowProxy loginDidSucceedWithUserSession:dtoken1i:dtoken1v:] */

void FUN_1056f5d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1056f5de4;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056f5de4; end: 1056f5df3;  */

void FUN_1056f5de4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__loginDidSucceedWithUserSession__1125744a8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1056f5df4; end: 1056f5e4b; -[SCLegacyAuthFlowProxy appSessionWillLogin] */

void FUN_1056f5df4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1056f5e4c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1056f5e4c; end: 1056f5e57;  */

void FUN_1056f5e4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a6710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_willLogin_1126873e8);
  return;
}



/* Entry: 1056f5e58; end: 1056f5eaf; -[SCLegacyAuthFlowProxy appSessionDidLogout] */

void FUN_1056f5e58(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1056f5eb0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1056f5eb0; end: 1056f5ebb;  */

void FUN_1056f5eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_didLogout_1125bb8f0);
  return;
}



/* Entry: 1056f5ebc; end: 1056f5f97; -[SCLegacyAuthFlowProxy registerDidCreateAccountWithUserSession:dtoken1i:dtoken1v:] */

void FUN_1056f5ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1056f5f98;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056f5f98; end: 1056f5fa7;  */

void FUN_1056f5f98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__registrationDidSucceedWithUserS_1125801c0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1056f5fa8; end: 1056f5fe3; -[SCLegacyAuthFlowProxy _logout:] */

void FUN_1056f5fa8(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010c073500();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfb4d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_forceLogoutUser_1125cad00);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0b4990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_logoutUser_11260ac70)
  ;
  return;
}



/* Entry: 1056f5fe4; end: 1056f608f; -[SCLegacyAuthFlowProxy _loginDidSucceedWithUserSession:dtoken1i:dtoken1v:] */

void FUN_1056f5fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf3c500(uVar2,param_2,0);
  func_0x00010c0b4420(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126af568;
  func_0x00010c22b6a0(PTR_PTR_1126af568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2576e0();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056f6090; end: 1056f6113; -[SCLegacyAuthFlowProxy _registrationDidSucceedWithUserSession:dtoken1i:dtoken1v:] */

void FUN_1056f6090(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0b4420(uVar2,param_2,param_3);
  puVar1 = PTR_PTR_1126af568;
  func_0x00010c22b6a0(PTR_PTR_1126af568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2576e0();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056f6114; end: 1056f614f; -[SCLegacyAuthFlowProxy .cxx_destruct] */

void FUN_1056f6114(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056f6150; end: 1056f6193; -[SCAuthenticationSubScopesRouter beginDataUnavailableWorkflowWithApplicationDataChecker:delegate:] */

void FUN_1056f6150(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd4f0;
  func_0x00010c150a20(PTR_PTR_1126bd4f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056f6194; end: 1056f61b3; -[SCAuthenticationSubScopesRouter endDataUnavailableWorkflow] */

void FUN_1056f6194(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1056f61b4; end: 1056f6207; -[SCAuthenticationSubScopesRouter beginEmergencyModeWorkflow] */

void FUN_1056f61b4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126bd4f8;
    _objc_alloc_init(PTR_PTR_1126bd4f8);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1056f6208; end: 1056f620f; -[SCAuthenticationSubScopesRouter emergencyModeAvailable] */

void FUN_1056f6208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 1056f6210; end: 1056f624f; -[SCAuthenticationSubScopesRouter beginUnauthenticatedWorkflowWithDelegate:] */

void FUN_1056f6210(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf22ee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056f6250; end: 1056f630b; -[SCAuthenticationSubScopesRouter endUnauthenticatedWorkflow] */

void FUN_1056f6250(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c12e1c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1056f630c;
  puStack_30 = &UNK_110842e18;
  puStack_28 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c2a4ae0(uVar2,param_2,&puStack_48);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056f630c; end: 1056f6317;  */

void FUN_1056f630c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,0);
  return;
}



/* Entry: 1056f6318; end: 1056f6487; -[SCAuthenticationSubScopesRouter endUserSessionWorkflow:] */

void FUN_1056f6318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c150520(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0b20();
  _objc_release(param_3);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c12e1c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1056f6488;
  puStack_60 = &UNK_110844b80;
  puStack_58 = puVar2;
  uStack_50 = uVar1;
  puStack_48 = puVar3;
  _objc_retain(puVar2);
  func_0x00010c2a4ae0(uVar4,param_2,&puStack_78);
  _objc_release(uVar4);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_58);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056f6488; end: 1056f64db;  */

void FUN_1056f6488(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_invalidate_1125f8150)
  ;
  return;
}



/* Entry: 1056f64dc; end: 1056f653b; -[SCAuthenticationSubScopesRouter .cxx_destruct] */

void FUN_1056f64dc(long param_1)

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



/* Entry: 1056f653c; end: 1056f660f; -[SCAuthenticationWorkflow userCompletedRegistrationWithUserSession:bootstrapData:registrationInfo:] */

void FUN_1056f653c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c293740(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf10a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bd500;
  func_0x00010bfbae60(PTR_PTR_1126bd500,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010bdd3d20(param_1,param_2,param_3,uVar2,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056f6610; end: 1056f66eb; -[SCAuthenticationWorkflow userCompletedLogInWithUserSession:bootstrapData:loginInfo:] */

void FUN_1056f6610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c293740(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf10a60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bd500;
  func_0x00010bfbaca0(PTR_PTR_1126bd500,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010bdd3d20(param_1,param_2,param_3,uVar2,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056f66ec; end: 1056f6b57; -[SCAuthenticationWorkflow _beginUserSession:authToken:context:] */

void FUN_1056f66ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
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
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_2 + 0x78) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf10da0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bd508;
    func_0x00010bf882e0(PTR_PTR_1126bd508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar1);
    goto LAB_1056f6ae4;
  }
  uVar5 = param_4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = uVar5;
  _objc_release(uVar1);
  uVar5 = param_4;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = uVar5;
  _objc_release(uVar1);
  func_0x00010c226860(*(undefined8 *)(param_2 + 0x38));
  func_0x00010c21f2c0(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c073c40();
  func_0x00010be0a6e0(param_2);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1056f6b5c;
  puStack_80 = &UNK_110885010;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1056f6c34;
  puStack_a8 = &UNK_110885040;
  lStack_a0 = param_2;
  lStack_78 = param_2;
  func_0x00010c0bfac0(param_6);
  if (*(long *)(param_2 + 0x88) == 0) {
LAB_1056f692c:
    func_0x00010bdd3d80(param_2);
  }
  else {
    lVar3 = *(long *)(param_2 + 0x18);
    func_0x00010c0b5020();
    uVar1 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bd510;
    func_0x00010c0b4700(PTR_PTR_1126bd510);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c2a28e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = uVar5;
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(uVar1);
    if (lVar3 == -1) {
      func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x98));
      *(undefined8 *)(param_2 + 0xa0) = param_1;
      func_0x00010c24d960(*(undefined8 *)(param_2 + 0x70));
      _objc_initWeak(auStack_c8,param_2);
      uVar5 = *(undefined8 *)(param_2 + 0x88);
      puStack_100 = puVar2;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_1056f6d0c;
      puStack_e8 = &UNK_110842d48;
      _objc_copyWeak(auStack_d0,auStack_c8);
      _objc_retain(param_4);
      uStack_e0 = param_4;
      _objc_retain(param_6);
      uStack_d8 = param_6;
      func_0x00010c297260(uVar5);
      _objc_release(uStack_d8);
      _objc_release(uStack_e0);
      puVar6 = auStack_d0;
    }
    else {
      if (lVar3 == 0) {
        uVar5 = *(undefined8 *)(param_2 + 0x88);
        *(undefined8 *)(param_2 + 0x88) = 0;
        _objc_release(uVar5);
        goto LAB_1056f692c;
      }
      func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x98));
      *(undefined8 *)(param_2 + 0xa0) = param_1;
      func_0x00010c24d960(*(undefined8 *)(param_2 + 0x70));
      _objc_initWeak(auStack_c8,param_2);
      uVar5 = *(undefined8 *)(param_2 + 0x88);
      puStack_138 = puVar2;
      uStack_130 = 0xc2000000;
      uStack_128 = 0x1056f6d40;
      puStack_120 = &UNK_110842d48;
      _objc_copyWeak(auStack_108,auStack_c8);
      _objc_retain(param_4);
      uStack_118 = param_4;
      _objc_retain(param_6);
      uStack_110 = param_6;
      func_0x00010c297260(uVar5);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      _objc_copyWeak(auStack_140,auStack_c8);
      _objc_retain(param_4);
      _objc_retain(param_6);
      func_0x00010c0f7fe0((double)lVar3 / 1000.0,uVar5);
      _objc_release(param_6);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_140);
      _objc_release(uStack_110);
      _objc_release(uStack_118);
      puVar6 = auStack_108;
    }
    _objc_destroyWeak(puVar6);
    _objc_destroyWeak(auStack_c8);
  }
LAB_1056f6ae4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1056f6b58; end: 1056f6b5b;  */

void FUN_1056f6b58(void)

{
  return;
}



/* Entry: 1056f6b5c; end: 1056f6d0b;  */

void FUN_1056f6b5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c293740(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c243380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c293740(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28cce0(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1056f6d0c; end: 1056f6da7;  */

void FUN_1056f6d0c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056f6da8; end: 1056f6dbf; -[SCAuthenticationWorkflow _beginUserSessionWorkflowAfterCompletingCleanupIfNeededWithUserSession:context:] */

void FUN_1056f6da8(long param_1)

{
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdd3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginUserSessionWorkflowAfterCo_1125528f8);
  return;
}



/* Entry: 1056f6dc0; end: 1056f6e2b; -[SCAuthenticationWorkflow _beginUserSessionWorkflowAfterCompletingCleanupWithUserSession:context:] */

void FUN_1056f6dc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf940a0(uVar1);
  func_0x00010becdd60(param_1);
  func_0x00010bdd3d80(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056f6e2c; end: 1056f6ecf; -[SCAuthenticationWorkflow _trackCleanupSessionLatency] */

void FUN_1056f6e2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x98));
  puVar1 = PTR_PTR_1126bd508;
  func_0x00010c0b3e80(PTR_PTR_1126bd508);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf10da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056f6ed0; end: 1056f6ffb; -[SCAuthenticationWorkflow _beginUserSessionWorkflowAfterUnauthCleanupWithUserSession:context:] */

void FUN_1056f6ed0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf959e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056f6ffc; end: 1056f7067;  */

void FUN_1056f6ffc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = 0;
    _objc_release(uVar2);
    func_0x00010bf18f20(*(undefined8 *)(lVar1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f320();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056f7068; end: 1056f7197; -[SCAuthenticationWorkflow userSessionEnded:] */

void FUN_1056f7068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    _objc_retain(param_3);
    func_0x00010be50460(param_1,param_2,param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d8a0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_1056f8088();
    _objc_release(uVar1);
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0b46e0();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf95a80(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    _objc_release(uVar3);
    func_0x00010c21f2c0(*(undefined8 *)(param_1 + 0x10),param_2,0);
    func_0x00010be0a6e0(param_1,param_2,0,&PTR____CFConstantStringClassReference_110df8638);
    func_0x00010bf18e20(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1056f7198; end: 1056f71bf; -[SCAuthenticationWorkflow dataUnavailableWorkflowEndedWithDataAvailable] */

void FUN_1056f7198(long param_1,undefined8 param_2)

{
  func_0x00010be95e20(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf94670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_endDataUnavailableWorkflow_1125c2b40);
  return;
}



/* Entry: 1056f71c0; end: 1056f723f; -[SCAuthenticationWorkflow tweakDidChange:] */

void FUN_1056f71c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c12d560(param_3,param_2,param_1);
  if (*(long *)(param_1 + 0x78) == 0) {
    func_0x00010bf959e0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126af4a0;
    _objc_alloc(PTR_PTR_1126af4a0);
    func_0x00010c027b60();
    func_0x00010bf95a80(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be95e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumePersistedUserSessionOrBeg_112583128,1)
  ;
  return;
}



/* Entry: 1056f7240; end: 1056f7243; -[SCAuthenticationWorkflow _resetEmergencyModeTweak] */

void FUN_1056f7240(void)

{
  return;
}



/* Entry: 1056f7244; end: 1056f7407; -[SCAuthenticationWorkflow _logApplicationLogout:] */

void FUN_1056f7244(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  func_0x00010c0b2e20(*(undefined8 *)(param_1 + 0x50),param_2,
                      &PTR____CFConstantStringClassReference_110df8658);
  lVar1 = param_3;
  func_0x00010c0b4900();
  if (lVar1 == 0) {
    lVar1 = -1;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0b4900(param_3);
  }
  func_0x00010bc999c8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd518;
  _objc_alloc_init(PTR_PTR_1126bd518);
  lVar3 = param_3;
  func_0x00010c073500(param_3);
  func_0x00010c19ea40(puVar2,param_2,lVar3);
  puVar4 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ada20(puVar2,param_2,puVar4);
  lVar3 = param_3;
  func_0x00010bfc2a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd1e0(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0b4900(param_3);
  func_0x00010c1c0ba0(puVar2,param_2,lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a10a0();
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126af378;
  func_0x00010c0b46c0(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056f7408; end: 1056f76ab; -[SCAuthenticationWorkflow _ensureSyncWriteIfNecessary:source:] */

void FUN_1056f7408(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf1f440(uVar1,param_3,&PTR____CFConstantStringClassReference_110df85d8,0,0);
  if ((int)uVar1 != 0) {
    _CACurrentMediaTime();
    dVar8 = param_1;
    func_0x00010c266b80(*(undefined8 *)(param_2 + 0x10));
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf10da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bd508;
    func_0x00010c265a20(PTR_PTR_1126bd508);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010befbfe0(uVar1,param_3,puVar3,(long)(dVar8 - param_1));
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126bd508;
    func_0x00010c266940(PTR_PTR_1126bd508);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c293740(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar3,param_3,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar2);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar3 == 0) {
      puVar5 = *(undefined **)(param_2 + 0x10);
      func_0x00010c293740(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_4;
      func_0x00010c2923e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c0720c0(puVar3,param_3,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
    else {
      puVar5 = param_4;
      func_0x00010c2923e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00(puVar7,param_3,puVar5);
    }
    _objc_release(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar7;
    func_0x00010c2ac460(puVar7,param_3,&PTR____CFConstantStringClassReference_110dae8d8,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf10da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056f76ac; end: 1056f7797; -[SCAuthenticationWorkflow .cxx_destruct] */

void FUN_1056f76ac(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056f7798; end: 1056f783b; -[SCFileBasedApplicationDataChecker initWithFileManager:highestProtection:] */

undefined1 *
FUN_1056f7798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9cf8;
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



/* Entry: 1056f783c; end: 1056f7843; -[SCFileBasedApplicationDataChecker isApplicationDataAvailable] */

void FUN_1056f783c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_isProtectedDataAvailable__1125fc790,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1056f7844; end: 1056f797b; -[SCFileBasedApplicationDataChecker isProtectedDataAvailable:] */

undefined ** FUN_1056f7844(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be15960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfacbe0(uVar2,param_2,lVar1);
  ppuVar6 = *(undefined ***)(param_1 + 8);
  lVar5 = lVar1;
  if ((uVar2 & 1) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110df8678;
    func_0x00010bf64920(&PTR____CFConstantStringClassReference_110df8678,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = *(undefined8 *)PTR__NSFileProtectionKey_110345438;
    uStack_40 = *(undefined8 *)PTR__NSFileProtectionCompleteUntilFirstUserAuthentication_110345430;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf561e0();
    _objc_release(puVar4);
    ppuVar7 = ppuVar6;
  }
  else {
    func_0x00010bf4df60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010c08fa60();
    ppuVar7 = (undefined **)(ulong)(ppuVar3 != (undefined **)0x0);
    ppuVar3 = ppuVar6;
  }
  _objc_release(ppuVar3);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  ppuVar6 = (undefined **)PTR_PTR_1126b7f60;
  _objc_retain(lVar5);
  func_0x00010bfccf20(ppuVar6,param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df8698);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  ppuVar3 = ppuVar6;
  func_0x00010c25ce00(ppuVar6,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return ppuVar3;
}



/* Entry: 1056f797c; end: 1056f7a2b; -[SCFileBasedApplicationDataChecker _filePathForProtectionType:] */

void FUN_1056f797c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7f60;
  _objc_retain(param_3);
  func_0x00010bfccf20(puVar1,param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df8698);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c25ce00(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056f7a2c; end: 1056f7a9b; -[SCFileBasedApplicationDataChecker .cxx_destruct] */

void FUN_1056f7a2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056f7a9c; end: 1056f7ac3; -[SCLegacyMigrationUserSessionRepository synchronize] */

/* WARNING: Possible PIC construction at 0x0001056f7ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001056f7ab4) */

void FUN_1056f7a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_synchronize_112677508);
  return;
}



/* Entry: 1056f7ac4; end: 1056f7b0b; -[SCLegacyMigrationUserSessionRepository .cxx_destruct] */

void FUN_1056f7ac4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056f7b0c; end: 1056f7b37; -[SCPreferencesBasedUserSessionRepository synchronize] */

void FUN_1056f7b0c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c266b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056f7b38; end: 1056f7c4f; -[SCPreferencesBasedUserSessionRepository _saveUserSessionToPreferences:] */

void FUN_1056f7b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c21e620();
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c21f760();
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c087b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1b73a0();
  _objc_release(lVar2);
  _objc_release(uVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010bf10a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c226860(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056f7c50; end: 1056f7c8b; -[SCPreferencesBasedUserSessionRepository _persistUITestUserSession:ifRequested:] */

void FUN_1056f7c50(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    func_0x00010be9a380();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c266b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1056f7c8c; end: 1056f7c93; -[SCPreferencesBasedUserSessionRepository _loadUITestUserSessionFromAppEnviroument] */

undefined8 FUN_1056f7c8c(void)

{
  return 0;
}



/* Entry: 1056f7c94; end: 1056f7ceb; -[SCPreferencesBasedUserSessionRepository .cxx_destruct] */

void FUN_1056f7c94(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1056f7cec; end: 1056f7d17; +[SCGrapheneAuthenticationMetric userSessionMissedWrite] */

void FUN_1056f7cec(void)

{
  _objc_alloc(PTR_PTR_1126bd520);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f7d18; end: 1056f7db7; -[SCGrapheneAuthenticationMetric description] */

void FUN_1056f7d18(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8718;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df8718,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9d10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1056f7db8; end: 1056f7de3; +[SCGrapheneAuthenticationWorkflowMetric doubleAuthentication] */

void FUN_1056f7db8(void)

{
  _objc_alloc(PTR_PTR_1126bd508);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f7de4; end: 1056f7e0f; +[SCGrapheneAuthenticationWorkflowMetric loginCleanup] */

void FUN_1056f7de4(void)

{
  _objc_alloc(PTR_PTR_1126bd508);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f7e10; end: 1056f7e3b; +[SCGrapheneAuthenticationWorkflowMetric syncWrite] */

void FUN_1056f7e10(void)

{
  _objc_alloc(PTR_PTR_1126bd508);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f7e3c; end: 1056f7e67; +[SCGrapheneAuthenticationWorkflowMetric sycnWriteLatency] */

void FUN_1056f7e3c(void)

{
  _objc_alloc(PTR_PTR_1126bd508);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f7e68; end: 1056f7f07; -[SCGrapheneAuthenticationWorkflowMetric description] */

void FUN_1056f7e68(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8798;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df8798,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9d18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1056f7f08; end: 1056f8067; -[SCGrapheneRegistry authenticationWorkflowGraphene] */

void FUN_1056f7f08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1056f7f90;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfaa0 != -1) {
    func_0x00010002a2fc(0x1136bfaa0,&puStack_48);
  }
  uVar1 = uRam00000001136bfa98;
  _objc_retain(uRam00000001136bfa98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056f8068; end: 1056f807f; -[SCPreferencesUITestUserSessionProvider initWithSnapTokenStore:] */

undefined8 FUN_1056f8068(void)

{
  _objc_release();
  return 0;
}



/* Entry: 1056f8080; end: 1056f8087; -[SCPreferencesUITestUserSessionProvider loadUITestUserSession] */

undefined8 FUN_1056f8080(void)

{
  return 0;
}



/* Entry: 1056f8088; end: 1056f80df;  */

void FUN_1056f8088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c0b4760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bd528;
  func_0x00010c0b4780(PTR_PTR_1126bd528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056f80e0; end: 1056f810b; +[SCGrapheneLogoutCleanupMetric logoutCleanupStarted] */

void FUN_1056f80e0(void)

{
  _objc_alloc(PTR_PTR_1126bd528);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f810c; end: 1056f8137; +[SCGrapheneLogoutCleanupMetric logoutCleanupCompleted] */

void FUN_1056f810c(void)

{
  _objc_alloc(PTR_PTR_1126bd528);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f8138; end: 1056f81d7; -[SCGrapheneLogoutCleanupMetric description] */

void FUN_1056f8138(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8838;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df8838,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9d20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1056f81d8; end: 1056f8323; -[SCGrapheneRegistry logoutCleanupGraphene] */

void FUN_1056f81d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1056f8260;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfab0 != -1) {
    func_0x00010002a2fc(0x1136bfab0,&puStack_48);
  }
  uVar1 = uRam00000001136bfaa8;
  _objc_retain(uRam00000001136bfaa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056f8324; end: 1056f834f; +[SCGrapheneLoginSignupMetric loginSignupStarted] */

void FUN_1056f8324(void)

{
  _objc_alloc(PTR_PTR_1126af378);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f8350; end: 1056f837b; +[SCGrapheneLoginSignupMetric loginStarted] */

void FUN_1056f8350(void)

{
  _objc_alloc(PTR_PTR_1126af378);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f837c; end: 1056f83a7; +[SCGrapheneLoginSignupMetric loginAttempt] */

void FUN_1056f837c(void)

{
  _objc_alloc(PTR_PTR_1126af378);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f83a8; end: 1056f83d3; +[SCGrapheneLoginSignupMetric loginCompleted] */

void FUN_1056f83a8(void)

{
  _objc_alloc(PTR_PTR_1126af378);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f83d4; end: 1056f83ff; +[SCGrapheneLoginSignupMetric loginFailed] */

void FUN_1056f83d4(void)

{
  _objc_alloc(PTR_PTR_1126af378);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f8400; end: 1056f842b; +[SCGrapheneLoginSignupMetric signupStarted] */

void FUN_1056f8400(void)

{
  _objc_alloc(PTR_PTR_1126af378);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f842c; end: 1056f8457; +[SCGrapheneLoginSignupMetric signupCreateAccount] */

void FUN_1056f842c(void)

{
  _objc_alloc(PTR_PTR_1126af378);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


