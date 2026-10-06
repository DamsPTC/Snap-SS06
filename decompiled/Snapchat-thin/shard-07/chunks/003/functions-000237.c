/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10543e9a0; end: 10543e9a7; -[SCAdTrackEventRepositoryImpl adWebviewNavigationEventSubject] */

undefined8 FUN_10543e9a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10543e9a8; end: 10543e9af; -[SCAdTrackEventRepositoryImpl adWebviewUserEventSubject] */

undefined8 FUN_10543e9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10543e9b0; end: 10543e9b7; -[SCAdTrackEventRepositoryImpl adDeepLinkEventSubjectV2] */

undefined8 FUN_10543e9b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10543e9b8; end: 10543e9bf; -[SCAdTrackEventRepositoryImpl adAppInstallEventSubjectV2] */

undefined8 FUN_10543e9b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10543e9c0; end: 10543e9c7; -[SCAdTrackEventRepositoryImpl adLeadGenerationEventSubject] */

undefined8 FUN_10543e9c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10543e9c8; end: 10543e9cf; -[SCAdTrackEventRepositoryImpl adToMessageEventSubjectV2] */

undefined8 FUN_10543e9c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10543e9d0; end: 10543e9d7; -[SCAdTrackEventRepositoryImpl adReminderEventSubjectV2] */

undefined8 FUN_10543e9d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10543e9d8; end: 10543e9df; -[SCAdTrackEventRepositoryImpl adStickersEventSubjectV2] */

undefined8 FUN_10543e9d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10543e9e0; end: 10543e9e7; -[SCAdTrackEventRepositoryImpl adSubscribeEventSubjectV2] */

undefined8 FUN_10543e9e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10543e9e8; end: 10543e9ef; -[SCAdTrackEventRepositoryImpl adPlayableEventSubject] */

undefined8 FUN_10543e9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10543e9f0; end: 10543e9f7; -[SCAdTrackEventRepositoryImpl adInstantPageEventSubjectV2] */

undefined8 FUN_10543e9f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10543e9f8; end: 10543e9ff; -[SCAdTrackEventRepositoryImpl sponsoredSnapEventSubject] */

undefined8 FUN_10543e9f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10543ea00; end: 10543ea07; -[SCAdTrackEventRepositoryImpl sponsoredSnapBannerEventSubject] */

undefined8 FUN_10543ea00(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10543ea08; end: 10543ea0f; -[SCAdTrackEventRepositoryImpl adReportEventSubjectV2] */

undefined8 FUN_10543ea08(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10543ea10; end: 10543eb53; -[SCAdTrackEventRepositoryImpl .cxx_destruct] */

void FUN_10543ea10(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
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



/* Entry: 10543eb54; end: 10543ec1f; -[SCAdWebviewAsmLogger initWithConfigProvider:performer:spectrum:] */

undefined1 *
FUN_10543eb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e84e0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10543ec20; end: 10543ecf7; -[SCAdWebviewAsmLogger logWebviewAsmEvent:] */

void FUN_10543ec20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10543ecf8; end: 10543ed2b;  */

void FUN_10543ecf8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10543ed2c; end: 10543ee03; -[SCAdWebviewAsmLogger logInstantPageEvent:] */

void FUN_10543ed2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10543ee04; end: 10543ee37;  */

void FUN_10543ee04(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10543ee38; end: 10543f143; -[SCAdWebviewAsmLogger _logWebviewAsmEvent:] */

void FUN_10543ee38(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_105431088();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) goto LAB_10543f094;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(puVar4 + 0x10);
  }
  _objc_release();
  puVar4 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(puVar4 + 0x20);
  }
  _objc_retain(uVar7);
  _objc_release(puVar4);
  if (puVar1 == (undefined *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(puVar1 + 0x78);
  }
  if (lVar8 < 3) {
    if (lVar8 == 1) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dddc18;
LAB_10543efb0:
      func_0x00010c1d0640(puVar3,param_2,ppuVar6,&PTR____CFConstantStringClassReference_110dddbd8);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(uVar10,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110dddbf8);
LAB_10543eff0:
      _objc_release(puVar4);
      puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3,0,0);
      _objc_retainAutoreleasedReturnValue();
      goto joined_r0x00010543f114;
    }
    if (lVar8 == 2) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dddc38;
      goto LAB_10543efb0;
    }
  }
  else {
    if (lVar8 != 3) {
      if (lVar8 != 4) goto LAB_10543f084;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(uVar10,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110dddbf8);
      _objc_release(puVar4);
      puVar4 = param_3;
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(puVar4 + 0x28);
      }
      _objc_retain(uVar10);
      func_0x00010c1d0640(puVar3,param_2,uVar10,&PTR____CFConstantStringClassReference_110ddd938);
      _objc_release(uVar10);
      goto LAB_10543eff0;
    }
    puVar4 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = *(undefined **)(puVar4 + 0x18);
    }
    _objc_retain(puVar9);
    puVar5 = puVar9;
    func_0x00010bf64920(puVar9,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar4);
joined_r0x00010543f114:
    if (puVar5 != (undefined *)0x0) {
      func_0x00010c16a6a0(puVar2,param_2,puVar5);
      func_0x00010c197d00(puVar2,param_2,uVar7);
      puVar4 = PTR_PTR_1126b86e8;
      _objc_opt_new(PTR_PTR_1126b86e8);
      func_0x00010c16a6c0();
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25c500();
      _objc_release(uVar10);
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
  }
LAB_10543f084:
  _objc_release(uVar7);
  _objc_release(puVar3);
LAB_10543f094:
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10543f144; end: 10543f483; -[SCAdWebviewAsmLogger _logInstantPageEvent:] */

void FUN_10543f144(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined1 uVar16;
  long lVar17;
  undefined1 uVar18;
  double dVar19;
  double dVar20;
  undefined *puStack_148;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_105431088();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) goto LAB_10543f428;
  puVar6 = PTR_PTR_1126b9148;
  _objc_opt_new();
  puVar12 = param_1;
  puStack_148 = puVar4;
  do {
    func_0x00010c197c20();
    param_1 = param_3;
    FUN_1054312d8();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar4 = param_3;
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf52a60();
    if (puVar7 == (undefined *)0x0) {
      uVar16 = 0;
      lVar15 = 0;
      lVar13 = 0;
      uVar18 = 0;
      iVar14 = 0;
    }
    else {
      uVar16 = 0;
      lVar15 = 0;
      lVar13 = 0;
      uVar18 = 0;
      iVar14 = 0;
      lVar11 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(puVar4);
          }
          lVar17 = *(long *)(lStack_128 + (long)puVar10 * 8);
          if (lVar15 == 0) {
            if (lVar17 == 0) {
              lVar15 = 0;
            }
            else {
              lVar15 = *(long *)(lVar17 + 0x60);
            }
            _objc_retain(lVar15);
            if (iVar14 != 0) goto LAB_10543f270;
LAB_10543f28c:
            if (lVar17 == 0) {
              iVar14 = 0;
              goto LAB_10543f31c;
            }
            uVar9 = *(long *)(lVar17 + 0x10) - 1;
            if (uVar9 < 0x15) {
              iVar14 = *(int *)(&UNK_10ddac41c + uVar9 * 4);
            }
            else {
              iVar14 = 0;
            }
LAB_10543f2b4:
            lVar2 = *(long *)(lVar17 + 0x70);
            lVar3 = *(long *)(lVar17 + 0x78);
            uVar1 = 2;
            if (lVar3 != 2) {
              uVar1 = lVar3 == 1;
            }
            if (lVar3 != 0) {
              uVar18 = uVar1;
            }
            uVar1 = 2;
            if (lVar2 != 2) {
              uVar1 = lVar2 == 1;
            }
            if (lVar2 != 0) {
              uVar16 = uVar1;
            }
            dVar19 = *(double *)(lVar17 + 0x68);
            dVar20 = (double)*(long *)(lVar17 + 0x30);
          }
          else {
            if (iVar14 == 0) goto LAB_10543f28c;
LAB_10543f270:
            if (lVar17 != 0) goto LAB_10543f2b4;
LAB_10543f31c:
            dVar19 = 0.0;
            dVar20 = 0.0;
          }
          lVar13 = (long)((double)lVar13 + dVar20 * dVar19);
          puVar10 = puVar10 + 1;
        } while (puVar7 != puVar10);
        puVar7 = puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    func_0x00010c197d00(puVar6,param_2,iVar14);
    func_0x00010c1adbe0(puVar6,param_2,param_1);
    func_0x00010c218700(puVar6,param_2,lVar13);
    func_0x00010c1e28c0(puVar6,param_2,lVar15);
    func_0x00010c179e60(puVar6,param_2,uVar18);
    func_0x00010c17c240(puVar6,param_2,uVar16);
    func_0x00010c1adb80(puVar5,param_2,puVar6);
    puVar4 = PTR_PTR_1126b86e8;
    _objc_opt_new(PTR_PTR_1126b86e8);
    func_0x00010c16a6c0();
    uVar8 = *(undefined8 *)(puVar12 + 0x18);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25c500();
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(lVar15);
    _objc_release(puVar6);
    puVar4 = puStack_148;
LAB_10543f428:
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar6 = param_3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    puVar12 = param_1;
  } while( true );
}



/* Entry: 10543f484; end: 10543f4bf; -[SCAdWebviewAsmLogger .cxx_destruct] */

void FUN_10543f484(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10543f4c0; end: 10543f543; +[SQLAdTrackEventDatabaseV2 schema] */

void FUN_10543f4c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2ba5bd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10543f544; end: 10543f56b; -[SQLAdTrackEventDatabaseV2 getConn] */

void FUN_10543f544(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10543f56c; end: 10543f5f3; -[SQLAdTrackEventDatabaseV2 initWithSqliteConnection:] */

undefined1 * FUN_10543f56c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e84e8;
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



/* Entry: 10543f5f4; end: 10543f8ff; -[SQLAdTrackEventDatabaseV2 .cxx_destruct] */

void FUN_10543f5f4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10543f900; end: 10543f92b; -[SQLAdTrackEventDatabaseV2 .cxx_construct] */

void FUN_10543f900(long param_1)

{
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10543f92c; end: 10543faa3;  */

void FUN_10543f92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddac470,0x6c);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x0001005fcb64(lVar1,FUN_10543faa4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10543f9e8;
    }
  }
  lVar1 = 0;
LAB_10543f9e8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10543faa4; end: 10543fd3f;  */

void FUN_10543faa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126b9150;
  _objc_alloc();
  uVar2 = param_2;
  func_0x0001005fdab8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x0001005fdab8(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x0001005fdab8(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x0001005fdab8(param_2,3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x0001005fdab8(param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010b5ef268(param_2,5);
  uVar8 = param_2;
  func_0x00010b5ef268(param_2,6);
  uVar9 = param_2;
  func_0x00010b5ef268(param_2,7);
  uVar10 = param_2;
  func_0x0001005ff748(param_2,8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010b5ef268(param_2,9);
  uVar12 = param_2;
  func_0x00010b5ef268(param_2,10);
  uVar13 = param_2;
  func_0x00010b5ef268(param_2,0xb);
  uVar14 = param_2;
  func_0x00010b5ef268(param_2,0xc);
  uVar15 = param_2;
  func_0x00010b5ef268(param_2,0xd);
  func_0x00010b5ef2a0(param_2,0xe);
  func_0x0001005fdab8(param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b88f85c(param_1,puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                      uVar12,uVar13,uVar14,uVar15,param_2);
  _objc_release(param_2);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10543fd40; end: 10543fed7;  */

void FUN_10543fd40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddac4dd,0x86);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x0001005edcd4(lVar1,2,param_4);
      func_0x0001005fcb64(lVar1,FUN_10543faa4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10543fe18;
    }
  }
  lVar1 = 0;
LAB_10543fe18:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10543fed8; end: 10544004f;  */

void FUN_10543fed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x20;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddac564,0x6c);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x0001005fcb64(lVar1,FUN_10543faa4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10543ff94;
    }
  }
  lVar1 = 0;
LAB_10543ff94:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105440050; end: 1054401ff;  */

void FUN_105440050(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac5d1,0x34,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_1054404a4);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105440120;
    }
  }
  plVar4 = (long *)0x0;
LAB_105440120:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105440200; end: 10544033b;  */

void FUN_105440200(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puStack_80;
  long lStack_78;
  char cStack_69;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined1 *puStack_50;
  long lStack_48;
  
  _objc_retain();
  func_0x00010b5ef2d8(&puStack_80,param_5);
  puStack_50 = puStack_80;
  if (-1 < (long)cStack_69) {
    puStack_50 = (undefined1 *)&puStack_80;
  }
  lStack_48 = lStack_78;
  if (-1 < cStack_69) {
    lStack_48 = (long)cStack_69;
  }
  func_0x0001003a9204(auStack_68,param_3,param_4,0xd,&puStack_50);
  uVar1 = 0x90;
  __Znwm();
  func_0x0001005fca40();
  *param_1 = uVar1;
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(puStack_80);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10544033c; end: 1054404a3;  */

void FUN_10544033c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_3);
      }
      uVar11 = *(undefined8 *)(lVar12 * 8);
      _objc_retain(uVar11);
      func_0x0001005fcac0(param_1,param_2,uVar11);
      _objc_release(uVar11);
      lVar12 = lVar12 + 1;
    } while (lVar1 != lVar12);
    lVar1 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar2 = PTR_PTR_1126b8fa8;
  _objc_alloc();
  lVar3 = lVar1;
  func_0x0001005fdab8(lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010b5ef268(lVar1,1);
  lVar12 = lVar1;
  func_0x00010b5ef268(lVar1,2);
  lVar4 = lVar1;
  func_0x00010b5ef268(lVar1,3);
  lVar5 = lVar1;
  func_0x00010b5ef268(lVar1,4);
  lVar6 = lVar1;
  func_0x00010b5ef268(lVar1,5);
  lVar7 = lVar1;
  func_0x00010b5ef268(lVar1,6);
  lVar8 = lVar1;
  func_0x00010b5ef268(lVar1,7);
  func_0x00010b5ef268(lVar1,8);
  lVar9 = lVar1;
  func_0x0001005fdab8(lVar1,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005ff748(lVar1,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b88fe98(puVar2,lVar3,lVar10,lVar12,lVar4,lVar5 != 0,lVar6 != 0,lVar7 != 0,lVar8 != 0);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054404a4; end: 105440653;  */

void FUN_1054404a4(long param_1)

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
  long lVar10;
  
  puVar1 = PTR_PTR_1126b8fa8;
  _objc_alloc();
  lVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  lVar4 = param_1;
  func_0x00010b5ef268(param_1,2);
  lVar5 = param_1;
  func_0x00010b5ef268(param_1,3);
  lVar6 = param_1;
  func_0x00010b5ef268(param_1,4);
  lVar7 = param_1;
  func_0x00010b5ef268(param_1,5);
  lVar8 = param_1;
  func_0x00010b5ef268(param_1,6);
  lVar9 = param_1;
  func_0x00010b5ef268(param_1,7);
  func_0x00010b5ef268(param_1,8);
  lVar10 = param_1;
  func_0x0001005fdab8(param_1,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005ff748(param_1,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b88fe98(puVar1,lVar2,lVar3,lVar4,lVar5,lVar6 != 0,lVar7 != 0,lVar8 != 0,lVar9 != 0);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105440654; end: 105440803;  */

void FUN_105440654(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac606,0x30,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105440804);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105440724;
    }
  }
  plVar4 = (long *)0x0;
LAB_105440724:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105440804; end: 105440acb;  */

void FUN_105440804(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = PTR_PTR_1126b8fb0;
  _objc_alloc(PTR_PTR_1126b8fb0);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x0001005ff748(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x0001005ff748(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x0001005ff748(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x0001005ff748(param_1,4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x0001005ff748(param_1,5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x0001005ff748(param_1,6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x0001005ff748(param_1,7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x0001005ff748(param_1,8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x0001005ff748(param_1,9);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x0001005ff748(param_1,10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010b5ef268(param_1,0xb);
  uVar14 = param_1;
  func_0x00010b5ef268(param_1,0xc);
  func_0x00010b5ef268(param_1,0xd);
  func_0x00010b8937ec(puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
                      uVar13,uVar14,param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105440acc; end: 105440c7b;  */

void FUN_105440acc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac637,0x33,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105440c7c);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105440b9c;
    }
  }
  plVar4 = (long *)0x0;
LAB_105440b9c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105440c7c; end: 105440d73;  */

void FUN_105440c7c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b8fc0;
  _objc_alloc(PTR_PTR_1126b8fc0);
  lVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  lVar4 = param_1;
  func_0x0001005fdab8(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010b5ef268(param_1,3);
  func_0x00010b5ef268(param_1,4);
  func_0x00010b8902e0(puVar1,lVar2,lVar3,lVar4,lVar5 != 0,param_1 != 0);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105440d74; end: 105440f23;  */

void FUN_105440d74(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac66b,0x35,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105440f24);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105440e44;
    }
  }
  plVar4 = (long *)0x0;
LAB_105440e44:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105440f24; end: 10544101b;  */

void FUN_105440f24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b8fd0;
  _objc_alloc(PTR_PTR_1126b8fd0);
  lVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  lVar4 = param_1;
  func_0x0001005ff748(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010b5ef268(param_1,3);
  func_0x00010b5ef268(param_1,4);
  func_0x00010b8905b0(puVar1,lVar2,lVar3,lVar4,lVar5 != 0,param_1 != 0);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10544101c; end: 1054411cb;  */

void FUN_10544101c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac6a1,0x36,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_1054411cc);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_1054410ec;
    }
  }
  plVar4 = (long *)0x0;
LAB_1054410ec:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1054411cc; end: 105441257;  */

void FUN_1054411cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b8fe0;
  _objc_alloc(PTR_PTR_1126b8fe0);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_1,1);
  func_0x00010b890880(puVar1,uVar2,param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105441258; end: 105441407;  */

void FUN_105441258(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac6d8,0x31,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105441408);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105441328;
    }
  }
  plVar4 = (long *)0x0;
LAB_105441328:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105441408; end: 1054415db;  */

void FUN_105441408(long param_1)

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
  
  puVar1 = PTR_PTR_1126b9000;
  _objc_alloc(PTR_PTR_1126b9000);
  lVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  lVar4 = param_1;
  func_0x00010b5ef268(param_1,2);
  lVar5 = param_1;
  func_0x0001005fdab8(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x0001005fdab8(param_1,4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x0001005fdab8(param_1,5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x0001005ff748(param_1,6);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010b5ef268(param_1,7);
  func_0x00010b5ef268(param_1,8);
  func_0x00010b5ef268(param_1,9);
  func_0x00010b890a50(puVar1,lVar2,lVar3,lVar4 != 0,lVar5,lVar6,lVar7,lVar8,lVar9 != 0);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054415dc; end: 10544178b;  */

void FUN_1054415dc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac70a,0x34,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_10544178c);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_1054416ac;
    }
  }
  plVar4 = (long *)0x0;
LAB_1054416ac:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 10544178c; end: 105441817;  */

void FUN_10544178c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9020;
  _objc_alloc(PTR_PTR_1126b9020);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_1,1);
  func_0x00010b890ec4(puVar1,uVar2,param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105441818; end: 1054419c7;  */

void FUN_105441818(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac73f,0x33,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_1054419c8);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_1054418e8;
    }
  }
  plVar4 = (long *)0x0;
LAB_1054418e8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1054419c8; end: 105441b2f;  */

void FUN_1054419c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126b9010;
  _objc_alloc(PTR_PTR_1126b9010);
  uVar2 = param_2;
  func_0x0001005fdab8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010b5ef268(param_2,1);
  uVar4 = param_2;
  func_0x00010b5ef268(param_2,2);
  func_0x00010b5ef2a0(param_2,3);
  uVar5 = param_1;
  func_0x00010b5ef2a0(param_2,4);
  uVar6 = uVar5;
  func_0x00010b5ef2a0(param_2,5);
  uVar7 = uVar6;
  func_0x00010b5ef2a0(param_2,6);
  uVar8 = uVar7;
  func_0x00010b5ef2a0(param_2,7);
  uVar9 = uVar8;
  func_0x00010b5ef2a0(param_2,8);
  uVar10 = uVar9;
  func_0x00010b5ef2a0(param_2,9);
  uVar11 = uVar10;
  func_0x00010b5ef2a0(param_2,10);
  func_0x00010b8910a0(param_1,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,puVar1,uVar2,uVar3,uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105441b30; end: 105441cdf;  */

void FUN_105441b30(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac773,0x33,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105441ce0);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105441c00;
    }
  }
  plVar4 = (long *)0x0;
LAB_105441c00:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105441ce0; end: 105441d6b;  */

void FUN_105441ce0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9128;
  _objc_alloc(PTR_PTR_1126b9128);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_1,1);
  func_0x00010b89163c(puVar1,uVar2,param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105441d6c; end: 105441f1b;  */

void FUN_105441d6c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac7a7,0x34,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105441f1c);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105441e3c;
    }
  }
  plVar4 = (long *)0x0;
LAB_105441e3c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105441f1c; end: 1054420c7;  */

void FUN_105441f1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b9040;
  _objc_alloc(PTR_PTR_1126b9040);
  uVar2 = param_2;
  func_0x0001005fdab8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010b5ef268(param_2,1);
  uVar4 = param_2;
  func_0x00010b5ef268(param_2,2);
  uVar5 = param_2;
  func_0x00010b5ef268(param_2,3);
  func_0x00010b5ef2a0(param_2,4);
  uVar7 = param_1;
  func_0x00010b5ef2a0(param_2,5);
  uVar8 = uVar7;
  func_0x00010b5ef2a0(param_2,6);
  uVar9 = uVar8;
  func_0x00010b5ef2a0(param_2,7);
  uVar10 = uVar9;
  func_0x00010b5ef2a0(param_2,8);
  uVar6 = param_2;
  func_0x0001005fdab8(param_2,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005ff748(param_2,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b891d30(param_1,uVar7,uVar8,uVar9,uVar10,puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,param_2)
  ;
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054420c8; end: 105442277;  */

void FUN_1054420c8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac7dc,0x37,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105442278);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105442198;
    }
  }
  plVar4 = (long *)0x0;
LAB_105442198:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105442278; end: 1054425cb;  */

void FUN_105442278(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = PTR_PTR_1126b9050;
  _objc_alloc();
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  uVar4 = param_1;
  func_0x0001005ff748(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x0001005ff748(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x0001005ff748(param_1,4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x0001005ff748(param_1,5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x0001005ff748(param_1,6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x0001005ff748(param_1,7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x0001005ff748(param_1,8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x0001005ff748(param_1,9);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x0001005ff748(param_1,10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x0001005fdab8(param_1,0xb);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x0001005fdab8(param_1,0xc);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005fdab8(param_1,0xd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b892588(puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
                      uVar13,uVar14,param_1);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054425cc; end: 10544277b;  */

void FUN_1054425cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac814,0x3a,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_10544277c);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_10544269c;
    }
  }
  plVar4 = (long *)0x0;
LAB_10544269c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 10544277c; end: 105442973;  */

void FUN_10544277c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b9060;
  _objc_alloc(PTR_PTR_1126b9060);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  uVar4 = param_1;
  func_0x0001005ff748(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x0001005fdab8(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x0001005fdab8(param_1,4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010b5ef268(param_1,5);
  uVar8 = param_1;
  func_0x0001005ff748(param_1,6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x0001005ff748(param_1,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005ff748(param_1,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b892c90(puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,param_1);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105442974; end: 105442b23;  */

void FUN_105442974(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac84f,0x32,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105442b24);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105442a44;
    }
  }
  plVar4 = (long *)0x0;
LAB_105442a44:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105442b24; end: 105442c77;  */

void FUN_105442b24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b9070;
  _objc_alloc(PTR_PTR_1126b9070);
  lVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0001005fdab8(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x0001005ff748(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x0001005ff748(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010b5ef268(param_1,4);
  func_0x00010b5ef268(param_1,5);
  func_0x00010b893138(puVar1,lVar2,lVar3,lVar4,lVar5,lVar6 != 0,param_1 != 0);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105442c78; end: 105442e27;  */

void FUN_105442c78(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac882,0x3b,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105442e28);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105442d48;
    }
  }
  plVar4 = (long *)0x0;
LAB_105442d48:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105442e28; end: 105442f67;  */

void FUN_105442e28(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b9130;
  _objc_alloc(PTR_PTR_1126b9130);
  lVar2 = param_2;
  func_0x0001005fdab8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010b5ef268(param_2,1);
  lVar4 = param_2;
  func_0x0001005fdab8(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef2a0(param_2,3);
  lVar5 = param_2;
  func_0x00010b5ef268(param_2,4);
  lVar6 = param_2;
  func_0x00010b5ef268(param_2,5);
  lVar7 = param_2;
  func_0x00010b5ef268(param_2,6);
  func_0x00010b5ef268(param_2,7);
  func_0x00010b8934b0(param_1,puVar1,lVar2,lVar3,lVar4,lVar5 != 0,lVar6,lVar7,param_2);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105442f68; end: 105443117;  */

void FUN_105442f68(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac8be,0x3b,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105443118);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105443038;
    }
  }
  plVar4 = (long *)0x0;
LAB_105443038:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105443118; end: 1054433af;  */

void FUN_105443118(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar1 = PTR_PTR_1126b9030;
  _objc_alloc();
  uVar2 = param_2;
  func_0x0001005fdab8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010b5ef268(param_2,1);
  uVar4 = param_2;
  func_0x00010b5ef268(param_2,2);
  uVar5 = param_2;
  func_0x0001005fdab8(param_2,3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x0001005fdab8(param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010b5ef268(param_2,5);
  uVar8 = param_2;
  func_0x0001005fdab8(param_2,6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010b5ef268(param_2,7);
  uVar10 = param_2;
  func_0x00010b5ef268(param_2,8);
  uVar11 = param_2;
  func_0x00010b5ef268(param_2,9);
  func_0x00010b5ef2a0(param_2,10);
  uVar12 = param_2;
  uVar16 = param_1;
  func_0x0001005fdab8(param_2,0xb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef2a0(param_2,0xc);
  uVar13 = param_2;
  func_0x00010b5ef268(param_2,0xd);
  uVar14 = param_2;
  func_0x00010b5ef268(param_2,0xe);
  uVar15 = param_2;
  func_0x0001005fdab8(param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005fdab8(param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b894380(param_1,uVar16,puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                      uVar11,uVar12,uVar13,uVar14,uVar15,param_2);
  _objc_release(param_2);
  _objc_release(uVar15);
  _objc_release(uVar12);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054433b0; end: 10544355f;  */

void FUN_1054433b0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac8fa,0x36,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105443560);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105443480;
    }
  }
  plVar4 = (long *)0x0;
LAB_105443480:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105443560; end: 1054437b3;  */

void FUN_105443560(long param_1)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126b9088;
  _objc_alloc();
  lVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  lVar4 = param_1;
  func_0x00010b5ef268(param_1,2);
  lVar5 = param_1;
  func_0x00010b5ef268(param_1,3);
  lVar6 = param_1;
  func_0x0001005ff748(param_1,4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010b5ef268(param_1,5);
  lVar8 = param_1;
  func_0x00010b5ef268(param_1,6);
  lVar9 = param_1;
  func_0x00010b5ef268(param_1,7);
  lVar10 = param_1;
  func_0x00010b5ef268(param_1,8);
  lVar11 = param_1;
  func_0x00010b5ef268(param_1,9);
  lVar12 = param_1;
  func_0x0001005fdab8(param_1,10);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010b5ef268(param_1,0xb);
  lVar14 = param_1;
  func_0x0001005fdab8(param_1,0xc);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x0001005ff748(param_1,0xd);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005fdab8(param_1,0xe);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b894988(puVar1,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7 != 0,lVar8,lVar9,lVar10,lVar11,
                      lVar12,lVar13 != 0);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054437b4; end: 105443963;  */

void FUN_1054437b4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac931,0x3c,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105443964);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105443884;
    }
  }
  plVar4 = (long *)0x0;
LAB_105443884:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105443964; end: 105443a57;  */

void FUN_105443964(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b9090;
  _objc_alloc(PTR_PTR_1126b9090);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  uVar4 = param_1;
  func_0x00010b5ef268(param_1,2);
  uVar5 = param_1;
  func_0x00010b5ef268(param_1,3);
  func_0x0001005fdab8(param_1,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b894f00(puVar1,uVar2,uVar3,uVar4,uVar5,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105443a58; end: 105443c07;  */

void FUN_105443a58(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac96e,0x33,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105443c08);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105443b28;
    }
  }
  plVar4 = (long *)0x0;
LAB_105443b28:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105443c08; end: 105443d07;  */

void FUN_105443c08(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b9098;
  _objc_alloc(PTR_PTR_1126b9098);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  uVar4 = param_1;
  func_0x0001005fdab8(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005ff748(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b89541c(puVar1,uVar2,uVar3,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105443d08; end: 105443eb7;  */

void FUN_105443d08(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac9a2,0x32,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105443eb8);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105443dd8;
    }
  }
  plVar4 = (long *)0x0;
LAB_105443dd8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105443eb8; end: 10544400b;  */

void FUN_105443eb8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b90b8;
  _objc_alloc(PTR_PTR_1126b90b8);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  uVar4 = param_1;
  func_0x00010b5ef268(param_1,2);
  uVar5 = param_1;
  func_0x00010b5ef268(param_1,3);
  uVar6 = param_1;
  func_0x00010b5ef268(param_1,4);
  uVar7 = param_1;
  func_0x00010b5ef268(param_1,5);
  uVar8 = param_1;
  func_0x00010b5ef268(param_1,6);
  uVar9 = param_1;
  func_0x0001005fdab8(param_1,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_1,8);
  func_0x00010b895b20(puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,param_1);
  _objc_release(uVar9);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10544400c; end: 1054441bb;  */

void FUN_10544400c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddac9d5,0x34,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_1054441bc);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_1054440dc;
    }
  }
  plVar4 = (long *)0x0;
LAB_1054440dc:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1054441bc; end: 1054442c7;  */

void FUN_1054441bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8ff0;
  _objc_alloc(PTR_PTR_1126b8ff0);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  uVar4 = param_1;
  func_0x0001005fdab8(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x0001005ff748(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef2a0(param_1,4);
  func_0x00010b895e84(puVar1,uVar2,uVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054442c8; end: 105444477;  */

void FUN_1054442c8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddaca0a,0x3a,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105444478);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105444398;
    }
  }
  plVar4 = (long *)0x0;
LAB_105444398:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105444478; end: 105444617;  */

void FUN_105444478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b90a8;
  _objc_alloc(PTR_PTR_1126b90a8);
  uVar2 = param_2;
  func_0x0001005fdab8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef2a0(param_2,1);
  uVar3 = param_2;
  func_0x00010b5ef268(param_2,2);
  uVar4 = param_2;
  func_0x00010b5ef268(param_2,3);
  uVar5 = param_2;
  func_0x0001005ff748(param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x0001005ff748(param_2,5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x0001005ff748(param_2,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005ff748(param_2,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b8956e0(param_1,puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,param_2);
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105444618; end: 1054447c7;  */

void FUN_105444618(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddaca45,0x36,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_1054447c8);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_1054446e8;
    }
  }
  plVar4 = (long *)0x0;
LAB_1054446e8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1054447c8; end: 105444877;  */

void FUN_1054447c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b90d8;
  _objc_alloc(PTR_PTR_1126b90d8);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005fdb34(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b8961c4(puVar1,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105444878; end: 105444a27;  */

void FUN_105444878(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddaca7c,0x36,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105444a28);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105444948;
    }
  }
  plVar4 = (long *)0x0;
LAB_105444948:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105444a28; end: 105444b77;  */

void FUN_105444a28(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b90e8;
  _objc_alloc(PTR_PTR_1126b90e8);
  lVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  lVar4 = param_1;
  func_0x0001005fdab8(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x0001005fdab8(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x0001005fdab8(param_1,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_1,5);
  func_0x00010b8963f0(puVar1,lVar2,lVar3,lVar4,lVar5,lVar6,param_1 != 0);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105444b78; end: 105444d27;  */

void FUN_105444b78(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddacab3,0x3f,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105444d28);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105444c48;
    }
  }
  plVar4 = (long *)0x0;
LAB_105444c48:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105444d28; end: 105444f5f;  */

void FUN_105444d28(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b9108;
  _objc_alloc(PTR_PTR_1126b9108);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x0001005ff748(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x0001005ff748(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x0001005ff748(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x0001005ff748(param_1,4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x0001005ff748(param_1,5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x0001005ff748(param_1,6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x0001005ff748(param_1,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005ff748(param_1,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b891818(puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,param_1);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105444f60; end: 10544510f;  */

void FUN_105444f60(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddacaf3,0x39,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_105445110);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105445030;
    }
  }
  plVar4 = (long *)0x0;
LAB_105445030:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105445110; end: 10544520f;  */

void FUN_105445110(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b90f8;
  _objc_alloc(PTR_PTR_1126b90f8);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  uVar4 = param_1;
  func_0x0001005fdb34(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005fdb34(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b896758(puVar1,uVar2,uVar3,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105445210; end: 1054453bf;  */

void FUN_105445210(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddacb2d,0x35,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_1054453c0);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_1054452e0;
    }
  }
  plVar4 = (long *)0x0;
LAB_1054452e0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1054453c0; end: 1054454bf;  */

void FUN_1054453c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b90c8;
  _objc_alloc(PTR_PTR_1126b90c8);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  uVar4 = param_1;
  func_0x0001005fdab8(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005ff748(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b896a24(puVar1,uVar2,uVar3,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054454c0; end: 105445803;  */

void FUN_1054454c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  int iVar1;
  long lVar2;
  int iStack_74;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_17);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_2 + 0x28;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_2 + 8),&UNK_10ddacb63,0x21c);
      iStack_74 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar2,&iStack_74,param_4);
      func_0x0001005fcac0(lVar2,&iStack_74,param_5);
      func_0x0001005fcac0(lVar2,&iStack_74,param_6);
      func_0x0001005fcac0(lVar2,&iStack_74,param_7);
      iVar1 = iStack_74;
      func_0x0001005edcd4(lVar2,iStack_74,param_8);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_9);
      iStack_74 = iVar1 + 3;
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_10);
      func_0x00010b5eeb94(lVar2,&iStack_74,param_11);
      iVar1 = iStack_74;
      func_0x0001005edcd4(lVar2,iStack_74,param_12);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_13);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_14);
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_15);
      func_0x0001005edcd4(lVar2,iVar1 + 4,param_16);
      iStack_74 = iVar1 + 6;
      func_0x00010bccb848(param_1,lVar2,iVar1 + 5);
      func_0x0001005fcac0(lVar2,&iStack_74,param_17);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_17);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105445804; end: 105445a57;  */

void FUN_105445804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_2);
  _objc_retain(param_12);
  _objc_retain(param_13);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x30;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddacd80,0x1b0);
      iStack_64 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_3);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_4);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_5);
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_6);
      func_0x0001005edcd4(lVar2,iVar1 + 4,param_7);
      func_0x0001005edcd4(lVar2,iVar1 + 5,param_8);
      func_0x0001005edcd4(lVar2,iVar1 + 6,param_9);
      iStack_64 = iVar1 + 8;
      func_0x0001005edcd4(lVar2,iVar1 + 7,param_11);
      func_0x0001005fcac0(lVar2,&iStack_64,param_12);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_13);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_13);
  _objc_release(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105445a58; end: 105445db3;  */

void FUN_105445a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_2);
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
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x38;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddacf31,0x21d);
      iStack_64 = 1;
      func_0x0001005fcac0();
      func_0x00010b5eeb94(lVar2,&iStack_64,param_3);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_4);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_5);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_6);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_7);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_8);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_9);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_10);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_11);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_12);
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_13);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_14);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_15);
      func_0x00010b5ef0d0(lVar2);
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105445db4; end: 105445f67;  */

void FUN_105445db4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  long lVar2;
  int iStack_54;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x40;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddad14f,0xd9);
      iStack_54 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_54;
      iStack_54 = iStack_54 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x0001005fcac0(lVar2,&iStack_54,param_4);
      iVar1 = iStack_54;
      func_0x0001005edcd4(lVar2,iStack_54,param_5);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_6);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105445f68; end: 10544611b;  */

void FUN_105445f68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  long lVar2;
  int iStack_54;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x48;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddad229,0xe7);
      iStack_54 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_54;
      iStack_54 = iStack_54 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x00010b5eeb94(lVar2,&iStack_54,param_4);
      iVar1 = iStack_54;
      func_0x0001005edcd4(lVar2,iStack_54,param_5);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_6);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10544611c; end: 10544625f;  */

void FUN_10544611c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x50;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddad311,0x67);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105446260; end: 1054464d3;  */

void FUN_105446260(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x58;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddad379,0x172);
      iStack_64 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_3);
      iStack_64 = iVar1 + 2;
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_4);
      func_0x0001005fcac0(lVar2,&iStack_64,param_5);
      func_0x0001005fcac0(lVar2,&iStack_64,param_6);
      func_0x0001005fcac0(lVar2,&iStack_64,param_7);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_8);
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_9);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_11);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_12);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054464d4; end: 105446617;  */

void FUN_1054464d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x60;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddad4ec,0x65);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105446618; end: 10544683b;  */

void FUN_105446618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  
  _objc_retain(param_10);
  if (param_9 != 0) {
    lVar1 = *(long *)(param_9 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_9 + 0x68;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_9 + 8),&UNK_10ddad552,0x203);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_11);
      func_0x0001005edcd4(lVar1,2,param_12);
      func_0x00010bccb848(param_1,lVar1,3);
      func_0x00010bccb848(param_2,lVar1,4);
      func_0x00010bccb848(param_3,lVar1,5);
      func_0x00010bccb848(param_4,lVar1,6);
      func_0x00010bccb848(param_5,lVar1,7);
      func_0x00010bccb848(param_6,lVar1,8);
      func_0x00010bccb848(param_7,lVar1,9);
      func_0x00010bccb848(param_8,lVar1,10);
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_10);
  return;
}



/* Entry: 10544683c; end: 10544697f;  */

void FUN_10544683c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x70;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddad756,100);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105446980; end: 105446be3;  */

void FUN_105446980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  long lVar2;
  int iStack_94;
  
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  if (param_6 != 0) {
    lVar2 = *(long *)(param_6 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_6 + 0x78;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_6 + 8),&UNK_10ddad7bb,0x162);
      iStack_94 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_94;
      func_0x0001005edcd4(lVar2,iStack_94,param_8);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_9);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_10);
      func_0x00010bccb848(param_1,lVar2,iVar1 + 3);
      func_0x00010bccb848(param_2,lVar2,iVar1 + 4);
      func_0x00010bccb848(param_3,lVar2,iVar1 + 5);
      func_0x00010bccb848(param_4,lVar2,iVar1 + 6);
      iStack_94 = iVar1 + 8;
      func_0x00010bccb848(param_5,lVar2,iVar1 + 7);
      func_0x0001005fcac0(lVar2,&iStack_94,param_11);
      func_0x00010b5eeb94(lVar2,&iStack_94,param_12);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_12);
  _objc_release(param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105446be4; end: 105446f77;  */

void FUN_105446be4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_2);
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
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x80;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddad91e,0x298);
      iStack_64 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_64;
      iStack_64 = iStack_64 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_4);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_5);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_6);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_7);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_8);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_9);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_10);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_11);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_12);
      func_0x0001005fcac0(lVar2,&iStack_64,param_13);
      func_0x0001005fcac0(lVar2,&iStack_64,param_14);
      func_0x0001005fcac0(lVar2,&iStack_64,param_15);
      func_0x00010b5ef0d0(lVar2);
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105446f78; end: 1054471fb;  */

void FUN_105446f78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x88;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddadbb7,0x15a);
      iStack_64 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_64;
      iStack_64 = iStack_64 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_4);
      func_0x0001005fcac0(lVar2,&iStack_64,param_5);
      func_0x0001005fcac0(lVar2,&iStack_64,param_6);
      iVar1 = iStack_64;
      iStack_64 = iStack_64 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_7);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_8);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_9);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_10);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054471fc; end: 1054473f3;  */

void FUN_1054471fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x90;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddadd12,0xd7);
      iStack_64 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar2,&iStack_64,param_3);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_4);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_5);
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_6);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_7);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


