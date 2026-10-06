/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068afab8; end: 1068afbbb; -[SCSpotlightMediaFetcher _logMediaFetchedWithTimeRequested:mediaState:] */

void FUN_1068afab8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_4);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  lVar3 = param_2;
  func_0x00010be0ef00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852da14(uVar4,lVar3,(long)(param_1 * 1000.0));
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010be0ef00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0x20;
  if (param_5 != 0) {
    lVar3 = 0x18;
  }
  lVar1 = 0x10;
  if (param_5 != 2) {
    lVar1 = lVar3;
  }
  func_0x00010852d5b4(uVar4,param_2,*(undefined8 *)((long)&PTR_PTR_110947578 + lVar1),1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068afbbc; end: 1068afd87; -[SCSpotlightMediaFetcher _fetchMediaForStory:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:] */

void FUN_1068afbbc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_3;
  func_0x00010c259740(param_3);
  func_0x00010c0df880(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010afefbe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar4 == 0) {
      func_0x00010be30500(param_1,param_2,param_3,puVar2,param_4,param_5,param_6,param_7,param_8,
                          param_9,param_10);
    }
    else {
      func_0x00010be2e880(param_1,param_2,lVar4,puVar2,param_4,param_5,param_6,param_7,param_8,
                          param_9,param_10);
    }
    _objc_release(lVar4);
  }
  else {
    func_0x00010be2bd40(param_1,param_2,lVar3,puVar2,param_4,param_5,param_6,param_7,param_9,
                        param_10);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068afd88; end: 1068afecf; -[SCSpotlightMediaFetcher _fetchMediaForMediaInfo:dedupeFp:duration:isSpotlightSingleSnap:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:] */

void FUN_1068afd88(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,ulong param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 uVar1;
  double dVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  dVar2 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  if ((param_6 != 0) && ((int)param_9 != 0)) {
    func_0x000108f4adc8(*(undefined8 *)(param_2 + 0x40));
    param_9 = (ulong)(param_1 <= dVar2);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1068afed0;
  puStack_80 = &UNK_11093a2d8;
  uStack_78 = param_13;
  _objc_retain(param_13);
  func_0x00010bfb4b80(uVar1,param_3,param_4,param_7,param_9,param_10,param_12,param_11,&puStack_98);
  _objc_release(uVar1);
  _objc_release(uStack_78);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_4);
  return;
}



/* Entry: 1068afed0; end: 1068afee3;  */

void FUN_1068afed0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068afedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1068afee4; end: 1068b0197; -[SCSpotlightMediaFetcher _handleSingleSnapPrefetch:dedupeFp:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:] */

void FUN_1068afee4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 in_x7;
  undefined8 uVar6;
  undefined8 in_stack_00000000;
  long in_stack_00000010;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000010);
  lVar1 = param_4;
  FUN_1068b0198();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010be0ef00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852d5b4(uVar6,param_2,&PTR____CFConstantStringClassReference_110e62218,1);
    _objc_release(param_2);
    if (in_stack_00000010 != 0) {
      (**(code **)(in_stack_00000010 + 0x10))(in_stack_00000010,0,0);
    }
  }
  else {
    lVar2 = param_4;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010afef86c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_initWeak(auStack_80,param_2);
    lVar2 = param_4;
    func_0x000108f4bad8(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(in_stack_00000010);
    func_0x00010be12620(param_1,param_2);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(in_stack_00000010);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1068b0198; end: 1068b0243;  */

void FUN_1068b0198(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107d03060(lVar2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1068b0244; end: 1068b036b;  */

void FUN_1068b0244(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 in_x7;
  long lVar8;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_60;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    func_0x00010bfa8760(uVar2);
    _objc_release(puVar3);
    _objc_release(uStack_60);
    _objc_release(uVar2);
  }
  lVar7 = param_3;
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  _objc_retain(param_4);
  _objc_retain(in_x7);
  _objc_retain(lVar8);
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_1068b067c;
  uStack_e0 = 0x1068b068c;
  uStack_d8 = 0;
  lVar1 = lVar7;
  func_0x00010c245680(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1068b0694;
  puStack_110 = &UNK_110947178;
  puStack_108 = &uStack_100;
  func_0x00010c0bebc0();
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar4 = puStack_f8[5];
  func_0x00010c29a460();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar1 == 0) {
    (**(code **)(lVar8 + 0x10))(lVar8,0,0);
  }
  else {
    uVar5 = puStack_f8[5];
    FUN_1068b2370(uVar5,*(undefined8 *)(param_3 + 0x60),0,500,uStack_60);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010c2a2900(lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    FUN_1068b29f8(uVar5,lVar1,puStack_f8[5],*(undefined8 *)(param_3 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126ceab0;
    func_0x00010c08ef80(PTR_PTR_1126ceab0);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_130,param_3);
    uVar6 = *(undefined8 *)(param_3 + 0x58);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_138,auStack_130);
    _objc_retain(lVar8);
    func_0x00010c25f5c0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(lVar8);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_130);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  _objc_release(lVar8);
  _objc_release(in_x7);
  _objc_release(param_4);
  _objc_release(lVar7);
  return;
}



/* Entry: 1068b036c; end: 1068b067b; -[SCSpotlightMediaFetcher _handleLongformShowPrefetch:dedupeFp:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:completion:] */

void FUN_1068b036c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000008);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1068b067c;
  uStack_80 = 0x1068b068c;
  uStack_78 = 0;
  uVar6 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1068b0694;
  puStack_b0 = &UNK_110947178;
  puStack_a8 = &uStack_a0;
  func_0x00010c0bebc0();
  _objc_release(uVar1);
  _objc_release(uVar6);
  lVar2 = puStack_98[5];
  func_0x00010c29a460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    (**(code **)(in_stack_00000008 + 0x10))(in_stack_00000008,0,0);
  }
  else {
    uVar4 = puStack_98[5];
    FUN_1068b2370(uVar4,*(undefined8 *)(param_1 + 0x60),0,500,in_stack_00000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c2a2900(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    FUN_1068b29f8(uVar4,uVar6,puStack_98[5],*(undefined8 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126ceab0;
    func_0x00010c08ef80(PTR_PTR_1126ceab0);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_d0,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d8,auStack_d0);
    _objc_retain(in_stack_00000008);
    func_0x00010c25f5c0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(in_stack_00000008);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_d0);
    _objc_release(puVar5);
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(in_stack_00000008);
  _objc_release(in_x7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068b067c; end: 1068b0693;  */

void FUN_1068b067c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1068b0694; end: 1068b06cb;  */

void FUN_1068b0694(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068b06cc; end: 1068b06cf;  */

void FUN_1068b06cc(void)

{
  return;
}



/* Entry: 1068b06d0; end: 1068b0803;  */

void FUN_1068b06d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 in_x7;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 unaff_x24;
  long lVar16;
  double dVar17;
  double dVar18;
  ulong uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  long lStack_d8;
  undefined8 uStack_50;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar10 != 0) && (param_2 == 0)) {
    uVar2 = *(undefined8 *)(lVar10 + 0x90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_50 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    func_0x00010c29a460();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    func_0x00010bfa8760(uVar2);
    _objc_release(puVar3);
    _objc_release(uStack_50);
    _objc_release(uVar2);
  }
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = 2;
  }
  lVar8 = param_2;
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar2);
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar8);
  _objc_retain(param_4);
  _objc_retain(in_x7);
  _objc_retain(uStack_50);
  _objc_retain(unaff_x24);
  uVar4 = *(ulong *)(param_2 + 0x40);
  func_0x000108f4aae8();
  if ((int)uVar4 == 0) {
    uStack_250 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_250 = uVar4;
    func_0x00010bf602c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _dispatch_group_create();
  puStack_170 = &uStack_178;
  uStack_178 = 0;
  uStack_168 = 0x2020000000;
  uStack_160 = 0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 0.0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  lVar10 = lVar8;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar16 = 0;
    lVar13 = *plStack_1b0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1b0 != lVar13) {
          _objc_enumerationMutation(lVar10);
        }
        lVar14 = *(long *)(lStack_1b8 + lVar15 * 8);
        lVar5 = lVar14;
        func_0x00010c241220(lVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uStack_250;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c29ea60();
        _objc_release(uVar6);
        _objc_release(lVar5);
        if ((uVar7 & 1) == 0) {
          lVar5 = lVar14;
          func_0x000107d03060(lVar14,0);
          _objc_retainAutoreleasedReturnValue();
          if (lVar14 == 0) {
            *(undefined1 *)(puStack_170 + 3) = 1;
          }
          else {
            _dispatch_group_enter(uVar4);
            func_0x00010bf8b160(lVar14);
            puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1f8 = 0xc2000000;
            pcStack_1f0 = FUN_1068b0c98;
            puStack_1e8 = &UNK_110947218;
            puStack_1c8 = &uStack_178;
            _objc_retain(puVar3);
            puStack_1e0 = puVar3;
            lStack_1d8 = lVar14;
            _objc_retain(uVar4);
            uStack_1d0 = uVar4;
            func_0x00010be12620(param_2);
            func_0x00010bf8b160(lVar14);
            dVar18 = 1.0;
            bVar1 = 0.0 < dVar17;
            dVar17 = dVar18;
            if (bVar1) {
              func_0x00010bf8b160(lVar14);
              dVar17 = dVar18;
            }
            lVar16 = lVar16 + (int)dVar17;
            _objc_release(uStack_1d0);
            _objc_release(puStack_1e0);
            if (lVar16 < 10) {
              _objc_release(lVar5);
              goto LAB_1068b0acc;
            }
          }
          _objc_release(lVar5);
          goto LAB_1068b0b0c;
        }
LAB_1068b0acc:
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar15);
      lVar12 = lVar10;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
LAB_1068b0b0c:
  _objc_release(lVar10);
  _objc_initWeak(auStack_208,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  uStack_238 = 0x1068b0d04;
  puStack_230 = &UNK_110947248;
  _objc_copyWeak(auStack_210,auStack_208);
  puStack_218 = &uStack_178;
  puStack_228 = puVar3;
  uStack_220 = unaff_x24;
  _objc_retain();
  _objc_retain(puVar3);
  ppuVar11 = &puStack_248;
  func_0x000100bc0718(uVar4,uVar2);
  _objc_release(uVar2);
  _objc_release(uStack_220);
  _objc_release(puStack_228);
  _objc_release(unaff_x24);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_210);
  _objc_destroyWeak(auStack_208);
  __Block_object_dispose(&uStack_178,8);
  _objc_release(uVar4);
  _objc_release(uStack_250);
  _objc_release(uStack_50);
  _objc_release(in_x7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = 8;
  __Block_object_dispose(&uStack_178);
  __Unwind_Resume();
  if ((lVar10 == 0) || (ppuVar11 != (undefined **)0x0)) {
    *(undefined1 *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x18) = 1;
  }
  else {
    uVar2 = *(undefined8 *)(lVar8 + 0x20);
    uVar9 = *(undefined8 *)(lVar8 + 0x28);
    func_0x00010c241220(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar8 + 0x30));
  return;
}



/* Entry: 1068b0804; end: 1068b0c97; -[SCSpotlightMediaFetcher _handlePublicUserStoryPrefetch:dedupeFp:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:] */

void FUN_1068b0804(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 in_x7;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  ulong uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000010);
  uVar2 = *(ulong *)(param_1 + 0x40);
  func_0x000108f4aae8();
  if ((int)uVar2 == 0) {
    uStack_200 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_200 = uVar2;
    func_0x00010bf602c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _dispatch_group_create();
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar16 = 0.0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  lVar10 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar15 = 0;
    lVar12 = *plStack_160;
    do {
      lVar14 = 0;
      do {
        if (*plStack_160 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        lVar13 = *(long *)(lStack_168 + lVar14 * 8);
        lVar5 = lVar13;
        func_0x00010c241220(lVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uStack_200;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c29ea60();
        _objc_release(uVar6);
        _objc_release(lVar5);
        if ((uVar7 & 1) == 0) {
          lVar5 = lVar13;
          func_0x000107d03060(lVar13,0);
          _objc_retainAutoreleasedReturnValue();
          if (lVar13 == 0) {
            *(undefined1 *)(puStack_120 + 3) = 1;
          }
          else {
            _dispatch_group_enter(uVar2);
            func_0x00010bf8b160(lVar13);
            puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1a8 = 0xc2000000;
            pcStack_1a0 = FUN_1068b0c98;
            puStack_198 = &UNK_110947218;
            puStack_178 = &uStack_128;
            _objc_retain(puVar3);
            puStack_190 = puVar3;
            lStack_188 = lVar13;
            _objc_retain(uVar2);
            uStack_180 = uVar2;
            func_0x00010be12620(param_1);
            func_0x00010bf8b160(lVar13);
            dVar17 = 1.0;
            bVar1 = 0.0 < dVar16;
            dVar16 = dVar17;
            if (bVar1) {
              func_0x00010bf8b160(lVar13);
              dVar16 = dVar17;
            }
            lVar15 = lVar15 + (int)dVar16;
            _objc_release(uStack_180);
            _objc_release(puStack_190);
            if (lVar15 < 10) {
              _objc_release(lVar5);
              goto LAB_1068b0acc;
            }
          }
          _objc_release(lVar5);
          goto LAB_1068b0b0c;
        }
LAB_1068b0acc:
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      lVar4 = lVar10;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
LAB_1068b0b0c:
  _objc_release(lVar10);
  _objc_initWeak(auStack_1b8,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  uStack_1e8 = 0x1068b0d04;
  puStack_1e0 = &UNK_110947248;
  _objc_copyWeak(auStack_1c0,auStack_1b8);
  uStack_1d0 = in_stack_00000010;
  puStack_1c8 = &uStack_128;
  puStack_1d8 = puVar3;
  _objc_retain();
  _objc_retain(puVar3);
  ppuVar11 = &puStack_1f8;
  func_0x000100bc0718(uVar2,uVar8);
  _objc_release(uVar8);
  _objc_release(uStack_1d0);
  _objc_release(puStack_1d8);
  _objc_release(in_stack_00000010);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_1b8);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uVar2);
  _objc_release(uStack_200);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = 8;
  __Block_object_dispose(&uStack_128);
  __Unwind_Resume();
  if ((lVar10 == 0) || (ppuVar11 != (undefined **)0x0)) {
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x38) + 8) + 0x18) = 1;
  }
  else {
    uVar8 = *(undefined8 *)(param_3 + 0x20);
    uVar9 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c241220(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar8);
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 1068b0c98; end: 1068b0d93;  */

void FUN_1068b0c98(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) || (param_3 != 0)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1068b0d94; end: 1068b0f4f; -[SCSpotlightMediaFetcher _retrieveLoadedDedupeFpsForStories:completion:] */

void FUN_1068b0d94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068b0f50;
  puStack_70 = &UNK_110947278;
  lStack_68 = param_1;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000100817178(param_3,&puStack_88);
  uVar3 = uVar2;
  _dispatch_group_create();
  uVar4 = uVar2;
  func_0x00010c0d3c80();
  _dispatch_group_enter(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1068b1020;
  puStack_a0 = &UNK_110844e40;
  _objc_retain(uVar4);
  uStack_98 = uVar4;
  uStack_90 = uVar3;
  _objc_retain(uVar3);
  func_0x00010be4dac0(param_1);
  _objc_release(param_3);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1068b104c;
  puStack_d0 = &UNK_11084aaa8;
  uStack_c8 = uVar4;
  uStack_c0 = param_4;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  func_0x000100bc0718(uVar3,uVar5,&puStack_e8);
  _objc_release(uVar5);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1068b0f50; end: 1068b101f;  */

void FUN_1068b0f50(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c2632a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25b720(param_2);
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(puVar3);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar2 & 1) == 0) {
    func_0x00010c259740(param_2);
    func_0x00010c0df880(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1068b1020; end: 1068b1083;  */

void FUN_1068b1020(long param_1,undefined8 param_2)

{
  func_0x00010c280520(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1068b1084; end: 1068b1383; -[SCSpotlightMediaFetcher _loadInitialStateOfMediaInfoStories:completionQueue:completion:] */

void FUN_1068b1084(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined1 *puStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        lVar14 = *(long *)(lStack_128 + lVar13 * 8);
        lVar4 = lVar14;
        FUN_1068b0198();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf267e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar5 != 0) {
          func_0x00010c259740(lVar14);
          func_0x00010c0df880(puVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf267e0(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(lVar5);
          _objc_release(puVar6);
          func_0x00010befa120(puVar2);
        }
        _objc_release(lVar4);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  _objc_initWeak(auStack_138,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  puVar11 = auStack_138;
  _objc_copyWeak(auStack_140);
  _objc_retain(param_5);
  func_0x00010bf170e0(uVar7);
  _objc_release(uVar7);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_140);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar11);
  puVar8 = puVar11;
  func_0x00010bf002e0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_200 = 0xc2000000;
  pcStack_1f8 = FUN_1068b1510;
  puStack_1f0 = &UNK_110856a28;
  _objc_retain(puVar11);
  puVar9 = puVar8;
  puStack_1e8 = puVar11;
  func_0x0001006372a4(puVar8,&puStack_208);
  _objc_release(puVar8);
  puVar8 = puVar11;
  func_0x00010bf002e0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puStack_238 = puVar1;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_1068b1558;
  puStack_220 = &UNK_1109472a8;
  _objc_retain(puVar11);
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  puStack_218 = puVar11;
  _objc_retain(uVar7);
  puVar10 = puVar8;
  uStack_210 = uVar7;
  func_0x000100817178(puVar8,&puStack_238);
  _objc_release(puVar8);
  lVar3 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x90);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5740();
    _objc_release(uVar7);
  }
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),puVar10);
  _objc_release(lVar3);
  _objc_release(puVar10);
  _objc_release(uStack_210);
  _objc_release(puStack_218);
  _objc_release(puVar9);
  _objc_release(puStack_1e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 1068b1384; end: 1068b150f;  */

void FUN_1068b1384(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010bf002e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1068b1510;
  puStack_60 = &UNK_110856a28;
  _objc_retain(param_2);
  uVar2 = uVar5;
  uStack_58 = param_2;
  func_0x0001006372a4(uVar5,&puStack_78);
  _objc_release(uVar5);
  uVar5 = param_2;
  func_0x00010bf002e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1068b1558;
  puStack_90 = &UNK_1109472a8;
  _objc_retain(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = param_2;
  _objc_retain(uVar6);
  uVar3 = uVar5;
  uStack_80 = uVar6;
  func_0x000100817178(uVar5,&puStack_a8);
  _objc_release(uVar5);
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x90);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5740();
    _objc_release(uVar5);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar3);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar2);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068b1510; end: 1068b1557;  */

bool FUN_1068b1510(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  return lVar2 == 2;
}



/* Entry: 1068b1558; end: 1068b15e3;  */

void FUN_1068b1558(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  if (lVar2 == 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1068b15e4; end: 1068b18f3; -[SCSpotlightMediaFetcher _mediaInfosToCheckForStory:viewStatusDict:] */

void FUN_1068b15e4(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_1068b067c;
  uStack_100 = 0x1068b068c;
  uStack_f8 = 0;
  lVar2 = param_3;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(lVar2);
  lVar2 = puStack_118[5];
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar2 = puStack_118[5];
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      _objc_release(param_4);
      param_4 = 0;
    }
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = puStack_118[5];
    _objc_retain(lVar8);
    lVar2 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar9 = *(undefined8 *)(lVar6 * 8);
        uVar5 = uVar9;
        func_0x00010c241220(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c29ea60();
        _objc_release(uVar3);
        _objc_release(uVar5);
        if ((uVar4 & 1) == 0) {
          func_0x000107d03060(uVar9,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar7);
          _objc_release(uVar9);
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
  }
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  uVar5 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 1068b18f4; end: 1068b19b3;  */

void FUN_1068b18f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068b19b4; end: 1068b1a27; -[SCSpotlightMediaFetcher _queueLabelForFeedType:] */

void FUN_1068b19b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068b1a28; end: 1068b1a9b; -[SCSpotlightMediaFetcher _mediaStateKeyForFeedType:] */

void FUN_1068b1a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068b1a9c; end: 1068b1aef; -[SCSpotlightMediaFetcher _feedTypeString] */

void FUN_1068b1a9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068b1af0; end: 1068b1bc7; -[SCSpotlightMediaFetcher .cxx_destruct] */

void FUN_1068b1af0(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068b1bc8; end: 1068b1ecf; -[SCSpotlightMediaFetcherFactoryImpl initWithCircumstanceEngine:appStartReader:preferences:discoverFeedDataFetcher:storiesMediaCoordinator:notificationCenter:playbackMediaResolver:playbackMediaPrefetcher:contentObjectResolver:asyncQueueProviderLazy:snapDocConfigurer:readReceiptCoordinator:spotlightUsageTracker:] */

undefined8 *
FUN_1068b1bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

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
  puStack_68 = PTR_PTR_1126f3ab8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar3);
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



/* Entry: 1068b1ed0; end: 1068b1fa7; -[SCSpotlightMediaFetcherFactoryImpl spotlightMediaFetchingForFeedType:] */

void FUN_1068b1ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _os_unfair_lock_lock(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010bdefe60(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,lVar3,puVar1);
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1068b1fa8; end: 1068b21af; -[SCSpotlightMediaFetcherFactoryImpl _createMediaFetchingForFeedType:] */

void FUN_1068b1fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar13);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar15);
  uVar14 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar14);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  iVar9 = (int)*(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  func_0x000108f4aa24();
  if (iVar9 == 0) {
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_1068b225c;
    puStack_128 = &UNK_110947338;
    ppuVar5 = &puStack_140;
    uStack_120 = uVar1;
    uStack_118 = uVar2;
    uStack_110 = uVar8;
    uStack_108 = uVar3;
    uStack_100 = uVar12;
    uStack_f8 = uVar13;
    uStack_f0 = uVar10;
    uStack_e8 = uVar14;
    uStack_e0 = uVar7;
    uStack_d8 = uVar6;
    uStack_d0 = param_3;
  }
  else {
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1068b21b0;
    puStack_b0 = &UNK_110947308;
    ppuVar5 = &puStack_c8;
    uStack_a8 = uVar15;
    uStack_a0 = uVar1;
    uStack_98 = uVar8;
    uStack_90 = uVar11;
    uStack_88 = uVar13;
    uStack_80 = uVar7;
    uStack_78 = uVar10;
    uStack_70 = param_3;
  }
  puVar4 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1068b21b0; end: 1068b225b;  */

void FUN_1068b21b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x000108f4abb8();
  uVar1 = 2;
  if (iVar2 == 0) {
    uVar1 = 3;
  }
  uVar4 = uVar3;
  func_0x00010c11e0e0(uVar3,param_2,uVar1,0x37);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126ceab8;
  _objc_alloc(PTR_PTR_1126ceab8);
  func_0x00010bffeb40();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1068b225c; end: 1068b22af;  */

void FUN_1068b225c(void)

{
  _objc_alloc(PTR_PTR_1126ceac0);
  func_0x00010bffe7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068b22b0; end: 1068b236f; -[SCSpotlightMediaFetcherFactoryImpl .cxx_destruct] */

void FUN_1068b22b0(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068b2370; end: 1068b26cf;  */

double FUN_1068b2370(double param_1,undefined1 *param_2,long param_3,undefined8 *param_4,
                    undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  undefined1 auStack_1b0 [128];
  long lStack_130;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = param_2;
  func_0x00010c29bbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSURL_1126ae598;
  if (puVar2 == (undefined1 *)0x0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar1 = param_2;
    func_0x00010c29bbe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar4 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c29bbe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c29a460(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c13a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      _objc_retain(puVar3);
      puVar6 = puVar3;
    }
    else {
      puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR_PTR_1126b1060;
    _objc_alloc();
    puVar16 = PTR_PTR_1126b19f8;
    func_0x00010bf81400();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032f60();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar16);
    puVar8 = PTR_PTR_1126b1378;
    func_0x00010c2add40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    puVar1 = param_2;
    func_0x00010c29a460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined1 *)0x0) {
      puVar2 = param_2;
      func_0x00010c29bbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
    _objc_release(puVar1);
    _objc_release(param_2);
    puVar16 = PTR_PTR_1126bffb0;
    _objc_alloc();
    puVar9 = puVar7;
    func_0x00010c0f1260();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar6;
    param_5 = puVar2;
    func_0x00010c02a0e0();
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(puVar6);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = lVar13;
    puVar3 = param_4;
    puVar1 = param_5;
    _objc_retain();
    _objc_retain(lVar13);
    _objc_retain(param_4);
    _objc_retain(param_5);
    if (param_4 != (undefined8 *)0x0) {
      puVar6 = param_4;
      func_0x00010c25e5c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010c08fa60();
      _objc_release(puVar6);
      if (puVar10 != (undefined8 *)0x0) {
        dVar22 = 0.0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        lVar4 = lVar13;
        func_0x00010bf358a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = &uStack_270;
        puVar1 = auStack_1b0;
        lVar5 = lVar4;
        func_0x00010bf52a60();
        if (lVar5 != 0) {
          lVar17 = *plStack_260;
          do {
            lVar15 = 0;
            do {
              if (*plStack_260 != lVar17) {
                _objc_enumerationMutation(lVar4);
              }
              uVar18 = *(ulong *)(lStack_268 + lVar15 * 8);
              uVar11 = uVar18;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = param_4;
              func_0x00010c25e5c0(param_4);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar11;
              puVar3 = puVar6;
              func_0x00010c0720c0();
              _objc_release(puVar6);
              _objc_release(uVar11);
              if ((uVar12 & 1) != 0) {
                func_0x00010c250f20(uVar18);
                puVar6 = param_4;
                func_0x00010c25e5e0();
                param_1 = (double)((int)puVar6 / 1000);
                dVar22 = dVar22 + param_1;
                _objc_release(lVar4);
                goto LAB_1068b2990;
              }
              lVar15 = lVar15 + 1;
            } while (lVar5 != lVar15);
            puVar3 = &uStack_270;
            puVar1 = auStack_1b0;
            lVar5 = lVar4;
            func_0x00010bf52a60();
          } while (lVar5 != 0);
        }
        _objc_release(lVar4);
      }
    }
    puVar2 = param_2;
    func_0x00010c29ae20();
    dVar22 = 0.0;
    if (2000 < (long)puVar2) {
      puVar2 = param_2;
      func_0x00010c29ae20();
      dVar22 = (double)(long)(puVar2 + -2000) / 1000.0;
    }
    if (lVar13 != 0) {
      dVar21 = 0.0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      lVar4 = lVar13;
      func_0x00010bef3160();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = &uStack_2b0;
      puVar1 = auStack_230;
      lVar5 = lVar4;
      func_0x00010bf52a60();
      if (lVar5 != 0) {
        lVar17 = *plStack_2a0;
        do {
          lVar15 = 0;
          do {
            if (*plStack_2a0 != lVar17) {
              _objc_enumerationMutation(lVar4);
            }
            uVar19 = *(undefined8 *)(lStack_2a8 + lVar15 * 8);
            func_0x00010c250f20(uVar19);
            if (dVar22 < dVar21) {
              func_0x00010c250f20(uVar19);
              dVar21 = dVar21 - dVar22;
              if (dVar21 < 10.0) {
                func_0x00010c250f20(uVar19);
                dVar22 = dVar21 + -10.0;
              }
            }
            lVar15 = lVar15 + 1;
          } while (lVar5 != lVar15);
          puVar3 = &uStack_2b0;
          puVar1 = auStack_230;
          lVar5 = lVar4;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
      }
      _objc_release(lVar4);
    }
    param_1 = 0.0;
    if (dVar22 <= 0.0) {
      dVar22 = 0.0;
    }
LAB_1068b2990:
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar13);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
      return dVar22;
    }
    ___stack_chk_fail();
    if (param_2 == (undefined1 *)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar1);
      _objc_retain(param_2);
      FUN_1068b26d0(lVar14,puVar3,0,puVar1);
      fVar20 = 3.0;
      func_0x00010bfb2cc0(0x40400000,puVar1);
      _objc_release(puVar1);
      puVar16 = PTR_PTR_1126ceac8;
      func_0x00010c0c6360(param_1,(double)fVar20,PTR_PTR_1126ceac8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return param_1;
}



/* Entry: 1068b26d0; end: 1068b29f7;  */

double FUN_1068b26d0(long param_1,long param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [128];
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  puVar8 = param_3;
  puVar9 = param_4;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined8 *)0x0) {
    puVar1 = param_3;
    func_0x00010c25e5c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    _objc_release(puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      dVar17 = 0.0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      lStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      plStack_1c0 = (long *)0x0;
      lVar3 = param_2;
      func_0x00010bf358a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = &uStack_1d0;
      puVar9 = auStack_110;
      lVar4 = lVar3;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar12 = *plStack_1c0;
        do {
          lVar10 = 0;
          do {
            if (*plStack_1c0 != lVar12) {
              _objc_enumerationMutation(lVar3);
            }
            uVar13 = *(ulong *)(lStack_1c8 + lVar10 * 8);
            uVar5 = uVar13;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = param_3;
            func_0x00010c25e5c0(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            puVar8 = puVar1;
            func_0x00010c0720c0();
            _objc_release(puVar1);
            _objc_release(uVar5);
            if ((uVar6 & 1) != 0) {
              func_0x00010c250f20(uVar13);
              puVar1 = param_3;
              func_0x00010c25e5e0();
              dVar16 = (double)((int)puVar1 / 1000);
              dVar17 = dVar17 + dVar16;
              _objc_release(lVar3);
              goto LAB_1068b2990;
            }
            lVar10 = lVar10 + 1;
          } while (lVar4 != lVar10);
          puVar8 = &uStack_1d0;
          puVar9 = auStack_110;
          lVar4 = lVar3;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      _objc_release(lVar3);
    }
  }
  lVar3 = param_1;
  func_0x00010c29ae20();
  dVar17 = 0.0;
  if (2000 < lVar3) {
    lVar3 = param_1;
    func_0x00010c29ae20();
    dVar17 = (double)(lVar3 + -2000) / 1000.0;
  }
  if (param_2 != 0) {
    dVar16 = 0.0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    lStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    lVar3 = param_2;
    func_0x00010bef3160();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = &uStack_210;
    puVar9 = auStack_190;
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar12 = *plStack_200;
      do {
        lVar10 = 0;
        do {
          if (*plStack_200 != lVar12) {
            _objc_enumerationMutation(lVar3);
          }
          uVar14 = *(undefined8 *)(lStack_208 + lVar10 * 8);
          func_0x00010c250f20(uVar14);
          if (dVar17 < dVar16) {
            func_0x00010c250f20(uVar14);
            dVar16 = dVar16 - dVar17;
            if (dVar16 < 10.0) {
              func_0x00010c250f20(uVar14);
              dVar17 = dVar16 + -10.0;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        puVar8 = &uStack_210;
        puVar9 = auStack_190;
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
  }
  dVar16 = 0.0;
  if (dVar17 <= 0.0) {
    dVar17 = 0.0;
  }
LAB_1068b2990:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return dVar17;
  }
  ___stack_chk_fail();
  if (param_1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar9);
    _objc_retain(param_1);
    FUN_1068b26d0(lVar7,puVar8,0,puVar9);
    fVar15 = 3.0;
    func_0x00010bfb2cc0(0x40400000,puVar9);
    _objc_release(puVar9);
    puVar11 = PTR_PTR_1126ceac8;
    func_0x00010c0c6360(dVar16,(double)fVar15,PTR_PTR_1126ceac8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return dVar16;
}



/* Entry: 1068b29f8; end: 1068b2ab7;  */

void FUN_1068b29f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  float fVar2;
  
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_5);
    _objc_retain(param_2);
    FUN_1068b26d0(param_3,param_4,0,param_5);
    fVar2 = 3.0;
    func_0x00010bfb2cc0(0x40400000,param_5);
    _objc_release(param_5);
    puVar1 = PTR_PTR_1126ceac8;
    func_0x00010c0c6360(param_1,(double)fVar2,PTR_PTR_1126ceac8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068b2ab8; end: 1068b2f2b; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver initWithCircumstanceEngine:queue:feedType:discoverFeedDataFetcher:playbackMediaResolver:contentObjectResolver:readReceiptCoordinator:notificationCenter:] */

undefined8 *
FUN_1068b2ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126f3ac0;
  puVar3 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_5;
    _objc_retain(param_4);
    uVar4 = puVar3[2];
    puVar3[2] = param_4;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar3[3];
    puVar3[3] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar3[4];
    puVar3[4] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar3[9];
    puVar3[9] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar3[10];
    puVar3[10] = puVar5;
    _objc_release(uVar4);
    uVar4 = puVar3[9];
    uVar1 = puVar3[10];
    func_0x00010bf51e00(uVar4);
    func_0x00010c0d9840(uVar1);
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar3[5];
    puVar3[5] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar3[6];
    puVar3[6] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar3[7];
    puVar3[7] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar3[0xb];
    puVar3[0xb] = puVar5;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar3[0xc];
    puVar3[0xc] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar3[0xd];
    puVar3[0xd] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = puVar3[0xe];
    puVar3[0xe] = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar3[0xf];
    puVar3[0xf] = param_8;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = puVar3[0x10];
    puVar3[0x10] = param_9;
    _objc_release(uVar4);
    uVar2 = (undefined1)puVar3[0xc];
    func_0x000108f4ac20();
    *(undefined1 *)(puVar3 + 0x14) = uVar2;
    puVar5 = PTR_PTR_1126c1088;
    _objc_alloc_init();
    uVar4 = puVar3[0x11];
    puVar3[0x11] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar6 = puVar3;
    func_0x00010be85780(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar3[0x13];
    puVar3[0x13] = puVar5;
    _objc_release(uVar4);
    _objc_release(puVar6);
    if (*(char *)(puVar3 + 0x14) == '\x01') {
      func_0x00010befa240(param_10);
    }
    _objc_initWeak(auStack_88,puVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1068b2f2c;
    puStack_98 = &UNK_110947088;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar3[8];
    puVar3[8] = puVar5;
    _objc_release(uVar4);
    uVar4 = puVar3[2];
    _objc_copyWeak(auStack_b8,auStack_88);
    func_0x00010c0f7fc0(uVar4);
    uVar4 = puVar3[0xd];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1068b2f2c; end: 1068b2f97;  */

void FUN_1068b2f2c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be94da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068b2f98; end: 1068b2fbf; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver storyMediaStates] */

void FUN_1068b2f98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068b2fc0; end: 1068b2fe7; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver storiesBeingFetched] */

void FUN_1068b2fc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068b2fe8; end: 1068b3063; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _resolveSupportedStoryTypes] */

void FUN_1068b2fe8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180c98);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x000108f4aa80();
  if (iVar1 != 0) {
    func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c75d0);
  }
  lVar3 = *(long *)(param_1 + 0x60);
  func_0x000108f4ab50();
  if (0 < lVar3) {
    func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c75e8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068b3064; end: 1068b306b; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver supportedStoryTypes] */

void FUN_1068b3064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_target_112678178);
  return;
}



/* Entry: 1068b306c; end: 1068b3397; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver fetchMediaForSpotlightStory:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:] */

void FUN_1068b306c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_3);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = param_1;
  func_0x00010be0ef00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852d5b4(uVar7,uVar2,&PTR____CFConstantStringClassReference_110dfae38,1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2632a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25b720(param_3);
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf4b900();
  _objc_release(puVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    uVar2 = param_1;
    func_0x00010be0ef00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852d5b4(uVar7,uVar2,&PTR____CFConstantStringClassReference_110e63f58,1);
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1068b3398;
    puStack_98 = &UNK_110849230;
    puVar6 = auStack_80;
    uStack_78 = param_6;
    _objc_copyWeak(puVar6,auStack_70);
    puStack_90 = puVar1;
    _objc_retain(param_10);
    uStack_88 = param_10;
    func_0x00010c0f7fc0(uVar7);
    uVar7 = uStack_88;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    puVar6 = auStack_c8;
    _objc_copyWeak(puVar6,auStack_70);
    _objc_retain(param_3);
    uStack_b8 = param_4;
    uStack_b7 = param_5;
    uStack_b6 = param_6;
    _objc_retain(param_7);
    uStack_c0 = param_9;
    _objc_retain(uVar5);
    _objc_retain(param_10);
    func_0x00010c0f7fc0(uVar7);
    _objc_release(param_10);
    _objc_release(uVar5);
    _objc_release(param_7);
    uVar7 = param_3;
  }
  _objc_release(uVar7);
  _objc_destroyWeak(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 1068b3398; end: 1068b3493;  */

void FUN_1068b3398(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [8];
  undefined1 uStack_b8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedb700(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,2,0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3 + 0x48;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bdc8700();
  _objc_release(lVar4);
  lVar4 = lVar3 + 0x48;
  _objc_loadWeakRetained(lVar4);
  uVar6 = *(undefined8 *)(lVar3 + 0x38);
  _objc_retain(uVar6);
  _objc_copyWeak(auStack_c0,lVar3 + 0x48);
  _objc_retain(puVar1);
  uStack_b8 = *(undefined1 *)(lVar3 + 0x5a);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  _objc_retain(uVar7);
  uVar5 = *(undefined8 *)(lVar3 + 0x40);
  _objc_retain(uVar5);
  func_0x00010be126c0(lVar4);
  _objc_release(lVar4);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uVar6);
  _objc_release(puVar1);
  return;
}



/* Entry: 1068b3494; end: 1068b3627;  */

void FUN_1068b3494(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bdc8700();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_70,param_1 + 0x48);
  _objc_retain(puVar1);
  uStack_68 = *(undefined1 *)(param_1 + 0x5a);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  func_0x00010be126c0(lVar2);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1068b3628; end: 1068b374b;  */

void FUN_1068b3628(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_48 = *(undefined1 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = param_2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1068b374c; end: 1068b38e3;  */

void FUN_1068b374c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lStack_60;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar4);
  func_0x00010be8d7e0();
  _objc_release(lVar4);
  lVar4 = param_1 + 0x48;
  _objc_loadWeakRetained();
  puVar7 = *(undefined **)(param_1 + 0x28);
  func_0x00010be55b20();
  _objc_release(lVar4);
  if (*(long *)(param_1 + 0x50) == 2) {
    lVar4 = param_1 + 0x48;
    _objc_loadWeakRetained();
    func_0x00010be443e0();
    _objc_release(lVar4);
    lVar4 = param_1 + 0x48;
    _objc_loadWeakRetained();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c259740(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0df880();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bedb700(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar4);
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    puVar7 = *(undefined **)(param_1 + 0x38);
    (**(code **)(lVar4 + 0x10))(lVar4,*(undefined8 *)(param_1 + 0x50));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(lStack_60);
  lVar8 = lVar4;
  func_0x00010be5eb00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    if (lStack_60 != 0) {
      (**(code **)(lStack_60 + 0x10))(lStack_60,0,0);
    }
  }
  else {
    puVar1 = puVar7;
    func_0x00010c25b720();
    uVar5 = *(undefined8 *)(lVar4 + 0x70);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0xb) {
      lVar4 = lVar8;
      func_0x00010c0c6380(lVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf04a20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lStack_60);
      func_0x00010c107fa0(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(uVar5);
    }
    else {
      _objc_retain(lStack_60);
      func_0x00010c13ace0(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
    }
    _objc_release(lStack_60);
  }
  _objc_release(lVar8);
  _objc_release(lStack_60);
  _objc_release(puVar7);
  return;
}



/* Entry: 1068b38e4; end: 1068b3acb; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _fetchMediaForStory:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:completion:] */

void FUN_1068b38e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_stack_00000000;
  
  _objc_retain(param_3);
  _objc_retain(in_stack_00000000);
  lVar1 = param_1;
  func_0x00010be5eb00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (in_stack_00000000 != 0) {
      (**(code **)(in_stack_00000000 + 0x10))(in_stack_00000000,0,0);
    }
  }
  else {
    lVar2 = param_3;
    func_0x00010c25b720();
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0xb) {
      lVar2 = lVar1;
      func_0x00010c0c6380(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf04a20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(in_stack_00000000);
      func_0x00010c107fa0(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(uVar3);
    }
    else {
      _objc_retain(in_stack_00000000);
      func_0x00010c13ace0(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    _objc_release(in_stack_00000000);
  }
  _objc_release(lVar1);
  _objc_release(in_stack_00000000);
  _objc_release(param_3);
  return;
}



/* Entry: 1068b3acc; end: 1068b3ae7;  */

void FUN_1068b3acc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_2 != 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001068b3ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,param_2);
  return;
}



/* Entry: 1068b3ae8; end: 1068b3cdf;  */

void FUN_1068b3ae8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_1068b3ce0;
  uStack_110 = 0x1068b3cf0;
  uStack_108 = 0;
  lVar3 = param_2;
  func_0x00010bf007e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010c0c1140(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    uVar1 = 2;
    if (puStack_128[5] != 0) {
      uVar1 = 0;
    }
    (**(code **)(lVar4 + 0x10))(lVar4,uVar1);
  }
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 1068b3ce0; end: 1068b3cf7;  */

void FUN_1068b3ce0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1068b3cf8; end: 1068b3d2f;  */

void FUN_1068b3cf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068b3d30; end: 1068b3df3; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _initialize] */

void FUN_1068b3d30(undefined8 param_1,long param_2)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x10));
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x90) = param_1;
  _objc_initWeak(auStack_38,param_2);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be85520(param_2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1068b3df4; end: 1068b3e73;  */

void FUN_1068b3df4(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    cVar1 = *(char *)(lVar2 + 0xa0);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    if (cVar1 == '\x01') {
      func_0x00010be4cbe0();
    }
    else {
      func_0x00010bde8940();
    }
    _objc_release(param_1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068b3e74; end: 1068b3f4f; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _loadCachedStatesDictWithSavedStories:] */

void FUN_1068b3e74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be4e960(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068b3f50; end: 1068b3fa3;  */

void FUN_1068b3f50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde8940();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068b3fa4; end: 1068b4313; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _continueInitializationWithSavedStories:cacheMediaStateDict:] */

void FUN_1068b3fa4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar2 = puVar1;
  _dispatch_group_create();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_140;
    do {
      lVar8 = 0;
      do {
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar10 = *(undefined8 *)(lStack_148 + lVar8 * 8);
        func_0x00010c259740(uVar10);
        func_0x00010c0df880(puVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar5 == 0) {
          _dispatch_group_enter(puVar2);
          puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_178 = 0xc2000000;
          pcStack_170 = FUN_1068b4314;
          puStack_168 = &UNK_1109473c8;
          _objc_retain(puVar1);
          puStack_160 = puVar1;
          _objc_retain(puVar2);
          puStack_158 = puVar2;
          func_0x00010bdfbb20(param_1);
          _objc_release(puStack_158);
          puVar4 = puStack_160;
        }
        else {
          func_0x00010c259740(uVar10);
          func_0x00010c0df880(puVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_4;
          func_0x00010c0e00e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c259740(uVar10);
          func_0x00010c0df880(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar6);
          _objc_release(lVar5);
        }
        _objc_release(puVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  _objc_initWeak(auStack_188,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_1068b438c;
  puStack_1a0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_190,auStack_188);
  puStack_198 = puVar1;
  _objc_retain(puVar1);
  uVar10 = uVar7;
  func_0x000100bc0718(puVar2,uVar7,&puStack_1b8);
  _objc_release(uVar7);
  _objc_release(puStack_198);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_188);
  __Unwind_Resume();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(uVar10);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x20));
  _objc_release(uVar10);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 1068b4314; end: 1068b438b;  */

void FUN_1068b4314(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1068b438c; end: 1068b43fb;  */

void FUN_1068b438c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bedb720();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be078a0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3cf20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068b43fc; end: 1068b45f7; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _emitCacheStatusMetricsForPhase:] */

void FUN_1068b43fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  lVar1 = param_2;
  func_0x00010be0ef00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010852eee4(uVar2,lVar1,(long)((param_1 - *(double *)(param_2 + 0x90)) * 1000.0));
  _objc_release(lVar1);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  func_0x00010bf97ce0(*(undefined8 *)(param_2 + 0x18));
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  lVar1 = param_2;
  func_0x00010be0ef00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852e7f4(uVar2,lVar1,param_4,puStack_48[3]);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  lVar1 = param_2;
  func_0x00010be0ef00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852ea44(uVar2,lVar1,param_4,puStack_68[3]);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010be0ef00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852ec94(uVar2,param_2,param_4,puStack_88[3]);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_4);
  return;
}



/* Entry: 1068b45f8; end: 1068b463b;  */

void FUN_1068b45f8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  func_0x00010c067fc0();
  if (param_3 < 3) {
    lVar1 = *(long *)(*(long *)(param_1 + param_3 * 8 + 0x20) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  }
  return;
}



/* Entry: 1068b463c; end: 1068b4703; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _determineLaunchStateForStory:completion:] */

void FUN_1068b463c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  uVar1 = param_1;
  func_0x00010be444e0();
  if (((int)uVar1 == 0) || (uVar1 = param_1, func_0x00010be443e0(), (uVar1 & 1) != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c259740(param_3);
    func_0x00010c0df880(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar2,0);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bdfbb00(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068b4704; end: 1068b4897; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _determineLaunchStateForSingleSnapStory:completion:] */

void FUN_1068b4704(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_3);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be5eb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be366a0(param_1);
  lVar3 = lVar2;
  func_0x00010c0c6380();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,puVar1,0);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c13e2c0(uVar5);
    _objc_release(uVar5);
    _objc_release(param_4);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1068b4898; end: 1068b48cf;  */

void FUN_1068b4898(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bede9e0(uVar2,param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001068b48cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,uVar2);
  return;
}



/* Entry: 1068b48d0; end: 1068b49ff; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _installSCPlaybackMediaPrefetchStatusObservation] */

void FUN_1068b48d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c63c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1068b4a00; end: 1068b4a47;  */

void FUN_1068b4a00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70300();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068b4a48; end: 1068b4e93; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _parseIncomingStatus:] */

void FUN_1068b4a48(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **unaff_x21;
  undefined **ppuVar11;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined **ppuStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  long lStack_310;
  undefined **ppuStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  undefined **ppuStack_2e8;
  undefined *puStack_2e0;
  undefined **ppuStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  puStack_230 = (undefined *)0x0;
  uStack_218 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  ppuVar11 = param_3;
  ppuStack_2e8 = param_3;
  func_0x00010c107f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &puStack_230;
  puVar6 = auStack_f0;
  puVar7 = (undefined *)0x10;
  ppuVar2 = ppuVar11;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x21 = (undefined **)*puStack_220;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_220 != unaff_x21) {
          _objc_enumerationMutation(ppuVar11);
        }
        unaff_x24 = *(undefined **)(lStack_228 + (long)unaff_x26 * 8);
        puVar7 = unaff_x24;
        func_0x00010c0c5220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        param_3 = (undefined **)0x0;
        if (puVar7 != (undefined *)0x0) {
          lVar8 = *(long *)(param_1 + 0x30);
          unaff_x25 = unaff_x24;
          func_0x00010c0c5220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(unaff_x25);
          param_3 = (undefined **)0x0;
          if (lVar8 != 0) {
            param_3 = *(undefined ***)(param_1 + 0x30);
            func_0x00010c0c5220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(param_3);
            _objc_release(unaff_x24);
          }
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar2 != unaff_x26);
      ppuVar4 = &puStack_230;
      puVar6 = auStack_f0;
      puVar7 = (undefined *)0x10;
      ppuVar2 = ppuVar11;
      func_0x00010bf52a60();
      unaff_x23 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar11);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010bede9e0(param_1);
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    ppuStack_2d8 = ppuVar4;
    _objc_retain(puVar1);
    puVar6 = auStack_170;
    puVar7 = (undefined *)0x10;
    puVar3 = puVar1;
    func_0x00010bf52a60();
    puStack_2c8 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      lStack_2d0 = *plStack_260;
      puStack_2e0 = puVar1;
      do {
        unaff_x25 = (undefined *)0x0;
        do {
          if (*plStack_260 != lStack_2d0) {
            _objc_enumerationMutation(puVar1);
          }
          uVar9 = *(undefined8 *)(lStack_268 + (long)unaff_x25 * 8);
          ppuVar4 = *(undefined ***)(param_1 + 0x28);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar4 != (undefined **)0x0) {
            uStack_288 = 0;
            uStack_290 = 0;
            uStack_278 = 0;
            uStack_280 = 0;
            lStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_298 = 0;
            puStack_2a0 = (undefined8 *)0x0;
            ppuStack_2b8 = ppuVar4;
            func_0x00010c0c6380();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar4;
            func_0x00010bf52a60();
            uStack_2c0 = uVar9;
            if (ppuVar2 != (undefined **)0x0) {
              unaff_x24 = (undefined *)*puStack_2a0;
              do {
                unaff_x23 = (undefined **)0x0;
                do {
                  if ((undefined *)*puStack_2a0 != unaff_x24) {
                    _objc_enumerationMutation(ppuVar4);
                  }
                  lVar10 = *(long *)(lStack_2a8 + (long)unaff_x23 * 8);
                  lVar8 = lVar10;
                  func_0x00010c0c5220();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  ppuVar11 = (undefined **)0x0;
                  if (lVar8 != 0) {
                    ppuVar11 = *(undefined ***)(param_1 + 0x38);
                    func_0x00010c0c5220(lVar10);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x21 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7600;
                    if (ppuVar11 != (undefined **)0x0) {
                      unaff_x21 = ppuVar11;
                    }
                    func_0x00010c067fc0();
                    _objc_release(ppuVar11);
                    _objc_release(lVar10);
                    if (unaff_x21 == (undefined **)0x0) goto LAB_1068b4db4;
                  }
                  unaff_x23 = (undefined **)((long)unaff_x23 + 1);
                } while (ppuVar2 != unaff_x23);
                ppuVar2 = ppuVar4;
                func_0x00010bf52a60();
              } while (ppuVar2 != (undefined **)0x0);
            }
LAB_1068b4db4:
            _objc_release(ppuVar4);
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuStack_2d8);
            _objc_release(puVar1);
            unaff_x26 = ppuVar4;
            puVar1 = puStack_2e0;
          }
          _objc_release();
          unaff_x25 = unaff_x25 + 1;
        } while (unaff_x25 != puStack_2c8);
        puVar6 = auStack_170;
        puVar7 = (undefined *)0x10;
        puVar3 = puVar1;
        func_0x00010bf52a60();
        puStack_2c8 = puVar3;
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    param_3 = ppuStack_2d8;
    ppuVar4 = ppuStack_2d8;
    func_0x00010bedb700(param_1);
    _objc_release(param_3);
  }
  _objc_release(puVar1);
  ppuVar2 = ppuStack_2e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2f8 = FUN_1068b4e94;
  ppuStack_340 = unaff_x26;
  puStack_338 = unaff_x25;
  puStack_330 = unaff_x24;
  ppuStack_328 = unaff_x23;
  ppuStack_320 = ppuVar11;
  ppuStack_318 = unaff_x21;
  lStack_310 = param_1;
  ppuStack_308 = param_3;
  puStack_300 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  puVar3 = puVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar5 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  if ((puVar1 != (undefined *)0x0) && (func_0x00010c067fc0(), puVar3 == ppuVar2[1])) {
    _objc_initWeak(auStack_348,ppuVar2);
    _objc_copyWeak(auStack_350,auStack_348);
    func_0x00010be85520(ppuVar2);
    _objc_destroyWeak(auStack_350);
    _objc_destroyWeak(auStack_348);
  }
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 1068b4e94; end: 1068b5003; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1068b4e94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010c067fc0();
    if (uVar2 == *(ulong *)(param_1 + 8)) {
      _objc_initWeak(auStack_58,param_1);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010be85520(param_1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068b5004; end: 1068b504b;  */

void FUN_1068b5004(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be366c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068b504c; end: 1068b51ff; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _hydrateMissingMediaIdentifiersFor:] */

ulong FUN_1068b504c(long param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  uVar10 = param_3;
  func_0x00010bf52a60();
  if (uVar10 != 0) {
    lVar12 = *plStack_120;
    do {
      uVar14 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(*(undefined8 *)(lStack_128 + uVar14 * 8));
        func_0x00010c0df880();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(param_1 + 0x28);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 == 0) {
          lVar5 = param_1;
          func_0x00010be5eb00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be366a0(param_1);
          _objc_release(lVar5);
        }
        _objc_release(puVar4);
        uVar14 = uVar14 + 1;
      } while (uVar10 != uVar14);
      uVar10 = param_3;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar10 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  func_0x00010bf0ae40(*(undefined8 *)(param_3 + 0x10));
  puVar6 = (undefined1 *)puVar9;
  func_0x00010c107f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR___NSConcreteGlobalBlock_110947478;
  puVar7 = puVar6;
  func_0x0001006372a4();
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010bf529e0();
  if (puVar6 == (undefined1 *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    _objc_retain(puVar7);
    puVar6 = puVar7;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    if (puVar6 == (undefined1 *)0x0) {
      uVar10 = 2;
    }
    else {
      uVar10 = 2;
      do {
        puVar11 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(puVar7);
          }
          uVar13 = *(undefined8 *)((long)puVar11 * 8);
          func_0x00010bfa9ac0(uVar13);
          bVar2 = false;
          bVar3 = true;
          if (!NAN((double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(
                                                  uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))
                                                  )))) {
            bVar2 = (double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13
                                                  (uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16))))
                                                  ))) == 0.0;
            bVar3 = 0.0 <= (double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,
                                                  CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,
                                                  uVar16)))))));
          }
          if (!bVar3 || bVar2) {
            uVar15 = *(undefined8 *)(param_3 + 0x38);
            func_0x00010c0c5220(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar15);
            _objc_release(uVar13);
            uVar10 = 0;
          }
          else {
            func_0x00010bfa9ac0(uVar13);
            dVar1 = (double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13
                                                  (uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16))))
                                                  )));
            uVar15 = *(undefined8 *)(param_3 + 0x38);
            func_0x00010c0c5220(uVar13);
            _objc_retainAutoreleasedReturnValue();
            if (0.9 <= dVar1) {
              func_0x00010c1d0640(uVar15);
              _objc_release(uVar13);
            }
            else {
              func_0x00010c1d0640(uVar15);
              _objc_release(uVar13);
              uVar10 = (ulong)(uVar10 != 0);
            }
          }
          puVar11 = puVar11 + 1;
        } while (puVar6 != puVar11);
        puVar6 = puVar7;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined1 *)0x0);
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar7);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return uVar10;
  }
  ___stack_chk_fail();
  func_0x00010c0c5220(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (ulong)(ppuVar8 != (undefined **)0x0);
}



/* Entry: 1068b5200; end: 1068b5447; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _updateResultStateForStatus:] */

undefined1 FUN_1068b5200(long param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  lVar5 = param_3;
  func_0x00010c107f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR___NSConcreteGlobalBlock_110947478;
  lVar6 = lVar5;
  func_0x0001006372a4();
  _objc_release(lVar5);
  lVar5 = lVar6;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    _objc_retain(lVar6);
    lVar7 = lVar6;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    if (lVar7 == 0) {
      uVar4 = 2;
    }
    else {
      uVar10 = 2;
      uVar4 = 2;
      do {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(lVar6);
          }
          uVar12 = *(undefined8 *)(lVar11 * 8);
          func_0x00010bfa9ac0(uVar12);
          bVar2 = false;
          bVar3 = true;
          if (!NAN((double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(
                                                  uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))))
                                                  )))) {
            bVar2 = (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13
                                                  (uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))))
                                                  ))) == 0.0;
            bVar3 = 0.0 <= (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,
                                                  CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,
                                                  uVar14)))))));
          }
          if (!bVar3 || bVar2) {
            uVar13 = *(undefined8 *)(param_1 + 0x38);
            func_0x00010c0c5220(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar13);
            _objc_release(uVar12);
            uVar10 = 0;
            uVar4 = 0;
          }
          else {
            func_0x00010bfa9ac0(uVar12);
            dVar1 = (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13
                                                  (uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))))
                                                  )));
            uVar13 = *(undefined8 *)(param_1 + 0x38);
            func_0x00010c0c5220(uVar12);
            _objc_retainAutoreleasedReturnValue();
            if (0.9 <= dVar1) {
              func_0x00010c1d0640(uVar13);
              _objc_release(uVar12);
            }
            else {
              func_0x00010c1d0640(uVar13);
              _objc_release(uVar12);
              uVar4 = uVar10 != 0;
              uVar10 = (ulong)(byte)uVar4;
            }
          }
          lVar11 = lVar11 + 1;
        } while (lVar7 != lVar11);
        lVar7 = lVar6;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x00010c0c5220(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return ppuVar8 != (undefined **)0x0;
}



/* Entry: 1068b5448; end: 1068b547f;  */

bool FUN_1068b5448(undefined8 param_1,long param_2)

{
  func_0x00010c0c5220(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 1068b5480; end: 1068b552f; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _storiesMediaInfoForStory:] */

void FUN_1068b5480(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107d03060(lVar2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1068b5530; end: 1068b585f; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _mediaResolutionRequestForStory:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:] */

void FUN_1068b5530(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  lVar3 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010afefbe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    lVar3 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar5 == 0) {
      lVar3 = param_3;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010afefd10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar6 == 0) {
        puVar7 = param_1;
        func_0x00010bec4460(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar7;
        func_0x00010bf1eea0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar11;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c08fa60();
        _objc_release(puVar8);
        _objc_release(puVar11);
        if (puVar9 == (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          func_0x00010bebc2c0(param_1,param_2,puVar7,param_4,param_5,param_6,param_7,param_8);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = param_1;
          func_0x00010bf529e0();
          if (puVar11 == (undefined *)0x0) {
            puVar11 = (undefined *)0x0;
          }
          else {
            puVar11 = PTR_PTR_1126c98e8;
            _objc_alloc(PTR_PTR_1126c98e8);
            puVar9 = PTR_PTR_1126c98f0;
            _objc_alloc(PTR_PTR_1126c98f0);
            puVar10 = puVar7;
            func_0x00010c25b720();
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar1 = 0x1d;
            if (puVar10 != (undefined *)0x3) {
              uVar1 = 0x10;
            }
            uVar2 = 4;
            if (puVar10 != (undefined *)0x0) {
              uVar2 = uVar1;
            }
            lVar3 = param_3;
            func_0x00010c259740(param_3);
            func_0x00010c0df880(puVar8,param_2,lVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar8;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c029180(puVar9,param_2,uVar2,puVar10);
            func_0x00010c029c60(puVar11,param_2,param_1,puVar9);
            _objc_release(puVar9);
            _objc_release(puVar10);
            _objc_release(puVar8);
          }
          _objc_release(param_1);
        }
        _objc_release(puVar7);
      }
      else {
        func_0x00010be5eae0(param_1,param_2,lVar6,param_4,param_5,param_6,param_7,param_8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = param_1;
      }
      _objc_release(lVar6);
    }
    else {
      func_0x00010be5eac0(param_1,param_2,lVar5,param_4,param_5,param_6,param_7,param_8);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_1;
    }
    _objc_release(lVar5);
  }
  else {
    func_0x00010be5eaa0(param_1,param_2,lVar4,param_4,param_5,param_6,param_7,param_8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
  }
  _objc_release(lVar4);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1068b5860; end: 1068b5d1b; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _mediaResolutionRequestForLFShow:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:] */

void FUN_1068b5860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar12;
  float fVar13;
  double dVar14;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(in_x6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1068b3ce0;
  uStack_88 = 0x1068b3cf0;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  uVar1 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  dVar14 = 1.60807493534087e-314;
  func_0x00010c0bebc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = puStack_a0[5];
  func_0x00010c29a460();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar5 = puStack_a0[5];
    FUN_1068b2370(uVar5,*(undefined8 *)(param_1 + 0x78),0,500,in_x7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c2a2900(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_1068b26d0();
    _objc_release(uVar1);
    fVar13 = 3.0;
    func_0x00010bfb2cc0(*(undefined8 *)(param_1 + 0x60));
    uVar1 = uVar5;
    func_0x00010c0c6e00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126bff90;
    func_0x00010c100200(PTR_PTR_1126bff90);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    func_0x00010c2aae20(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    func_0x00010c2bc3a0(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (0.0 < fVar13) {
      puVar12 = PTR_PTR_1126b8010;
      _objc_alloc(PTR_PTR_1126b8010);
      if (dVar14 <= 0.0) {
        dVar14 = -0.0;
      }
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720((dVar14 + (double)fVar13) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0003a0(puVar12);
      _objc_release(puVar7);
      func_0x00010c2b5b20(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar12);
    }
    puVar7 = PTR_PTR_1126bfef0;
    _objc_alloc(PTR_PTR_1126bfef0);
    puVar12 = PTR_PTR_1126b2c80;
    func_0x00010c28fba0(PTR_PTR_1126b2c80);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029760(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar12);
    puVar12 = PTR_PTR_1126c98e8;
    _objc_alloc(PTR_PTR_1126c98e8);
    puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_alloc(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010c0309a0();
    puVar9 = PTR_PTR_1126c98f0;
    _objc_alloc(PTR_PTR_1126c98f0);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029180(puVar9);
    func_0x00010c029c60(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(in_x6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1068b5d1c; end: 1068b5d7f;  */

void FUN_1068b5d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068b5d80; end: 1068b5d83;  */

void FUN_1068b5d80(void)

{
  return;
}



/* Entry: 1068b5d84; end: 1068b5f47; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _mediaResolutionRequestForPublicUserStory:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:] */

void FUN_1068b5d84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc2e0(param_1,param_2,uVar1,param_4,param_5,param_6,param_7,param_8,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bf529e0();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110dc4098);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126c98e8;
    _objc_alloc(PTR_PTR_1126c98e8);
    puVar7 = PTR_PTR_1126c98f0;
    _objc_alloc(PTR_PTR_1126c98f0);
    func_0x00010c029180();
    func_0x00010c029c60(puVar8,param_2,param_1,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1068b5f48; end: 1068b611f; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _mediaResolutionRequestForSavedStory:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:] */

void FUN_1068b5f48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_7);
  func_0x000108f4ab50();
  uVar1 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc2e0(param_1,param_2,uVar1,param_4,param_5,param_6,param_7,param_8,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bf529e0();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dc4098);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar1);
    puVar7 = PTR_PTR_1126c98e8;
    _objc_alloc(PTR_PTR_1126c98e8);
    puVar6 = PTR_PTR_1126c98f0;
    _objc_alloc(PTR_PTR_1126c98f0);
    func_0x00010c029180();
    func_0x00010c029c60(puVar7,param_2,param_1,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1068b6120; end: 1068b63db; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _singleMediaRequestsFromSnaps:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:snapsToFetch:] */

void FUN_1068b6120(undefined8 *param_1,undefined8 param_2,long param_3,uint param_4,int param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x21;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar13;
  long unaff_x28;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  undefined1 uStack_1d8;
  undefined1 uStack_1d7;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 *puStack_168;
  long lStack_160;
  uint uStack_154;
  int iStack_150;
  uint uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
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
  
  uStack_14c = (uint)param_6;
  lStack_160 = param_9;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_7;
  uStack_154 = param_4;
  iStack_150 = param_5;
  uStack_148 = param_8;
  lStack_138 = param_3;
  _objc_retain(param_3);
  uStack_140 = param_7;
  _objc_retain(param_7);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
  iVar7 = (int)param_1[0xc];
  func_0x000108f4aae8();
  if (iVar7 == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    unaff_x21 = (undefined8 *)param_1[0x10];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = unaff_x21;
    func_0x00010bf602c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x21);
  }
  lVar2 = lStack_138;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lStack_138);
  puVar3 = &uStack_130;
  puVar6 = auStack_f0;
  iVar7 = 0x10;
  func_0x00010bf52a60();
  uVar8 = (undefined1)param_6;
  puVar11 = param_1;
  if (lVar2 != 0) {
    puVar11 = (undefined8 *)0x0;
    unaff_x25 = *plStack_120;
    puStack_168 = param_1;
    do {
      lVar10 = 0;
      puVar12 = puVar1;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(lStack_138);
        }
        unaff_x21 = *(undefined8 **)(lStack_128 + lVar10 * 8);
        unaff_x26 = unaff_x21;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = puVar13;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c29ea60();
        _objc_release(unaff_x23);
        _objc_release(unaff_x26);
        puVar1 = puVar12;
        if (((ulong)unaff_x24 & 1) == 0) {
          func_0x000107d03060(unaff_x21,0);
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = unaff_x21;
          func_0x00010bf1eea0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x24;
          func_0x00010c08fa60();
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          unaff_x26 = (undefined8 *)0x0;
          if (puVar3 != (undefined8 *)0x0) {
            puVar6 = (undefined1 *)(ulong)uStack_154;
            param_6 = (ulong)uStack_14c;
            unaff_x23 = puStack_168;
            uVar9 = uStack_140;
            iVar7 = iStack_150;
            func_0x00010bebc2c0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = unaff_x23;
            func_0x00010c174c00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            _objc_release(unaff_x23);
            uVar8 = (undefined1)param_6;
            unaff_x26 = puVar1;
            if (lStack_160 <= (long)puVar11) {
              _objc_release(unaff_x21);
              unaff_x28 = lVar2;
              goto LAB_1068b6378;
            }
            puVar11 = (undefined8 *)((long)puVar11 + 1);
          }
          _objc_release(unaff_x21);
        }
        lVar10 = lVar10 + 1;
        puVar12 = puVar1;
      } while (lVar2 != lVar10);
      puVar3 = &uStack_130;
      puVar6 = auStack_f0;
      iVar7 = 0x10;
      lVar2 = lStack_138;
      func_0x00010bf52a60();
      uVar8 = (undefined1)param_6;
      unaff_x28 = lVar2;
    } while (lVar2 != 0);
  }
LAB_1068b6378:
  lVar2 = lStack_138;
  _objc_release(lStack_138);
  _objc_release(puVar13);
  _objc_release(uStack_140);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_188 = lVar2;
    pcStack_178 = FUN_1068b63dc;
    lStack_1d0 = unaff_x28;
    puStack_1c8 = puVar13;
    puStack_1c0 = unaff_x26;
    lStack_1b8 = unaff_x25;
    puStack_1b0 = unaff_x24;
    puStack_1a8 = unaff_x23;
    puStack_1a0 = puVar1;
    puStack_198 = unaff_x21;
    puStack_190 = puVar11;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    _objc_retain(uVar9);
    puVar13 = puVar3;
    func_0x000107cc696c(puVar3,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar13;
    func_0x00010bf529e0();
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSSet_1126ae870;
      _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
    }
    else {
      puVar4 = PTR_PTR_1126b1060;
      _objc_alloc(PTR_PTR_1126b1060);
      func_0x00010c032f60();
      puVar5 = PTR_PTR_1126b1378;
      func_0x00010c25b720();
      if (iVar7 == 0) {
        func_0x00010c108220();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c1081c0();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_200 = 0xc2000000;
      pcStack_1f8 = FUN_1068b6588;
      puStack_1f0 = &UNK_1109474e8;
      _objc_retain(puVar3);
      uStack_1d8 = SUB81(puVar6,0);
      puStack_1e8 = puVar3;
      puStack_1e0 = puVar5;
      uStack_1d7 = uVar8;
      _objc_retain(puVar5);
      puVar1 = puVar13;
      func_0x000100817178(puVar13,&puStack_208);
      _objc_release(puStack_1e0);
      _objc_release(puStack_1e8);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar13);
    _objc_release(uVar9);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068b63dc; end: 1068b6587; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _singleMediaRequestsFromMediaInfo:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:] */

void FUN_1068b63dc(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  int param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  puVar1 = param_3;
  func_0x000107cc696c(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  }
  else {
    puVar3 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    puVar4 = PTR_PTR_1126b1378;
    func_0x00010c25b720();
    if (param_5 == 0) {
      func_0x00010c108220();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1081c0();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1068b6588;
    puStack_80 = &UNK_1109474e8;
    _objc_retain(param_3);
    uStack_68 = (undefined1)param_4;
    puStack_78 = param_3;
    puStack_70 = puVar4;
    uStack_67 = param_6;
    _objc_retain(puVar4);
    puVar2 = puVar1;
    func_0x000100817178(puVar1,&puStack_98);
    _objc_release(puStack_70);
    _objc_release(puStack_78);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068b6588; end: 1068b660b;  */

void FUN_1068b6588(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = uVar2;
  func_0x00010bf9c720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cc6f34(uVar2,param_2,uVar1,*(undefined1 *)(param_1 + 0x30),
                      *(undefined1 *)(param_1 + 0x31),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1068b660c; end: 1068b6677; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _addStoryBeingFetched:] */

void FUN_1068b660c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00(uVar2);
  func_0x00010c0d9840(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068b6678; end: 1068b66e3; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _removeStoryBeingFetched:] */

void FUN_1068b6678(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar2);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00(uVar2);
  func_0x00010c0d9840(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068b66e4; end: 1068b6873; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _hydrateMediaIdentifierLookupFor:withRequest:] */

void FUN_1068b66e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
  lVar2 = param_4;
  func_0x00010c0c6380();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar6 = *(long *)(lVar8 * 8);
      lVar4 = lVar6;
      func_0x00010c0c5220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0c5220(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar7);
        _objc_release(lVar6);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bedb730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1068b6874; end: 1068b687b; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _updateMediaStatesIfRequired:] */

void FUN_1068b6874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedb730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateMediaStatesIfRequired_for_112594770,param_3,0);
  return;
}



/* Entry: 1068b687c; end: 1068b6a9b; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _updateMediaStatesIfRequired:forceUpdate:] */

void FUN_1068b687c(undefined8 *param_1,undefined8 param_2,undefined **param_3,uint param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *unaff_x23;
  undefined8 uVar16;
  undefined *unaff_x24;
  undefined **unaff_x25;
  long lVar17;
  undefined **unaff_x26;
  long lVar18;
  long unaff_x27;
  undefined **unaff_x28;
  undefined1 auStack_420 [8];
  undefined1 auStack_418 [8];
  undefined *puStack_410;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined1 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_308;
  undefined **ppuStack_300;
  long lStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_238;
  long lStack_1b0;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  uint uStack_134;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_134 = param_4;
  _objc_retain(param_3);
  func_0x00010bf0ae40(param_1[2]);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  ppuVar2 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_130;
  ppuVar3 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar3 == (undefined **)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
        ppuVar14 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = ppuVar14;
        func_0x00010c067fc0();
        _objc_release(ppuVar14);
        unaff_x25 = (undefined **)param_1[3];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 == (undefined **)0x0) {
          if (unaff_x26 != (undefined **)0x0) {
LAB_1068b69b4:
            unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_1[3]);
            _objc_release(unaff_x26);
            goto LAB_1068b69e8;
          }
        }
        else {
          ppuVar14 = unaff_x25;
          func_0x00010c067fc0();
          if ((ppuVar14 != unaff_x26) &&
             (ppuVar14 = unaff_x25, func_0x00010c067fc0(),
             ppuVar14 != (undefined **)0x2 || unaff_x26 != (undefined **)0x1)) {
            if (unaff_x26 != (undefined **)0x0) goto LAB_1068b69b4;
            func_0x00010c1d0640(param_1[3]);
LAB_1068b69e8:
            uVar13 = 1;
          }
        }
        _objc_release(unaff_x25);
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar3 != unaff_x28);
      puVar8 = &uStack_130;
      ppuVar3 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
    unaff_x23 = (undefined *)0x0;
  }
  _objc_release(ppuVar2);
  if (((uStack_134 & 1) != 0) || (puVar4 = param_1, (int)uVar13 != 0)) {
    puVar4 = (undefined8 *)param_1[3];
    uVar13 = param_1[4];
    func_0x00010bf51e00();
    puVar8 = puVar4;
    func_0x00010c0d9840(uVar13);
    _objc_release(puVar4);
  }
  ppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1068b6a9c;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  ppuStack_190 = unaff_x26;
  ppuStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  ppuStack_170 = ppuVar2;
  uStack_168 = uVar13;
  puStack_160 = puVar4;
  ppuStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  func_0x00010bf0ae40(ppuVar3[2]);
  puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010be15ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar10;
  func_0x00010bf64ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar6 = puVar5;
  func_0x00010c08fa60();
  if (puVar6 == (undefined *)0x0) {
    (*(code *)puVar8[2])(puVar8,0);
  }
  else {
    puStack_238 = (undefined *)0x0;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_238;
    _objc_retain(puStack_238);
    if (puVar10 == (undefined *)0x0) {
      puStack_298 = puVar10;
      unaff_x23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puStack_290 = puVar5;
      _objc_opt_new();
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      plStack_270 = (long *)0x0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      _objc_retain(ppuVar3);
      ppuVar2 = ppuVar3;
      func_0x00010bf52a60();
      if (ppuVar2 != (undefined **)0x0) {
        unaff_x27 = *plStack_270;
        unaff_x28 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        do {
          ppuVar14 = (undefined **)0x0;
          do {
            if (*plStack_270 != unaff_x27) {
              _objc_enumerationMutation(ppuVar3);
            }
            unaff_x25 = *(undefined ***)(lStack_278 + (long)ppuVar14 * 8);
            unaff_x26 = unaff_x25;
            _objc_retainAutorelease();
            func_0x00010bdc3520();
            _strtoull();
            ppuVar1 = ppuStack_288;
            ppuVar7 = unaff_x25;
            _objc_retainAutorelease();
            func_0x00010bdc3520();
            if (ppuVar1 != ppuVar7) {
              unaff_x25 = ppuVar3;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df880();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(unaff_x23);
              _objc_release(unaff_x26);
              _objc_release(unaff_x25);
            }
            ppuVar14 = (undefined **)((long)ppuVar14 + 1);
          } while (ppuVar2 != ppuVar14);
          ppuVar2 = ppuVar3;
          func_0x00010bf52a60();
          unaff_x24 = (undefined *)0x0;
        } while (ppuVar2 != (undefined **)0x0);
      }
      _objc_release(ppuVar3);
      if (puVar8 != (undefined8 *)0x0) {
        unaff_x24 = unaff_x23;
        func_0x00010bf51e00();
        (*(code *)puVar8[2])(puVar8,unaff_x24);
        _objc_release(unaff_x24);
      }
      _objc_release(unaff_x23);
      puVar5 = puStack_290;
      puVar10 = puStack_298;
    }
    else {
      (*(code *)puVar8[2])(puVar8,0);
    }
    _objc_release(ppuVar3);
    _objc_release(puVar10);
  }
  _objc_release(puVar5);
  puVar4 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_1068b6d48;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_300 = unaff_x28;
  lStack_2f8 = unaff_x27;
  ppuStack_2f0 = unaff_x26;
  ppuStack_2e8 = unaff_x25;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  ppuStack_2d0 = ppuVar3;
  puStack_2c8 = puVar10;
  puStack_2c0 = puVar5;
  puStack_2b8 = puVar8;
  ppuStack_2b0 = &puStack_150;
  func_0x00010bf0ae40(puVar4[2]);
  puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  lVar15 = puVar4[3];
  _objc_retain(lVar15);
  lVar9 = lVar15;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar17 = *plStack_3c0;
    do {
      lVar18 = 0;
      do {
        if (*plStack_3c0 != lVar17) {
          _objc_enumerationMutation(lVar15);
        }
        uVar16 = *(undefined8 *)(lStack_3c8 + lVar18 * 8);
        uVar13 = puVar4[3];
        func_0x00010c0e00e0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d700(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar8);
        _objc_release(uVar16);
        _objc_release(uVar13);
        lVar18 = lVar18 + 1;
      } while (lVar9 != lVar18);
      lVar9 = lVar15;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar15);
  lStack_3d8 = 0;
  puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar12 = puVar8;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lStack_3d8;
  _objc_retain(lStack_3d8);
  if (lVar9 == 0) {
    func_0x00010be15ac0();
    _objc_retainAutoreleasedReturnValue();
    uStack_3e0 = 0;
    puVar12 = puVar4;
    func_0x00010c14e080(puVar10);
    _objc_release(puVar4);
  }
  _objc_release(puVar10);
  _objc_release(lVar9);
  puVar11 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  lStack_408 = lVar9;
  pcStack_3e8 = FUN_1068b6f34;
  puStack_410 = puVar10;
  puStack_400 = puVar4;
  puStack_3f8 = puVar8;
  pppuStack_3f0 = &ppuStack_2b0;
  _objc_retain(puVar12);
  _objc_initWeak(auStack_418,puVar11);
  uVar13 = puVar11[2];
  _objc_copyWeak(auStack_420,auStack_418);
  func_0x00010c0f7fc0(uVar13);
  _objc_destroyWeak(auStack_420);
  _objc_destroyWeak(auStack_418);
  _objc_release(puVar12);
  return;
}



/* Entry: 1068b6a9c; end: 1068b6d47; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _loadStoryMediaStatesDict:] */

void FUN_1068b6a9c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *unaff_x23;
  undefined8 uVar9;
  undefined *unaff_x24;
  undefined *unaff_x25;
  long lVar10;
  undefined *unaff_x26;
  long lVar11;
  long unaff_x27;
  undefined **unaff_x28;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010be15ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf64ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar1 = puVar7;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    puStack_f8 = (undefined *)0x0;
    param_1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_f8;
    _objc_retain(puStack_f8);
    if (puVar2 == (undefined *)0x0) {
      puStack_158 = puVar2;
      unaff_x23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puStack_150 = puVar7;
      _objc_opt_new();
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      _objc_retain(param_1);
      puVar2 = param_1;
      func_0x00010bf52a60();
      if (puVar2 != (undefined *)0x0) {
        unaff_x27 = *plStack_130;
        unaff_x28 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        do {
          puVar7 = (undefined *)0x0;
          do {
            if (*plStack_130 != unaff_x27) {
              _objc_enumerationMutation(param_1);
            }
            unaff_x25 = *(undefined **)(lStack_138 + (long)puVar7 * 8);
            unaff_x26 = unaff_x25;
            _objc_retainAutorelease();
            func_0x00010bdc3520();
            _strtoull();
            puVar1 = puStack_148;
            puVar3 = unaff_x25;
            _objc_retainAutorelease();
            func_0x00010bdc3520();
            if (puVar1 != puVar3) {
              unaff_x25 = param_1;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df880();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(unaff_x23);
              _objc_release(unaff_x26);
              _objc_release(unaff_x25);
            }
            puVar7 = puVar7 + 1;
          } while (puVar2 != puVar7);
          puVar2 = param_1;
          func_0x00010bf52a60();
          unaff_x24 = (undefined *)0x0;
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(param_1);
      if (param_3 != (undefined *)0x0) {
        unaff_x24 = unaff_x23;
        func_0x00010bf51e00();
        (**(code **)(param_3 + 0x10))(param_3,unaff_x24);
        _objc_release(unaff_x24);
      }
      _objc_release(unaff_x23);
      puVar7 = puStack_150;
      puVar2 = puStack_158;
    }
    else {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(puVar7);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_1068b6d48;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1c0 = unaff_x28;
  lStack_1b8 = unaff_x27;
  puStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  puStack_1a0 = unaff_x24;
  puStack_198 = unaff_x23;
  puStack_190 = param_1;
  puStack_188 = puVar2;
  puStack_180 = puVar7;
  puStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010bf0ae40(*(undefined8 *)(puVar1 + 0x10));
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lVar8 = *(long *)(puVar1 + 0x18);
  _objc_retain(lVar8);
  lVar4 = lVar8;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_280;
    do {
      lVar11 = 0;
      do {
        if (*plStack_280 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar9 = *(undefined8 *)(lStack_288 + lVar11 * 8);
        uVar5 = *(undefined8 *)(puVar1 + 0x18);
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d700(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(uVar9);
        _objc_release(uVar5);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar8;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar8);
  lStack_298 = 0;
  puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar3 = puVar2;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lStack_298;
  _objc_retain(lStack_298);
  if (lVar4 == 0) {
    func_0x00010be15ac0();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a0 = 0;
    puVar3 = puVar1;
    func_0x00010c14e080(puVar7);
    _objc_release(puVar1);
  }
  _objc_release(puVar7);
  _objc_release(lVar4);
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  lStack_2c8 = lVar4;
  pcStack_2a8 = FUN_1068b6f34;
  puStack_2d0 = puVar7;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar2;
  ppuStack_2b0 = &puStack_170;
  _objc_retain(puVar3);
  _objc_initWeak(auStack_2d8,puVar6);
  uVar5 = *(undefined8 *)(puVar6 + 0x10);
  _objc_copyWeak(auStack_2e0,auStack_2d8);
  func_0x00010c0f7fc0(uVar5);
  _objc_destroyWeak(auStack_2e0);
  _objc_destroyWeak(auStack_2d8);
  _objc_release(puVar3);
  return;
}



/* Entry: 1068b6d48; end: 1068b6f33; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _saveStoryMediaStatesDict] */

void FUN_1068b6d48(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c0e00e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d700(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(uVar8);
        _objc_release(uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar7;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar7);
  lStack_138 = 0;
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar6 = puVar1;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lStack_138;
  _objc_retain(lStack_138);
  if (lVar2 == 0) {
    func_0x00010be15ac0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = 0;
    puVar6 = param_1;
    func_0x00010c14e080(puVar4);
    _objc_release(param_1);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_168 = lVar2;
  pcStack_148 = FUN_1068b6f34;
  puStack_170 = puVar4;
  puStack_160 = param_1;
  puStack_158 = puVar1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_initWeak(auStack_178,puVar5);
  uVar3 = *(undefined8 *)(puVar5 + 0x10);
  _objc_copyWeak(auStack_180,auStack_178);
  func_0x00010c0f7fc0(uVar3);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar6);
  return;
}



/* Entry: 1068b6f34; end: 1068b6ff7; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _onResignActive:] */

void FUN_1068b6f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068b6ff8; end: 1068b7023;  */

void FUN_1068b6ff8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be99ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068b7024; end: 1068b714b; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _fileURLForFeedType:] */

undefined * FUN_1068b7024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_58 = param_1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfad380(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010c259560(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  return (undefined *)(ulong)(puVar2 != (undefined *)0x0);
}



/* Entry: 1068b714c; end: 1068b719b; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _isStorySingleSnap:] */

bool FUN_1068b714c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 1068b719c; end: 1068b726b; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _isStoryCameo:] */

bool FUN_1068b719c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c245680(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf28a40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfbeba0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar6 != 0;
}



/* Entry: 1068b726c; end: 1068b736f; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _logMediaFetchedWithTimeRequested:mediaState:] */

void FUN_1068b726c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_4);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  lVar3 = param_2;
  func_0x00010be0ef00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852da14(uVar4,lVar3,(long)(param_1 * 1000.0));
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010be0ef00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0x20;
  if (param_5 != 0) {
    lVar3 = 0x18;
  }
  lVar1 = 0x10;
  if (param_5 != 2) {
    lVar1 = lVar3;
  }
  func_0x00010852d5b4(uVar4,param_2,*(undefined8 *)((long)&PTR_PTR_110947578 + lVar1),1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068b7370; end: 1068b73db; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _queueLabelForFeedType:] */

void FUN_1068b7370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e63f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068b73dc; end: 1068b7507; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _queryStoriesForFeed:completion:] */

void FUN_1068b73dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bf00a20(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1068b7508; end: 1068b755b;  */

void FUN_1068b7508(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068b755c; end: 1068b760f; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _finalizeQueryStoriesWithStories:completion:] */

void FUN_1068b755c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1068b7610;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1068b7610; end: 1068b761f;  */

void FUN_1068b7610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068b761c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}


