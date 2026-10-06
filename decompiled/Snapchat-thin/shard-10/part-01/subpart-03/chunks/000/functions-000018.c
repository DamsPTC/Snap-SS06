/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10795e43c; end: 10795e477;  */

void FUN_10795e43c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10795e990; end: 10795ea93; -[SCCollectionViewLeftAlignedLayout evaluatedMinimumInteritemSpacingForSectionAtIndex:] */

undefined8 FUN_10795e990(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_2;
    func_0x00010bf40120(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bf40120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf402c0(uVar2);
    _objc_release(param_2);
    _objc_release(uVar2);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0ce470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_minimumInteritemSpacing_112611330);
  return param_1;
}



/* Entry: 10795ecac; end: 10795ed03; -[SCShakeSeparatorView initWithFrame:] */

undefined1 * FUN_10795ecac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8f28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bead500(puVar1);
    func_0x00010beadc20(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10795f404; end: 10795f473; -[SCShakeSeparatorView updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10795f404(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8f28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_updateConstraints_11267ec30);
  func_0x00010bed5ca0(param_1);
  func_0x00010bed5ca0(param_1);
  return;
}



/* Entry: 10795f574; end: 10795f5d3; -[SCSnapchatDeviceInfoProvider deviceBandWidth] */

void FUN_10795f574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf88860();
  func_0x00010c0df780(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10795f7c0; end: 10795f823; -[SCShakeAsyncLogManager init] */

undefined1 * FUN_10795f7c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8f48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10795fd90; end: 10795ff33; +[SCShakeLogFileManager saveLogsToFileForShake:logWriter:inPath:] */

long FUN_10795fd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfc2e00(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_4;
  func_0x00010c119980();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_e8;
  uVar6 = 0x10;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar6 = uVar7;
        func_0x00010c0a6720(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a4900(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beeb940(param_1,param_2,uVar6,uVar7,uVar1);
        _objc_release(uVar7);
        _objc_release(uVar6);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      puVar5 = auStack_e8;
      uVar6 = 0x10;
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,puVar5,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar2 = param_4;
  uVar7 = uVar1;
  func_0x00010c2be020(param_4,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar2;
  }
  ___stack_chk_fail();
  if (puVar5 != (undefined1 *)0x0) {
    _objc_retain(puVar5);
    lVar2 = param_4;
    func_0x00010bfc2e00(param_4,param_2,uVar7,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    _UIImageJPEGRepresentation(0x3fe3333333333333,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010beeb940(param_4,param_2,&PTR____CFConstantStringClassReference_110ea6998,puVar4,
                        lVar2);
    _objc_release(puVar4);
    _objc_release(lVar2);
    return param_4;
  }
  return 0;
}



/* Entry: 107960638; end: 107960caf; +[SCShakeLogFileManager getCompressedFilePath:error:inPath:] */

void FUN_107960638(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte bStack_141;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined1 auStack_110 [128];
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bfc2e00(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e96178);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010bdc2c60(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar3);
  bStack_141 = 0;
  uVar12 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bfacc00(puVar2,param_2,uVar12,&bStack_141);
  bVar1 = bStack_141;
  _objc_release(uVar12);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((int)puVar5 == 0) || ((bVar1 & 1) == 0)) {
    uVar12 = param_1;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ea6a18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_4 != (undefined8 *)0x0) {
      uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_88 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&uStack_90,1)
      ;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar5,param_2,&PTR____CFConstantStringClassReference_110ea6978,1,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar5;
      _objc_release(puVar6);
    }
    uVar12 = 0;
    goto LAB_107960c38;
  }
  uVar12 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25fa40(puVar2,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar5 = puVar2;
  func_0x00010bfacbe0(puVar2,param_2,uVar4);
  uVar12 = uVar4;
  if (((ulong)puVar5 & 1) != 0) {
    _objc_retain(uVar4);
    goto LAB_107960c38;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  _objc_retain(puVar3);
  puVar6 = puVar3;
  func_0x00010bf52a60(puVar3,param_2,&uStack_190,auStack_110,0x10);
  if (puVar6 != (undefined *)0x0) {
    lVar13 = *plStack_180;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_180 != lVar13) {
          _objc_enumerationMutation(puVar3);
        }
        uVar7 = param_1;
        func_0x00010c0f5800(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c25ce00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126b9fa8;
        if (puVar9 != (undefined *)0x0) {
          uVar7 = uVar8;
          func_0x00010c0899c0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1b0 = 0xc2000000;
          puStack_1a8 = &UNK_107960cb0;
          puStack_1a0 = &UNK_110891a60;
          _objc_retain(puVar9);
          puStack_198 = puVar9;
          func_0x00010bf09600(puVar10,param_2,uVar7,1,&puStack_1b8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          func_0x00010befa120(puVar5,param_2,puVar10);
          _objc_release(puVar10);
          _objc_release(puStack_198);
        }
        _objc_release(puVar9);
        _objc_release(uVar8);
        puVar14 = puVar14 + 1;
      } while (puVar6 != puVar14);
      puVar6 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_190,auStack_110,0x10);
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar14 = puVar5;
  func_0x00010bf529e0();
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar14 == (undefined *)0x0) {
    if (param_4 != (undefined8 *)0x0) {
      uStack_120 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_118 = &PTR____CFConstantStringClassReference_110ea6a38;
      puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_118,&uStack_120
                          ,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar6,param_2,&PTR____CFConstantStringClassReference_110ea6978,2,puVar14)
      ;
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      uVar12 = 0;
      *param_4 = puVar6;
      goto LAB_107960c28;
    }
    uVar12 = 0;
  }
  else {
    puVar14 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b9fb0;
    _objc_alloc();
    ppuStack_130 = &PTR____CFConstantStringClassReference_110f769d8;
    puStack_128 = PTR____kCFBooleanTrue_11034ab68;
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_128,&ppuStack_130,
                        1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008480(puVar6,param_2,puVar14,puVar10,param_4);
    _objc_release(puVar10);
    puVar10 = puVar6;
    func_0x00010c2858e0(puVar6,param_2,puVar5,param_4);
    if ((int)puVar10 == 0) {
      uVar12 = 0;
    }
    else {
      puVar10 = puVar14;
      func_0x00010c14e020(puVar14,param_2,uVar4,0);
      if ((int)puVar10 == 0) {
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110ea6a58);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (param_4 != (undefined8 *)0x0) {
          uStack_140 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_138 = puVar9;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_138,
                              &uStack_140,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240(puVar10,param_2,&PTR____CFConstantStringClassReference_110ea6978,3,
                              puVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_4 = puVar10;
          _objc_release(puVar11);
        }
        _objc_release(puVar9);
        uVar12 = 0;
      }
      else {
        _objc_retain(uVar4);
      }
    }
    _objc_release(puVar6);
LAB_107960c28:
    _objc_release(puVar14);
  }
  _objc_release(puVar5);
LAB_107960c38:
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 10796113c; end: 107961203; +[SCShakeLogFileManager _getCompressingPathForId:inPath:] */

void FUN_10796113c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bfc2e00(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e96178);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010bdc2c60(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10796148c; end: 1079614a3;  */

void FUN_10796148c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__transitionToStateRunner_wasBack_112591670,
             *(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x30) != 0);
  return;
}



/* Entry: 107961bf0; end: 107961c4f; -[SCShakeSyncManager _getBackupOffTime:] */

undefined8 FUN_107961bf0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x28) == 0) || (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) == 0)
     ) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf457c0(uVar2,param_2,param_3);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107961c94; end: 107961c9b; -[SCShakeSyncManager setMIsCanceled:] */

void FUN_107961c94(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1079622c4; end: 1079622cb; -[SCShakeTicket mFeature] */

undefined8 FUN_1079622c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107962304; end: 10796230b; -[SCShakeTicket mNetworkConnectionType] */

undefined8 FUN_107962304(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107962344; end: 10796234b; -[SCShakeTicket mHasVideoAttached] */

undefined1 FUN_107962344(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 1079623ac; end: 1079623b3; -[SCShakeTicket preferenceInfo] */

undefined8 FUN_1079623ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1079623ec; end: 1079623f3; -[SCShakeTicket metadataUploaded] */

undefined1 FUN_1079623ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107962638; end: 10796263f; -[SCShakeTicketBuilder setMDescription:] */

void FUN_107962638(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107962678; end: 10796267f; -[SCShakeTicketBuilder setMNotificationEmails:] */

void FUN_107962678(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079626b8; end: 1079626e7; -[SCShakeTicketBuilder setMNetworkBandwidth:] */

void FUN_1079626b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107962748; end: 10796274f; -[SCShakeTicketBuilder setMWithAttachments:] */

void FUN_107962748(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 107962788; end: 10796278f; -[SCShakeTicketBuilder setMHasScreenCaptured:] */

void FUN_107962788(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 1079627c8; end: 1079627f7; -[SCShakeTicketBuilder setMReportSource:] */

void FUN_1079627c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107962858; end: 10796285f; -[SCShakeTicketBuilder setPreferenceInfo:] */

void FUN_107962858(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107962898; end: 10796289f; -[SCShakeTicketBuilder setLastConversationId:] */

void FUN_107962898(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079628d8; end: 1079628df; -[SCShakeTicketBuilder setMetadataUploaded:] */

void FUN_1079628d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 107963410; end: 107963427;  */

void FUN_107963410(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10796474c; end: 10796481f;  */

void FUN_10796474c(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_getMetaInfo_1125cf7b0);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_2;
    func_0x00010bfc7820();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      func_0x00010bf06ba0(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_getMetaInfoByProject_subProject__1125cf7b8);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_2;
    func_0x00010bfc7840();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      func_0x00010bf06ba0(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107965ae4; end: 107965aff; +[SCShakeTicketManager isNetworkError:] */

uint FUN_107965ae4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return (uint)(param_3 + 0x3f1U < 10) & 0x379U >> (ulong)((uint)(param_3 + 0x3f1U) & 0x1f);
}



/* Entry: 107966200; end: 1079662d3;  */

void FUN_107966200(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110ea6b58);
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    lVar3 = param_2;
    func_0x00010c252ee0();
    if (lVar3 != 200) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(long *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110ea6b78);
    }
    lVar3 = 0x20;
    if (ppuVar2 != (undefined **)0x0) {
      lVar3 = 0x28;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea6b98;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2;
    }
    (**(code **)(*(long *)(param_1 + lVar3) + 0x10))(*(long *)(param_1 + lVar3),ppuVar1);
    _objc_release(ppuVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107967778; end: 1079677a7; -[SCShakeTicketManager .cxx_destruct] */

void FUN_107967778(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10796847c; end: 1079685f3; -[SCShakeTicketTable updateTicketUploadUrl:metadataUploaded:forID:] */

undefined *
FUN_10796847c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined **ppuStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puVar9 = *(undefined **)(param_1 + 8);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  puVar10 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar10;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  uStack_60 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b080(puVar9,param_2,uVar11,puVar3);
  uVar12 = (ulong)(param_3 == (undefined *)0x0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar10);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  puVar2 = param_3;
  __Unwind_Resume();
  puStack_78 = &UNK_1079685f4;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar2;
  uStack_b0 = uVar12;
  puStack_a8 = puVar9;
  puStack_a0 = puVar10;
  lStack_98 = param_1;
  uStack_90 = param_5;
  puStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar2 + 8) == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_sync_enter(puVar2);
    lVar7 = *(long *)(puVar2 + 8);
    uVar11 = *(undefined8 *)(puVar2 + 0x28);
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110ea6c58;
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_c0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b000(lVar7,param_2,uVar11,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    lVar6 = lVar7;
    func_0x00010bfb1b60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126d5828;
      _objc_alloc_init();
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6c78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c12e0(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110def758);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010b767dd8();
      func_0x00010c1c1460(puVar9,param_2,lVar5);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69a58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1440(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110dd3178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1220(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110db1138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1240(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c14c0(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6c98);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c13e0(puVar9,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6cb8);
      func_0x00010c1c1300(puVar9,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6cd8);
      func_0x00010c1c14a0(puVar9,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6cf8);
      func_0x00010c1c1540(puVar9,param_2,lVar4);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar4 = lVar6;
      func_0x00010c0b4ac0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6d18);
      func_0x00010c0df7a0(puVar10,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c13a0(puVar9,param_2,puVar10);
      _objc_release(puVar10);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6d38);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010b767714();
      func_0x00010c1c13c0(puVar9,param_2,lVar5);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6d58);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010b767f1c();
      func_0x00010c1c1480(puVar9,param_2,lVar5);
      _objc_release(lVar4);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar4 = lVar6;
      func_0x00010c0b4ac0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e06df8);
      func_0x00010c0df7a0(puVar10,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c11c0(puVar9,param_2,puVar10);
      _objc_release(puVar10);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6d78);
      func_0x00010c1c1520(puVar9,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6d98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1500(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6db8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c14e0(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6dd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1360(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6df8);
      func_0x00010c1c1280(puVar9,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6e18);
      func_0x00010c1c12a0(puVar9,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6e38);
      func_0x00010c1c1260(puVar9,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6e58);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1180(puVar9,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1420(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69db8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1340(puVar9,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6e78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179d60(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dfd80(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6eb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c171b80(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69898);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162820(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e698b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b7880(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6ed8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b7ac0(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69838);
      func_0x00010c1fbba0(puVar9,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6ef8);
      func_0x00010c1f51a0(puVar9,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf63a20(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6f18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c218e40(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6f38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21d080(puVar9,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6f58);
      func_0x00010c1c7600(puVar9,param_2,lVar4);
      puVar10 = puVar9;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_sync_exit(puVar2);
    _objc_release();
    param_3 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_3);
  __Unwind_Resume();
  puVar10 = puVar3;
  func_0x00010bdf8000();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126d5850;
  _objc_alloc();
  puVar2 = puVar10;
  func_0x00010c0f5800(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034700(puVar9,param_2,puVar2);
  uVar11 = *(undefined8 *)(puVar3 + 8);
  *(undefined **)(puVar3 + 8) = puVar9;
  _objc_release(uVar11);
  _objc_release(puVar2);
  uVar8 = *(undefined8 *)(puVar3 + 8);
  uVar11 = uVar8;
  func_0x00010c252980(uVar8,param_2,&PTR____CFConstantStringClassReference_110ea6f78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9afc0(uVar8,param_2,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  lVar6 = *(long *)(puVar3 + 8);
  if ((lVar6 != 0) && (func_0x00010c088a40(), (int)lVar6 != 0xe)) {
    iVar1 = (int)*(undefined8 *)(puVar3 + 8);
    func_0x00010c088a40();
    if (iVar1 != 5) {
      iVar1 = (int)*(undefined8 *)(puVar3 + 8);
      func_0x00010c088a40();
      if (iVar1 != 0xb) goto code_r0x000107968ee0;
    }
  }
  func_0x00010bf6bac0(puVar3);
  puVar9 = PTR_PTR_1126d5850;
  _objc_alloc();
  puVar2 = puVar10;
  func_0x00010c0f5800(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034700(puVar9,param_2,puVar2);
  uVar11 = *(undefined8 *)(puVar3 + 8);
  *(undefined **)(puVar3 + 8) = puVar9;
  _objc_release(uVar11);
  _objc_release(puVar2);
code_r0x000107968ee0:
  uVar8 = *(undefined8 *)(puVar3 + 8);
  uVar11 = uVar8;
  func_0x00010c252980(uVar8,param_2,&PTR____CFConstantStringClassReference_110ea6f98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar8,param_2,uVar11);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(puVar3 + 8);
  func_0x00010c252980(uVar11,param_2,&PTR____CFConstantStringClassReference_110ea6fb8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar3 + 0x10);
  *(undefined8 *)(puVar3 + 0x10) = uVar11;
  _objc_release(uVar8);
  uVar11 = *(undefined8 *)(puVar3 + 8);
  func_0x00010c252980(uVar11,param_2,&PTR____CFConstantStringClassReference_110ea6fd8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar3 + 0x18);
  *(undefined8 *)(puVar3 + 0x18) = uVar11;
  _objc_release(uVar8);
  uVar11 = *(undefined8 *)(puVar3 + 8);
  func_0x00010c252980(uVar11,param_2,&PTR____CFConstantStringClassReference_110ea6ff8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar3 + 0x20);
  *(undefined8 *)(puVar3 + 0x20) = uVar11;
  _objc_release(uVar8);
  uVar11 = *(undefined8 *)(puVar3 + 8);
  func_0x00010c252980(uVar11,param_2,&PTR____CFConstantStringClassReference_110ea7018);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar3 + 0x28);
  *(undefined8 *)(puVar3 + 0x28) = uVar11;
  _objc_release(uVar8);
  uVar11 = *(undefined8 *)(puVar3 + 8);
  func_0x00010c252980(uVar11,param_2,&PTR____CFConstantStringClassReference_110ea7038);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + 0x30) = uVar11;
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return puVar10;
}



/* Entry: 10796940c; end: 107969463; -[SCShakeTicketUploader _processNextStep:] */

void FUN_10796940c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  puStack_30 = &UNK_107969464;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_40);
  return;
}



/* Entry: 1079698f4; end: 107969a9b; -[SCShakeTicketUploader _uploadFiles] */

void FUN_1079698f4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((lVar1 != 0) && (func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d5830;
    _objc_alloc(PTR_PTR_1126d5830);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2bd3e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c5c0(puVar3);
    _objc_release(uVar4);
    func_0x00010c28e6a0(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107969a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),0,&PTR____CFConstantStringClassReference_110ea7098,1);
  return;
}



/* Entry: 107969ebc; end: 107969ec3; -[SCShakeTicketUploader setMCurrentStep:] */

void FUN_107969ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10796a1d4; end: 10796a267; -[SCShakeUploadThrottleController init] */

undefined1 * FUN_10796a1d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8f80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10796a440; end: 10796a447; -[SCSnapAirConfiguration deviceInfoProvider] */

undefined8 FUN_10796a440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10796a5cc; end: 10796a5ef; -[SCNotificationProcessingCompletion copyWithZone:] */

undefined8 FUN_10796a5cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10796a860; end: 10796a867; -[SCNativeNotificationProcessedEvent result] */

undefined8 FUN_10796a860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10796aa28; end: 10796aac3; -[SCRemixOperaMetadata hash] */

undefined8 * FUN_10796aa28(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar4 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
code_r0x00010796ab9c:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto code_r0x00010796aba8;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && (puVar4[4] == param_3[4])) {
      lVar6 = puVar4[1];
      if ((lVar6 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[2];
        if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[3];
          if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[5];
            if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              puVar7 = (undefined8 *)puVar4[6];
              if (puVar7 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto code_r0x00010796aba8;
              }
              goto code_r0x00010796ab9c;
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
code_r0x00010796aba8:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10796abf4; end: 10796acc3; -[SCRemixOperaMetadata .cxx_destruct] */

void FUN_10796abf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10796af74; end: 10796afdb; +[MFCLogo descriptor] */

void FUN_10796af74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b65ca0,
                        &PTR____CFConstantStringClassReference_110e58498,&PTR_DAT_11323b508,
                        &PTR_s_media_11323b540,3,0x18,0x1c);
    puRam0000000113727090 = puVar1;
  }
  return;
}



/* Entry: 10796b2d8; end: 10796b2ff;  */

void FUN_10796b2d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10796bb98; end: 10796bbeb; -[SCDeepLinkingUrlInterceptor handleOpenURL:additionalInfo:onDestinationReached:completion:] */

void FUN_10796bb98(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd1bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x48),PTR_s_handleOpenURL_additionalInfo_onD_1125d2090);
    return;
  }
  func_0x00010be3d340();
  return;
}



/* Entry: 10796c2b0; end: 10796c2bb; -[SCDeepLinkingUrlInterceptor _schemeExceptionList] */

undefined ** FUN_10796c2b0(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_1111816a0;
}



/* Entry: 10796c894; end: 10796c947; -[SCDeepLinkingUrlInterceptor _continueDeeplinkHandler:completion:] */

void FUN_10796c894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 8) = 0;
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2a36e0();
    _objc_release(lVar3);
  }
  func_0x00010be6d8e0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10796cf78; end: 10796cff3; -[SCDeepLinkingUrlInterceptor notifyDelegateDidClickCancelForLeavingAppForURL:] */

void FUN_10796cf78(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a36c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10796d548; end: 10796d8b7; -[SCStoriesChromeInteractionSession initWithUserSession:navigationDelegate:operaControlling:startChatDelegate:discoverFeedPageSessionId:isNavigationStyleVertical:grapheneRegistry:subscriptionWorkflowStarter:circumstanceEngine:boostCoordinator:triggeringSection:storiesConfigProvider:imageFetchingService:lazyDiscoverFeedEventsController:lazyDiscoverFeedInteractionHistoryManager:] */

undefined8 *
FUN_10796d548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f8fc0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
    puVar3 = puVar1 + 4;
    _objc_storeWeak(puVar3,param_6);
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c14c0);
    puVar4 = puVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release();
    *(undefined1 *)((long)puVar1 + 0x39) = param_8;
    func_0x000100c67ae4();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release();
    func_0x000108f21604();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = uVar6;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_12;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar5;
    _objc_release(uVar2);
    puVar1[0x16] = param_13;
    _objc_retain(param_14);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10796e8e8; end: 10796e9a7; -[SCStoriesChromeInteractionSession _handleSubscribingActionSuccess:cheetahStory:] */

void FUN_10796e8e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000108f217fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b23b28(param_4,param_3,uVar1,*(undefined8 *)(param_1 + 0x88));
  _objc_release(uVar1);
  if ((int)param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe7580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    uVar1 = uVar2;
    func_0x000108e07094();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107affcd4(param_4,uVar2,uVar3,uVar1,*(undefined8 *)(param_1 + 0xa8));
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10796efac; end: 10796f2d7; -[SCStoriesChromeInteractionSession _didFetchSnapchatterForProfileOpeningWithSnapchatter:] */

void FUN_10796efac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  if ((uVar2 == 0) || (uVar1 = param_3, func_0x000100bf119c(), (uVar1 & 1) != 0)) {
    if (*(long *)(param_1 + 0x58) == 0) {
      func_0x0001004fa310();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bdb40);
      uVar2 = uVar1;
      func_0x00010beecc20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = uVar2;
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      *(ulong *)(param_1 + 0x58) = uVar1;
      _objc_release(uVar7);
      _objc_release(uVar2);
    }
    puVar6 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar8);
    uVar7 = uVar8;
    func_0x00010bf0e700(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0x1b567ead;
    func_0x00010c0c1320();
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uVar7);
    _objc_release(uVar8);
    puVar9 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar9 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      func_0x00010c02ec60();
    }
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bfb8800(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x28);
    func_0x00010bf5b080(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf5b1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 6;
    func_0x00010bb0584c(6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb8260(param_1);
  }
  _objc_release(uVar7);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 10796f8a8; end: 10796f9bb; -[SCStoriesChromeInteractionSession .cxx_destruct] */

void FUN_10796f8a8(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10797054c; end: 107970847; -[SCStoriesSharingSession registeredEventsForOperaSession] */

void FUN_10797054c(void)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  ulong in_x4;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined *puStack_270;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar25 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b2d30;
  puStack_118 = puVar25;
  puStack_110 = puVar25;
  func_0x00010bf6b1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126b2d30;
  puStack_120 = puVar23;
  puStack_108 = puVar23;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b2ea8;
  puStack_128 = puVar25;
  puStack_100 = puVar25;
  func_0x00010c268600();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126b2ea8;
  puStack_130 = puVar23;
  puStack_f8 = puVar23;
  func_0x00010c22d420();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b2ea8;
  puStack_138 = puVar25;
  puStack_f0 = puVar25;
  func_0x00010c22d440();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126b2ea8;
  puStack_140 = puVar23;
  puStack_e8 = puVar23;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b2ea8;
  puStack_148 = puVar25;
  puStack_e0 = puVar25;
  func_0x00010c0b4e00();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126b2ea8;
  puStack_150 = puVar23;
  puStack_d8 = puVar23;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b2d30;
  puStack_158 = puVar25;
  puStack_d0 = puVar25;
  func_0x00010c15c9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126b2d30;
  puStack_c8 = puVar23;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d30;
  puStack_c0 = puVar25;
  func_0x00010bf52060();
  ppuVar4 = (undefined **)PTR_PTR_1126b2d30;
  puStack_b8 = puVar3;
  func_0x00010c149e20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2d30;
  ppuStack_b0 = ppuVar4;
  func_0x00010c22a860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2d30;
  puStack_a8 = puVar5;
  func_0x00010c0dc460();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e50dd8;
  puVar7 = PTR_PTR_1126b2338;
  puStack_a0 = puVar6;
  func_0x00010c23c600();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2338;
  puStack_90 = puVar7;
  func_0x00010c23c620();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2338;
  puStack_88 = puVar8;
  func_0x00010c0f60e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2338;
  puStack_80 = puVar9;
  func_0x00010c13d9e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = &puStack_110;
  ppuVar24 = (undefined **)0x14;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = puVar11;
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(puVar25);
  _objc_release(puVar23);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  _objc_release(puStack_120);
  puVar11 = puStack_118;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_160);
    return;
  }
  ___stack_chk_fail();
  puStack_168 = &UNK_107970848;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1c0 = puVar23;
  puStack_1b8 = puVar10;
  puStack_1b0 = puVar8;
  puStack_1a8 = puVar7;
  puStack_1a0 = puVar6;
  puStack_198 = puVar5;
  puStack_190 = puVar9;
  ppuStack_188 = ppuVar4;
  puStack_180 = puVar3;
  puStack_178 = puVar25;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar21);
  _objc_retain(ppuVar24);
  _objc_retain(in_x4);
  puVar25 = PTR_PTR_1126c9a58;
  ppuVar26 = ppuVar24;
  func_0x00010c118b40(ppuVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00();
  _objc_release(ppuVar26);
  if ((int)puVar25 == 0) goto code_r0x00010797148c;
  ppuVar4 = ppuVar24;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = ppuVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar25 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  ppuVar22 = ppuVar26;
  _objc_opt_isKindOfClass(ppuVar26,puVar25);
  ppuVar4 = ppuVar26;
  if (((ulong)ppuVar22 & 1) == 0) {
    ppuVar4 = (undefined **)0x0;
  }
  _objc_retain(ppuVar4);
  _objc_release(ppuVar26);
  puVar25 = PTR_PTR_1126c9310;
  func_0x00010c06dca0();
  if (((ulong)puVar25 & 1) == 0) {
    _objc_retain(ppuVar24);
    uVar12 = *(undefined8 *)(puVar11 + 8);
    *(undefined ***)(puVar11 + 8) = ppuVar24;
    _objc_release(uVar12);
    ppuVar26 = ppuVar24;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar26;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar11 + 0x58);
    *(undefined ***)(puVar11 + 0x58) = ppuVar22;
    _objc_release(uVar12);
    _objc_release(ppuVar26);
    if (*(undefined ***)(puVar11 + 0x10) != ppuVar4) {
      uVar12 = *(undefined8 *)(puVar11 + 0x18);
      *(undefined8 *)(puVar11 + 0x18) = 0;
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(puVar11 + 0x20);
      *(undefined8 *)(puVar11 + 0x20) = 0;
      _objc_release(uVar12);
      _objc_retain(ppuVar4);
      uVar12 = *(undefined8 *)(puVar11 + 0x10);
      *(undefined ***)(puVar11 + 0x10) = ppuVar4;
      _objc_release(uVar12);
    }
    ppuVar26 = ppuVar21;
    func_0x000107b27f14(ppuVar21,ppuVar24,in_x4);
    if (((ulong)ppuVar26 & 1) == 0) {
      lVar13 = *(long *)(puVar11 + 0x30);
      func_0x000107a59624();
      if (lVar13 != 0x1c) {
        uVar14 = *(ulong *)(puVar11 + 0x10);
        func_0x00010853a378();
        if (((uVar14 & 1) == 0) && (lVar13 != 0x1a)) {
          uVar14 = *(ulong *)(puVar11 + 0x10);
          func_0x000108539d58();
          if ((uVar14 & 1) == 0) {
            func_0x00010853a244();
          }
        }
      }
      iVar2 = (int)*(undefined8 *)(puVar11 + 0x10);
      func_0x00010853b70c();
      if (iVar2 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(puVar11 + 0x10);
        uVar15 = *(undefined8 *)(puVar11 + 0x28);
        func_0x00010c2923e0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010853acb4(uVar12,uVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
      }
      puVar23 = PTR_PTR_1126b1a18;
      _objc_alloc();
      puVar25 = puVar11 + 0x40;
      _objc_loadWeakRetained(puVar25);
      puVar3 = puVar25;
      func_0x00010c27f040();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0f1880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2220();
      puVar6 = PTR_PTR_1126b2cf0;
      func_0x00010bf4f080(PTR_PTR_1126b2cf0);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = in_x4;
      func_0x00010c0e00e0(in_x4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c048740();
      _objc_release(uVar14);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar25);
      puVar25 = PTR_PTR_1126b2330;
      func_0x00010c0e9c40(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar26 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar25);
      ppuVar22 = ppuVar21;
      if ((int)ppuVar26 == 0) {
        puVar25 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar26 = ppuVar21;
        func_0x00010c0720c0();
        if ((int)ppuVar26 == 0) {
          puVar3 = PTR_PTR_1126b2ea8;
          func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
          _objc_retainAutoreleasedReturnValue();
          ppuVar26 = ppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          _objc_release(puVar25);
          if ((int)ppuVar26 != 0) goto code_r0x000107970df4;
          puVar25 = PTR_PTR_1126b2d30;
          func_0x00010bf940a0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          ppuVar26 = ppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar25);
          if ((int)ppuVar26 != 0) {
            puVar25 = puVar11 + 0x40;
            _objc_loadWeakRetained(puVar25);
            puVar3 = puVar25;
            func_0x00010c2bf380();
            _objc_retainAutoreleasedReturnValue();
            puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_208 = 0xc2000000;
            puStack_200 = &UNK_10797192c;
            puStack_1f8 = &UNK_110842e18;
            puStack_1f0 = puVar11;
            func_0x00010c2bf1c0();
            _objc_release(puVar3);
            _objc_release(puVar25);
            goto code_r0x000107970bd0;
          }
          puVar25 = PTR_PTR_1126b2d30;
          func_0x00010c15c9e0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          ppuVar26 = ppuVar21;
          func_0x00010c0720c0();
          if (((ulong)ppuVar26 & 1) == 0) {
            puVar3 = PTR_PTR_1126b2d30;
            func_0x00010c22a700(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            ppuVar26 = ppuVar21;
            func_0x00010c0720c0();
            if ((int)ppuVar26 != 0) {
              _objc_release(puVar3);
              goto code_r0x000107971128;
            }
            puVar5 = PTR_PTR_1126b2d30;
            func_0x00010bf52060(PTR_PTR_1126b2d30);
            ppuVar26 = ppuVar21;
            func_0x00010c0720c0();
            _objc_release(puVar5);
            _objc_release(puVar3);
            _objc_release(puVar25);
            if (((ulong)ppuVar26 & 1) == 0) goto code_r0x000107970bd0;
          }
          else {
code_r0x000107971128:
            _objc_release(puVar25);
          }
          puVar25 = puVar11 + 0x40;
          _objc_loadWeakRetained(puVar25);
          puVar3 = puVar25;
          func_0x00010c27f040();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c27f020();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c2a71e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = ppuVar24;
          func_0x000107dd9cf0(ppuVar24,puVar7);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(puVar25);
          if (((ulong)ppuVar22 & 1) == 0) goto code_r0x000107970bd0;
        }
        else {
          _objc_release(puVar25);
code_r0x000107970df4:
          if (((*(long *)(puVar11 + 0x30) != 7) &&
              (ppuVar26 = ppuVar4, func_0x000108539a68(), ((ulong)ppuVar26 & 1) == 0)) &&
             ((0x13 < *(long *)(puVar11 + 0x30) - 0x54U ||
              ((1L << (*(long *)(puVar11 + 0x30) - 0x54U & 0x3f) & 0x80021U) == 0)))) {
            puVar25 = puVar11 + 0x40;
            _objc_loadWeakRetained(puVar25);
            puVar3 = puVar25;
            func_0x00010c2bf380();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2bf1c0();
            _objc_release(puVar3);
            _objc_release(puVar25);
            func_0x00010be11480(puVar11);
            ppuVar26 = ppuVar4;
            func_0x00010853959c();
            if (((((ulong)ppuVar26 & 1) != 0) ||
                (ppuVar26 = ppuVar4, func_0x000108539930(), (int)ppuVar26 != 0)) &&
               (*(long *)(puVar11 + 0x30) == 0x2b)) {
              func_0x00010be10ae0(puVar11);
            }
            goto code_r0x000107970bd0;
          }
        }
        goto code_r0x00010797146c;
      }
      ppuVar26 = ppuVar24;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar26;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar16;
      func_0x00010c067fc0();
      *(undefined ***)(puVar11 + 0x30) = ppuVar17;
      _objc_release(ppuVar16);
      _objc_release(ppuVar26);
      puVar11[0x16a] = 0;
code_r0x000107970bd0:
      puVar25 = PTR_PTR_1126b2d30;
      func_0x00010c15c9e0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar26 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar25);
      if ((int)ppuVar26 == 0) {
        puVar25 = PTR_PTR_1126b2d30;
        func_0x00010bf52060(PTR_PTR_1126b2d30);
        ppuVar26 = ppuVar21;
        func_0x00010c0720c0();
        _objc_release(puVar25);
        if ((int)ppuVar26 == 0) {
          puVar25 = PTR_PTR_1126b2d30;
          func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          ppuVar26 = ppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar25);
          if ((int)ppuVar26 == 0) {
            puVar25 = PTR_PTR_1126b2d30;
            func_0x00010c149e20(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            ppuVar26 = ppuVar21;
            func_0x00010c0720c0();
            _objc_release(puVar25);
            if ((int)ppuVar26 == 0) {
              puVar25 = PTR_PTR_1126b2d30;
              func_0x00010c22a700(PTR_PTR_1126b2d30);
              _objc_retainAutoreleasedReturnValue();
              ppuVar26 = ppuVar21;
              func_0x00010c0720c0();
              _objc_release(puVar25);
              if ((int)ppuVar26 == 0) {
                puVar25 = PTR_PTR_1126b2d30;
                func_0x00010c0dc460(PTR_PTR_1126b2d30);
                _objc_retainAutoreleasedReturnValue();
                ppuVar26 = ppuVar21;
                func_0x00010c0720c0();
                if (((ulong)ppuVar26 & 1) == 0) {
                  ppuVar26 = ppuVar21;
                  func_0x00010c0720c0();
                  _objc_release(puVar25);
                  if (((ulong)ppuVar26 & 1) == 0) {
                    puVar25 = PTR_PTR_1126b2338;
                    func_0x00010c23c600(PTR_PTR_1126b2338);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar26 = ppuVar21;
                    func_0x00010c0720c0();
                    _objc_release(puVar25);
                    if ((int)ppuVar26 == 0) {
                      puVar25 = PTR_PTR_1126b2338;
                      func_0x00010c23c620(PTR_PTR_1126b2338);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar26 = ppuVar21;
                      func_0x00010c0720c0();
                      _objc_release(puVar25);
                      if ((int)ppuVar26 == 0) {
                        puVar25 = PTR_PTR_1126b2338;
                        func_0x00010c0f60e0(PTR_PTR_1126b2338);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar26 = ppuVar21;
                        func_0x00010c0720c0();
                        _objc_release(puVar25);
                        if ((int)ppuVar26 == 0) {
                          puVar25 = PTR_PTR_1126b2338;
                          func_0x00010c13d9e0(PTR_PTR_1126b2338);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar26 = ppuVar21;
                          func_0x00010c0720c0();
                          _objc_release(puVar25);
                          if ((int)ppuVar26 == 0) {
                            uVar14 = *(ulong *)(puVar11 + 0x10);
                            func_0x000108539a68();
                            if ((uVar14 & 1) == 0) {
                              uVar14 = *(ulong *)(puVar11 + 0x10);
                              func_0x00010853a0e0();
                              if ((uVar14 & 1) != 0) goto code_r0x000107971728;
                              iVar2 = (int)*(undefined8 *)(puVar11 + 0x10);
                              func_0x00010853a704();
                              if (iVar2 == 0) goto code_r0x00010797146c;
                              ppuVar22 = *(undefined ***)(puVar11 + 0xf8);
                              func_0x00010c269d40();
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar26 = ppuVar22;
                              func_0x00010bf1f3c0();
                              if ((int)ppuVar26 != 0) {
                                bVar1 = true;
                                goto code_r0x00010797172c;
                              }
                            }
                            else {
code_r0x000107971728:
                              bVar1 = false;
code_r0x00010797172c:
                              if ((((puVar11[0x168] & 1) == 0) && ((puVar11[0x169] & 1) == 0)) &&
                                 ((puVar11[0x16a] & 1) == 0)) {
                                puVar25 = puVar11 + 0x40;
                                _objc_loadWeakRetained();
                                puVar3 = puVar25;
                                func_0x00010c27f040();
                                _objc_retainAutoreleasedReturnValue();
                                puVar5 = puVar3;
                                func_0x00010c27f020();
                                _objc_retainAutoreleasedReturnValue();
                                puVar6 = puVar5;
                                func_0x00010c29bf00();
                                _objc_retainAutoreleasedReturnValue();
                                puVar7 = puVar6;
                                func_0x00010c2a71e0();
                                _objc_retainAutoreleasedReturnValue();
                                if (puVar7 == (undefined *)0x0) {
                                  ppuVar26 = (undefined **)0x0;
                                }
                                else {
                                  puVar8 = PTR_PTR_1126b2ea8;
                                  func_0x00010c268600(PTR_PTR_1126b2ea8);
                                  _objc_retainAutoreleasedReturnValue();
                                  ppuVar26 = ppuVar21;
                                  func_0x00010c0720c0();
                                  _objc_release(puVar8);
                                }
                                _objc_release(puVar7);
                                _objc_release(puVar6);
                                _objc_release(puVar5);
                                _objc_release(puVar3);
                                _objc_release(puVar25);
                                if (bVar1) {
                                  _objc_release(ppuVar22);
                                  if (((ulong)ppuVar26 & 1) != 0) {
code_r0x000107971868:
                                    puVar25 = PTR_PTR_1126c3320;
                                    func_0x00010c0729e0();
                                    if (((ulong)puVar25 & 1) == 0) {
                                      _objc_initWeak(auStack_218,puVar11);
                                      uVar15 = *(undefined8 *)(puVar11 + 0x170);
                                      _objc_copyWeak(auStack_220,auStack_218);
                                      _objc_retain(puVar23);
                                      func_0x00010c0f7fc0(uVar15);
                                      _objc_release(puVar23);
                                      _objc_destroyWeak(auStack_220);
                                      _objc_destroyWeak(auStack_218);
                                    }
                                  }
                                }
                                else if ((int)ppuVar26 != 0) goto code_r0x000107971868;
                                goto code_r0x00010797146c;
                              }
                              if (!bVar1) goto code_r0x00010797146c;
                            }
                            _objc_release(ppuVar22);
                          }
                          else {
                            puVar11[0x169] = 0;
                          }
                        }
                        else {
                          puVar11[0x169] = 1;
                        }
                      }
                      else {
                        puVar11[0x168] = 0;
                      }
                    }
                    else {
                      puVar11[0x168] = 1;
                    }
                    goto code_r0x00010797146c;
                  }
                }
                else {
                  _objc_release(puVar25);
                }
                ppuVar26 = ppuVar4;
                func_0x00010bf5b080();
                _objc_retainAutoreleasedReturnValue();
                ppuVar22 = ppuVar26;
                func_0x00010bf5b440();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar26);
                ppuVar26 = ppuVar22;
                func_0x00010c08fa60();
                if (ppuVar26 == (undefined **)0x0) {
                  _objc_release(ppuVar22);
                }
                else {
                  func_0x00010be2cf20(puVar11);
                  _objc_release(ppuVar22);
                }
              }
              else {
                if (in_x4 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar19 = in_x4;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar25 = PTR_PTR_1126d52f8;
                  _objc_opt_class(PTR_PTR_1126d52f8);
                  uVar20 = uVar19;
                  _objc_opt_isKindOfClass(uVar19,puVar25);
                  uVar14 = uVar19;
                  if ((uVar20 & 1) == 0) {
                    uVar14 = 0;
                  }
                  _objc_retain(uVar14);
                  _objc_release(uVar19);
                }
                uVar18 = *(undefined8 *)(puVar11 + 0x10);
                func_0x00010bf5b080(uVar18);
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar18;
                func_0x00010bf5bc00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010beb1c20(puVar11);
                _objc_release(uVar15);
                _objc_release(uVar18);
                _objc_release(uVar14);
              }
            }
            else {
              puVar25 = puVar11 + 0x40;
              _objc_loadWeakRetained(puVar25);
              puVar3 = puVar25;
              func_0x00010bf99b80();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_1e8 = &PTR____CFConstantStringClassReference_110df81b8;
              uVar15 = *(undefined8 *)(puVar11 + 0x10);
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              uStack_1e0 = uVar15;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0eb7c0(puVar3);
              _objc_release(puVar5);
              _objc_release(uVar15);
              _objc_release(puVar3);
              _objc_release(puVar25);
            }
          }
          else {
            func_0x00010c0e00e0(in_x4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            func_0x000108f48354(*(undefined8 *)(puVar11 + 0xe8));
            func_0x00010bdfa520(puVar11);
          }
        }
        else {
          func_0x00010be279e0(puVar11);
        }
      }
      else {
        uVar15 = *(undefined8 *)(puVar11 + 400);
        *(undefined8 *)(puVar11 + 400) = 0;
        _objc_release(uVar15);
        puVar25 = puVar11;
        func_0x00010bdd9d80();
        if ((int)puVar25 != 0) {
          uVar18 = *(undefined8 *)(puVar11 + 0x70);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar18;
          func_0x00010c07f560();
          _objc_release(uVar18);
          if ((int)uVar15 != 0) {
            uVar14 = *(ulong *)(puVar11 + 8);
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            puVar25 = PTR_PTR_1126b2d20;
            func_0x00010c24afc0(PTR_PTR_1126b2d20);
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar25);
            _objc_release(uVar14);
            puVar25 = PTR_PTR_1126ae720;
            _objc_opt_class(PTR_PTR_1126ae720);
            uVar20 = uVar19;
            _objc_opt_isKindOfClass(uVar19,puVar25);
            uVar14 = uVar19;
            if ((uVar20 & 1) == 0) {
              uVar14 = 0;
            }
            _objc_retain(uVar14);
            _objc_release(uVar19);
            uVar19 = uVar14;
            func_0x00010c269d40(uVar14);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar14);
            uVar15 = *(undefined8 *)(puVar11 + 0x70);
            func_0x00010c269d40(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1075e0();
            _objc_release(uVar15);
            _objc_release(uVar19);
          }
        }
        uVar14 = *(ulong *)(puVar11 + 0x10);
        func_0x000108539a68();
        if ((uVar14 & 1) == 0) {
          uVar14 = *(ulong *)(puVar11 + 0x10);
          func_0x00010853a378();
          if ((uVar14 & 1) != 0) goto code_r0x000107971250;
          uVar14 = *(ulong *)(puVar11 + 0x10);
          func_0x00010853a0e0();
          if ((uVar14 & 1) != 0) goto code_r0x000107971250;
          iVar2 = (int)*(undefined8 *)(puVar11 + 0x10);
          func_0x00010853a704();
          if (iVar2 != 0) goto code_r0x000107971250;
          puVar25 = (undefined *)0x0;
        }
        else {
code_r0x000107971250:
          puVar25 = puVar11;
          func_0x00010be1bc40(puVar11);
          _objc_retainAutoreleasedReturnValue();
        }
        ppuVar26 = ppuVar24;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar26;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar26);
        puVar3 = PTR_PTR_1126d5878;
        _objc_opt_class(PTR_PTR_1126d5878);
        ppuVar16 = ppuVar22;
        _objc_opt_isKindOfClass(ppuVar22,puVar3);
        ppuVar26 = ppuVar22;
        if (((ulong)ppuVar16 & 1) == 0) {
          ppuVar26 = (undefined **)0x0;
        }
        _objc_retain(ppuVar26);
        _objc_release(ppuVar22);
        ppuVar22 = ppuVar26;
        func_0x00010c291960();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar26);
        ppuVar26 = ppuVar22;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar22);
        if (ppuVar26 == (undefined **)0x0) {
          puStack_270 = PTR____NSArray0__struct_11034ab48;
        }
        else {
          puStack_270 = PTR__OBJC_CLASS___NSArray_1126ae530;
          ppuStack_1d8 = ppuVar26;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar3 = PTR_PTR_1126b5bf0;
        func_0x00010c0ca740(PTR_PTR_1126b5bf0);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = in_x4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        uVar19 = uVar14;
        func_0x00010bf529e0();
        if (uVar19 != 0) {
          puVar3 = puStack_270;
          func_0x00010bf09f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puStack_270);
          puStack_270 = puVar3;
        }
        puVar3 = puVar11 + 0x40;
        _objc_loadWeakRetained(puVar3);
        puVar5 = puVar3;
        func_0x00010c27f040();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0f1880();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = *(undefined8 *)(puVar11 + 0x10);
        func_0x00010bf5b080(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar18;
        func_0x00010bf5bc00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be47a80(puVar11);
        _objc_release(uVar15);
        _objc_release(uVar18);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar3);
        puVar11[0x16a] = 1;
        _objc_release(uVar14);
        _objc_release(puStack_270);
        _objc_release(ppuVar26);
        _objc_release(puVar25);
      }
code_r0x00010797146c:
      _objc_release(puVar23);
      _objc_release(uVar12);
    }
  }
  _objc_release(ppuVar4);
code_r0x00010797148c:
  _objc_release(in_x4);
  _objc_release(ppuVar24);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar4 + 5);
  _objc_destroyWeak(auStack_218);
  __Unwind_Resume();
  puVar23 = *(undefined **)(ppuVar21[4] + 0x10);
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010c27dd80();
  puVar25 = puVar25 + 1;
  if (((puVar25 < (undefined *)0x1c && (1L << ((ulong)puVar25 & 0x3f) & 0xb4b5dbbU) != 0) &&
      puVar25 < (undefined *)0x1b) && (1L << ((ulong)puVar25 & 0x3f) & 0x6c6bd77U) != 0) {
    _objc_release(puVar23);
    puVar23 = ppuVar21[4] + 0x40;
    _objc_loadWeakRetained(puVar23);
    puVar25 = puVar23;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13c000();
    _objc_release(puVar25);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar23);
  return;
}



/* Entry: 107971f40; end: 107972217; -[SCStoriesSharingSession _screenshotSharingConfigurationForSnapchatter:attribution:] */

void FUN_107971f40(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uStack_74;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x000108539a68();
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010853a704();
  uVar3 = uVar2;
  if ((uVar1 & 1) == 0) {
    uStack_74 = 7;
    func_0x000107979a18();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_74 = 6;
    func_0x000107979a30();
    _objc_retainAutoreleasedReturnValue();
  }
  if ((uVar2 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf1f3c0();
    _objc_release(uVar12);
    if ((int)uVar13 == 0) {
      lVar14 = 0;
      goto LAB_10797202c;
    }
    uVar13 = 1;
  }
  else {
    uVar13 = 4;
  }
  uVar12 = 2;
  if ((int)uVar1 == 0) {
    uVar12 = uVar13;
  }
  lVar14 = param_1;
  func_0x00010be1bc40(param_1,param_2,uVar12,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_10797202c:
  puVar4 = PTR_PTR_1126b43b0;
  _objc_alloc(PTR_PTR_1126b43b0);
  lVar5 = param_3;
  func_0x00010bf5b820(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b1e0(puVar4,param_2,lVar6,lVar8,lVar10,0);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar11 = PTR_PTR_1126b43b8;
  _objc_alloc(PTR_PTR_1126b43b8);
  lVar5 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  if (lVar5 == 0) {
    lVar6 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf5b080(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0538c0(puVar11,param_2,uVar3,lVar6,0,lVar14,puVar4,uVar13,2,0x51,9,3,5,uStack_74);
  _objc_release(uVar13);
  _objc_release(uVar12);
  if (lVar5 == 0) {
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar14);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107972d54; end: 107972e4f;  */

undefined8 FUN_107972d54(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((((((param_1 - 0x49U < 0x1a) && ((1L << (param_1 - 0x49U & 0x3f) & 0x2020001U) != 0)) ||
        (uVar1 = param_1 - 0x57U >> 1,
        (uVar1 | param_1 - 0x57U << 0x3f) < 8 && (1L << (uVar1 & 0x3f) & 0xb1U) != 0)) &&
       (uVar1 = param_3, func_0x000108faa838(), (uVar1 & 1) != 0)) ||
      ((lVar2 = param_1, func_0x000108f4b978(), (int)lVar2 != 0 &&
       (uVar1 = param_3, func_0x000108faa84c(), (uVar1 & 1) != 0)))) ||
     ((func_0x000108534b70(), (int)param_1 != 0 &&
      ((uVar1 = param_3, func_0x000108faa874(), (uVar1 & 1) != 0 ||
       (((param_2 != 0 && (lVar2 = param_2, func_0x00010853b70c(), (int)lVar2 != 0)) &&
        (uVar1 = param_3, func_0x000108faa860(), (uVar1 & 1) != 0)))))))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 107973ba0; end: 107973d1f; -[SCStoriesSharingSession _getGenAIWatermarkProfile] */

void FUN_107973ba0(long param_1,undefined8 param_2,undefined8 *param_3,undefined *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long unaff_x23;
  long lVar16;
  undefined *unaff_x24;
  undefined *puVar17;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined1 auStack_368 [8];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined **ppuStack_300;
  long lStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined8 *puStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined1 **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined2 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined8 *puStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar4 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c0c5b00();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_110;
    param_4 = auStack_c8;
    lVar4 = lVar2;
    func_0x00010bf52a60();
    puVar15 = (undefined *)0x0;
    if (lVar4 != 0) {
      lVar13 = *plStack_100;
      do {
        lVar14 = 0;
        do {
          if (*plStack_100 != lVar13) {
            _objc_enumerationMutation(lVar2);
          }
          lVar3 = *(long *)(lStack_108 + lVar14 * 8);
          func_0x00010c067fc0();
          if (0xfffffffffffffffc < lVar3 - 8U) {
            puVar15 = PTR_PTR_1126b2488;
            _objc_alloc();
            uStack_120 = 1;
            uStack_118 = 1;
            uStack_128 = 1;
            uStack_130 = 2;
            param_3 = (undefined8 *)0x1;
            param_4 = (undefined *)0x0;
            func_0x00010c046300();
            goto LAB_107973cd8;
          }
          lVar14 = lVar14 + 1;
        } while (lVar4 != lVar14);
        param_3 = &uStack_110;
        param_4 = auStack_c8;
        lVar4 = lVar2;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
      puVar15 = (undefined *)0x0;
    }
LAB_107973cd8:
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puStack_138 = &UNK_107973d20;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  lVar13 = *(long *)(lVar2 + 0x10);
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(lVar2 + 0x10);
  func_0x00010853b70c();
  lVar4 = lVar13;
  if (iVar1 != 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    func_0x00010853c05c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    unaff_x23 = lVar4;
  }
  lVar13 = lVar4;
  func_0x00010c08fa60();
  if (lVar13 == 0) {
code_r0x000107973dd0:
    puVar15 = (undefined *)0x0;
  }
  else {
    unaff_x23 = *(long *)(lVar2 + 0x10);
    func_0x00010bf28a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (unaff_x23 != 0) goto code_r0x000107973dd0;
    _objc_initWeak(auStack_1c0,lVar2);
    puVar17 = PTR_PTR_1126ae720;
    puVar15 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f8 = 0xc2000000;
    puStack_1f0 = &UNK_1079741e8;
    puStack_1e8 = &UNK_1109f2370;
    puStack_1c8 = param_3;
    _objc_copyWeak(auStack_1d0,auStack_1c0);
    _objc_retain(lVar4);
    lStack_1e0 = lVar4;
    lStack_1d8 = lVar2;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(lVar2 + 0x10);
    puStack_278 = puVar17;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = lVar13;
    func_0x00010bf1f2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    lVar13 = unaff_x23;
    func_0x00010c08fa60();
    if (lVar13 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      func_0x0001004fa310();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bd348);
      lVar14 = lVar13;
      func_0x00010beecc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      lVar13 = lVar14;
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae720;
      puStack_238 = puVar15;
      uStack_230 = 0xc2000000;
      puStack_228 = &UNK_107974788;
      puStack_220 = &UNK_110914428;
      lStack_218 = lVar2;
      _objc_retain();
      lStack_210 = lVar13;
      _objc_retain(unaff_x23);
      lStack_208 = unaff_x23;
      func_0x00010bf11fe0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b2470;
      puStack_270 = puVar15;
      uStack_268 = 0xc2000000;
      puStack_260 = &UNK_107974b48;
      puStack_258 = &UNK_110870b20;
      lStack_250 = lVar2;
      _objc_retain(lVar13);
      lStack_248 = lVar13;
      _objc_retain(unaff_x23);
      lStack_240 = unaff_x23;
      func_0x00010c2adce0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126b2478;
      _objc_alloc(PTR_PTR_1126b2478);
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1b8 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021e80(puVar15);
      _objc_release(puVar17);
      puVar17 = PTR_PTR_1126b2490;
      _objc_alloc(PTR_PTR_1126b2490);
      uStack_280 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      func_0x00010c028f20();
      _objc_release(puVar15);
      _objc_release(puVar6);
      _objc_release(lStack_240);
      _objc_release(lStack_248);
      _objc_release(puVar5);
      _objc_release(lStack_208);
      _objc_release(lStack_210);
      _objc_release(lVar13);
      _objc_release(lVar14);
    }
    unaff_x24 = PTR_PTR_1126b2498;
    _objc_alloc();
    puVar7 = *(undefined8 **)(lVar2 + 0x10);
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar7;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_4;
    func_0x00010c15d5c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c037ea0();
    _objc_release(puVar15);
    _objc_release(param_3);
    _objc_release(puVar7);
    puVar15 = PTR_PTR_1126b0808;
    _objc_alloc();
    func_0x00010c051820();
    _objc_release(unaff_x24);
    _objc_release(puVar17);
    _objc_release(unaff_x23);
    _objc_release(puStack_278);
    _objc_release(lStack_1e0);
    _objc_destroyWeak(auStack_1d0);
    _objc_destroyWeak(auStack_1c0);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1d0);
  _objc_destroyWeak(auStack_1c0);
  puVar6 = param_4;
  __Unwind_Resume();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar17 = PTR_PTR_1126ae558;
  ppuVar9 = &puStack_3a0;
  puStack_2f0 = unaff_x24;
  lStack_2e8 = unaff_x23;
  puStack_2e0 = puVar15;
  puStack_2d8 = param_3;
  lStack_2d0 = lVar4;
  puStack_2c8 = param_4;
  ppuStack_2c0 = &puStack_140;
  puStack_2b8 = &UNK_1079741e8;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_338 = 0;
  puStack_330 = &uStack_338;
  uStack_328 = 0x3032000000;
  puStack_320 = &UNK_107973530;
  puStack_318 = &UNK_107973540;
  lStack_310 = 0;
  puStack_350 = &uStack_358;
  uStack_358 = 0;
  uStack_348 = 0x2020000000;
  uStack_340 = 0;
  lVar4 = *(long *)(puVar6 + 0x38);
  if (lVar4 < 3) {
    if (lVar4 == 1) {
code_r0x0001079742bc:
      puVar15 = puVar6 + 0x30;
      _objc_loadWeakRetained();
      puVar8 = puVar15;
      func_0x00010be1e240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      puStack_3a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_398 = 0xc2000000;
      puStack_390 = &UNK_10797459c;
      puStack_388 = &UNK_1109f2340;
      uStack_360 = *(undefined8 *)(puVar6 + 0x38);
      puStack_378 = &uStack_338;
      uVar12 = *(undefined8 *)(puVar6 + 0x20);
      _objc_retain(uVar12);
      puStack_370 = &uStack_358;
      uStack_380 = uVar12;
      _objc_copyWeak(auStack_368,puVar6 + 0x30);
      puVar15 = puVar8;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_368);
      _objc_release(uStack_380);
    }
    else {
      if (lVar4 == 2) {
        func_0x000107d51d8c();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = (undefined **)puVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = (undefined *)ppuVar9;
        func_0x00010bfbf840();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = 1;
        goto code_r0x000107974454;
      }
code_r0x000107974370:
      puVar8 = *(undefined **)(puVar6 + 0x28);
      _objc_opt_class(puVar8);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_308 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_300 = &PTR____CFConstantStringClassReference_110ea72d8;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar17;
      func_0x00010bfe9c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar6);
      ppuVar9 = (undefined **)puVar17;
    }
  }
  else {
    if (lVar4 != 3) {
      if (lVar4 != 4) goto code_r0x000107974370;
      goto code_r0x0001079742bc;
    }
    func_0x000107d51d8c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined **)puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = (undefined *)ppuVar9;
    func_0x00010bfbf860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = 10;
code_r0x000107974454:
    uVar10 = puStack_330[5];
    puStack_330[5] = puVar15;
    _objc_release(uVar10);
    _objc_release(ppuVar9);
    _objc_release(puVar6);
    puStack_350[3] = uVar12;
    puVar8 = PTR_PTR_1126b0800;
    _objc_alloc(PTR_PTR_1126b0800);
    uVar12 = puStack_330[5];
    func_0x00010beec820(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051840(puVar8);
    _objc_release(uVar12);
    puVar15 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar8);
  __Block_object_dispose(&uStack_358,8);
  __Block_object_dispose(&uStack_338,8);
  lVar4 = lStack_310;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined *)((long)ppuVar9 + 0x38));
    __Block_object_dispose(&uStack_358,8);
    lVar13 = 8;
    __Block_object_dispose(&uStack_338);
    __Unwind_Resume();
    lVar2 = lVar13;
    _objc_retain();
    if (*(long *)(lVar4 + 0x40) == 1) {
      func_0x000107d51d8c();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar13;
      func_0x00010c294420(lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar14;
      func_0x00010bfbf8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(*(long *)(lVar4 + 0x28) + 8);
      uVar12 = *(undefined8 *)(lVar11 + 0x28);
      *(long *)(lVar11 + 0x28) = lVar3;
      _objc_release(uVar12);
      uVar12 = 3;
    }
    else {
      lVar2 = lVar4 + 0x38;
      _objc_loadWeakRetained();
      lVar14 = lVar13;
      func_0x00010c294420(lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010be9a5a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(*(long *)(lVar4 + 0x28) + 8);
      lVar16 = *(long *)(lVar11 + 0x28);
      *(long *)(lVar11 + 0x28) = lVar3;
      uVar12 = 4;
    }
    _objc_release(lVar16);
    _objc_release(lVar14);
    _objc_release(lVar2);
    *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x30) + 8) + 0x18) = uVar12;
    lVar2 = lVar13;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar2;
    func_0x00010c08fa60();
    lVar3 = lVar13;
    if (lVar14 == 0) {
      func_0x00010c294420(lVar13);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf85d80(lVar13);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
    puVar15 = PTR_PTR_1126b0800;
    _objc_alloc(PTR_PTR_1126b0800);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x28) + 8) + 0x28);
    func_0x00010beec820(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051840(puVar15);
    _objc_release(uVar12);
    _objc_release(lVar3);
    _objc_release(lVar13);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 107974b44; end: 107974b47;  */

void FUN_107974b44(void)

{
  return;
}



/* Entry: 107975160; end: 10797532f; -[SCStoriesSharingSession _updateStoryScorePropertyWithUserId:friendScore:] */

void FUN_107975160(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf5b080(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar7);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar1 != 0) {
    if (param_4 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = *(undefined **)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar2;
    }
    else {
      func_0x00010c150c20(param_4);
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar2;
      _objc_release(uVar5);
    }
    _objc_release(puVar6);
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288420(lVar3);
    _objc_release(uVar5);
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_4 + 0xb0);
  func_0x00010bfe63a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
  _objc_release(uVar5);
  func_0x00010bdfd560(param_4);
  uVar5 = *(undefined8 *)(param_4 + 0xb8);
  *(undefined8 *)(param_4 + 0xb8) = 0;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010be8d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s__removeSpotlightSnapDownloadResu_112580ee8);
  return;
}



/* Entry: 107975ad0; end: 1079763eb; -[SCStoriesSharingSession _sendStoryShareToRecipients:stories:businessIds:mischiefs:additionalText:sendToSessionId:] */

void FUN_107975ad0(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puStack_e8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (((lVar2 == 0) && (lVar2 = param_6, func_0x00010bf529e0(), param_4 == 0)) && (lVar2 == 0))
  goto LAB_10797639c;
  puVar7 = PTR_PTR_1126afca8;
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1f218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  func_0x00010be9ef40(param_1);
  puVar6 = *(undefined **)(param_1 + 0x58);
  func_0x000108536f70();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar4);
    _objc_release(puVar7);
LAB_107975fc8:
    lVar2 = param_6;
    func_0x000107e327dc(param_6,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108605534();
    func_0x00010bf529e0();
    uVar13 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bfe63a0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar15;
    func_0x00010c246920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    uVar12 = param_8;
    _objc_retain(param_8);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar11);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar15);
    _objc_release(uVar13);
    uVar8 = param_4;
    func_0x00010846b590();
    if ((((uVar8 & 1) != 0) || (lVar16 = param_5, func_0x00010bf529e0(), lVar16 != 0)) &&
       (lVar16 = param_1, func_0x00010bdd9d80(), (int)lVar16 != 0)) {
      uVar15 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0c5340(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb1f60(param_1);
      _objc_release(uVar15);
    }
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(lVar2);
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x10);
    func_0x00010853b70c();
    _objc_release(puVar4);
    _objc_release();
    if ((uVar8 & 1) != 0) goto LAB_107975fc8;
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126becf8);
    puVar4 = puVar7;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b1a38;
    _objc_alloc();
    func_0x00010c03d5c0();
    puVar5 = PTR_PTR_1126b1a58;
    _objc_opt_new();
    puVar9 = puVar6;
    func_0x00010bfe9ee0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar5);
    _objc_release(puVar10);
    _objc_release(puVar9);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
    func_0x000108538ba0();
    if (iVar1 == 0) {
      uVar8 = *(ulong *)(param_1 + 0x10);
      func_0x00010853a244();
      if ((uVar8 & 1) == 0) {
        func_0x00010853a0e0();
      }
      puVar9 = PTR_PTR_1126be938;
      _objc_alloc();
      puVar10 = puVar6;
      func_0x00010bf45460();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001085330a8();
      uVar13 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar13;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108534aa8();
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c25c580();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar6;
      func_0x00010bf45460();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04dc60();
      _objc_release(puVar17);
      _objc_release(puVar18);
      _objc_release(uVar14);
      _objc_release(uVar15);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(puVar10);
      puStack_e8 = puVar4;
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puStack_e8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = *(undefined **)(param_1 + 0x10);
      func_0x00010c15f2e0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22b020(puVar10);
    }
    else {
      puVar9 = PTR_PTR_1126be938;
      _objc_alloc();
      puVar10 = puVar6;
      func_0x00010bf45460();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001085330a8();
      uVar13 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar13;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108534aa8();
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c25c580();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar6;
      func_0x00010bf45460();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04dc60();
      _objc_release(puVar17);
      _objc_release(puVar18);
      _objc_release(uVar14);
      _objc_release(uVar15);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(puVar10);
      puStack_e8 = PTR_PTR_1126b5be0;
      _objc_alloc();
      puVar10 = puVar6;
      func_0x00010bf45460(puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c15f2e0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000b80();
      _objc_release(uVar15);
      _objc_release(puVar10);
      puVar10 = puVar4;
      func_0x00010bfe63a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf5b080(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar11;
      func_0x00010bf5b1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108534ac8(*(undefined8 *)(param_1 + 0x30));
      func_0x00010c22ae20(puVar18);
      _objc_release(uVar15);
      _objc_release(uVar11);
    }
    _objc_release(puVar18);
    _objc_release(puVar10);
    _objc_release(puStack_e8);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  _objc_release(puVar6);
LAB_10797639c:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107976e8c; end: 10797705f;  */

void FUN_107976e8c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
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
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_68;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x000100bf119c();
  if ((uVar4 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010901c5ac();
    if ((uVar4 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010901c618();
      if ((uVar4 & 1) == 0) {
        iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
        func_0x000108539018();
        uStack_68 = 2;
        if (iVar3 != 0) {
          uStack_68 = 3;
        }
        goto LAB_107976f04;
      }
    }
    uStack_68 = 1;
  }
  else {
    uStack_68 = 0;
  }
LAB_107976f04:
  uVar13 = 5;
  if (param_2 != 2) {
    uVar13 = 1;
  }
  uVar14 = 4;
  if (param_2 != 3) {
    uVar14 = uVar13;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001085330a8();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010c15f2e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010bf5b080(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(lVar15 + 0x180);
  uVar10 = *(undefined8 *)(lVar15 + 0x30);
  func_0x000108534aa8(uVar10);
  uVar1 = *(undefined8 *)(lVar15 + 0x150);
  uVar11 = *(undefined8 *)(lVar15 + 0x158);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bfb8ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108605188(uVar13,uVar2,uVar6,uVar7,uVar9,uVar16,uStack_68,uVar10,uVar1,uVar12,uVar14,
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x188));
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = uVar13;
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107977984; end: 107977a6b; -[SCStoriesSharingSession _canPostToStories] */

uint FUN_107977984(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010853a5d4();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000108539d58();
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c0b84a0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e16238,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27dd80();
  if (lVar5 + 1U < 0x1c && (1L << (lVar5 + 1U & 0x3f) & 0xd8de5fdU) != 0) {
    _objc_release(lVar4);
    uVar8 = 1;
  }
  else {
    _objc_release(lVar4);
    uVar6 = uVar3;
    func_0x00010c296d80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1f3c0();
    _objc_release(uVar6);
    uVar8 = (uint)uVar7 ^ 1;
  }
  _objc_release(uVar3);
  return uVar8;
}



/* Entry: 107978a58; end: 107978bbf; -[SCStoriesSharingSession _showOptInPrompt:] */

void FUN_107978a58(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar2);
    func_0x00010bfaa4c0(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x00010901d7c4(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107b00c44();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10797944c; end: 10797951b; -[SCStoriesSharingSession _removeSpotlightSnapDownloadResultIfNecessary] */

void FUN_10797944c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    lVar1 = param_1;
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bd348;
    _objc_opt_class(PTR_PTR_1126bd348);
    lVar3 = lVar1;
    func_0x00010beecc40(lVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_1109f2620);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c12c000();
    _objc_release(lVar4);
    if ((int)lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0xc0) = 0;
      _objc_release(uVar6);
    }
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 107979764; end: 107979793; -[SCStoriesSharingSession setCurrentStoryViewId:] */

void FUN_107979764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107979aec; end: 107979af3; -[SCDiscoverFeedActionHandlerStoryOpenContext initialCheetahStory] */

undefined8 FUN_107979aec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107979b7c; end: 107979b87; +[SCDiscoverFeedActionHandler announcerIdentifier] */

undefined ** FUN_107979b7c(void)

{
  return &PTR____CFConstantStringClassReference_110ea7378;
}



/* Entry: 10797aa64; end: 10797aa93; -[SCDiscoverFeedActionHandler setUserStoriesAdPrefetcher:] */

void FUN_10797aa64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10797c4e4; end: 10797c4e7; -[SCDiscoverFeedActionHandler didUpdateWithAnnouncerIdentifier:] */

void FUN_10797c4e4(void)

{
  return;
}



/* Entry: 10797c980; end: 10797c997;  */

void FUN_10797c980(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10797d650; end: 10797d793; -[SCDiscoverFeedActionHandler _storeNotificationDataWithActionModelParameters:cheetahStory:playFriendStoryActionDataModel:] */

void FUN_10797d650(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) {
LAB_10797d714:
    if (param_6 == 0) goto LAB_10797d76c;
    func_0x00010c0dcac0(param_6);
    *(undefined8 *)(param_2 + 0x1a8) = param_1;
    lVar3 = param_6;
    func_0x00010c0ebe20();
    *(char *)(param_2 + 0x1b8) = (char)lVar3;
    lVar3 = param_6;
    func_0x00010bf5ed80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c259580();
    func_0x000107a880a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x1b0);
    *(long *)(param_2 + 0x1b0) = lVar1;
    _objc_release(uVar2);
  }
  else {
    lVar3 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110eb62b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_10797d714;
    lVar3 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110eb62b8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c0b4ca0();
    *(double *)(param_2 + 0x1a8) = (double)lVar1;
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010c0794a0();
    *(char *)(param_2 + 0x1b8) = (char)lVar3;
    lVar1 = param_5;
    func_0x00010c25b720();
    func_0x000108f53b18();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_2 + 0x1b0);
    *(long *)(param_2 + 0x1b0) = lVar1;
  }
  _objc_release(lVar3);
LAB_10797d76c:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10797d98c; end: 10797d9af; -[SCDiscoverFeedActionHandler _friendStoriesViewLocation] */

undefined8 FUN_10797d98c(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010be411a0();
  uVar1 = 0x5b;
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  return uVar1;
}



/* Entry: 10797ddc8; end: 10797df13; -[SCDiscoverFeedActionHandler _handleDebugActionWithDebugHtml:] */

void FUN_10797ddc8(undefined1 *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x23;
  long unaff_x24;
  long lVar11;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined auStack_d8 [128];
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar10 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar10);
  puVar8 = auStack_d8;
  lVar11 = lVar10;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x24 = *plStack_110;
    unaff_x23 = lVar11;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(lVar10);
        }
        uVar3 = *(ulong *)(lStack_118 + lVar11 * 8);
        puVar9 = (undefined8 *)param_1;
        puVar8 = puVar2;
        func_0x00010bfd0140();
        if ((uVar3 & 1) != 0) goto LAB_10797dec4;
        lVar11 = lVar11 + 1;
      } while (unaff_x23 != lVar11);
      puVar8 = auStack_d8;
      unaff_x23 = lVar10;
      puVar9 = &uStack_120;
      func_0x00010bf52a60();
    } while (unaff_x23 != 0);
  }
LAB_10797dec4:
  _objc_release(lVar10);
  _objc_release(puVar2);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puStack_128 = &UNK_10797df14;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(puVar4 + 0x168);
  puVar5 = puVar4;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  lStack_150 = lVar10;
  puStack_148 = puVar2;
  puStack_140 = param_1;
  puStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  if (lVar11 != 0) {
    _objc_retain(puVar8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(puVar4 + 0x168));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126b3530;
    _objc_alloc();
    puVar2 = puVar4 + 0x238;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c038f40(puVar5,param_2,puVar2,1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c68b8;
    ppuStack_178 = &PTR____CFConstantStringClassReference_110dcad78;
    ppuStack_170 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cad80;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_170,&ppuStack_178
                        ,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d0a00(puVar2,param_2,puVar8,puVar6,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar6);
    puVar7 = *(undefined1 **)(puVar4 + 0x170);
    func_0x00010bf241c0(puVar7,param_2,puVar5,0,0,0,puVar2,0x13,0x5a,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    puVar9 = (undefined8 *)puVar7;
    func_0x00010bf9d620(*(undefined8 *)(puVar4 + 0x168));
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  iVar1 = (int)*(undefined8 *)(puVar5 + 0x198);
  func_0x00010c071800();
  if ((iVar1 != 0) &&
     (puVar7 = (undefined1 *)puVar9, func_0x00010c08fa60(), puVar7 != (undefined1 *)0x0)) {
    puVar2 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    puVar8 = puVar5 + 0x238;
    _objc_loadWeakRetained(puVar8);
    func_0x00010c038f40(puVar2,param_2,puVar8,1);
    _objc_release(puVar8);
    puVar4 = PTR_PTR_1126b5c08;
    _objc_alloc(PTR_PTR_1126b5c08);
    puVar8 = puVar5 + 0x238;
    _objc_loadWeakRetained(puVar8);
    func_0x00010c039140(puVar4,param_2,puVar8,puVar9,2,puVar2,puVar5);
    _objc_release(puVar8);
    func_0x00010c08b7c0(*(undefined8 *)(puVar5 + 0x198),param_2,puVar4,puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 10797e9f4; end: 10797edd7; -[SCDiscoverFeedActionHandler _playCheetahStories:withBaseView:initialCheetahStory:sectionKey:interactionContext:startingEntryEvent:actionIdentifier:itemSource:] */

void FUN_10797e9f4(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 in_stack_00000008;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = param_7;
  _objc_retain(param_3);
  uStack_a8 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf18ba0();
  puStack_b0 = puVar2;
  _objc_release(puVar1);
  puVar3 = *(undefined **)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c0fed80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010799a5f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010799ad20(param_5,param_3,puVar2,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_6;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c067ec0();
  _objc_release(puVar4);
  puVar10 = param_6;
  func_0x000107af9c1c(param_6,*(undefined8 *)(param_1 + 0x270));
  puVar5 = param_1;
  puStack_c8 = puVar10;
  func_0x00010be3fb00();
  uStack_c0 = in_stack_00000008;
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = param_6;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x000107bc72f8();
    _objc_release(puVar4);
    if (puVar1 != (undefined *)0x0) goto LAB_10797eb7c;
LAB_10797eb90:
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puStack_b0;
      func_0x00010bf95660();
      _objc_release(puVar2);
      uVar8 = uStack_a8;
      goto LAB_10797ed6c;
    }
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d0 = puVar10;
    puStack_78 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar4;
    puVar10 = puStack_d0;
  }
  else {
    puVar10 = (undefined *)0x1c;
    if (puVar1 == (undefined *)0x0) goto LAB_10797eb90;
LAB_10797eb7c:
    puVar5 = puVar1;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) goto LAB_10797eb90;
  }
  puStack_d0 = puVar10;
  puVar4 = puVar1;
  func_0x00010bfecde0();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc0000000;
  puStack_90 = &UNK_10799b018;
  puStack_88 = &UNK_1109f2f90;
  uStack_80 = 0;
  puVar5 = puVar1;
  func_0x00010bd86420(puVar1,&puStack_a0);
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (puVar4 != (undefined *)0x7fffffffffffffff) {
    puVar1 = puVar5;
    func_0x00010c0dfd40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = param_1;
  func_0x00010be3fb00();
  if (((ulong)puVar2 & 1) == 0) {
    puVar9 = param_1;
    func_0x00010be62540();
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  puVar4 = param_5;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uStack_a8;
  uStack_f8 = *(undefined8 *)(param_1 + 0x270);
  puStack_e0 = puStack_d0;
  uStack_e8 = 1;
  uStack_108 = uStack_b8;
  uStack_118 = 0xffffffffffffffff;
  uStack_110 = 0;
  uStack_120 = uStack_c0;
  puStack_128 = PTR____NSArray0__struct_11034ab48;
  puVar10 = puStack_c8;
  lStack_130 = param_3;
  puStack_100 = param_6;
  puStack_f0 = puVar9;
  func_0x00010be78160(param_1);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puVar5;
LAB_10797ed6c:
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar8);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_138 = &UNK_10797edd8;
  puStack_180 = puVar9;
  puStack_178 = puVar4;
  uStack_170 = uVar8;
  puStack_168 = puVar3;
  puStack_160 = param_6;
  puStack_158 = param_5;
  puStack_150 = puVar1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126d58c8;
  _objc_opt_new(PTR_PTR_1126d58c8);
  puVar4 = puVar10;
  func_0x00010bf5ed80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar10;
  func_0x00010c11f7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar9;
  if ((puVar4 != (undefined *)0x0) &&
     (puVar5 = puVar9, func_0x00010bf529e0(), puVar5 != (undefined *)0x0)) {
    puStack_188 = puVar9;
    func_0x00010797ef8c((long)*(int *)(lVar6 + 0x160),puVar4,&puStack_188,puVar10,0);
    puVar1 = puStack_188;
    _objc_retain(puStack_188);
    _objc_release(puVar9);
  }
  func_0x00010c21ca00(puVar2);
  lVar7 = *(long *)(lVar6 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    func_0x00010c21c280(puVar2);
  }
  else {
    uVar8 = 0;
    func_0x000107d00a80(0,*(undefined8 *)(lVar6 + 0x188),*(undefined8 *)(lVar6 + 200),
                        *(undefined8 *)(lVar6 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21c280(puVar2);
    _objc_release(uVar8);
  }
  _objc_release(lVar7);
  puVar9 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10797fc0c; end: 10797fd53;  */

void FUN_10797fc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x0001006372a4(param_1,&PTR___NSConcreteGlobalBlock_1109f2ac0);
  puVar1 = PTR_PTR_1126c2a60;
  _objc_alloc();
  func_0x00010c021fa0();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10798112c; end: 1079812b7; -[SCDiscoverFeedActionHandler _initOptInAndPlayMixedCarouselStoriesWithActionModel:baseView:showStoryReplyPopUp:] */

void FUN_10798112c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_5;
  func_0x00010bfef0c0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107982564; end: 1079826b3;  */

void FUN_107982564(long param_1,ulong param_2)

{
  char cVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c07fde0();
  if ((int)uVar3 == 0) {
    cVar1 = *(char *)(param_1 + 0x31);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x30);
  }
  if (cVar1 == '\x01') {
    uVar3 = param_2;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      uVar4 = param_2;
      func_0x00010bfddf20();
      uVar2 = (undefined1)uVar4;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107982e94; end: 107982fef; -[SCDiscoverFeedActionHandler _mixedCarouselStoriesPlaybackOverrideDictWithActionModel:isFromNotification:virtualSectionMapping:] */

void FUN_107982e94(undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27c440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_3;
    func_0x00010c0b3ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27c440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110eb6298);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (param_4 != 0) {
      lVar2 = param_3;
      func_0x00010c0b3ae0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c27c440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110f42398);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
  func_0x00010c1d0640(puVar1,param_2,param_5,&PTR____CFConstantStringClassReference_110f433f8);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107983d08; end: 107983d57; -[SCDiscoverFeedActionHandler didTapToPlayStory:sectionKey:baseView:] */

void FUN_107983d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010be74600(param_1,param_2,param_5,param_3,param_4,0xffffffffffffffff,7,0,0,
                      &PTR____CFConstantStringClassReference_110eb8ad8,0xffffffffffffffff,0);
  return;
}



/* Entry: 107984224; end: 1079842c3; -[SCDiscoverFeedActionHandler operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_107984224(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0xa8) = 0;
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0xb8);
  }
  _objc_retain(lVar2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x260;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eb3a0();
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x138) != 0) {
    func_0x00010c28b4e0(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107984fac; end: 107985403; -[SCDiscoverFeedActionHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_107984fac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x188);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2328;
  func_0x00010bf71400(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c067e20();
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (lVar3 == 3) {
    func_0x000107d005a8(param_4);
    uVar4 = *(ulong *)(param_1 + 200);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (uVar5 != 0) {
      uVar4 = uVar5;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar4;
      func_0x00010afef744();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar4);
      if ((uVar14 == 0) && (uVar4 = uVar5, func_0x00010c0741a0(), (uVar4 & 1) == 0)) {
        uVar4 = uVar5;
        func_0x00010bf3cd00();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar4;
        func_0x00010c2674a0();
        _objc_release(uVar4);
        if ((uVar14 & 1) == 0) {
          puVar2 = PTR_PTR_1126d58d0;
          _objc_alloc(PTR_PTR_1126d58d0);
          uVar4 = uVar5;
          func_0x00010bf3cd00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe2bc0();
          uVar14 = uVar5;
          func_0x00010bf3cd00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c236ac0();
          uVar6 = uVar5;
          func_0x00010bf3cd00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c231940();
          func_0x00010c01a720(puVar2);
          _objc_release(uVar6);
          _objc_release(uVar14);
          _objc_release(uVar4);
          puVar7 = PTR_PTR_1126c6d78;
          func_0x00010bf82080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2aa780();
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + 0xd0);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28a480(uVar8);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(uVar8);
          _objc_release(puVar7);
          _objc_release(puVar2);
        }
      }
    }
    _objc_release(uVar5);
  }
  func_0x00010bede820(param_1);
  lVar13 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar13);
  lVar3 = lVar13;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar2 = PTR_s_didFinishViewingPlaylistGroupDat_1125bb5a0;
  while (PTR_s_didFinishViewingPlaylistGroupDat_1125bb5a0 = puVar2, lVar3 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar13);
      }
      puVar7 = PTR_DAT_1126a4e80;
      uVar14 = *(ulong *)(lVar12 * 8);
      _objc_retain(uVar14);
      uVar4 = uVar14;
      func_0x00010010fab4(uVar14,puVar7);
      uVar5 = uVar14;
      if ((int)uVar4 == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar14);
      if ((uVar5 != 0) &&
         (uVar4 = uVar14, _objc_opt_respondsToSelector(uVar14,puVar2), (uVar4 & 1) != 0)) {
        func_0x00010bf76fe0(uVar14);
      }
      _objc_release(uVar5);
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    lVar3 = lVar13;
    func_0x00010bf52a60();
    puVar2 = PTR_s_didFinishViewingPlaylistGroupDat_1125bb5a0;
  }
  _objc_release(lVar13);
  lVar3 = param_1;
  func_0x00010be411a0();
  uVar5 = param_5;
  if ((int)lVar3 == 0) {
    puVar2 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    uVar4 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    if ((uVar4 & 1) == 0) goto LAB_1079853b8;
    func_0x000108535b00(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010799b478(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be30ce0(param_1);
  _objc_release(uVar5);
LAB_1079853b8:
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0eaf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107985420; end: 107985423; -[SCDiscoverFeedActionHandler playbackPresenterWillBeginAnimatingToDismiss:playbackScope:] */

void FUN_107985420(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eaff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterWillBeginAnimating_112618610);
  return;
}



/* Entry: 107985ac4; end: 107985ba3; -[SCDiscoverFeedActionHandler updateDismissBaseView:] */

void FUN_107985ac4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + 0x164) & 1) == 0) {
    if (param_4 == 0) {
      lVar1 = param_2 + 0x238;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMaxY();
      uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010bc8525c(uVar3,uVar4,uVar5,uVar6,param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c283ba0(*(undefined8 *)(param_2 + 0x280),param_3,0);
      func_0x00010c283c00(uVar3,uVar4,uVar5,uVar6,*(undefined8 *)(param_2 + 0x280));
    }
    else {
      func_0x00010c283ba0(*(undefined8 *)(param_2 + 0x280),param_3,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107985c88; end: 1079860b7; -[SCDiscoverFeedActionHandler removeContentForCreatorId:playlistItemController:] */

void FUN_107985c88(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10797c980;
  uStack_80 = 0x10797c990;
  uStack_78 = 0;
  puStack_100 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_10797c980;
  uStack_b0 = 0x10797c990;
  uStack_a8 = 0;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_1079860b8;
  puStack_e0 = &UNK_1109f2ae0;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_1079860f0;
  puStack_108 = &UNK_110842b58;
  puStack_c8 = puStack_100;
  puStack_98 = puStack_d8;
  func_0x00010c0bd820(*(undefined8 *)(param_1 + 0xa0));
  lVar1 = puStack_98[5];
  if (lVar1 == 0) {
    if (puStack_c8[5] == 0) goto LAB_107985ed0;
    puStack_180 = puVar3;
    uStack_178 = 0xc2000000;
    puStack_170 = &UNK_107986134;
    puStack_168 = &UNK_11084b9d0;
    _objc_retain(param_4);
    puStack_158 = &uStack_d0;
    lStack_160 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_180);
    lVar1 = lStack_160;
  }
  else {
    func_0x00010c25b720();
    if (lVar1 == 3) {
      _objc_retain(param_3);
      lVar1 = param_3;
    }
    else {
      lVar5 = puStack_98[5];
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    puStack_150 = puVar3;
    uStack_148 = 0xc2000000;
    puStack_140 = &UNK_107986128;
    puStack_138 = &UNK_110841f80;
    _objc_retain(param_4);
    lStack_130 = param_4;
    _objc_retain(lVar1);
    lStack_128 = lVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_150);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = puStack_98[5];
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e600(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(lStack_128);
    _objc_release(lStack_130);
  }
  _objc_release(lVar1);
LAB_107985ed0:
  uVar4 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0e00;
  func_0x00010c0d7580(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf1f320();
  _objc_release(puVar3);
  _objc_release(uVar4);
  if ((int)uVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0e00;
    func_0x00010c0d75a0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf1f320();
    _objc_release(puVar3);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar2 != 0) {
      func_0x00010befa120(puVar3);
    }
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = puStack_98[5];
    if (lVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar1;
      func_0x00010c23c720(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c12e640(uVar2);
    if (lVar1 != 0) {
      _objc_release(lVar5);
    }
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_d0,8);
  uVar4 = 8;
  __Block_object_dispose(&uStack_a0);
  __Unwind_Resume();
  _objc_retain(uVar4);
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107986238; end: 107986277; -[SCDiscoverFeedActionHandler _isDiscoverSubfeedInForYou:] */

void FUN_107986238(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0723a0();
  if ((int)uVar1 != 0) {
    func_0x00010c0f1e60(param_1);
  }
  return;
}



/* Entry: 107986404; end: 10798640f; -[SCDiscoverFeedActionHandler setOperaViewingHandler:] */

void FUN_107986404(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x250,param_3);
  return;
}



/* Entry: 10798646c; end: 107986477; -[SCDiscoverFeedActionHandler setVirtualSectionConfigurable:] */

void FUN_10798646c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x268,param_3);
  return;
}



/* Entry: 1079864d8; end: 1079864df; -[SCDiscoverFeedActionHandler currentPlaylistIdArray] */

undefined8 FUN_1079864d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x288);
}



/* Entry: 107986b48; end: 107986b53; +[SCDiscoverFeedActionSheetActionHandler announcerIdentifier] */

undefined ** FUN_107986b48(void)

{
  return &PTR____CFConstantStringClassReference_110ea7638;
}



/* Entry: 107988548; end: 10798859b;  */

void FUN_107988548(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec60a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107988bfc; end: 107988ceb;  */

void FUN_107988bfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = 3;
  if (*(long *)(param_1 + 0x38) != 1) {
    uVar1 = 0;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf85d80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2cfc0(lVar3,param_2,1,uVar2,uVar1,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107989590; end: 1079895c3;  */

void FUN_107989590(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079897ac; end: 1079897af; -[SCDiscoverFeedActionSheetActionHandler shareFriendActionManagerWillDismissSendUsername] */

void FUN_1079897ac(void)

{
  return;
}



/* Entry: 107989d18; end: 10798a303; -[SCDiscoverFeedActionSheetActionHandler _presentRelatedAccountsViewController:sourceView:] */

void FUN_107989d18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d5950;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cd20();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bef9980(puVar1);
  puVar5 = PTR_PTR_1126d5958;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf5ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078a60();
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05db20();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126d5960;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar11 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c05e920(puVar8,*(undefined8 *)(param_1 + 0x150),uVar2,0,lVar11,puVar1,0,
                      *(undefined8 *)(param_1 + 0xd8),0,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                      *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8),
                      *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x108),
                      *(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                      *(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),
                      *(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138),
                      *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x158),
                      *(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xd0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0x148),
                      *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x168),
                      *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x180),
                      *(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x188),
                      *(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                      *(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1b0),
                      *(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x1c0));
  _objc_release(lVar11);
  func_0x00010bef9980(puVar8);
  puVar9 = PTR_PTR_1126b1208;
  _objc_alloc();
  uVar2 = 0x57;
  func_0x00010bc9107c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b180();
  _objc_release(uVar2);
  func_0x00010c161ba0(puVar8);
  _objc_initWeak(auStack_70,param_1);
  puVar10 = PTR_PTR_1126d58e0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar11);
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010c05d420(puVar10);
  _objc_release(lVar11);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bef9980(puVar5);
  lVar11 = *(long *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar11 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980(puVar10);
    _objc_release(uVar2);
  }
  func_0x00010c1e1580(puVar8);
  func_0x00010c1c8b80(puVar10);
  lVar11 = param_1 + 0x1d0;
  _objc_loadWeakRetained(lVar11);
  func_0x00010c10eda0();
  _objc_release(lVar11);
  func_0x00010bdcc7e0(param_1);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10798a7f8; end: 10798a82b; -[SCDiscoverFeedActionSheetActionHandler _handleCancelActionSheet] */

void FUN_10798a7f8(long param_1)

{
  param_1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf83dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10798ae7c; end: 10798b027; -[SCDiscoverFeedActionSheetActionHandler reportDidSubmitWithReasonId:comment:] */

void FUN_10798ae7c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  ppuVar9 = &PTR____CFConstantStringClassReference_110ea8a98;
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = *(undefined **)(param_1 + 0x18);
  puVar4 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar8);
  _objc_release(puVar5);
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  puVar2 = PTR_PTR_1133bb330;
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 1;
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x3032000000;
  puStack_138 = &UNK_10798b490;
  puStack_130 = &UNK_10798b4a0;
  uStack_128 = 0;
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x3032000000;
  puStack_168 = &UNK_10798b490;
  puStack_160 = &UNK_10798b4a0;
  uStack_158 = 0;
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x2020000000;
  uStack_188 = 0;
  puStack_1c8 = &uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c0 = 0x3032000000;
  puStack_1b8 = &UNK_10798b490;
  puStack_1b0 = &UNK_10798b4a0;
  _objc_retain(PTR_PTR_1133bb330);
  puStack_1a8 = puVar2;
  ppuVar6 = ppuVar9;
  func_0x00010c259680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar6 = ppuVar9;
    func_0x00010c259680(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf6a0();
    _objc_release(ppuVar6);
    _objc_retain(ppuVar9);
    uVar8 = *(undefined8 *)(param_3 + 0x68);
    *(undefined ***)(param_3 + 0x68) = ppuVar9;
    _objc_release(uVar8);
    puVar2 = PTR_PTR_1126afca8;
    if (puStack_178[5] == 0) {
      if ((*(byte *)(puStack_118 + 3) & 1) == 0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110db9c98;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c237520(puVar2);
      }
      else if (puStack_148[5] == 0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110db9c98;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c237520(puVar2);
      }
      else {
        ppuVar6 = (undefined **)PTR_PTR_1126aead8;
        _objc_alloc(PTR_PTR_1126aead8);
        puVar2 = param_3 + 0x1d0;
        _objc_loadWeakRetained(puVar2);
        func_0x00010c038f40(ppuVar6);
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126b2ec8;
        _objc_alloc();
        func_0x00010c0587e0();
        uVar8 = *(undefined8 *)(param_3 + 0x90);
        _objc_retain(uVar8);
        param_3 = param_3 + 0x1c8;
        _objc_loadWeakRetained(param_3);
        _objc_retain(uVar8);
        _objc_retain(puVar2);
        func_0x00010bf83dc0(param_3);
        _objc_release(param_3);
        _objc_release(puVar2);
        _objc_release(uVar8);
        _objc_release(uVar8);
        _objc_release(puVar2);
      }
      _objc_release(ppuVar6);
    }
    else if (*(char *)(puStack_198 + 3) == '\x01') {
      func_0x00010be7bce0(param_3);
    }
    else {
      func_0x00010be7e240(param_3);
    }
  }
  __Block_object_dispose(&uStack_1d0,8);
  _objc_release(puStack_1a8);
  __Block_object_dispose(&uStack_1a0,8);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(uStack_158);
  __Block_object_dispose(&uStack_150,8);
  _objc_release(uStack_128);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(ppuVar9);
  return;
}



/* Entry: 10798ba30; end: 10798bd63; -[SCDiscoverFeedActionSheetActionHandler _presentReportPromotedStoryWithStory:] */

void FUN_10798ba30(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c6bf4();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c3ce0;
  _objc_alloc(PTR_PTR_1126c3ce0);
  uVar2 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf20f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240();
  uVar6 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2720();
  func_0x00010bff16e0(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xd8);
  func_0x000108f54a98();
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c79b74(uVar2,*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x178));
  uVar2 = uVar7;
  func_0x00010bef4600(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar8 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar9 = param_1 + 0x1d0;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c038f40();
  _objc_release(lVar9);
  puVar10 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_10798bd64;
  puStack_88 = &UNK_110845c10;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_10798bdd4;
  puStack_b0 = &UNK_110841f50;
  puStack_a8 = puVar8;
  puStack_80 = puVar8;
  func_0x00010c0311a0();
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf22c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_d0,param_1);
  param_1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_d8,auStack_d0);
  func_0x00010bf83dc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(uVar7);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10798c168; end: 10798c173;  */

void FUN_10798c168(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,param_2);
  return;
}



/* Entry: 10798c6d4; end: 10798c9bf; -[SCDiscoverFeedActionSheetActionHandler _handleIncomingSubscribeActionWithDataModel:] */

void FUN_10798c6d4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x1c8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c10f8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010be31480(param_1);
  }
  else {
    lVar3 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_113366eb0;
    _objc_retain(PTR_PTR_113366eb0);
    puVar4 = *(undefined1 **)(param_1 + 0x170);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x1c8;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010c10f8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c0b7600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_initWeak(auStack_78,param_1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_10798c9c0;
    puStack_90 = &UNK_1109f2c20;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    ppuVar7 = &puStack_a8;
    lStack_88 = param_3;
    _objc_retainBlock();
    lVar2 = param_3;
    func_0x00010bf60240();
    puVar4 = puVar6;
    if (lVar2 == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x168);
      _objc_retain(puVar6);
      _objc_retain(puVar1);
      _objc_retain(ppuVar7);
      func_0x00010c269fc0(uVar8);
      _objc_release(ppuVar7);
      _objc_release(puVar1);
    }
    else if (lVar2 == 3) {
      uVar8 = *(undefined8 *)(param_1 + 0x168);
      _objc_retain(puVar6);
      _objc_retain(lVar3);
      _objc_retain(puVar1);
      _objc_retain(ppuVar7);
      func_0x00010c269fc0(uVar8);
      _objc_release(ppuVar7);
      _objc_release(puVar1);
      _objc_release(lVar3);
    }
    else {
      puVar4 = auStack_78;
      _objc_loadWeakRetained(puVar4);
      func_0x00010be31480();
    }
    _objc_release(puVar4);
    _objc_release(ppuVar7);
    _objc_release(lStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10798cc7c; end: 10798cc7f; -[SCDiscoverFeedActionSheetActionHandler hideAdScopeDidSubmitWithReasonId:comment:] */

void FUN_10798cc7c(void)

{
  return;
}



/* Entry: 10798d344; end: 10798d403;  */

void FUN_10798d344(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10798d7b8; end: 10798d7c3; -[SCDiscoverFeedActionSheetActionHandler setPresentingViewController:] */

void FUN_10798d7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1d0,param_3);
  return;
}


