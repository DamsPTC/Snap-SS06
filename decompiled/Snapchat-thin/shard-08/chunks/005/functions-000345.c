/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061edfa0; end: 1061ee02f; +[SCLensInfoCardRemoteDataProvider _sourceInfoFromResponseSourceInfo:] */

void FUN_1061edfa0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c2475e0(param_3);
    func_0x00010bebe560(param_1,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c097040(param_3);
    _objc_release(param_3);
    func_0x00010be4bea0(param_1,param_2,lVar1);
    _objc_alloc(PTR_PTR_1126c8b70);
    func_0x00010c04a9c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061ee030; end: 1061ee03f; +[SCLensInfoCardRemoteDataProvider _sourceApplicationFromResponse:] */

long FUN_1061ee030(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 3) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 1061ee040; end: 1061ee057; +[SCLensInfoCardRemoteDataProvider _lensStudioMobileWebTypeFromResponse:] */

undefined8 FUN_1061ee040(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = 0;
  }
  if (param_3 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1061ee058; end: 1061ee067; +[SCLensInfoCardRemoteDataProvider _badgeContentFromResponseBadgeContent:] */

void FUN_1061ee058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_1109156a8);
  return;
}



/* Entry: 1061ee068; end: 1061ee147;  */

void FUN_1061ee068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c8b78;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf15540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2714a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfe5b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c092e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bff68c0(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061ee148; end: 1061ee253; +[SCLensInfoCardRemoteDataProvider _lensCreatorFromResponseLensCreator:] */

void FUN_1061ee148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126c8b80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c242760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c078f60(param_3);
  uVar6 = param_3;
  func_0x00010c242860(param_3);
  uVar7 = param_3;
  func_0x00010bf5b420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c00d560(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,(int)uVar6 == 2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061ee254; end: 1061ee3af; +[SCLensInfoCardRemoteDataProvider _infoCardActionsFromResponse:] */

undefined8 FUN_1061ee254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar2 = param_3;
  func_0x00010c094fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf127a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf980c0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c092080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf127c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf980c0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = puStack_68[3];
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1061ee3b0; end: 1061ee413;  */

void FUN_1061ee3b0(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 - 1U < 4) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(ulong *)(lVar1 + 0x18) =
         *(ulong *)(lVar1 + 0x18) | *(ulong *)(&UNK_10ddd9fb8 + (ulong)(param_2 - 1U) * 8);
  }
  return;
}



/* Entry: 1061ee414; end: 1061ee68b; +[SCLensInfoCardRemoteDataProvider _attachementFromResponseLensMetadata:] */

void FUN_1061ee414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd4380();
  if ((int)uVar1 == 0) {
    puVar11 = (undefined *)0x0;
    goto LAB_1061ee660;
  }
  uVar1 = param_3;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0d0a0();
  uVar8 = uVar1;
  if ((int)uVar2 == 1) {
    func_0x00010c2a3bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c8b88;
    uVar2 = uVar8;
    func_0x00010c2a4460();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c22dfc0(uVar8);
    uVar10 = uVar1;
    func_0x00010bf5d560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a4580(puVar11,param_2,uVar2,uVar9,uVar10);
    _objc_retainAutoreleasedReturnValue();
LAB_1061ee638:
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar8);
  }
  else {
    if ((int)uVar2 == 2) {
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010bfa0600();
      func_0x00010bdf8e20(param_1,param_2,uVar2);
      puVar11 = PTR_PTR_1126c8b88;
      uVar2 = uVar8;
      func_0x00010c28f280(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bf06520(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf052c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar3 = uVar8;
      func_0x00010c06aee0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c296d80();
      func_0x00010c0df7c0(puVar5,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x00010bf02ac0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010c2a3fa0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010bf5d560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf68400(puVar11,param_2,uVar2,uVar10,uVar9,puVar5,uVar4,uVar6,param_1,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar9);
      goto LAB_1061ee638;
    }
    puVar11 = (undefined *)0x0;
  }
  _objc_release(uVar1);
LAB_1061ee660:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1061ee68c; end: 1061ee69b; +[SCLensInfoCardRemoteDataProvider _deepLinkFallbackTypeFromResponseFallbackType:] */

ulong FUN_1061ee68c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_3;
  if (2 < param_3) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 1061ee69c; end: 1061ee6d7; -[SCLensInfoCardRemoteDataProvider .cxx_destruct] */

void FUN_1061ee69c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ee6d8; end: 1061ee6e3; +[SCLensInfoCardErrors errorDomain] */

undefined ** FUN_1061ee6d8(void)

{
  return &PTR____CFConstantStringClassReference_110e44cd8;
}



/* Entry: 1061ee6e4; end: 1061ee74b; +[SCLensInfoCardErrors requestNoLensIdsError] */

void FUN_1061ee6e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR_PTR_1126c8b90;
  func_0x00010bf98a40(PTR_PTR_1126c8b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110e44cf8,
                      0xfffffffffffffaeb);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061ee74c; end: 1061ee7b3; +[SCLensInfoCardErrors requestIncorrectResponseError] */

void FUN_1061ee74c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR_PTR_1126c8b90;
  func_0x00010bf98a40(PTR_PTR_1126c8b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110e44d18,
                      0xfffffffffffffaea);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061ee7b4; end: 1061ee81b; +[SCLensInfoCardErrors requestParsingResponseError] */

void FUN_1061ee7b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR_PTR_1126c8b90;
  func_0x00010bf98a40(PTR_PTR_1126c8b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110e44d38,
                      0xfffffffffffffae9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061ee81c; end: 1061ee883; +[SCLensInfoCardErrors requestUnknownFailureError] */

void FUN_1061ee81c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR_PTR_1126c8b90;
  func_0x00010bf98a40(PTR_PTR_1126c8b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110e44d58,
                      0xfffffffffffffae8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061ee884; end: 1061ee9b3; -[SCLensInfoCardGRPCRequestManager initWithLensInfoCardNetworkConfig:grpcClientFactory:performer:] */

undefined8 *
FUN_1061ee884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f0518;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    _objc_retain(param_5);
    uVar2 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1061ee9b4; end: 1061ee9cb;  */

void FUN_1061ee9b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be24d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bbcf8,PTR_s__grpcServiceWithNetworkConfig_gr_112566d00,
             *(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1061ee9cc; end: 1061ee9df; -[SCLensInfoCardGRPCRequestManager submitLensInfoCardRequestWithLensIds:contexts:successBlock:failureBlock:] */

void FUN_1061ee9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec61d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__submitLensInfoCardRequestWithLe_11258f218,param_3,0,param_4,param_5,
             param_6);
  return;
}



/* Entry: 1061ee9e0; end: 1061eeaeb; -[SCLensInfoCardGRPCRequestManager submitLensInfoCardRequestWithLensId:lensSource:contexts:successBlock:failureBlock:] */

void FUN_1061ee9e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = param_6;
  lVar1 = param_7;
  func_0x00010bec61c0(param_1);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain(uVar4);
    _objc_retain(lVar1);
    lVar5 = param_3;
    func_0x00010be365e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c2810e0();
    if (lVar3 == 0) {
      puVar2 = PTR_PTR_1126c8b90;
      func_0x00010c135f20(PTR_PTR_1126c8b90);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1,puVar2,0);
      }
      _objc_release(puVar2);
    }
    else {
      func_0x00010bec63e0(param_3);
    }
    _objc_release(lVar5);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1061eeaec; end: 1061eebc7; -[SCLensInfoCardGRPCRequestManager _submitLensInfoCardRequestWithLensIds:lensSource:contexts:successBlock:failureBlock:] */

void FUN_1061eeaec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 in_x5;
  long in_x6;
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  lVar1 = param_1;
  func_0x00010be365e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2810e0();
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126c8b90;
    func_0x00010c135f20(PTR_PTR_1126c8b90);
    _objc_retainAutoreleasedReturnValue();
    if (in_x6 != 0) {
      (**(code **)(in_x6 + 0x10))(in_x6,puVar3,0);
    }
    _objc_release(puVar3);
  }
  else {
    func_0x00010bec63e0(param_1);
  }
  _objc_release(lVar1);
  _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x5);
  return;
}



/* Entry: 1061eebc8; end: 1061eecef; +[SCLensInfoCardGRPCRequestManager _grpcServiceWithNetworkConfig:grpcClientFactory:performer:] */

void FUN_1061eebc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe4420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c196320(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c1eeba0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,30000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf56360(param_4,param_2,&PTR____CFConstantStringClassReference_110e44d78,puVar1,
                      param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126c8b98;
  _objc_alloc(PTR_PTR_1126c8b98);
  func_0x00010c058f80();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061eecf0; end: 1061eee8f; -[SCLensInfoCardGRPCRequestManager _callOptions] */

void FUN_1061eecf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c142220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar3,param_2,uVar2);
  _objc_release(uVar2);
  if ((int)puVar3 != 0) {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dadcb8;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c142220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_50 = uVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bef9140(puVar1,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126bbf90;
  func_0x00010c091f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_68 = puVar3;
  func_0x00010c091f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_68;
  uVar7 = 1;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = uVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_60);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bef9140(puVar1,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  _objc_retain(uVar7);
  _objc_retain(puVar5);
  puVar1 = puVar3;
  func_0x00010bdd8d40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar3 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1061eef9c;
  puStack_c8 = &UNK_1109156f8;
  uStack_c0 = uVar7;
  ppuStack_b8 = ppuVar6;
  _objc_retain(ppuVar6);
  _objc_retain(uVar7);
  func_0x00010c15ed40(uVar2,param_2,puVar5,puVar1,&puStack_e0);
  _objc_release(puVar5);
  _objc_release(ppuStack_b8);
  _objc_release(uStack_c0);
  _objc_release(ppuVar6);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1061eee90; end: 1061eef9b; -[SCLensInfoCardGRPCRequestManager _submitRequest:successBlock:failureBlock:] */

void FUN_1061eee90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdd8d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1061eef9c;
  puStack_58 = &UNK_1109156f8;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c15ed40(uVar2,param_2,param_3,lVar1,&puStack_70);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1061eef9c; end: 1061ef047;  */

void FUN_1061eef9c(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != (undefined *)0x0)) {
    if (param_3 == (undefined *)0x0) {
      param_3 = PTR_PTR_1126c8b90;
      func_0x00010c136e80(PTR_PTR_1126c8b90);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      puVar2 = param_3;
      func_0x00010bf3ec40(param_3);
      (**(code **)(lVar1 + 0x10))(lVar1,param_3,puVar2);
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    }
    param_3 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061ef048; end: 1061ef12b; -[SCLensInfoCardGRPCRequestManager _submitPerformerRequest:successBlock:failureBlock:] */

void FUN_1061ef048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061ef12c;
  puStack_68 = &UNK_1108451b8;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061ef12c; end: 1061ef13b;  */

void FUN_1061ef12c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec6510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__submitRequest_successBlock_fail_11258f2e8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1061ef13c; end: 1061ef20b; -[SCLensInfoCardGRPCRequestManager _httpRequestWithLensIds:lensSource:contexts:] */

void FUN_1061ef13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c8ba0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010bed1920(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21bc00(puVar1,param_2,uVar2);
  uVar3 = param_1;
  func_0x00010bde8680(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183620(puVar1,param_2,uVar3);
  func_0x00010bddbd00(param_1,param_2,param_4);
  func_0x00010c179b40(puVar1,param_2,param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061ef20c; end: 1061ef22f; -[SCLensInfoCardGRPCRequestManager _carouselLensSourceFromLensSource:] */

undefined4 FUN_1061ef20c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined4 *)(&UNK_10ddd9fe0 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 1061ef230; end: 1061ef353; -[SCLensInfoCardGRPCRequestManager _unlockablesIdsFromLensIds:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1061ef230(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  uVar6 = 0;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c8ba8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar4 = *(long *)(lVar9 * 8);
      func_0x00010c0b4ca0();
      if (lVar4 != 0) {
        func_0x00010befc800(puVar2,param_2,lVar4);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_3;
    uVar6 = 0;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126ae740;
    _objc_opt_new();
    uVar8 = (uint)uVar6;
    if ((uVar6 & 1) != 0) {
      func_0x00010befc800(puVar2,param_2,1);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      func_0x00010befc800(puVar2,param_2,2);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      func_0x00010befc800(puVar2,param_2,3);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      func_0x00010befc800(puVar2,param_2,4);
    }
    puVar5 = puVar2;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      func_0x00010befc800(puVar2,param_2,0);
      func_0x00010befc800(puVar2,param_2,4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061ef354; end: 1061ef3f7; -[SCLensInfoCardGRPCRequestManager _contextsEnumArrayForContexts:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1061ef354(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae740;
  _objc_opt_new();
  if ((param_3 & 1) != 0) {
    func_0x00010befc800(puVar1,param_2,1);
  }
  if ((param_3 >> 1 & 1) != 0) {
    func_0x00010befc800(puVar1,param_2,2);
  }
  if ((param_3 >> 2 & 1) != 0) {
    func_0x00010befc800(puVar1,param_2,3);
  }
  if ((param_3 >> 3 & 1) != 0) {
    func_0x00010befc800(puVar1,param_2,4);
  }
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010befc800(puVar1,param_2,0);
    func_0x00010befc800(puVar1,param_2,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061ef3f8; end: 1061ef433; -[SCLensInfoCardGRPCRequestManager .cxx_destruct] */

void FUN_1061ef3f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ef434; end: 1061ef5b3; -[SCLensInfoCardHTTPRequestManager submitLensInfoCardRequestWithLensIds:contexts:successBlock:failureBlock:] */

void FUN_1061ef434(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126bbd00;
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126c8b90;
    func_0x00010c135f20(PTR_PTR_1126c8b90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9f0a0(puVar3,param_2,puVar4,param_6);
  }
  else {
    puVar4 = param_1;
    func_0x00010bed1920(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf529e0();
    puVar3 = PTR_PTR_1126bbd00;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126c8b90;
      func_0x00010c135f20(PTR_PTR_1126c8b90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9f0a0(puVar3,param_2,puVar2,param_6);
    }
    else {
      puVar2 = PTR_PTR_1126ae740;
      _objc_opt_new(PTR_PTR_1126ae740);
      _objc_opt_class(param_1);
      func_0x00010be15c40();
      puVar3 = param_1;
      func_0x00010be36620(param_1,param_2,puVar4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec6500(param_1,param_2,puVar3,param_5,param_6);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061ef5b4; end: 1061ef797; -[SCLensInfoCardHTTPRequestManager submitLensInfoCardRequestWithLensId:lensSource:contexts:successBlock:failureBlock:] */

void FUN_1061ef5b4(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *unaff_x24;
  undefined8 uVar11;
  undefined *unaff_x26;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR_PTR_1126bbd00;
  uVar8 = param_7;
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126c8b90;
    func_0x00010c135f20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010be9f0a0(puVar2,param_2,puVar5);
    param_4 = puVar5;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bed1920(param_1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar3 = puVar5;
    func_0x00010bf529e0();
    puVar2 = PTR_PTR_1126bbd00;
    if (puVar3 == (undefined *)0x0) {
      unaff_x26 = PTR_PTR_1126c8b90;
      func_0x00010c135f20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = unaff_x26;
      func_0x00010be9f0a0(puVar2,param_2,unaff_x26);
    }
    else {
      unaff_x26 = PTR_PTR_1126ae740;
      _objc_opt_new();
      _objc_opt_class(param_1);
      func_0x00010be15c40();
      puVar4 = param_1;
      func_0x00010be36640(param_1,param_2,puVar5,param_4,unaff_x26);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      uVar8 = param_6;
      uVar9 = param_7;
      func_0x00010bec6500(param_1,param_2,puVar4);
      _objc_release(puVar4);
      puVar2 = param_1;
      param_4 = puVar4;
    }
    _objc_release(unaff_x26);
    unaff_x24 = puVar5;
  }
  _objc_release(puVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1061ef798;
  puStack_b0 = unaff_x26;
  uStack_a8 = param_5;
  puStack_a0 = unaff_x24;
  puStack_98 = param_4;
  puStack_90 = puVar2;
  uStack_88 = param_7;
  uStack_80 = param_6;
  lStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  lVar6 = lVar1;
  func_0x00010be36480(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(lVar1 + 0x30);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1061ef8f4;
  puStack_c8 = &UNK_11089e820;
  _objc_retain(uVar9);
  uStack_c0 = uVar9;
  _objc_retain(uVar8);
  uStack_b8 = uVar8;
  func_0x00010c25f600(uVar11,param_2,puVar3,lVar6,uVar7,&puStack_e0);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x20) = uVar11;
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _os_unfair_lock_unlock(lVar1 + 0x30);
  _objc_release(lVar6);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar3);
  return;
}



/* Entry: 1061ef798; end: 1061ef8f3; -[SCLensInfoCardHTTPRequestManager _submitRequest:successBlock:failureBlock:] */

void FUN_1061ef798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be36480(param_1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061ef8f4;
  puStack_68 = &UNK_11089e820;
  _objc_retain(param_5);
  uStack_60 = param_5;
  _objc_retain(param_4);
  uStack_58 = param_4;
  func_0x00010c25f600(uVar4,param_2,param_3,lVar1,uVar2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061ef8f4; end: 1061efa83;  */

/* WARNING: Removing unreachable block (ram,0x0001061ef9f0) */

void FUN_1061ef8f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_3 == 0) && (param_5 != 0)) && (param_6 == (undefined *)0x0)) {
    puVar2 = PTR_PTR_1126c8bb0;
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    puVar1 = PTR_PTR_1126bbd00;
    if (puVar2 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126c8b90;
      func_0x00010c1360e0(PTR_PTR_1126c8b90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9f0a0(puVar1);
      _objc_release(puVar5);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
      }
    }
    _objc_release(puVar2);
    _objc_release(0);
    param_6 = (undefined *)0x0;
  }
  else {
    if (param_6 == (undefined *)0x0) {
      param_6 = PTR_PTR_1126c8b90;
      func_0x00010c136e80(PTR_PTR_1126c8b90);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      uVar4 = param_4;
      func_0x00010c252ee0(param_4);
      (**(code **)(lVar3 + 0x10))(lVar3,param_6,uVar4);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1061efa84; end: 1061efba7; -[SCLensInfoCardHTTPRequestManager _unlockablesIdsFromLensIds:] */

void FUN_1061efa84(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puVar7;
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
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c8ba8;
  _objc_opt_new();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  puVar5 = auStack_c8;
  puVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_110,puVar5,0x10);
  if (puVar2 != (undefined *)0x0) {
    lVar6 = *plStack_100;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = *(long *)(lStack_108 + (long)puVar7 * 8);
        func_0x00010c0b4ca0();
        if (lVar3 != 0) {
          func_0x00010befc800(puVar1,param_2,lVar3);
        }
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar5 = auStack_c8;
      puVar2 = param_3;
      puVar4 = &uStack_110;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,puVar5,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126c8ba0;
    _objc_retain(puVar5);
    _objc_retain(puVar4);
    _objc_opt_new(puVar1);
    func_0x00010c21bc00();
    _objc_release(puVar4);
    func_0x00010c183620(puVar1,param_2,puVar5);
    _objc_release(puVar5);
    func_0x00010be365a0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061efba8; end: 1061efc3f; -[SCLensInfoCardHTTPRequestManager _httpRequestWithUnlockableIds:contexts:] */

void FUN_1061efba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8ba0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c21bc00();
  _objc_release(param_3);
  func_0x00010c183620(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010be365a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061efc40; end: 1061efcff; -[SCLensInfoCardHTTPRequestManager _httpRequestWithUnlockableIds:lensSource:contexts:] */

void FUN_1061efc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8ba0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c21bc00();
  _objc_release(param_3);
  uVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bea14e0();
  func_0x00010c179b40(puVar1,param_2,uVar2);
  func_0x00010c183620(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010be365a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061efd00; end: 1061eff13; -[SCLensInfoCardHTTPRequestManager _httpRequestWithInfoCardRequest:] */

void FUN_1061efd00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c094b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c142220();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bbf90;
  func_0x00010c091f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c091f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retain(uVar1);
  func_0x00010bf225e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010c2901c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061eff14; end: 1061eff5f;  */

void FUN_1061eff14(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010c2901c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061eff60; end: 1061f001b; -[SCLensInfoCardHTTPRequestManager _httpContext] */

void FUN_1061eff60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b5730;
  _objc_alloc(PTR_PTR_1126b5730);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  lVar4 = 0;
  func_0x00010c01b560(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001061f0030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x10))(lVar4,uVar3,0);
    return;
  }
  return;
}



/* Entry: 1061f001c; end: 1061f0037; +[SCLensInfoCardHTTPRequestManager _sendError:withFailureBlock:] */

void FUN_1061f001c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001061f0030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4,param_3,0);
    return;
  }
  return;
}



/* Entry: 1061f0038; end: 1061f005b; +[SCLensInfoCardHTTPRequestManager _serveInfoCardCarouselLensSourceFromLensSource:] */

undefined4 FUN_1061f0038(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined4 *)(&UNK_10ddd9fe0 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 1061f005c; end: 1061f00fb; +[SCLensInfoCardHTTPRequestManager _fillContextsEnumArray:contextsArray:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1061f005c(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if ((param_3 & 1) != 0) {
    func_0x00010befc800(param_4,param_2,1);
  }
  if ((param_3 >> 1 & 1) != 0) {
    func_0x00010befc800(param_4,param_2,2);
  }
  if ((param_3 >> 2 & 1) != 0) {
    func_0x00010befc800(param_4,param_2,3);
  }
  if ((param_3 >> 3 & 1) != 0) {
    func_0x00010befc800(param_4,param_2,4);
  }
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010befc800(param_4,param_2,0);
    func_0x00010befc800(param_4,param_2,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061f00fc; end: 1061f014f; -[SCLensInfoCardHTTPRequestManager .cxx_destruct] */

void FUN_1061f00fc(long param_1)

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



/* Entry: 1061f0150; end: 1061f017f; -[SCLensInfoCardNetworkConfig lensCoreVersion] */

void FUN_1061f0150(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbf90;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c091f60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c091fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_lensCoreVersionHeaderValue__1126021f8,uVar2);
  return;
}



/* Entry: 1061f0180; end: 1061f018b; -[SCLensInfoCardNetworkConfig host] */

void FUN_1061f0180(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110def498);
  return;
}



/* Entry: 1061f018c; end: 1061f019f; -[SCLensInfoCardNetworkConfig lensInfoPath] */

void FUN_1061f018c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_stringWithUTF8String__1126750c8,
             &UNK_10f36ec26);
  return;
}



/* Entry: 1061f01a0; end: 1061f01e3; -[SCLensInfoCardNetworkConfig routingTag] */

void FUN_1061f01a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1061f0214();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061f01e4; end: 1061f0213; -[SCLensInfoCardNetworkConfig .cxx_destruct] */

void FUN_1061f01e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061f0214; end: 1061f021f;  */

undefined ** FUN_1061f0214(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1061f0220; end: 1061f0293; -[UNISCULInfoCard initWithUnifiedGrpcService:] */

undefined1 * FUN_1061f0220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0530;
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



/* Entry: 1061f0294; end: 1061f0377; -[UNISCULInfoCard serveLensInfoCardWithRequest:callOptionsBuilder:handler:] */

void FUN_1061f0294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126c8bb0;
  _objc_opt_class(PTR_PTR_1126c8bb0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e44db8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061f0378; end: 1061f0383; -[UNISCULInfoCard .cxx_destruct] */

void FUN_1061f0378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061f0384; end: 1061f03ff;  */

undefined * FUN_1061f0384(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c33d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e44dd8,
                        &UNK_10ddd9ff0,&UNK_10ddda01c,5,FUN_1061f0400,0);
    do {
      if (puRam00000001136c33d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c33d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c33d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c33d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c33d8;
}



/* Entry: 1061f0400; end: 1061f040b;  */

bool FUN_1061f0400(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1061f040c; end: 1061f0487;  */

undefined * FUN_1061f040c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c33e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e44df8,
                        &UNK_10ddda030,&UNK_10ddda068,5,FUN_1061f0488,0);
    do {
      if (puRam00000001136c33e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c33e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c33e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c33e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c33e0;
}



/* Entry: 1061f0488; end: 1061f0493;  */

bool FUN_1061f0488(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1061f0494; end: 1061f0577; +[SCULInfoCardRequest descriptor] */

void FUN_1061f0494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c33e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad2e00,
                        &PTR____CFConstantStringClassReference_110e44e18,&PTR_DAT_113145860,
                        &PTR_DAT_113145878,4,0x20,0x1c);
    puRam00000001136c33e8 = puVar1;
  }
  return;
}



/* Entry: 1061f0578; end: 1061f0583;  */

bool FUN_1061f0578(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1061f0584; end: 1061f05ff;  */

undefined * FUN_1061f0584(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c33f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e44e58,
                        &UNK_10ddda0e8,&UNK_10ddda12c,3,FUN_1061f0600,0);
    do {
      if (puRam00000001136c33f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c33f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c33f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c33f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c33f8;
}



/* Entry: 1061f0600; end: 1061f060b;  */

bool FUN_1061f0600(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1061f060c; end: 1061f0687;  */

undefined * FUN_1061f060c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3400 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e44e78,
                        &UNK_10ddda138,&UNK_10ddda180,3,FUN_1061f0688,0);
    do {
      if (puRam00000001136c3400 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3400;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3400,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3400 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3400;
}



/* Entry: 1061f0688; end: 1061f0693;  */

bool FUN_1061f0688(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1061f0694; end: 1061f070f;  */

undefined * FUN_1061f0694(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3408 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e44e98,
                        &UNK_10ddda18c,&UNK_10ddda1b4,3,FUN_1061f0710,0);
    do {
      if (puRam00000001136c3408 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3408;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3408,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3408 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3408;
}



/* Entry: 1061f0710; end: 1061f071b;  */

bool FUN_1061f0710(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1061f071c; end: 1061f0783; +[SCULInfoCardResponse descriptor] */

void FUN_1061f071c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3410 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad2ea0,
                        &PTR____CFConstantStringClassReference_110e44eb8,&PTR_DAT_113145900,
                        &PTR_DAT_113145918,1,0x10,0x1c);
    puRam00000001136c3410 = puVar1;
  }
  return;
}



/* Entry: 1061f0784; end: 1061f07eb; +[SCULInfoCard descriptor] */

void FUN_1061f0784(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3418 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad3008,
                        &PTR____CFConstantStringClassReference_110e44ed8,&PTR_DAT_113145900,
                        &PTR_s_unlockableId_1131459d8,3,0x20,0x1c);
    puRam00000001136c3418 = puVar1;
  }
  return;
}



/* Entry: 1061f07ec; end: 1061f087f; +[SCULInfoCard_LensMetadata descriptor] */

undefined * FUN_1061f07ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3420 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad3030,
                        &PTR____CFConstantStringClassReference_110dffdd8,&PTR_DAT_113145900,
                        &PTR_DAT_113145c58,0xe,0x70,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ad3008);
    puRam00000001136c3420 = puVar1;
  }
  return puRam00000001136c3420;
}



/* Entry: 1061f0880; end: 1061f0913; +[SCULInfoCard_LensCreator descriptor] */

undefined * FUN_1061f0880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3428 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad3058,
                        &PTR____CFConstantStringClassReference_110e44ef8,&PTR_DAT_113145900,
                        &PTR_s_displayName_113145a98,7,0x30,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ad3008);
    puRam00000001136c3428 = puVar1;
  }
  return puRam00000001136c3428;
}



/* Entry: 1061f0914; end: 1061f09af; +[SCULInfoCard_Attachment descriptor] */

undefined * FUN_1061f0914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3430 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad3080,
                        &PTR____CFConstantStringClassReference_110dcb6d8,&PTR_DAT_113145900,
                        &PTR_DAT_113145a38,3,0x20,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ad3008);
    puRam00000001136c3430 = puVar1;
  }
  return puRam00000001136c3430;
}



/* Entry: 1061f09b0; end: 1061f0a43; +[SCULInfoCard_Attachment_WebView descriptor] */

undefined * FUN_1061f09b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3438 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad30a8,
                        &PTR____CFConstantStringClassReference_110e44f18,&PTR_DAT_113145900,
                        &PTR_DAT_113145958,2,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ad3080);
    puRam00000001136c3438 = puVar1;
  }
  return puRam00000001136c3438;
}



/* Entry: 1061f0a44; end: 1061f0ad7; +[SCULInfoCard_Attachment_DeepLink descriptor] */

undefined * FUN_1061f0a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3440 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad30d0,
                        &PTR____CFConstantStringClassReference_110df1138,&PTR_DAT_113145900,
                        &PTR_s_uri_113145b78,7,0x38,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ad3080);
    puRam00000001136c3440 = puVar1;
  }
  return puRam00000001136c3440;
}



/* Entry: 1061f0ad8; end: 1061f0b5b; +[SCULInfoCard_LensStats descriptor] */

undefined * FUN_1061f0ad8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3448 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad30f8,
                        &PTR____CFConstantStringClassReference_110e44f38,&PTR_DAT_113145900,
                        &PTR_DAT_113145938,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c3448 = puVar1;
  }
  return puRam00000001136c3448;
}



/* Entry: 1061f0b5c; end: 1061f0bdf; +[SCULInfoCard_LensBadges descriptor] */

undefined * FUN_1061f0b5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3450 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad3120,
                        &PTR____CFConstantStringClassReference_110e44f58,&PTR_DAT_113145900,
                        &PTR_DAT_113145998,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c3450 = puVar1;
  }
  return puRam00000001136c3450;
}



/* Entry: 1061f0be0; end: 1061f0daf; -[SCFeatureImagineLensSideButtonImpl initWithLensCarouselOnCameraScopeDataProvider:imagineLensService:memoriesSideButtonLazyRef:cameraUIServices:renderTarget:showAtLaunch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061f0be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f0538;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112742cc8;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_3;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112742ccc) = 1;
    lVar5 = (long)_DAT_112742cd0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_4;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112742cd4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112742cd8);
    *(undefined **)((long)puVar2 + (long)_DAT_112742cd8) = puVar4;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112742cdc;
    *(undefined8 *)((long)puVar2 + lVar5) = 0x4053000000000000;
    lVar6 = (long)_DAT_112742ce0;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_6;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112742ce4;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_7;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112742ce8) = param_8;
    uVar3 = param_5;
    func_0x00010c071800();
    if ((int)uVar3 != 0) {
      *(double *)((long)puVar2 + lVar5) = *(double *)((long)puVar2 + lVar5) + 54.0;
    }
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112742cec);
    uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar3;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1061f0db0; end: 1061f0ecf; -[SCFeatureImagineLensSideButtonImpl _observeScroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f0db0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar5 = (long)_DAT_112742cf0;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar5));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742cc8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c090920();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1061f0ed0; end: 1061f0f1f;  */

void FUN_1061f0ed0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be4a580(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061f0f20; end: 1061f115f; -[SCFeatureImagineLensSideButtonImpl _observeSideButtonAvailability] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f0f20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742cd0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe9ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1061f1160;
  puStack_88 = &UNK_110857828;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((*(byte *)(param_1 + _DAT_112742ce8) & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010bfe9c00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1061f1160; end: 1061f1207;  */

void FUN_1061f1160(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bed9880(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061f1208; end: 1061f1373; -[SCFeatureImagineLensSideButtonImpl _observeMemoriesHiddenForActiveLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f1208(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar7 = (long)_DAT_112742cd4;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c071800();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe13e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e0ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 1061f1374; end: 1061f13d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f1374(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_112742cf4) = (char)uVar1;
    func_0x00010bdcee20(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061f13d4; end: 1061f1413; -[SCFeatureImagineLensSideButtonImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f13d4(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112742cc4) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112742cc4) = 1;
  func_0x00010be66d80();
                    /* WARNING: Could not recover jumptable at 0x00010be66610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeMemoriesHiddenForActiveL_112577320);
  return;
}



/* Entry: 1061f1414; end: 1061f14a7; -[SCFeatureImagineLensSideButtonImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f1414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_5 + _DAT_112742cf8);
  *(undefined8 *)(param_5 + _DAT_112742cf8) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar2);
  func_0x00010beb1380(param_5);
  puVar1 = (undefined8 *)(param_5 + _DAT_112742cec);
  uVar2 = param_7;
  func_0x00010bf2bb60(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c08cd20(uVar2);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061f14a8; end: 1061f155b; -[SCFeatureImagineLensSideButtonImpl _updateImagineLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f14a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112742cfc;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = param_3;
    _objc_release(uVar3);
    func_0x00010beb1380(param_1);
    func_0x00010be66c20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061f155c; end: 1061f156b; -[SCFeatureImagineLensSideButtonImpl _updateVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f155c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112742ccc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdcee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyVisibility_112551528);
  return;
}



/* Entry: 1061f156c; end: 1061f15a7; -[SCFeatureImagineLensSideButtonImpl _applyVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f156c(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + _DAT_112742ccc) == '\x01') {
    bVar1 = *(byte *)(param_1 + _DAT_112742cf4);
  }
  else {
    bVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742d00),PTR_s_setHidden__1126479f8,bVar1 & 1);
  return;
}



/* Entry: 1061f15a8; end: 1061f18b3; -[SCFeatureImagineLensSideButtonImpl _setupViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f15a8(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112742ce8;
  lVar11 = *(long *)(param_2 + _DAT_112742cf8);
  lVar12 = lVar11;
  if (*(char *)(param_2 + lVar13) != '\x01') {
    if (lVar11 == 0) goto LAB_1061f1874;
    lVar12 = *(long *)(param_2 + _DAT_112742cfc);
  }
  if ((lVar12 != 0) && (lVar12 = (long)_DAT_112742d00, *(long *)(param_2 + lVar12) == 0)) {
    _objc_retain(lVar11);
    lVar2 = param_2;
    func_0x00010bf58e80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + lVar12);
    *(long *)(param_2 + lVar12) = lVar2;
    _objc_release(uVar9);
    lVar2 = lVar11;
    func_0x00010bfe12e0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar12));
    if (*(char *)(param_2 + lVar13) == '\x01') {
      *(undefined1 *)(param_2 + _DAT_112742ccc) = 1;
    }
    func_0x00010bdcee20(param_2);
    uVar3 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010bf2b240(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar13;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf493c0(-*(double *)(param_2 + _DAT_112742cdc));
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + _DAT_112742d04);
    *(undefined8 *)(param_2 + _DAT_112742d04) = uVar9;
    _objc_release(uVar10);
    _objc_release(lVar2);
    _objc_release(lVar13);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar13;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 40.0;
    uVar10 = uVar6;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar7;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar7);
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(lVar2);
    _objc_release(lVar13);
    _objc_release(uVar4);
    _objc_release();
    param_2 = lVar11;
  }
LAB_1061f1874:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    lVar11 = (long)_DAT_112742d04;
    func_0x00010bf49220(*(undefined8 *)(param_2 + lVar11));
    lVar12 = (long)_DAT_112742cdc;
    dVar14 = *(double *)(param_2 + lVar12);
    dVar15 = -dVar14;
    func_0x00010bf4cdc0(param_4);
    dVar15 = dVar15 - dVar14;
    func_0x00010c181140(*(undefined8 *)(param_2 + lVar11));
    func_0x00010bf49220(*(undefined8 *)(param_2 + lVar11));
    if (ABS(param_1 - dVar15) <= *(double *)(param_2 + lVar12) * 0.5) {
      func_0x00010c23b640(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbf40();
      _objc_release(param_2);
    }
    else {
      _objc_initWeak(auStack_e8,param_2);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_copyWeak(auStack_f0,auStack_e8);
      func_0x00010bf03440(0x3fc999999999999a,0,puVar1);
      _objc_destroyWeak(auStack_f0);
      _objc_destroyWeak(auStack_e8);
    }
    _objc_release(param_4);
    return;
  }
  return;
}



/* Entry: 1061f18b4; end: 1061f1a13; -[SCFeatureImagineLensSideButtonImpl _lensCarouselDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f18b4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112742d04;
  func_0x00010bf49220(*(undefined8 *)(param_2 + lVar3));
  lVar2 = (long)_DAT_112742cdc;
  dVar4 = *(double *)(param_2 + lVar2);
  dVar5 = -dVar4;
  func_0x00010bf4cdc0(param_4);
  dVar5 = dVar5 - dVar4;
  func_0x00010c181140(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf49220(*(undefined8 *)(param_2 + lVar3));
  if (ABS(param_1 - dVar5) <= *(double *)(param_2 + lVar2) * 0.5) {
    func_0x00010c23b640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbf40();
    _objc_release(param_2);
  }
  else {
    _objc_initWeak(auStack_48,param_2);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf03440(0x3fc999999999999a,0,puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1061f1a14; end: 1061f1a7f;  */

void FUN_1061f1a14(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c23b640(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061f1a80; end: 1061f1cbb; -[SCFeatureImagineLensSideButtonImpl _onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f1a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112742cfc;
  if (*(long *)(param_1 + lVar6) != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742ce4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c29f120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    iVar2 = (int)uVar3;
    puVar1 = (undefined8 *)(param_1 + _DAT_112742cec);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    uVar12 = puVar1[2];
    uVar13 = puVar1[3];
    uVar3 = uVar10;
    uVar7 = uVar11;
    uVar8 = uVar12;
    uVar9 = uVar13;
    _CGRectIsEmpty(uVar10,uVar11,uVar12,uVar13);
    if (iVar2 != 0) {
      func_0x00010bfb68e0(uVar4);
      uVar10 = uVar3;
      uVar11 = uVar7;
      uVar12 = uVar8;
      uVar13 = uVar9;
    }
    _objc_initWeak(auStack_88,param_1);
    puVar5 = PTR_PTR_1126c8618;
    _objc_alloc(PTR_PTR_1126c8618);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c094540(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1061f1cbc;
    puStack_98 = &UNK_110911990;
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_copyWeak(auStack_b8,auStack_88);
    func_0x00010c0248e0(uVar10,uVar11,uVar12,uVar13,puVar5);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742cd0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158ac0();
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1061f1cbc; end: 1061f1df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f1cbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742ce0);
    func_0x00010bf2b640(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf4b340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar3 = uVar2;
    func_0x00010bf2bb60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1061f1df8; end: 1061f1ea3; -[SCFeatureImagineLensSideButtonImpl createSideButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f1df8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112742cd4;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bfa1820(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2345c0();
      _objc_release(uVar3);
    }
  }
  puVar4 = PTR_PTR_1126c8bb8;
  _objc_alloc(PTR_PTR_1126c8bb8);
  func_0x00010c0465a0();
  func_0x00010befbd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1061f1ea4; end: 1061f1eb3; -[SCFeatureImagineLensSideButtonImpl sideButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061f1ea4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742d00);
}



/* Entry: 1061f1eb4; end: 1061f1f83; -[SCFeatureImagineLensSideButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f1eb4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742d00,0);
  _objc_storeStrong(param_1 + _DAT_112742ce4,0);
  _objc_storeStrong(param_1 + _DAT_112742ce0,0);
  _objc_storeStrong(param_1 + _DAT_112742cf8,0);
  _objc_storeStrong(param_1 + _DAT_112742cfc,0);
  _objc_storeStrong(param_1 + _DAT_112742cd0,0);
  _objc_storeStrong(param_1 + _DAT_112742cf0,0);
  _objc_storeStrong(param_1 + _DAT_112742cd8,0);
  _objc_storeStrong(param_1 + _DAT_112742cd4,0);
  _objc_storeStrong(param_1 + _DAT_112742cc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742d04,0);
  return;
}



/* Entry: 1061f1f84; end: 1061f1ff3; -[SCImagineLensSideButton initWithShowTextLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1061f1f84(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  *(undefined1 *)(param_1 + _DAT_112742d08) = param_3;
  puStack_28 = PTR_PTR_1126f0540;
  lStack_30 = param_1;
  _objc_msgSendSuper2(0,0,0x4044000000000000,0x4044000000000000,&lStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (plVar1 != (long *)0x0) {
    func_0x00010beb14e0(plVar1);
  }
  return (undefined1 *)plVar1;
}



/* Entry: 1061f1ff4; end: 1061f24ab; -[SCImagineLensSideButton _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f1ff4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x403e000000000000,0x403e000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  lVar16 = (long)_DAT_112742d0c;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar14);
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (*(char *)(param_1 + _DAT_112742d08) == '\x01') {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar15 = (long)_DAT_112742d10;
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar1;
    _objc_release(uVar14);
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar15));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar15));
    _objc_release(puVar1);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c165e20(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
    func_0x00010befbb60(param_1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = *(long *)(param_1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar11);
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(lVar7);
    _objc_release(uVar10);
    _objc_release(uVar14);
    _objc_release(lVar5);
    _objc_release(uVar8);
    _objc_release(lVar4);
    _objc_release(uVar6);
    _objc_release(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + _DAT_112742d10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + _DAT_112742d0c,0);
  return;
}



/* Entry: 1061f24ac; end: 1061f24eb; -[SCImagineLensSideButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061f24ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742d10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742d0c,0);
  return;
}



/* Entry: 1061f24ec; end: 1061f2867; -[SCFeatureLensSideButtonImpl initWithCameraViewType:viewControllerLifecycleEvents:lensSideButtonLogger:studySettingsProvider:circumstanceEngine:countryCodeRepository:preferences:resourceDownloader:featureSettingsService:lensCarouselManager:postModeConfiguration:lensCarouselConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1061f24ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126f0548;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112742d18) = param_3;
    lVar4 = (long)_DAT_112742d1c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742d20;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742d24;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742d28;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742d2c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742d30;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742d34;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742d38;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742d3c;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1061f2868;
    puStack_a0 = &UNK_11084e590;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar2 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742d40);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112742d40) = uVar2;
    _objc_release(uVar3);
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c297280(param_12);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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
  return puVar1;
}


