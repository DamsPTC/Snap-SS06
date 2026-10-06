/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106430f44; end: 106430f4b; -[SCAdResponseOperaParserMetadata creatorSettingsFetcher] */

undefined8 FUN_106430f44(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 106430f4c; end: 106430f53; -[SCAdResponseOperaParserMetadata creatorSettingsTracker] */

undefined8 FUN_106430f4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106430f54; end: 106430f5b; -[SCAdResponseOperaParserMetadata adPlaybackConfig] */

undefined8 FUN_106430f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 106430f5c; end: 106430f63; -[SCAdResponseOperaParserMetadata dpaConfigProvider] */

undefined8 FUN_106430f5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 106430f64; end: 106430f6b; -[SCAdResponseOperaParserMetadata operaConfigProvider] */

undefined8 FUN_106430f64(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 106430f6c; end: 106430f73; -[SCAdResponseOperaParserMetadata webBrowsingConfigProvider] */

undefined8 FUN_106430f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 106430f74; end: 106430f7b; -[SCAdResponseOperaParserMetadata storiesConfigProvider] */

undefined8 FUN_106430f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 106430f7c; end: 106430f83; -[SCAdResponseOperaParserMetadata playbackSessionId] */

undefined8 FUN_106430f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 106430f84; end: 106430f8b; -[SCAdResponseOperaParserMetadata organicEngagementFetcher] */

undefined8 FUN_106430f84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 106430f8c; end: 106430fbb; -[SCAdResponseOperaParserMetadata setOrganicEngagementFetcher:] */

void FUN_106430f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106430fbc; end: 106431147; -[SCAdResponseOperaParserMetadata .cxx_destruct] */

void FUN_106430fbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
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



/* Entry: 106431148; end: 10643123f; -[SCAdContextSubscribeStatusHandler initWithHostAccountUserId:creatorSettingsFetcher:creatorSettingsTracker:] */

undefined1 *
FUN_106431148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f12b0;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106431240; end: 10643129f; -[SCAdContextSubscribeStatusHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_106431240(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1064312a0;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_38);
  }
  return;
}



/* Entry: 1064312a0; end: 1064312a7;  */

void FUN_1064312a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be63990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__nextIsSubscribed_112576800);
  return;
}



/* Entry: 1064312a8; end: 1064312ff; -[SCAdContextSubscribeStatusHandler fetchIsSubscribed] */

void FUN_1064312a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    func_0x00010be63980(param_1);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106431300; end: 10643134f; -[SCAdContextSubscribeStatusHandler _nextIsSubscribed] */

void FUN_106431300(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0801e0();
  func_0x00010c0df6e0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106431350; end: 1064313b7; -[SCAdContextSubscribeStatusHandler isSubscribedUser] */

undefined8 FUN_106431350(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c080120();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1064313b8; end: 1064313ff; -[SCAdContextSubscribeStatusHandler .cxx_destruct] */

void FUN_1064313b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106431400; end: 106432d83;  */

void FUN_106431400(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bfe00;
  func_0x00010bef21a0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (1 < param_4) {
    if (param_4 == 2) {
      func_0x00010c1d0640(param_1);
      goto LAB_1064316f0;
    }
    if (param_4 != 3) goto LAB_1064316f0;
  }
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b2d20;
  func_0x00010c27fe20(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (lVar4 == 0) {
    lVar4 = param_2;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bef5620();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf66880();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf20700();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf20720();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010bef2100(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (lVar8 < 2) {
      if (lVar8 == 0) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b2d20;
        func_0x00010c27fe20(PTR_PTR_1126b2d20);
        _objc_retainAutoreleasedReturnValue();
LAB_1064316bc:
        func_0x00010c1d0640(param_1);
        _objc_release(puVar3);
LAB_1064316d8:
        _objc_release(puVar2);
      }
      else if (lVar8 == 1) goto LAB_106431664;
    }
    else {
      if (lVar8 == 3) {
LAB_106431664:
        puVar2 = PTR_PTR_1126b2d20;
        func_0x00010c27fe20(PTR_PTR_1126b2d20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_1);
        goto LAB_1064316d8;
      }
      if (lVar8 == 2) {
        puVar2 = PTR_PTR_1126b2d20;
        func_0x00010c27fe20();
        iVar1 = (int)puVar2;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_1);
        _objc_release();
        func_0x000100478f84();
        uVar9 = 0x405c400000000000;
        if (iVar1 == 0) {
          uVar9 = 0x4052400000000000;
        }
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(uVar9,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126bfe00;
        func_0x00010bf4dd00(PTR_PTR_1126bfe00);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064316bc;
      }
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
LAB_1064316f0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106432d84; end: 106432f8f;  */

void FUN_106432d84(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1;
  if (param_3 == 0) {
    lVar1 = param_1;
    func_0x00010c068ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c068ae0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106432e48;
    }
    lVar1 = param_1;
    func_0x00010bfd4380();
    if ((int)lVar1 != 0) {
      FUN_106433a78(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106432e48;
    }
  }
  else {
    lVar1 = param_1;
    func_0x0001084cc9c4(param_1,param_2,param_3,param_4,param_5);
    if ((int)lVar1 != 0) {
      func_0x00010c294f20(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106432e48;
    }
  }
  lVar2 = 0;
LAB_106432e48:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106432f90; end: 1064336d3;  */

void FUN_106432f90(undefined8 param_1,undefined *param_2,long param_3)

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
  undefined *puVar10;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_3 != 3) goto LAB_1064336a8;
  puVar1 = param_2;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_2;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60a0(puVar1);
  func_0x00010bef4240(puVar1);
  puVar2 = puVar1;
  func_0x00010c274920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf5d240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010bef6120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar10);
  if (puVar4 != (undefined *)0x0) {
    puVar10 = param_2;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010bef60a0();
    if (puVar2 == (undefined *)0x5) {
      _objc_release(puVar10);
LAB_1064330d4:
      puVar10 = param_2;
      func_0x00010bef4a60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecde0();
      _objc_release(puVar2);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126bfe00;
      func_0x00010c2415e0(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(puVar2);
      _objc_release(puVar10);
    }
    else {
      puVar2 = param_2;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bef60a0();
      _objc_release(puVar2);
      _objc_release(puVar10);
      if (puVar3 == (undefined *)0x16) goto LAB_1064330d4;
    }
    puVar10 = puVar4;
    func_0x00010bf25920();
    if (puVar10 < (undefined *)0x4) {
      puVar10 = PTR_PTR_1126ca7b8;
      func_0x00010c25e0e0(PTR_PTR_1126ca7b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(puVar10);
    }
    puVar10 = param_2;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010bef5620();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf66880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf20700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf20720();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar10);
    if (puVar6 + -4 < (undefined *)0xfffffffffffffffe) {
      puVar10 = puVar1;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf5d240();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = puVar3;
      func_0x00010bf80520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar10);
    }
    else {
      puStack_70 = PTR____kCFBooleanTrue_11034ab68;
    }
    puVar10 = param_2;
    func_0x00010bf461c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010bef2560(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_1064336d4(puVar1,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126afec0;
    puStack_80 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar3 == (undefined *)0x0) {
      puStack_80 = (undefined *)0x0;
    }
    else {
      func_0x00010bf885a0(puVar3);
      func_0x00010c0cd480(puVar10);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = puVar1;
    func_0x00010c274920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010bf5d240();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0fbd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126afec0;
    puStack_88 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar5 == (undefined *)0x0) {
      puStack_88 = (undefined *)0x0;
    }
    else {
      func_0x00010bf885a0(puVar5);
      func_0x00010c0cd480(puVar10);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = param_2;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010bef4a60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar10;
    func_0x00010bf40e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126ca7c0;
    if (puVar6 + -4 < (undefined *)0xfffffffffffffffe) {
      if (puVar7 == (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        _objc_alloc(PTR_PTR_1126ca7c0);
        puVar2 = puVar7;
        func_0x00010bfb5360(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c27ec00();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf13d40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c27ec00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0459a0(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
LAB_106433520:
        _objc_release(puVar6);
        _objc_release(puVar2);
      }
    }
    else {
      if (puVar6 != (undefined *)0x2) {
        _objc_alloc(PTR_PTR_1126ca7c0);
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0459a0(puVar10);
        goto LAB_106433520;
      }
      puVar10 = (undefined *)0x0;
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x4048000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2d20;
    func_0x00010c27fe40(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar6);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ca7b8;
    func_0x00010c25e240(PTR_PTR_1126ca7b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2d20;
    func_0x00010c27a960(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ca7c8;
    func_0x00010c117d60(PTR_PTR_1126ca7c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ca7c8;
    func_0x00010bf80540(PTR_PTR_1126ca7c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puStack_88);
    _objc_release(puVar5);
    _objc_release(puStack_80);
    _objc_release(puVar3);
    _objc_release(puStack_70);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
LAB_1064336a8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064336d4; end: 1064337fb;  */

void FUN_1064336d4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_4 == 3) {
    _objc_retain(param_2);
    _objc_retain(param_1);
    func_0x00010bef60a0(param_1);
    func_0x00010bef4240(param_1);
    uVar1 = param_1;
    func_0x00010c274920(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x00010bf5d240(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bef6120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (lVar3 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = lVar3;
      func_0x00010bf253e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6aee0();
      _objc_release(lVar4);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1064337fc; end: 106433a77;  */

void FUN_1064337fc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126b9250;
  lVar1 = param_2;
  func_0x00010bef52a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60a0();
  lVar2 = param_2;
  func_0x00010bef52a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240();
  func_0x00010c29d360(param_2);
  func_0x00010c0da220(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b9250;
  func_0x00010c0ea840(param_2);
  func_0x00010c07f680();
  if ((int)puVar3 != 0) {
    lVar1 = param_2;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c116c00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar4;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010bf461c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf8f380();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        puVar3 = PTR_PTR_1126b0f10;
        _objc_alloc(PTR_PTR_1126b0f10);
        puVar5 = puVar3;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c033440(puVar3);
        _objc_release(puVar5);
        lVar1 = param_2;
        func_0x00010bfe9e80();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bfe9f40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c0b5ac0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar2;
        func_0x00010bfe9f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(lVar2);
        _objc_release(lVar1);
        if (lVar7 != 0) {
          func_0x000107d74fcc(param_1,lVar7,0);
          func_0x000107d75344(param_1,1);
          lVar1 = param_2;
          func_0x00010bef2560(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010c0ec0c0();
          _objc_release(lVar1);
          func_0x000107d753b4(param_1,lVar2);
        }
        _objc_release(lVar7);
        _objc_release(puVar3);
      }
    }
    _objc_release(lVar4);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106433a78; end: 106433c1f;  */

void FUN_106433a78(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126b9250;
  _objc_retain();
  func_0x00010bef60a0(param_1);
  func_0x00010bef4240(param_1);
  _objc_release(param_1);
  func_0x00010c0da220();
  if (puVar5 + -3 < (undefined *)0xfffffffffffffffe) {
    puVar1 = PTR_PTR_1126ca7d0;
    _objc_alloc(PTR_PTR_1126ca7d0);
    puVar5 = PTR_PTR_1126ca7d8;
    func_0x00010c0f7e20(0,PTR_PTR_1126ca7d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca7d8;
    func_0x00010c0f7e20(0,PTR_PTR_1126ca7d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca7d8;
    func_0x00010c0f7e20(0,PTR_PTR_1126ca7d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ca7d8;
    func_0x00010c0f7e20(0,PTR_PTR_1126ca7d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054240(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
    puVar2 = PTR_PTR_1126ca7e0;
    _objc_alloc(PTR_PTR_1126ca7e0);
    func_0x00010c022080(0x4050400000000000,0x4050400000000000);
    puVar5 = PTR_PTR_1126ca7e8;
    _objc_alloc(PTR_PTR_1126ca7e8);
    func_0x00010c00f740(0,0x402e000000000000);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106433c20; end: 106433cbb;  */

bool FUN_106433c20(int param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf31c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf31c80();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c253c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x00010c253c40(uVar1);
  _objc_release(uVar1);
  return param_1 == 2 || 1 < uVar2 && uVar3 == 4;
}



/* Entry: 106433cbc; end: 106433d0f;  */

void FUN_106433cbc(long param_1)

{
  if (*(long *)(param_1 + 0x28) == 0xe) {
    func_0x000107aeabd0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + 0x28) == 0xd) {
    func_0x000107aeabb8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c09e420(*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106433d10; end: 106433d73;  */

void FUN_106433d10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForKey__1125a56c8,
             &PTR____CFConstantStringClassReference_110e4f058);
  return;
}



/* Entry: 106433d74; end: 106433ea7;  */

uint FUN_106433d74(undefined8 param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar2 = 0;
  if (param_2 < 0x2d) {
    if (param_2 < 0x2b) {
      if (param_2 == 0x1d) {
        uVar4 = param_1;
        func_0x00010c0ec0c0(param_1);
        uVar2 = (uint)uVar4;
      }
      else if (param_2 == 0x1e) goto LAB_106433e58;
    }
    else if ((param_2 == 0x2b) || (param_2 == 0x2c)) {
LAB_106433e58:
      uVar4 = param_1;
      func_0x00010bf1f480(param_1);
      uVar3 = (uint)uVar4;
      goto LAB_106433e64;
    }
  }
  else {
    uVar3 = 1;
    if (param_2 < 0x5a) {
      if (param_2 == 0x2d) goto LAB_106433e58;
      if (param_2 == 0x49) goto LAB_106433e64;
    }
    else if ((param_2 == 0x5a) || (param_2 == 0x62)) goto LAB_106433e64;
  }
  uVar1 = param_2 - 0x57U >> 1;
  if (((uVar1 | param_2 - 0x57U << 0x3f) < 8) && ((0xb1U >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0))
  {
    uVar3 = 1;
  }
  else {
    uVar3 = (uint)(param_2 - 0x42U < 0x2a) & (uint)(0x3c000100701 >> (param_2 - 0x42U & 0x3f)) |
            uVar2;
  }
LAB_106433e64:
  _objc_release(param_1);
  return uVar3 & 1;
}



/* Entry: 106433ea8; end: 106434117;  */

undefined8 FUN_106433ea8(ulong param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  FUN_106433d74(param_1,param_3);
  if ((((uVar1 & 1) != 0) ||
      ((lVar8 = param_2, func_0x00010bef4240(), lVar8 == 0x16 &&
       (uVar1 = param_1, func_0x00010bf1f480(), (int)uVar1 != 0)))) &&
     ((lVar8 = param_2, func_0x00010bef60a0(), lVar8 != 0x14 ||
      (uVar1 = param_1, func_0x00010c0ec0c0(), (uVar1 & 1) == 0)))) {
    lVar8 = param_2;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c6c20();
    if (lVar3 == 1) {
      lVar3 = param_2;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0c57e0();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar8);
      if (lVar7 != 4) goto LAB_106434000;
LAB_1064340cc:
      uVar10 = 1;
      goto LAB_1064340e8;
    }
    _objc_release(lVar2);
    _objc_release(lVar8);
LAB_106434000:
    lVar8 = param_2;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c6c20();
    if (lVar3 == 2) {
      lVar3 = param_2;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c299160();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c299160();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c0c57e0();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar8);
      if (lVar9 == 4) goto LAB_1064340cc;
    }
    else {
      _objc_release(lVar2);
      _objc_release(lVar8);
    }
  }
  uVar10 = 0;
LAB_1064340e8:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar10;
}



/* Entry: 106434118; end: 10643414b;  */

void FUN_106434118(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForKey__1125a56c8,
             &PTR____CFConstantStringClassReference_110e4f138);
  return;
}



/* Entry: 10643414c; end: 1064344cb;  */

void FUN_10643414c(undefined8 param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0c5f40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c268e20();
  if (puVar4 == (undefined *)0x1) {
    puVar4 = param_2;
    func_0x00010bef5620();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf66880();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c117780();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c158460();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar7 != (undefined *)0x1) goto LAB_1064342d0;
    puVar1 = param_2;
    func_0x00010bef5620();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf46a60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c117780();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c158400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar4;
    func_0x00010c067fc0();
    if ((long)puVar1 < 1) {
      dVar9 = 10000.0;
    }
    else {
      puVar1 = puVar4;
      func_0x00010c067fc0();
      dVar9 = (double)(long)puVar1;
    }
    _objc_release(puVar4);
    puVar1 = param_2;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c4bc0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    dVar9 = dVar9 / 1000.0;
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (((0.0 < dVar9) && (dVar11 = (double)(long)puVar3 / 1000.0, 0.0 < dVar11)) &&
       (iVar8 = (int)((dVar11 + -2.5) / dVar9), 0 < iVar8)) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bffc4a0();
      dVar10 = 0.0;
      do {
        puVar1 = puVar2;
        func_0x00010bf529e0();
        if (iVar8 < (int)puVar1) break;
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(dVar10,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar1);
        dVar10 = dVar9 + dVar10;
      } while (dVar10 < dVar11);
      puVar3 = puVar2;
      func_0x00010bf529e0();
      puVar1 = PTR____NSArray0__struct_11034ab48;
      if ((undefined *)0x1 < puVar3) {
        puVar1 = puVar2;
        func_0x00010bf51e00();
      }
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if ((undefined *)0x1 < puVar2) {
      func_0x00010c1d0640(param_1);
      func_0x00010c1d0640(param_1);
      func_0x00010c1d0640(param_1);
      if (param_3 != 0) {
        func_0x00010c1d0640(param_1);
        func_0x00010c1d0640(param_1);
      }
    }
  }
  else {
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_1064342d0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064344cc; end: 10643478f;  */

void FUN_1064344cc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126ca7f8;
  _objc_alloc(PTR_PTR_1126ca7f8);
  lVar3 = param_1;
  func_0x00010bf319e0();
  iVar1 = 0;
  if (lVar3 - 1U < 3) {
    iVar1 = (int)(lVar3 - 1U) + 1;
  }
  lVar3 = param_1;
  func_0x00010bf319a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf8b340();
  lVar5 = param_1;
  func_0x00010bf319a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf6aee0();
  func_0x00010c055a60((double)lVar4,(double)lVar6,puVar2,param_2,iVar1);
  _objc_release(lVar5);
  _objc_release(lVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = param_1;
  func_0x00010bf31b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf8b340();
  func_0x00010c0df780(puVar7,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e8a0(puVar2,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = param_1;
  func_0x00010bf31b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf6aee0();
  func_0x00010c0df780(puVar7,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e880(puVar2,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106434790; end: 106434b47;  */

void FUN_106434790(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
LAB_106434844:
    _objc_retain(param_3);
    if ((param_4 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c274920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf8f0e0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
        uVar2 = param_3;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_106433d10();
        iVar5 = (int)uVar3;
        _objc_release(uVar2);
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 0;
    }
    _objc_release(param_3);
    func_0x00010bef2560(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (iVar5 != 0) {
LAB_1064348fc:
      uVar2 = uVar1;
      func_0x00010642a3b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      goto LAB_106434944;
    }
  }
  else {
    uVar2 = param_3;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef5280();
    _objc_release(uVar2);
    if (uVar3 == 1) {
      func_0x00010bef2560(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064348fc;
    }
    if (uVar3 != 2) goto LAB_106434844;
    func_0x00010bef2560(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar1;
  FUN_10642a370();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164800(param_2);
LAB_106434944:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106434b48; end: 106434c93;  */

void FUN_106434b48(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126ca770;
    _objc_opt_new(PTR_PTR_1126ca770);
  }
  func_0x00010c186580(param_3);
  puVar1 = PTR_PTR_1126bfe00;
  func_0x00010bef24e0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca708;
  _objc_opt_class(PTR_PTR_1126ca708);
  func_0x00010642a968(param_1,puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106434c94; end: 106434e4f;  */

void FUN_106434c94(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c0e19c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c0e19c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      puVar7 = PTR_PTR_1126ca800;
      _objc_alloc(PTR_PTR_1126ca800);
      uVar1 = param_1;
      func_0x00010c0e19c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c54d0;
      uVar2 = param_1;
      func_0x00010c274920(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf20500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befe6c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c09e420();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_2;
      func_0x00010bef2c20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00bc20(puVar7);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar6 = param_2;
      func_0x00010c15ed20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fd160(puVar7);
      _objc_release(uVar6);
      goto LAB_106434e20;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_106434e20:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106434e50; end: 106434f9b;  */

void FUN_106434e50(ulong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c0e19c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_1;
    func_0x00010c0e19c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    ppuVar5 = (undefined **)PTR_PTR_1126c54d0;
    if ((uVar4 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c274920(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf20500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befe6c0(ppuVar5,param_2,uVar2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c09e420();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar1 = ppuVar6;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar7 = PTR_PTR_1126ca808;
      _objc_alloc(PTR_PTR_1126ca808);
      func_0x00010c006ce0();
      _objc_release(ppuVar1);
      goto LAB_106434f78;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_106434f78:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106434f9c; end: 10643503f;  */

void FUN_106434f9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ca810;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_alloc_init(puVar2);
    lVar1 = param_1;
    func_0x00010c2a5040(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfe0640(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c1a7d00(puVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106435040; end: 106435267;  */

void FUN_106435040(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain();
  if (param_2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126ca818;
    _objc_alloc_init(PTR_PTR_1126ca818);
    lVar1 = param_2;
    func_0x00010c2a5040(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0(puVar5,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bfe0640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00(puVar5,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0e8ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(puVar5,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c27ae20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219be0(puVar5,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf19a20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126ca820;
      _objc_alloc(PTR_PTR_1126ca820);
      func_0x00010c1248a0(lVar1);
      uVar6 = param_1;
      func_0x00010bfce1c0(lVar1);
      uVar7 = uVar6;
      func_0x00010bf1e520(lVar1);
      uVar8 = uVar7;
      func_0x00010bf01b40(lVar1);
      func_0x00010c03d7c0(param_1,uVar6,uVar7,uVar8,puVar2);
      func_0x00010c16ff60(puVar5,param_3,puVar2);
      _objc_release(puVar2);
    }
    lVar3 = param_2;
    func_0x00010c22c7c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126ca828;
      _objc_alloc_init(PTR_PTR_1126ca828);
      lVar4 = lVar3;
      func_0x00010bf01b40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(puVar2,param_3,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010bf7f100(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18e1c0(puVar2,param_3,lVar4);
      _objc_release(lVar4);
      func_0x00010c1ff500(puVar5,param_3,puVar2);
      _objc_release(puVar2);
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106435268; end: 10643532b;  */

void FUN_106435268(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar4 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010c064220(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_106435040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c24d4c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar3 = lVar1;
    func_0x000100504554(lVar1,&PTR___NSConcreteGlobalBlock_110922128);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126ca838;
    _objc_alloc(PTR_PTR_1126ca838);
    func_0x00010c01dd00();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10643532c; end: 1064353df;  */

void FUN_10643532c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_106435040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ca830;
  _objc_alloc(PTR_PTR_1126ca830);
  func_0x00010bf8b340(param_3);
  uVar1 = param_1;
  func_0x00010bf6aee0(param_3);
  _objc_release(param_3);
  func_0x00010c00eb60(param_1,uVar1,puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064353e0; end: 10643551b; -[SCAdPodManager initWithAdConfigProvider:insertionRuleTracker:multiAdPodMetricsManager:] */

undefined1 *
FUN_1064353e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f12b8;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10643551c; end: 10643580b; -[SCAdPodManager registerAdPod:sessionId:] */

void FUN_10643551c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = param_3;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bd86870();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bf1f3c0();
    if ((uVar1 & 1) == 0) {
      puVar3 = *(undefined **)(param_1 + 0x38);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        _objc_opt_new();
      }
      else {
        _objc_retain(puVar3);
        puVar4 = puVar3;
      }
      _objc_release(puVar3);
      uVar1 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010bf4b900();
      _objc_release(uVar1);
      if (((ulong)puVar3 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(uVar1);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        uVar1 = param_3;
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar7);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bef4c60(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010bf97e80(uVar1);
        _objc_release(uVar1);
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf79860();
        _objc_release(uVar7);
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010bef4c60(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        uVar5 = param_3;
        func_0x00010bef4c60(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4240();
        func_0x00010c0aa740(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar1);
        _objc_release(uVar7);
        uVar1 = param_3;
        func_0x00010bef4c60(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x000100504554();
        _objc_release(uVar1);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      _objc_release(puVar4);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10643580c; end: 106435887;  */

void FUN_10643580c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf1f3c0();
  if (param_3 != 0) {
    func_0x00010bef60a0(param_2);
  }
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106435888; end: 106435927;  */

void FUN_106435888(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar1 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106435928; end: 10643592f;  */

void FUN_106435928(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef2c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_adId_11259a4b0);
  return;
}



/* Entry: 106435930; end: 1064359cf; -[SCAdPodManager didStartPlayingAd:] */

void FUN_106435930(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7bd80();
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064359d0; end: 106435b0b; -[SCAdPodManager adPositionForAdResponse:adPod:] */

long FUN_1064359d0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = 0x7fffffffffffffff;
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x00010be3cbc0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x106435a9c;
    puStack_40 = &UNK_1109221a8;
    _objc_retain(param_3);
    lVar1 = param_1;
    lStack_38 = param_3;
    func_0x00010bfece40(param_1,param_2,&puStack_58);
    if (lVar1 != 0x7fffffffffffffff) {
      lVar1 = lVar1 + 1;
    }
    _objc_release(lStack_38);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 106435b0c; end: 106435b47; -[SCAdPodManager adPodInsertedAdCount:] */

undefined8 FUN_106435b0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be3cbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106435b48; end: 106435d3f; -[SCAdPodManager adPodTrackInfoForAdResponse:] */

void FUN_106435b48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bef60a0(), lVar1 == 7)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar5,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar6 = *(long *)(param_1 + 0x28);
    lVar1 = lVar5;
    func_0x00010bfe5ec0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar6,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar7 = (undefined *)0x0;
    if ((lVar5 != 0) && (lVar6 != 0)) {
      lVar1 = param_1;
      func_0x00010bef3ec0(param_1,param_2,param_3,lVar5);
      lVar2 = *(long *)(param_1 + 0x38);
      func_0x00010c0e00e0(lVar2,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      func_0x00010bfe5ec0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bfecde0(lVar2,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar7 = (undefined *)0x0;
      if ((lVar1 != 0x7fffffffffffffff) && (lVar4 != 0x7fffffffffffffff)) {
        lVar3 = param_1;
        func_0x00010be15e80(param_1,param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        puVar7 = PTR_PTR_1126ca840;
        _objc_alloc(PTR_PTR_1126ca840);
        func_0x00010bef3dc0(param_1,param_2,lVar5);
        lVar3 = lVar5;
        func_0x00010bfe5ec0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c036940(puVar7,param_2,lVar1,param_1,lVar3,lVar4,lVar2);
        _objc_release(lVar3);
      }
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106435d40; end: 106435d87; -[SCAdPodManager _filledAdsForAdPod:] */

void FUN_106435d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bef4c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x0001006372a4();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106435d88; end: 106435da7;  */

bool FUN_106435d88(undefined8 param_1,long param_2)

{
  func_0x00010bef60a0(param_2);
  return param_2 != 7;
}



/* Entry: 106435da8; end: 106435e73; -[SCAdPodManager _insertedAdsForAdPod:] */

void FUN_106435da8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be15e80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001006372a4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106435e74; end: 106435edf; -[SCAdPodManager .cxx_destruct] */

void FUN_106435e74(long param_1)

{
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



/* Entry: 106435ee0; end: 1064360db; -[SCStoryAdExpandStateManager initWithNavigationStyle:adConfigProvider:adConfigProviderV2:circumstanceEngine:adGraphene:adTrackHelper:] */

undefined1 *
FUN_106435ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f12c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1064360dc; end: 1064361b7; -[SCStoryAdExpandStateManager registerAdPod:insertMechanism:midRollStoryExpansionBlock:identifierForAdSnapBlock:] */

void FUN_1064360dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bef4c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1064361b8;
  puStack_68 = &UNK_1109221f8;
  uStack_60 = param_1;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf97e80(param_3,param_2,&puStack_80);
  _objc_release(param_3);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1064361b8; end: 1064361cb;  */

void FUN_1064361b8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__registerStoryAdResponse_insertM_112580108,
             param_2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1064361cc; end: 10643640b; -[SCStoryAdExpandStateManager _registerStoryAdResponse:insertMechanism:midRollStoryExpansionBlock:identifierForAdSnapBlock:] */

void FUN_1064361cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x000106437c24(param_3,*(undefined8 *)(param_1 + 0x18));
  if ((int)uVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x48);
    uVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (lVar3 == 0) {
      uVar1 = param_3;
      func_0x00010bef52c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      func_0x00010bf97e80(uVar1);
      _objc_release(uVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      uVar1 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(uVar1);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(uVar1);
      _objc_release(puVar2);
      uVar1 = param_5;
      _objc_retainBlock(param_5);
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      uVar4 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar1);
      uVar1 = param_6;
      _objc_retainBlock(param_6);
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      uVar4 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(param_6);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10643640c; end: 106436477;  */

void FUN_10643640c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  pcVar3 = *(code **)(lVar1 + 0x10);
  _objc_retain(param_2);
  (*pcVar3)(lVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106436478; end: 1064364fb; -[SCStoryAdExpandStateManager expandStatusForAdSnap:adResponse:] */

undefined8 FUN_106436478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x000106437c24(param_4,*(undefined8 *)(param_1 + 0x18));
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x000106437cd4(param_3,param_4,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 8)
                        ,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1064364fc; end: 106436653; -[SCStoryAdExpandStateManager extraPagePropertiesForAdSnap:adResponse:viewLocation:] */

void FUN_1064364fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x000106437c24(param_4,*(undefined8 *)(param_1 + 0x18));
  if ((int)uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x000106437cd4(param_3,param_4,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 8)
                        ,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    lVar4 = param_3;
    if ((lVar2 < 2) && (lVar2 != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = param_4;
      func_0x00010bfe5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c2827c0();
      FUN_106437e1c(param_3,param_4,uVar5,uVar3,*(undefined8 *)(param_1 + 0x10),
                    *(undefined8 *)(param_1 + 0x20),param_5,*(undefined8 *)(param_1 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar1);
    }
    else {
      FUN_106437530(param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106436654; end: 1064366eb; -[SCStoryAdExpandStateManager initialVisibleSnapsCount:] */

ulong FUN_106436654(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0dac40();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar1 <= uVar3) goto LAB_1064366d0;
  }
  uVar2 = param_3;
  func_0x00010bef52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
LAB_1064366d0:
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1064366ec; end: 10643677f; -[SCStoryAdExpandStateManager registeredEventsForOperaSession] */

void FUN_1064366ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar11 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ca428;
  func_0x00010bf9bc40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar12);
  puVar2 = PTR_PTR_1126ca428;
  _objc_retain(ppuVar11);
  func_0x00010bf9bc40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)ppuVar11;
  func_0x00010c0720c0(ppuVar11,param_2,puVar2);
  _objc_release(ppuVar11);
  _objc_release(puVar2);
  if ((int)puVar3 == 0) goto LAB_106436a80;
  uVar4 = uVar12;
  func_0x00010be36bc0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1 + 0x68;
  _objc_loadWeakRetained(puVar2);
  puVar5 = puVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar13 = *(undefined8 *)(puVar1 + 0x40);
  puVar2 = puVar5;
  func_0x00010be36bc0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar13,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar14 = *(ulong *)(puVar1 + 0x48);
  uVar6 = uVar13;
  func_0x00010bfe5ec0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar14,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  lVar15 = *(long *)(puVar1 + 0x50);
  uVar7 = uVar14;
  func_0x00010bfe5ec0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar15,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010c2827c0();
  _objc_release(lVar15);
  _objc_release(uVar7);
  func_0x00010becde00(puVar1,param_2,uVar14,1,0);
  if (uVar14 == 0) {
    func_0x00010becde00(puVar1,param_2,0,3,&PTR____CFConstantStringClassReference_110e4f1d8);
  }
  else {
    uVar7 = uVar14;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bfecde0();
    _objc_release(uVar7);
    if (uVar9 == 0x7fffffffffffffff) {
LAB_106436984:
      func_0x00010becde00(puVar1,param_2,uVar14,3,&PTR____CFConstantStringClassReference_110e4f1f8);
    }
    else {
      uVar7 = uVar14;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010bf529e0();
      _objc_release(uVar7);
      if (uVar10 < uVar9 + 1) goto LAB_106436984;
      uVar7 = uVar14;
      func_0x00010bfe5ec0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becdde0(puVar1,param_2,uVar7,uVar9);
      _objc_release(uVar7);
      uVar7 = uVar14;
      func_0x00010bef52c0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (lVar8 == 1) {
        func_0x00010be0c2e0(puVar1,param_2,uVar14,uVar13,uVar9,uVar12);
      }
      else if (lVar8 == 0) {
        func_0x00010be0c300(puVar1,param_2,uVar14,uVar13,uVar9,uVar12);
      }
      _objc_release(uVar9);
    }
    _objc_release(uVar14);
  }
  _objc_release(uVar13);
  _objc_release(puVar5);
  _objc_release(uVar4);
LAB_106436a80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 106436780; end: 106436a9f; -[SCStoryAdExpandStateManager operaViewDidSendEvent:page:params:] */

void FUN_106436780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ca428;
  _objc_retain(param_3);
  func_0x00010bf9bc40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) goto LAB_106436a80;
  uVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  lVar3 = lVar4;
  func_0x00010be36bc0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar9,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar10 = *(ulong *)(param_1 + 0x48);
  uVar5 = uVar9;
  func_0x00010bfe5ec0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar10,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar11 = *(long *)(param_1 + 0x50);
  uVar6 = uVar10;
  func_0x00010bfe5ec0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar11,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c2827c0();
  _objc_release(lVar11);
  _objc_release(uVar6);
  func_0x00010becde00(param_1,param_2,uVar10,1,0);
  if (uVar10 == 0) {
    func_0x00010becde00(param_1,param_2,0,3,&PTR____CFConstantStringClassReference_110e4f1d8);
  }
  else {
    uVar6 = uVar10;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfecde0();
    _objc_release(uVar6);
    if (uVar7 == 0x7fffffffffffffff) {
LAB_106436984:
      func_0x00010becde00(param_1,param_2,uVar10,3,&PTR____CFConstantStringClassReference_110e4f1f8)
      ;
    }
    else {
      uVar6 = uVar10;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
      if (uVar8 < uVar7 + 1) goto LAB_106436984;
      uVar6 = uVar10;
      func_0x00010bfe5ec0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becdde0(param_1,param_2,uVar6,uVar7);
      _objc_release(uVar6);
      uVar6 = uVar10;
      func_0x00010bef52c0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      if (lVar3 == 1) {
        func_0x00010be0c2e0(param_1,param_2,uVar10,uVar9,uVar7,param_4);
      }
      else if (lVar3 == 0) {
        func_0x00010be0c300(param_1,param_2,uVar10,uVar9,uVar7,param_4);
      }
      _objc_release(uVar7);
    }
    _objc_release(uVar10);
  }
  _objc_release(uVar9);
  _objc_release(lVar4);
  _objc_release(uVar2);
LAB_106436a80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106436aa0; end: 106436c5f; -[SCStoryAdExpandStateManager _expandMidRollStoryAd:adSnapV2:targetAdSnap:page:] */

void FUN_106436aa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar2 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 0x58);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106436c60;
  puStack_88 = &UNK_110857e00;
  _objc_retain(param_5);
  uStack_80 = param_5;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_6);
  uStack_68 = param_6;
  _objc_retainBlock(&puStack_a0);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_3,param_4,ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106436c60; end: 106436cc7;  */

void FUN_106436c60(long param_1,ulong param_2)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  if ((param_2 & 1) == 0) {
    func_0x00010becde00(param_1);
  }
  else {
    func_0x00010be623e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106436cc8; end: 106436cd7; -[SCStoryAdExpandStateManager _expandPostRollStoryAd:adSnapV2:targetAdSnap:page:] */

void FUN_106436cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be623f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__navigateToTargetAdSnap_fromAdSn_112576298,param_5,param_4,param_3);
  return;
}



/* Entry: 106436cd8; end: 10643702f; -[SCStoryAdExpandStateManager _navigateToTargetAdSnap:fromAdSnapV2:adDataModel:page:] */

void FUN_106436cd8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar9 = *(long *)(param_1 + 0x60);
  uVar1 = param_5;
  func_0x00010bfe5ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf2c7a0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    func_0x00010becde00(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = param_5;
    func_0x00010bfe5ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar1);
    lVar3 = lVar9;
    (**(code **)(lVar9 + 0x10))(lVar9,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = param_1;
      func_0x00010bf99b40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ca428;
      func_0x00010c2a64e0(PTR_PTR_1126ca428);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c9898;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7e0(lVar4);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(lVar4);
    }
    lVar4 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c1ddd40();
    _objc_release(lVar4);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    lVar4 = lVar9;
    (**(code **)(lVar9 + 0x10))(lVar9,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101400(param_1);
    _objc_release(lVar4);
    _objc_release(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = param_5;
    func_0x00010bfe5ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar1);
    lVar3 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar9;
    (**(code **)(lVar9 + 0x10))(lVar9,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101400(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ca428;
    func_0x00010bf9bf60(PTR_PTR_1126ca428);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(param_1);
    _objc_release(puVar5);
    lVar3 = param_1;
  }
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf76110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x30),PTR_s_didExpandAdWithClientId_atIndex__1125bb1e8);
  return;
}



/* Entry: 106437030; end: 106437037; -[SCStoryAdExpandStateManager _trackExpandAdEventForAdClientId:atIndex:] */

void FUN_106437030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf76110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_didExpandAdWithClientId_atIndex__1125bb1e8);
  return;
}



/* Entry: 106437038; end: 10643731f; -[SCStoryAdExpandStateManager _trackExpandMetricWithDataModel:status:errorReason:] */

void FUN_106437038(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 == 0) {
    lVar5 = 0x17;
    lVar6 = 10;
  }
  else {
    lVar6 = param_3;
    func_0x00010bef4240(param_3);
    lVar5 = param_3;
    func_0x00010bef60a0(param_3);
  }
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bef3100(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = param_3;
  func_0x00010bef52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar1,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110f24d58,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110daf4d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar6 = param_5;
  func_0x00010c08fa60();
  puVar1 = puVar3;
  if (lVar6 != 0) {
    lVar6 = param_5;
    func_0x00010c25cfc0(param_5,param_2,&PTR____CFConstantStringClassReference_110db2d98,
                        &PTR____CFConstantStringClassReference_110dc1338);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110f24978,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar6);
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106437320; end: 106437337; -[SCStoryAdExpandStateManager playlistItemController] */

void FUN_106437320(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106437338; end: 106437343; -[SCStoryAdExpandStateManager setPlaylistItemController:] */

void FUN_106437338(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 106437344; end: 10643734b; -[SCStoryAdExpandStateManager eventAnnouncer] */

undefined8 FUN_106437344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10643734c; end: 10643737b; -[SCStoryAdExpandStateManager setEventAnnouncer:] */

void FUN_10643734c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10643737c; end: 10643742b; -[SCStoryAdExpandStateManager .cxx_destruct] */

void FUN_10643737c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
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



/* Entry: 10643742c; end: 10643752f;  */

undefined8 FUN_10643742c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0df060(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106437530; end: 106437b0f;  */

undefined **
FUN_106437530(ulong param_1,ulong param_2,undefined8 param_3,undefined *param_4,undefined8 param_5,
             undefined8 param_6,undefined *param_7,undefined **param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_8);
  ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_6);
  _objc_opt_new();
  uVar2 = param_2;
  func_0x00010bef52c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(uVar2);
  puVar6 = param_7;
  func_0x000107d2786c();
  _objc_release(param_6);
  uVar2 = param_2;
  func_0x00010bef60a0();
  uVar3 = param_2;
  func_0x00010bef4240();
  if (uVar3 == 0x16) {
    ppuVar4 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar4;
    func_0x00010bf1f480();
    _objc_release(ppuVar4);
    if (((ulong)ppuVar10 & 1) == 0) goto LAB_106437634;
LAB_106437a20:
    param_4 = puVar6;
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5f38;
    func_0x00010c1d0640(ppuVar9);
    func_0x00010c1d0640(ppuVar9);
    ppuVar10 = ppuVar9;
    func_0x00010bf51e00();
  }
  else {
LAB_106437634:
    ppuVar4 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c0df060();
    _objc_release(ppuVar4);
    ppuVar4 = param_8;
    if (uVar3 == 0) {
      uVar3 = param_2;
      if ((((param_7 + -0x49 < (undefined *)0x1a) &&
           ((1L << ((ulong)(param_7 + -0x49) & 0x3f) & 0x2020001U) != 0)) ||
          ((uVar1 = (ulong)(param_7 + -0x57) >> 1, (uVar1 | (long)(param_7 + -0x57) << 0x3f) < 8 &&
           ((1L << (uVar1 & 0x3f) & 0xb1U) != 0)))) ||
         ((param_7 + -0x42 < (undefined *)0x2a &&
          ((1L << ((ulong)(param_7 + -0x42) & 0x3f) & 0x3c000100701U) != 0)))) {
        func_0x000106437490(param_2,param_4,param_8);
        puVar6 = PTR_PTR_1126b3af0;
        if (uVar2 != 0x16) {
          if (1 < uVar3) {
            puVar6 = PTR_PTR_1126c9620;
            _objc_alloc(PTR_PTR_1126c9620);
            puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c054920(puVar6);
            _objc_release(puVar7);
            _objc_opt_class();
            puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuVar9);
            _objc_release(puVar7);
            puVar7 = PTR_PTR_1126bfe00;
            func_0x00010c117840();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1064379fc;
          }
          goto LAB_106437aac;
        }
      }
      else {
        func_0x000106437490(param_2,param_4,param_8);
        puVar6 = PTR_PTR_1126b3af0;
      }
      PTR_PTR_1126b3af0 = puVar6;
      if (1 < uVar3) {
        _objc_alloc(puVar6);
        func_0x00010c054900();
        ppuVar10 = ppuVar9;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        param_4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class();
        ppuVar5 = ppuVar10;
        _objc_opt_isKindOfClass();
        ppuVar4 = ppuVar10;
        if (((ulong)ppuVar5 & 1) == 0) {
          ppuVar4 = (undefined **)0x0;
        }
        _objc_retain(ppuVar4);
        _objc_release(ppuVar10);
        ppuVar10 = (undefined **)PTR____NSArray0__struct_11034ab48;
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar10 = ppuVar4;
        }
        _objc_retain(ppuVar10);
        _objc_release(ppuVar4);
        _objc_opt_class(PTR_PTR_1126b3b00);
        ppuVar4 = ppuVar10;
        func_0x00010bf09f60(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        func_0x00010c1d0640(ppuVar9);
        func_0x00010c1d0640(ppuVar9);
        _objc_release(ppuVar4);
        func_0x00010c1d0640(ppuVar9);
        func_0x00010c1d0640(ppuVar9);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar9);
        _objc_release(puVar7);
        func_0x00010c1d0640(ppuVar9);
        func_0x00010c1d0640(ppuVar9);
        if ((uVar2 == 0x16) && (uVar2 = param_1, func_0x00010bef60a0(), uVar2 == 10)) {
          func_0x00010c1d0640(ppuVar9);
          func_0x00010c1d0640(ppuVar9);
        }
        goto LAB_106437a1c;
      }
    }
    else {
      uVar2 = param_2;
      func_0x000106437490(param_2,param_4,param_8);
      if (1 < uVar2) {
        puVar6 = PTR_PTR_1126c9620;
        _objc_alloc(PTR_PTR_1126c9620);
        puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c054920(puVar6);
        _objc_release(puVar7);
        puVar7 = PTR_PTR_1126bfe00;
        func_0x00010bf44ec0();
        _objc_retainAutoreleasedReturnValue();
LAB_1064379fc:
        func_0x00010c1d0640(ppuVar9);
        _objc_release(puVar7);
LAB_106437a1c:
        _objc_release(puVar6);
        puVar6 = param_4;
        goto LAB_106437a20;
      }
    }
LAB_106437aac:
    ppuVar10 = (undefined **)0x0;
  }
  _objc_release(ppuVar9);
  _objc_release(param_8);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
    return ppuVar10;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(ppuVar4);
  _objc_retain(param_1);
  puVar6 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_1);
  if (((((uVar2 & 1) == 0) && (puVar7 = param_4, func_0x00010bef4240(), puVar7 != (undefined *)0xf))
      && (puVar7 = param_4, func_0x00010bef4240(), puVar7 != (undefined *)0x4)) &&
     (puVar7 = param_4, func_0x00010bef4240(), puVar7 != (undefined *)0x6)) {
    puVar7 = param_4;
    func_0x00010bef4240();
    if (puVar7 == (undefined *)0x16) {
      ppuVar10 = ppuVar4;
      func_0x00010c269d40(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010bf1f480();
      _objc_release(ppuVar10);
    }
    else {
      ppuVar9 = (undefined **)0x0;
    }
  }
  else {
    ppuVar9 = (undefined **)0x1;
  }
  _objc_release(puVar6);
  _objc_release(ppuVar4);
  _objc_release(param_4);
  return ppuVar9;
}



/* Entry: 106437b10; end: 106437e1b;  */

undefined8 FUN_106437b10(ulong param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar1 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_1);
  if (((((uVar2 & 1) == 0) && (lVar3 = param_2, func_0x00010bef4240(), lVar3 != 0xf)) &&
      (lVar3 = param_2, func_0x00010bef4240(), lVar3 != 4)) &&
     (lVar3 = param_2, func_0x00010bef4240(), lVar3 != 6)) {
    lVar3 = param_2;
    func_0x00010bef4240();
    if (lVar3 == 0x16) {
      uVar4 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f480();
      _objc_release(uVar4);
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 106437e1c; end: 1064382e7;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_106437e1c(undefined8 *******param_1,undefined **param_2,undefined8 param_3,undefined **param_4,
             undefined8 ******param_5,undefined8 ******param_6,undefined8 ******param_7,
             undefined8 *******param_8)

{
  undefined8 ******ppppppuVar1;
  undefined8 ******ppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *******pppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined **ppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ******ppppppuVar22;
  undefined8 ******ppppppuVar23;
  undefined8 *******pppppppuVar24;
  undefined8 *******pppppppuStack_140;
  undefined *puStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 *******pppppppuStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 *******pppppppuStack_108;
  undefined8 *******pppppppuStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 *******pppppppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 ******ppppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 ******ppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar22 = param_5;
  _objc_retain(param_8);
  pppppppuVar7 = (undefined8 *******)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new();
  ppppppuVar21 = (undefined8 ******)0x0;
  pppppppuVar8 = param_1;
  ppppppuVar23 = param_6;
  pppppppuVar24 = param_8;
  FUN_106437530(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  pppppppuStack_b0 = pppppppuVar8;
  func_0x00010bef7f60(pppppppuVar7);
  pppppppuVar9 = (undefined8 *******)param_2;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  pppppppuVar10 = pppppppuVar9;
  func_0x00010bf529e0();
  pppppppuVar11 = (undefined8 *******)param_2;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  pppppppuVar8 = pppppppuVar11;
  ppuVar20 = (undefined **)param_1;
  func_0x00010bfecde0();
  _objc_release(param_1);
  _objc_release(pppppppuVar11);
  _objc_release(pppppppuVar9);
  pppppppuVar12 = (undefined8 *******)param_2;
  FUN_10643742c(param_2,param_8);
  _objc_release(param_2);
  puVar14 = (undefined *)0x0;
  if ((long)pppppppuVar10 + ~(ulong)pppppppuVar8 != 0) {
    ppppppuStack_a8 = (undefined8 ******)&PTR____CFConstantStringClassReference_110f0be58;
    param_2 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppppppuVar21 = (undefined8 ******)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar22 = (undefined8 ******)PTR_PTR_1126bfe00;
    ppppppuStack_b8 = ppppppuVar21;
    ppppppuStack_88 = ppppppuVar21;
    func_0x00010bf9bd60();
    _objc_retainAutoreleasedReturnValue();
    pppppppuVar12 = (undefined8 *******)PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppppppuStack_c0 = ppppppuVar22;
    ppppppuStack_a0 = ppppppuVar22;
    func_0x000107aeac18();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar21 = (undefined8 ******)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar13 = ppppppuVar21;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppppppuStack_d0 = ppppppuVar13;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppppuVar13);
    _objc_release(ppppppuVar21);
    _objc_release(ppppppuVar22);
    pppppppuVar9 = (undefined8 *******)PTR_PTR_1126bfe00;
    pppppppuStack_80 = pppppppuVar12;
    func_0x00010bf9bce0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    pppppppuStack_98 = pppppppuVar9;
    func_0x00010c23a680(PTR_PTR_1126b8ca8);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    pppppppuVar11 = (undefined8 *******)PTR_PTR_1126bfe00;
    puStack_78 = puVar14;
    func_0x00010bf9bd00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    pppppppuStack_90 = pppppppuVar11;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar21 = &ppppppuStack_a8;
    ppppppuVar22 = (undefined8 ******)0x4;
    puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar15;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c0d3c80();
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(pppppppuVar11);
    _objc_release(puVar14);
    _objc_release(pppppppuVar9);
    _objc_release(pppppppuVar12);
    _objc_release(ppppppuStack_c0);
    _objc_release(ppppppuStack_b8);
    puVar15 = puVar17;
    func_0x00010bf51e00(puVar17);
    func_0x00010bef7f60(pppppppuVar7);
    _objc_release(puVar15);
    pppppppuVar8 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = &PTR____CFConstantStringClassReference_110e4f278;
    param_4 = (undefined **)pppppppuVar8;
    func_0x00010bf1f480();
    _objc_release(pppppppuVar8);
    if (((ulong)param_4 & 1) == 0) {
      param_4 = &PTR____CFConstantStringClassReference_110f0e2b8;
      pppppppuVar8 = pppppppuVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      pppppppuVar18 = pppppppuVar8;
      _objc_opt_isKindOfClass(pppppppuVar8,puVar15);
      pppppppuVar10 = pppppppuVar8;
      if (((ulong)pppppppuVar18 & 1) == 0) {
        pppppppuVar10 = (undefined8 *******)0x0;
      }
      _objc_retain(pppppppuVar10);
      _objc_release(pppppppuVar8);
      pppppppuVar8 = (undefined8 *******)PTR____NSArray0__struct_11034ab48;
      if (pppppppuVar10 != (undefined8 *******)0x0) {
        pppppppuVar8 = pppppppuVar10;
      }
      func_0x00010c0d3c80();
      _objc_release(pppppppuVar10);
      _objc_opt_class(PTR_PTR_1126ca700);
      func_0x00010befa120(pppppppuVar8);
      param_2 = (undefined **)pppppppuVar8;
      func_0x00010bf51e00();
      ppuVar20 = param_2;
      ppppppuVar21 = (undefined8 ******)param_4;
      func_0x00010c1d0640(pppppppuVar7);
      _objc_release(param_2);
      _objc_release(pppppppuVar8);
    }
    _objc_release(puVar17);
  }
  pppppppuVar10 = pppppppuVar7;
  func_0x00010bf51e00();
  _objc_release(pppppppuStack_b0);
  _objc_release(pppppppuVar7);
  pppppppuVar18 = param_8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppppuVar10);
    return pppppppuVar10;
  }
  ___stack_chk_fail();
  pppppppuVar6 = pppppppuStack_98;
  ppppppuVar5 = ppppppuStack_a0;
  ppppppuVar4 = ppppppuStack_a8;
  pppppppuVar3 = pppppppuStack_b0;
  ppppppuVar2 = ppppppuStack_b8;
  ppppppuVar1 = ppppppuStack_c0;
  ppppppuVar13 = ppppppuStack_d0;
  pcStack_d8 = FUN_1064382e8;
  pppppppuStack_130 = pppppppuVar11;
  puStack_128 = puVar14;
  pppppppuStack_120 = pppppppuVar9;
  pppppppuStack_118 = pppppppuVar12;
  pppppppuStack_110 = (undefined8 *******)param_2;
  pppppppuStack_108 = (undefined8 *******)param_4;
  pppppppuStack_100 = pppppppuVar10;
  pppppppuStack_f8 = pppppppuVar8;
  pppppppuStack_f0 = pppppppuVar7;
  pppppppuStack_e8 = param_8;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar20);
  _objc_retain(ppppppuVar21);
  _objc_retain(ppppppuVar22);
  _objc_retain(ppppppuVar23);
  _objc_retain(param_7);
  _objc_retain(pppppppuVar24);
  _objc_retain(ppppppuVar13);
  _objc_retain(ppppppuStack_c8);
  _objc_retain(ppppppuVar1);
  _objc_retain(ppppppuVar2);
  _objc_retain(pppppppuVar3);
  _objc_retain(ppppppuVar4);
  _objc_retain(ppppppuVar5);
  _objc_retain(pppppppuVar6);
  puStack_138 = PTR_PTR_1126f12c8;
  pppppppuVar8 = &pppppppuStack_140;
  pppppppuStack_140 = pppppppuVar18;
  _objc_msgSendSuper2(pppppppuVar8,PTR_s_init_1125d9248);
  if (pppppppuVar8 != (undefined8 *******)0x0) {
    _objc_retain(ppuVar20);
    ppppppuVar19 = pppppppuVar8[1];
    pppppppuVar8[1] = (undefined8 ******)ppuVar20;
    _objc_release(ppppppuVar19);
    _objc_retain(ppppppuVar22);
    ppppppuVar19 = pppppppuVar8[2];
    pppppppuVar8[2] = ppppppuVar22;
    _objc_release(ppppppuVar19);
    _objc_retain(ppppppuVar23);
    ppppppuVar19 = pppppppuVar8[3];
    pppppppuVar8[3] = ppppppuVar23;
    _objc_release(ppppppuVar19);
    _objc_retain(param_7);
    ppppppuVar19 = pppppppuVar8[4];
    pppppppuVar8[4] = param_7;
    _objc_release(ppppppuVar19);
    _objc_retain(pppppppuVar24);
    ppppppuVar19 = pppppppuVar8[5];
    pppppppuVar8[5] = pppppppuVar24;
    _objc_release(ppppppuVar19);
    _objc_retain(ppppppuVar13);
    ppppppuVar19 = pppppppuVar8[6];
    pppppppuVar8[6] = ppppppuVar13;
    _objc_release(ppppppuVar19);
    _objc_retain(ppppppuStack_c8);
    ppppppuVar19 = pppppppuVar8[7];
    pppppppuVar8[7] = ppppppuStack_c8;
    _objc_release(ppppppuVar19);
    _objc_retain(ppppppuVar21);
    ppppppuVar19 = pppppppuVar8[8];
    pppppppuVar8[8] = ppppppuVar21;
    _objc_release(ppppppuVar19);
    _objc_retain(ppppppuVar1);
    ppppppuVar19 = pppppppuVar8[9];
    pppppppuVar8[9] = ppppppuVar1;
    _objc_release(ppppppuVar19);
    _objc_retain(ppppppuVar2);
    ppppppuVar19 = pppppppuVar8[10];
    pppppppuVar8[10] = ppppppuVar2;
    _objc_release(ppppppuVar19);
    _objc_retain(pppppppuVar3);
    ppppppuVar19 = pppppppuVar8[0xb];
    pppppppuVar8[0xb] = pppppppuVar3;
    _objc_release(ppppppuVar19);
    _objc_retain(ppppppuVar4);
    ppppppuVar19 = pppppppuVar8[0xc];
    pppppppuVar8[0xc] = ppppppuVar4;
    _objc_release(ppppppuVar19);
    _objc_retain(ppppppuVar5);
    ppppppuVar19 = pppppppuVar8[0xd];
    pppppppuVar8[0xd] = ppppppuVar5;
    _objc_release(ppppppuVar19);
    _objc_retain(pppppppuVar6);
    ppppppuVar19 = pppppppuVar8[0xe];
    pppppppuVar8[0xe] = pppppppuVar6;
    _objc_release(ppppppuVar19);
  }
  _objc_release(pppppppuVar6);
  _objc_release(ppppppuVar5);
  _objc_release(ppppppuVar4);
  _objc_release(pppppppuVar3);
  _objc_release(ppppppuVar2);
  _objc_release(ppppppuVar1);
  _objc_release(ppppppuStack_c8);
  _objc_release(ppppppuVar13);
  _objc_release(pppppppuVar24);
  _objc_release(param_7);
  _objc_release(ppppppuVar23);
  _objc_release(ppppppuVar22);
  _objc_release(ppppppuVar21);
  _objc_release(ppuVar20);
  return pppppppuVar8;
}



/* Entry: 1064382e8; end: 10643860b; -[PayToPromoteOperaScopedServicesCreator initWithNetworkRequester:circumstanceEngine:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:adConfigProvider:collectionPrefetcher:playableViewModelGenerator:grapheneRegistry:discoverFeedDataMutator:snapchattersDataFetcher:networkConnectivityMonitor:locationProvider:blizzardLogger:adRenderDataParser:] */

undefined8 *
FUN_1064382e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126f12c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
  }
  _objc_release(param_16);
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



/* Entry: 10643860c; end: 1064386f3; -[PayToPromoteOperaScopedServicesCreator createPayToPromoteOperaScopedServices] */

void FUN_10643860c(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126ca848;
  _objc_alloc(PTR_PTR_1126ca848);
  func_0x00010c0090a0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064386f4; end: 106438733;  */

void FUN_1064386f4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd6700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106438734; end: 106438793; -[PayToPromoteOperaScopedServicesCreator _buildP2pPlugin] */

void FUN_106438734(void)

{
  _objc_alloc(PTR_PTR_1126ca850);
  func_0x00010c02f460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106438794; end: 106438853; -[PayToPromoteOperaScopedServicesCreator .cxx_destruct] */

void FUN_106438794(long param_1)

{
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



/* Entry: 106438854; end: 1064389db;  */

void FUN_106438854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064389dc; end: 106438b23;  */

void FUN_1064389dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0f0820(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  if (param_3 != 0) {
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  uVar3 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106438b24; end: 106438d0b;  */

void FUN_106438b24(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  double dVar6;
  
  puVar1 = PTR_PTR_1126b8d98;
  dVar6 = param_1;
  _objc_retain();
  func_0x00010c0f0860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  func_0x00010befc000(dVar6 - param_1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010c0f0880(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010c2ac460(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar3 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010bef2aa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106438d0c; end: 1064390c7; -[SCPayToPromoteOperaPlugin initWithNetworkRequester:circumstanceEngine:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:adConfigProvider:collectionPrefetcher:playableViewModelGenerator:grapheneRegistry:discoverFeedDataMutator:snapchattersDataFetcher:networkConnectivityMonitor:locationProvider:blizzardLogger:adRenderDataParser:] */

undefined8 *
FUN_106438d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
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
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126f12d0;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[2];
    puVar2[2] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[3];
    puVar2[3] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[4];
    puVar2[4] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[5];
    puVar2[5] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[6];
    puVar2[6] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[7];
    puVar2[7] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[8];
    puVar2[8] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[9];
    puVar2[9] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[10];
    puVar2[10] = param_14;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0xd];
    puVar2[0xd] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0xe];
    puVar2[0xe] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x10];
    puVar2[0x10] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0xf];
    puVar2[0xf] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x12];
    puVar2[0x12] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + 0xb1) = 0;
    _objc_retain(param_4);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[0x15];
    puVar2[0x15] = param_17;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[0x13];
    func_0x00010bf1f440();
    *(undefined1 *)(puVar2 + 0x16) = uVar1;
  }
  _objc_release(param_17);
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
  return puVar2;
}



/* Entry: 1064390c8; end: 1064390d3; -[SCPayToPromoteOperaPlugin setPlaylistItemController:] */

void FUN_1064390c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1064390d4; end: 10643918f; -[SCPayToPromoteOperaPlugin registeredEventsForOperaSession] */

void FUN_1064390d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_48 = puVar1;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_48;
  uVar7 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  func_0x00010be36bc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1 + 0x60;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar6;
  func_0x00010c0720c0(ppuVar6,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)ppuVar4 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf3df20(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar6;
    func_0x00010c0720c0(ppuVar6,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)ppuVar4 != 0) {
      func_0x00010bddf000(puVar1);
    }
  }
  else {
    puVar2 = puVar3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (puVar5 != (undefined *)0x0) {
      uVar8 = *(undefined8 *)(puVar1 + 0x90);
      puVar1 = puVar3;
      func_0x00010bfce400(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar8,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  _objc_release(puVar3);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 106439190; end: 10643930b; -[SCPayToPromoteOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_106439190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  if ((int)uVar5 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf3df20(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    if ((int)uVar5 != 0) {
      func_0x00010bddf000(param_1);
    }
  }
  else {
    lVar1 = lVar2;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      lVar1 = lVar2;
      func_0x00010bfce400(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5,param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar1);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10643930c; end: 10643930f; -[SCPayToPromoteOperaPlugin extraPropertiesProvider] */

void FUN_10643930c(void)

{
  return;
}



/* Entry: 106439310; end: 10643957b; -[SCPayToPromoteOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_106439310(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6,long param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar14 = *(long *)(param_2 + 0x88);
  ppuVar1 = param_5;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar2;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  if (lVar14 != 0) {
    ppuVar1 = param_5;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)PTR_PTR_1126c9a78;
    func_0x00010c1015e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar1);
    if ((param_7 != 0) && (ppuVar1 != ppuVar2)) {
      puVar3 = PTR_PTR_1126c9a78;
      func_0x00010bef5400();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR____kCFBooleanTrue_11034ab68;
      puStack_70 = PTR____kCFBooleanTrue_11034ab68;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_78 = puVar3;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar4;
      func_0x00010c0d3c80();
      _objc_release(puVar4);
      _objc_release(puVar3);
      uVar5 = *(ulong *)(param_2 + 0x68);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfe16c0();
      _objc_release(uVar5);
      if ((uVar6 & 1) == 0) {
        func_0x00010af4728c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar11);
        _objc_release(uVar5);
      }
      puVar3 = puVar11;
      func_0x00010bf51e00();
      puVar4 = PTR_PTR_1126c9a78;
      func_0x00010bef5400();
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = puVar9;
      ppuVar13 = &puStack_88;
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_88 = puVar4;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar1;
      (**(code **)(param_7 + 0x10))(param_7,puVar3);
      _objc_release(ppuVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar11);
    }
  }
  _objc_release(lVar14);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar13);
  ppuVar1 = ppuVar12;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar2;
  func_0x00010c117ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar7;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar7;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010bf52680(ppuVar7);
  if ((ppuVar1 == (undefined **)0x0) || (ppuVar2 == (undefined **)0x0)) {
    if (ppuVar13 != (undefined **)0x0) {
      (*(code *)ppuVar13[2])(ppuVar13,5);
    }
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    uVar15 = param_1;
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    func_0x00010c0ac100(param_1,uVar15,param_5);
  }
  else {
    ppuVar10 = ppuVar1;
    FUN_106438854(ppuVar1,ppuVar2,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_5[0xd]);
    puVar9 = param_5[0x10];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      func_0x00010c1d0640(param_5[0x10]);
      func_0x00010bf604e0(PTR_PTR_1126afec0);
      _objc_initWeak(auStack_140,param_5);
      puVar11 = param_5[1];
      func_0x00010c269d40(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_5[2];
      puVar4 = param_5[3];
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_188 = 0xc2000000;
      pcStack_180 = FUN_106439980;
      puStack_178 = &UNK_110922288;
      _objc_copyWeak(auStack_150,auStack_140);
      _objc_retain(ppuVar10);
      ppuStack_170 = ppuVar10;
      _objc_retain(ppuVar1);
      ppuStack_168 = ppuVar1;
      uStack_148 = param_1;
      _objc_retain(ppuVar12);
      ppuStack_160 = ppuVar12;
      _objc_retain(ppuVar13);
      ppuStack_158 = ppuVar13;
      func_0x00010846f16c(puVar11,7,&PTR____CFConstantStringClassReference_110e4f398,puVar3,puVar4,
                          ppuVar10,1,PTR___dispatch_main_q_11034be20,&puStack_190,param_5[4],
                          param_5[0x13],param_5[0x14],param_5[9],param_5[10],param_5[0x15]);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puVar11);
      _objc_release(ppuStack_158);
      _objc_release(ppuStack_160);
      _objc_release(ppuStack_168);
      _objc_release(ppuStack_170);
      _objc_destroyWeak(auStack_150);
      _objc_destroyWeak(auStack_140);
    }
    else {
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_106439954;
      puStack_120 = &UNK_11084aaa8;
      _objc_retain(ppuVar13);
      ppuStack_110 = ppuVar13;
      _objc_retain(puVar9);
      puStack_118 = puVar9;
      func_0x000100162d98("APPSTORE",&puStack_138);
      _objc_release(puStack_118);
      _objc_release(ppuStack_110);
    }
    _objc_release(puVar9);
  }
  _objc_release(ppuVar10);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar7);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  return;
}



/* Entry: 10643957c; end: 106439953; -[SCPayToPromoteOperaPlugin fetchDiscoverStoryWithAdResponse:completion:] */

void FUN_10643957c(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_4;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c117ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52680(puVar4);
  if ((puVar2 == (undefined *)0x0) || (puVar3 == (undefined *)0x0)) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,5);
    }
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    uVar9 = param_1;
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    func_0x00010c0ac100(param_1,uVar9,param_2);
  }
  else {
    puVar7 = puVar2;
    FUN_106438854(puVar2,puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x68));
    lVar6 = *(long *)(param_2 + 0x80);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x80));
      func_0x00010bf604e0(PTR_PTR_1126afec0);
      _objc_initWeak(auStack_b0,param_2);
      uVar8 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_106439980;
      puStack_e8 = &UNK_110922288;
      _objc_copyWeak(auStack_c0,auStack_b0);
      _objc_retain(puVar7);
      puStack_e0 = puVar7;
      _objc_retain(puVar2);
      puStack_d8 = puVar2;
      uStack_b8 = param_1;
      _objc_retain(param_4);
      puStack_d0 = param_4;
      _objc_retain(param_5);
      lStack_c8 = param_5;
      func_0x00010846f16c(uVar8,7,&PTR____CFConstantStringClassReference_110e4f398,uVar9,uVar1,
                          puVar7,1,PTR___dispatch_main_q_11034be20,&puStack_100,
                          *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x98),
                          *(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x48),
                          *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0xa8));
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar8);
      _objc_release(lStack_c8);
      _objc_release(puStack_d0);
      _objc_release(puStack_d8);
      _objc_release(puStack_e0);
      _objc_destroyWeak(auStack_c0);
      _objc_destroyWeak(auStack_b0);
    }
    else {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106439954;
      puStack_90 = &UNK_11084aaa8;
      _objc_retain(param_5);
      lStack_80 = param_5;
      _objc_retain(lVar6);
      lStack_88 = lVar6;
      func_0x000100162d98("APPSTORE",&puStack_a8);
      _objc_release(lStack_88);
      _objc_release(lStack_80);
    }
    _objc_release(lVar6);
  }
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106439954; end: 10643997f;  */

void FUN_106439954(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c282760(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010643997c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2 & 0xffffffff);
  return;
}



/* Entry: 106439980; end: 106439a2f;  */

void FUN_106439980(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bedb000(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdfdde0(*(undefined8 *)(param_1 + 0x48),lVar1);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106439a30; end: 106439ddf; -[SCPayToPromoteOperaPlugin _didFetchDiscoverStoryMetadataWithStory:error:compositeStoryId:publisherId:startFetchingTimeInSeconds:adResponse:completion:] */

void FUN_106439a30(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined1 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_1;
  FUN_106438b24(param_1,*(undefined8 *)(param_2 + 0x38),0,param_4 != 0 && param_5 == 0);
  if (param_4 != 0 && param_5 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106439de0;
    puStack_a8 = &UNK_1109222b8;
    _objc_retain(param_4);
    lStack_a0 = param_4;
    lStack_98 = param_2;
    func_0x00010beecc80(uVar1);
    _objc_release(uVar1);
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x80));
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x70));
    _objc_initWeak(auStack_c8,param_2);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca858;
    func_0x00010c108020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca860;
    puStack_90 = puVar2;
    func_0x00010bfb5340();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_106439e98;
    puStack_100 = &UNK_1108925c0;
    puVar7 = auStack_c8;
    _objc_copyWeak(auStack_d8);
    _objc_retain(param_6);
    uStack_f8 = param_6;
    _objc_retain(param_7);
    uStack_f0 = param_7;
    _objc_retain(param_8);
    uStack_e8 = param_8;
    uStack_d0 = param_1;
    _objc_retain(param_9);
    ppuStack_120 = &puStack_118;
    lStack_e0 = param_9;
    func_0x00010c107a60(uVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_release(lStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_c8);
    _objc_release(lStack_a0);
  }
  else {
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x80));
    puVar7 = (undefined1 *)0x3;
    (**(code **)(param_9 + 0x10))(param_9);
    lVar5 = param_5;
    func_0x00010bf6e340(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    func_0x00010c0ac100(param_1,uVar1,param_2);
    _objc_release(lVar5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_c8);
  lVar5 = param_4;
  __Unwind_Resume();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pcStack_128 = FUN_106439de0;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = *(undefined8 *)(lVar5 + 0x20);
  puVar8 = puVar7;
  uStack_150 = param_7;
  uStack_148 = param_6;
  lStack_140 = param_5;
  lStack_138 = param_4;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  uVar6 = SUB81(puVar8,0);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be70fc0(*(undefined8 *)(lVar5 + 0x28));
  func_0x00010bf070c0(puVar7);
  _objc_release(puVar7);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_106439e98;
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_106439f9c;
  puStack_1d0 = &UNK_110892cf8;
  uStack_190 = param_7;
  puStack_188 = puVar2;
  lStack_180 = lVar5;
  puStack_178 = puVar7;
  ppuStack_170 = &puStack_130;
  _objc_copyWeak(auStack_1a8,puVar3 + 0x40);
  uVar1 = *(undefined8 *)(puVar3 + 0x20);
  _objc_retain(uVar1);
  uVar9 = *(undefined8 *)(puVar3 + 0x28);
  uStack_1c8 = uVar1;
  _objc_retain(uVar9);
  uVar1 = *(undefined8 *)(puVar3 + 0x30);
  uStack_1c0 = uVar9;
  uStack_198 = uVar6;
  _objc_retain(uVar1);
  uStack_1a0 = *(undefined8 *)(puVar3 + 0x48);
  uVar9 = *(undefined8 *)(puVar3 + 0x38);
  uStack_1b8 = uVar1;
  _objc_retain(uVar9);
  uStack_1b0 = uVar9;
  func_0x0001000d76cc("APPSTORE",&puStack_1e8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1c8);
  _objc_destroyWeak(auStack_1a8);
  return;
}



/* Entry: 106439de0; end: 106439e97;  */

void FUN_106439de0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_2;
  _objc_retain(param_2);
  uVar2 = (undefined1)uVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be70fc0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf070c0(param_2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106439f9c;
  puStack_b0 = &UNK_110892cf8;
  _objc_copyWeak(auStack_88,puVar1 + 0x40);
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(puVar1 + 0x28);
  uStack_a8 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(puVar1 + 0x30);
  uStack_a0 = uVar5;
  uStack_78 = uVar2;
  _objc_retain(uVar4);
  uStack_80 = *(undefined8 *)(puVar1 + 0x48);
  uVar5 = *(undefined8 *)(puVar1 + 0x38);
  uStack_98 = uVar4;
  _objc_retain(uVar5);
  uStack_90 = uVar5;
  func_0x0001000d76cc("APPSTORE",&puStack_c8);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_88);
  return;
}



/* Entry: 106439e98; end: 106439f9b;  */

void FUN_106439e98(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106439f9c;
  puStack_70 = &UNK_110892cf8;
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  uStack_38 = param_2;
  _objc_retain(uVar1);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106439f9c; end: 106439fdb;  */

void FUN_106439f9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfddc0(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106439fdc; end: 10643a107; -[SCPayToPromoteOperaPlugin _didFetchDiscoverStoryMetadataAndMediaWithCompositeStoryId:publisherId:success:adResponse:startFetchingTimeInSeconds:completion:] */

void FUN_106439fdc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(param_8);
  uVar2 = param_1;
  FUN_106438b24(param_1,uVar1,1,param_6);
  if ((int)param_6 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x80));
    (**(code **)(param_8 + 0x10))(param_8,4);
    _objc_release(param_8);
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    func_0x00010c0ac100(param_1,uVar2,param_2);
  }
  else {
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x80));
    (**(code **)(param_8 + 0x10))(param_8,6);
    _objc_release(param_8);
  }
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


