/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b88b760; end: 10b88b8cf; -[SCAppStartExperimentReaderRepository _syncImmediatelyWithUpdates:deletedExperiments:] */

void FUN_10b88b760(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  lVar1 = param_2;
  func_0x00010bdf06c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126bdbc0;
  func_0x00010bf64c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0aba0();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126e1960;
  func_0x00010c22ba80(PTR_PTR_1126e1960);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284740();
  _objc_release(puVar4);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b88b8d0;
  puStack_78 = &UNK_11084d788;
  puStack_70 = puVar2;
  lStack_68 = param_2;
  uStack_60 = param_5;
  uStack_58 = param_1;
  _objc_retain(param_5);
  _objc_retain(puVar2);
  func_0x000107c27d8c(uVar3,&puStack_90);
  _objc_release(uStack_60);
  _objc_release(puStack_70);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10b88b8d0; end: 10b88b987;  */

void FUN_10b88b8d0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_48;
  
  lStack_48 = 0;
  func_0x00010c2be5a0(*(undefined8 *)(param_2 + 0x20),param_3,
                      *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10),0x10000001,&lStack_48);
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_2 + 0x30);
  _CACurrentMediaTime();
  func_0x00010bf060a0(param_1 - *(double *)(param_2 + 0x38),uVar2,param_3,lVar3 == 0,lVar1 == 0);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10b88b988; end: 10b88ba3f; -[SCAppStartExperimentReaderRepository _syncWithUpdates:deletedExperiments:] */

void FUN_10b88b988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b88ba40;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b88ba40; end: 10b88bb77;  */

void FUN_10b88ba40(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  long lStack_58;
  
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  dVar6 = param_1;
  func_0x00010bdf06c0(uVar2,param_3,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bdbc0;
  func_0x00010bf64c20(PTR_PTR_1126bdbc0,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0aba0();
  _objc_release(uVar4);
  lStack_58 = 0;
  func_0x00010c2be5a0(puVar3,param_3,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10),0x10000001,
                      &lStack_58);
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_2 + 0x30);
  _CACurrentMediaTime();
  func_0x00010bf060a0(dVar6 - param_1,uVar4,param_3,lVar5 == 0,lVar1 == 0);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b88bb78; end: 10b88be9f; -[SCAppStartExperimentReaderRepository _createNewBackingDictionary:deletedExperiments:] */

void FUN_10b88bb78(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
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
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010be964a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_230,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar14 = *plStack_220;
    do {
      lVar12 = 0;
      do {
        if (*plStack_220 != lVar14) {
          _objc_enumerationMutation(param_4);
        }
        uVar4 = *(undefined8 *)(lStack_228 + lVar12 * 8);
        func_0x00010bf45ee0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(lVar2,param_2,uVar4);
        _objc_release(uVar4);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_230,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_270,auStack_170,0x10);
  if (lVar3 != 0) {
    lVar14 = *plStack_260;
    do {
      lVar12 = 0;
      do {
        if (*plStack_260 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_268 + lVar12 * 8);
        lVar13 = param_1;
        func_0x00010bded0a0(param_1,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf45ee0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(lVar2,param_2,lVar13,uVar4);
        _objc_release(uVar4);
        _objc_release(lVar13);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_270,auStack_170,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  lVar3 = lVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar3;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar12 = *plStack_2a0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_2a0 != lVar12) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_2a8 + lVar13 * 8);
        uVar5 = *(ulong *)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf4b900();
        _objc_release(uVar5);
        if ((uVar6 & 1) == 0) {
          func_0x00010c12d3e0(lVar2,param_2,uVar4);
        }
        lVar13 = lVar13 + 1;
      } while (lVar14 != lVar13);
      lVar14 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_2b0,auStack_1f0,0x10);
    } while (lVar14 != 0);
  }
  _objc_release(lVar3);
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_alloc();
  lVar3 = lVar2;
  func_0x00010c00c560();
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010c25df20(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf9c4e0();
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = lVar3;
  func_0x00010c1425c0(lVar3);
  func_0x00010c0df6e0(puVar8,param_2,(int)lVar2 != 2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0560();
  func_0x00010c1d0560(puVar9,param_2,puVar7,&PTR____CFConstantStringClassReference_110e6e738);
  func_0x00010c1d0560(puVar9,param_2,puVar8,&PTR____CFConstantStringClassReference_110f98bf8);
  lVar12 = lVar2;
  func_0x00010c0870e0();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar1 = (int)lVar12;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      lVar12 = lVar2;
      func_0x00010c067ec0(lVar2);
      func_0x00010c0df760(puVar10,param_2,lVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR_PTR_110d66988;
      goto LAB_10b88c0e0;
    }
    if (iVar1 == 2) {
      lVar12 = lVar2;
      func_0x00010c0b4fe0(lVar2);
      func_0x00010c0df7a0(puVar10,param_2,lVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR_PTR_110d66998;
      goto LAB_10b88c0e0;
    }
LAB_10b88c044:
    puVar10 = *(undefined **)(param_3 + 0x18);
    func_0x00010c269d40(puVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar3;
    func_0x00010c25df20(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf060c0(puVar10,param_2,lVar12,1);
    _objc_release(lVar12);
  }
  else {
    if (iVar1 == 3) {
      func_0x00010bfb2c80(lVar2);
      func_0x00010c0df740(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR_PTR_110d66990;
    }
    else {
      if (iVar1 != 4) goto LAB_10b88c044;
      lVar12 = lVar2;
      func_0x00010bf1f3c0(lVar2);
      func_0x00010c0df6e0(puVar10,param_2,lVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR_PTR_110d66980;
    }
LAB_10b88c0e0:
    func_0x00010c1d0560(puVar9,param_2,puVar10,*ppuVar11);
  }
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_alloc(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c00c560();
  _objc_release(puVar9);
  _objc_release(lVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar14);
  _objc_release(lVar3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10b88bea0; end: 10b88c15f; -[SCAppStartExperimentReaderRepository _createDictionaryFrom:] */

void FUN_10b88bea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c25df20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf9c4e0();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c1425c0(param_3);
  func_0x00010c0df6e0(puVar5,param_2,(int)uVar2 != 2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0560();
  func_0x00010c1d0560(puVar6,param_2,puVar4,&PTR____CFConstantStringClassReference_110e6e738);
  func_0x00010c1d0560(puVar6,param_2,puVar5,&PTR____CFConstantStringClassReference_110f98bf8);
  uVar7 = uVar2;
  func_0x00010c0870e0();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar1 = (int)uVar7;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar7 = uVar2;
      func_0x00010c067ec0(uVar2);
      func_0x00010c0df760(puVar8,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR_PTR_110d66988;
    }
    else {
      if (iVar1 != 2) {
LAB_10b88c044:
        puVar8 = *(undefined **)(param_1 + 0x18);
        func_0x00010c269d40(puVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_3;
        func_0x00010c25df20(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf060c0(puVar8,param_2,uVar7,1);
        _objc_release(uVar7);
        goto LAB_10b88c0f0;
      }
      uVar7 = uVar2;
      func_0x00010c0b4fe0(uVar2);
      func_0x00010c0df7a0(puVar8,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR_PTR_110d66998;
    }
  }
  else if (iVar1 == 3) {
    func_0x00010bfb2c80(uVar2);
    func_0x00010c0df740(puVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR_PTR_110d66990;
  }
  else {
    if (iVar1 != 4) goto LAB_10b88c044;
    uVar7 = uVar2;
    func_0x00010bf1f3c0(uVar2);
    func_0x00010c0df6e0(puVar8,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR_PTR_110d66980;
  }
  func_0x00010c1d0560(puVar6,param_2,puVar8,*ppuVar9);
LAB_10b88c0f0:
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_alloc(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c00c560();
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10b88c160; end: 10b88c17b; -[SCAppStartExperimentReaderRepository _attemptRecovery] */

void FUN_10b88c160(void)

{
  _objc_alloc_init(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b88c17c; end: 10b88c23f; -[SCAppStartExperimentReaderRepository .cxx_destruct] */

void FUN_10b88c17c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88c240; end: 10b88c24b;  */

bool FUN_10b88c240(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b88c24c; end: 10b88c2b3; +[SCCOFPushRecoveryPayload descriptor] */

void FUN_10b88c24c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fc268 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ceaee0,
                        &PTR____CFConstantStringClassReference_110f9c758,
                        &PTR_s_snapchat_cdp_cof_1133fa4a0,&PTR_DAT_1133fa4b8,3,0x10,0x1c);
    puRam00000001137fc268 = puVar1;
  }
  return;
}



/* Entry: 10b88c2b4; end: 10b88c2c3;  */

void FUN_10b88c2b4(void)

{
  return;
}



/* Entry: 10b88c2c4; end: 10b88c453;  */

undefined8 FUN_10b88c2c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
LAB_10b88c36c:
    lVar1 = param_1;
    func_0x00010bf3ec40();
    if (lVar1 != -0x3f3) {
      lVar1 = param_1;
      func_0x00010bf3ec40();
      if ((lVar1 == -999) || (lVar1 = param_1, func_0x00010bf3ec40(), lVar1 == 0x3ea)) {
        uVar4 = 2;
      }
      else {
        lVar1 = param_1;
        func_0x00010bf3ec40();
        if (lVar1 == 0x3ef) {
          uVar4 = 1;
        }
        else {
          lVar1 = param_1;
          func_0x00010bf87dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010c0720c0();
          if ((int)lVar2 == 0) {
            lVar2 = param_1;
            func_0x00010bf87dc0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010c0720c0();
            _objc_release(lVar2);
            _objc_release(lVar1);
            if ((int)lVar3 == 0) {
              uVar4 = 4;
              goto LAB_10b88c3a8;
            }
          }
          else {
            _objc_release(lVar1);
          }
          uVar4 = 3;
        }
      }
      goto LAB_10b88c3a8;
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010bf3ec40();
    if (lVar1 == 400) {
      uVar4 = 5;
      goto LAB_10b88c3a8;
    }
    lVar1 = param_1;
    func_0x00010bf3ec40();
    if (lVar1 == 0x191) {
      uVar4 = 6;
      goto LAB_10b88c3a8;
    }
    lVar1 = param_1;
    func_0x00010bf3ec40();
    if (lVar1 == 0x193) {
      uVar4 = 7;
      goto LAB_10b88c3a8;
    }
    lVar1 = param_1;
    func_0x00010bf3ec40();
    if (lVar1 < 400) goto LAB_10b88c36c;
  }
  uVar4 = 0;
LAB_10b88c3a8:
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10b88c454; end: 10b88c47f;  */

void FUN_10b88c454(void)

{
  _objc_alloc(PTR_PTR_1126e0218);
  func_0x00010bff29e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b88c480; end: 10b88c4a7;  */

undefined ** FUN_10b88c480(long param_1)

{
  if (param_1 - 1U < 7) {
    return (undefined **)(&PTR_PTR_110d66ad8)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110f5fc18;
}



/* Entry: 10b88c4a8; end: 10b88c513; +[SCNetworkErrorRawBody rawBodyWithData:] */

void FUN_10b88c4a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if ((uVar1 == 0) || (uVar1 = param_3, func_0x00010c08fa60(), 0x20000 < uVar1)) {
    param_1 = 0;
  }
  else {
    _objc_alloc(param_1);
    func_0x00010c008240();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b88c514; end: 10b88c58b; -[SCNetworkErrorRawBody initWithData:] */

undefined1 * FUN_10b88c514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270b828;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b88c58c; end: 10b88c607; -[SCNetworkErrorRawBody description] */

void FUN_10b88c58c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f9cfd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b88c608; end: 10b88c60f; -[SCNetworkErrorRawBody data] */

undefined8 FUN_10b88c608(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88c610; end: 10b88c61b; -[SCNetworkErrorRawBody .cxx_destruct] */

void FUN_10b88c610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88c61c; end: 10b88c6bf; -[SCNNetworkTypesBandwidthThrottlingConfig initWithMediaContextTypeConfig:] */

undefined1 * FUN_10b88c61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b830;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b88c6c0; end: 10b88c6c7; -[SCNNetworkTypesBandwidthThrottlingConfig mediaContextTypeConfig] */

undefined8 FUN_10b88c6c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88c6c8; end: 10b88c6d3; -[SCNNetworkTypesBandwidthThrottlingConfig .cxx_destruct] */

void FUN_10b88c6c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88c6d4; end: 10b88c70f; -[SCNNetworkTypesCertPins .cxx_destruct] */

void FUN_10b88c6d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b88c710; end: 10b88c76b; -[SCNNetworkTypesCompressionConfig initWithAlgorithm:level:minRequestBodySize:] */

void FUN_10b88c710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b840;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  return;
}



/* Entry: 10b88c76c; end: 10b88c78f; -[SCNNetworkTypesCompressionConfig copyWithZone:] */

undefined8 FUN_10b88c76c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b88c790; end: 10b88c797; -[SCNNetworkTypesCompressionConfig algorithm] */

undefined8 FUN_10b88c790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b88c798; end: 10b88c79f; -[SCNNetworkTypesCompressionConfig level] */

undefined4 FUN_10b88c798(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b88c7a0; end: 10b88c7a7; -[SCNNetworkTypesCompressionConfig minRequestBodySize] */

undefined4 FUN_10b88c7a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b88c7a8; end: 10b88c7e3; -[SCNNetworkTypesCronetConfig .cxx_destruct] */

void FUN_10b88c7a8(long param_1)

{
  FUN_10b88c7e4(param_1 + 0x30);
  FUN_10b88c7e4(param_1 + 0x20);
  FUN_10b88c7e4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b88c7e4; end: 10b88c7eb;  */

void FUN_10b88c7e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b88c7ec; end: 10b88c7f3; -[SCNNetworkTypesCronetMetrics requestStart] */

undefined8 FUN_10b88c7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b88c7f4; end: 10b88c7fb; -[SCNNetworkTypesCronetMetrics dnsStart] */

undefined8 FUN_10b88c7f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b88c7fc; end: 10b88c803; -[SCNNetworkTypesCronetMetrics dnsEnd] */

undefined8 FUN_10b88c7fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b88c804; end: 10b88c80b; -[SCNNetworkTypesCronetMetrics connectStart] */

undefined8 FUN_10b88c804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b88c80c; end: 10b88c813; -[SCNNetworkTypesCronetMetrics connectEnd] */

undefined8 FUN_10b88c80c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b88c814; end: 10b88c81b; -[SCNNetworkTypesCronetMetrics sslStart] */

undefined8 FUN_10b88c814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b88c81c; end: 10b88c823; -[SCNNetworkTypesCronetMetrics sslEnd] */

undefined8 FUN_10b88c81c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b88c824; end: 10b88c82b; -[SCNNetworkTypesCronetMetrics sendingStart] */

undefined8 FUN_10b88c824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b88c82c; end: 10b88c833; -[SCNNetworkTypesCronetMetrics sendingEnd] */

undefined8 FUN_10b88c82c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b88c834; end: 10b88c83b; -[SCNNetworkTypesCronetMetrics pushStart] */

undefined8 FUN_10b88c834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b88c83c; end: 10b88c843; -[SCNNetworkTypesCronetMetrics pushEnd] */

undefined8 FUN_10b88c83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b88c844; end: 10b88c84b; -[SCNNetworkTypesCronetMetrics responseStart] */

undefined8 FUN_10b88c844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b88c84c; end: 10b88c853; -[SCNNetworkTypesCronetMetrics socketReused] */

undefined1 FUN_10b88c84c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b88c854; end: 10b88c85b; -[SCNNetworkTypesCronetMetrics sentByteCount] */

undefined8 FUN_10b88c854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b88c85c; end: 10b88c863; -[SCNNetworkTypesCronetMetrics receivedByteCount] */

undefined8 FUN_10b88c85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b88c864; end: 10b88c86b; -[SCNNetworkTypesCronetMetrics serverAddress] */

undefined8 FUN_10b88c864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b88c86c; end: 10b88c873; -[SCNNetworkTypesDebugInfo estimatedRTTInMs] */

undefined8 FUN_10b88c86c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b88c874; end: 10b88c87b; -[SCNNetworkTypesDebugInfo longestCronetCallbackIntervalInMs] */

undefined8 FUN_10b88c874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b88c87c; end: 10b88c883; -[SCNNetworkTypesDebugInfo calculatedDyanmicTiemoutInMs] */

undefined8 FUN_10b88c87c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b88c884; end: 10b88c88b; -[SCNNetworkTypesDebugInfo networkQuality] */

undefined4 FUN_10b88c884(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b88c88c; end: 10b88c893; -[SCNNetworkTypesDebugInfo contextUpdateLifecycle] */

undefined8 FUN_10b88c88c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b88c894; end: 10b88c89b; -[SCNNetworkTypesDebugInfo latencyEstimation] */

undefined8 FUN_10b88c894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b88c89c; end: 10b88c8a3; -[SCNNetworkTypesDebugInfo isThrottled] */

undefined1 FUN_10b88c89c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b88c8a4; end: 10b88c8ab; -[SCNNetworkTypesError errorCode] */

undefined4 FUN_10b88c8a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b88c8ac; end: 10b88c8b3; -[SCNNetworkTypesError message] */

undefined8 FUN_10b88c8ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b88c8b4; end: 10b88c8bb; -[SCNNetworkTypesError internalErrorCode] */

undefined4 FUN_10b88c8b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b88c8bc; end: 10b88c8c3; -[SCNNetworkTypesError immediatelyRetryable] */

undefined1 FUN_10b88c8bc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b88c8c4; end: 10b88c8cb; -[SCNNetworkTypesError quicDetailedErrorCode] */

undefined4 FUN_10b88c8c4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10b88c8cc; end: 10b88c8d7; -[SCNNetworkTypesError .cxx_destruct] */

void FUN_10b88c8cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b88c8d8; end: 10b88c957; -[SCNNetworkTypesLatencyEstimation initWithFormulaVersion:latencyPrediction:rtt:throughput:throughputConfidenceScore:estimatedContentLength:] */

void FUN_10b88c8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270b888;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  return;
}



/* Entry: 10b88c958; end: 10b88c95f; -[SCNNetworkTypesLatencyEstimation formulaVersion] */

undefined8 FUN_10b88c958(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88c960; end: 10b88c967; -[SCNNetworkTypesLatencyEstimation latencyPrediction] */

undefined8 FUN_10b88c960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b88c968; end: 10b88c96f; -[SCNNetworkTypesLatencyEstimation rtt] */

undefined8 FUN_10b88c968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b88c970; end: 10b88c977; -[SCNNetworkTypesLatencyEstimation throughput] */

undefined8 FUN_10b88c970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b88c978; end: 10b88c97f; -[SCNNetworkTypesLatencyEstimation throughputConfidenceScore] */

undefined8 FUN_10b88c978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b88c980; end: 10b88c987; -[SCNNetworkTypesLatencyEstimation estimatedContentLength] */

undefined8 FUN_10b88c980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b88c988; end: 10b88ca2b; -[SCNNetworkTypesNetworkQueueState initWithRequestQueueSnapshot:] */

undefined1 * FUN_10b88c988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b8a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b88ca2c; end: 10b88ca33; -[SCNNetworkTypesNetworkQueueState requestQueueSnapshot] */

undefined8 FUN_10b88ca2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88ca34; end: 10b88ca3f; -[SCNNetworkTypesNetworkQueueState .cxx_destruct] */

void FUN_10b88ca34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88ca40; end: 10b88cc87; -[SCNNetworkTypesNetworkRequestSnapshot initWithNetworkKey:contentId:url:mediaContextTypeString:state:requestType:rankingSignals:rangeStart:rangeEnd:contentLength:queuedMs:executingMs:ttfbMs:bytesDownloaded:retryCount:errorCodes:] */

undefined8 *
FUN_10b88ca40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_18);
  puStack_68 = PTR_PTR_11270b8b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x00010b88cd64(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x00010b88cd64(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x00010b88cd64(uVar3);
    puVar1[5] = param_7;
    puVar1[6] = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    puVar1[10] = param_12;
    puVar1[0xb] = param_13;
    puVar1[0xc] = param_14;
    puVar1[0xd] = param_15;
    puVar1[0xe] = param_16;
    puVar1[0xf] = param_17;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    func_0x00010b88cd64(uVar3);
  }
  _objc_release(param_18);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b88cc88; end: 10b88cc8f; -[SCNNetworkTypesNetworkRequestSnapshot networkKey] */

undefined8 FUN_10b88cc88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88cc90; end: 10b88cc97; -[SCNNetworkTypesNetworkRequestSnapshot contentId] */

undefined8 FUN_10b88cc90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b88cc98; end: 10b88cc9f; -[SCNNetworkTypesNetworkRequestSnapshot url] */

undefined8 FUN_10b88cc98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b88cca0; end: 10b88cca7; -[SCNNetworkTypesNetworkRequestSnapshot mediaContextTypeString] */

undefined8 FUN_10b88cca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b88cca8; end: 10b88ccaf; -[SCNNetworkTypesNetworkRequestSnapshot state] */

undefined8 FUN_10b88cca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b88ccb0; end: 10b88ccb7; -[SCNNetworkTypesNetworkRequestSnapshot requestType] */

undefined8 FUN_10b88ccb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b88ccb8; end: 10b88ccbf; -[SCNNetworkTypesNetworkRequestSnapshot rankingSignals] */

undefined8 FUN_10b88ccb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b88ccc0; end: 10b88ccc7; -[SCNNetworkTypesNetworkRequestSnapshot rangeStart] */

undefined8 FUN_10b88ccc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b88ccc8; end: 10b88cccf; -[SCNNetworkTypesNetworkRequestSnapshot rangeEnd] */

undefined8 FUN_10b88ccc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b88ccd0; end: 10b88ccd7; -[SCNNetworkTypesNetworkRequestSnapshot contentLength] */

undefined8 FUN_10b88ccd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b88ccd8; end: 10b88ccdf; -[SCNNetworkTypesNetworkRequestSnapshot queuedMs] */

undefined8 FUN_10b88ccd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b88cce0; end: 10b88cce7; -[SCNNetworkTypesNetworkRequestSnapshot executingMs] */

undefined8 FUN_10b88cce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b88cce8; end: 10b88ccef; -[SCNNetworkTypesNetworkRequestSnapshot ttfbMs] */

undefined8 FUN_10b88cce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b88ccf0; end: 10b88ccf7; -[SCNNetworkTypesNetworkRequestSnapshot bytesDownloaded] */

undefined8 FUN_10b88ccf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b88ccf8; end: 10b88ccff; -[SCNNetworkTypesNetworkRequestSnapshot retryCount] */

undefined8 FUN_10b88ccf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b88cd00; end: 10b88cd07; -[SCNNetworkTypesNetworkRequestSnapshot errorCodes] */

undefined8 FUN_10b88cd00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b88cd08; end: 10b88cd5b; -[SCNNetworkTypesNetworkRequestSnapshot .cxx_destruct] */

void FUN_10b88cd08(long param_1)

{
  FUN_10b88cd5c(param_1 + 0x80);
  FUN_10b88cd5c(param_1 + 0x48);
  FUN_10b88cd5c(param_1 + 0x40);
  FUN_10b88cd5c(param_1 + 0x38);
  FUN_10b88cd5c(param_1 + 0x20);
  FUN_10b88cd5c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b88cd5c; end: 10b88cd6b;  */

void FUN_10b88cd5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b88cd6c; end: 10b88cd9f; -[SCNNetworkTypesNnmInternalErrorCode init] */

void FUN_10b88cd6c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270b8b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b88cda0; end: 10b88cda7; -[SCNNetworkTypesRequestContextUpdate updateIndex] */

undefined4 FUN_10b88cda0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b88cda8; end: 10b88cdaf; -[SCNNetworkTypesRequestContextUpdate updateTimeMillis] */

undefined8 FUN_10b88cda8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b88cdb0; end: 10b88cdb7; -[SCNNetworkTypesRequestContextUpdate updatedPriority] */

undefined8 FUN_10b88cdb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b88cdb8; end: 10b88cdbf; -[SCNNetworkTypesRequestContextUpdate updatedImportance] */

undefined8 FUN_10b88cdb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b88cdc0; end: 10b88cdc7; -[SCNNetworkTypesRequestContextUpdate updatedTrigger] */

undefined8 FUN_10b88cdc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b88cdc8; end: 10b88cdcf; -[SCNNetworkTypesRequestContextUpdate updatedPageId] */

undefined8 FUN_10b88cdc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b88cdd0; end: 10b88cdd7; -[SCNNetworkTypesRequestResponseInfo debugInfo] */

undefined8 FUN_10b88cdd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b88cdd8; end: 10b88ce23; -[SCNNetworkTypesThrottlingRule initWithMaxDownloadActiveMediaType:maxDownloadOffScreenPrefetch:] */

void FUN_10b88cdd8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b8d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  }
  return;
}



/* Entry: 10b88ce24; end: 10b88ce2b; -[SCNNetworkTypesThrottlingRule maxDownloadActiveMediaType] */

undefined4 FUN_10b88ce24(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b88ce2c; end: 10b88ce33; -[SCNNetworkTypesThrottlingRule maxDownloadOffScreenPrefetch] */

undefined4 FUN_10b88ce2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b88ce34; end: 10b88cebb; -[SCNNetworkTypesTweaks initWithThrottleMode:] */

undefined1 * FUN_10b88ce34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270b8e0;
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


