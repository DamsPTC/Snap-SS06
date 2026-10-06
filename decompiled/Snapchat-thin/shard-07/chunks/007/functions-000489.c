/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105936de4; end: 105936df3; -[SCFideliusLogger unsetUserBlizzard] */

void FUN_105936de4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105936df4; end: 1059370b3; -[SCFideliusLogger logDatabaseError:type:code:message:statement:path:] */

void FUN_105936df4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b24e8;
  func_0x00010bfb7480();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b24e8;
  func_0x00010c276400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b24e8;
  func_0x00010bfb7520();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b24e8;
  func_0x00010c2768c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0de78);
  if ((uVar5 & 1) == 0) {
    uVar5 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0de98);
    if ((uVar5 & 1) == 0) {
      func_0x00010c0a49e0(param_1,param_2,0xffffffffffffffff,0,0,param_4,(long)param_5,param_7,
                          param_8,param_6,puVar1,puVar2,puVar3,puVar4,0);
      goto LAB_105937050;
    }
    func_0x00010c0a49e0(param_1,param_2,2,0,0,param_4,(long)param_5,param_7,param_8,param_6,puVar1,
                        puVar2,puVar3,puVar4,0);
    puVar6 = PTR_PTR_1126c04d8;
    func_0x00010bf65940();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0a49e0(param_1,param_2,1,0,0,param_4,(long)param_5,param_7,param_8,param_6,puVar1,
                        puVar2,puVar3,puVar4,0);
    puVar6 = PTR_PTR_1126c04d8;
    func_0x00010bf65980();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar6 != (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dbfab8,param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
  }
LAB_105937050:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059370b4; end: 105937193; -[SCFideliusLogger logUnsampledEventWithDiskInfo:file:] */

void FUN_1059370b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b24e8;
  _objc_retain(param_4);
  func_0x00010bfb7480(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b24e8;
  func_0x00010c276400(PTR_PTR_1126b24e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b24e8;
  func_0x00010bfb7520();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b24e8;
  func_0x00010c2768c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a75a0(param_1,param_2,0,0,0,param_4,puVar1,puVar2,puVar3,puVar4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105937194; end: 1059372ab; -[SCFideliusLogger logUnsampledEventWithDiskInfo:file:errorCode:] */

void FUN_105937194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b24e8;
  _objc_retain(param_4);
  func_0x00010bfb7480(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b24e8;
  func_0x00010c276400(PTR_PTR_1126b24e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b24e8;
  func_0x00010bfb7520();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b24e8;
  func_0x00010c2768c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a75a0(param_1,param_2,0,puVar5,0,param_4,puVar1,puVar2,puVar3,puVar4);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059372ac; end: 1059372af; -[SCFideliusLogger logInternalEvent:parameters:] */

void FUN_1059372ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addToFileEvent_parameters__11259c9e8);
  return;
}



/* Entry: 1059372b0; end: 105937303; -[SCFideliusLogger filePath] */

void FUN_1059372b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105937304; end: 10593730b; -[SCFideliusLogger serializedEventsString] */

undefined8 FUN_105937304(void)

{
  return 0;
}



/* Entry: 10593730c; end: 105937313; -[SCFideliusLogger flushAllEvents] */

void FUN_10593730c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105937314; end: 105937343; -[SCFideliusLogger flushOldEvents] */

void FUN_105937314(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectsInRange__112628f68,0,lVar1 + -0x5dc);
  return;
}



/* Entry: 105937344; end: 105937373; -[SCFideliusLogger onInvalidate] */

void FUN_105937344(long param_1)

{
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 105937374; end: 1059377d3; -[SCFideliusLogger logInversePhi:dataReady:retried:cleartext:failureReason:message:uniqueId:] */

void FUN_105937374(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined *param_7,undefined *param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined4 uVar26;
  undefined *puVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  long lVar32;
  undefined *puVar33;
  long lVar34;
  undefined **ppuVar35;
  ulong uVar36;
  undefined8 uStack_5b0;
  long lStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined1 auStack_450 [128];
  long lStack_3d0;
  undefined **ppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  long lStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  long lStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined4 uStack_f4;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar34 = param_6;
  puVar14 = param_7;
  puVar16 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126c04e8;
  _objc_retain(param_9);
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c2260e0(puVar2,param_2,param_4);
  func_0x00010c226c00(puVar2,param_2,param_5);
  func_0x00010c225f80(puVar2,param_2,param_6);
  func_0x00010c19a060(puVar2,param_2,param_7);
  func_0x00010c1971a0(puVar2,param_2,param_8);
  puStack_d8 = param_1;
  func_0x00010bfc5020(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f778,param_9);
  _objc_release(param_9);
  if (-1 < (long)param_1) {
    func_0x00010c1d5a40(puVar2,param_2,param_1);
  }
  puStack_f0 = param_1;
  func_0x00010c0a1b40(puStack_d8,param_2,puVar2);
  puVar3 = puVar2;
  func_0x00010bfc52e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dab0d8;
  uStack_f4 = (undefined4)param_3;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_e0 = puVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e0fa98;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_100 = puVar4;
  puStack_a0 = puVar4;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e0fab8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e0fad8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar4;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110daf558;
  puVar6 = param_7;
  puStack_88 = puVar5;
  if (param_7 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dd9438;
  puVar7 = param_8;
  puStack_80 = puVar6;
  if (param_8 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar30 = 6;
  puVar33 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_a0,&ppuStack_d0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puStack_d8,param_2,puStack_e0,puVar33);
  _objc_release(puVar33);
  puStack_e8 = param_8;
  if (param_8 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  if (param_7 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_100);
  _objc_release(puStack_e0);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010c2417e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_f4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110daf558,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0fab8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = puStack_d8;
  uVar8 = *(undefined8 *)(puStack_d8 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar10);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar6;
  puVar13 = puStack_f0;
  func_0x00010befbfe0();
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puStack_e8);
  puVar4 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_140 = puVar3;
  pcStack_108 = FUN_1059377d4;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = lVar34;
  puStack_150 = puVar33;
  puStack_148 = param_7;
  uStack_138 = uVar10;
  uStack_130 = param_5;
  puStack_128 = puVar2;
  uStack_120 = uVar8;
  puStack_118 = puVar6;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  puVar2 = PTR_PTR_1126c04f0;
  _objc_retain(uVar30);
  _objc_alloc_init();
  func_0x00010c1e8080();
  func_0x00010c206c40(puVar2,param_2,puVar13);
  func_0x00010c1e8860(puVar2,param_2,uVar30);
  _objc_release(uVar30);
  func_0x00010c225f80(puVar2,param_2,lVar34);
  func_0x00010c0a1b40(puVar4,param_2,puVar2);
  puVar3 = puVar2;
  func_0x00010bfc52e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_178 = &PTR____CFConstantStringClassReference_110daf558;
  puVar6 = puVar12;
  if (puVar12 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_170 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar33 = puVar13;
  puStack_168 = puVar6;
  if (puVar13 == (undefined *)0x0) {
    puVar33 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar31 = (undefined *)0x2;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_160 = puVar33;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_168,&ppuStack_178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar4,param_2,puVar3,puVar9);
  _objc_release(puVar9);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar33);
  }
  if (puVar12 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010c2435c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar10 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = (undefined *)0x1;
  puVar6 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar30);
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar13);
  puVar4 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_105937a50;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar34 = lVar32;
  puStack_1e0 = puVar5;
  puStack_1d8 = puVar7;
  puStack_1d0 = puVar9;
  puStack_1c8 = puVar33;
  uStack_1c0 = uVar30;
  puStack_1b8 = puVar3;
  uStack_1b0 = uVar10;
  puStack_1a8 = puVar2;
  puStack_1a0 = puVar13;
  puStack_198 = puVar12;
  ppuStack_190 = &puStack_110;
  _objc_retain(puVar27);
  _objc_retain(puVar31);
  puVar2 = PTR_PTR_1126c0500;
  _objc_retain(lVar32);
  _objc_alloc_init();
  func_0x00010c226f80();
  ppuVar11 = &PTR____CFConstantStringClassReference_110e0fb18;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e0fb18,param_2,lVar32);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar32);
  puVar3 = puVar27;
  ppuStack_220 = ppuVar11;
  func_0x00010c25ce40(puVar27,param_2,ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a060(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c0a1b40(puVar4,param_2,puVar2);
  puVar3 = puVar2;
  func_0x00010bfc52e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_218 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_210 = &PTR____CFConstantStringClassReference_110daf558;
  puVar7 = puVar27;
  puStack_200 = puVar5;
  if (puVar27 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_208 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar33 = puVar31;
  puStack_1f8 = puVar7;
  if (puVar31 == (undefined *)0x0) {
    puVar33 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar32 = 3;
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1f0 = puVar33;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_200,&ppuStack_218);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar4,param_2,puVar3,puVar12);
  _objc_release(puVar12);
  if (puVar31 == (undefined *)0x0) {
    _objc_release(puVar33);
  }
  if (puVar27 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010c1554a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar12);
  puVar3 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar27);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar12 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar31);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar10 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = 1;
  puVar4 = puVar12;
  func_0x00010bfec320();
  _objc_release(uVar30);
  _objc_release(uVar10);
  _objc_release(puVar12);
  _objc_release(ppuStack_220);
  _objc_release(puVar2);
  _objc_release(puVar31);
  puVar3 = puVar27;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105937d8c;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_270 = puVar5;
  puStack_268 = puVar6;
  puStack_260 = puVar12;
  uStack_258 = uVar30;
  uStack_250 = uVar10;
  puStack_248 = puVar2;
  puStack_240 = puVar31;
  puStack_238 = puVar27;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(puVar4);
  puVar2 = PTR_PTR_1126c0508;
  _objc_alloc_init();
  func_0x00010c1d5a20();
  if (-1 < lVar28) {
    func_0x00010c187240(puVar2,param_2,lVar28);
  }
  if (-1 < lVar32) {
    func_0x00010c1e2580(puVar2,param_2,lVar32);
  }
  func_0x00010c0a1b40(puVar3,param_2,puVar2);
  puVar5 = puVar2;
  func_0x00010bfc52e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_110dce878;
  puVar6 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_110e0fb38;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_290 = puVar6;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_298 = &PTR____CFConstantStringClassReference_110e0fb58;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_288 = puVar12;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = 3;
  puVar31 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_280 = puVar13;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_290,&ppuStack_2a8,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar3,param_2,puVar5,puVar31);
  _objc_release(puVar31);
  _objc_release(puVar13);
  _objc_release(puVar12);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c04d8;
  func_0x00010bfb7b60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar8 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = 1;
  func_0x00010bfec320();
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(puVar13);
  _objc_release(puVar2);
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_105937fd8;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_358 = &PTR____CFConstantStringClassReference_110e0fb78;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar28 = lVar34;
  puStack_310 = puVar33;
  puStack_308 = puVar7;
  puStack_300 = puVar31;
  puStack_2f8 = puVar6;
  puStack_2f0 = puVar12;
  puStack_2e8 = puVar13;
  uStack_2e0 = uVar10;
  uStack_2d8 = uVar8;
  puStack_2d0 = puVar2;
  puStack_2c8 = puVar4;
  pppuStack_2c0 = &pppuStack_230;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_350 = &PTR____CFConstantStringClassReference_110e0fb98;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_338 = puVar5;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_348 = &PTR____CFConstantStringClassReference_110e0fbb8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_330 = puVar2;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_340 = &PTR____CFConstantStringClassReference_110e0fbd8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_328 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = (undefined *)0x4;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_320 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_338,&ppuStack_358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0f7f8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar5);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb7ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar10 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar30);
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb7ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar10 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar30);
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf6ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar8 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar30);
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf6ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar29 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar29;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  lVar32 = lVar34;
  func_0x00010bef9180();
  uVar26 = (undefined4)lVar32;
  _objc_release(uVar10);
  _objc_release(uVar29);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = ppuStack_350;
  ppuVar11 = ppuStack_358;
  ppuStack_3c0 = &PTR_PTR_1126c0000;
  pcStack_368 = FUN_105938364;
  lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3b8 = uVar30;
  uStack_3b0 = uVar8;
  puStack_3a8 = puVar5;
  puStack_3a0 = puVar7;
  puStack_398 = puVar6;
  puStack_390 = puVar4;
  uStack_388 = uVar10;
  uStack_380 = uVar29;
  lStack_378 = lVar34;
  pppuStack_370 = &pppuStack_2c0;
  _objc_retain(puVar33);
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar1);
  puVar4 = PTR_PTR_1126c0510;
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar4,param_2,puVar33);
  if (-1 < lVar28) {
    func_0x00010c1b6b80(puVar4,param_2,lVar28);
  }
  if (-1 < (long)puVar14) {
    func_0x00010c1a0480(puVar4,param_2,puVar14);
  }
  if (-1 < (long)puVar16) {
    func_0x00010c1a0460(puVar4,param_2,puVar16);
  }
  if (-1 < lStack_360) {
    func_0x00010c1ed160(puVar4,param_2,lStack_360);
  }
  if (ppuVar1 != (undefined **)0x0) {
    func_0x00010c18bb80(puVar4,param_2,ppuVar1);
  }
  func_0x00010c0a1b40(puVar2,param_2,puVar4);
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  plStack_560 = (long *)0x0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  _objc_retain(ppuVar1);
  ppuVar15 = ppuVar1;
  func_0x00010bf52a60(ppuVar1,param_2,&uStack_570,auStack_450,0x10);
  if (ppuVar15 != (undefined **)0x0) {
    lVar34 = *plStack_560;
    do {
      ppuVar35 = (undefined **)0x0;
      do {
        if (*plStack_560 != lVar34) {
          _objc_enumerationMutation(ppuVar1);
        }
        lVar32 = *(long *)(lStack_568 + (long)ppuVar35 * 8);
        func_0x00010bf0a640();
        _objc_retainAutoreleasedReturnValue();
        if (lVar32 != 0) {
          func_0x00010befa120(puVar14,param_2,lVar32);
        }
        _objc_release(lVar32);
        ppuVar35 = (undefined **)((long)ppuVar35 + 1);
      } while (ppuVar15 != ppuVar35);
      ppuVar15 = ppuVar1;
      func_0x00010bf52a60(ppuVar1,param_2,&uStack_570,auStack_450,0x10);
    } while (ppuVar15 != (undefined **)0x0);
  }
  uVar36 = (ulong)ppuStack_348 & 0xff;
  _objc_release(ppuVar1);
  func_0x00010bac5a88();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_4b0 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_4a8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar6 = puVar33;
  puStack_480 = puVar5;
  if (puVar33 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_4a0 = &PTR____CFConstantStringClassReference_110e0fc78;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_478 = puVar6;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_498 = &PTR____CFConstantStringClassReference_110e0fb78;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_470 = puVar7;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_490 = &PTR____CFConstantStringClassReference_110e0f1f8;
  puVar16 = puVar14;
  puStack_468 = puVar12;
  if (puVar14 == (undefined *)0x0) {
    puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_488 = &PTR____CFConstantStringClassReference_110e0f218;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_460 = puVar16;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_458 = puVar13;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_480,&ppuStack_4b0,6)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,puVar3,puVar31);
  _objc_release(puVar31);
  _objc_release(puVar13);
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar16);
  }
  _objc_release(puVar12);
  _objc_release(puVar7);
  if (puVar33 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar16 = PTR_PTR_1126c04d8;
  func_0x00010c086ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010c086ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar16;
  func_0x00010c2ac460(puVar16,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar5);
  puVar16 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar33);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar16;
  func_0x00010c2ac460(puVar16,param_2,&PTR____CFConstantStringClassReference_110e0f218,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar5);
  uVar10 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar30);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar30);
  _objc_release(uVar10);
  puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar16);
  puVar16 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar33);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar10 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar30);
  _objc_release(uVar10);
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  lStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  plStack_5a0 = (long *)0x0;
  _objc_retain(ppuVar11);
  puVar25 = &uStack_5b0;
  ppuVar15 = ppuVar11;
  func_0x00010bf52a60();
  if (ppuVar15 != (undefined **)0x0) {
    lVar34 = *plStack_5a0;
    do {
      ppuVar35 = (undefined **)0x0;
      do {
        if (*plStack_5a0 != lVar34) {
          _objc_enumerationMutation(ppuVar11);
        }
        uVar8 = *(undefined8 *)(lStack_5a8 + (long)ppuVar35 * 8);
        puVar3 = PTR_PTR_1126c04d8;
        func_0x00010c086ee0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar26);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar5);
        uVar30 = uVar8;
        func_0x00010c25d700(uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar7;
        func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dd8fd8,uVar30);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(uVar30);
        uVar10 = *(undefined8 *)(puVar2 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar30 = uVar10;
        func_0x00010bfac460();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar11;
        func_0x00010bf52b00(ppuVar11,param_2,uVar8);
        func_0x00010bfec320(uVar30,param_2,puVar3,ppuVar17);
        _objc_release(uVar30);
        _objc_release(uVar10);
        _objc_release(puVar3);
        ppuVar35 = (undefined **)((long)ppuVar35 + 1);
      } while (ppuVar15 != ppuVar35);
      puVar25 = &uStack_5b0;
      ppuVar15 = ppuVar11;
      func_0x00010bf52a60();
    } while (ppuVar15 != (undefined **)0x0);
  }
  _objc_release(ppuVar11);
  _objc_release(puVar16);
  _objc_release(puVar6);
  _objc_release(puVar14);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(ppuVar11);
  _objc_release(puVar33);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar25);
  puVar18 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110dab0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010bf1f3c0();
  _objc_release(puVar18);
  puVar18 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110e0f1b8);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c0b4ca0();
  _objc_release(puVar18);
  puVar18 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110e0f198);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar18;
  func_0x00010c0b4ca0();
  _objc_release(puVar18);
  puVar18 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110dae8d8);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110e0f1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110e0f1f8);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110e0f218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  puVar25 = puVar24;
  func_0x00010bf1f3c0();
  _objc_release(puVar24);
  func_0x00010be550c0(puVar33,param_2,0,puVar19,puVar18,puVar20,9999,puVar21,9999,puVar22,puVar23,
                      (char)puVar25);
  _objc_release(puVar23);
  _objc_release(puVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar18);
  return;
}



/* Entry: 1059377d4; end: 105937a4f; -[SCFideliusLogger logClientSnapSuppressed:source:myBeta:cleartext:] */

void FUN_1059377d4(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  undefined *puVar26;
  long lVar27;
  undefined8 uVar28;
  undefined *puVar29;
  long lVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined **ppuVar33;
  ulong uVar34;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined1 auStack_350 [128];
  long lStack_2d0;
  undefined **ppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  long lStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar30 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c04f0;
  _objc_retain(param_5);
  _objc_alloc_init();
  func_0x00010c1e8080();
  func_0x00010c206c40(puVar2,param_2,param_4);
  func_0x00010c1e8860(puVar2,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c225f80(puVar2,param_2,param_6);
  func_0x00010c0a1b40(param_1,param_2,puVar2);
  puVar3 = puVar2;
  func_0x00010bfc52e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daf558;
  puVar4 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar26 = param_4;
  puStack_68 = puVar4;
  if (param_4 == (undefined *)0x0) {
    puVar26 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar29 = (undefined *)0x2;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar26;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,puVar3,puVar5);
  _objc_release(puVar5);
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar26);
  }
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010c2435c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = (undefined *)0x1;
  puVar4 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar31);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_105937a50;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = lVar30;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar26);
  _objc_retain(puVar29);
  puVar2 = PTR_PTR_1126c0500;
  _objc_retain(lVar30);
  _objc_alloc_init();
  func_0x00010c226f80();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e0fb18;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e0fb18,param_2,lVar30);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  puVar3 = puVar26;
  ppuStack_120 = ppuVar7;
  func_0x00010c25ce40(puVar26,param_2,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a060(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c0a1b40(param_3,param_2,puVar2);
  puVar3 = puVar2;
  func_0x00010bfc52e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_110 = &PTR____CFConstantStringClassReference_110daf558;
  puVar32 = puVar26;
  puStack_100 = puVar5;
  if (puVar26 == (undefined *)0x0) {
    puVar32 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_108 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar8 = puVar29;
  puStack_f8 = puVar32;
  if (puVar29 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar30 = 3;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f0 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_100,&ppuStack_118);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_3,param_2,puVar3,puVar9);
  _objc_release(puVar9);
  if (puVar29 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  if (puVar26 == (undefined *)0x0) {
    _objc_release(puVar32);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010c1554a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar9);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar26);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar9 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = 1;
  puVar13 = puVar9;
  func_0x00010bfec320();
  _objc_release(uVar31);
  _objc_release(uVar6);
  _objc_release(puVar9);
  _objc_release(ppuStack_120);
  _objc_release(puVar2);
  _objc_release(puVar29);
  puVar3 = puVar26;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_105937d8c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = puVar5;
  puStack_168 = puVar4;
  puStack_160 = puVar9;
  uStack_158 = uVar31;
  uStack_150 = uVar6;
  puStack_148 = puVar2;
  puStack_140 = puVar29;
  puStack_138 = puVar26;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar13);
  puVar2 = PTR_PTR_1126c0508;
  _objc_alloc_init();
  func_0x00010c1d5a20();
  if (-1 < lVar27) {
    func_0x00010c187240(puVar2,param_2,lVar27);
  }
  if (-1 < lVar30) {
    func_0x00010c1e2580(puVar2,param_2,lVar30);
  }
  func_0x00010c0a1b40(puVar3,param_2,puVar2);
  puVar4 = puVar2;
  func_0x00010bfc52e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110dce878;
  puVar26 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar26 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110e0fb38;
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_190 = puVar26;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_198 = &PTR____CFConstantStringClassReference_110e0fb58;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_188 = puVar29;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = 3;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_180 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_190,&ppuStack_1a8,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar3,param_2,puVar4,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar29);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar26);
  }
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c04d8;
  func_0x00010bfb7b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar10 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = 1;
  func_0x00010bfec320();
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar3 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_105937fd8;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_258 = &PTR____CFConstantStringClassReference_110e0fb78;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar27 = lVar12;
  puStack_210 = puVar8;
  puStack_208 = puVar32;
  puStack_200 = puVar9;
  puStack_1f8 = puVar26;
  puStack_1f0 = puVar29;
  puStack_1e8 = puVar5;
  uStack_1e0 = uVar6;
  uStack_1d8 = uVar10;
  puStack_1d0 = puVar2;
  puStack_1c8 = puVar13;
  pppuStack_1c0 = &ppuStack_130;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_250 = &PTR____CFConstantStringClassReference_110e0fb98;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_238 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_248 = &PTR____CFConstantStringClassReference_110e0fbb8;
  puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_230 = puVar2;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_240 = &PTR____CFConstantStringClassReference_110e0fbd8;
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_228 = puVar26;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = (undefined *)0x4;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_220 = puVar29;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_238,&ppuStack_258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0f7f8,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar29);
  _objc_release(puVar26);
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb7ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar31);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb7ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar31);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf6ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar10 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar31);
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf6ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar28 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar28;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  lVar30 = lVar12;
  func_0x00010bef9180();
  uVar25 = (undefined4)lVar30;
  _objc_release(uVar6);
  _objc_release(uVar28);
  _objc_release(puVar5);
  _objc_release(puVar29);
  _objc_release(puVar26);
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = ppuStack_250;
  ppuVar7 = ppuStack_258;
  ppuStack_2c0 = &PTR_PTR_1126c0000;
  pcStack_268 = FUN_105938364;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2b8 = uVar31;
  uStack_2b0 = uVar10;
  puStack_2a8 = puVar26;
  puStack_2a0 = puVar5;
  puStack_298 = puVar29;
  puStack_290 = puVar4;
  uStack_288 = uVar6;
  uStack_280 = uVar28;
  lStack_278 = lVar12;
  pppuStack_270 = &pppuStack_1c0;
  _objc_retain(puVar32);
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar1);
  puVar4 = PTR_PTR_1126c0510;
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar4,param_2,puVar32);
  if (-1 < lVar27) {
    func_0x00010c1b6b80(puVar4,param_2,lVar27);
  }
  if (-1 < param_7) {
    func_0x00010c1a0480(puVar4,param_2,param_7);
  }
  if (-1 < param_8) {
    func_0x00010c1a0460(puVar4,param_2,param_8);
  }
  if (-1 < lStack_260) {
    func_0x00010c1ed160(puVar4,param_2,lStack_260);
  }
  if (ppuVar1 != (undefined **)0x0) {
    func_0x00010c18bb80(puVar4,param_2,ppuVar1);
  }
  func_0x00010c0a1b40(puVar2,param_2,puVar4);
  puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  plStack_460 = (long *)0x0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  _objc_retain(ppuVar1);
  ppuVar11 = ppuVar1;
  func_0x00010bf52a60(ppuVar1,param_2,&uStack_470,auStack_350,0x10);
  if (ppuVar11 != (undefined **)0x0) {
    lVar30 = *plStack_460;
    do {
      ppuVar33 = (undefined **)0x0;
      do {
        if (*plStack_460 != lVar30) {
          _objc_enumerationMutation(ppuVar1);
        }
        lVar12 = *(long *)(lStack_468 + (long)ppuVar33 * 8);
        func_0x00010bf0a640();
        _objc_retainAutoreleasedReturnValue();
        if (lVar12 != 0) {
          func_0x00010befa120(puVar26,param_2,lVar12);
        }
        _objc_release(lVar12);
        ppuVar33 = (undefined **)((long)ppuVar33 + 1);
      } while (ppuVar11 != ppuVar33);
      ppuVar11 = ppuVar1;
      func_0x00010bf52a60(ppuVar1,param_2,&uStack_470,auStack_350,0x10);
    } while (ppuVar11 != (undefined **)0x0);
  }
  uVar34 = (ulong)ppuStack_248 & 0xff;
  _objc_release(ppuVar1);
  func_0x00010bac5a88();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3a8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar5 = puVar32;
  puStack_380 = puVar29;
  if (puVar32 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_3a0 = &PTR____CFConstantStringClassReference_110e0fc78;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_378 = puVar5;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_398 = &PTR____CFConstantStringClassReference_110e0fb78;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_370 = puVar8;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_390 = &PTR____CFConstantStringClassReference_110e0f1f8;
  puVar13 = puVar26;
  puStack_368 = puVar9;
  if (puVar26 == (undefined *)0x0) {
    puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_388 = &PTR____CFConstantStringClassReference_110e0f218;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_360 = puVar13;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_358 = puVar14;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_380,&ppuStack_3b0,6)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,puVar3,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  if (puVar26 == (undefined *)0x0) {
    _objc_release(puVar13);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar32 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar29);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010c086ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126c04d8;
  func_0x00010c086ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar3 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar32);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0f218,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar31);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar31);
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar29;
  func_0x00010c2ac460(puVar29,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar32);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar31);
  _objc_release(uVar6);
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  lStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  plStack_4a0 = (long *)0x0;
  _objc_retain(ppuVar7);
  puVar24 = &uStack_4b0;
  ppuVar11 = ppuVar7;
  func_0x00010bf52a60();
  if (ppuVar11 != (undefined **)0x0) {
    lVar30 = *plStack_4a0;
    do {
      ppuVar33 = (undefined **)0x0;
      do {
        if (*plStack_4a0 != lVar30) {
          _objc_enumerationMutation(ppuVar7);
        }
        uVar10 = *(undefined8 *)(lStack_4a8 + (long)ppuVar33 * 8);
        puVar29 = PTR_PTR_1126c04d8;
        func_0x00010c086ee0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar25);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar29;
        func_0x00010c2ac460(puVar29,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar5)
        ;
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar29);
        _objc_release(puVar5);
        uVar31 = uVar10;
        func_0x00010c25d700(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar29 = puVar9;
        func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110dd8fd8,uVar31);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(uVar31);
        uVar6 = *(undefined8 *)(puVar2 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar31 = uVar6;
        func_0x00010bfac460();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar7;
        func_0x00010bf52b00(ppuVar7,param_2,uVar10);
        func_0x00010bfec320(uVar31,param_2,puVar29,ppuVar16);
        _objc_release(uVar31);
        _objc_release(uVar6);
        _objc_release(puVar29);
        ppuVar33 = (undefined **)((long)ppuVar33 + 1);
      } while (ppuVar11 != ppuVar33);
      puVar24 = &uStack_4b0;
      ppuVar11 = ppuVar7;
      func_0x00010bf52a60();
    } while (ppuVar11 != (undefined **)0x0);
  }
  _objc_release(ppuVar7);
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar26);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(ppuVar7);
  _objc_release(puVar32);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar24);
  puVar17 = puVar24;
  func_0x00010c0e00e0(puVar24,param_2,&PTR____CFConstantStringClassReference_110dab0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf1f3c0();
  _objc_release(puVar17);
  puVar17 = puVar24;
  func_0x00010c0e00e0(puVar24,param_2,&PTR____CFConstantStringClassReference_110e0f1b8);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c0b4ca0();
  _objc_release(puVar17);
  puVar17 = puVar24;
  func_0x00010c0e00e0(puVar24,param_2,&PTR____CFConstantStringClassReference_110e0f198);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar17;
  func_0x00010c0b4ca0();
  _objc_release(puVar17);
  puVar17 = puVar24;
  func_0x00010c0e00e0(puVar24,param_2,&PTR____CFConstantStringClassReference_110dae8d8);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar24;
  func_0x00010c0e00e0(puVar24,param_2,&PTR____CFConstantStringClassReference_110e0f1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar24;
  func_0x00010c0e00e0(puVar24,param_2,&PTR____CFConstantStringClassReference_110e0f1f8);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar24;
  func_0x00010c0e00e0(puVar24,param_2,&PTR____CFConstantStringClassReference_110e0f218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar24);
  puVar24 = puVar23;
  func_0x00010bf1f3c0();
  _objc_release(puVar23);
  func_0x00010be550c0(puVar32,param_2,0,puVar18,puVar17,puVar19,9999,puVar20,9999,puVar21,puVar22,
                      (char)puVar24);
  _objc_release(puVar22);
  _objc_release(puVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar17);
  return;
}



/* Entry: 105937a50; end: 105937d8b; -[SCFideliusLogger logSecretGenerated:failureReason:source:failurePk:] */

void FUN_105937a50(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,long param_6,long param_7,long param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined4 uVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *puVar31;
  long lVar32;
  undefined **ppuVar33;
  ulong uVar34;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined1 auStack_2d0 [128];
  long lStack_250;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c0500;
  _objc_retain(param_6);
  _objc_alloc_init();
  func_0x00010c226f80();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e0fb18;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e0fb18,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar4 = param_4;
  ppuStack_a0 = ppuVar3;
  func_0x00010c25ce40(param_4,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a060(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c0a1b40(param_1,param_2,puVar2);
  puVar4 = puVar2;
  func_0x00010bfc52e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110daf558;
  puVar6 = param_4;
  puStack_80 = puVar5;
  if (param_4 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar7 = param_5;
  puStack_78 = puVar6;
  if (param_5 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar29 = 3;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,puVar4,puVar8);
  _objc_release(puVar8);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c04d8;
  func_0x00010c1554a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar8);
  puVar4 = puVar31;
  func_0x00010c2ac460(puVar31,param_2,&PTR____CFConstantStringClassReference_110daf558,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar31);
  puVar8 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar9;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = 1;
  puVar14 = puVar8;
  func_0x00010bfec320();
  _objc_release(uVar30);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(ppuStack_a0);
  _objc_release(puVar2);
  _objc_release(param_5);
  puVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_105937d8c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = puVar5;
  puStack_e8 = puVar31;
  puStack_e0 = puVar8;
  uStack_d8 = uVar30;
  uStack_d0 = uVar9;
  puStack_c8 = puVar2;
  puStack_c0 = param_5;
  puStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar14);
  puVar2 = PTR_PTR_1126c0508;
  _objc_alloc_init();
  func_0x00010c1d5a20();
  if (-1 < lVar27) {
    func_0x00010c187240(puVar2,param_2,lVar27);
  }
  if (-1 < lVar29) {
    func_0x00010c1e2580(puVar2,param_2,lVar29);
  }
  func_0x00010c0a1b40(puVar4,param_2,puVar2);
  puVar5 = puVar2;
  func_0x00010bfc52e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110dce878;
  puVar8 = puVar14;
  if (puVar14 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_120 = &PTR____CFConstantStringClassReference_110e0fb38;
  puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar8;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e0fb58;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_108 = puVar31;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = 3;
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_110,&ppuStack_128,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar4,param_2,puVar5,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar31);
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c04d8;
  func_0x00010bfb7b60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar12 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = 1;
  func_0x00010bfec320();
  _objc_release(uVar9);
  _objc_release(uVar12);
  _objc_release(puVar10);
  _objc_release(puVar2);
  puVar4 = puVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105937fd8;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e0fb78;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar27 = lVar32;
  puStack_190 = puVar7;
  puStack_188 = puVar6;
  puStack_180 = puVar11;
  puStack_178 = puVar8;
  puStack_170 = puVar31;
  puStack_168 = puVar10;
  uStack_160 = uVar9;
  uStack_158 = uVar12;
  puStack_150 = puVar2;
  puStack_148 = puVar14;
  ppuStack_140 = &puStack_b0;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e0fb98;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1b8 = puVar5;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e0fbb8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1b0 = puVar2;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110e0fbd8;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1a8 = puVar6;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar32);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = (undefined *)0x4;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1a0 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1b8,&ppuStack_1d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar4,param_2,&PTR____CFConstantStringClassReference_110e0f7f8,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar5);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb7ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar9;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar30);
  _objc_release(uVar9);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb7ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar9;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar30);
  _objc_release(uVar9);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf6ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar12 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar12;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar30);
  _objc_release(uVar12);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf6ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar28 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar28;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar8;
  lVar29 = lVar32;
  func_0x00010bef9180();
  uVar26 = (undefined4)lVar29;
  _objc_release(uVar9);
  _objc_release(uVar28);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = ppuStack_1d0;
  ppuVar3 = ppuStack_1d8;
  ppuStack_240 = &PTR_PTR_1126c0000;
  pcStack_1e8 = FUN_105938364;
  lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_238 = uVar30;
  uStack_230 = uVar12;
  puStack_228 = puVar6;
  puStack_220 = puVar8;
  puStack_218 = puVar7;
  puStack_210 = puVar5;
  uStack_208 = uVar9;
  uStack_200 = uVar28;
  lStack_1f8 = lVar32;
  pppuStack_1f0 = &ppuStack_140;
  _objc_retain(puVar31);
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar1);
  puVar5 = PTR_PTR_1126c0510;
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar5,param_2,puVar31);
  if (-1 < lVar27) {
    func_0x00010c1b6b80(puVar5,param_2,lVar27);
  }
  if (-1 < param_7) {
    func_0x00010c1a0480(puVar5,param_2,param_7);
  }
  if (-1 < param_8) {
    func_0x00010c1a0460(puVar5,param_2,param_8);
  }
  if (-1 < lStack_1e0) {
    func_0x00010c1ed160(puVar5,param_2,lStack_1e0);
  }
  if (ppuVar1 != (undefined **)0x0) {
    func_0x00010c18bb80(puVar5,param_2,ppuVar1);
  }
  func_0x00010c0a1b40(puVar2,param_2,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  _objc_retain(ppuVar1);
  ppuVar13 = ppuVar1;
  func_0x00010bf52a60(ppuVar1,param_2,&uStack_3f0,auStack_2d0,0x10);
  if (ppuVar13 != (undefined **)0x0) {
    lVar32 = *plStack_3e0;
    do {
      ppuVar33 = (undefined **)0x0;
      do {
        if (*plStack_3e0 != lVar32) {
          _objc_enumerationMutation(ppuVar1);
        }
        lVar29 = *(long *)(lStack_3e8 + (long)ppuVar33 * 8);
        func_0x00010bf0a640();
        _objc_retainAutoreleasedReturnValue();
        if (lVar29 != 0) {
          func_0x00010befa120(puVar6,param_2,lVar29);
        }
        _objc_release(lVar29);
        ppuVar33 = (undefined **)((long)ppuVar33 + 1);
      } while (ppuVar13 != ppuVar33);
      ppuVar13 = ppuVar1;
      func_0x00010bf52a60(ppuVar1,param_2,&uStack_3f0,auStack_2d0,0x10);
    } while (ppuVar13 != (undefined **)0x0);
  }
  uVar34 = (ulong)ppuStack_1c8 & 0xff;
  _objc_release(ppuVar1);
  func_0x00010bac5a88();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_330 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_328 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar8 = puVar31;
  puStack_300 = puVar7;
  if (puVar31 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_320 = &PTR____CFConstantStringClassReference_110e0fc78;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2f8 = puVar8;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_318 = &PTR____CFConstantStringClassReference_110e0fb78;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2f0 = puVar14;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_310 = &PTR____CFConstantStringClassReference_110e0f1f8;
  puVar11 = puVar6;
  puStack_2e8 = puVar10;
  if (puVar6 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_308 = &PTR____CFConstantStringClassReference_110e0f218;
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2e0 = puVar11;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2d8 = puVar15;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_300,&ppuStack_330,6)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,puVar4,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar11);
  }
  _objc_release(puVar10);
  _objc_release(puVar14);
  if (puVar31 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c04d8;
  func_0x00010c086ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c04d8;
  func_0x00010c086ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar8);
  puVar4 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar31);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e0f218,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar8);
  uVar9 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar9;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar30);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar9;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar30);
  _objc_release(uVar9);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar4);
  puVar4 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar31);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uVar9 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar9;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar30);
  _objc_release(uVar9);
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  lStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  plStack_420 = (long *)0x0;
  _objc_retain(ppuVar3);
  puVar25 = &uStack_430;
  ppuVar13 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar13 != (undefined **)0x0) {
    lVar32 = *plStack_420;
    do {
      ppuVar33 = (undefined **)0x0;
      do {
        if (*plStack_420 != lVar32) {
          _objc_enumerationMutation(ppuVar3);
        }
        uVar12 = *(undefined8 *)(lStack_428 + (long)ppuVar33 * 8);
        puVar7 = PTR_PTR_1126c04d8;
        func_0x00010c086ee0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar26);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar7;
        func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar8);
        uVar30 = uVar12;
        func_0x00010c25d700(uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar10;
        func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110dd8fd8,uVar30)
        ;
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(uVar30);
        uVar9 = *(undefined8 *)(puVar2 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar30 = uVar9;
        func_0x00010bfac460();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar3;
        func_0x00010bf52b00(ppuVar3,param_2,uVar12);
        func_0x00010bfec320(uVar30,param_2,puVar7,ppuVar17);
        _objc_release(uVar30);
        _objc_release(uVar9);
        _objc_release(puVar7);
        ppuVar33 = (undefined **)((long)ppuVar33 + 1);
      } while (ppuVar13 != ppuVar33);
      puVar25 = &uStack_430;
      ppuVar13 = ppuVar3;
      func_0x00010bf52a60();
    } while (ppuVar13 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar4);
  _objc_release(puVar14);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(puVar31);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar25);
  puVar18 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110dab0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010bf1f3c0();
  _objc_release(puVar18);
  puVar18 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110e0f1b8);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c0b4ca0();
  _objc_release(puVar18);
  puVar18 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110e0f198);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar18;
  func_0x00010c0b4ca0();
  _objc_release(puVar18);
  puVar18 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110dae8d8);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110e0f1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110e0f1f8);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar25;
  func_0x00010c0e00e0(puVar25,param_2,&PTR____CFConstantStringClassReference_110e0f218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  puVar25 = puVar24;
  func_0x00010bf1f3c0();
  _objc_release(puVar24);
  func_0x00010be550c0(puVar31,param_2,0,puVar19,puVar18,puVar20,9999,puVar21,9999,puVar22,puVar23,
                      (char)puVar25);
  _objc_release(puVar23);
  _objc_release(puVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar18);
  return;
}



/* Entry: 105937d8c; end: 105937fd7; -[SCFideliusLogger logFriendAdded:currentDeviceCount:previousDeviceCount:] */

void FUN_105937d8c(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  undefined **ppuVar33;
  ulong uVar34;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126c0508;
  _objc_alloc_init();
  func_0x00010c1d5a20();
  if (-1 < param_4) {
    func_0x00010c187240(puVar3,param_2,param_4);
  }
  if (-1 < param_5) {
    func_0x00010c1e2580(puVar3,param_2,param_5);
  }
  func_0x00010c0a1b40(param_1,param_2,puVar3);
  puVar4 = puVar3;
  func_0x00010bfc52e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dce878;
  puVar5 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e0fb38;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar5;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e0fb58;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar6;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = 3;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,puVar4,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c04d8;
  func_0x00010bfb7b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = 1;
  func_0x00010bfec320();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_105937fd8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110e0fb78;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar31 = param_6;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_130 = &PTR____CFConstantStringClassReference_110e0fb98;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_118 = puVar3;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110e0fbb8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110e0fbd8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_108 = puVar5;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = (undefined *)0x4;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_118,&ppuStack_138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_3,param_2,&PTR____CFConstantStringClassReference_110e0f7f8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010bfb7ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar29);
  _objc_release(uVar10);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010bfb7ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar29);
  _objc_release(uVar10);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010bf6ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar9;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar29);
  _objc_release(uVar9);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010bf6ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar28 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar28;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  lVar32 = param_6;
  func_0x00010bef9180();
  uVar27 = (undefined4)lVar32;
  _objc_release(uVar10);
  _objc_release(uVar28);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = ppuStack_130;
  ppuVar1 = ppuStack_138;
  ppuStack_1a0 = &PTR_PTR_1126c0000;
  pcStack_148 = FUN_105938364;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_198 = uVar29;
  uStack_190 = uVar9;
  puStack_188 = puVar5;
  puStack_180 = puVar7;
  puStack_178 = puVar6;
  puStack_170 = puVar4;
  uStack_168 = uVar10;
  uStack_160 = uVar28;
  lStack_158 = param_6;
  ppuStack_150 = &puStack_a0;
  _objc_retain(puVar30);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar2);
  puVar4 = PTR_PTR_1126c0510;
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar4,param_2,puVar30);
  if (-1 < lVar31) {
    func_0x00010c1b6b80(puVar4,param_2,lVar31);
  }
  if (-1 < param_7) {
    func_0x00010c1a0480(puVar4,param_2,param_7);
  }
  if (-1 < param_8) {
    func_0x00010c1a0460(puVar4,param_2,param_8);
  }
  if (-1 < lStack_140) {
    func_0x00010c1ed160(puVar4,param_2,lStack_140);
  }
  if (ppuVar2 != (undefined **)0x0) {
    func_0x00010c18bb80(puVar4,param_2,ppuVar2);
  }
  func_0x00010c0a1b40(puVar3,param_2,puVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  _objc_retain(ppuVar2);
  ppuVar11 = ppuVar2;
  func_0x00010bf52a60(ppuVar2,param_2,&uStack_350,auStack_230,0x10);
  if (ppuVar11 != (undefined **)0x0) {
    lVar32 = *plStack_340;
    do {
      ppuVar33 = (undefined **)0x0;
      do {
        if (*plStack_340 != lVar32) {
          _objc_enumerationMutation(ppuVar2);
        }
        lVar12 = *(long *)(lStack_348 + (long)ppuVar33 * 8);
        func_0x00010bf0a640();
        _objc_retainAutoreleasedReturnValue();
        if (lVar12 != 0) {
          func_0x00010befa120(puVar5,param_2,lVar12);
        }
        _objc_release(lVar12);
        ppuVar33 = (undefined **)((long)ppuVar33 + 1);
      } while (ppuVar11 != ppuVar33);
      ppuVar11 = ppuVar2;
      func_0x00010bf52a60(ppuVar2,param_2,&uStack_350,auStack_230,0x10);
    } while (ppuVar11 != (undefined **)0x0);
  }
  uVar34 = (ulong)ppuStack_128 & 0xff;
  _objc_release(ppuVar2);
  func_0x00010bac5a88();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_290 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_288 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar7 = puVar30;
  puStack_260 = puVar6;
  if (puVar30 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_280 = &PTR____CFConstantStringClassReference_110e0fc78;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_258 = puVar7;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar31);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_278 = &PTR____CFConstantStringClassReference_110e0fb78;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_250 = puVar13;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_270 = &PTR____CFConstantStringClassReference_110e0f1f8;
  puVar15 = puVar5;
  puStack_248 = puVar14;
  if (puVar5 == (undefined *)0x0) {
    puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_268 = &PTR____CFConstantStringClassReference_110e0f218;
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_240 = puVar15;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_238 = puVar16;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_260,&ppuStack_290,6)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar3,param_2,puVar8,puVar17);
  _objc_release(puVar17);
  _objc_release(puVar16);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar15);
  }
  _objc_release(puVar14);
  _objc_release(puVar13);
  if (puVar30 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar8);
  puVar6 = PTR_PTR_1126c04d8;
  func_0x00010c086ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c04d8;
  func_0x00010c086ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar8);
  puVar6 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar30);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e0f218,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar8);
  uVar10 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar29);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar29);
  _objc_release(uVar10);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar30);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uVar10 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar29);
  _objc_release(uVar10);
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  _objc_retain(ppuVar1);
  puVar26 = &uStack_390;
  ppuVar11 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar11 != (undefined **)0x0) {
    lVar32 = *plStack_380;
    do {
      ppuVar33 = (undefined **)0x0;
      do {
        if (*plStack_380 != lVar32) {
          _objc_enumerationMutation(ppuVar1);
        }
        uVar9 = *(undefined8 *)(lStack_388 + (long)ppuVar33 * 8);
        puVar7 = PTR_PTR_1126c04d8;
        func_0x00010c086ee0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar27);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar7;
        func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar8);
        uVar29 = uVar9;
        func_0x00010c25d700(uVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar14;
        func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110dd8fd8,uVar29)
        ;
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(uVar29);
        uVar10 = *(undefined8 *)(puVar3 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar29 = uVar10;
        func_0x00010bfac460();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar1;
        func_0x00010bf52b00(ppuVar1,param_2,uVar9);
        func_0x00010bfec320(uVar29,param_2,puVar7,ppuVar18);
        _objc_release(uVar29);
        _objc_release(uVar10);
        _objc_release(puVar7);
        ppuVar33 = (undefined **)((long)ppuVar33 + 1);
      } while (ppuVar11 != ppuVar33);
      puVar26 = &uStack_390;
      ppuVar11 = ppuVar1;
      func_0x00010bf52a60();
    } while (ppuVar11 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar6);
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(puVar30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar26);
  puVar19 = puVar26;
  func_0x00010c0e00e0(puVar26,param_2,&PTR____CFConstantStringClassReference_110dab0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf1f3c0();
  _objc_release(puVar19);
  puVar19 = puVar26;
  func_0x00010c0e00e0(puVar26,param_2,&PTR____CFConstantStringClassReference_110e0f1b8);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c0b4ca0();
  _objc_release(puVar19);
  puVar19 = puVar26;
  func_0x00010c0e00e0(puVar26,param_2,&PTR____CFConstantStringClassReference_110e0f198);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar19;
  func_0x00010c0b4ca0();
  _objc_release(puVar19);
  puVar19 = puVar26;
  func_0x00010c0e00e0(puVar26,param_2,&PTR____CFConstantStringClassReference_110dae8d8);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar26;
  func_0x00010c0e00e0(puVar26,param_2,&PTR____CFConstantStringClassReference_110e0f1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar26;
  func_0x00010c0e00e0(puVar26,param_2,&PTR____CFConstantStringClassReference_110e0f1f8);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar26;
  func_0x00010c0e00e0(puVar26,param_2,&PTR____CFConstantStringClassReference_110e0f218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar26);
  puVar26 = puVar25;
  func_0x00010bf1f3c0();
  _objc_release(puVar25);
  func_0x00010be550c0(puVar30,param_2,0,puVar20,puVar19,puVar21,9999,puVar22,9999,puVar23,puVar24,
                      (char)puVar26);
  _objc_release(puVar24);
  _objc_release(puVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar19);
  return;
}



/* Entry: 105937fd8; end: 105938363; -[SCFideliusLogger logFriendBatchProcessed:friendModifiedCount:deviceUpdatedCount:deviceDeletedCount:] */

void FUN_105937fd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined4 uVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  undefined **ppuVar33;
  ulong uVar34;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [128];
  long lStack_120;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e0fb78;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar31 = param_6;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e0fb98;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar3;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e0fbb8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e0fbd8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar5;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = (undefined *)0x4;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&ppuStack_a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f7f8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010bfb7ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar9);
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010bfb7ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar9);
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010bf6ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar9);
  _objc_release(uVar10);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010bf6ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar11;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar7;
  lVar32 = param_6;
  func_0x00010bef9180();
  uVar29 = (undefined4)lVar32;
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = ppuStack_a0;
  ppuVar1 = ppuStack_a8;
  ppuStack_110 = &PTR_PTR_1126c0000;
  pcStack_b8 = FUN_105938364;
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = uVar9;
  uStack_100 = uVar10;
  puStack_f8 = puVar5;
  puStack_f0 = puVar7;
  puStack_e8 = puVar6;
  puStack_e0 = puVar4;
  uStack_d8 = uVar8;
  uStack_d0 = uVar11;
  lStack_c8 = param_6;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar30);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar2);
  puVar4 = PTR_PTR_1126c0510;
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar4,param_2,puVar30);
  if (-1 < lVar31) {
    func_0x00010c1b6b80(puVar4,param_2,lVar31);
  }
  if (-1 < param_7) {
    func_0x00010c1a0480(puVar4,param_2,param_7);
  }
  if (-1 < param_8) {
    func_0x00010c1a0460(puVar4,param_2,param_8);
  }
  if (-1 < lStack_b0) {
    func_0x00010c1ed160(puVar4,param_2,lStack_b0);
  }
  if (ppuVar2 != (undefined **)0x0) {
    func_0x00010c18bb80(puVar4,param_2,ppuVar2);
  }
  func_0x00010c0a1b40(puVar3,param_2,puVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  _objc_retain(ppuVar2);
  ppuVar12 = ppuVar2;
  func_0x00010bf52a60(ppuVar2,param_2,&uStack_2c0,auStack_1a0,0x10);
  if (ppuVar12 != (undefined **)0x0) {
    lVar32 = *plStack_2b0;
    do {
      ppuVar33 = (undefined **)0x0;
      do {
        if (*plStack_2b0 != lVar32) {
          _objc_enumerationMutation(ppuVar2);
        }
        lVar13 = *(long *)(lStack_2b8 + (long)ppuVar33 * 8);
        func_0x00010bf0a640();
        _objc_retainAutoreleasedReturnValue();
        if (lVar13 != 0) {
          func_0x00010befa120(puVar5,param_2,lVar13);
        }
        _objc_release(lVar13);
        ppuVar33 = (undefined **)((long)ppuVar33 + 1);
      } while (ppuVar12 != ppuVar33);
      ppuVar12 = ppuVar2;
      func_0x00010bf52a60(ppuVar2,param_2,&uStack_2c0,auStack_1a0,0x10);
    } while (ppuVar12 != (undefined **)0x0);
  }
  uVar34 = (ulong)ppuStack_98 & 0xff;
  _objc_release(ppuVar2);
  func_0x00010bac5a88();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_200 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar7 = puVar30;
  puStack_1d0 = puVar6;
  if (puVar30 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e0fc78;
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1c8 = puVar7;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar31);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110e0fb78;
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1c0 = puVar15;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110e0f1f8;
  puVar17 = puVar5;
  puStack_1b8 = puVar16;
  if (puVar5 == (undefined *)0x0) {
    puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e0f218;
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1b0 = puVar17;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1a8 = puVar18;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1d0,&ppuStack_200,6)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar3,param_2,puVar14,puVar19);
  _objc_release(puVar19);
  _objc_release(puVar18);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar17);
  }
  _objc_release(puVar16);
  _objc_release(puVar15);
  if (puVar30 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar14);
  puVar6 = PTR_PTR_1126c04d8;
  func_0x00010c086ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c04d8;
  func_0x00010c086ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar14);
  puVar6 = puVar15;
  func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar30);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e0f218,puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar14);
  uVar8 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar9);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar9);
  _objc_release(uVar8);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar30);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar8 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar9);
  _objc_release(uVar8);
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  _objc_retain(ppuVar1);
  puVar28 = &uStack_300;
  ppuVar12 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar12 != (undefined **)0x0) {
    lVar32 = *plStack_2f0;
    do {
      ppuVar33 = (undefined **)0x0;
      do {
        if (*plStack_2f0 != lVar32) {
          _objc_enumerationMutation(ppuVar1);
        }
        uVar10 = *(undefined8 *)(lStack_2f8 + (long)ppuVar33 * 8);
        puVar7 = PTR_PTR_1126c04d8;
        func_0x00010c086ee0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar29);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar7;
        func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar14)
        ;
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar14);
        uVar9 = uVar10;
        func_0x00010c25d700(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar16;
        func_0x00010c2ac460(puVar16,param_2,&PTR____CFConstantStringClassReference_110dd8fd8,uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(uVar9);
        uVar8 = *(undefined8 *)(puVar3 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bfac460();
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = ppuVar1;
        func_0x00010bf52b00(ppuVar1,param_2,uVar10);
        func_0x00010bfec320(uVar9,param_2,puVar7,ppuVar20);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(puVar7);
        ppuVar33 = (undefined **)((long)ppuVar33 + 1);
      } while (ppuVar12 != ppuVar33);
      puVar28 = &uStack_300;
      ppuVar12 = ppuVar1;
      func_0x00010bf52a60();
    } while (ppuVar12 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar6);
  _objc_release(puVar15);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(puVar30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar28);
  puVar21 = puVar28;
  func_0x00010c0e00e0(puVar28,param_2,&PTR____CFConstantStringClassReference_110dab0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010bf1f3c0();
  _objc_release(puVar21);
  puVar21 = puVar28;
  func_0x00010c0e00e0(puVar28,param_2,&PTR____CFConstantStringClassReference_110e0f1b8);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c0b4ca0();
  _objc_release(puVar21);
  puVar21 = puVar28;
  func_0x00010c0e00e0(puVar28,param_2,&PTR____CFConstantStringClassReference_110e0f198);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c0b4ca0();
  _objc_release(puVar21);
  puVar21 = puVar28;
  func_0x00010c0e00e0(puVar28,param_2,&PTR____CFConstantStringClassReference_110dae8d8);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar28;
  func_0x00010c0e00e0(puVar28,param_2,&PTR____CFConstantStringClassReference_110e0f1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar28;
  func_0x00010c0e00e0(puVar28,param_2,&PTR____CFConstantStringClassReference_110e0f1f8);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar28;
  func_0x00010c0e00e0(puVar28,param_2,&PTR____CFConstantStringClassReference_110e0f218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar28);
  puVar28 = puVar27;
  func_0x00010bf1f3c0();
  _objc_release(puVar27);
  func_0x00010be550c0(puVar30,param_2,0,puVar22,puVar21,puVar23,9999,puVar24,9999,puVar25,puVar26,
                      (char)puVar28);
  _objc_release(puVar26);
  _objc_release(puVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar21);
  return;
}



/* Entry: 105938364; end: 105938aff; -[SCFideliusLogger _logKeyPropagation:withSuccess:source:numKeys:numFriendsWithKeysRequested:numFriendsWithKeysReceived:statusCode:versionsCount:deltaSyncKeysInfo:handshakeReady:] */

void FUN_105938364(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined *param_5,long param_6,long param_7,long param_8,long param_9,
                  long param_10,long param_11,undefined1 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126c0510;
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar1,param_2,param_5);
  if (-1 < param_6) {
    func_0x00010c1b6b80(puVar1,param_2,param_6);
  }
  if (-1 < param_7) {
    func_0x00010c1a0480(puVar1,param_2,param_7);
  }
  if (-1 < param_8) {
    func_0x00010c1a0460(puVar1,param_2,param_8);
  }
  if (-1 < param_9) {
    func_0x00010c1ed160(puVar1,param_2,param_9);
  }
  if (param_11 != 0) {
    func_0x00010c18bb80(puVar1,param_2,param_11);
  }
  func_0x00010c0a1b40(param_1,param_2,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  _objc_retain(param_11);
  lVar3 = param_11;
  func_0x00010bf52a60(param_11,param_2,&uStack_210,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar22 = *plStack_200;
    do {
      lVar23 = 0;
      do {
        if (*plStack_200 != lVar22) {
          _objc_enumerationMutation(param_11);
        }
        lVar4 = *(long *)(lStack_208 + lVar23 * 8);
        func_0x00010bf0a640();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010befa120(puVar2,param_2,lVar4);
        }
        _objc_release(lVar4);
        lVar23 = lVar23 + 1;
      } while (lVar3 != lVar23);
      lVar3 = param_11;
      func_0x00010bf52a60(param_11,param_2,&uStack_210,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_11);
  func_0x00010bac5a88();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_148 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar6 = param_5;
  puStack_120 = puVar5;
  if (param_5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_140 = &PTR____CFConstantStringClassReference_110e0fc78;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_118 = puVar6;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110e0fb78;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar7;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_130 = &PTR____CFConstantStringClassReference_110e0f1f8;
  puVar9 = puVar2;
  puStack_108 = puVar8;
  if (puVar2 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_128 = &PTR____CFConstantStringClassReference_110e0f218;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_100 = puVar9;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_12);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f8 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_120,&ppuStack_150,6)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,param_3,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126c04d8;
  func_0x00010c086ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c04d8;
  func_0x00010c086ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar7);
  puVar5 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_12);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110e0f218,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar7);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar13);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar13);
  _objc_release(uVar12);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar13);
  _objc_release(uVar12);
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  _objc_retain(param_10);
  puVar21 = &uStack_250;
  lVar3 = param_10;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar22 = *plStack_240;
    do {
      lVar23 = 0;
      do {
        if (*plStack_240 != lVar22) {
          _objc_enumerationMutation(param_10);
        }
        uVar24 = *(undefined8 *)(lStack_248 + lVar23 * 8);
        puVar6 = PTR_PTR_1126c04d8;
        func_0x00010c086ee0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar6;
        func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar7);
        uVar13 = uVar24;
        func_0x00010c25d700(uVar24);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar9;
        func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110dd8fd8,uVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(uVar13);
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010bfac460();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_10;
        func_0x00010bf52b00(param_10,param_2,uVar24);
        func_0x00010bfec320(uVar13,param_2,puVar6,lVar4);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(puVar6);
        lVar23 = lVar23 + 1;
      } while (lVar3 != lVar23);
      puVar21 = &uStack_250;
      lVar3 = param_10;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_10);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar21);
  puVar14 = puVar21;
  func_0x00010c0e00e0(puVar21,param_2,&PTR____CFConstantStringClassReference_110dab0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf1f3c0();
  _objc_release(puVar14);
  puVar14 = puVar21;
  func_0x00010c0e00e0(puVar21,param_2,&PTR____CFConstantStringClassReference_110e0f1b8);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c0b4ca0();
  _objc_release(puVar14);
  puVar14 = puVar21;
  func_0x00010c0e00e0(puVar21,param_2,&PTR____CFConstantStringClassReference_110e0f198);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  func_0x00010c0b4ca0();
  _objc_release(puVar14);
  puVar14 = puVar21;
  func_0x00010c0e00e0(puVar21,param_2,&PTR____CFConstantStringClassReference_110dae8d8);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar21;
  func_0x00010c0e00e0(puVar21,param_2,&PTR____CFConstantStringClassReference_110e0f1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar21;
  func_0x00010c0e00e0(puVar21,param_2,&PTR____CFConstantStringClassReference_110e0f1f8);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar21;
  func_0x00010c0e00e0(puVar21,param_2,&PTR____CFConstantStringClassReference_110e0f218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  puVar21 = puVar20;
  func_0x00010bf1f3c0();
  _objc_release(puVar20);
  func_0x00010be550c0(param_5,param_2,0,puVar15,puVar14,puVar16,9999,puVar17,9999,puVar18,puVar19,
                      (char)puVar21);
  _objc_release(puVar19);
  _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 105938b00; end: 105938ca3; -[SCFideliusLogger logKeysReceive:] */

void FUN_105938b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dab0d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0f1b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0b4ca0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0f198);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0b4ca0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae8d8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0f1d8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0f1f8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0f218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar8 = uVar7;
  func_0x00010bf1f3c0();
  _objc_release(uVar7);
  func_0x00010be550c0(param_1,param_2,0,uVar2,uVar1,uVar3,9999,uVar4,9999,uVar5,uVar6,(char)uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105938ca4; end: 105938d17; -[SCFideliusLogger logUnwrappedKeysCheck:failureReason:] */

void FUN_105938ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0518;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c226700();
  func_0x00010c19a060(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c0a1b40(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105938d18; end: 105938db3; -[SCFideliusLogger logSekCryptoOps:result:failureReason:] */

void FUN_105938d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0520;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c197d00();
  func_0x00010c1d5a20(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c19a060(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c0a1b40(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105938db4; end: 1059390ab; -[SCFideliusLogger logServerBetaMatch:mismatchCount:loadingStatus:keyAvailable:] */

void FUN_105938db4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined4 param_6)

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
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined4 uStack_ac;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c0528;
  _objc_alloc_init();
  func_0x00010c226700();
  if (-1 < param_4) {
    func_0x00010c1c8680(puVar1);
  }
  func_0x00010c19b760(puVar1);
  func_0x00010c0a1b40(param_1);
  puVar2 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e0fc98;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e0fcb8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar3;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110daf4d8;
  puVar5 = param_5;
  puStack_80 = puVar4;
  if (param_5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e0fcd8;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar5;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_ac = param_6;
  puStack_70 = puVar14;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1);
  _objc_release(puVar6);
  _objc_release(puVar14);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c15efc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 1;
  puVar10 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar2 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_f8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_b8 = FUN_1059390ac;
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = puVar14;
  puStack_108 = puVar5;
  puStack_100 = puVar4;
  puStack_f0 = puVar6;
  puStack_e8 = puVar3;
  uStack_e0 = uVar8;
  uStack_d8 = uVar7;
  puStack_d0 = puVar1;
  puStack_c8 = param_5;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(uVar12);
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x3032000000;
  pcStack_168 = FUN_105939420;
  uStack_160 = 0x105939430;
  uStack_158 = 0;
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_105939420;
  uStack_190 = 0x105939430;
  uStack_188 = 0;
  func_0x00010c0bff40(uVar12);
  puVar1 = PTR_PTR_1126c0530;
  _objc_alloc_init(PTR_PTR_1126c0530);
  func_0x00010c206c40();
  func_0x00010c183b80(puVar1);
  func_0x00010c1c6f00(puVar1);
  func_0x00010c0a1b40(puVar2);
  puVar3 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar4 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_148 = &PTR____CFConstantStringClassReference_110e0fcf8;
  puVar14 = (undefined *)puStack_178[5];
  puVar5 = puVar14;
  puStack_138 = puVar4;
  if (puVar14 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_140 = &PTR____CFConstantStringClassReference_110e0fd18;
  puVar13 = (undefined *)puStack_1a8[5];
  puVar6 = puVar13;
  puStack_130 = puVar5;
  if (puVar13 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_128 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2);
  _objc_release(puVar9);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010c13f780(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(uStack_158);
  _objc_release(uVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_120) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_1b0,8);
    lVar11 = 8;
    __Block_object_dispose(&uStack_180);
    __Unwind_Resume();
    *(undefined8 *)(puVar10 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 1059390ac; end: 10593941f; -[SCFideliusLogger logClientRetryInit:retryId:] */

void FUN_1059390ac(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_105939420;
  uStack_b0 = 0x105939430;
  uStack_a8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_105939420;
  uStack_e0 = 0x105939430;
  uStack_d8 = 0;
  func_0x00010c0bff40(param_4);
  puVar1 = PTR_PTR_1126c0530;
  _objc_alloc_init(PTR_PTR_1126c0530);
  func_0x00010c206c40();
  func_0x00010c183b80(puVar1);
  func_0x00010c1c6f00(puVar1);
  func_0x00010c0a1b40(param_1);
  puVar2 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e0fcf8;
  puVar11 = (undefined *)puStack_c8[5];
  puVar4 = puVar11;
  puStack_88 = puVar3;
  if (puVar11 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e0fd18;
  puVar10 = (undefined *)puStack_f8[5];
  puVar5 = puVar10;
  puStack_80 = puVar4;
  if (puVar10 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1);
  _objc_release(puVar6);
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (puVar11 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c13f780(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_100,8);
    lVar9 = 8;
    __Block_object_dispose(&uStack_d0);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 105939420; end: 10593943b;  */

void FUN_105939420(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10593943c; end: 10593953b;  */

void FUN_10593943c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_retain(param_2);
  _objc_alloc();
  uVar4 = param_2;
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c057e80();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cb5a0(param_2);
  _objc_release(param_2);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593953c; end: 105939693; -[SCFideliusLogger logSnapSendClear:] */

void FUN_10593953c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c0538;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  lVar2 = param_1;
  func_0x00010bfc5020(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f798,param_3);
  _objc_release(param_3);
  if (-1 < lVar2) {
    func_0x00010c1d5a40(puVar1,param_2,lVar2);
  }
  func_0x00010c0a1b40(param_1,param_2,puVar1);
  puVar3 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,puVar3,0);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010c242fc0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105939694; end: 105939c47; -[SCFideliusLogger logAckRetry:withBackground:source:withArroyo:withCrossDeviceRetry:failureReason:uniqueId:messageId:conversationId:] */

void FUN_105939694(ulong param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6,uint param_7,undefined *param_8,
                  undefined8 param_9,undefined *param_10,undefined *param_11)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  long lStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  ulong uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  ulong uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined **ppuStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  ulong uStack_130;
  undefined *puStack_128;
  uint uStack_11c;
  undefined *puStack_118;
  undefined4 uStack_10c;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  uint uStack_ec;
  ulong uStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_6;
  uStack_ec = param_7;
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar2 = PTR_PTR_1126c0540;
  _objc_retain(param_9);
  _objc_alloc_init();
  puStack_f8 = param_3;
  func_0x00010c197d00();
  uVar1 = uStack_ec;
  uStack_10c = (undefined4)param_4;
  func_0x00010c225d60(puVar2,param_2,param_4);
  func_0x00010c206c40(puVar2,param_2,param_5);
  func_0x00010c225c40(puVar2,param_2,param_6);
  func_0x00010c19a060(puVar2,param_2,param_8);
  func_0x00010c2260a0(puVar2,param_2,uVar1);
  func_0x00010c1c6f00(puVar2,param_2,param_10);
  puStack_108 = param_11;
  func_0x00010c183b80(puVar2,param_2,param_11);
  uStack_e8 = param_1;
  func_0x00010bfc5020(param_1,param_2,&PTR____CFConstantStringClassReference_110e0e878,param_9);
  _objc_release(param_9);
  if (-1 < (long)param_1) {
    func_0x00010c1d5a40(puVar2,param_2,param_1);
  }
  uStack_130 = param_1;
  func_0x00010c0a1b40(uStack_e8,param_2,puVar2);
  puVar3 = puStack_f8;
  func_0x00010bac5a24();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110dcdfb8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_100 = puVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_10c);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puStack_138 = param_5;
  puStack_128 = puVar4;
  puStack_118 = param_5;
  puStack_a8 = puVar4;
  if (param_5 == (undefined *)0x0) {
    puStack_138 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110de9e38;
  uStack_11c = (uint)param_6;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puStack_138;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e0e8d8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110daf558;
  puVar9 = param_8;
  puStack_90 = puVar4;
  if (param_8 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110dbb358;
  puVar5 = param_10;
  puStack_88 = puVar9;
  if (param_10 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar11 = puStack_108;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dbb338;
  puVar6 = puStack_108;
  puStack_80 = puVar5;
  if (puStack_108 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_a8,&ppuStack_e0,7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puStack_100;
  func_0x00010befc100(uStack_e8,param_2,puStack_100,puVar7);
  _objc_release(puVar7);
  if (puVar11 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  if (param_10 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  uVar18 = (ulong)uStack_ec;
  if (param_8 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puStack_118;
  uVar19 = (ulong)uStack_11c;
  if (puStack_118 == (undefined *)0x0) {
    _objc_release(puStack_138);
  }
  _objc_release(puStack_128);
  _objc_release(puStack_100);
  if (puStack_f8 == (undefined *)0x1) {
    puVar6 = PTR_PTR_1126c04d8;
    func_0x00010c13f4c0();
    _objc_retainAutoreleasedReturnValue();
LAB_105939a20:
    if (puVar6 != (undefined *)0x0) {
      puVar4 = puVar6;
      func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_10c);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dcdfb8,puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar9);
      puVar4 = puVar5;
      func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dce878,param_8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110de9e38,puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar9);
      puVar11 = puStack_108;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110e0e8d8,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar18 = uStack_e8;
      uVar8 = *(undefined8 *)(uStack_e8 + 0x20);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar8;
      func_0x00010bfac460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec320();
      _objc_release(uVar16);
      _objc_release(uVar8);
      puVar9 = *(undefined **)(uVar18 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar9;
      func_0x00010bfac460();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010befbfe0();
      _objc_release(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar6);
    }
  }
  else if (puStack_f8 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126c04d8;
    func_0x00010c13f920();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105939a20;
  }
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(param_10);
  _objc_release(param_8);
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_178 = puVar3;
  pcStack_148 = FUN_105939c48;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = puVar2;
  puStack_170 = puVar11;
  puStack_168 = puVar4;
  puStack_160 = puVar9;
  puStack_158 = puVar6;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  puVar2 = PTR_PTR_1126c0548;
  _objc_alloc_init();
  func_0x00010c206c40();
  func_0x00010c0a1b40(puVar5,param_2,puVar2);
  puVar3 = puVar2;
  func_0x00010bfc52e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_198 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar4 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_190 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_190,&ppuStack_198,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010befc100(puVar5,param_2,puVar3,puVar9);
  _objc_release(puVar9);
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar6 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_105939d7c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1e0 = puVar9;
  puStack_1d8 = puVar4;
  puStack_1d0 = puVar3;
  puStack_1c8 = puVar5;
  puStack_1c0 = puVar2;
  puStack_1b8 = puVar10;
  ppuStack_1b0 = &puStack_150;
  _objc_retain(puVar11);
  puVar2 = PTR_PTR_1126c0550;
  _objc_alloc_init();
  func_0x00010c206c40();
  func_0x00010c0a1b40(puVar6,param_2,puVar2);
  puVar3 = puVar2;
  func_0x00010bfc52e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar4 = puVar11;
  if (puVar11 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar16 = 1;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1f0 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1f0,&ppuStack_1f8,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  puVar7 = puVar9;
  func_0x00010befc100(puVar6);
  _objc_release(puVar9);
  if (puVar11 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar10 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_105939eb0;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_250 = uVar18;
  puStack_248 = param_8;
  puStack_240 = puVar9;
  puStack_238 = puVar4;
  puStack_230 = puVar3;
  puStack_228 = puVar6;
  puStack_220 = puVar2;
  puStack_218 = puVar11;
  ppuStack_210 = &ppuStack_1b0;
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  puVar2 = PTR_PTR_1126c0560;
  _objc_alloc_init();
  func_0x00010c1d5a20();
  func_0x00010c206c40(puVar2,param_2,puVar7);
  func_0x00010c2268a0(puVar2,param_2,uVar16);
  func_0x00010c0a1b40(puVar10,param_2,puVar2);
  puVar3 = puVar2;
  func_0x00010bfc52e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_278 = &PTR____CFConstantStringClassReference_110dce878;
  puVar4 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_270 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar9 = puVar7;
  puStack_268 = puVar4;
  if (puVar7 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_260 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_268,&ppuStack_278,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar10,param_2,puVar3,puVar11);
  _objc_release(puVar11);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010c105060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dce878,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar8 = *(undefined8 *)(puVar10 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = 1;
  puVar6 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar4 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  puStack_2e0 = param_10;
  pcStack_288 = FUN_10593a108;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126c0568;
  uStack_2d8 = uVar19;
  puStack_2d0 = puVar11;
  puStack_2c8 = puVar9;
  uStack_2c0 = uVar16;
  puStack_2b8 = puVar3;
  uStack_2b0 = uVar8;
  puStack_2a8 = puVar2;
  puStack_2a0 = puVar7;
  puStack_298 = puVar5;
  ppuStack_290 = &ppuStack_210;
  _objc_alloc_init();
  func_0x00010c226b20();
  if (-1 < lVar14) {
    func_0x00010c1d6ac0(puVar10,param_2,lVar14);
  }
  func_0x00010c0a1b40(puVar4,param_2,puVar10);
  puVar2 = puVar10;
  func_0x00010bfc52e0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_308 = &PTR____CFConstantStringClassReference_110e0fd58;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_300 = &PTR____CFConstantStringClassReference_110e0fd78;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2f8 = puVar3;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined *)0x2;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2f0 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_2f8,&ppuStack_308);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar4,param_2,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c2926e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0fd58,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e0fd78,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar11);
  uVar8 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 1;
  puVar11 = puVar12;
  func_0x00010bfec320();
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(puVar12);
  puVar4 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_318 = FUN_10593a37c;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_370 = puVar5;
  puStack_368 = puVar9;
  puStack_360 = puVar3;
  puStack_358 = puVar2;
  puStack_350 = puVar6;
  puStack_348 = puVar12;
  puStack_340 = puVar7;
  uStack_338 = uVar16;
  uStack_330 = uVar8;
  puStack_328 = puVar10;
  ppuStack_320 = &ppuStack_290;
  _objc_retain(puVar17);
  _objc_retain(puVar13);
  puVar2 = PTR_PTR_1126c0570;
  _objc_alloc_init();
  func_0x00010c197d00();
  func_0x00010c226f80(puVar2,param_2,uVar15);
  func_0x00010c183b80(puVar2,param_2,puVar17);
  func_0x00010c1c6f00(puVar2,param_2,puVar13);
  func_0x00010c0a1b40(puVar4,param_2,puVar2);
  func_0x00010bac5b30();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3a8 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3a0 = &PTR____CFConstantStringClassReference_110e0fd98;
  puVar9 = puVar17;
  puStack_390 = puVar3;
  if (puVar17 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_398 = &PTR____CFConstantStringClassReference_110e0fdb8;
  puVar5 = puVar13;
  puStack_388 = puVar9;
  if (puVar13 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar14 = 3;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_380 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_390,&ppuStack_3a8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar11;
  puVar7 = puVar10;
  func_0x00010befc100(puVar4,param_2,puVar11,puVar10);
  _objc_release(puVar10);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  _objc_release(puVar3);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = PTR_PTR_1126c0578;
  _objc_retain(puVar7);
  _objc_alloc_init(puVar13);
  func_0x00010c197d00();
  puVar2 = puVar17;
  func_0x00010bfc5020(puVar17,param_2,&PTR____CFConstantStringClassReference_110e0f7d8,puVar7);
  _objc_release(puVar7);
  if (-1 < (long)puVar2) {
    func_0x00010c1d5a40(puVar13,param_2,puVar2);
  }
  if (-1 < lVar14) {
    func_0x00010c1edfc0(puVar13,param_2,lVar14);
  }
  func_0x00010c0a1b40(puVar17,param_2,puVar13);
  puVar2 = PTR_PTR_1126c04d8;
  if (puVar6 == (undefined *)0x4) {
    func_0x00010bfe3c00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar6 != (undefined *)0x2) goto LAB_10593a698;
    func_0x00010bfbf6e0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 != (undefined *)0x0) {
    uVar8 = *(undefined8 *)(puVar17 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar8;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar16);
    _objc_release(uVar8);
    _objc_release(puVar2);
  }
LAB_10593a698:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 105939c48; end: 105939d7b; -[SCFideliusLogger logDeviceRemoved:] */

void FUN_105939c48(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 **ppuStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0548;
  _objc_alloc_init();
  func_0x00010c206c40();
  func_0x00010c0a1b40(param_1,param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010bfc52e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010befc100(param_1,param_2,puVar2,puVar4);
  _objc_release(puVar4);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_105939d7c;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = puVar4;
  puStack_98 = puVar3;
  puStack_90 = puVar2;
  uStack_88 = param_1;
  puStack_80 = puVar1;
  puStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar1 = PTR_PTR_1126c0550;
  _objc_alloc_init();
  func_0x00010c206c40();
  func_0x00010c0a1b40(puVar5,param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010bfc52e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar14 = 1;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_b0 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b0,&ppuStack_b8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  puVar9 = puVar4;
  func_0x00010befc100(puVar5);
  _objc_release(puVar4);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_105939eb0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d0 = &puStack_70;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puVar1 = PTR_PTR_1126c0560;
  _objc_alloc_init();
  func_0x00010c1d5a20();
  func_0x00010c206c40(puVar1,param_2,puVar9);
  func_0x00010c2268a0(puVar1,param_2,uVar14);
  func_0x00010c0a1b40(puVar6,param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110dce878;
  puVar3 = puVar8;
  if (puVar8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_130 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar4 = puVar9;
  puStack_128 = puVar3;
  if (puVar9 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_120 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_128,&ppuStack_138,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar6,param_2,puVar2,puVar5);
  _objc_release(puVar5);
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c105060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dce878,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(puVar6 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar7;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = 1;
  puVar3 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar14);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10593a108;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c0568;
  ppuStack_150 = &ppuStack_d0;
  _objc_alloc_init();
  func_0x00010c226b20();
  if (-1 < lVar12) {
    func_0x00010c1d6ac0(puVar1,param_2,lVar12);
  }
  func_0x00010c0a1b40(puVar8,param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e0fd58;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110e0fd78;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1b8 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = (undefined *)0x2;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1b0 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1b8,&ppuStack_1c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar8,param_2,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c2926e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0fd58,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0fd78,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar9);
  uVar7 = *(undefined8 *)(puVar8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar7;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 1;
  puVar9 = puVar11;
  func_0x00010bfec320();
  _objc_release(uVar14);
  _objc_release(uVar7);
  _objc_release(puVar11);
  puVar8 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_10593a37c;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_230 = puVar5;
  puStack_228 = puVar6;
  puStack_220 = puVar4;
  puStack_218 = puVar2;
  puStack_210 = puVar3;
  puStack_208 = puVar11;
  puStack_200 = puVar10;
  uStack_1f8 = uVar14;
  uStack_1f0 = uVar7;
  puStack_1e8 = puVar1;
  ppuStack_1e0 = &ppuStack_150;
  _objc_retain(puVar15);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c0570;
  _objc_alloc_init();
  func_0x00010c197d00();
  func_0x00010c226f80(puVar1,param_2,uVar13);
  func_0x00010c183b80(puVar1,param_2,puVar15);
  func_0x00010c1c6f00(puVar1,param_2,param_6);
  func_0x00010c0a1b40(puVar8,param_2,puVar1);
  func_0x00010bac5b30();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_268 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_260 = &PTR____CFConstantStringClassReference_110e0fd98;
  puVar3 = puVar15;
  puStack_250 = puVar2;
  if (puVar15 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_258 = &PTR____CFConstantStringClassReference_110e0fdb8;
  puVar4 = param_6;
  puStack_248 = puVar3;
  if (param_6 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar12 = 3;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_240 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_250,&ppuStack_268);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar9;
  puVar5 = puVar10;
  func_0x00010befc100(puVar8,param_2,puVar9,puVar10);
  _objc_release(puVar10);
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (puVar15 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c0578;
  _objc_retain(puVar5);
  _objc_alloc_init(puVar1);
  func_0x00010c197d00();
  puVar2 = puVar15;
  func_0x00010bfc5020(puVar15,param_2,&PTR____CFConstantStringClassReference_110e0f7d8,puVar5);
  _objc_release(puVar5);
  if (-1 < (long)puVar2) {
    func_0x00010c1d5a40(puVar1,param_2,puVar2);
  }
  if (-1 < lVar12) {
    func_0x00010c1edfc0(puVar1,param_2,lVar12);
  }
  func_0x00010c0a1b40(puVar15,param_2,puVar1);
  puVar2 = PTR_PTR_1126c04d8;
  if (puVar6 == (undefined *)0x4) {
    func_0x00010bfe3c00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar6 != (undefined *)0x2) goto LAB_10593a698;
    func_0x00010bfbf6e0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(puVar15 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar7;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar14);
    _objc_release(uVar7);
    _objc_release(puVar2);
  }
LAB_10593a698:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105939d7c; end: 105939eaf; -[SCFideliusLogger logAppInvalidation:] */

void FUN_105939d7c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 **ppuStack_180;
  code *pcStack_178;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0550;
  _objc_alloc_init();
  func_0x00010c206c40();
  func_0x00010c0a1b40(param_1,param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010bfc52e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar14 = 1;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  puVar8 = puVar4;
  func_0x00010befc100(param_1);
  _objc_release(puVar4);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_105939eb0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar1 = PTR_PTR_1126c0560;
  _objc_alloc_init();
  func_0x00010c1d5a20();
  func_0x00010c206c40(puVar1,param_2,puVar8);
  func_0x00010c2268a0(puVar1,param_2,uVar14);
  func_0x00010c0a1b40(param_3,param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110dce878;
  puVar3 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar4 = puVar8;
  puStack_c8 = puVar3;
  if (puVar8 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c0 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c8,&ppuStack_d8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_3,param_2,puVar2,puVar5);
  _objc_release(puVar5);
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c105060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dce878,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = 1;
  puVar3 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10593a108;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c0568;
  ppuStack_f0 = &puStack_70;
  _objc_alloc_init();
  func_0x00010c226b20();
  if (-1 < lVar12) {
    func_0x00010c1d6ac0(puVar1,param_2,lVar12);
  }
  func_0x00010c0a1b40(puVar7,param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_168 = &PTR____CFConstantStringClassReference_110e0fd58;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_160 = &PTR____CFConstantStringClassReference_110e0fd78;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_158 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = (undefined *)0x2;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_150 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_158,&ppuStack_168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar7,param_2,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c2926e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0fd58,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0fd78,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar9);
  uVar6 = *(undefined8 *)(puVar7 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 1;
  puVar9 = puVar11;
  func_0x00010bfec320();
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(puVar11);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_10593a37c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d0 = puVar5;
  puStack_1c8 = puVar8;
  puStack_1c0 = puVar4;
  puStack_1b8 = puVar2;
  puStack_1b0 = puVar3;
  puStack_1a8 = puVar11;
  puStack_1a0 = puVar10;
  uStack_198 = uVar14;
  uStack_190 = uVar6;
  puStack_188 = puVar1;
  ppuStack_180 = &ppuStack_f0;
  _objc_retain(puVar15);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c0570;
  _objc_alloc_init();
  func_0x00010c197d00();
  func_0x00010c226f80(puVar1,param_2,uVar13);
  func_0x00010c183b80(puVar1,param_2,puVar15);
  func_0x00010c1c6f00(puVar1,param_2,param_6);
  func_0x00010c0a1b40(puVar7,param_2,puVar1);
  func_0x00010bac5b30();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_208 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_200 = &PTR____CFConstantStringClassReference_110e0fd98;
  puVar3 = puVar15;
  puStack_1f0 = puVar2;
  if (puVar15 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110e0fdb8;
  puVar4 = param_6;
  puStack_1e8 = puVar3;
  if (param_6 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar12 = 3;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1e0 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1f0,&ppuStack_208);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  puVar5 = puVar10;
  func_0x00010befc100(puVar7,param_2,puVar9,puVar10);
  _objc_release(puVar10);
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (puVar15 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c0578;
  _objc_retain(puVar5);
  _objc_alloc_init(puVar1);
  func_0x00010c197d00();
  puVar2 = puVar15;
  func_0x00010bfc5020(puVar15,param_2,&PTR____CFConstantStringClassReference_110e0f7d8,puVar5);
  _objc_release(puVar5);
  if (-1 < (long)puVar2) {
    func_0x00010c1d5a40(puVar1,param_2,puVar2);
  }
  if (-1 < lVar12) {
    func_0x00010c1edfc0(puVar1,param_2,lVar12);
  }
  func_0x00010c0a1b40(puVar15,param_2,puVar1);
  puVar2 = PTR_PTR_1126c04d8;
  if (puVar8 == (undefined *)0x4) {
    func_0x00010bfe3c00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar8 != (undefined *)0x2) goto LAB_10593a698;
    func_0x00010bfbf6e0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 != (undefined *)0x0) {
    uVar6 = *(undefined8 *)(puVar15 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar14);
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
LAB_10593a698:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105939eb0; end: 10593a107; -[SCFideliusLogger logPostServerInit:source:withNilIwek:] */

void FUN_105939eb0(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0560;
  _objc_alloc_init();
  func_0x00010c1d5a20();
  func_0x00010c206c40(puVar1,param_2,param_4);
  func_0x00010c2268a0(puVar1,param_2,param_5);
  func_0x00010c0a1b40(param_1,param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dce878;
  puVar3 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar4 = param_4;
  puStack_68 = puVar3;
  if (param_4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,puVar2,puVar5);
  _objc_release(puVar5);
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c105060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dce878,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = 1;
  puVar3 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10593a108;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c0568;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_alloc_init();
  func_0x00010c226b20();
  if (-1 < lVar13) {
    func_0x00010c1d6ac0(puVar1,param_2,lVar13);
  }
  func_0x00010c0a1b40(param_3,param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110e0fd58;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110e0fd78;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f8 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = (undefined *)0x2;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f0 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_f8,&ppuStack_108);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_3,param_2,puVar2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c2926e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0fd58,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0fd78,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar9);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 1;
  puVar12 = puVar11;
  func_0x00010bfec320();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar11);
  puVar9 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10593a37c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = puVar8;
  puStack_168 = puVar5;
  puStack_160 = puVar4;
  puStack_158 = puVar2;
  puStack_150 = puVar3;
  puStack_148 = puVar11;
  puStack_140 = puVar10;
  uStack_138 = uVar7;
  uStack_130 = uVar6;
  puStack_128 = puVar1;
  ppuStack_120 = &puStack_90;
  _objc_retain(puVar15);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c0570;
  _objc_alloc_init();
  func_0x00010c197d00();
  func_0x00010c226f80(puVar1,param_2,uVar14);
  func_0x00010c183b80(puVar1,param_2,puVar15);
  func_0x00010c1c6f00(puVar1,param_2,param_6);
  func_0x00010c0a1b40(puVar9,param_2,puVar1);
  func_0x00010bac5b30();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110e0fd98;
  puVar3 = puVar15;
  puStack_190 = puVar2;
  if (puVar15 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_198 = &PTR____CFConstantStringClassReference_110e0fdb8;
  puVar4 = param_6;
  puStack_188 = puVar3;
  if (param_6 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar13 = 3;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_180 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_190,&ppuStack_1a8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar12;
  puVar8 = puVar10;
  func_0x00010befc100(puVar9,param_2,puVar12,puVar10);
  _objc_release(puVar10);
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (puVar15 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c0578;
  _objc_retain(puVar8);
  _objc_alloc_init(puVar1);
  func_0x00010c197d00();
  puVar2 = puVar15;
  func_0x00010bfc5020(puVar15,param_2,&PTR____CFConstantStringClassReference_110e0f7d8,puVar8);
  _objc_release(puVar8);
  if (-1 < (long)puVar2) {
    func_0x00010c1d5a40(puVar1,param_2,puVar2);
  }
  if (-1 < lVar13) {
    func_0x00010c1edfc0(puVar1,param_2,lVar13);
  }
  func_0x00010c0a1b40(puVar15,param_2,puVar1);
  puVar2 = PTR_PTR_1126c04d8;
  if (puVar5 == (undefined *)0x4) {
    func_0x00010bfe3c00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar5 != (undefined *)0x2) goto LAB_10593a698;
    func_0x00010bfbf6e0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 != (undefined *)0x0) {
    uVar6 = *(undefined8 *)(puVar15 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
LAB_10593a698:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593a108; end: 10593a37b; -[SCFideliusLogger logUserIdentityCreated:numOtherIdentities:] */

void FUN_10593a108(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c0568;
  _objc_alloc_init();
  func_0x00010c226b20();
  if (-1 < param_4) {
    func_0x00010c1d6ac0(puVar1,param_2,param_4);
  }
  func_0x00010c0a1b40(param_1,param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e0fd58;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e0fd78;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar3;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = (undefined *)0x2;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c2926e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0fd58,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110e0fd78,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 1;
  puVar12 = puVar9;
  func_0x00010bfec320();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10593a37c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = puVar5;
  puStack_e8 = puVar4;
  puStack_e0 = puVar3;
  puStack_d8 = puVar2;
  puStack_d0 = puVar7;
  puStack_c8 = puVar9;
  puStack_c0 = puVar8;
  uStack_b8 = uVar11;
  uStack_b0 = uVar10;
  puStack_a8 = puVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar14);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c0570;
  _objc_alloc_init();
  func_0x00010c197d00();
  func_0x00010c226f80(puVar1,param_2,uVar13);
  func_0x00010c183b80(puVar1,param_2,puVar14);
  func_0x00010c1c6f00(puVar1,param_2,param_6);
  func_0x00010c0a1b40(puVar6,param_2,puVar1);
  func_0x00010bac5b30();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110e0fd98;
  puVar3 = puVar14;
  puStack_110 = puVar2;
  if (puVar14 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e0fdb8;
  puVar4 = param_6;
  puStack_108 = puVar3;
  if (param_6 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar15 = 3;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_110,&ppuStack_128);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar12;
  puVar7 = puVar8;
  func_0x00010befc100(puVar6,param_2,puVar12,puVar8);
  _objc_release(puVar8);
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c0578;
  _objc_retain(puVar7);
  _objc_alloc_init(puVar1);
  func_0x00010c197d00();
  puVar2 = puVar14;
  func_0x00010bfc5020(puVar14,param_2,&PTR____CFConstantStringClassReference_110e0f7d8,puVar7);
  _objc_release(puVar7);
  if (-1 < (long)puVar2) {
    func_0x00010c1d5a40(puVar1,param_2,puVar2);
  }
  if (-1 < lVar15) {
    func_0x00010c1edfc0(puVar1,param_2,lVar15);
  }
  func_0x00010c0a1b40(puVar14,param_2,puVar1);
  puVar2 = PTR_PTR_1126c04d8;
  if (puVar5 == (undefined *)0x4) {
    func_0x00010bfe3c00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar5 != (undefined *)0x2) goto LAB_10593a698;
    func_0x00010bfbf6e0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 != (undefined *)0x0) {
    uVar10 = *(undefined8 *)(puVar14 + 0x20);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar2);
  }
LAB_10593a698:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593a37c; end: 10593a577; -[SCFideliusLogger logSekDiskOps:withSuccess:ConversationID:MessageID:] */

void FUN_10593a37c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c0570;
  _objc_alloc_init();
  func_0x00010c197d00();
  func_0x00010c226f80(puVar1,param_2,param_4);
  func_0x00010c183b80(puVar1,param_2,param_5);
  func_0x00010c1c6f00(puVar1,param_2,param_6);
  func_0x00010c0a1b40(param_1,param_2,puVar1);
  func_0x00010bac5b30();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e0fd98;
  puVar3 = param_5;
  puStack_80 = puVar2;
  if (param_5 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e0fdb8;
  puVar4 = param_6;
  puStack_78 = puVar3;
  if (param_6 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar10 = 3;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_98);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  puVar9 = puVar5;
  func_0x00010befc100(param_1,param_2,param_3,puVar5);
  _objc_release(puVar5);
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c0578;
  _objc_retain(puVar9);
  _objc_alloc_init(puVar1);
  func_0x00010c197d00();
  puVar2 = param_5;
  func_0x00010bfc5020(param_5,param_2,&PTR____CFConstantStringClassReference_110e0f7d8,puVar9);
  _objc_release(puVar9);
  if (-1 < (long)puVar2) {
    func_0x00010c1d5a40(puVar1,param_2,puVar2);
  }
  if (-1 < lVar10) {
    func_0x00010c1edfc0(puVar1,param_2,lVar10);
  }
  func_0x00010c0a1b40(param_5,param_2,puVar1);
  puVar2 = PTR_PTR_1126c04d8;
  if (lVar8 == 4) {
    func_0x00010bfe3c00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar8 != 2) goto LAB_10593a698;
    func_0x00010bfbf6e0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 != (undefined *)0x0) {
    uVar6 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
LAB_10593a698:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593a578; end: 10593a6af; -[SCFideliusLogger logOpsLatency:uniqueId:rewrapCount:] */

void FUN_10593a578(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c0578;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c197d00();
  lVar2 = param_1;
  func_0x00010bfc5020(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f7d8,param_4);
  _objc_release(param_4);
  if (-1 < lVar2) {
    func_0x00010c1d5a40(puVar1,param_2,lVar2);
  }
  if (-1 < param_5) {
    func_0x00010c1edfc0(puVar1,param_2,param_5);
  }
  func_0x00010c0a1b40(param_1,param_2,puVar1);
  puVar3 = PTR_PTR_1126c04d8;
  if (param_3 == 4) {
    func_0x00010bfe3c00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 2) goto LAB_10593a698;
    func_0x00010bfbf6e0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar3 != (undefined *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
LAB_10593a698:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593a6b0; end: 10593a98b; -[SCFideliusLogger logNotReady:action:withUserSession:withIdentity:withDatabaseManager:loadingStatus:] */

void FUN_10593a6b0(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined *param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_6;
  uVar10 = param_7;
  puVar8 = param_8;
  _objc_retain(param_4);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126c0580;
  _objc_alloc_init();
  func_0x00010c197d00();
  func_0x00010c161620(puVar2,param_2,param_4);
  func_0x00010c227100(puVar2,param_2,param_5);
  func_0x00010c2264a0(puVar2,param_2,param_6);
  func_0x00010c226100(puVar2,param_2,param_7);
  func_0x00010c19b760(puVar2,param_2,param_8);
  func_0x00010c0a1b40(param_1,param_2,puVar2);
  puVar3 = param_3;
  func_0x00010bac5acc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110daf5b8;
  puVar4 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_80 = &PTR____CFConstantStringClassReference_110daf4d8;
  puVar5 = param_8;
  puStack_78 = puVar4;
  if (param_8 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = (undefined *)0x2;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  puVar12 = puVar6;
  func_0x00010befc100(param_1);
  _objc_release(puVar6);
  if (param_8 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  if (param_3 == (undefined *)0x0) {
    func_0x00010c0db8a0();
    _objc_retainAutoreleasedReturnValue();
LAB_10593a898:
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf5b8,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110daf4d8,param_8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bfac460();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = (undefined *)0x1;
      puVar11 = puVar3;
      func_0x00010bfec320();
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(puVar3);
    }
  }
  else {
    if (param_3 == (undefined *)0x1) {
      func_0x00010bf198e0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10593a898;
    }
    if (param_3 == (undefined *)0x2) {
      func_0x00010c0db9a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10593a898;
    }
  }
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = ppuStack_88;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  puVar2 = PTR_PTR_1126c0588;
  _objc_retain(ppuVar1);
  _objc_retain(uStack_90);
  _objc_retain(puVar8);
  _objc_retain(uVar10);
  _objc_alloc_init(puVar2);
  func_0x00010c197d00();
  func_0x00010c19a060(puVar2,param_2,puVar12);
  func_0x00010c206c40(puVar2,param_2,puVar13);
  func_0x00010c19ba20(puVar2,param_2,puVar14);
  func_0x00010c19f6c0(puVar2,param_2,uVar10);
  _objc_release(uVar10);
  func_0x00010c2182c0(puVar2,param_2,puVar8);
  _objc_release(puVar8);
  func_0x00010c19f720(puVar2,param_2,uStack_90);
  _objc_release(uStack_90);
  func_0x00010c218640(puVar2,param_2,ppuVar1);
  _objc_release(ppuVar1);
  func_0x00010c0a1b40(param_4,param_2,puVar2);
  puVar8 = puVar11;
  func_0x00010bac5a48(puVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110daf558;
  puVar3 = puVar12;
  if (puVar12 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_120 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar4 = puVar13;
  puStack_110 = puVar3;
  if (puVar13 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_118 = &PTR____CFConstantStringClassReference_110df29f8;
  puVar5 = puVar14;
  puStack_108 = puVar4;
  if (puVar14 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_110,&ppuStack_128,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_4,param_2,puVar8,puVar6);
  _objc_release(puVar6);
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (puVar12 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126c04d8;
  if ((long)puVar11 < 5) {
    if (puVar11 == (undefined *)0x0) {
      func_0x00010c2bdcc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar11 != (undefined *)0x1) goto LAB_10593acfc;
      func_0x00010bf15020();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10593ac94:
    puVar3 = puVar8;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  else {
    puVar3 = PTR_PTR_1126c04d8;
    if (puVar11 == (undefined *)0x5) {
      func_0x00010bf70580();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar11 == (undefined *)0x8) {
        func_0x00010bfa0de0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10593ac94;
      }
      if (puVar11 != (undefined *)0x7) goto LAB_10593acfc;
      func_0x00010c256820();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  if (puVar3 != (undefined *)0x0) {
    uVar9 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar3);
  }
LAB_10593acfc:
  _objc_release(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    func_0x00010c0a75a0();
    return;
  }
  return;
}



/* Entry: 10593a98c; end: 10593ad57; -[SCFideliusLogger logGeneralError:failureReason:source:file:freeDiskSpaceMb:totalDiskSpaceMb:freeNodes:totalNodes:] */

void FUN_10593a98c(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c0588;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_alloc_init(puVar1);
  func_0x00010c197d00();
  func_0x00010c19a060(puVar1,param_2,param_4);
  func_0x00010c206c40(puVar1,param_2,param_5);
  func_0x00010c19ba20(puVar1,param_2,param_6);
  func_0x00010c19f6c0(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c2182c0(puVar1,param_2,param_8);
  _objc_release(param_8);
  func_0x00010c19f720(puVar1,param_2,param_9);
  _objc_release(param_9);
  func_0x00010c218640(puVar1,param_2,param_10);
  _objc_release(param_10);
  func_0x00010c0a1b40(param_1,param_2,puVar1);
  lVar2 = param_3;
  func_0x00010bac5a48(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110daf558;
  puVar3 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar4 = param_5;
  puStack_80 = puVar3;
  if (param_5 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110df29f8;
  puVar5 = param_6;
  puStack_78 = puVar4;
  if (param_6 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,lVar2,puVar6);
  _objc_release(puVar6);
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126c04d8;
  if (param_3 < 5) {
    if (param_3 == 0) {
      func_0x00010c2bdcc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != 1) goto LAB_10593acfc;
      func_0x00010bf15020();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10593ac94:
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar4 = PTR_PTR_1126c04d8;
    if (param_3 == 5) {
      func_0x00010bf70580();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 == 8) {
        func_0x00010bfa0de0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10593ac94;
      }
      if (param_3 != 7) goto LAB_10593acfc;
      func_0x00010c256820();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  if (puVar4 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar4);
  }
LAB_10593acfc:
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010c0a75a0();
    return;
  }
  return;
}



/* Entry: 10593ad58; end: 10593ad83; -[SCFideliusLogger logGeneralError:failureReason:source:] */

void FUN_10593ad58(void)

{
  func_0x00010c0a75a0();
  return;
}



/* Entry: 10593ad84; end: 10593add3; -[SCFideliusLogger logCreateUserDbTablesFailure:] */

void FUN_10593ad84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0a49e0(param_1,param_2,0,0,param_3,0,9999,0,0,0,0,0,0,0,0);
  return;
}



/* Entry: 10593add4; end: 10593ae23; -[SCFideliusLogger logDbCloseError] */

void FUN_10593add4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0a49e0(param_1,param_2,3,0,0,0,9999,0,0,0,0,0,0,0,0);
  return;
}



/* Entry: 10593ae24; end: 10593ae7f; -[SCFideliusLogger logDeleteDatabase:source:] */

void FUN_10593ae24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0a49e0(param_1,param_2,8,param_3,0,0,9999,0,param_4,0,0,0,0,0,0);
  return;
}



/* Entry: 10593ae80; end: 10593b1bf; -[SCFideliusLogger logIdentityRestored:position:recordCount:source:storedProtocolVersion:hardcodedProtocolVersion:] */

void FUN_10593ae80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c0598;
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c1e8d60(puVar2,param_2,param_5);
  func_0x00010c206c40(puVar2,param_2,param_6);
  func_0x00010c20c380(puVar2,param_2,param_7);
  uStack_d0 = param_8;
  func_0x00010c1a5600(puVar2,param_2,param_8);
  if ((int)param_3 != 0) {
    func_0x00010c1dee80(puVar2,param_2,param_4);
  }
  func_0x00010c0a1b40(param_1,param_2,puVar2);
  puVar3 = puVar2;
  func_0x00010bfc52e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110daf598;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e0fe18;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar12;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dae8d8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e0fe38;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_d8 = param_6;
  puStack_88 = puVar5;
  lStack_80 = param_6;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e0fe58;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar6;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_98,&ppuStack_c8,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,puVar3,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010bfe6120();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  lVar1 = lStack_d8;
  puVar3 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dae8d8,lStack_d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = (undefined *)0x1;
  puVar4 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar11 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_120 = lVar1;
  pcStack_e8 = FUN_10593b1c0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = uVar10;
  uStack_110 = uVar9;
  puStack_108 = puVar3;
  puStack_100 = puVar2;
  lStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar12);
  ppuStack_148 = &PTR____CFConstantStringClassReference_110dce878;
  puVar2 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_140 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = puVar12;
  puStack_138 = puVar2;
  if (puVar12 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_130 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_138,&ppuStack_148,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(lVar11,param_2,&PTR____CFConstantStringClassReference_110e0f978,puVar5);
  _objc_release(puVar5);
  if (puVar12 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf097c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dce878,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar9 = *(undefined8 *)(lVar11 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 1;
  puVar3 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c04d8;
  _objc_retain(uVar13);
  func_0x00010bf67900(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar12);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf558,uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(puVar3);
  uVar9 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar10);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10593b1c0; end: 10593b3af; -[SCFideliusLogger logArchivedIdentityLoad:source:] */

void FUN_10593b1c0(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dce878;
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar2 = param_4;
  puStack_58 = puVar1;
  if (param_4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f978,puVar3);
  _objc_release(puVar3);
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf097c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dce878,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 1;
  puVar2 = puVar1;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c04d8;
  _objc_retain(uVar6);
  func_0x00010bf67900(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf558,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593b3b0; end: 10593b4c7; -[SCFideliusLogger logDecryptRecryptPush:failureReason:] */

void FUN_10593b3b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c04d8;
  _objc_retain(param_4);
  func_0x00010bf67900(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf558,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593b4c8; end: 10593b74b; -[SCFideliusLogger logSyncKeys:failureReason:source:] */

void FUN_10593b4c8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e0fe78;
  puVar2 = param_4;
  puStack_70 = puVar1;
  if (param_4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = param_5;
  puStack_68 = puVar2;
  if (param_5 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar8 = 3;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f958,puVar4);
  _objc_release(puVar4);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010c2660a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf558,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 1;
  puVar1 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c04d8;
  _objc_retain(uVar8);
  _objc_retain(uVar7);
  func_0x00010bfc5fa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf558,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar8);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593b74c; end: 10593b89f; -[SCFideliusLogger logGetFullReadyKey:failureReason:loadingStatus:] */

void FUN_10593b74c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c04d8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bfc5fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf558,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10593b8a0; end: 10593ba2b; -[SCFideliusLogger logBackfillKeychain:source:] */

void FUN_10593b8a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,long param_7,undefined *param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuStack_688;
  undefined **ppuStack_680;
  undefined *puStack_678;
  undefined *puStack_670;
  long lStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  undefined *puStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  uint uStack_600;
  undefined4 uStack_5fc;
  undefined *puStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined **ppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined **ppuStack_5d0;
  undefined **ppuStack_5c8;
  undefined **ppuStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined *puStack_588;
  long lStack_580;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 ****ppppuStack_520;
  code *pcStack_518;
  byte bStack_510;
  undefined **ppuStack_508;
  undefined *puStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 ****ppppuStack_4d0;
  code *pcStack_4c8;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  long lStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined8 ****ppppuStack_440;
  code *pcStack_438;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  long lStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined **ppuStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 ****ppppuStack_2e0;
  code *pcStack_2d8;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined **ppuStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined1 ****ppppuStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined1 uStack_208;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined1 ***pppuStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dc1758;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dae8d8;
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf72080(puVar2,param_2,&uStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f838,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf13b80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar3 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 1;
  puVar21 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar22 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pcStack_78 = FUN_10593ba2c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110e0fe98;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dc1758;
  puStack_c8 = puVar21;
  uStack_c0 = uVar14;
  puStack_b0 = puVar2;
  puStack_a8 = puVar12;
  puStack_a0 = puVar3;
  uStack_98 = uVar4;
  uStack_90 = param_4;
  uStack_88 = uVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(uVar14);
  _objc_retain(puVar21);
  func_0x00010bf72080(puVar6,param_2,&puStack_c8,&ppuStack_d8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar22,param_2,&PTR____CFConstantStringClassReference_110e0f818,puVar6);
  _objc_release(puVar6);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c086d60();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar3 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dc1758,uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(puVar22 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(puVar21);
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar22 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10593bbb8;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110e0feb8;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_140 = puVar21;
  puStack_120 = puVar2;
  puStack_118 = puVar12;
  puStack_110 = puVar3;
  uStack_108 = uVar4;
  uStack_100 = uVar14;
  uStack_f8 = uVar5;
  ppuStack_f0 = &puStack_80;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = (undefined *)0x1;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_130 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_130,&ppuStack_138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar22,param_2,&PTR____CFConstantStringClassReference_110e0f858,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar6);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb92c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar21 != (undefined *)0x0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0fed8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(puVar22 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 1;
  puVar2 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10593bd40;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_6;
  lStack_1f0 = param_7;
  pppuStack_150 = &ppuStack_f0;
  _objc_retain(param_7);
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110e0fef8;
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_220 = puVar2;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110e0ff18;
  puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_220 = (undefined *)uVar14;
  puStack_1c8 = puVar12;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e0ff38;
  puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_220 = puVar19;
  puStack_1f8 = puVar19;
  puStack_1c0 = puVar22;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e0ff58;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1b8 = puVar21;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = (undefined **)0x4;
  puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1b0 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1c8,&ppuStack_1e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0f878,puVar19);
  _objc_release(puVar19);
  _objc_release(puVar6);
  _objc_release(puVar21);
  _objc_release(puVar22);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010bfb82a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2 != (undefined *)0x0);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110e0ff78,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar22);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar19;
  func_0x00010c2ac460(puVar19,param_2,&PTR____CFConstantStringClassReference_110e0ff58,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = 1;
  puVar12 = puVar7;
  func_0x00010bfec320();
  _objc_release(uVar5);
  lVar1 = lStack_1f0;
  _objc_release(uVar4);
  if (0 < (long)puVar2) {
    uStack_208 = 1;
    uStack_218 = 0;
    lStack_210 = lVar1;
    puStack_220 = (undefined *)0x270f;
    ppuVar20 = &PTR____CFConstantStringClassReference_110e0f378;
    puVar12 = (undefined *)0x0;
    lVar15 = 1;
    param_7 = 9999;
    puVar16 = puStack_1f8;
    param_8 = puVar2;
    func_0x00010be550c0(puVar3,param_2,0,1,&PTR____CFConstantStringClassReference_110e0f378,
                        puStack_1f8,9999);
  }
  _objc_release(puVar7);
  lVar8 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  lStack_248 = lVar1;
  uStack_238 = 1;
  pcStack_228 = FUN_10593c028;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar16;
  puStack_280 = puVar6;
  puStack_278 = puVar21;
  puStack_270 = puVar19;
  puStack_268 = puVar22;
  uStack_260 = uVar5;
  puStack_258 = puVar7;
  puStack_250 = puVar3;
  puStack_240 = puVar2;
  ppppuStack_230 = &pppuStack_150;
  _objc_retain(ppuVar20);
  ppuStack_2c8 = &PTR____CFConstantStringClassReference_110e0ff98;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e0fbb8;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2a8 = puVar2;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110dae8d8;
  ppuVar9 = ppuVar20;
  puStack_2a0 = puVar12;
  if (ppuVar20 == (undefined **)0x0) {
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_2b0 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_298 = ppuVar9;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = (undefined *)0x4;
  puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_290 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_2a8,&ppuStack_2c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(lVar8,param_2,&PTR____CFConstantStringClassReference_110e0f898,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar3);
  if (ppuVar20 == (undefined **)0x0) {
    _objc_release(ppuVar9);
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb82c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar15 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0ffb8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar19;
  func_0x00010c2ac460(puVar19,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = (undefined *)0x1;
  puVar12 = puVar7;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar7);
  ppuVar9 = ppuVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_318 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_2d8 = FUN_10593c2c0;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar10;
  puStack_330 = puVar6;
  puStack_328 = puVar22;
  puStack_320 = puVar3;
  puStack_310 = puVar19;
  puStack_308 = puVar2;
  puStack_300 = puVar7;
  uStack_2f8 = uVar5;
  uStack_2f0 = uVar4;
  ppuStack_2e8 = ppuVar20;
  ppppuStack_2e0 = &ppppuStack_230;
  _objc_retain(puVar16);
  _objc_retain(puVar21);
  ppuStack_378 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_370 = &PTR____CFConstantStringClassReference_110daf558;
  puVar3 = puVar16;
  puStack_358 = puVar2;
  if (puVar16 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_368 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar22 = puVar21;
  puStack_350 = puVar3;
  if (puVar21 == (undefined *)0x0) {
    puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_360 = &PTR____CFConstantStringClassReference_110e0faf8;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_348 = puVar22;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = (undefined *)0x4;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_340 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_358,&ppuStack_378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(ppuVar9,param_2,&PTR____CFConstantStringClassReference_110e0f8d8,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar7);
  if (puVar21 == (undefined *)0x0) {
    _objc_release(puVar22);
  }
  if (puVar16 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c09db60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar11 = ppuVar9[4];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined *)0x1;
  puVar13 = puVar3;
  func_0x00010bfec320();
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar21);
  puVar23 = puVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  ___stack_chk_fail();
  pcStack_388 = FUN_10593c580;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = puVar18;
  puStack_3e0 = puVar6;
  puStack_3d8 = puVar10;
  puStack_3d0 = puVar22;
  puStack_3c8 = puVar7;
  puStack_3c0 = puVar12;
  puStack_3b8 = puVar3;
  puStack_3b0 = puVar2;
  puStack_3a8 = puVar11;
  puStack_3a0 = puVar21;
  puStack_398 = puVar16;
  ppppuStack_390 = &ppppuStack_2e0;
  _objc_retain(puVar17);
  _objc_retain(puVar19);
  ppuStack_428 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_420 = &PTR____CFConstantStringClassReference_110daf558;
  puVar12 = puVar17;
  puStack_408 = puVar2;
  if (puVar17 == (undefined *)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_418 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = puVar19;
  puStack_400 = puVar12;
  if (puVar19 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_410 = &PTR____CFConstantStringClassReference_110e0ffd8;
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_3f8 = puVar3;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = (undefined *)0x4;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3f0 = puVar21;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_408,&ppuStack_428);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar23,param_2,&PTR____CFConstantStringClassReference_110e0f8f8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar21);
  if (puVar19 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puVar12);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c09db40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar12);
  puVar2 = puVar16;
  func_0x00010c2ac460(puVar16,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar12 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(puVar23 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = (undefined *)0x1;
  puVar10 = puVar12;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar12);
  _objc_release(puVar19);
  puVar2 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_438 = FUN_10593c840;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_480 = puVar3;
  puStack_478 = puVar21;
  puStack_470 = puVar16;
  puStack_468 = puVar12;
  uStack_460 = uVar5;
  uStack_458 = uVar4;
  puStack_450 = puVar19;
  puStack_448 = puVar17;
  ppppuStack_440 = &ppppuStack_390;
  _objc_retain(puVar18);
  _objc_retain(puVar22);
  ppuStack_4b8 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_4b0 = &PTR____CFConstantStringClassReference_110daf558;
  puVar3 = puVar18;
  puStack_4a0 = puVar12;
  if (puVar18 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_4a8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar21 = puVar22;
  puStack_498 = puVar3;
  if (puVar22 == (undefined *)0x0) {
    puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_490 = puVar21;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_4a0,&ppuStack_4b8,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0f918,puVar19);
  _objc_release(puVar19);
  if (puVar22 == (undefined *)0x0) {
    _objc_release(puVar21);
  }
  if (puVar18 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010c09db00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar3);
  puVar12 = puVar16;
  func_0x00010c2ac460(puVar16,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar3 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar22);
  puVar2 = puVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pcStack_4c8 = FUN_10593cac4;
  lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_508 = &PTR____CFConstantStringClassReference_110e0fff8;
  puStack_500 = puVar12;
  uStack_4f0 = uVar5;
  uStack_4e8 = uVar4;
  puStack_4e0 = puVar22;
  puStack_4d8 = puVar18;
  ppppuStack_4d0 = &ppppuStack_440;
  _objc_retain(puVar12);
  puVar23 = (undefined *)0x1;
  func_0x00010bf72080(puVar10,param_2,&puStack_500,&ppuStack_508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0f938,puVar10);
  _objc_release(puVar10);
  puVar22 = PTR_PTR_1126c04d8;
  func_0x00010bf3e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar22;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = (undefined *)0x1;
  puVar12 = puVar10;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_518 = FUN_10593cc04;
  lStack_580 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_570 = puVar6;
  puStack_568 = puVar7;
  puStack_560 = puVar19;
  puStack_558 = puVar21;
  puStack_550 = puVar16;
  puStack_548 = puVar3;
  puStack_540 = puVar22;
  puStack_538 = puVar10;
  uStack_530 = uVar4;
  uStack_528 = uVar5;
  ppppuStack_520 = &ppppuStack_4d0;
  _objc_retain(puVar18);
  _objc_retain(puVar23);
  _objc_retain(puVar24);
  puVar3 = PTR_PTR_1126c05a0;
  _objc_retain(param_8);
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar3,param_2,puVar23);
  func_0x00010c1899c0(puVar3,param_2,puVar24);
  func_0x00010c1971a0(puVar3,param_2,puVar18);
  func_0x00010c1e8d60(puVar3,param_2,param_7);
  func_0x00010c1e8a80(puVar3,param_2,param_8);
  uStack_600 = (uint)bStack_510;
  func_0x00010c16e320(puVar3,param_2,bStack_510);
  puStack_5f8 = puVar2;
  func_0x00010c0a1b40(puVar2,param_2,puVar3);
  puVar2 = param_8;
  func_0x00010bf446e0(param_8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  ppuStack_5f0 = &PTR____CFConstantStringClassReference_110dab0d8;
  uStack_5fc = SUB84(puVar12,0);
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_5e8 = &PTR____CFConstantStringClassReference_110e0fe78;
  puStack_610 = puVar18;
  puStack_608 = puVar22;
  puStack_5b8 = puVar22;
  if (puVar18 == (undefined *)0x0) {
    puStack_610 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_5e0 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar12 = puVar23;
  puStack_5b0 = puStack_610;
  if (puVar23 == (undefined *)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_5d8 = &PTR____CFConstantStringClassReference_110e10018;
  puVar22 = puVar24;
  puStack_618 = puVar12;
  puStack_5a8 = puVar12;
  if (puVar24 == (undefined *)0x0) {
    puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_5d0 = &PTR____CFConstantStringClassReference_110e0fe18;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_5a0 = puVar22;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_5c8 = &PTR____CFConstantStringClassReference_110e10038;
  puVar21 = puVar2;
  puStack_598 = puVar12;
  if (puVar2 == (undefined *)0x0) {
    puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_5c0 = &PTR____CFConstantStringClassReference_110e10058;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_590 = puVar21;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_600);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_588 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_5b8,&ppuStack_5f0,7)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puStack_5f8,param_2,&PTR____CFConstantStringClassReference_110e0f9b8,puVar19);
  _objc_release(puVar19);
  _objc_release(puVar6);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar21);
  }
  _objc_release(puVar12);
  if (puVar24 == (undefined *)0x0) {
    _objc_release(puVar22);
  }
  if (puVar23 == (undefined *)0x0) {
    _objc_release(puStack_618);
  }
  if (puVar18 == (undefined *)0x0) {
    _objc_release(puStack_610);
  }
  _objc_release(puStack_608);
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010bf65ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_5fc);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar22);
  puVar12 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  puVar22 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar23);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar12 = puVar22;
  func_0x00010c2ac460(puVar22,param_2,&PTR____CFConstantStringClassReference_110e10018,puVar24);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  uVar4 = *(undefined8 *)(puStack_5f8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 1;
  puVar22 = puVar12;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar24);
  _objc_release(puVar23);
  puVar2 = puVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_580) {
    return;
  }
  ___stack_chk_fail();
  pcStack_628 = FUN_10593d070;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_660 = uVar5;
  uStack_658 = uVar4;
  puStack_650 = puVar3;
  puStack_648 = puVar12;
  puStack_640 = puVar23;
  puStack_638 = puVar18;
  ppppuStack_630 = &ppppuStack_520;
  _objc_retain(puVar22);
  ppuStack_688 = &PTR____CFConstantStringClassReference_110e10078;
  puVar12 = puVar22;
  if (puVar22 == (undefined *)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_680 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_678 = puVar12;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_670 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_678,&ppuStack_688,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0f9d8,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar3);
  if (puVar22 == (undefined *)0x0) {
    _objc_release(puVar12);
  }
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010bf70740();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar21;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x2) {
    ppuVar20 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar2 = puVar12;
    func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    uVar4 = *(undefined8 *)(puVar22 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(puVar22 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar12 = puVar2;
  }
  else {
    if (puVar2 == (undefined *)0x1) {
      ppuVar20 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (puVar2 != (undefined *)0x0) goto LAB_10593d3bc;
    puVar2 = puVar12;
    func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    uVar4 = *(undefined8 *)(puVar22 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar12 = puVar2;
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 10593ba2c; end: 10593bbb7; -[SCFideliusLogger logKeychainOps:key:] */

void FUN_10593ba2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,long param_7,undefined *param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  long lStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined8 ****ppppuStack_5c0;
  code *pcStack_5b8;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  uint uStack_590;
  undefined4 uStack_58c;
  undefined *puStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  long lStack_510;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 ****ppppuStack_4b0;
  code *pcStack_4a8;
  byte bStack_4a0;
  undefined **ppuStack_498;
  undefined *puStack_490;
  long lStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined8 ****ppppuStack_460;
  code *pcStack_458;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  long lStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 ****ppppuStack_3d0;
  code *pcStack_3c8;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  long lStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 ****ppppuStack_320;
  code *pcStack_318;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined **ppuStack_278;
  undefined1 ****ppppuStack_270;
  code *pcStack_268;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined1 uStack_198;
  undefined *puStack_188;
  long lStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e0fe98;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dc1758;
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf72080(puVar2,param_2,&uStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f818,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c086d60();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar3 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dc1758,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar22 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10593bbb8;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e0feb8;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_d0 = puVar21;
  puStack_b0 = puVar2;
  puStack_a8 = puVar12;
  puStack_a0 = puVar3;
  uStack_98 = uVar4;
  uStack_90 = param_4;
  uStack_88 = uVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = (undefined *)0x1;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c0 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c0,&ppuStack_c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar22,param_2,&PTR____CFConstantStringClassReference_110e0f858,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar6);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb92c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar21 != (undefined *)0x0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0fed8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(puVar22 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 1;
  puVar2 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10593bd40;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_6;
  lStack_180 = param_7;
  ppuStack_e0 = &puStack_80;
  _objc_retain(param_7);
  ppuStack_178 = &PTR____CFConstantStringClassReference_110e0fef8;
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_1b0 = puVar2;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_170 = &PTR____CFConstantStringClassReference_110e0ff18;
  puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_1b0 = (undefined *)uVar14;
  puStack_158 = puVar12;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_168 = &PTR____CFConstantStringClassReference_110e0ff38;
  puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_1b0 = puVar19;
  puStack_188 = puVar19;
  puStack_150 = puVar22;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_160 = &PTR____CFConstantStringClassReference_110e0ff58;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_148 = puVar21;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = (undefined **)0x4;
  puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_140 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_158,&ppuStack_178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0f878,puVar19);
  _objc_release(puVar19);
  _objc_release(puVar6);
  _objc_release(puVar21);
  _objc_release(puVar22);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010bfb82a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2 != (undefined *)0x0);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110e0ff78,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar22);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar19;
  func_0x00010c2ac460(puVar19,param_2,&PTR____CFConstantStringClassReference_110e0ff58,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = 1;
  puVar12 = puVar7;
  func_0x00010bfec320();
  _objc_release(uVar5);
  lVar1 = lStack_180;
  _objc_release(uVar4);
  if (0 < (long)puVar2) {
    uStack_198 = 1;
    uStack_1a8 = 0;
    lStack_1a0 = lVar1;
    puStack_1b0 = (undefined *)0x270f;
    ppuVar20 = &PTR____CFConstantStringClassReference_110e0f378;
    puVar12 = (undefined *)0x0;
    lVar15 = 1;
    param_7 = 9999;
    puVar16 = puStack_188;
    param_8 = puVar2;
    func_0x00010be550c0(puVar3,param_2,0,1,&PTR____CFConstantStringClassReference_110e0f378,
                        puStack_188,9999);
  }
  _objc_release(puVar7);
  lVar8 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  lStack_1d8 = lVar1;
  uStack_1c8 = 1;
  pcStack_1b8 = FUN_10593c028;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar16;
  puStack_210 = puVar6;
  puStack_208 = puVar21;
  puStack_200 = puVar19;
  puStack_1f8 = puVar22;
  uStack_1f0 = uVar5;
  puStack_1e8 = puVar7;
  puStack_1e0 = puVar3;
  puStack_1d0 = puVar2;
  pppuStack_1c0 = &ppuStack_e0;
  _objc_retain(ppuVar20);
  ppuStack_258 = &PTR____CFConstantStringClassReference_110e0ff98;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_250 = &PTR____CFConstantStringClassReference_110e0fbb8;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_238 = puVar2;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_248 = &PTR____CFConstantStringClassReference_110dae8d8;
  ppuVar9 = ppuVar20;
  puStack_230 = puVar12;
  if (ppuVar20 == (undefined **)0x0) {
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_240 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_228 = ppuVar9;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = (undefined *)0x4;
  puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_220 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_238,&ppuStack_258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(lVar8,param_2,&PTR____CFConstantStringClassReference_110e0f898,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar3);
  if (ppuVar20 == (undefined **)0x0) {
    _objc_release(ppuVar9);
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb82c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar15 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0ffb8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar19;
  func_0x00010c2ac460(puVar19,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = (undefined *)0x1;
  puVar12 = puVar7;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar7);
  ppuVar9 = ppuVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_2a8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_268 = FUN_10593c2c0;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar10;
  puStack_2c0 = puVar6;
  puStack_2b8 = puVar22;
  puStack_2b0 = puVar3;
  puStack_2a0 = puVar19;
  puStack_298 = puVar2;
  puStack_290 = puVar7;
  uStack_288 = uVar5;
  uStack_280 = uVar4;
  ppuStack_278 = ppuVar20;
  ppppuStack_270 = &pppuStack_1c0;
  _objc_retain(puVar16);
  _objc_retain(puVar21);
  ppuStack_308 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_300 = &PTR____CFConstantStringClassReference_110daf558;
  puVar3 = puVar16;
  puStack_2e8 = puVar2;
  if (puVar16 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar22 = puVar21;
  puStack_2e0 = puVar3;
  if (puVar21 == (undefined *)0x0) {
    puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_110e0faf8;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2d8 = puVar22;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = (undefined *)0x4;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2d0 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_2e8,&ppuStack_308);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(ppuVar9,param_2,&PTR____CFConstantStringClassReference_110e0f8d8,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar7);
  if (puVar21 == (undefined *)0x0) {
    _objc_release(puVar22);
  }
  if (puVar16 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c09db60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar11 = ppuVar9[4];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined *)0x1;
  puVar13 = puVar3;
  func_0x00010bfec320();
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar21);
  puVar23 = puVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_318 = FUN_10593c580;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = puVar18;
  puStack_370 = puVar6;
  puStack_368 = puVar10;
  puStack_360 = puVar22;
  puStack_358 = puVar7;
  puStack_350 = puVar12;
  puStack_348 = puVar3;
  puStack_340 = puVar2;
  puStack_338 = puVar11;
  puStack_330 = puVar21;
  puStack_328 = puVar16;
  ppppuStack_320 = &ppppuStack_270;
  _objc_retain(puVar17);
  _objc_retain(puVar19);
  ppuStack_3b8 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_110daf558;
  puVar12 = puVar17;
  puStack_398 = puVar2;
  if (puVar17 == (undefined *)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_3a8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = puVar19;
  puStack_390 = puVar12;
  if (puVar19 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_3a0 = &PTR____CFConstantStringClassReference_110e0ffd8;
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_388 = puVar3;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = (undefined *)0x4;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_380 = puVar21;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_398,&ppuStack_3b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar23,param_2,&PTR____CFConstantStringClassReference_110e0f8f8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar21);
  if (puVar19 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puVar12);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c09db40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar12);
  puVar2 = puVar16;
  func_0x00010c2ac460(puVar16,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar12 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(puVar23 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = (undefined *)0x1;
  puVar10 = puVar12;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar12);
  _objc_release(puVar19);
  puVar2 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3c8 = FUN_10593c840;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_410 = puVar3;
  puStack_408 = puVar21;
  puStack_400 = puVar16;
  puStack_3f8 = puVar12;
  uStack_3f0 = uVar5;
  uStack_3e8 = uVar4;
  puStack_3e0 = puVar19;
  puStack_3d8 = puVar17;
  ppppuStack_3d0 = &ppppuStack_320;
  _objc_retain(puVar18);
  _objc_retain(puVar22);
  ppuStack_448 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_440 = &PTR____CFConstantStringClassReference_110daf558;
  puVar3 = puVar18;
  puStack_430 = puVar12;
  if (puVar18 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_438 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar21 = puVar22;
  puStack_428 = puVar3;
  if (puVar22 == (undefined *)0x0) {
    puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_420 = puVar21;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_430,&ppuStack_448,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0f918,puVar19);
  _objc_release(puVar19);
  if (puVar22 == (undefined *)0x0) {
    _objc_release(puVar21);
  }
  if (puVar18 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010c09db00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar3);
  puVar12 = puVar16;
  func_0x00010c2ac460(puVar16,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar3 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar22);
  puVar2 = puVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pcStack_458 = FUN_10593cac4;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_498 = &PTR____CFConstantStringClassReference_110e0fff8;
  puStack_490 = puVar12;
  uStack_480 = uVar5;
  uStack_478 = uVar4;
  puStack_470 = puVar22;
  puStack_468 = puVar18;
  ppppuStack_460 = &ppppuStack_3d0;
  _objc_retain(puVar12);
  puVar23 = (undefined *)0x1;
  func_0x00010bf72080(puVar10,param_2,&puStack_490,&ppuStack_498);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0f938,puVar10);
  _objc_release(puVar10);
  puVar22 = PTR_PTR_1126c04d8;
  func_0x00010bf3e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar22;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = (undefined *)0x1;
  puVar12 = puVar10;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  pcStack_4a8 = FUN_10593cc04;
  lStack_510 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_500 = puVar6;
  puStack_4f8 = puVar7;
  puStack_4f0 = puVar19;
  puStack_4e8 = puVar21;
  puStack_4e0 = puVar16;
  puStack_4d8 = puVar3;
  puStack_4d0 = puVar22;
  puStack_4c8 = puVar10;
  uStack_4c0 = uVar4;
  uStack_4b8 = uVar5;
  ppppuStack_4b0 = &ppppuStack_460;
  _objc_retain(puVar18);
  _objc_retain(puVar23);
  _objc_retain(puVar24);
  puVar3 = PTR_PTR_1126c05a0;
  _objc_retain(param_8);
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar3,param_2,puVar23);
  func_0x00010c1899c0(puVar3,param_2,puVar24);
  func_0x00010c1971a0(puVar3,param_2,puVar18);
  func_0x00010c1e8d60(puVar3,param_2,param_7);
  func_0x00010c1e8a80(puVar3,param_2,param_8);
  uStack_590 = (uint)bStack_4a0;
  func_0x00010c16e320(puVar3,param_2,bStack_4a0);
  puStack_588 = puVar2;
  func_0x00010c0a1b40(puVar2,param_2,puVar3);
  puVar2 = param_8;
  func_0x00010bf446e0(param_8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  ppuStack_580 = &PTR____CFConstantStringClassReference_110dab0d8;
  uStack_58c = SUB84(puVar12,0);
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_578 = &PTR____CFConstantStringClassReference_110e0fe78;
  puStack_5a0 = puVar18;
  puStack_598 = puVar22;
  puStack_548 = puVar22;
  if (puVar18 == (undefined *)0x0) {
    puStack_5a0 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_570 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar12 = puVar23;
  puStack_540 = puStack_5a0;
  if (puVar23 == (undefined *)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_568 = &PTR____CFConstantStringClassReference_110e10018;
  puVar22 = puVar24;
  puStack_5a8 = puVar12;
  puStack_538 = puVar12;
  if (puVar24 == (undefined *)0x0) {
    puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_560 = &PTR____CFConstantStringClassReference_110e0fe18;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_530 = puVar22;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_558 = &PTR____CFConstantStringClassReference_110e10038;
  puVar21 = puVar2;
  puStack_528 = puVar12;
  if (puVar2 == (undefined *)0x0) {
    puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_550 = &PTR____CFConstantStringClassReference_110e10058;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_520 = puVar21;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_590);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_518 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_548,&ppuStack_580,7)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puStack_588,param_2,&PTR____CFConstantStringClassReference_110e0f9b8,puVar19);
  _objc_release(puVar19);
  _objc_release(puVar6);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar21);
  }
  _objc_release(puVar12);
  if (puVar24 == (undefined *)0x0) {
    _objc_release(puVar22);
  }
  if (puVar23 == (undefined *)0x0) {
    _objc_release(puStack_5a8);
  }
  if (puVar18 == (undefined *)0x0) {
    _objc_release(puStack_5a0);
  }
  _objc_release(puStack_598);
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010bf65ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_58c);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar22);
  puVar12 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  puVar22 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar23);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar12 = puVar22;
  func_0x00010c2ac460(puVar22,param_2,&PTR____CFConstantStringClassReference_110e10018,puVar24);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  uVar4 = *(undefined8 *)(puStack_588 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 1;
  puVar22 = puVar12;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar24);
  _objc_release(puVar23);
  puVar2 = puVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_510) {
    return;
  }
  ___stack_chk_fail();
  pcStack_5b8 = FUN_10593d070;
  lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_5f0 = uVar5;
  uStack_5e8 = uVar4;
  puStack_5e0 = puVar3;
  puStack_5d8 = puVar12;
  puStack_5d0 = puVar23;
  puStack_5c8 = puVar18;
  ppppuStack_5c0 = &ppppuStack_4b0;
  _objc_retain(puVar22);
  ppuStack_618 = &PTR____CFConstantStringClassReference_110e10078;
  puVar12 = puVar22;
  if (puVar22 == (undefined *)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_610 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_608 = puVar12;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_600 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_608,&ppuStack_618,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0f9d8,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar3);
  if (puVar22 == (undefined *)0x0) {
    _objc_release(puVar12);
  }
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010bf70740();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar21;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5f8) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x2) {
    ppuVar20 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar2 = puVar12;
    func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    uVar4 = *(undefined8 *)(puVar22 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(puVar22 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar12 = puVar2;
  }
  else {
    if (puVar2 == (undefined *)0x1) {
      ppuVar20 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (puVar2 != (undefined *)0x0) goto LAB_10593d3bc;
    puVar2 = puVar12;
    func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    uVar4 = *(undefined8 *)(puVar22 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar12 = puVar2;
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 10593bbb8; end: 10593bd3f; -[SCFideliusLogger logFriendWriteIncompleteWithDiffFriends:] */

void FUN_10593bbb8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,long param_7,undefined *param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined *puStack_598;
  undefined *puStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined8 ****ppppuStack_550;
  code *pcStack_548;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  uint uStack_520;
  undefined4 uStack_51c;
  undefined *puStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  long lStack_4a0;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 ****ppppuStack_440;
  code *pcStack_438;
  byte bStack_430;
  undefined **ppuStack_428;
  undefined *puStack_420;
  long lStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 ****ppppuStack_3f0;
  code *pcStack_3e8;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  long lStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined8 ****ppppuStack_360;
  code *pcStack_358;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined **ppuStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined *puStack_118;
  long lStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e0feb8;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_60 = param_3;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = (undefined *)0x1;
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f858,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb92c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0fed8,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar11);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 1;
  puVar2 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10593bd40;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_6;
  lStack_110 = param_7;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(param_7);
  ppuStack_108 = &PTR____CFConstantStringClassReference_110e0fef8;
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_140 = puVar2;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110e0ff18;
  puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_140 = (undefined *)uVar13;
  puStack_e8 = puVar11;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110e0ff38;
  puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_140 = puVar18;
  puStack_118 = puVar18;
  puStack_e0 = puVar22;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110e0ff58;
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d8 = puVar20;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = (undefined **)0x4;
  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_d0 = puVar18;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_e8,&ppuStack_108);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0f878,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar20);
  _objc_release(puVar22);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126c04d8;
  func_0x00010bfb82a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2 != (undefined *)0x0);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110e0ff78,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar22);
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110e0ff58,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  _objc_release(puVar11);
  uVar4 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = 1;
  puVar11 = puVar6;
  func_0x00010bfec320();
  _objc_release(uVar5);
  lVar1 = lStack_110;
  _objc_release(uVar4);
  if (0 < (long)puVar2) {
    uStack_128 = 1;
    uStack_138 = 0;
    lStack_130 = lVar1;
    puStack_140 = (undefined *)0x270f;
    ppuVar19 = &PTR____CFConstantStringClassReference_110e0f378;
    puVar11 = (undefined *)0x0;
    lVar14 = 1;
    param_7 = 9999;
    puVar15 = puStack_118;
    param_8 = puVar2;
    func_0x00010be550c0(puVar3,param_2,0,1,&PTR____CFConstantStringClassReference_110e0f378,
                        puStack_118,9999);
  }
  _objc_release(puVar6);
  lVar7 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  lStack_168 = lVar1;
  uStack_158 = 1;
  pcStack_148 = FUN_10593c028;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar15;
  puStack_1a0 = puVar18;
  puStack_198 = puVar20;
  puStack_190 = puVar21;
  puStack_188 = puVar22;
  uStack_180 = uVar5;
  puStack_178 = puVar6;
  puStack_170 = puVar3;
  puStack_160 = puVar2;
  ppuStack_150 = &puStack_70;
  _objc_retain(ppuVar19);
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110e0ff98;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110e0fbb8;
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1c8 = puVar2;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dae8d8;
  ppuVar8 = ppuVar19;
  puStack_1c0 = puVar11;
  if (ppuVar19 == (undefined **)0x0) {
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1b8 = ppuVar8;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = (undefined *)0x4;
  puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1b0 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1c8,&ppuStack_1e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(lVar7,param_2,&PTR____CFConstantStringClassReference_110e0f898,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar3);
  if (ppuVar19 == (undefined **)0x0) {
    _objc_release(ppuVar8);
  }
  _objc_release(puVar11);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bfb82c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar14 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0ffb8,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  _objc_release(puVar11);
  uVar4 = *(undefined8 *)(lVar7 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = (undefined *)0x1;
  puVar11 = puVar6;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar6);
  ppuVar8 = ppuVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_238 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_1f8 = FUN_10593c2c0;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = puVar9;
  puStack_250 = puVar18;
  puStack_248 = puVar22;
  puStack_240 = puVar3;
  puStack_230 = puVar21;
  puStack_228 = puVar2;
  puStack_220 = puVar6;
  uStack_218 = uVar5;
  uStack_210 = uVar4;
  ppuStack_208 = ppuVar19;
  pppuStack_200 = &ppuStack_150;
  _objc_retain(puVar15);
  _objc_retain(puVar20);
  ppuStack_298 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_290 = &PTR____CFConstantStringClassReference_110daf558;
  puVar3 = puVar15;
  puStack_278 = puVar2;
  if (puVar15 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_288 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar22 = puVar20;
  puStack_270 = puVar3;
  if (puVar20 == (undefined *)0x0) {
    puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_280 = &PTR____CFConstantStringClassReference_110e0faf8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_268 = puVar22;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = (undefined *)0x4;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_260 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_278,&ppuStack_298);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(ppuVar8,param_2,&PTR____CFConstantStringClassReference_110e0f8d8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar6);
  if (puVar20 == (undefined *)0x0) {
    _objc_release(puVar22);
  }
  if (puVar15 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c09db60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar10 = ppuVar8[4];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = (undefined *)0x1;
  puVar12 = puVar3;
  func_0x00010bfec320();
  _objc_release(puVar2);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(puVar20);
  puVar23 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_10593c580;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = puVar17;
  puStack_300 = puVar18;
  puStack_2f8 = puVar9;
  puStack_2f0 = puVar22;
  puStack_2e8 = puVar6;
  puStack_2e0 = puVar11;
  puStack_2d8 = puVar3;
  puStack_2d0 = puVar2;
  puStack_2c8 = puVar10;
  puStack_2c0 = puVar20;
  puStack_2b8 = puVar15;
  ppppuStack_2b0 = &pppuStack_200;
  _objc_retain(puVar16);
  _objc_retain(puVar21);
  ppuStack_348 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_340 = &PTR____CFConstantStringClassReference_110daf558;
  puVar11 = puVar16;
  puStack_328 = puVar2;
  if (puVar16 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_338 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = puVar21;
  puStack_320 = puVar11;
  if (puVar21 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_330 = &PTR____CFConstantStringClassReference_110e0ffd8;
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_318 = puVar3;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = (undefined *)0x4;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_310 = puVar20;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_328,&ppuStack_348);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar23,param_2,&PTR____CFConstantStringClassReference_110e0f8f8,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar20);
  if (puVar21 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  if (puVar16 == (undefined *)0x0) {
    _objc_release(puVar11);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c09db40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar11);
  puVar2 = puVar15;
  func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar11 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(puVar23 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined *)0x1;
  puVar9 = puVar11;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar11);
  _objc_release(puVar21);
  puVar2 = puVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  pcStack_358 = FUN_10593c840;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3a0 = puVar3;
  puStack_398 = puVar20;
  puStack_390 = puVar15;
  puStack_388 = puVar11;
  uStack_380 = uVar5;
  uStack_378 = uVar4;
  puStack_370 = puVar21;
  puStack_368 = puVar16;
  ppppuStack_360 = &ppppuStack_2b0;
  _objc_retain(puVar17);
  _objc_retain(puVar22);
  ppuStack_3d8 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3d0 = &PTR____CFConstantStringClassReference_110daf558;
  puVar3 = puVar17;
  puStack_3c0 = puVar11;
  if (puVar17 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_3c8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar20 = puVar22;
  puStack_3b8 = puVar3;
  if (puVar22 == (undefined *)0x0) {
    puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3b0 = puVar20;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_3c0,&ppuStack_3d8,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0f918,puVar21);
  _objc_release(puVar21);
  if (puVar22 == (undefined *)0x0) {
    _objc_release(puVar20);
  }
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126c04d8;
  func_0x00010c09db00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar3);
  puVar11 = puVar15;
  func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar3 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar22);
  puVar2 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pcStack_3e8 = FUN_10593cac4;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_428 = &PTR____CFConstantStringClassReference_110e0fff8;
  puStack_420 = puVar11;
  uStack_410 = uVar5;
  uStack_408 = uVar4;
  puStack_400 = puVar22;
  puStack_3f8 = puVar17;
  ppppuStack_3f0 = &ppppuStack_360;
  _objc_retain(puVar11);
  puVar23 = (undefined *)0x1;
  func_0x00010bf72080(puVar9,param_2,&puStack_420,&ppuStack_428);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0f938,puVar9);
  _objc_release(puVar9);
  puVar22 = PTR_PTR_1126c04d8;
  func_0x00010bf3e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar22;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined *)0x1;
  puVar11 = puVar9;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
    return;
  }
  ___stack_chk_fail();
  pcStack_438 = FUN_10593cc04;
  lStack_4a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_490 = puVar18;
  puStack_488 = puVar6;
  puStack_480 = puVar21;
  puStack_478 = puVar20;
  puStack_470 = puVar15;
  puStack_468 = puVar3;
  puStack_460 = puVar22;
  puStack_458 = puVar9;
  uStack_450 = uVar4;
  uStack_448 = uVar5;
  ppppuStack_440 = &ppppuStack_3f0;
  _objc_retain(puVar17);
  _objc_retain(puVar23);
  _objc_retain(puVar24);
  puVar3 = PTR_PTR_1126c05a0;
  _objc_retain(param_8);
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar3,param_2,puVar23);
  func_0x00010c1899c0(puVar3,param_2,puVar24);
  func_0x00010c1971a0(puVar3,param_2,puVar17);
  func_0x00010c1e8d60(puVar3,param_2,param_7);
  func_0x00010c1e8a80(puVar3,param_2,param_8);
  uStack_520 = (uint)bStack_430;
  func_0x00010c16e320(puVar3,param_2,bStack_430);
  puStack_518 = puVar2;
  func_0x00010c0a1b40(puVar2,param_2,puVar3);
  puVar2 = param_8;
  func_0x00010bf446e0(param_8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  ppuStack_510 = &PTR____CFConstantStringClassReference_110dab0d8;
  uStack_51c = SUB84(puVar11,0);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_508 = &PTR____CFConstantStringClassReference_110e0fe78;
  puStack_530 = puVar17;
  puStack_528 = puVar18;
  puStack_4d8 = puVar18;
  if (puVar17 == (undefined *)0x0) {
    puStack_530 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_500 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar11 = puVar23;
  puStack_4d0 = puStack_530;
  if (puVar23 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_4f8 = &PTR____CFConstantStringClassReference_110e10018;
  puVar18 = puVar24;
  puStack_538 = puVar11;
  puStack_4c8 = puVar11;
  if (puVar24 == (undefined *)0x0) {
    puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_4f0 = &PTR____CFConstantStringClassReference_110e0fe18;
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_4c0 = puVar18;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_4e8 = &PTR____CFConstantStringClassReference_110e10038;
  puVar22 = puVar2;
  puStack_4b8 = puVar11;
  if (puVar2 == (undefined *)0x0) {
    puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_4e0 = &PTR____CFConstantStringClassReference_110e10058;
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_4b0 = puVar22;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_520);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_4a8 = puVar20;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_4d8,&ppuStack_510,7)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puStack_518,param_2,&PTR____CFConstantStringClassReference_110e0f9b8,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar22);
  }
  _objc_release(puVar11);
  if (puVar24 == (undefined *)0x0) {
    _objc_release(puVar18);
  }
  if (puVar23 == (undefined *)0x0) {
    _objc_release(puStack_538);
  }
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puStack_530);
  }
  _objc_release(puStack_528);
  puVar11 = PTR_PTR_1126c04d8;
  func_0x00010bf65ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_51c);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar18);
  puVar11 = puVar22;
  func_0x00010c2ac460(puVar22,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  puVar18 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar23);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar11 = puVar18;
  func_0x00010c2ac460(puVar18,param_2,&PTR____CFConstantStringClassReference_110e10018,puVar24);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  uVar4 = *(undefined8 *)(puStack_518 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 1;
  puVar18 = puVar11;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar24);
  _objc_release(puVar23);
  puVar2 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_548 = FUN_10593d070;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_580 = uVar5;
  uStack_578 = uVar4;
  puStack_570 = puVar3;
  puStack_568 = puVar11;
  puStack_560 = puVar23;
  puStack_558 = puVar17;
  ppppuStack_550 = &ppppuStack_440;
  _objc_retain(puVar18);
  ppuStack_5a8 = &PTR____CFConstantStringClassReference_110e10078;
  puVar11 = puVar18;
  if (puVar18 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_5a0 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_598 = puVar11;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_590 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_598,&ppuStack_5a8,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0f9d8,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar3);
  if (puVar18 == (undefined *)0x0) {
    _objc_release(puVar11);
  }
  puVar11 = PTR_PTR_1126c04d8;
  func_0x00010bf70740();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar22;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x2) {
    ppuVar19 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar2 = puVar11;
    func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    uVar4 = *(undefined8 *)(puVar18 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(puVar18 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar11 = puVar2;
  }
  else {
    if (puVar2 == (undefined *)0x1) {
      ppuVar19 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (puVar2 != (undefined *)0x0) goto LAB_10593d3bc;
    puVar2 = puVar11;
    func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    uVar4 = *(undefined8 *)(puVar18 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar11 = puVar2;
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 10593bd40; end: 10593c027; -[SCFideliusLogger logFriendKeyDivergence:totalFriends:divergentKeysCount:repairArmed:divergentKeysInfo:] */

void FUN_10593bd40(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6,long param_7,undefined *param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined8 ****ppppuStack_4f0;
  code *pcStack_4e8;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  uint uStack_4c0;
  undefined4 uStack_4bc;
  undefined *puStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  long lStack_440;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 ****ppppuStack_3e0;
  code *pcStack_3d8;
  byte bStack_3d0;
  undefined **ppuStack_3c8;
  undefined *puStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  long lStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined1 ****ppppuStack_300;
  code *pcStack_2f8;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_b8;
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = param_6;
  lStack_b0 = param_7;
  _objc_retain(param_7);
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e0fef8;
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_e0 = param_3;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e0ff18;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_e0 = (undefined *)param_4;
  puStack_88 = puVar12;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e0ff38;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_e0 = param_5;
  puStack_b8 = param_5;
  puStack_80 = puVar2;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e0ff58;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = (undefined **)0x4;
  puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&ppuStack_a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f878,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010bfb82a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3 != (undefined *)0x0);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110e0ff78,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar22;
  func_0x00010c2ac460(puVar22,param_2,&PTR____CFConstantStringClassReference_110e0ff58,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  _objc_release(puVar12);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = 1;
  puVar12 = puVar20;
  func_0x00010bfec320();
  _objc_release(uVar6);
  lVar1 = lStack_b0;
  _objc_release(uVar5);
  if (0 < (long)param_3) {
    uStack_c8 = 1;
    uStack_d8 = 0;
    lStack_d0 = lVar1;
    puStack_e0 = (undefined *)0x270f;
    ppuVar19 = &PTR____CFConstantStringClassReference_110e0f378;
    puVar12 = (undefined *)0x0;
    lVar14 = 1;
    param_7 = 9999;
    puVar21 = puStack_b8;
    param_8 = param_3;
    func_0x00010be550c0(param_1,param_2,0,1,&PTR____CFConstantStringClassReference_110e0f378,
                        puStack_b8,9999);
  }
  _objc_release(puVar20);
  lVar7 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_108 = lVar1;
  uStack_f8 = 1;
  pcStack_e8 = FUN_10593c028;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar21;
  puStack_140 = puVar4;
  puStack_138 = puVar3;
  puStack_130 = puVar22;
  puStack_128 = puVar2;
  uStack_120 = uVar6;
  puStack_118 = puVar20;
  lStack_110 = param_1;
  puStack_100 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar19);
  ppuStack_188 = &PTR____CFConstantStringClassReference_110e0ff98;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_180 = &PTR____CFConstantStringClassReference_110e0fbb8;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_168 = puVar2;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_178 = &PTR____CFConstantStringClassReference_110dae8d8;
  ppuVar8 = ppuVar19;
  puStack_160 = puVar12;
  if (ppuVar19 == (undefined **)0x0) {
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_170 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_158 = ppuVar8;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = (undefined *)0x4;
  puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_150 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_168,&ppuStack_188);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(lVar7,param_2,&PTR____CFConstantStringClassReference_110e0f898,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar3);
  if (ppuVar19 == (undefined **)0x0) {
    _objc_release(ppuVar8);
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010bfb82c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar14 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110e0ffb8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar9;
  func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(lVar7 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = (undefined *)0x1;
  puVar2 = puVar21;
  func_0x00010bfec320();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar21);
  ppuVar8 = ppuVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_1d8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_198 = FUN_10593c2c0;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = puVar10;
  puStack_1f0 = puVar4;
  puStack_1e8 = puVar22;
  puStack_1e0 = puVar3;
  puStack_1d0 = puVar9;
  puStack_1c8 = puVar12;
  puStack_1c0 = puVar21;
  uStack_1b8 = uVar6;
  uStack_1b0 = uVar5;
  ppuStack_1a8 = ppuVar19;
  ppuStack_1a0 = &puStack_f0;
  _objc_retain(puVar15);
  _objc_retain(puVar20);
  ppuStack_238 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_230 = &PTR____CFConstantStringClassReference_110daf558;
  puVar3 = puVar15;
  puStack_218 = puVar12;
  if (puVar15 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_228 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar22 = puVar20;
  puStack_210 = puVar3;
  if (puVar20 == (undefined *)0x0) {
    puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_220 = &PTR____CFConstantStringClassReference_110e0faf8;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_208 = puVar22;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = (undefined *)0x4;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_200 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_218,&ppuStack_238);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(ppuVar8,param_2,&PTR____CFConstantStringClassReference_110e0f8d8,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  if (puVar20 == (undefined *)0x0) {
    _objc_release(puVar22);
  }
  if (puVar15 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010c09db60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar3);
  puVar12 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar3 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar11 = ppuVar8[4];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = (undefined *)0x1;
  puVar13 = puVar3;
  func_0x00010bfec320();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar20);
  puVar23 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_10593c580;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = puVar17;
  puStack_2a0 = puVar4;
  puStack_298 = puVar10;
  puStack_290 = puVar22;
  puStack_288 = puVar9;
  puStack_280 = puVar2;
  puStack_278 = puVar3;
  puStack_270 = puVar12;
  puStack_268 = puVar11;
  puStack_260 = puVar20;
  puStack_258 = puVar15;
  pppuStack_250 = &ppuStack_1a0;
  _objc_retain(puVar16);
  _objc_retain(puVar21);
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2e0 = &PTR____CFConstantStringClassReference_110daf558;
  puVar2 = puVar16;
  puStack_2c8 = puVar12;
  if (puVar16 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_2d8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = puVar21;
  puStack_2c0 = puVar2;
  if (puVar21 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_2d0 = &PTR____CFConstantStringClassReference_110e0ffd8;
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2b8 = puVar3;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = (undefined *)0x4;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2b0 = puVar20;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_2c8,&ppuStack_2e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar23,param_2,&PTR____CFConstantStringClassReference_110e0f8f8,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar20);
  if (puVar21 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  if (puVar16 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126c04d8;
  func_0x00010c09db40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar12 = puVar9;
  func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar2 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  uVar5 = *(undefined8 *)(puVar23 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined *)0x1;
  puVar15 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar21);
  puVar12 = puVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2f8 = FUN_10593c840;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_340 = puVar3;
  puStack_338 = puVar20;
  puStack_330 = puVar9;
  puStack_328 = puVar2;
  uStack_320 = uVar6;
  uStack_318 = uVar5;
  puStack_310 = puVar21;
  puStack_308 = puVar16;
  ppppuStack_300 = &pppuStack_250;
  _objc_retain(puVar17);
  _objc_retain(puVar22);
  ppuStack_378 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_370 = &PTR____CFConstantStringClassReference_110daf558;
  puVar3 = puVar17;
  puStack_360 = puVar2;
  if (puVar17 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_368 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar20 = puVar22;
  puStack_358 = puVar3;
  if (puVar22 == (undefined *)0x0) {
    puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_350 = puVar20;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_360,&ppuStack_378,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar12,param_2,&PTR____CFConstantStringClassReference_110e0f918,puVar21);
  _objc_release(puVar21);
  if (puVar22 == (undefined *)0x0) {
    _objc_release(puVar20);
  }
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c09db00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = puVar9;
  func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(puVar12 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar22);
  puVar12 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pcStack_388 = FUN_10593cac4;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3c8 = &PTR____CFConstantStringClassReference_110e0fff8;
  puStack_3c0 = puVar2;
  uStack_3b0 = uVar6;
  uStack_3a8 = uVar5;
  puStack_3a0 = puVar22;
  puStack_398 = puVar17;
  ppppuStack_390 = &ppppuStack_300;
  _objc_retain(puVar2);
  puVar23 = (undefined *)0x1;
  func_0x00010bf72080(puVar15,param_2,&puStack_3c0,&ppuStack_3c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar12,param_2,&PTR____CFConstantStringClassReference_110e0f938,puVar15);
  _objc_release(puVar15);
  puVar22 = PTR_PTR_1126c04d8;
  func_0x00010bf3e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar22;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  uVar5 = *(undefined8 *)(puVar12 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar6 = uVar5;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined *)0x1;
  puVar2 = puVar15;
  func_0x00010bfec320();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar12 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3d8 = FUN_10593cc04;
  lStack_440 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_430 = puVar4;
  puStack_428 = puVar10;
  puStack_420 = puVar21;
  puStack_418 = puVar20;
  puStack_410 = puVar9;
  puStack_408 = puVar3;
  puStack_400 = puVar22;
  puStack_3f8 = puVar15;
  uStack_3f0 = uVar5;
  uStack_3e8 = uVar6;
  ppppuStack_3e0 = &ppppuStack_390;
  _objc_retain(puVar17);
  _objc_retain(puVar23);
  _objc_retain(puVar24);
  puVar3 = PTR_PTR_1126c05a0;
  _objc_retain(param_8);
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar3,param_2,puVar23);
  func_0x00010c1899c0(puVar3,param_2,puVar24);
  func_0x00010c1971a0(puVar3,param_2,puVar17);
  func_0x00010c1e8d60(puVar3,param_2,param_7);
  func_0x00010c1e8a80(puVar3,param_2,param_8);
  uStack_4c0 = (uint)bStack_3d0;
  func_0x00010c16e320(puVar3,param_2,bStack_3d0);
  puStack_4b8 = puVar12;
  func_0x00010c0a1b40(puVar12,param_2,puVar3);
  puVar12 = param_8;
  func_0x00010bf446e0(param_8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  ppuStack_4b0 = &PTR____CFConstantStringClassReference_110dab0d8;
  uStack_4bc = SUB84(puVar2,0);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_4a8 = &PTR____CFConstantStringClassReference_110e0fe78;
  puStack_4d0 = puVar17;
  puStack_4c8 = puVar4;
  puStack_478 = puVar4;
  if (puVar17 == (undefined *)0x0) {
    puStack_4d0 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_4a0 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar2 = puVar23;
  puStack_470 = puStack_4d0;
  if (puVar23 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_498 = &PTR____CFConstantStringClassReference_110e10018;
  puVar4 = puVar24;
  puStack_4d8 = puVar2;
  puStack_468 = puVar2;
  if (puVar24 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_490 = &PTR____CFConstantStringClassReference_110e0fe18;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_460 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_488 = &PTR____CFConstantStringClassReference_110e10038;
  puVar22 = puVar12;
  puStack_458 = puVar2;
  if (puVar12 == (undefined *)0x0) {
    puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_480 = &PTR____CFConstantStringClassReference_110e10058;
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_450 = puVar22;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_4c0);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_448 = puVar20;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_478,&ppuStack_4b0,7)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puStack_4b8,param_2,&PTR____CFConstantStringClassReference_110e0f9b8,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  if (puVar12 == (undefined *)0x0) {
    _objc_release(puVar22);
  }
  _objc_release(puVar2);
  if (puVar24 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (puVar23 == (undefined *)0x0) {
    _objc_release(puStack_4d8);
  }
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puStack_4d0);
  }
  _objc_release(puStack_4c8);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf65ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_4bc);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar2 = puVar22;
  func_0x00010c2ac460(puVar22,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar23);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e10018,puVar24);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(puStack_4b8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 1;
  puVar4 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar24);
  _objc_release(puVar23);
  puVar12 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_440) {
    return;
  }
  ___stack_chk_fail();
  pcStack_4e8 = FUN_10593d070;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_520 = uVar6;
  uStack_518 = uVar5;
  puStack_510 = puVar3;
  puStack_508 = puVar2;
  puStack_500 = puVar23;
  puStack_4f8 = puVar17;
  ppppuStack_4f0 = &ppppuStack_3e0;
  _objc_retain(puVar4);
  ppuStack_548 = &PTR____CFConstantStringClassReference_110e10078;
  puVar2 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_540 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_538 = puVar2;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_530 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_538,&ppuStack_548,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar12,param_2,&PTR____CFConstantStringClassReference_110e0f9d8,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf70740();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(puVar12 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar22;
  func_0x00010bfec320();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar12 == (undefined *)0x2) {
    ppuVar19 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar12 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)(puVar4 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(puVar4 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar2 = puVar12;
  }
  else {
    if (puVar12 == (undefined *)0x1) {
      ppuVar19 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (puVar12 != (undefined *)0x0) goto LAB_10593d3bc;
    puVar12 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)(puVar4 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar2 = puVar12;
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10593c028; end: 10593c2bf; -[SCFideliusLogger logFriendKeyReconcile:deviceUpdatedCount:source:success:] */

void FUN_10593c028(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  long lStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  uint uStack_3e0;
  undefined4 uStack_3dc;
  undefined *puStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined8 ****ppppuStack_300;
  code *pcStack_2f8;
  byte bStack_2f0;
  undefined **ppuStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined1 ***pppuStack_220;
  code *pcStack_218;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_6;
  _objc_retain(param_5);
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e0ff98;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e0fbb8;
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar1;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar8 = param_5;
  puStack_80 = puVar15;
  if (param_5 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar8;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined *)0x4;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&ppuStack_a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f898,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar2);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar15);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bfb82c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0ffb8,puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar15);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined *)0x1;
  puVar1 = puVar15;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10593c2c0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar14;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain(puVar13);
  ppuStack_158 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110daf558;
  puVar9 = puVar8;
  puStack_138 = puVar2;
  if (puVar8 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_148 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar5 = puVar13;
  puStack_130 = puVar9;
  if (puVar13 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_140 = &PTR____CFConstantStringClassReference_110e0faf8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_128 = puVar5;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = (undefined *)0x4;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_120 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_138,&ppuStack_158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_5,param_2,&PTR____CFConstantStringClassReference_110e0f8d8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c09db60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar9);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined *)0x1;
  puVar2 = puVar1;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_10593c580;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar15;
  ppuStack_170 = &puStack_c0;
  _objc_retain(puVar9);
  _objc_retain(puVar14);
  ppuStack_208 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_200 = &PTR____CFConstantStringClassReference_110daf558;
  puVar5 = puVar9;
  puStack_1e8 = puVar13;
  if (puVar9 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar6 = puVar14;
  puStack_1e0 = puVar5;
  if (puVar14 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e0ffd8;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1d8 = puVar6;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = (undefined *)0x4;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1d0 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1e8,&ppuStack_208);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar8,param_2,&PTR____CFConstantStringClassReference_110e0f8f8,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar7);
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126c04d8;
  func_0x00010c09db40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar5);
  puVar13 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar5 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  uVar3 = *(undefined8 *)(puVar8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined *)0x1;
  puVar13 = puVar5;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar14);
  puVar8 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_10593c840;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = puVar6;
  puStack_258 = puVar7;
  puStack_250 = puVar2;
  puStack_248 = puVar5;
  uStack_240 = uVar4;
  uStack_238 = uVar3;
  puStack_230 = puVar14;
  puStack_228 = puVar9;
  pppuStack_220 = &ppuStack_170;
  _objc_retain(puVar10);
  _objc_retain(puVar15);
  ppuStack_298 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_290 = &PTR____CFConstantStringClassReference_110daf558;
  puVar2 = puVar10;
  puStack_280 = puVar14;
  if (puVar10 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_288 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar9 = puVar15;
  puStack_278 = puVar2;
  if (puVar15 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_270 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_280,&ppuStack_298,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar8,param_2,&PTR____CFConstantStringClassReference_110e0f918,puVar5);
  _objc_release(puVar5);
  if (puVar15 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126c04d8;
  func_0x00010c09db00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar2);
  puVar14 = puVar9;
  func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar2 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar3 = *(undefined8 *)(puVar8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar15);
  puVar8 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pcStack_2a8 = FUN_10593cac4;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_110e0fff8;
  puStack_2e0 = puVar14;
  uStack_2d0 = uVar4;
  uStack_2c8 = uVar3;
  puStack_2c0 = puVar15;
  puStack_2b8 = puVar10;
  ppppuStack_2b0 = &pppuStack_220;
  _objc_retain(puVar14);
  puVar9 = (undefined *)0x1;
  func_0x00010bf72080(puVar2,param_2,&puStack_2e0,&ppuStack_2e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar8,param_2,&PTR____CFConstantStringClassReference_110e0f938,puVar2);
  _objc_release(puVar2);
  puVar15 = PTR_PTR_1126c04d8;
  func_0x00010bf3e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar15;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  uVar3 = *(undefined8 *)(puVar8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined *)0x1;
  puVar15 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2f8 = FUN_10593cc04;
  lStack_360 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_300 = &ppppuStack_2b0;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(puVar1);
  puVar14 = PTR_PTR_1126c05a0;
  _objc_retain(param_8);
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar14,param_2,puVar9);
  func_0x00010c1899c0(puVar14,param_2,puVar1);
  func_0x00010c1971a0(puVar14,param_2,puVar8);
  func_0x00010c1e8d60(puVar14,param_2,param_7);
  func_0x00010c1e8a80(puVar14,param_2,param_8);
  uStack_3e0 = (uint)bStack_2f0;
  func_0x00010c16e320(puVar14,param_2,bStack_2f0);
  puStack_3d8 = puVar2;
  func_0x00010c0a1b40(puVar2,param_2,puVar14);
  puVar2 = param_8;
  func_0x00010bf446e0(param_8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  ppuStack_3d0 = &PTR____CFConstantStringClassReference_110dab0d8;
  uStack_3dc = SUB84(puVar15,0);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3c8 = &PTR____CFConstantStringClassReference_110e0fe78;
  puStack_3f0 = puVar8;
  puStack_3e8 = puVar13;
  puStack_398 = puVar13;
  if (puVar8 == (undefined *)0x0) {
    puStack_3f0 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_3c0 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar15 = puVar9;
  puStack_390 = puStack_3f0;
  if (puVar9 == (undefined *)0x0) {
    puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_3b8 = &PTR____CFConstantStringClassReference_110e10018;
  puVar13 = puVar1;
  puStack_3f8 = puVar15;
  puStack_388 = puVar15;
  if (puVar1 == (undefined *)0x0) {
    puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_110e0fe18;
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_380 = puVar13;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3a8 = &PTR____CFConstantStringClassReference_110e10038;
  puVar5 = puVar2;
  puStack_378 = puVar15;
  if (puVar2 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_3a0 = &PTR____CFConstantStringClassReference_110e10058;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_370 = puVar5;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_3e0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_368 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_398,&ppuStack_3d0,7)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puStack_3d8,param_2,&PTR____CFConstantStringClassReference_110e0f9b8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar15);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar13);
  }
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puStack_3f8);
  }
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puStack_3f0);
  }
  _objc_release(puStack_3e8);
  puVar15 = PTR_PTR_1126c04d8;
  func_0x00010bf65ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_3dc);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar15;
  func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar13);
  puVar15 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar13 = puVar15;
  func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar15 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110e10018,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  uVar3 = *(undefined8 *)(puStack_3d8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 1;
  puVar13 = puVar15;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar15);
  _objc_release(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar1);
  _objc_release(puVar9);
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_360) {
    return;
  }
  ___stack_chk_fail();
  pcStack_408 = FUN_10593d070;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_440 = uVar4;
  uStack_438 = uVar3;
  puStack_430 = puVar14;
  puStack_428 = puVar15;
  puStack_420 = puVar9;
  puStack_418 = puVar8;
  ppppuStack_410 = &ppppuStack_300;
  _objc_retain(puVar13);
  ppuStack_468 = &PTR____CFConstantStringClassReference_110e10078;
  puVar15 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_460 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_458 = puVar15;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_450 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_458,&ppuStack_468,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0f9d8,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar8);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar15);
  }
  puVar15 = PTR_PTR_1126c04d8;
  func_0x00010bf70740();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar15;
  func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar8);
  uVar3 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar14;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  puVar15 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x2) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar1 = puVar15;
    func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    uVar3 = *(undefined8 *)(puVar13 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(puVar13 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar15 = puVar1;
  }
  else {
    if (puVar1 == (undefined *)0x1) {
      ppuVar12 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (puVar1 != (undefined *)0x0) goto LAB_10593d3bc;
    puVar1 = puVar15;
    func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    uVar3 = *(undefined8 *)(puVar13 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar15 = puVar1;
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return;
}



/* Entry: 10593c2c0; end: 10593c57f; -[SCFideliusLogger logKVStoreWrite:failureReason:source:maxSize:] */

void FUN_10593c2c0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined8 ****ppppuStack_360;
  code *pcStack_358;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  uint uStack_330;
  undefined4 uStack_32c;
  undefined *puStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined1 ****ppppuStack_250;
  code *pcStack_248;
  byte bStack_240;
  undefined **ppuStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110daf558;
  puVar1 = param_4;
  puStack_88 = puVar10;
  if (param_4 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar8 = param_5;
  puStack_80 = puVar1;
  if (param_5 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e0faf8;
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar8;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined *)0x4;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar15;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&ppuStack_a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f8d8,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar15);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126c04d8;
  func_0x00010c09db60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar10;
  func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar1);
  puVar10 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110daf558,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar1 = puVar10;
  func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined *)0x1;
  puVar10 = puVar1;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10593c580;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar14;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain(puVar13);
  ppuStack_158 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110daf558;
  puVar2 = puVar8;
  puStack_138 = puVar15;
  if (puVar8 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_148 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar5 = puVar13;
  puStack_130 = puVar2;
  if (puVar13 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_140 = &PTR____CFConstantStringClassReference_110e0ffd8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_128 = puVar5;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = (undefined *)0x4;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_120 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_138,&ppuStack_158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_4,param_2,&PTR____CFConstantStringClassReference_110e0f8f8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar15);
  puVar15 = PTR_PTR_1126c04d8;
  func_0x00010c09db40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar15;
  func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar2);
  puVar15 = puVar10;
  func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar2 = puVar15;
  func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined *)0x1;
  puVar7 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar13);
  puVar15 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_10593c840;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1b0 = puVar5;
  puStack_1a8 = puVar6;
  puStack_1a0 = puVar10;
  puStack_198 = puVar2;
  uStack_190 = uVar4;
  uStack_188 = uVar3;
  puStack_180 = puVar13;
  puStack_178 = puVar8;
  ppuStack_170 = &puStack_c0;
  _objc_retain(puVar9);
  _objc_retain(puVar14);
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110daf558;
  puVar8 = puVar9;
  puStack_1d0 = puVar10;
  if (puVar9 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar13 = puVar14;
  puStack_1c8 = puVar8;
  if (puVar14 == (undefined *)0x0) {
    puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1c0 = puVar13;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1d0,&ppuStack_1e8,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar15,param_2,&PTR____CFConstantStringClassReference_110e0f918,puVar2);
  _objc_release(puVar2);
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar13);
  }
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126c04d8;
  func_0x00010c09db00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar10 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar8 = puVar10;
  func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  uVar3 = *(undefined8 *)(puVar15 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar8;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar8);
  _objc_release(puVar14);
  puVar10 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pcStack_1f8 = FUN_10593cac4;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_238 = &PTR____CFConstantStringClassReference_110e0fff8;
  puStack_230 = puVar13;
  uStack_220 = uVar4;
  uStack_218 = uVar3;
  puStack_210 = puVar14;
  puStack_208 = puVar9;
  pppuStack_200 = &ppuStack_170;
  _objc_retain(puVar13);
  puVar15 = (undefined *)0x1;
  func_0x00010bf72080(puVar8,param_2,&puStack_230,&ppuStack_238);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar10,param_2,&PTR____CFConstantStringClassReference_110e0f938,puVar8);
  _objc_release(puVar8);
  puVar14 = PTR_PTR_1126c04d8;
  func_0x00010bf3e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar14;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar3 = *(undefined8 *)(puVar10 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined *)0x1;
  puVar14 = puVar8;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_10593cc04;
  lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_250 = &pppuStack_200;
  _objc_retain(puVar10);
  _objc_retain(puVar15);
  _objc_retain(puVar1);
  puVar13 = PTR_PTR_1126c05a0;
  _objc_retain(param_8);
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar13,param_2,puVar15);
  func_0x00010c1899c0(puVar13,param_2,puVar1);
  func_0x00010c1971a0(puVar13,param_2,puVar10);
  func_0x00010c1e8d60(puVar13,param_2,param_7);
  func_0x00010c1e8a80(puVar13,param_2,param_8);
  uStack_330 = (uint)bStack_240;
  func_0x00010c16e320(puVar13,param_2,bStack_240);
  puStack_328 = puVar8;
  func_0x00010c0a1b40(puVar8,param_2,puVar13);
  puVar8 = param_8;
  func_0x00010bf446e0(param_8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  ppuStack_320 = &PTR____CFConstantStringClassReference_110dab0d8;
  uStack_32c = SUB84(puVar14,0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_318 = &PTR____CFConstantStringClassReference_110e0fe78;
  puStack_340 = puVar10;
  puStack_338 = puVar2;
  puStack_2e8 = puVar2;
  if (puVar10 == (undefined *)0x0) {
    puStack_340 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_310 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar14 = puVar15;
  puStack_2e0 = puStack_340;
  if (puVar15 == (undefined *)0x0) {
    puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_308 = &PTR____CFConstantStringClassReference_110e10018;
  puVar2 = puVar1;
  puStack_348 = puVar14;
  puStack_2d8 = puVar14;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_300 = &PTR____CFConstantStringClassReference_110e0fe18;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2d0 = puVar2;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_110e10038;
  puVar5 = puVar8;
  puStack_2c8 = puVar14;
  if (puVar8 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_110e10058;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2c0 = puVar5;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_330);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2b8 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_2e8,&ppuStack_320,7)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puStack_328,param_2,&PTR____CFConstantStringClassReference_110e0f9b8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar14);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  if (puVar15 == (undefined *)0x0) {
    _objc_release(puStack_348);
  }
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puStack_340);
  }
  _objc_release(puStack_338);
  puVar14 = PTR_PTR_1126c04d8;
  func_0x00010bf65ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_32c);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar2);
  puVar14 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar2 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar14 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e10018,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(puStack_328 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 1;
  puVar2 = puVar14;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar14);
  _objc_release(puVar8);
  _objc_release(puVar13);
  _objc_release(puVar1);
  _objc_release(puVar15);
  puVar1 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_358 = FUN_10593d070;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_390 = uVar4;
  uStack_388 = uVar3;
  puStack_380 = puVar13;
  puStack_378 = puVar14;
  puStack_370 = puVar15;
  puStack_368 = puVar10;
  ppppuStack_360 = &ppppuStack_250;
  _objc_retain(puVar2);
  ppuStack_3b8 = &PTR____CFConstantStringClassReference_110e10078;
  puVar14 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_3a8 = puVar14;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3a0 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_3a8,&ppuStack_3b8,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0f9d8,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar10);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar14);
  }
  puVar14 = PTR_PTR_1126c04d8;
  func_0x00010bf70740();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar10);
  uVar3 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar14 == (undefined *)0x2) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar14 = puVar10;
    func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    uVar3 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar10 = puVar14;
  }
  else {
    if (puVar14 == (undefined *)0x1) {
      ppuVar12 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (puVar14 != (undefined *)0x0) goto LAB_10593d3bc;
    puVar14 = puVar10;
    func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    uVar3 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar10 = puVar14;
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 10593c580; end: 10593c83f; -[SCFideliusLogger logKVStoreUpload:failureReason:source:numKeys:] */

void FUN_10593c580(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  uint uStack_280;
  undefined4 uStack_27c;
  undefined *puStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  byte bStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110daf558;
  puVar10 = param_4;
  puStack_88 = puVar1;
  if (param_4 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar2 = param_5;
  puStack_80 = puVar10;
  if (param_5 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e0ffd8;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar2;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined *)0x4;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar14;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&ppuStack_a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f8f8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar14);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar10);
  }
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010c09db40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar10);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf558,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar10 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined *)0x1;
  puVar6 = puVar10;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar10);
  _objc_release(param_5);
  puVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10593c840;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = puVar2;
  puStack_f8 = puVar14;
  puStack_f0 = puVar3;
  puStack_e8 = puVar10;
  uStack_e0 = uVar5;
  uStack_d8 = uVar4;
  puStack_d0 = param_5;
  puStack_c8 = param_4;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar13);
  ppuStack_138 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_130 = &PTR____CFConstantStringClassReference_110daf558;
  puVar2 = puVar9;
  puStack_120 = puVar10;
  if (puVar9 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_128 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar14 = puVar13;
  puStack_118 = puVar2;
  if (puVar13 == (undefined *)0x0) {
    puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_110 = puVar14;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_120,&ppuStack_138,3)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0f918,puVar3);
  _objc_release(puVar3);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar14);
  }
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126c04d8;
  func_0x00010c09db00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar10;
  func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar2);
  puVar10 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar2 = puVar10;
  func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar13);
  puVar1 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pcStack_148 = FUN_10593cac4;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110e0fff8;
  puStack_180 = puVar10;
  uStack_170 = uVar5;
  uStack_168 = uVar4;
  puStack_160 = puVar13;
  puStack_158 = puVar9;
  ppuStack_150 = &puStack_c0;
  _objc_retain(puVar10);
  puVar14 = (undefined *)0x1;
  func_0x00010bf72080(puVar2,param_2,&puStack_180,&ppuStack_188);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0f938,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf3e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined *)0x1;
  puVar1 = puVar13;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_10593cc04;
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_1a0 = &ppuStack_150;
  _objc_retain(puVar10);
  _objc_retain(puVar14);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126c05a0;
  _objc_retain(param_8);
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar2,param_2,puVar14);
  func_0x00010c1899c0(puVar2,param_2,puVar8);
  func_0x00010c1971a0(puVar2,param_2,puVar10);
  func_0x00010c1e8d60(puVar2,param_2,param_7);
  func_0x00010c1e8a80(puVar2,param_2,param_8);
  uStack_280 = (uint)bStack_190;
  func_0x00010c16e320(puVar2,param_2,bStack_190);
  puStack_278 = puVar13;
  func_0x00010c0a1b40(puVar13,param_2,puVar2);
  puVar13 = param_8;
  func_0x00010bf446e0(param_8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  ppuStack_270 = &PTR____CFConstantStringClassReference_110dab0d8;
  uStack_27c = SUB84(puVar1,0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_268 = &PTR____CFConstantStringClassReference_110e0fe78;
  puStack_290 = puVar10;
  puStack_288 = puVar3;
  puStack_238 = puVar3;
  if (puVar10 == (undefined *)0x0) {
    puStack_290 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_260 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar1 = puVar14;
  puStack_230 = puStack_290;
  if (puVar14 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_258 = &PTR____CFConstantStringClassReference_110e10018;
  puVar3 = puVar8;
  puStack_298 = puVar1;
  puStack_228 = puVar1;
  if (puVar8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_250 = &PTR____CFConstantStringClassReference_110e0fe18;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_220 = puVar3;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_248 = &PTR____CFConstantStringClassReference_110e10038;
  puVar6 = puVar13;
  puStack_218 = puVar1;
  if (puVar13 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_240 = &PTR____CFConstantStringClassReference_110e10058;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_210 = puVar6;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_280);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_208 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_238,&ppuStack_270,7)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puStack_278,param_2,&PTR____CFConstantStringClassReference_110e0f9b8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar9);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar1);
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puStack_298);
  }
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puStack_290);
  }
  _objc_release(puStack_288);
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf65ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_27c);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e10018,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(puStack_278 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 1;
  puVar3 = puVar1;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar14);
  puVar8 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_10593d070;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2e0 = uVar5;
  uStack_2d8 = uVar4;
  puStack_2d0 = puVar2;
  puStack_2c8 = puVar1;
  puStack_2c0 = puVar14;
  puStack_2b8 = puVar10;
  ppppuStack_2b0 = &pppuStack_1a0;
  _objc_retain(puVar3);
  ppuStack_308 = &PTR____CFConstantStringClassReference_110e10078;
  puVar1 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_300 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2f8 = puVar1;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2f0 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_2f8,&ppuStack_308,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar8,param_2,&PTR____CFConstantStringClassReference_110e0f9d8,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar10);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf70740();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar10);
  uVar4 = *(undefined8 *)(puVar8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x2) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar8 = puVar1;
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(puVar3 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(puVar3 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar1 = puVar8;
  }
  else {
    if (puVar8 == (undefined *)0x1) {
      ppuVar12 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (puVar8 != (undefined *)0x0) goto LAB_10593d3bc;
    puVar8 = puVar1;
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(puVar3 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar1 = puVar8;
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593c840; end: 10593cac3; -[SCFideliusLogger logKVStoreMerge:failureReason:source:] */

void FUN_10593c840(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  byte bStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110daf558;
  puVar10 = param_4;
  puStack_70 = puVar1;
  if (param_4 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar2 = param_5;
  puStack_68 = puVar10;
  if (param_5 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f918,puVar3);
  _objc_release(puVar3);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar10);
  }
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010c09db00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar10);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf558,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar10 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar10);
  _objc_release(param_5);
  puVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pcStack_98 = FUN_10593cac4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110e0fff8;
  puStack_d0 = puVar2;
  uStack_c0 = uVar5;
  uStack_b8 = uVar4;
  puStack_b0 = param_5;
  puStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puVar13 = (undefined *)0x1;
  func_0x00010bf72080(puVar10,param_2,&puStack_d0,&ppuStack_d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0f938,puVar10);
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126c04d8;
  func_0x00010bf3e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined *)0x1;
  puVar1 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10593cc04;
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f0 = &puStack_a0;
  _objc_retain(puVar10);
  _objc_retain(puVar13);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c05a0;
  _objc_retain(param_8);
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar2,param_2,puVar13);
  func_0x00010c1899c0(puVar2,param_2,param_6);
  func_0x00010c1971a0(puVar2,param_2,puVar10);
  func_0x00010c1e8d60(puVar2,param_2,param_7);
  func_0x00010c1e8a80(puVar2,param_2,param_8);
  uStack_1d0 = (uint)bStack_e0;
  func_0x00010c16e320(puVar2,param_2,bStack_e0);
  puStack_1c8 = puVar3;
  func_0x00010c0a1b40(puVar3,param_2,puVar2);
  puVar3 = param_8;
  func_0x00010bf446e0(param_8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dab0d8;
  uStack_1cc = SUB84(puVar1,0);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110e0fe78;
  puStack_1e0 = puVar10;
  puStack_1d8 = puVar6;
  puStack_188 = puVar6;
  if (puVar10 == (undefined *)0x0) {
    puStack_1e0 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar1 = puVar13;
  puStack_180 = puStack_1e0;
  if (puVar13 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110e10018;
  puVar6 = param_6;
  puStack_1e8 = puVar1;
  puStack_178 = puVar1;
  if (param_6 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110e0fe18;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_170 = puVar6;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_198 = &PTR____CFConstantStringClassReference_110e10038;
  puVar7 = puVar3;
  puStack_168 = puVar1;
  if (puVar3 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_190 = &PTR____CFConstantStringClassReference_110e10058;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_160 = puVar7;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_1d0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_158 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_188,&ppuStack_1c0,7)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puStack_1c8,param_2,&PTR____CFConstantStringClassReference_110e0f9b8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar1);
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puStack_1e8);
  }
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puStack_1e0);
  }
  _objc_release(puStack_1d8);
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf65ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar6);
  puVar1 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar6 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e10018,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar4 = *(undefined8 *)(puStack_1c8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 1;
  puVar6 = puVar1;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(puVar13);
  puVar3 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_10593d070;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_230 = uVar5;
  uStack_228 = uVar4;
  puStack_220 = puVar2;
  puStack_218 = puVar1;
  puStack_210 = puVar13;
  puStack_208 = puVar10;
  pppuStack_200 = &ppuStack_f0;
  _objc_retain(puVar6);
  ppuStack_258 = &PTR____CFConstantStringClassReference_110e10078;
  puVar1 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_250 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_248 = puVar1;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_240 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_248,&ppuStack_258,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0f9d8,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar10);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf70740();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar10);
  uVar4 = *(undefined8 *)(puVar3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x2) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar1 = puVar10;
    func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    uVar4 = *(undefined8 *)(puVar6 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(puVar6 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar10 = puVar1;
  }
  else {
    if (puVar1 == (undefined *)0x1) {
      ppuVar12 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (puVar1 != (undefined *)0x0) goto LAB_10593d3bc;
    puVar1 = puVar10;
    func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    uVar4 = *(undefined8 *)(puVar6 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar10 = puVar1;
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 10593cac4; end: 10593cc03; -[SCFideliusLogger logCloudKVStoreChange:] */

void FUN_10593cac4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 *puStack_60;
  code *pcStack_58;
  byte bStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e0fff8;
  uStack_40 = param_3;
  _objc_retain(param_3);
  puVar13 = (undefined *)0x1;
  func_0x00010bf72080(puVar1,param_2,&uStack_40,&ppuStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f938,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf3e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined *)0x1;
  puVar1 = puVar2;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10593cc04;
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar13);
  _objc_retain(param_6);
  puVar5 = PTR_PTR_1126c05a0;
  _objc_retain(param_8);
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar5,param_2,puVar13);
  func_0x00010c1899c0(puVar5,param_2,param_6);
  func_0x00010c1971a0(puVar5,param_2,puVar10);
  func_0x00010c1e8d60(puVar5,param_2,param_7);
  func_0x00010c1e8a80(puVar5,param_2,param_8);
  uStack_140 = (uint)bStack_50;
  func_0x00010c16e320(puVar5,param_2,bStack_50);
  puStack_138 = puVar2;
  func_0x00010c0a1b40(puVar2,param_2,puVar5);
  puVar2 = param_8;
  func_0x00010bf446e0(param_8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  ppuStack_130 = &PTR____CFConstantStringClassReference_110dab0d8;
  uStack_13c = SUB84(puVar1,0);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110e0fe78;
  puStack_150 = puVar10;
  puStack_148 = puVar6;
  puStack_f8 = puVar6;
  if (puVar10 == (undefined *)0x0) {
    puStack_150 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_120 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar1 = puVar13;
  puStack_f0 = puStack_150;
  if (puVar13 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e10018;
  puVar6 = param_6;
  puStack_158 = puVar1;
  puStack_e8 = puVar1;
  if (param_6 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_110 = &PTR____CFConstantStringClassReference_110e0fe18;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_e0 = puVar6;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110e10038;
  puVar7 = puVar2;
  puStack_d8 = puVar1;
  if (puVar2 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_100 = &PTR____CFConstantStringClassReference_110e10058;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d0 = puVar7;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_140);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c8 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_f8,&ppuStack_130,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puStack_138,param_2,&PTR____CFConstantStringClassReference_110e0f9b8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar1);
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puStack_158);
  }
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puStack_150);
  }
  _objc_release(puStack_148);
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf65ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_13c);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar6);
  puVar1 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110daf558,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar6 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e10018,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar3 = *(undefined8 *)(puStack_138 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 1;
  puVar6 = puVar1;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(puVar13);
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_10593d070;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a0 = uVar4;
  uStack_198 = uVar3;
  puStack_190 = puVar5;
  puStack_188 = puVar1;
  puStack_180 = puVar13;
  puStack_178 = puVar10;
  ppuStack_170 = &puStack_60;
  _objc_retain(puVar6);
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e10078;
  puVar1 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1b8 = puVar1;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1b0 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1b8,&ppuStack_1c8,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0f9d8,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar10);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf70740();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar10);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar13;
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x2) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar1 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(puVar6 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(puVar6 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar2 = puVar1;
  }
  else {
    if (puVar1 == (undefined *)0x1) {
      ppuVar12 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (puVar1 != (undefined *)0x0) goto LAB_10593d3bc;
    puVar1 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(puVar6 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar2 = puVar1;
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10593cc04; end: 10593d06f; -[SCFideliusLogger logDBV2Update:failureReason:source:table:recordCount:recipientUserIds:isBackfillCompleted:] */

void FUN_10593cc04(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,undefined *param_8,
                  byte param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c05a0;
  _objc_retain(param_8);
  _objc_alloc_init();
  func_0x00010c226f80();
  func_0x00010c206c40(puVar1,param_2,param_5);
  func_0x00010c1899c0(puVar1,param_2,param_6);
  func_0x00010c1971a0(puVar1,param_2,param_4);
  func_0x00010c1e8d60(puVar1,param_2,param_7);
  func_0x00010c1e8a80(puVar1,param_2,param_8);
  uStack_f0 = (uint)param_9;
  func_0x00010c16e320(puVar1,param_2,param_9);
  lStack_e8 = param_1;
  func_0x00010c0a1b40(param_1,param_2,puVar1);
  puVar2 = param_8;
  func_0x00010bf446e0(param_8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110dab0d8;
  uStack_ec = (undefined4)param_3;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110e0fe78;
  puStack_100 = param_4;
  puStack_f8 = puVar3;
  puStack_a8 = puVar3;
  if (param_4 == (undefined *)0x0) {
    puStack_100 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = param_5;
  puStack_a0 = puStack_100;
  if (param_5 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e10018;
  puVar4 = param_6;
  puStack_108 = puVar3;
  puStack_98 = puVar3;
  if (param_6 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e0fe18;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar4;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e10038;
  puVar5 = puVar2;
  puStack_88 = puVar3;
  if (puVar2 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e10058;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar5;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_f0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_a8,&ppuStack_e0,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(lStack_e8,param_2,&PTR____CFConstantStringClassReference_110e0f9b8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (param_5 == (undefined *)0x0) {
    _objc_release(puStack_108);
  }
  if (param_4 == (undefined *)0x0) {
    _objc_release(puStack_100);
  }
  _objc_release(puStack_f8);
  puVar3 = PTR_PTR_1126c04d8;
  func_0x00010bf65ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uStack_ec);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110daf558,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e10018,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar8 = *(undefined8 *)(lStack_e8 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 1;
  puVar4 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10593d070;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = uVar9;
  uStack_148 = uVar8;
  puStack_140 = puVar1;
  puStack_138 = puVar3;
  puStack_130 = param_5;
  puStack_128 = param_4;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  ppuStack_178 = &PTR____CFConstantStringClassReference_110e10078;
  puVar1 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_170 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_168 = puVar1;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_160 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_168,&ppuStack_178,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0f9d8,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf70740();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  uVar8 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bfec320();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x2) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar1 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar8 = *(undefined8 *)(puVar4 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar9);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(puVar4 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar2 = puVar1;
  }
  else {
    if (puVar1 == (undefined *)0x1) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (puVar1 != (undefined *)0x0) goto LAB_10593d3bc;
    puVar1 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar8 = *(undefined8 *)(puVar4 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar2 = puVar1;
  }
  _objc_release(uVar9);
  _objc_release(uVar8);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10593d070; end: 10593d23f; -[SCFideliusLogger logDeviceIDCreate:success:] */

void FUN_10593d070(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e10078;
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar1;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f9d8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf70740();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x2) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar1 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar2 = puVar1;
  }
  else {
    if (puVar1 == (undefined *)0x1) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (puVar1 != (undefined *)0x0) goto LAB_10593d3bc;
    puVar1 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar2 = puVar1;
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10593d240; end: 10593d3d3; -[SCFideliusLogger logDBMgrFetchingStatus:durationInSeconds:] */

void FUN_10593d240(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010bf658e0(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 2) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dab0d8;
LAB_10593d310:
    puVar3 = puVar1;
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    puVar1 = puVar3;
  }
  else {
    if (param_3 == 1) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dad2d8;
      goto LAB_10593d310;
    }
    if (param_3 != 0) goto LAB_10593d3bc;
    puVar3 = puVar1;
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,
                        &PTR____CFConstantStringClassReference_110e09b78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    puVar1 = puVar3;
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
LAB_10593d3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593d3d4; end: 10593d5c3; -[SCFideliusLogger logInvalidCurrentKeyWithFailureReason:source:] */

void FUN_10593d3d4(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e0fe78;
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar2 = param_4;
  puStack_58 = puVar1;
  if (param_4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1,param_2,&PTR____CFConstantStringClassReference_110e0fa18,puVar3);
  _objc_release(puVar3);
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010c069b80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 1;
  puVar2 = puVar1;
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c04d8;
  _objc_retain(uVar7);
  func_0x00010c0dad00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd1dd8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar1 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dae8d8,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar6);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593d5c4; end: 10593d6f3; -[SCFideliusLogger logNonFriendKeysRequestedSyncKeys:source:] */

void FUN_10593d5c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c04d8;
  _objc_retain(param_4);
  func_0x00010c0dad00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd1dd8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593d6f4; end: 10593d8a7; -[SCFideliusLogger logKeysFetchedFromFriendDb:source:eligibileForE2EE:] */

void FUN_10593d6f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c0510;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c197d00();
  func_0x00010c206c40(puVar1,param_2,param_4);
  func_0x00010c1b6b80(puVar1,param_2,param_3);
  func_0x00010c0a1b40(param_1,param_2,puVar1);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x00010c086e40(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3 == 0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110df2558,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e10098,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593d8a8; end: 10593ddaf; -[SCFideliusLogger logMissingKeysFetch:friendCount:nonFriendCount:hasEmptyKeys:errorDescription:] */

void FUN_10593d8a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_7;
  if (param_7 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc100(param_1);
  _objc_release(puVar6);
  if (param_7 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c04d8;
  func_0x00010c0ceb60(PTR_PTR_1126c04d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar8);
  _objc_release(uVar7);
  if (param_4 != 0) {
    puVar2 = PTR_PTR_1126c04d8;
    func_0x00010c0ceb60(PTR_PTR_1126c04d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar2 = puVar4;
    func_0x00010c2ac460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar3 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar3);
  }
  if (param_5 != 0) {
    puVar2 = PTR_PTR_1126c04d8;
    func_0x00010c0ceb60(PTR_PTR_1126c04d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar2 = puVar4;
    func_0x00010c2ac460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar3 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_7 + 0x30,0);
  _objc_storeStrong(param_7 + 0x28,0);
  _objc_storeStrong(param_7 + 0x20,0);
  _objc_storeStrong(param_7 + 0x18,0);
  _objc_storeStrong(param_7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_7 + 8,0);
  return;
}



/* Entry: 10593ddb0; end: 10593de0f; -[SCFideliusLogger .cxx_destruct] */

void FUN_10593ddb0(long param_1)

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



/* Entry: 10593de10; end: 10593e36f; -[SCFideliusManager getKeysForUser:] */

undefined * FUN_10593de10(long param_1,undefined8 param_2,undefined *param_3)

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
  undefined *puVar13;
  long lVar14;
  long lStack_1a8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar13 = &UNK_10f30fd5e;
  func_0x0001000ba800();
  puVar1 = param_3;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2446c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  lVar10 = lVar3;
  FUN_10593e370(puVar1,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR_PTR_1126c05a8;
    _objc_alloc();
    func_0x00010c00f280();
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010bfab340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bfb7fe0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = lVar2;
    func_0x00010bfb8040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lStack_1a8;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010c15f960();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2432a0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar3;
      func_0x00010bf712a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lStack_1a8);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar14;
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        lVar2 = param_1;
        func_0x00010c0f98a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar5);
        _objc_retain(lVar14);
        func_0x00010c0f7fc0(lVar2);
        _objc_release(lVar2);
        _objc_release(lVar14);
        _objc_release(lVar5);
      }
      lVar2 = param_1;
      func_0x00010c0b3760();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(lVar14);
      func_0x00010c0a9280(lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lStack_1a8 = lVar14;
    }
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    _objc_retain(lStack_1a8);
    lVar2 = lStack_1a8;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lStack_1a8);
        }
        puVar4 = PTR_PTR_1126c0388;
        uVar12 = *(undefined8 *)(lVar14 * 8);
        uVar7 = uVar12;
        func_0x00010c26cfc0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c580(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x00010bff6b20();
        puVar9 = PTR_PTR_1126c05b0;
        _objc_alloc();
        uVar7 = uVar12;
        func_0x00010c0d4ee0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298be0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        func_0x00010c03bc40();
        _objc_release(uVar12);
        _objc_release(uVar7);
        func_0x00010befa120(puVar6);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar4);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = lStack_1a8;
      func_0x00010bf52a60();
    }
    _objc_release(lStack_1a8);
    puVar4 = puVar6;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c0869c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010c0f7fc0(param_1);
      _objc_release(param_1);
      _objc_release(param_3);
    }
    puVar4 = PTR_PTR_1126c05a8;
    _objc_alloc();
    func_0x00010c00f280();
    _objc_release(puVar6);
    _objc_release(lStack_1a8);
    _objc_release(lVar5);
  }
  _objc_release(puVar1);
  func_0x0001000e2a84(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar13);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(lVar10);
  puVar13 = param_3;
  FUN_10593fffc();
  if (((ulong)puVar13 & 1) == 0) {
    puVar13 = param_3;
    FUN_10593ef34(param_3,lVar10);
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  _objc_release(lVar10);
  _objc_release(param_3);
  return puVar13;
}



/* Entry: 10593e370; end: 10593e513;  */

ulong FUN_10593e370(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  FUN_10593fffc();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    FUN_10593ef34(param_1,param_2);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10593e514; end: 10593e74b; -[SCFideliusManager getKeyForCurrentUser] */

void FUN_10593e514(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  double dVar9;
  
  lVar1 = param_2;
  func_0x00010c06d280(param_2,param_3,&PTR____CFConstantStringClassReference_110e101b8);
  if ((int)lVar1 == 0) {
    _CACurrentMediaTime();
    lVar1 = param_2;
    func_0x00010c0b3760(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    dVar9 = 0.0;
    func_0x00010c0a4740(0);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfab340();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c0b3760(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    if (lVar3 != 0) {
      func_0x00010c0a4740(dVar9 - param_1,lVar2,param_3,2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010bfdebe0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010bfac2e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar2;
      func_0x00010bfc5800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar3);
      ppuVar6 = &PTR____CFConstantStringClassReference_110dd4698;
      goto LAB_10593e664;
    }
    func_0x00010c0a4740(dVar9 - param_1,lVar2,param_3,1);
    lVar8 = 0;
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar8 = param_2;
    func_0x00010c0d4de0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110e10298;
LAB_10593e664:
    func_0x00010c074fa0(param_2,param_3,lVar8,ppuVar6);
    if ((int)param_2 == 0) {
      puVar7 = (undefined *)0x0;
      goto LAB_10593e728;
    }
    puVar7 = PTR_PTR_1126c05c0;
    _objc_alloc(PTR_PTR_1126c05c0);
    lVar1 = lVar8;
    func_0x00010bf19880(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11a480();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bf19880(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1142a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010c298be0(lVar8);
    func_0x00010c03bc20(puVar7,param_3,lVar2,lVar4,lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_10593e728:
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10593e74c; end: 10593e757; -[SCFideliusManager syncKeys:callback:] */

void FUN_10593e74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec9b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__syncKeys_callback_source__112590068,param_3,param_4,
             &PTR____CFConstantStringClassReference_110dd59f8);
  return;
}



/* Entry: 10593e758; end: 10593e967; -[SCFideliusManager _syncKeys:callback:source:] */

void FUN_10593e758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108c0ca0);
  uVar2 = uVar1;
  FUN_105954664();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010594735c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf398e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b5020();
  _objc_release(uVar4);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010bfcfa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  FUN_105954300(0,uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfc5ea0(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10593e968; end: 10593e9e3;  */

void FUN_10593e968(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100576d08();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10593e9e4; end: 10593ee53;  */

void FUN_10593e9e4(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == (undefined *)0x0) || (param_3 != 0)) {
      func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x20));
      if (param_3 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = param_3;
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar9 = lVar1;
      func_0x00010c0b3760();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b16e0();
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar15);
    }
    else {
      lVar15 = lVar1;
      func_0x00010c15f960();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar15;
      func_0x00010bfe6140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar15);
      puVar2 = param_2;
      func_0x00010bfb8300();
      _objc_retainAutoreleasedReturnValue();
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_10593ee54;
      puStack_118 = &UNK_11084c4a0;
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      puStack_110 = puVar2;
      lStack_108 = lVar1;
      _objc_retain(uVar12);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uStack_100 = uVar12;
      _objc_retain(uVar13);
      ppuVar3 = &puStack_130;
      uStack_f8 = uVar13;
      _objc_retainBlock();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(puVar2);
      puVar5 = puVar2;
      func_0x00010bf52a60();
      lVar15 = lRam0000000000000000;
      while (puVar5 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar15) {
            _objc_enumerationMutation(puVar2);
          }
          uVar14 = *(undefined8 *)((long)puVar11 * 8);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar14;
          func_0x00010bfe2ee0();
          uVar13 = uVar14;
          func_0x00010c0b5940(uVar14);
          func_0x000100c4a928(uVar12,uVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar12;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          _objc_release(uVar14);
          uVar6 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c2446c0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar6;
          func_0x00010c244d60();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar12;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar13;
          FUN_10593ef34(uVar13,uVar14);
          _objc_release(uVar14);
          _objc_release(uVar12);
          _objc_release(uVar6);
          if ((int)uVar7 == 0) {
            lVar10 = lVar1;
            func_0x00010c291a80(lVar1);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar1;
            func_0x00010c293260();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf659e0(lVar10);
            _objc_release(lVar8);
            _objc_release(lVar10);
          }
          else {
            func_0x00010befa120(puVar4);
          }
          _objc_release(uVar13);
          puVar11 = puVar11 + 1;
        } while (puVar5 != puVar11);
        puVar5 = puVar2;
        func_0x00010bf52a60();
      }
      _objc_release(puVar2);
      puVar5 = puVar2;
      func_0x00010bf529e0();
      puVar11 = puVar4;
      func_0x00010bf529e0();
      if (puVar5 != puVar11) {
        uVar13 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0b3760(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010bf529e0(puVar4);
        func_0x00010c0aaf20(uVar12);
        _objc_release(uVar12);
        _objc_release(uVar13);
      }
      func_0x00010c114e00(lVar9);
      _objc_release(puVar4);
      _objc_release(ppuVar3);
      _objc_release(uStack_f8);
      _objc_release(uStack_100);
      _objc_release(puVar2);
      _objc_release(lVar9);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126c0388;
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0b3760(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c271e80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0b3760(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b16e0();
  _objc_release(uVar12);
  _objc_release(uVar13);
  func_0x00010c0e6c80(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10593ee54; end: 10593ef33;  */

void FUN_10593ee54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126c0388;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = uVar4;
  func_0x00010c0b3760(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c271e80(puVar3,param_2,uVar5,uVar4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b3760(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b16e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c0e6c80(*(undefined8 *)(param_1 + 0x38),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10593ef34; end: 10593ef87;  */

long FUN_10593ef34(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0ee920(param_2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000100bf119c(param_2);
  }
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 10593ef88; end: 10593f057; -[SCFideliusManager getKeysForUserAsync:callback:] */

void FUN_10593ef88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0869c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10593f058;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10593f058; end: 10593f123;  */

void FUN_10593f058(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfc6b00(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = lVar1;
    func_0x00010c086dc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = lVar1;
      func_0x00010c086dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      if (lVar4 == 0) {
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
      else {
        lVar4 = lVar1;
        func_0x00010bf8d3a0();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if (lVar4 != 0) {
          func_0x00010c0e6c80(*(undefined8 *)(param_1 + 0x30),param_2,lVar1);
          goto LAB_10593f10c;
        }
      }
    }
    func_0x00010c0e3ee0(*(undefined8 *)(param_1 + 0x30));
  }
LAB_10593f10c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10593f124; end: 10593f1cb; -[SCFideliusManager getKeyForCurrentUserAsync:] */

void FUN_10593f124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0869c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10593f1cc;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10593f1cc; end: 10593f2ab;  */

void FUN_10593f1cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bfc4540();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (lVar1 == 0) {
      func_0x00010c0e3ee0(uVar6);
    }
    else {
      puVar2 = PTR_PTR_1126c05c0;
      _objc_alloc(PTR_PTR_1126c05c0);
      lVar3 = lVar1;
      func_0x00010c0ee500(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bfeb3c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c298be0(lVar1);
      func_0x00010c03bc20(puVar2,param_2,lVar3,lVar4,lVar5);
      func_0x00010c0e6c80(uVar6,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10593f2ac; end: 10593f2af; -[SCFideliusManager ensureCurrentUserKey:] */

void FUN_10593f2ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c126250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_registerCurrentUserKeyWithServer_1126272b0);
  return;
}



/* Entry: 10593f2b0; end: 10593fb07; -[SCFideliusManager getKeysForUsers:] */

/* WARNING: Possible PIC construction at 0x00010593f98c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010593f990) */
/* WARNING: Removing unreachable block (ram,0x00010593f9d0) */
/* WARNING: Removing unreachable block (ram,0x00010593f954) */

void FUN_10593f2b0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = &UNK_10f30fe02;
  func_0x0001000ba800();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bfab340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108c0d10);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar4);
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar4);
      }
      lVar15 = lVar3;
      func_0x00010c0869a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar15;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar15);
      puVar10 = puVar5;
      if (lVar7 != 0) {
        puVar10 = puVar2;
      }
      func_0x00010befa120(puVar10);
      _objc_release(lVar7);
      lVar17 = lVar17 + 1;
    } while (lVar6 != lVar17);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bfb7fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010c292500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_retain(puVar5);
  puVar10 = puVar5;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar10 != (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar5);
      }
      lVar17 = lVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar17;
      func_0x00010bf529e0();
      if (lVar15 == 0) {
        func_0x00010befa120(puVar8);
      }
      else {
        puVar16 = PTR_PTR_1126c05b8;
        func_0x00010bdc35c0(PTR_PTR_1126c05b8);
        _objc_retainAutoreleasedReturnValue();
        lVar15 = param_1;
        func_0x00010bdf1080(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        func_0x00010befa120(puVar2);
        _objc_release(lVar15);
      }
      _objc_release(lVar17);
      puVar18 = puVar18 + 1;
    } while (puVar10 != puVar18);
    puVar10 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(puVar8);
  puVar10 = puVar8;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar10 != (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar8);
      }
      uVar14 = *(ulong *)((long)puVar16 * 8);
      puVar11 = PTR_PTR_1126c05b8;
      func_0x00010bdc35c0(PTR_PTR_1126c05b8);
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1;
      func_0x00010c2446c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar17;
      func_0x00010c244d60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      FUN_10593e370(uVar14,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar15);
      _objc_release(lVar17);
      lVar17 = param_1;
      if ((uVar14 & 1) == 0) {
        lVar15 = param_1;
        func_0x00010bdf1080(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        func_0x00010c0b3760(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar17;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a9280();
        _objc_release(lVar7);
      }
      else {
        lVar7 = param_1;
        func_0x00010c15f960();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar7;
        func_0x00010c2432a0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar12;
        func_0x00010bf712a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        _objc_release(lVar7);
        lVar7 = lVar15;
        func_0x00010bf529e0();
        lVar12 = param_1;
        if (lVar7 == 0) {
          _objc_release(lVar15);
          func_0x00010c0b3760(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar12;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a9280();
          lVar15 = 0;
        }
        else {
          func_0x00010befa160(puVar18);
          func_0x00010c0b3760(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar12;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0(lVar15);
          func_0x00010c0a9280(lVar7);
        }
        _objc_release(lVar7);
        _objc_release(lVar12);
        func_0x00010bdf1080(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
      }
      _objc_release(lVar17);
      _objc_release(lVar15);
      _objc_release(puVar11);
      puVar16 = puVar16 + 1;
    } while (puVar10 != puVar16);
    puVar10 = puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  puVar10 = puVar18;
  func_0x00010bf529e0();
  if (puVar10 != (undefined *)0x0) {
    func_0x00010c0869c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(puVar18);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(puVar18);
    _objc_release(lVar3);
  }
  puVar10 = puVar5;
  func_0x00010bf529e0();
  if (puVar10 != (undefined *)0x0) {
    _objc_retain(puVar2);
    puVar10 = puVar2;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    if (puVar10 != (undefined *)0x0) {
      func_0x00010c0869a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2923e0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010c272380;
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar18);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar1);
  __Unwind_Resume(param_3);
code_r0x00010c272380:
                    /* WARNING: Could not recover jumptable at 0x00010c272390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10593fb08; end: 10593fb0f;  */

void FUN_10593fb08(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_toString_11267a308);
  return;
}



/* Entry: 10593fb10; end: 10593fb63;  */

void FUN_10593fb10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c293260(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65a20(uVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e10258,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10593fb64; end: 10593fc13; -[SCFideliusManager _createParticipantKeyWithDevices:participant:eligible:] */

void FUN_10593fb64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c0388;
  _objc_retain(param_4);
  func_0x00010bf9ede0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c05a8;
  _objc_alloc(PTR_PTR_1126c05a8);
  func_0x00010c00f280();
  puVar3 = PTR_PTR_1126c05c8;
  _objc_alloc(PTR_PTR_1126c05c8);
  func_0x00010c05b280();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10593fc14; end: 10593fd13; -[SCFideliusManager getKeysForUsersAsync:shouldIncludeNonFriend:callback:] */

void FUN_10593fc14(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5
                  )

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 auStack_b0 [7];
  undefined8 auStack_78 [7];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar3 = param_1;
    func_0x00010c0869c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = auStack_78;
    if (param_4 == 0) {
      puVar1 = auStack_b0;
    }
    pcVar2 = FUN_10593fd14;
    if (param_4 == 0) {
      pcVar2 = (code *)0x105940060;
    }
    *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puVar1[1] = 0xc2000000;
    puVar1[2] = pcVar2;
    puVar1[3] = &UNK_110848ba8;
    puVar1[4] = param_1;
    _objc_retain(param_3);
    puVar1[5] = param_3;
    _objc_retain(param_5);
    puVar1[6] = param_5;
    func_0x00010c0f7fc0(uVar3,param_2,puVar1);
    _objc_release(uVar3);
    _objc_release(puVar1[6]);
    _objc_release(puVar1[5]);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10593fd14; end: 10593fffb;  */

ulong FUN_10593fd14(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfc6b40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  uVar13 = uVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar13 == 0) {
      _objc_release(uVar2);
      puVar11 = puVar3;
      func_0x00010bf529e0();
      if (puVar11 == (undefined *)0x0) {
        func_0x00010c0e6c80(*(undefined8 *)(param_1 + 0x30));
      }
      else {
        func_0x00010be0f780(*(undefined8 *)(param_1 + 0x20));
      }
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        return uVar2;
      }
      ___stack_chk_fail();
      _objc_retain();
      uVar13 = uVar2;
      func_0x00010c071ae0();
      if ((uVar13 & 1) == 0) {
        uVar13 = uVar2;
        func_0x00010c071ae0(uVar2);
      }
      else {
        uVar13 = 1;
      }
      _objc_release(uVar2);
      return uVar13;
    }
    uVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar2);
      }
      uVar15 = *(ulong *)(uVar14 * 8);
      uVar4 = uVar15;
      func_0x00010bfb82e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf8d3a0();
      if (uVar5 == 2) {
        _objc_release(uVar4);
LAB_10593fe54:
        uVar4 = uVar15;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar4 = uVar5;
        FUN_10593fffc();
        if ((uVar4 & 1) == 0) {
          func_0x00010c2923e0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar15);
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c2446c0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c244d60();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          FUN_10593ef34(uVar5,uVar10);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
        }
        _objc_release(uVar5);
      }
      else {
        uVar5 = uVar15;
        func_0x00010bfb82e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c086dc0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf529e0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        if (uVar7 == 0) goto LAB_10593fe54;
      }
      uVar14 = uVar14 + 1;
    } while (uVar13 != uVar14);
    uVar13 = uVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10593fffc; end: 1059400a3;  */

ulong FUN_10593fffc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110e12b38);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110e12b58);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1059400a4; end: 1059402bf; -[SCFideliusManager _fetchAndProcessMissingKeys:participantsWithFriendKeysPopulated:friendCount:nonFriendCount:callback:] */

void FUN_1059400a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108c0d50);
  uVar2 = uVar1;
  FUN_105954664();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010594735c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf398e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b5020();
  _objc_release(uVar4);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010bfcfa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  FUN_105954300(0,uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_4);
  uStack_78 = param_5;
  uStack_70 = param_6;
  _objc_retain(param_7);
  func_0x00010bfc5ea0(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059402c0; end: 10594033b;  */

void FUN_1059402c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100576d08();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10594033c; end: 1059403ab;  */

void FUN_10594033c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29fc0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059403ac; end: 105940ac3; -[SCFideliusManager _handleFriendKeysResponse:error:participantsWithFriendKeysPopulated:friendCount:nonFriendCount:callback:] */

void FUN_1059403ac(long param_1,undefined8 param_2,long param_3,undefined *param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  if ((param_3 == 0) || (param_4 != (undefined *)0x0)) {
    if (param_4 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = param_4;
      func_0x00010c09e4e0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aa5a0();
    _objc_release(lVar5);
    _objc_release(param_1);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    lVar5 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (param_1 = param_5, lVar5 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        uVar17 = *(ulong *)(lVar18 * 8);
        uVar7 = uVar17;
        func_0x00010bfb82e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf8d3a0();
        _objc_release(uVar7);
        if (uVar8 == 2) {
          uVar7 = uVar17;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uVar7 = uVar8;
          FUN_10593fffc();
          if ((uVar7 & 1) == 0) {
            puVar9 = PTR_PTR_1126c05a8;
            _objc_alloc(PTR_PTR_1126c05a8);
            uVar7 = uVar17;
            func_0x00010bfb82e0(uVar17);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar7;
            func_0x00010c086dc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c00f280(puVar9);
            _objc_release(uVar10);
            _objc_release(uVar7);
            puVar11 = PTR_PTR_1126c05c8;
            _objc_alloc(PTR_PTR_1126c05c8);
            func_0x00010c2923e0(uVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c05b280(puVar11);
            _objc_release(uVar17);
            func_0x00010befa120(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar9);
          }
          else {
            func_0x00010befa120(puVar6);
          }
          _objc_release(uVar8);
        }
        else {
          func_0x00010befa120(puVar6);
        }
        lVar18 = lVar18 + 1;
      } while (lVar5 != lVar18);
      lVar5 = param_5;
      func_0x00010bf52a60();
    }
  }
  else {
    puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_3;
    func_0x00010bfb8300();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar18;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar18);
        }
        lVar14 = *(long *)(lVar19 * 8);
        lVar2 = lVar14;
        func_0x00010c2923e0(lVar14);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bfe2ee0();
        lVar4 = lVar2;
        func_0x00010c0b5940(lVar2);
        func_0x000100c4a928(lVar3,lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(lVar2);
        func_0x00010bfb8020();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar14;
        func_0x00010bf529e0();
        _objc_release(lVar14);
        puVar6 = PTR_PTR_1126c0388;
        if (lVar2 == 0) {
          puVar6 = PTR_PTR_1126c05a8;
          _objc_alloc(PTR_PTR_1126c05a8);
          func_0x00010c00f280();
          puVar9 = PTR_PTR_1126c05c8;
          _objc_alloc(PTR_PTR_1126c05c8);
          puVar11 = PTR_PTR_1126c05b8;
          func_0x00010bdc35c0(PTR_PTR_1126c05b8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05b280(puVar9);
          func_0x00010c1d0640(puVar16);
          _objc_release(puVar9);
          _objc_release(puVar11);
        }
        else {
          lVar2 = param_1;
          func_0x00010c0d4de0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_1;
          func_0x00010c0b3760(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb8340(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          _objc_release(lVar3);
          _objc_release(lVar2);
          func_0x00010c1d0640(puVar16);
        }
        _objc_release(puVar6);
        _objc_release(lVar4);
        lVar19 = lVar19 + 1;
      } while (lVar5 != lVar19);
      lVar5 = lVar18;
      func_0x00010bf52a60();
    }
    _objc_release(lVar18);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    lVar5 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        uVar15 = *(undefined8 *)(lVar18 * 8);
        func_0x00010c2923e0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar15;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        puVar9 = puVar16;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(puVar9);
        _objc_release(uVar12);
        lVar18 = lVar18 + 1;
      } while (lVar5 != lVar18);
      lVar5 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aa5a0();
    _objc_release(lVar5);
  }
  _objc_release(param_1);
  func_0x00010c0e6c80(param_8);
  _objc_release(puVar6);
  _objc_release(puVar16);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    if (lRam00000001136c1780 != -1) {
      func_0x00010002a2fc(0x1136c1780,&PTR___NSConcreteGlobalBlock_1108c0dc0);
    }
    uVar12 = uRam00000001136c1778;
    _objc_retain(uRam00000001136c1778);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
    return;
  }
  return;
}



/* Entry: 105940ac4; end: 105940b17; +[SCFideliusManager statusNames] */

void FUN_105940ac4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c1780 != -1) {
    func_0x00010002a2fc(0x1136c1780,&PTR___NSConcreteGlobalBlock_1108c0dc0);
  }
  uVar1 = uRam00000001136c1778;
  _objc_retain(uRam00000001136c1778);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105940b18; end: 105940c6f;  */

void FUN_105940b18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1ee8;
  ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f00;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e104d8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e104f8;
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f18;
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f30;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e10518;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e10538;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f48;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f60;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e10558;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e10578;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f78;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f90;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e10598;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e105b8;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1fa8;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1fc0;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e105d8;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e105f8;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1fd8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e10618;
  pppuVar4 = &ppuStack_70;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar4,&ppuStack_c8,0xb);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puRam00000001136c1778;
  puRam00000001136c1778 = puVar1;
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c253380();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,pppuVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105940c70; end: 105940ceb; +[SCFideliusManager nameForStatus:] */

void FUN_105940c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c253380();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105940cec; end: 105940d1f;  */

void FUN_105940cec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e4480(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105940d20; end: 105940dab;  */

void FUN_105940d20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126be008;
    _objc_alloc(PTR_PTR_1126be008);
    func_0x00010c051c80();
    puVar2 = PTR_PTR_1126be000;
    _objc_alloc(PTR_PTR_1126be000);
    func_0x00010c001640();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105940dac; end: 105940ea7; -[SCFideliusManager loginWithIwek:hashedBeta:] */

void FUN_105940dac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f3100ed;
  func_0x0001000ba800(&UNK_10f3100ed);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105940ea8;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105940ea8; end: 105940ebb;  */

void FUN_105940ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be81710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processLoginRegistrationWithIwe_11257df60,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 105940ebc; end: 105940fb7; -[SCFideliusManager registerWithIwek:hashedBeta:] */

void FUN_105940ebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f31010d;
  func_0x0001000ba800(&UNK_10f31010d);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105940fb8;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105940fb8; end: 105940fcb;  */

void FUN_105940fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be81710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processLoginRegistrationWithIwe_11257df60,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),1);
  return;
}



/* Entry: 105940fcc; end: 105941093; -[SCFideliusManager _processLoginRegistrationWithIwek:hashedBeta:source:] */

void FUN_105940fcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf49b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    FUN_105949cfc(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be822a0(param_1,param_2,param_3,param_4,lVar1,param_5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105941094; end: 10594149b; -[SCFideliusManager _processServerInitIwek:hashedOutBeta:tempIdentity:source:] */

void FUN_105941094(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f310130;
  func_0x0001000ba800(&UNK_10f310130);
  if (param_6 == 4) {
    uVar6 = param_5;
    func_0x00010c085320(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,uVar6);
    _objc_release(uVar6);
    if ((int)lVar2 == 0) {
      func_0x00010bde1240(param_1);
      goto LAB_10594118c;
    }
    if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x98) == 0)) {
      func_0x00010be4d2a0(param_1,param_2,param_3,param_4,4);
      goto LAB_105941430;
    }
    lVar2 = param_1;
    func_0x00010bfac5e0();
    if (lVar2 == 5) goto LAB_105941430;
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = PTR_PTR_1126bd088;
    func_0x00010c0d4fe0(PTR_PTR_1126bd088,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be767c0(param_1,param_2,uVar6,uVar7,puVar3);
  }
  else {
LAB_10594118c:
    puVar3 = PTR_PTR_1126bd088;
    func_0x00010c0d4fe0(PTR_PTR_1126bd088,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c085320(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,uVar6);
    _objc_release(uVar6);
    if ((int)lVar2 == 0) {
      if (param_3 != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c291ba0();
        _objc_release(uVar7);
        if ((int)uVar6 != 0) {
          if (param_6 < 2) {
            func_0x00010c19b7a0(param_1,param_2,3);
          }
          uVar6 = *(undefined8 *)(param_1 + 0xb8);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ac7c0();
          _objc_release(uVar6);
          uVar4 = *(ulong *)(param_1 + 0x10);
          if (uVar4 != 0) {
            func_0x00010bfdebe0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c0720c0();
            _objc_release(uVar4);
            if ((uVar5 & 1) == 0) {
              uVar6 = *(undefined8 *)(param_1 + 0xb8);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0a4e40();
              _objc_release(uVar6);
              uVar6 = *(undefined8 *)(param_1 + 0x30);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010bfdebe0(uVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf6bb20(uVar6,param_2,uVar7,0);
              _objc_release(uVar7);
              _objc_release(uVar6);
              uVar6 = *(undefined8 *)(param_1 + 0x38);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf3a660();
              _objc_release(uVar6);
              uVar6 = *(undefined8 *)(param_1 + 0x38);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf3c540();
              _objc_release(uVar6);
              uVar6 = *(undefined8 *)(param_1 + 0x10);
              *(undefined8 *)(param_1 + 0x10) = 0;
              _objc_release(uVar6);
            }
          }
          func_0x00010be4d2a0(param_1,param_2,param_3,param_4,param_6);
          goto LAB_105941428;
        }
      }
      uVar6 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac7c0();
      _objc_release(uVar6);
      func_0x00010be684a0(param_1);
    }
    else {
      lVar2 = param_1;
      func_0x00010bfac5e0();
      if (lVar2 == 5) {
        uVar6 = *(undefined8 *)(param_1 + 0xb8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ac7c0();
        _objc_release(uVar6);
      }
      else {
        if (param_6 < 2) {
          func_0x00010c19b7a0(param_1,param_2,4);
        }
        uVar6 = *(undefined8 *)(param_1 + 0xb8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ac7c0();
        _objc_release(uVar6);
        func_0x00010bee67a0(param_1,param_2,param_5,param_6);
      }
    }
  }
LAB_105941428:
  _objc_release(puVar3);
LAB_105941430:
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10594149c; end: 10594150b; -[SCFideliusManager _onClientInitFailure] */

void FUN_10594149c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ba800(&UNK_10f3101b3);
  func_0x00010c19b7a0(param_1,param_2,8);
  func_0x00010bde1240(param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10594150c; end: 1059415ab; -[SCFideliusManager tweakReInitIdentity] */

void FUN_10594150c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &UNK_10f3101da;
  func_0x0001000ba800(&UNK_10f3101da);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059415ac;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_58);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 1059415ac; end: 1059415b3;  */

void FUN_1059415ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be684b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onClientInitFailure_112577ac8);
  return;
}



/* Entry: 1059415b4; end: 10594167f; -[SCFideliusManager loadingStatus] */

void FUN_1059415b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105941680;
  uStack_30 = 0x105941690;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105941698;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105941680; end: 105941697;  */

void FUN_105941680(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


