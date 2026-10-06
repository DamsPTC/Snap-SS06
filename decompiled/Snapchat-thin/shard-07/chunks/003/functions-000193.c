/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053887c8; end: 1053888ff;  */

void FUN_1053887c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf98a40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar4 + 0x20,0);
  _objc_storeStrong(puVar4 + 0x18,0);
  _objc_storeStrong(puVar4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar4 + 8,0);
  return;
}



/* Entry: 105388900; end: 105388993; -[SCArgosCallback .cxx_destruct] */

void FUN_105388900(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105388994; end: 105388bef; -[SCArgosClient _createNativeClientWithTokenProvider:blizzardLogger:circumstanceEngine:argosConfig:] */

void FUN_105388994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = PTR_PTR_1126b7e88;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c000dc0();
  puVar2 = PTR_PTR_1126b7e90;
  _objc_alloc(PTR_PTR_1126b7e90);
  func_0x00010c053f60();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b7e98;
  _objc_alloc(PTR_PTR_1126b7e98);
  func_0x00010bff8640();
  _objc_release(param_5);
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar4,param_2,20000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar4,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar4,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b7ea0;
  _objc_alloc(PTR_PTR_1126b7ea0);
  puVar6 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_6;
  func_0x00010bfcb7a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar8 = uVar7;
  func_0x00010bf51e00(uVar7);
  func_0x00010c0195e0(puVar5,param_2,puVar6,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  puVar9 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar6 = PTR_PTR_1126b7ea8;
  puVar10 = PTR_PTR_1126b4ec0;
  _objc_alloc(PTR_PTR_1126b4ec0);
  func_0x00010c034960();
  func_0x00010bf56a00(puVar6,param_2,puVar1,puVar5,puVar2,puVar3,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105388bf0; end: 105388ca3; -[SCArgosClient getAttestationHeaders:requestPath:isLogin:requestId:argosMode:] */

void FUN_105388bf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfc2920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105388ca4; end: 105388d2b; -[SCArgosClient getArgosTokenAsync:requestId:callback:] */

void FUN_105388ca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc2720();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105388d2c; end: 105388d33; -[SCArgosClient argosNativeClient] */

undefined8 FUN_105388d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105388d34; end: 105388d3f; -[SCArgosClient .cxx_destruct] */

void FUN_105388d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105388d40; end: 105388df3; -[SCArgosImpl generateAttestationPayload:requestParameters:] */

void FUN_105388d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7e50;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1ebf60();
  _objc_release(param_3);
  func_0x00010c1ebf00(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1ec220(puVar1,param_2,4);
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104b30cdc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105388df4; end: 105388dfb; -[SCArgosImpl grapheneRegistry] */

undefined8 FUN_105388df4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105388dfc; end: 105388e03; -[SCArgosImpl argosClient] */

undefined8 FUN_105388dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105388e04; end: 105388e0b; -[SCArgosImpl argosConfig] */

undefined8 FUN_105388e04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105388e0c; end: 105388e13; -[SCArgosImpl touchTracker] */

undefined8 FUN_105388e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105388e14; end: 105388e5b; -[SCArgosImpl .cxx_destruct] */

void FUN_105388e14(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105388e5c; end: 105388f6b; -[SCPreLoginAttestationImpl initWithBlizzardLogger:grapheneRegistry:] */

undefined1 *
FUN_105388e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e7c80;
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
    puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c267460();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105388f6c; end: 105388f73; -[SCPreLoginAttestationImpl generateAttestationPayloadForLogin:requestPath:] */

void FUN_105388f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbf030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_generateAttestationPayloadForLog_1125cd5b0,param_3,param_4,1);
  return;
}



/* Entry: 105388f74; end: 105388f7b; -[SCPreLoginAttestationImpl generateAttestationPayloadForRegister:requestPath:] */

void FUN_105388f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbf030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_generateAttestationPayloadForLog_1125cd5b0,param_3,param_4,2);
  return;
}



/* Entry: 105388f7c; end: 10538902f; -[SCPreLoginAttestationImpl generateAttestationPayloadForLoginOrRegistration:requestPath:requestType:] */

void FUN_105388f7c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_5);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010be1d000(param_2,param_3,0,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c26f3a0(puVar1);
  uVar3 = param_2;
  func_0x00010be1f6c0(param_2);
  func_0x00010be56e80(-param_1,param_2,param_3,uVar3,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105389030; end: 1053890ef; -[SCPreLoginAttestationImpl _getAttestationPayload:path:requestType:] */

void FUN_105389030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_PTR_1126b7e50;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1ec1c0();
  _objc_release(param_3);
  func_0x00010c1ebf60(puVar1,param_2,param_4);
  _objc_release(param_4);
  uVar4 = 2;
  if (param_5 != 1) {
    uVar4 = 3;
  }
  func_0x00010c1ec220(puVar1,param_2,uVar4);
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104b30cdc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1053890f0; end: 1053890f3; -[SCPreLoginAttestationImpl _getGeneratedPayloadCount] */

undefined8 FUN_1053890f0(void)

{
  return uRam00000001136a2ca0;
}



/* Entry: 1053890f4; end: 10538924b; -[SCPreLoginAttestationImpl _logPayloadCreationEvent:requestCount:requestType:] */

void FUN_1053890f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b7ec0;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c1d9ac0(param_1);
  func_0x00010c1d9aa0(param_1,puVar1);
  func_0x00010c1ec020(puVar1,param_3,param_4);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2b40();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b7e80;
  func_0x00010bfbefc0(PTR_PTR_1126b7e80);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110dd5c18,
                      *(undefined8 *)(param_2 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf0dca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10538924c; end: 105389253; -[SCPreLoginAttestationImpl userNotTrackedLogger] */

undefined8 FUN_10538924c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105389254; end: 10538925b; -[SCPreLoginAttestationImpl grapheneRegistry] */

undefined8 FUN_105389254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10538925c; end: 105389263; -[SCPreLoginAttestationImpl metricFriendlyOsVersion] */

undefined8 FUN_10538925c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105389264; end: 10538929f; -[SCPreLoginAttestationImpl .cxx_destruct] */

void FUN_105389264(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053892a0; end: 1053892cb; +[SCGrapheneAttestationMetric createArgosConfig] */

void FUN_1053892a0(void)

{
  _objc_alloc(PTR_PTR_1126b7e80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053892cc; end: 1053892f7; +[SCGrapheneAttestationMetric generateAttestationPayload] */

void FUN_1053892cc(void)

{
  _objc_alloc(PTR_PTR_1126b7e80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053892f8; end: 105389397; -[SCGrapheneAttestationMetric description] */

void FUN_1053892f8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd5c58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd5c58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e7c88;
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



/* Entry: 105389398; end: 10538940f; -[SCNClientAttestationArgosClient initWithCpp:] */

undefined1 * FUN_105389398(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7c90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000105389b74();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000105389b24(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105389410; end: 105389637; +[SCNClientAttestationArgosClient createInstance:config:authContextDelegate:platformBlizzardLogger:dispatchQueue:] */

void FUN_105389410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  long lStack_168;
  long lStack_160;
  undefined **appuStack_70 [2];
  long lStack_60;
  long lStack_58;
  
  func_0x000105389bc0();
  func_0x000105389bac();
  func_0x000105389ba4();
  _objc_retain(param_6);
  _objc_retain(param_7);
  FUN_10538b17c(appuStack_70,param_3);
  FUN_10538a490(&lStack_168,param_4);
  func_0x000100459fd0(auStack_178,param_5);
  FUN_105389cb4(auStack_188,param_6);
  func_0x00010049e05c(auStack_198,param_7);
  FUN_10538b91c(&lStack_60,appuStack_70,&lStack_168,auStack_178,auStack_188,auStack_198);
  func_0x000100554470(auStack_198);
  func_0x000105389b00(auStack_188);
  func_0x00010048b850(auStack_178);
  func_0x000105389960(&lStack_168);
  func_0x000105389adc(appuStack_70);
  if (lStack_60 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_70[0] = &PTR_DAT_11087ec80;
    lStack_168 = lStack_60;
    lStack_160 = lStack_58;
    if (lStack_58 != 0) {
      do {
        func_0x000105389b74();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_70;
    func_0x00010015c218(pppuVar1,&lStack_168,FUN_105389a68);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000df524(&lStack_168);
  }
  func_0x000105389b24(&lStack_60);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x0001005ad840();
  func_0x000105389b6c();
  func_0x0001005ae190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 105389638; end: 1053897a3; -[SCNClientAttestationArgosClient getAttestationHeaders:requestPath:isLogin:requestId:argosMode:] */

void FUN_105389638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  func_0x000105389bc0();
  func_0x000105389bac();
  func_0x000105389ba4();
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x000100114864(auStack_78,param_3);
  func_0x0001000fbca4(auStack_90,param_4);
  func_0x0001000fbca4(auStack_a8,param_6);
  (**(code **)(*plVar2 + 0x10))(auStack_58,plVar2,auStack_78,auStack_90,param_5,auStack_a8,param_7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  func_0x0001001148fc(auStack_78);
  puVar1 = auStack_58;
  func_0x0001005ad514(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005ad2a8(auStack_58);
  func_0x0001005ad840();
  func_0x000105389b6c();
  func_0x0001005ae190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053897a4; end: 1053898cb; -[SCNClientAttestationArgosClient getArgosTokenAsync:requestId:callback:] */

void FUN_1053897a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000105389bc0();
  func_0x000105389bac();
  func_0x000105389ba4();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_58,param_3);
  func_0x0001000fbca4(auStack_70,param_4);
  FUN_10538a0b8(auStack_80,param_5);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_58,auStack_70,auStack_80);
  func_0x000105389b48(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x0001005ad840();
  func_0x000105389b6c();
  func_0x0001005ae190();
  return;
}



/* Entry: 1053898cc; end: 10538991f; -[SCNClientAttestationArgosClient .cxx_destruct] */

void FUN_1053898cc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_11087ec80;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105389b24((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105389920; end: 105389987; -[SCNClientAttestationArgosClient .cxx_construct] */

undefined8 * FUN_105389920(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000105389b74();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105389988; end: 1053899a7;  */

void FUN_105389988(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1053899a8();
  }
  return;
}



/* Entry: 1053899a8; end: 105389a2f;  */

long FUN_1053899a8(long param_1)

{
  func_0x0001053899d0(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_105389a30(param_1,0);
  return param_1;
}



/* Entry: 105389a30; end: 105389a47;  */

void FUN_105389a30(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105389a48; end: 105389a67;  */

void FUN_105389a48(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    func_0x000100469c34();
  }
  return;
}



/* Entry: 105389a68; end: 105389adb;  */

void FUN_105389a68(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b7ea8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000105389b74();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000105389b24(&uStack_30);
  return;
}



/* Entry: 105389adc; end: 105389b6b;  */

void FUN_105389adc(long param_1)

{
  func_0x000105389bc8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105389b6c; end: 105389bd3;  */

void FUN_105389b6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105389bd4; end: 105389ca7;  */

void FUN_105389bd4(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_PTR_1126b7ec8;
  _objc_alloc(PTR_PTR_1126b7ec8);
  iVar1 = *param_1;
  piVar4 = param_1 + 2;
  func_0x0001001011a4(piVar4);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = param_1[8];
  uVar6 = *(undefined8 *)(param_1 + 10);
  piVar5 = param_1 + 0xc;
  func_0x0001001011a4(piVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c520(puVar3,param_2,(long)iVar1,piVar4,(long)iVar2,uVar6,piVar5,(char)param_1[0x12]
                      ,*(undefined8 *)(param_1 + 0x14),*(undefined8 *)(param_1 + 0x16));
  FUN_105389ca8();
  _objc_release(piVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105389ca8; end: 105389cb3;  */

void FUN_105389ca8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105389cb4; end: 105389d6b;  */

void FUN_105389cb4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_11087ece8;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_105389d6c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10538a020(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105389d6c; end: 105389e67;  */

void FUN_105389d6c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_11087ed28;
  puVar4[3] = &PTR_DAT_11087eda8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_11087ed78;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10538a020(&uStack_50);
  return;
}



/* Entry: 105389e68; end: 105389e6b;  */

void FUN_105389e68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087ed28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105389e6c; end: 105389e7f;  */

void FUN_105389e6c(void)

{
  FUN_10538a010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105389e80; end: 105389e8b;  */

long FUN_105389e80(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_11087ece8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 105389e8c; end: 105389ecb;  */

void FUN_105389e8c(void)

{
  func_0x00010538a074();
  return;
}



/* Entry: 105389ecc; end: 105389f23;  */

void FUN_105389ecc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010538a068();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_105389bd4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a11a0(uVar1,param_2,unaff_x20);
  func_0x00010538a04c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105389f24; end: 105389f7b;  */

void FUN_105389f24(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010538a068();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_10538a080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a11c0(uVar1,param_2,unaff_x20);
  func_0x00010538a04c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105389f7c; end: 10538a00f;  */

long FUN_105389f7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_11087ece8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10538a010; end: 10538a01f;  */

void FUN_10538a010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087ed28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538a020; end: 10538a04b;  */

long FUN_10538a020(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10538a04c; end: 10538a07f;  */

void FUN_10538a04c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10538a080; end: 10538a0b7;  */

void FUN_10538a080(void)

{
  _objc_alloc(PTR_PTR_1126b7ed0);
  func_0x00010c01f960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10538a0b8; end: 10538a16f;  */

void FUN_10538a0b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_11087ee20;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10538a170);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10538a43c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10538a170; end: 10538a26b;  */

void FUN_10538a170(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_11087ee60;
  puVar4[3] = &PTR_DAT_11087eee0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_11087eeb0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10538a43c(&uStack_50);
  return;
}



/* Entry: 10538a26c; end: 10538a26f;  */

void FUN_10538a26c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087ee60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538a270; end: 10538a283;  */

void FUN_10538a270(void)

{
  FUN_10538a42c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538a284; end: 10538a28f;  */

long FUN_10538a284(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_11087ee20;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10538a290; end: 10538a2cf;  */

void FUN_10538a290(void)

{
  func_0x00010538a478();
  return;
}



/* Entry: 10538a2d0; end: 10538a337;  */

void FUN_10538a2d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001005ad514(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6d60(uVar2);
  FUN_10538a468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10538a338; end: 10538a397;  */

void FUN_10538a338(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bcc1ca8(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3f00(uVar2);
  FUN_10538a468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10538a398; end: 10538a42b;  */

long FUN_10538a398(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_11087ee20;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10538a42c; end: 10538a43b;  */

void FUN_10538a42c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087ee60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538a43c; end: 10538a467;  */

long FUN_10538a43c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10538a468; end: 10538a48f;  */

void FUN_10538a468(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10538a490; end: 10538a56f;  */

void FUN_10538a490(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_138 [48];
  undefined1 auStack_108 [200];
  
  _objc_retain();
  func_0x00010bfcfa60(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10538a570(auStack_108);
  func_0x00010c27d8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10538a5d4(auStack_138);
  FUN_10538a638(param_1,auStack_108,auStack_138);
  FUN_105389988(auStack_138);
  _objc_release(param_2);
  FUN_105389a48(auStack_108);
  func_0x00010538b150();
  func_0x00010538b120();
  return;
}



/* Entry: 10538a570; end: 10538a5d3;  */

void FUN_10538a570(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_e0 [192];
  
  func_0x00010538b130();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0xc0] = 0;
  }
  else {
    func_0x00010061b09c(auStack_e0);
    FUN_10538a790();
    func_0x000100469c34(auStack_e0);
  }
  func_0x00010538b120();
  return;
}



/* Entry: 10538a5d4; end: 10538a637;  */

void FUN_10538a5d4(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_48 [40];
  
  func_0x00010538b130();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x28] = 0;
  }
  else {
    FUN_10538a7ac(auStack_48);
    FUN_10538b104();
    FUN_1053899a8(auStack_48);
  }
  func_0x00010538b120();
  return;
}



/* Entry: 10538a638; end: 10538a667;  */

long FUN_10538a638(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10538a668();
  FUN_10538a6c4(lVar1 + 200,param_3);
  return param_1;
}



/* Entry: 10538a668; end: 10538a693;  */

undefined1 * FUN_10538a668(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xc0] = 0;
  FUN_10538a694();
  return param_1;
}



/* Entry: 10538a694; end: 10538a6a7;  */

void FUN_10538a694(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    func_0x00010076a4ac();
    *(undefined1 *)(param_1 + 0xc0) = 1;
    return;
  }
  return;
}



/* Entry: 10538a6a8; end: 10538a6c3;  */

void FUN_10538a6a8(long param_1)

{
  func_0x00010076a4ac();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 10538a6c4; end: 10538a6ef;  */

undefined1 * FUN_10538a6c4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_10538a6f0();
  return param_1;
}



/* Entry: 10538a6f0; end: 10538a703;  */

void FUN_10538a6f0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_10538a720();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10538a704; end: 10538a71f;  */

void FUN_10538a704(long param_1)

{
  FUN_10538a720();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10538a720; end: 10538a78f;  */

void FUN_10538a720(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10538a790; end: 10538a7ab;  */

void FUN_10538a790(long param_1)

{
  func_0x00010076a4ac();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 10538a7ac; end: 10538a8b7;  */

void FUN_10538a7ac(void)

{
  ulong unaff_x19;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  
  func_0x00010538b130();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  pcStack_70 = FUN_10538a8b8;
  uStack_68 = 0x10538a8c4;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  fStack_38 = 1.0;
  func_0x00010bf529e0();
  FUN_10538ab3c(&uStack_58,(long)((float)unaff_x19 / fStack_38));
  func_0x00010bf97ce0();
  FUN_10538adbc();
  func_0x00010538b170();
  FUN_1053899a8(&uStack_58);
  func_0x00010538b120();
  return;
}



/* Entry: 10538a8b8; end: 10538a8cb;  */

void FUN_10538a8b8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 10538a8cc; end: 10538ab3b;  */

void FUN_10538a8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x23;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c067fc0();
  _objc_release(param_2);
  func_0x0001000fbca4(&lStack_70,param_3);
  func_0x00010538b150();
  iVar8 = (int)uVar2;
  uVar10 = (ulong)iVar8;
  uVar9 = *(ulong *)(lVar11 + 0x38);
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x23 = uVar4 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar5 = *(long **)(*(long *)(lVar11 + 0x30) + unaff_x23 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10538a9b8;
          uVar7 = plVar5[1];
          if (uVar7 != uVar10) break;
          if (*(int *)(plVar5 + 2) == iVar8) goto LAB_10538aae8;
        }
        if ((uVar9 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (uVar9 <= uVar7) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar7 / uVar9;
          }
          uVar7 = uVar7 - uVar1 * uVar9;
        }
      } while (uVar7 == unaff_x23);
    }
  }
LAB_10538a9b8:
  plVar3 = (long *)0x30;
  __Znwm();
  plVar5 = (long *)(lVar11 + 0x40);
  uStack_48 = 1;
  *plVar3 = 0;
  plVar3[1] = uVar10;
  *(int *)(plVar3 + 2) = iVar8;
  plVar3[5] = lStack_60;
  plVar3[4] = lStack_68;
  plVar3[3] = lStack_70;
  lStack_70 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  plStack_58 = plVar3;
  plStack_50 = plVar5;
  if ((uVar9 == 0) ||
     (*(float *)(lVar11 + 0x50) * (float)uVar9 < (float)(*(long *)(lVar11 + 0x48) + 1))) {
    func_0x00010538b158(uVar9 << 1);
    FUN_10538ab3c(lVar11 + 0x30);
    uVar9 = *(ulong *)(lVar11 + 0x38);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar4 * uVar9;
      }
    }
  }
  lVar6 = *(long *)(lVar11 + 0x30);
  plVar3 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar3 == (long *)0x0) {
    *plStack_58 = *plVar5;
    *plVar5 = (long)plStack_58;
    *(long **)(lVar6 + unaff_x23 * 8) = plVar5;
    if (*plStack_58 != 0) {
      uVar10 = *(ulong *)(*plStack_58 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar4 * uVar9;
      }
      *(long **)(lVar6 + uVar10 * 8) = plStack_58;
    }
  }
  else {
    *plStack_58 = *plVar3;
    *plVar3 = (long)plStack_58;
  }
  plStack_58 = (long *)0x0;
  *(long *)(lVar11 + 0x48) = *(long *)(lVar11 + 0x48) + 1;
  FUN_10538ad38(&plStack_58);
LAB_10538aae8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_70);
  return;
}



/* Entry: 10538ab3c; end: 10538ac03;  */

void FUN_10538ab3c(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_10538ab84;
    }
    return;
  }
LAB_10538ab84:
  if (param_2 == 0) {
    FUN_10538ad04(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_10538ad1c(plVar2);
    FUN_10538ad04(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10538ac04; end: 10538ad03;  */

void FUN_10538ac04(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10538ad04(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10538ad1c(plVar3);
    FUN_10538ad04(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10538ad04; end: 10538ad1b;  */

void FUN_10538ad04(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10538ad1c; end: 10538ad37;  */

long FUN_10538ad1c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10538ad5c();
  return param_1;
}



/* Entry: 10538ad38; end: 10538ad5b;  */

undefined8 FUN_10538ad38(undefined8 param_1)

{
  FUN_10538ad5c(param_1,0);
  return param_1;
}



/* Entry: 10538ad5c; end: 10538ad73;  */

void FUN_10538ad5c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10538ad74; end: 10538adbb;  */

void FUN_10538ad74(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10538adbc; end: 10538ae13;  */

undefined8 * FUN_10538adbc(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10538ab3c(param_1,*(undefined8 *)(param_2 + 8));
  FUN_10538ae14(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 10538ae14; end: 10538ae53;  */

void FUN_10538ae14(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    FUN_10538ae54(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10538ae54; end: 10538ae87;  */

void FUN_10538ae54(void)

{
  func_0x00010538ae6c();
  return;
}



/* Entry: 10538ae88; end: 10538b07f;  */

undefined1  [16] FUN_10538ae88(long *param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  uVar7 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10538af34;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_10538b050;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar9 <= uVar5) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar1 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_10538af34:
  FUN_10538b080(aplStack_58,param_1,uVar7);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    func_0x00010538b158(uVar9 << 1);
    FUN_10538ab3c(param_1);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar3 * uVar9;
      }
    }
  }
  plVar8 = aplStack_58[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10538ad38(aplStack_58);
  uVar2 = 1;
LAB_10538b050:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 10538b080; end: 10538b0db;  */

void FUN_10538b080(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10538b0dc(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10538b0dc; end: 10538b103;  */

undefined4 * FUN_10538b0dc(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10538b104; end: 10538b11f;  */

void FUN_10538b104(long param_1)

{
  FUN_10538a720();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10538b120; end: 10538b17b;  */

void FUN_10538b120(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10538b17c; end: 10538b21f;  */

void FUN_10538b17c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010029a6e0();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    _objc_retain();
    ppuStack_38 = &PTR_DAT_11087ef88;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&stack0xffffffffffffffc0,FUN_10538b220);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(unaff_x19);
    unaff_x20[1] = uVar2;
    *unaff_x20 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10538b590(&uStack_50);
  }
  FUN_10538b5bc();
  return;
}



/* Entry: 10538b220; end: 10538b317;  */

void FUN_10538b220(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_11087efc8;
  puVar4[3] = &PTR_DAT_11087f048;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x00010538b5dc();
  puVar4[3] = &PTR_FUN_11087f018;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10538b590(&uStack_50);
  return;
}



/* Entry: 10538b318; end: 10538b31b;  */

void FUN_10538b318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087efc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


