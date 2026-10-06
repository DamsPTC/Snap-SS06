/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10795ff34; end: 10795ffe7; +[SCShakeLogFileManager saveScreenshot:screenshot:inPath:] */

undefined8
FUN_10795ff34(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    uVar1 = param_1;
    func_0x00010bfc2e00(param_1,param_2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    _UIImageJPEGRepresentation(0x3fe3333333333333,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010beeb940(param_1,param_2,&PTR____CFConstantStringClassReference_110ea6998,lVar2,uVar1
                       );
    _objc_release(lVar2);
    _objc_release(uVar1);
    return param_1;
  }
  return 0;
}



/* Entry: 107960cb0; end: 107960cd7;  */

void FUN_107960cb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107961204; end: 107961283; +[SCShakeSyncManager sharedInstance] */

void FUN_107961204(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (lRam0000000113727018 == 0) {
    lVar2 = param_1;
    _objc_alloc_init();
    lVar1 = lRam0000000113727018;
    lRam0000000113727018 = lVar2;
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  lVar1 = lRam0000000113727018;
  _objc_retain(lRam0000000113727018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1079614a4; end: 107961547; -[SCShakeSyncManager _transitionToStateRunner:wasBackedOff:] */

void FUN_1079614a4(ulong param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c0b5e20();
  if (((uVar1 & 1) == 0) && (((param_4 & 1) != 0 || (*(long *)(param_1 + 0x20) != param_3)))) {
    func_0x00010c1c11e0(param_1);
    if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bddef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanLogFilesInternal_112555568);
      return;
    }
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be0bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executePendingTicketInternal_1125608c0);
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdddf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkNextTicketInternal_112555168);
      return;
    }
  }
  return;
}



/* Entry: 107961c50; end: 107961c5b; -[SCShakeSyncManager mCurrentTicket] */

void FUN_107961c50(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 107961c9c; end: 107961ca7; -[SCShakeSyncManager mConfiguration] */

void FUN_107961c9c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 1079622cc; end: 1079622d3; -[SCShakeTicket mSubFeature] */

undefined8 FUN_1079622cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10796230c; end: 107962313; -[SCShakeTicket mShakeSensitivityType] */

undefined8 FUN_10796230c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10796234c; end: 107962353; -[SCShakeTicket mHasCameraRollAttachment] */

undefined1 FUN_10796234c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 1079623b4; end: 1079623bb; -[SCShakeTicket blizzardSessionID] */

undefined8 FUN_1079623b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1079623f4; end: 107962513; -[SCShakeTicket .cxx_destruct] */

void FUN_1079623f4(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107962640; end: 107962647; -[SCShakeTicketBuilder mFeature] */

undefined8 FUN_107962640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107962680; end: 107962687; -[SCShakeTicketBuilder mIsAutoTicket] */

undefined1 FUN_107962680(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1079626e8; end: 1079626ef; -[SCShakeTicketBuilder mNetworkConnectionType] */

undefined8 FUN_1079626e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107962750; end: 107962757; -[SCShakeTicketBuilder mViewControllerName] */

undefined8 FUN_107962750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107962790; end: 107962797; -[SCShakeTicketBuilder mHasVideoAttached] */

undefined1 FUN_107962790(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 1079627f8; end: 1079627ff; -[SCShakeTicketBuilder mOtherInfo] */

undefined8 FUN_1079627f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107962860; end: 107962867; -[SCShakeTicketBuilder blizzardSessionID] */

undefined8 FUN_107962860(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1079628a0; end: 1079628a7; -[SCShakeTicketBuilder safeModeEnabled] */

undefined1 FUN_1079628a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1079628e0; end: 107962a77; -[SCShakeTicketBuilder .cxx_destruct] */

void FUN_1079628e0(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107963428; end: 107963697;  */

void FUN_107963428(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_getMetaInfo_1125cf7b0);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_2;
    func_0x00010bfc7820();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      func_0x00010bf070e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
      func_0x00010bf070e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
    }
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_provideMetaInfoFiles__112624078);
  if ((uVar1 & 1) != 0) {
    _dispatch_group_enter(*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(*(undefined8 *)(param_1 + 0x30));
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar3);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c119960(param_2);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107964820; end: 10796498f; -[SCShakeTicketAdapter _fetchJiraLabelsForProject:infoProviderRegistry:additionalLabels:] */

void FUN_107964820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_5 == (undefined *)0x0) {
    _objc_retain(param_4);
    _objc_alloc_init();
  }
  else {
    _objc_retain(param_4);
    func_0x00010c0d3c80();
    puVar2 = param_5;
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107964910;
  puStack_48 = &UNK_1109f1da0;
  _objc_retain();
  puStack_40 = puVar2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97de0(param_4,param_2,&puStack_60);
  _objc_release(param_4);
  uVar1 = uStack_38;
  _objc_retain(puVar2);
  _objc_release(uVar1);
  _objc_release(puStack_40);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107965b00; end: 107965c7f; -[SCShakeTicketManager uploadShakeLogFiles:uploadUrl:configuration:onSuccess:onTransientError:onPermanentError:] */

void FUN_107965b00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  ppuVar3 = &puStack_c0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_107965c80;
  puStack_80 = &UNK_1108ab6a0;
  uStack_78 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar2 = &puStack_98;
  _objc_retainBlock(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  puStack_b0 = &UNK_107965c90;
  puStack_a8 = &UNK_1108ab6d0;
  uStack_a0 = param_7;
  _objc_retain(param_7);
  _objc_retainBlock(&puStack_c0);
  uVar4 = param_5;
  func_0x00010c0d7ea0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c28e6c0(uVar4,param_2,param_3,param_4,*(undefined8 *)(param_1 + 8),ppuVar2,ppuVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_a0);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 1079662d4; end: 1079666d7;  */

void FUN_1079662d4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),&PTR____CFConstantStringClassReference_110ea6b58);
    goto LAB_1079666a8;
  }
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar3 = PTR_PTR_1126d5838;
  _objc_alloc();
  func_0x00010c0206e0();
  if (puVar3 == (undefined *)0x0) {
LAB_10796646c:
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_2,param_3);
  }
  else {
    puVar4 = puVar3;
    func_0x00010c252ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 == (undefined *)0x0) goto LAB_10796646c;
    puVar4 = puVar3;
    func_0x00010bf148c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 != (undefined *)0x0) {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c0b5de0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf148c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c1fd200(uVar12);
      _objc_release(puVar4);
      _objc_release(uVar8);
    }
    puVar4 = puVar3;
    func_0x00010c252ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c28ea80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c071f40();
    _objc_release(puVar9);
    if ((int)puVar6 == 0) {
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c071f40();
      _objc_release(puVar9);
      if ((int)puVar6 != 0) {
        if ((puVar5 != (undefined *)0x0) &&
           (puVar9 = puVar5, func_0x00010c08fa60(), puVar9 != (undefined *)0x0)) goto LAB_1079664e4;
        iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
        func_0x00010c0b6000();
        if (iVar1 != 0) {
          lVar7 = *(long *)(param_1 + 0x50);
          pcVar11 = *(code **)(lVar7 + 0x10);
          ppuVar10 = &PTR____CFConstantStringClassReference_110ea6bb8;
          uVar8 = 0;
          goto LAB_107966564;
        }
        lVar7 = *(long *)(param_1 + 0x48);
        pcVar11 = *(code **)(lVar7 + 0x10);
        puVar9 = (undefined *)0x0;
        goto LAB_107966618;
      }
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c071f40();
      _objc_release(puVar9);
      if ((int)puVar6 == 0) {
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c071f40();
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((int)puVar6 == 0) {
          lVar7 = *(long *)(param_1 + 0x30);
          puVar6 = puVar4;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar9);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar7 + 0x10))(lVar7,puVar9);
          _objc_release(puVar9);
        }
        else {
          puVar6 = puVar3;
          func_0x00010bf66200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          (**(code **)(*(long *)(param_1 + 0x50) + 0x10))(*(long *)(param_1 + 0x50),0,puVar9,0);
          puVar6 = puVar9;
        }
        _objc_release(puVar6);
      }
      else {
        lVar7 = *(long *)(param_1 + 0x50);
        pcVar11 = *(code **)(lVar7 + 0x10);
        ppuVar10 = &PTR____CFConstantStringClassReference_110ea6bd8;
        uVar8 = 1;
LAB_107966564:
        (*pcVar11)(lVar7,uVar8,ppuVar10,0);
      }
    }
    else if ((puVar5 == (undefined *)0x0) ||
            (puVar9 = puVar5, func_0x00010c08fa60(), puVar9 == (undefined *)0x0)) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    }
    else {
LAB_1079664e4:
      lVar7 = *(long *)(param_1 + 0x48);
      pcVar11 = *(code **)(lVar7 + 0x10);
      puVar9 = puVar5;
LAB_107966618:
      (*pcVar11)(lVar7,puVar9);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(0);
LAB_1079666a8:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1079677a8; end: 10796786f; +[SCShakeTicketTable sharedInPath:] */

void FUN_1079677a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    puStack_48 = &UNK_107967870;
    puStack_40 = &UNK_110842e18;
    _objc_retain(param_3);
    lStack_38 = param_3;
    if (lRam0000000113727048 != -1) {
      func_0x00010002a2fc(0x113727048,&puStack_58);
    }
    lVar1 = lStack_38;
    uVar2 = uRam0000000113727040;
    _objc_retain(uRam0000000113727040);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1079685f4; end: 107968db3; -[SCShakeTicketTable getNextPendingTicket] */

void FUN_1079685f4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_1;
  if (*(long *)(param_1 + 8) == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_sync_enter(param_1);
    lVar7 = *(long *)(param_1 + 8);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    ppuStack_50 = &PTR____CFConstantStringClassReference_110ea6c58;
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b000(lVar7,param_2,uVar8,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    lVar2 = lVar7;
    func_0x00010bfb1b60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126d5828;
      _objc_alloc_init();
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6c78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c12e0(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110def758);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010b767dd8();
      func_0x00010c1c1460(puVar3,param_2,lVar5);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110e69a58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1440(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110dd3178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1220(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110db1138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1240(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110e69818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c14c0(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6c98);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c13e0(puVar3,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010bf1f2e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6cb8);
      func_0x00010c1c1300(puVar3,param_2,lVar4);
      lVar4 = lVar2;
      func_0x00010bf1f2e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6cd8);
      func_0x00010c1c14a0(puVar3,param_2,lVar4);
      lVar4 = lVar2;
      func_0x00010bf1f2e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6cf8);
      func_0x00010c1c1540(puVar3,param_2,lVar4);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar4 = lVar2;
      func_0x00010c0b4ac0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6d18);
      func_0x00010c0df7a0(puVar10,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c13a0(puVar3,param_2,puVar10);
      _objc_release(puVar10);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6d38);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010b767714();
      func_0x00010c1c13c0(puVar3,param_2,lVar5);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6d58);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010b767f1c();
      func_0x00010c1c1480(puVar3,param_2,lVar5);
      _objc_release(lVar4);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar4 = lVar2;
      func_0x00010c0b4ac0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e06df8);
      func_0x00010c0df7a0(puVar10,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c11c0(puVar3,param_2,puVar10);
      _objc_release(puVar10);
      lVar4 = lVar2;
      func_0x00010bf1f2e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6d78);
      func_0x00010c1c1520(puVar3,param_2,lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6d98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1500(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6db8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c14e0(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6dd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1360(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010bf1f2e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6df8);
      func_0x00010c1c1280(puVar3,param_2,lVar4);
      lVar4 = lVar2;
      func_0x00010bf1f2e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6e18);
      func_0x00010c1c12a0(puVar3,param_2,lVar4);
      lVar4 = lVar2;
      func_0x00010bf1f2e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6e38);
      func_0x00010c1c1260(puVar3,param_2,lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6e58);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1180(puVar3,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110e69918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1420(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110e69db8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1340(puVar3,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6e78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179d60(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dfd80(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6eb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c171b80(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110e69898);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162820(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110e698b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b7880(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6ed8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b7ac0(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010bf1f2e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e69838);
      func_0x00010c1fbba0(puVar3,param_2,lVar4);
      lVar4 = lVar2;
      func_0x00010bf1f2e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6ef8);
      func_0x00010c1f51a0(puVar3,param_2,lVar4);
      lVar4 = lVar2;
      func_0x00010bf63a20(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6f18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c218e40(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c25d260(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6f38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21d080(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010bf1f2e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ea6f58);
      func_0x00010c1c7600(puVar3,param_2,lVar4);
      puVar10 = puVar3;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar7);
    _objc_sync_exit(param_1);
    _objc_release();
    unaff_x19 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(unaff_x19);
  __Unwind_Resume();
  lVar2 = lVar6;
  func_0x00010bdf8000();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126d5850;
  _objc_alloc();
  lVar7 = lVar2;
  func_0x00010c0f5800(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034700(puVar10,param_2,lVar7);
  uVar8 = *(undefined8 *)(lVar6 + 8);
  *(undefined **)(lVar6 + 8) = puVar10;
  _objc_release(uVar8);
  _objc_release(lVar7);
  uVar9 = *(undefined8 *)(lVar6 + 8);
  uVar8 = uVar9;
  func_0x00010c252980(uVar9,param_2,&PTR____CFConstantStringClassReference_110ea6f78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9afc0(uVar9,param_2,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  lVar7 = *(long *)(lVar6 + 8);
  if ((lVar7 != 0) && (func_0x00010c088a40(), (int)lVar7 != 0xe)) {
    iVar1 = (int)*(undefined8 *)(lVar6 + 8);
    func_0x00010c088a40();
    if (iVar1 != 5) {
      iVar1 = (int)*(undefined8 *)(lVar6 + 8);
      func_0x00010c088a40();
      if (iVar1 != 0xb) goto code_r0x000107968ee0;
    }
  }
  func_0x00010bf6bac0(lVar6);
  puVar10 = PTR_PTR_1126d5850;
  _objc_alloc();
  lVar7 = lVar2;
  func_0x00010c0f5800(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034700(puVar10,param_2,lVar7);
  uVar8 = *(undefined8 *)(lVar6 + 8);
  *(undefined **)(lVar6 + 8) = puVar10;
  _objc_release(uVar8);
  _objc_release(lVar7);
code_r0x000107968ee0:
  uVar9 = *(undefined8 *)(lVar6 + 8);
  uVar8 = uVar9;
  func_0x00010c252980(uVar9,param_2,&PTR____CFConstantStringClassReference_110ea6f98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar9,param_2,uVar8);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(lVar6 + 8);
  func_0x00010c252980(uVar8,param_2,&PTR____CFConstantStringClassReference_110ea6fb8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = uVar8;
  _objc_release(uVar9);
  uVar8 = *(undefined8 *)(lVar6 + 8);
  func_0x00010c252980(uVar8,param_2,&PTR____CFConstantStringClassReference_110ea6fd8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x18) = uVar8;
  _objc_release(uVar9);
  uVar8 = *(undefined8 *)(lVar6 + 8);
  func_0x00010c252980(uVar8,param_2,&PTR____CFConstantStringClassReference_110ea6ff8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar6 + 0x20);
  *(undefined8 *)(lVar6 + 0x20) = uVar8;
  _objc_release(uVar9);
  uVar8 = *(undefined8 *)(lVar6 + 8);
  func_0x00010c252980(uVar8,param_2,&PTR____CFConstantStringClassReference_110ea7018);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar8;
  _objc_release(uVar9);
  uVar8 = *(undefined8 *)(lVar6 + 8);
  func_0x00010c252980(uVar8,param_2,&PTR____CFConstantStringClassReference_110ea7038);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar6 + 0x30);
  *(undefined8 *)(lVar6 + 0x30) = uVar8;
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107969464; end: 1079694ab;  */

void FUN_107969464(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar1 + 0x50);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__uploadTicket_112597138);
      return;
    }
    if (lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bde41f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__compressFiles_112556a18);
      return;
    }
  }
  else {
    if (lVar2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bee5870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__uploadFiles_112596fc0);
      return;
    }
    if (lVar2 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be68630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__onComplete_112577b28);
      return;
    }
  }
  return;
}



/* Entry: 107969a9c; end: 107969b8f;  */

void FUN_107969a9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d57f8;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_3);
  func_0x00010c2bd3c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ba40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0b5de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b060(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar4);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be819b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processNextStep__11257e008,3);
  return;
}



/* Entry: 107969ec4; end: 107969f47; -[SCShakeTicketUploader .cxx_destruct] */

void FUN_107969ec4(long param_1)

{
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



/* Entry: 10796a268; end: 10796a27f; -[SCShakeUploadThrottleController _computeBackoff:] */

long FUN_10796a268(undefined8 param_1,undefined8 param_2,long param_3)

{
  return (long)((double)param_3 * (double)param_3) * 100;
}



/* Entry: 10796a448; end: 10796a44f; -[SCSnapAirConfiguration workDirectory] */

undefined8 FUN_10796a448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10796a5f0; end: 10796a5fb; -[SCNotificationProcessingCompletion .cxx_destruct] */

void FUN_10796a5f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10796a868; end: 10796a86f; -[SCNativeNotificationProcessedEvent nativeClientReceiveTimestampMs] */

undefined8 FUN_10796a868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10796aac4; end: 10796abc3; -[SCRemixOperaMetadata isEqual:] */

long FUN_10796aac4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10796ab9c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10796aba8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10796aba8;
              }
              goto LAB_10796ab9c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10796aba8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10796acc4; end: 10796accf;  */

bool FUN_10796acc4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10796afdc; end: 10796b043; +[MFCOverlay descriptor] */

void FUN_10796afdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b65cf0,
                        &PTR____CFConstantStringClassReference_110ea71b8,&PTR_DAT_11323b508,
                        &PTR_DAT_11323b520,1,0x10,0x1c);
    puRam0000000113727098 = puVar1;
  }
  return;
}



/* Entry: 10796b300; end: 10796b46b; -[SCDeepLinkingUrlInterceptor initWithInitialConfig:circumstanceEngine:application:alertViewCoordinator:internalDeeplinkHandlerBlock:] */

undefined1 *
FUN_10796b300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f8fb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_6);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_4;
    func_0x00010bf1f440();
    if ((int)uVar2 != 0) {
      puVar3 = PTR_PTR_1126d5858;
      _objc_alloc();
      func_0x00010c01dba0();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
      *(undefined **)((long)puVar1 + 0x48) = puVar3;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10796bbec; end: 10796bcef; -[SCDeepLinkingUrlInterceptor _shouldInterceptURL:allowUniversalDeepLink:isWebViewFullyAppeared:isWebViewPreloaded:isSubframe:] */

ulong FUN_10796bbec(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,ulong param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c06c500(param_1,param_2,param_3);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = param_1, func_0x00010c072680(param_1,param_2,param_3,param_4), (int)uVar2 == 0)) {
LAB_10796bc60:
    uVar2 = 0;
    goto LAB_10796bcd0;
  }
  if ((param_5 & 1) == 0) {
    if ((param_6 & 1) != 0) goto LAB_10796bc60;
  }
  else {
    uVar2 = 0;
    if (((param_7 & 1) != 0) || ((*(byte *)(param_1 + 8) & 1) != 0)) goto LAB_10796bcd0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_10796bcb0:
    uVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(uVar1);
    uVar2 = uVar1;
    func_0x00010bf2cf00();
  }
  else {
    uVar1 = param_1;
    func_0x00010be36400(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if (uVar2 == 0) {
LAB_10796bca8:
      _objc_release(uVar1);
      goto LAB_10796bcb0;
    }
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf4b900(uVar2,param_2,uVar1);
    if ((uVar2 & 1) == 0) goto LAB_10796bca8;
    uVar2 = 0;
  }
  _objc_release(uVar1);
LAB_10796bcd0:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10796c2bc; end: 10796c32f; -[SCDeepLinkingUrlInterceptor shouldInterceptURL:] */

long FUN_10796c2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c06c500(param_1,param_2,param_3);
  if ((int)lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf2cf00();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10796c948; end: 10796c9cf; -[SCDeepLinkingUrlInterceptor _cancelDeeplinkHandler:isWebViewLoadedSuccessfully:] */

void FUN_10796c948(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 8) = 0;
  if ((param_4 & 1) == 0) {
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
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10796cff4; end: 10796d1f3; -[SCDeepLinkingUrlInterceptor _hostForWebURL:] */

void FUN_10796cff4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
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
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc8d58);
  if (((uVar1 & 1) != 0) ||
     (uVar1 = uVar2,
     func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc8d78),
     (int)uVar1 != 0)) {
    uVar1 = param_3;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_1111816b8;
    func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_1111816b8,param_2,&uStack_130,auStack_e8,
                        0x10);
    if (ppuVar4 != (undefined **)0x0) {
      lVar7 = *plStack_120;
      do {
        ppuVar8 = (undefined **)0x0;
        uVar1 = uVar3;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_1111816b8);
          }
          uVar6 = *(undefined8 *)(lStack_128 + (long)ppuVar8 * 8);
          uVar5 = uVar1;
          func_0x00010bfda7c0(uVar1,param_2,uVar6);
          uVar3 = uVar1;
          if ((int)uVar5 != 0) {
            func_0x00010c08fa60(uVar6);
            func_0x00010c260c00(uVar1,param_2,uVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar1);
          }
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
          uVar1 = uVar3;
        } while (ppuVar4 != ppuVar8);
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_1111816b8;
        func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_1111816b8,param_2,&uStack_130,
                            auStack_e8,0x10);
      } while (ppuVar4 != (undefined **)0x0);
    }
    uVar1 = uVar3;
    func_0x00010c08fa60();
    if (uVar1 != 0) {
      _objc_retain(uVar3);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(param_3 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10796d8b8; end: 10796d8bf;  */

void FUN_10796d8b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchatterFetcher_11266eb30);
  return;
}



/* Entry: 10796e9a8; end: 10796ea0b; -[SCStoriesChromeInteractionSession _handleSubscribingActionFailure:cheetahStory:] */

void FUN_10796e9a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000108f217fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b23b28(param_4,param_3,uVar1,*(undefined8 *)(param_1 + 0x88));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10796f2d8; end: 10796f36b; -[SCStoriesChromeInteractionSession didDismissProfile] */

void FUN_10796f2d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18eba0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0f60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10796f9bc; end: 10796f9f3;  */

void FUN_10796f9bc(void)

{
  return;
}



/* Entry: 107970848; end: 10797192b; -[SCStoriesSharingSession operaViewDidSendEvent:page:params:] */

void FUN_107970848(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong unaff_x21;
  undefined *puStack_110;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126c9a58;
  uVar6 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00();
  _objc_release(uVar6);
  if ((int)puVar3 == 0) goto LAB_10797148c;
  uVar6 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar6 = uVar18;
  _objc_opt_isKindOfClass(uVar18,puVar3);
  unaff_x21 = uVar18;
  if ((uVar6 & 1) == 0) {
    unaff_x21 = 0;
  }
  _objc_retain(unaff_x21);
  _objc_release(uVar18);
  puVar3 = PTR_PTR_1126c9310;
  func_0x00010c06dca0();
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = param_4;
    _objc_release(uVar4);
    uVar6 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = uVar18;
    _objc_release(uVar4);
    _objc_release(uVar6);
    if (*(ulong *)(param_1 + 0x10) != unaff_x21) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      _objc_release(uVar4);
      _objc_retain(unaff_x21);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(ulong *)(param_1 + 0x10) = unaff_x21;
      _objc_release(uVar4);
    }
    uVar6 = param_3;
    func_0x000107b27f14(param_3,param_4,param_5);
    if ((uVar6 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      func_0x000107a59624();
      if (lVar5 != 0x1c) {
        uVar6 = *(ulong *)(param_1 + 0x10);
        func_0x00010853a378();
        if (((uVar6 & 1) == 0) && (lVar5 != 0x1a)) {
          uVar6 = *(ulong *)(param_1 + 0x10);
          func_0x000108539d58();
          if ((uVar6 & 1) == 0) {
            func_0x00010853a244();
          }
        }
      }
      iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010853b70c();
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c2923e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010853acb4(uVar4,uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
      }
      puVar3 = PTR_PTR_1126b1a18;
      _objc_alloc();
      lVar5 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar5);
      lVar8 = lVar5;
      func_0x00010c27f040();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0f1880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2220();
      puVar10 = PTR_PTR_1126b2cf0;
      func_0x00010bf4f080(PTR_PTR_1126b2cf0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c048740();
      _objc_release(uVar6);
      _objc_release(puVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar5);
      puVar10 = PTR_PTR_1126b2330;
      func_0x00010c0e9c40(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      uVar18 = param_3;
      if ((int)uVar6 == 0) {
        puVar10 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar6 == 0) {
          puVar14 = PTR_PTR_1126b2ea8;
          func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar14);
          _objc_release(puVar10);
          if ((int)uVar6 != 0) goto LAB_107970df4;
          puVar10 = PTR_PTR_1126b2d30;
          func_0x00010bf940a0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar10);
          if ((int)uVar6 != 0) {
            lVar5 = param_1 + 0x40;
            _objc_loadWeakRetained(lVar5);
            lVar8 = lVar5;
            func_0x00010c2bf380();
            _objc_retainAutoreleasedReturnValue();
            puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a8 = 0xc2000000;
            puStack_a0 = &UNK_10797192c;
            puStack_98 = &UNK_110842e18;
            lStack_90 = param_1;
            func_0x00010c2bf1c0();
            _objc_release(lVar8);
            _objc_release(lVar5);
            goto LAB_107970bd0;
          }
          puVar10 = PTR_PTR_1126b2d30;
          func_0x00010c15c9e0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010c0720c0();
          if ((uVar6 & 1) == 0) {
            puVar14 = PTR_PTR_1126b2d30;
            func_0x00010c22a700(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_3;
            func_0x00010c0720c0();
            if ((int)uVar6 != 0) {
              _objc_release(puVar14);
              goto LAB_107971128;
            }
            puVar17 = PTR_PTR_1126b2d30;
            func_0x00010bf52060(PTR_PTR_1126b2d30);
            uVar6 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar17);
            _objc_release(puVar14);
            _objc_release(puVar10);
            if ((uVar6 & 1) == 0) goto LAB_107970bd0;
          }
          else {
LAB_107971128:
            _objc_release(puVar10);
          }
          lVar5 = param_1 + 0x40;
          _objc_loadWeakRetained(lVar5);
          lVar8 = lVar5;
          func_0x00010c27f040();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c27f020();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar9;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar15;
          func_0x00010c2a71e0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = param_4;
          func_0x000107dd9cf0(param_4,lVar16);
          _objc_release(lVar16);
          _objc_release(lVar15);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar5);
          if ((uVar18 & 1) == 0) goto LAB_107970bd0;
        }
        else {
          _objc_release(puVar10);
LAB_107970df4:
          if (((*(long *)(param_1 + 0x30) != 7) &&
              (uVar6 = unaff_x21, func_0x000108539a68(), (uVar6 & 1) == 0)) &&
             ((uVar6 = *(long *)(param_1 + 0x30) - 0x54, 0x13 < uVar6 ||
              ((1L << (uVar6 & 0x3f) & 0x80021U) == 0)))) {
            lVar5 = param_1 + 0x40;
            _objc_loadWeakRetained(lVar5);
            lVar8 = lVar5;
            func_0x00010c2bf380();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2bf1c0();
            _objc_release(lVar8);
            _objc_release(lVar5);
            func_0x00010be11480(param_1);
            uVar6 = unaff_x21;
            func_0x00010853959c();
            if ((((uVar6 & 1) != 0) || (uVar6 = unaff_x21, func_0x000108539930(), (int)uVar6 != 0))
               && (*(long *)(param_1 + 0x30) == 0x2b)) {
              func_0x00010be10ae0(param_1);
            }
            goto LAB_107970bd0;
          }
        }
        goto LAB_10797146c;
      }
      uVar6 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c067fc0();
      *(ulong *)(param_1 + 0x30) = uVar12;
      _objc_release(uVar11);
      _objc_release(uVar6);
      *(undefined1 *)(param_1 + 0x16a) = 0;
LAB_107970bd0:
      puVar10 = PTR_PTR_1126b2d30;
      func_0x00010c15c9e0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      if ((int)uVar6 == 0) {
        puVar10 = PTR_PTR_1126b2d30;
        func_0x00010bf52060(PTR_PTR_1126b2d30);
        uVar6 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar10);
        if ((int)uVar6 == 0) {
          puVar10 = PTR_PTR_1126b2d30;
          func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar10);
          if ((int)uVar6 == 0) {
            puVar10 = PTR_PTR_1126b2d30;
            func_0x00010c149e20(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar10);
            if ((int)uVar6 == 0) {
              puVar10 = PTR_PTR_1126b2d30;
              func_0x00010c22a700(PTR_PTR_1126b2d30);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar10);
              if ((int)uVar6 == 0) {
                puVar10 = PTR_PTR_1126b2d30;
                func_0x00010c0dc460(PTR_PTR_1126b2d30);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = param_3;
                func_0x00010c0720c0();
                if ((uVar6 & 1) == 0) {
                  uVar6 = param_3;
                  func_0x00010c0720c0();
                  _objc_release(puVar10);
                  if ((uVar6 & 1) == 0) {
                    puVar10 = PTR_PTR_1126b2338;
                    func_0x00010c23c600(PTR_PTR_1126b2338);
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = param_3;
                    func_0x00010c0720c0();
                    _objc_release(puVar10);
                    if ((int)uVar6 == 0) {
                      puVar10 = PTR_PTR_1126b2338;
                      func_0x00010c23c620(PTR_PTR_1126b2338);
                      _objc_retainAutoreleasedReturnValue();
                      uVar6 = param_3;
                      func_0x00010c0720c0();
                      _objc_release(puVar10);
                      if ((int)uVar6 == 0) {
                        puVar10 = PTR_PTR_1126b2338;
                        func_0x00010c0f60e0(PTR_PTR_1126b2338);
                        _objc_retainAutoreleasedReturnValue();
                        uVar6 = param_3;
                        func_0x00010c0720c0();
                        _objc_release(puVar10);
                        if ((int)uVar6 == 0) {
                          puVar10 = PTR_PTR_1126b2338;
                          func_0x00010c13d9e0(PTR_PTR_1126b2338);
                          _objc_retainAutoreleasedReturnValue();
                          uVar6 = param_3;
                          func_0x00010c0720c0();
                          _objc_release(puVar10);
                          if ((int)uVar6 == 0) {
                            uVar6 = *(ulong *)(param_1 + 0x10);
                            func_0x000108539a68();
                            if ((uVar6 & 1) == 0) {
                              uVar6 = *(ulong *)(param_1 + 0x10);
                              func_0x00010853a0e0();
                              if ((uVar6 & 1) != 0) goto LAB_107971728;
                              iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
                              func_0x00010853a704();
                              if (iVar2 == 0) goto LAB_10797146c;
                              uVar18 = *(ulong *)(param_1 + 0xf8);
                              func_0x00010c269d40();
                              _objc_retainAutoreleasedReturnValue();
                              uVar6 = uVar18;
                              func_0x00010bf1f3c0();
                              if ((int)uVar6 != 0) {
                                bVar1 = true;
                                goto LAB_10797172c;
                              }
                            }
                            else {
LAB_107971728:
                              bVar1 = false;
LAB_10797172c:
                              if ((((*(byte *)(param_1 + 0x168) & 1) == 0) &&
                                  ((*(byte *)(param_1 + 0x169) & 1) == 0)) &&
                                 ((*(byte *)(param_1 + 0x16a) & 1) == 0)) {
                                lVar5 = param_1 + 0x40;
                                _objc_loadWeakRetained();
                                lVar8 = lVar5;
                                func_0x00010c27f040();
                                _objc_retainAutoreleasedReturnValue();
                                lVar9 = lVar8;
                                func_0x00010c27f020();
                                _objc_retainAutoreleasedReturnValue();
                                lVar15 = lVar9;
                                func_0x00010c29bf00();
                                _objc_retainAutoreleasedReturnValue();
                                lVar16 = lVar15;
                                func_0x00010c2a71e0();
                                _objc_retainAutoreleasedReturnValue();
                                if (lVar16 == 0) {
                                  uVar6 = 0;
                                }
                                else {
                                  puVar10 = PTR_PTR_1126b2ea8;
                                  func_0x00010c268600(PTR_PTR_1126b2ea8);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar6 = param_3;
                                  func_0x00010c0720c0();
                                  _objc_release(puVar10);
                                }
                                _objc_release(lVar16);
                                _objc_release(lVar15);
                                _objc_release(lVar9);
                                _objc_release(lVar8);
                                _objc_release(lVar5);
                                if (bVar1) {
                                  _objc_release(uVar18);
                                  if ((uVar6 & 1) != 0) {
LAB_107971868:
                                    puVar10 = PTR_PTR_1126c3320;
                                    func_0x00010c0729e0();
                                    if (((ulong)puVar10 & 1) == 0) {
                                      _objc_initWeak(auStack_b8,param_1);
                                      uVar7 = *(undefined8 *)(param_1 + 0x170);
                                      _objc_copyWeak(auStack_c0,auStack_b8);
                                      _objc_retain(puVar3);
                                      func_0x00010c0f7fc0(uVar7);
                                      _objc_release(puVar3);
                                      _objc_destroyWeak(auStack_c0);
                                      _objc_destroyWeak(auStack_b8);
                                    }
                                  }
                                }
                                else if ((int)uVar6 != 0) goto LAB_107971868;
                                goto LAB_10797146c;
                              }
                              if (!bVar1) goto LAB_10797146c;
                            }
                            _objc_release(uVar18);
                          }
                          else {
                            *(undefined1 *)(param_1 + 0x169) = 0;
                          }
                        }
                        else {
                          *(undefined1 *)(param_1 + 0x169) = 1;
                        }
                      }
                      else {
                        *(undefined1 *)(param_1 + 0x168) = 0;
                      }
                    }
                    else {
                      *(undefined1 *)(param_1 + 0x168) = 1;
                    }
                    goto LAB_10797146c;
                  }
                }
                else {
                  _objc_release(puVar10);
                }
                uVar6 = unaff_x21;
                func_0x00010bf5b080();
                _objc_retainAutoreleasedReturnValue();
                uVar18 = uVar6;
                func_0x00010bf5b440();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar6);
                uVar6 = uVar18;
                func_0x00010c08fa60();
                if (uVar6 == 0) {
                  _objc_release(uVar18);
                }
                else {
                  func_0x00010be2cf20(param_1);
                  _objc_release(uVar18);
                }
              }
              else {
                if (param_5 == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar18 = param_5;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = PTR_PTR_1126d52f8;
                  _objc_opt_class(PTR_PTR_1126d52f8);
                  uVar11 = uVar18;
                  _objc_opt_isKindOfClass(uVar18,puVar10);
                  uVar6 = uVar18;
                  if ((uVar11 & 1) == 0) {
                    uVar6 = 0;
                  }
                  _objc_retain(uVar6);
                  _objc_release(uVar18);
                }
                uVar13 = *(undefined8 *)(param_1 + 0x10);
                func_0x00010bf5b080(uVar13);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar13;
                func_0x00010bf5bc00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010beb1c20(param_1);
                _objc_release(uVar7);
                _objc_release(uVar13);
                _objc_release(uVar6);
              }
            }
            else {
              lVar5 = param_1 + 0x40;
              _objc_loadWeakRetained(lVar5);
              lVar8 = lVar5;
              func_0x00010bf99b80();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_88 = &PTR____CFConstantStringClassReference_110df81b8;
              uVar7 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              uStack_80 = uVar7;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0eb7c0(lVar8);
              _objc_release(puVar10);
              _objc_release(uVar7);
              _objc_release(lVar8);
              _objc_release(lVar5);
            }
          }
          else {
            func_0x00010c0e00e0(param_5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            func_0x000108f48354(*(undefined8 *)(param_1 + 0xe8));
            func_0x00010bdfa520(param_1);
          }
        }
        else {
          func_0x00010be279e0(param_1);
        }
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 400);
        *(undefined8 *)(param_1 + 400) = 0;
        _objc_release(uVar7);
        lVar5 = param_1;
        func_0x00010bdd9d80();
        if ((int)lVar5 != 0) {
          uVar13 = *(undefined8 *)(param_1 + 0x70);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar13;
          func_0x00010c07f560();
          _objc_release(uVar13);
          if ((int)uVar7 != 0) {
            uVar6 = *(ulong *)(param_1 + 8);
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR_PTR_1126b2d20;
            func_0x00010c24afc0(PTR_PTR_1126b2d20);
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            _objc_release(uVar6);
            puVar10 = PTR_PTR_1126ae720;
            _objc_opt_class(PTR_PTR_1126ae720);
            uVar11 = uVar18;
            _objc_opt_isKindOfClass(uVar18,puVar10);
            uVar6 = uVar18;
            if ((uVar11 & 1) == 0) {
              uVar6 = 0;
            }
            _objc_retain(uVar6);
            _objc_release(uVar18);
            uVar18 = uVar6;
            func_0x00010c269d40(uVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            uVar7 = *(undefined8 *)(param_1 + 0x70);
            func_0x00010c269d40(uVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1075e0();
            _objc_release(uVar7);
            _objc_release(uVar18);
          }
        }
        uVar6 = *(ulong *)(param_1 + 0x10);
        func_0x000108539a68();
        if ((uVar6 & 1) == 0) {
          uVar6 = *(ulong *)(param_1 + 0x10);
          func_0x00010853a378();
          if ((uVar6 & 1) != 0) goto LAB_107971250;
          uVar6 = *(ulong *)(param_1 + 0x10);
          func_0x00010853a0e0();
          if ((uVar6 & 1) != 0) goto LAB_107971250;
          iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
          func_0x00010853a704();
          if (iVar2 != 0) goto LAB_107971250;
          lVar5 = 0;
        }
        else {
LAB_107971250:
          lVar5 = param_1;
          func_0x00010be1bc40(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
        uVar6 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        puVar10 = PTR_PTR_1126d5878;
        _objc_opt_class(PTR_PTR_1126d5878);
        uVar11 = uVar18;
        _objc_opt_isKindOfClass(uVar18,puVar10);
        uVar6 = uVar18;
        if ((uVar11 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar18);
        uVar18 = uVar6;
        func_0x00010c291960();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar6 = uVar18;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar18);
        if (uVar6 == 0) {
          puStack_110 = PTR____NSArray0__struct_11034ab48;
        }
        else {
          puStack_110 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_78 = uVar6;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar10 = PTR_PTR_1126b5bf0;
        func_0x00010c0ca740(PTR_PTR_1126b5bf0);
        _objc_retainAutoreleasedReturnValue();
        uVar18 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        uVar11 = uVar18;
        func_0x00010bf529e0();
        if (uVar11 != 0) {
          puVar10 = puStack_110;
          func_0x00010bf09f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puStack_110);
          puStack_110 = puVar10;
        }
        lVar8 = param_1 + 0x40;
        _objc_loadWeakRetained(lVar8);
        lVar9 = lVar8;
        func_0x00010c27f040();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar9;
        func_0x00010c0f1880();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010bf5b080(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar13;
        func_0x00010bf5bc00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be47a80(param_1);
        _objc_release(uVar7);
        _objc_release(uVar13);
        _objc_release(lVar15);
        _objc_release(lVar9);
        _objc_release(lVar8);
        *(undefined1 *)(param_1 + 0x16a) = 1;
        _objc_release(uVar18);
        _objc_release(puStack_110);
        _objc_release(uVar6);
        _objc_release(lVar5);
      }
LAB_10797146c:
      _objc_release(puVar3);
      _objc_release(uVar4);
    }
  }
  _objc_release(unaff_x21);
LAB_10797148c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x21 + 0x28);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume();
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0x10);
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c27dd80();
  uVar6 = lVar8 + 1;
  if (((uVar6 < 0x1c && (1L << (uVar6 & 0x3f) & 0xb4b5dbbU) != 0) && uVar6 < 0x1b) &&
      (1L << (uVar6 & 0x3f) & 0x6c6bd77U) != 0) {
    _objc_release(lVar5);
    lVar5 = *(long *)(param_3 + 0x20) + 0x40;
    _objc_loadWeakRetained(lVar5);
    lVar8 = lVar5;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13c000();
    _objc_release(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 107972218; end: 1079722a7; -[SCStoriesSharingSession _fetchCreatorSetting] */

void FUN_107972218(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
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
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf5b7e0(uVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be10b00(param_1,param_2,uVar3,lVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107972e50; end: 107973397; -[SCStoriesSharingSession _generateMySnapShareSheetConfigurationWithCreatorUserName:attribution:] */

void FUN_107972e50(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined2 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar14 = *(undefined8 *)(param_1 + 0x118);
  _objc_retain(uVar14);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  lStack_168 = param_4;
  _objc_retain(param_4);
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010853acb4(uVar12,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0c5340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_160 = uVar12;
  func_0x00010b26c050(uVar12,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = uVar12;
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  _objc_retain(uVar1);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27dd80();
  uStack_d8 = 1;
  if ((lVar4 + 1U < 0x1c) && ((1L << (lVar4 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
    if (lVar4 + 1U < 0x1b) {
      uStack_d8 = *(undefined8 *)(&UNK_10dee0748 + (lVar4 + 1U) * 8);
    }
    else {
      uStack_d8 = 1;
    }
  }
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126ae720;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_107973398;
  puStack_b8 = &UNK_1109f22b0;
  _objc_retain(uVar14);
  uStack_b0 = uVar14;
  _objc_retain(uVar11);
  uVar2 = uStack_148;
  uStack_a8 = uVar11;
  _objc_retain(uStack_148);
  uStack_a0 = uVar2;
  uStack_90 = uStack_d8;
  _objc_retain(uVar1);
  uStack_98 = uVar1;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2470;
  puStack_118 = puVar9;
  uStack_110 = 0xc2000000;
  puStack_108 = &UNK_107973780;
  puStack_100 = &UNK_1109f2310;
  puStack_150 = puVar5;
  _objc_retain(uVar14);
  uStack_178 = uVar14;
  uStack_f8 = uVar14;
  _objc_retain(uVar11);
  uStack_158 = uVar11;
  uStack_f0 = uVar11;
  _objc_retain(uVar2);
  uStack_e8 = uVar2;
  _objc_retain(uVar1);
  uStack_e0 = uVar1;
  func_0x00010c2adce0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2478;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_170 = puVar13;
  puStack_88 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021e80();
  _objc_release(puVar6);
  uVar7 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000107d294ec();
  _objc_release(uVar7);
  puVar13 = (undefined *)0x0;
  if ((uVar8 & 1) == 0) {
    puVar13 = PTR_PTR_1126b2490;
    _objc_alloc();
    lVar4 = param_1;
    func_0x00010be1f6a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    lStack_1b0 = lVar4;
    func_0x00010c028f20();
    _objc_release(lVar4);
  }
  puVar6 = PTR_PTR_1126ae720;
  puStack_140 = puVar9;
  uStack_138 = 0xc2000000;
  puStack_130 = &UNK_107973ab4;
  puStack_128 = &UNK_110850038;
  lStack_120 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2498;
  _objc_alloc(PTR_PTR_1126b2498);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lStack_168;
  lVar3 = lStack_168;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  uVar11 = uStack_160;
  func_0x00010c037ea0(puVar9);
  lStack_168 = param_3;
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar12);
  puVar10 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(lStack_120);
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_release(puStack_170);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(puStack_150);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uVar1);
  _objc_release(uStack_148);
  _objc_release(uVar11);
  _objc_release(uStack_158);
  _objc_release(uStack_178);
  lVar4 = lStack_168;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    uStack_1e8 = uVar11;
    puStack_1b8 = &UNK_107973398;
    lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_228 = &uStack_230;
    uStack_230 = 0;
    uStack_220 = 0x3032000000;
    puStack_218 = &UNK_107973530;
    puStack_210 = &UNK_107973540;
    lStack_208 = 0;
    uVar12 = 0;
    uStack_1f0 = uVar1;
    uStack_1e0 = uVar2;
    uStack_1d8 = lVar3;
    puStack_1d0 = puVar5;
    puStack_1c8 = puVar13;
    puStack_1c0 = &stack0xfffffffffffffff0;
    _dispatch_semaphore_create();
    uVar1 = *(undefined8 *)(lVar4 + 0x20);
    uVar11 = *(undefined8 *)(lVar4 + 0x38);
    _objc_retain(uVar11);
    _objc_retain(uVar12);
    func_0x00010c11d620(uVar1);
    _dispatch_semaphore_wait(uVar12,0xffffffffffffffff);
    puVar10 = PTR____NSArray0__struct_11034ab48;
    if (puStack_228[5] != 0) {
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_200 = puStack_228[5];
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar12);
    __Block_object_dispose(&uStack_230,8);
    lVar4 = lStack_208;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
      ___stack_chk_fail();
      lVar3 = 8;
      __Block_object_dispose(&uStack_230);
      __Unwind_Resume();
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = 0;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107973d20; end: 1079741e7; -[SCStoriesSharingSession _generateShareSheetConfigurationBySnapType:attribution:] */

void FUN_107973d20(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long unaff_x23;
  long lVar15;
  undefined *unaff_x24;
  undefined *puVar16;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined1 auStack_238 [8];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010853b70c();
  lVar3 = lVar2;
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010853c05c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    unaff_x23 = lVar3;
  }
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
LAB_107973dd0:
    puVar14 = (undefined *)0x0;
  }
  else {
    unaff_x23 = *(long *)(param_1 + 0x10);
    func_0x00010bf28a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (unaff_x23 != 0) goto LAB_107973dd0;
    _objc_initWeak(auStack_90,param_1);
    puVar16 = PTR_PTR_1126ae720;
    puVar14 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    puStack_c0 = &UNK_1079741e8;
    puStack_b8 = &UNK_1109f2370;
    uStack_98 = param_3;
    _objc_copyWeak(auStack_a0,auStack_90);
    _objc_retain(lVar3);
    lStack_b0 = lVar3;
    lStack_a8 = param_1;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x10);
    puStack_148 = puVar16;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = lVar2;
    func_0x00010bf1f2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = unaff_x23;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      func_0x0001004fa310();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bd348);
      lVar10 = lVar2;
      func_0x00010beecc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar10;
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ae720;
      puStack_108 = puVar14;
      uStack_100 = 0xc2000000;
      puStack_f8 = &UNK_107974788;
      puStack_f0 = &UNK_110914428;
      lStack_e8 = param_1;
      _objc_retain();
      lStack_e0 = lVar2;
      _objc_retain(unaff_x23);
      lStack_d8 = unaff_x23;
      func_0x00010bf11fe0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b2470;
      puStack_140 = puVar14;
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_107974b48;
      puStack_128 = &UNK_110870b20;
      lStack_120 = param_1;
      _objc_retain(lVar2);
      lStack_118 = lVar2;
      _objc_retain(unaff_x23);
      lStack_110 = unaff_x23;
      func_0x00010c2adce0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126b2478;
      _objc_alloc(PTR_PTR_1126b2478);
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021e80(puVar14);
      _objc_release(puVar16);
      puVar16 = PTR_PTR_1126b2490;
      _objc_alloc(PTR_PTR_1126b2490);
      uStack_150 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      func_0x00010c028f20();
      _objc_release(puVar14);
      _objc_release(puVar5);
      _objc_release(lStack_110);
      _objc_release(lStack_118);
      _objc_release(puVar4);
      _objc_release(lStack_d8);
      _objc_release(lStack_e0);
      _objc_release(lVar2);
      _objc_release(lVar10);
    }
    unaff_x24 = PTR_PTR_1126b2498;
    _objc_alloc();
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = uVar13;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_4;
    func_0x00010c15d5c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c037ea0();
    _objc_release(puVar14);
    _objc_release(param_3);
    _objc_release(uVar13);
    puVar14 = PTR_PTR_1126b0808;
    _objc_alloc();
    func_0x00010c051820();
    _objc_release(unaff_x24);
    _objc_release(puVar16);
    _objc_release(unaff_x23);
    _objc_release(puStack_148);
    _objc_release(lStack_b0);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_90);
  puVar5 = param_4;
  __Unwind_Resume();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar16 = PTR_PTR_1126ae558;
  ppuVar7 = &puStack_270;
  puStack_188 = &UNK_1079741e8;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x3032000000;
  puStack_1f0 = &UNK_107973530;
  puStack_1e8 = &UNK_107973540;
  lStack_1e0 = 0;
  puStack_220 = &uStack_228;
  uStack_228 = 0;
  uStack_218 = 0x2020000000;
  uStack_210 = 0;
  lVar2 = *(long *)(puVar5 + 0x38);
  puStack_1c0 = unaff_x24;
  lStack_1b8 = unaff_x23;
  puStack_1b0 = puVar14;
  uStack_1a8 = param_3;
  lStack_1a0 = lVar3;
  puStack_198 = param_4;
  puStack_190 = &stack0xfffffffffffffff0;
  if (lVar2 < 3) {
    if (lVar2 == 1) {
code_r0x0001079742bc:
      puVar14 = puVar5 + 0x30;
      _objc_loadWeakRetained();
      puVar6 = puVar14;
      func_0x00010be1e240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_268 = 0xc2000000;
      puStack_260 = &UNK_10797459c;
      puStack_258 = &UNK_1109f2340;
      uStack_230 = *(undefined8 *)(puVar5 + 0x38);
      puStack_248 = &uStack_208;
      uVar13 = *(undefined8 *)(puVar5 + 0x20);
      _objc_retain(uVar13);
      puStack_240 = &uStack_228;
      uStack_250 = uVar13;
      _objc_copyWeak(auStack_238,puVar5 + 0x30);
      puVar14 = puVar6;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_238);
      _objc_release(uStack_250);
    }
    else {
      if (lVar2 == 2) {
        func_0x000107d51d8c();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = (undefined **)puVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = (undefined *)ppuVar7;
        func_0x00010bfbf840();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = 1;
        goto code_r0x000107974454;
      }
code_r0x000107974370:
      puVar6 = *(undefined **)(puVar5 + 0x28);
      _objc_opt_class(puVar6);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_1d8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_1d0 = &PTR____CFConstantStringClassReference_110ea72d8;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar16;
      func_0x00010bfe9c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar5);
      ppuVar7 = (undefined **)puVar16;
    }
  }
  else {
    if (lVar2 != 3) {
      if (lVar2 != 4) goto code_r0x000107974370;
      goto code_r0x0001079742bc;
    }
    func_0x000107d51d8c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)ppuVar7;
    func_0x00010bfbf860();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = 10;
code_r0x000107974454:
    uVar11 = puStack_200[5];
    puStack_200[5] = puVar14;
    _objc_release(uVar11);
    _objc_release(ppuVar7);
    _objc_release(puVar5);
    puStack_220[3] = uVar13;
    puVar6 = PTR_PTR_1126b0800;
    _objc_alloc(PTR_PTR_1126b0800);
    uVar13 = puStack_200[5];
    func_0x00010beec820(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051840(puVar6);
    _objc_release(uVar13);
    puVar14 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar6);
  __Block_object_dispose(&uStack_228,8);
  __Block_object_dispose(&uStack_208,8);
  lVar3 = lStack_1e0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined *)((long)ppuVar7 + 0x38));
    __Block_object_dispose(&uStack_228,8);
    lVar10 = 8;
    __Block_object_dispose(&uStack_208);
    __Unwind_Resume();
    lVar2 = lVar10;
    _objc_retain();
    if (*(long *)(lVar3 + 0x40) == 1) {
      func_0x000107d51d8c();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar10;
      func_0x00010c294420(lVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bfbf8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = *(long *)(*(long *)(lVar3 + 0x28) + 8);
      uVar13 = *(undefined8 *)(lVar12 + 0x28);
      *(long *)(lVar12 + 0x28) = lVar9;
      _objc_release(uVar13);
      uVar13 = 3;
    }
    else {
      lVar2 = lVar3 + 0x38;
      _objc_loadWeakRetained();
      lVar8 = lVar10;
      func_0x00010c294420(lVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar2;
      func_0x00010be9a5a0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = *(long *)(*(long *)(lVar3 + 0x28) + 8);
      lVar15 = *(long *)(lVar12 + 0x28);
      *(long *)(lVar12 + 0x28) = lVar9;
      uVar13 = 4;
    }
    _objc_release(lVar15);
    _objc_release(lVar8);
    _objc_release(lVar2);
    *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x30) + 8) + 0x18) = uVar13;
    lVar2 = lVar10;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c08fa60();
    lVar9 = lVar10;
    if (lVar8 == 0) {
      func_0x00010c294420(lVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf85d80(lVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
    puVar14 = PTR_PTR_1126b0800;
    _objc_alloc(PTR_PTR_1126b0800);
    uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x28) + 8) + 0x28);
    func_0x00010beec820(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051840(puVar14);
    _objc_release(uVar13);
    _objc_release(lVar9);
    _objc_release(lVar10);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107974b48; end: 107974c83;  */

void FUN_107974b48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  func_0x00010c04e820();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  func_0x00010bf88fa0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 107975330; end: 107975383; -[SCStoriesSharingSession legacySendToScopeDidDismiss:selectedItems:] */

void FUN_107975330(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
  _objc_release(uVar1);
  func_0x00010bdfd560(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeSpotlightSnapDownloadResu_112580ee8);
  return;
}



/* Entry: 1079763ec; end: 1079763f3;  */

void FUN_1079763ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_shareMessageSender_112668530);
  return;
}



/* Entry: 107977060; end: 10797706b;  */

void FUN_107977060(void)

{
  return;
}



/* Entry: 107977a6c; end: 107977f73; -[SCStoriesSharingSession _deletePressedWithSkipNativeModal:params:] */

void FUN_107977a6c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined *puVar28;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *(long *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x000108535b00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126b0ed0;
  _objc_opt_class(PTR_PTR_1126b0ed0);
  uVar11 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar16 = uVar4;
  if ((uVar11 & 1) == 0) {
    uVar16 = 0;
  }
  _objc_retain(uVar16);
  _objc_release(uVar4);
  uVar4 = uVar16;
  func_0x00010bf6b8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf28280();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010c0720c0();
  _objc_release(uVar11);
  _objc_release(uVar4);
  lVar10 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar7 = lVar10;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar7;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar10);
  if ((int)uVar6 == 0) {
    lVar10 = *(long *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    uVar4 = uVar16;
    func_0x00010bf6b8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar4;
    func_0x00010bf6b800();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + 0x148);
    *(ulong *)(param_1 + 0x148) = uVar11;
    _objc_release(uVar23);
    _objc_release(uVar4);
    lVar7 = lVar27;
    func_0x000108f04e30();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar27;
    lVar27 = lVar7;
  }
  _objc_release(lVar10);
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar21 = 1;
  lVar7 = lVar27;
  func_0x00010c038f40();
  lVar8 = *(long *)(param_1 + 0x10);
  func_0x00010c25a280();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010c241720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  if (lVar10 == 0) {
    puVar28 = (undefined *)0x0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010bf5b1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010853a0e0();
    if ((iVar1 != 0) && (lVar8 = lVar10, func_0x00010c08fa60(), lVar8 == 0)) {
      lVar13 = *(long *)(param_1 + 0x58);
      func_0x000108536f70();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar13;
      func_0x00010bfe9ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar8;
      func_0x00010bf24ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      lVar8 = lVar14;
      func_0x00010c08fa60();
      if (lVar8 == 0) {
        _objc_release(lVar14);
        _objc_release(lVar13);
        _objc_release(lVar10);
        goto LAB_107977e88;
      }
      _objc_release(lVar10);
      _objc_release(lVar13);
      lVar10 = lVar14;
    }
    uVar23 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c25a280(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b200();
    _objc_release(uVar23);
    puVar28 = PTR_PTR_1126cc630;
    _objc_alloc();
    func_0x00010c0720c0(uVar3);
    func_0x00010bff3f60();
    _objc_release(lVar10);
  }
  puVar9 = PTR_PTR_1126b10b8;
  _objc_alloc();
  lVar7 = lVar24;
  lVar21 = lVar2;
  func_0x00010bfff000();
  lVar10 = *(long *)(param_1 + 0xa8);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 != 0) {
    uVar11 = *(ulong *)(param_1 + 0xa0);
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010c076220();
    _objc_release(uVar11);
    if ((uVar4 & 1) == 0) {
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar10;
      func_0x00010bf239c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      uVar23 = *(undefined8 *)(param_1 + 0xa0);
      func_0x00010bfe63a0(uVar23);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar21;
      func_0x00010c08b7c0();
      _objc_release(uVar23);
      _objc_release(lVar21);
      lVar21 = param_1;
    }
  }
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(puVar28);
LAB_107977e88:
  _objc_release(puVar5);
  _objc_release(lVar27);
  _objc_release(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar7);
  _objc_retain(lVar21);
  if (*(long *)(lVar24 + 0x148) != 0) {
    (**(code **)(*(long *)(lVar24 + 0x148) + 0x10))();
    uVar15 = *(undefined8 *)(lVar24 + 0x148);
    *(undefined8 *)(lVar24 + 0x148) = 0;
    _objc_release(uVar15);
  }
  lVar22 = lVar24 + 0x40;
  _objc_loadWeakRetained(lVar22);
  lVar10 = lVar22;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf1c0();
  _objc_release(lVar10);
  _objc_release(lVar22);
  _objc_retain(lVar21);
  lVar22 = lVar21;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  do {
    if (lVar22 == 0) {
      _objc_release(lVar21);
      uVar3 = *(undefined8 *)(lVar24 + 0xa0);
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar3;
      func_0x00010c076220();
      _objc_release(uVar3);
      if ((int)uVar15 != 0) {
        uVar15 = *(undefined8 *)(lVar24 + 0xa0);
        func_0x00010bfe63a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf94c20();
        _objc_release(uVar15);
      }
      _objc_release(lVar21);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
        return;
      }
      ___stack_chk_fail();
      uVar15 = *(undefined8 *)(lVar7 + 0xa0);
      func_0x00010bfe63a0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar15);
      return;
    }
    lVar27 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar21);
      }
      uVar16 = lVar24 + 0x50;
      _objc_loadWeakRetained();
      uVar4 = uVar16;
      func_0x00010c101420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      iVar1 = (int)*(undefined8 *)(lVar24 + 0xe8);
      func_0x000108f485b4();
      if (iVar1 != 0 && uVar4 != 0) {
        uVar16 = lVar24 + 0x50;
        _objc_loadWeakRetained();
        uVar11 = uVar16;
        func_0x00010c101260();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar11;
        func_0x00010bf5ee40();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar6;
        func_0x00010bf5f0a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar6);
        _objc_release(uVar11);
        _objc_release(uVar16);
        if (uVar4 == uVar17) {
          uVar16 = lVar24 + 0x50;
          _objc_loadWeakRetained();
          uVar6 = uVar16;
          func_0x00010c101260();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(uVar4);
          _objc_retain(uVar6);
          uVar17 = uVar4;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar11 = 0;
          if (uVar17 != 0) {
            uVar11 = uVar4;
            func_0x00010bfce400();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = uVar11;
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar11);
            uVar11 = uVar17;
            func_0x00010bfecde0();
            if (uVar11 == 0) {
              uVar11 = uVar17;
              func_0x00010bf529e0();
              if (uVar11 < 2) goto code_r0x0001079781d8;
code_r0x0001079781c4:
              uVar11 = uVar17;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              if (uVar11 != 0x7fffffffffffffff) goto code_r0x0001079781c4;
code_r0x0001079781d8:
              uVar18 = uVar6;
              func_0x00010bfcf800();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar4;
              func_0x00010bfce400(uVar4);
              _objc_retainAutoreleasedReturnValue();
              uVar26 = uVar18;
              func_0x00010bfecde0();
              _objc_release(uVar11);
              if (uVar26 == 0x7fffffffffffffff) {
                uVar11 = 0;
              }
              else {
                if (0 < (long)uVar26) {
                  uVar25 = uVar26 + 1;
                  do {
                    uVar19 = uVar18;
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    uVar20 = uVar19;
                    func_0x00010c084fc0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = uVar20;
                    func_0x00010c089820();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar20);
                    _objc_release(uVar19);
                    if (uVar11 != 0) goto code_r0x000107978318;
                    uVar25 = uVar25 - 1;
                  } while (1 < uVar25);
                }
                do {
                  uVar26 = uVar26 + 1;
                  uVar11 = uVar18;
                  func_0x00010bf529e0();
                  if (uVar11 <= uVar26) {
                    uVar11 = 0;
                    break;
                  }
                  uVar25 = uVar18;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar19 = uVar25;
                  func_0x00010c084fc0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = uVar19;
                  func_0x00010bfb1920();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar19);
                  _objc_release(uVar25);
                } while (uVar11 == 0);
              }
code_r0x000107978318:
              _objc_release(uVar18);
            }
            _objc_release(uVar17);
          }
          _objc_release(uVar6);
          _objc_release(uVar4);
          _objc_release(uVar6);
          _objc_release(uVar16);
          uVar16 = uVar11;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar16;
          func_0x00010c08fa60();
          _objc_release(uVar16);
          if (uVar6 != 0) {
            lVar8 = lVar24 + 0x50;
            _objc_loadWeakRetained(lVar8);
            uVar16 = uVar11;
            func_0x00010be36bc0(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ddd60(lVar8);
            _objc_release(uVar16);
            _objc_release(lVar8);
          }
          _objc_release(uVar11);
        }
      }
      lVar8 = lVar24 + 0x50;
      _objc_loadWeakRetained(lVar8);
      func_0x00010c12db80();
      _objc_release(lVar8);
      _objc_release(uVar4);
      lVar27 = lVar27 + 1;
    } while (lVar27 != lVar22);
    lVar22 = lVar21;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107978bc0; end: 107978c2f;  */

void FUN_107978bc0(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010901d7c4(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107b00c44();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10797951c; end: 107979523;  */

void FUN_10797951c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24c310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_spotlightSnapDownloader_112670ae8);
  return;
}



/* Entry: 107979794; end: 10797979b; -[SCStoriesSharingSession mediaPlaybackSessionId] */

undefined8 FUN_107979794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 107979af4; end: 107979afb; -[SCDiscoverFeedActionHandlerStoryOpenContext initialStorySectionKey] */

undefined8 FUN_107979af4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107979b88; end: 107979b8f; -[SCDiscoverFeedActionHandler addListener:] */

void FUN_107979b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x278),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10797aa94; end: 10797aac3; -[SCDiscoverFeedActionHandler setContentInterstitialAdPrefetcher:] */

void FUN_10797aa94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10797c4e8; end: 10797c597; -[SCDiscoverFeedActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10797c4e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 auStack_70 [5];
  undefined8 auStack_48 [5];
  
  puVar2 = auStack_70;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) goto LAB_10797c580;
    puVar3 = &UNK_10797c5a4;
  }
  else {
    puVar3 = &UNK_10797c598;
    puVar2 = auStack_48;
  }
  *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puVar2[1] = 0xc2000000;
  puVar2[2] = puVar3;
  puVar2[3] = &UNK_110842e18;
  puVar2[4] = param_1;
  func_0x0001000d76cc("APPSTORE");
LAB_10797c580:
  _objc_release(param_3);
  return;
}



/* Entry: 10797c998; end: 10797cb73;  */

void FUN_10797c998(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar7 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar7);
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar1);
  uVar4 = uVar7;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  if (((uVar4 == 0) || (uVar2 = uVar7, func_0x000108538878(), (uVar2 & 1) != 0)) ||
     (uVar2 = uVar7, func_0x000108538ba0(), (int)uVar2 != 0)) {
    _objc_release(uVar4);
    _objc_release(uVar7);
  }
  else {
    uVar4 = uVar7;
    func_0x000108539290();
    _objc_release(uVar7);
    _objc_release(uVar7);
    if ((uVar4 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bee5240();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      lVar8 = *(long *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = uVar3;
      goto LAB_10797cafc;
    }
  }
  lVar8 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 200);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010799a354(lVar8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar8 != 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    func_0x00010be0eee0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      func_0x00010c2827c0();
    }
    if (param_3 != 0) {
      func_0x00010c259740(param_3);
    }
    puVar1 = PTR_PTR_1126d58b0;
    func_0x00010bf82160();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar5);
  }
LAB_10797cafc:
  _objc_release(lVar8);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10797d794; end: 10797d863; -[SCDiscoverFeedActionHandler _cleanupOpera] */

void FUN_10797d794(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x60;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x178);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x178));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = *(long *)(param_1 + 0x1c8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x1c8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10797d9b0; end: 10797da07; -[SCDiscoverFeedActionHandler _isInStoriesCarouselChatTab] */

bool FUN_10797d9b0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x188);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c258380();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + 0x270) == 0x16;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10797df14; end: 10797e0c7; -[SCDiscoverFeedActionHandler _presentModularSpotlightWithBaseView:initialStory:] */

void FUN_10797df14(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x168);
  puVar2 = param_1;
  if (lVar6 != 0) {
    _objc_retain(param_4);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x168));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126b3530;
    _objc_alloc();
    puVar3 = param_1 + 0x238;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c038f40(puVar2,param_2,puVar3,1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c68b8;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dcad78;
    ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cad80;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d0a00(puVar3,param_2,param_4,puVar4,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar4);
    lVar6 = *(long *)(param_1 + 0x170);
    func_0x00010bf241c0(lVar6,param_2,puVar2,0,0,0,puVar3,0x13,0x5a,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    param_3 = lVar6;
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x168));
    _objc_release(lVar6);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(puVar2 + 0x198);
  func_0x00010c071800();
  if ((iVar1 != 0) && (lVar6 = param_3, func_0x00010c08fa60(), lVar6 != 0)) {
    puVar4 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    puVar3 = puVar2 + 0x238;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c038f40(puVar4,param_2,puVar3,1);
    _objc_release(puVar3);
    puVar5 = PTR_PTR_1126b5c08;
    _objc_alloc(PTR_PTR_1126b5c08);
    puVar3 = puVar2 + 0x238;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c039140(puVar5,param_2,puVar3,param_3,2,puVar4,puVar2);
    _objc_release(puVar3);
    func_0x00010c08b7c0(*(undefined8 *)(puVar2 + 0x198),param_2,puVar5,puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10797edd8; end: 10797ef8b; -[SCDiscoverFeedActionHandler _precomputedFriendStoryTileTapContextForActionModel:] */

void FUN_10797edd8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d58c8;
  _objc_opt_new(PTR_PTR_1126d58c8);
  lVar2 = param_3;
  func_0x00010bf5ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c11f7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  if ((lVar2 != 0) && (lVar3 = lVar4, func_0x00010bf529e0(), lVar3 != 0)) {
    lStack_58 = lVar4;
    func_0x00010797ef8c((long)*(int *)(param_1 + 0x160),lVar2,&lStack_58,param_3,0);
    lVar7 = lStack_58;
    _objc_retain(lStack_58);
    _objc_release(lVar4);
  }
  func_0x00010c21ca00(puVar1);
  lVar4 = *(long *)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    func_0x00010c21c280(puVar1);
  }
  else {
    uVar5 = 0;
    func_0x000107d00a80(0,*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 200),
                        *(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21c280(puVar1);
    _objc_release(uVar5);
  }
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar6);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10797fd54; end: 10797fe4b;  */

void FUN_10797fd54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b860();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079812b8; end: 107981383;  */

void FUN_1079812b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  puStack_60 = &UNK_107981384;
  puStack_58 = &UNK_110844dd0;
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uStack_38 = *(undefined1 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 1079826b4; end: 1079827db;  */

undefined1 FUN_1079826b4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0bdf60(param_2);
  uVar1 = *(undefined1 *)(puStack_68 + 3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107982ff0; end: 107983233; -[SCDiscoverFeedActionHandler _launchUpNextV2PlaybackSessionScopeWithInitialStories:initialStoryIds:triggeringStoryId:triggeringFeedType:triggeringSource:defaultFallbackStories:] */

void FUN_107982ff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 0x1c8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x1c8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf245c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x1c8));
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_107983234;
  puStack_78 = &UNK_110843540;
  _objc_copyWeak(auStack_70,auStack_68);
  ppuVar3 = &puStack_90;
  _objc_retainBlock(ppuVar3);
  func_0x00010bf529e0();
  puVar4 = PTR_PTR_1126c2d60;
  lVar1 = param_1 + 0x238;
  _objc_loadWeakRetained();
  func_0x00010c0ffcc0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107983d58; end: 107983e5b; -[SCDiscoverFeedActionHandler didHideStoryWithCreatorId:similarStoryIdFpsArray:] */

void FUN_107983d58(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0e00;
    func_0x00010c0d7580(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f320(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                          &PTR__OBJC_CLASS___NSConstantArray_1111816d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e640(uVar4,param_2,param_3,param_4,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079842c4; end: 107984977; -[SCDiscoverFeedActionHandler operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_1079842c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = *(long *)(param_1 + 0x188);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2328;
  func_0x00010bf71400(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010c067e20();
  _objc_release(puVar4);
  _objc_release(lVar3);
  if (lVar13 == 3) {
    uVar14 = param_3;
    func_0x00010bf5fb00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d005a8();
    uVar5 = *(ulong *)(param_1 + 200);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (uVar6 != 0) {
      uVar5 = uVar6;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010afef744();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar5);
      if ((uVar7 == 0) && (uVar5 = uVar6, func_0x00010c0741a0(), (uVar5 & 1) == 0)) {
        uVar5 = uVar6;
        func_0x00010bf3cd00();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c2674a0();
        _objc_release(uVar5);
        if ((uVar7 & 1) == 0) {
          puVar4 = PTR_PTR_1126d58d0;
          _objc_alloc();
          uVar5 = uVar6;
          func_0x00010bf3cd00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe2bc0();
          uVar7 = uVar6;
          func_0x00010bf3cd00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c236ac0();
          uVar8 = uVar6;
          func_0x00010bf3cd00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c231940();
          func_0x00010c01a720(puVar4);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar5);
          puVar9 = PTR_PTR_1126c6d78;
          func_0x00010bf82080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2aa780();
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(param_1 + 0xd0);
          func_0x00010c269d40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar9;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28a480(uVar10);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(uVar10);
          _objc_release(puVar9);
          _objc_release(puVar4);
        }
      }
    }
    _objc_release(uVar6);
    _objc_release(uVar14);
  }
  lVar13 = param_1;
  func_0x00010be411a0();
  if ((int)lVar13 != 0) {
    lVar13 = *(long *)(param_1 + 0xa0);
    func_0x00010798e514(lVar13,*(undefined8 *)(param_1 + 0x90));
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 != 0) {
      lVar3 = param_1 + 0x250;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf7bec0();
      _objc_release(lVar3);
    }
    if (*(long *)(param_1 + 0x138) != 0) {
      func_0x00010c28b4e0(param_4);
    }
    goto LAB_107984924;
  }
  lVar13 = *(long *)(param_1 + 0x1c8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar13 == 0) {
    uVar14 = param_3;
    func_0x00010bf5fb00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed6f20(param_1);
    _objc_release(uVar14);
    lVar13 = param_1;
    func_0x00010be6da00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0xa0);
    func_0x000107af901c();
    if (lVar3 == 0xef) {
      lVar3 = lVar13;
      func_0x00010798e8f8(lVar13);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = 0;
    }
    lVar19 = *(long *)(param_1 + 0xa0);
    uVar15 = *(undefined8 *)(param_1 + 0x248);
    uVar20 = *(undefined8 *)(param_1 + 0x88);
    uVar1 = *(undefined1 *)(param_1 + 0x150);
    uVar10 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar10;
    func_0x00010c231d40();
    func_0x00010798dab4(lVar19,0,uVar15,uVar20,uVar1,lVar3,0,uVar14,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    if ((lVar19 != 0) && ((*(byte *)(param_1 + 0x164) & 1) == 0)) {
      lVar17 = param_1 + 0x250;
      _objc_loadWeakRetained(lVar17);
      func_0x00010bf7bec0();
      _objc_release(lVar17);
    }
    if (*(long *)(param_1 + 0x270) == 0x13) {
      func_0x00010bde0600(param_1);
    }
    _objc_release(lVar19);
    _objc_release(lVar3);
    goto LAB_107984924;
  }
  uVar5 = *(ulong *)(param_1 + 0x188);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1270;
  func_0x00010c283140(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f320();
  _objc_release(puVar4);
  _objc_release(uVar5);
  lVar13 = *(long *)(param_1 + 0x140);
  if (lVar13 == 0) {
    bVar2 = false;
  }
  else {
    func_0x00010c064500();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar13;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar3;
    func_0x00010c067ec0();
    bVar2 = (int)lVar19 == 2;
    _objc_release(lVar3);
    _objc_release(lVar13);
  }
  if ((uVar6 & 1) == 0 && !bVar2) {
    uVar14 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130ac0();
    _objc_release(uVar14);
  }
  lVar3 = *(long *)(param_1 + 0x88);
  func_0x00010bf529e0();
  lVar13 = *(long *)(param_1 + 0xa0);
  uVar14 = *(undefined8 *)(param_1 + 0x248);
  if (lVar3 == 0) {
    if (!bVar2) {
      uVar20 = *(undefined8 *)(param_1 + 0x88);
      uVar1 = *(undefined1 *)(param_1 + 0x150);
      uVar15 = *(undefined8 *)(param_1 + 0x188);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar15;
      func_0x00010c231d40();
      FUN_10798e268(lVar13,0,uVar14,uVar20,uVar1,0,uVar10,*(undefined8 *)(param_1 + 0x98));
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1079848dc;
    }
    func_0x00010798e784(lVar13,uVar14,*(undefined1 *)(param_1 + 0x150));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x150);
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    uVar20 = *(undefined8 *)(param_1 + 0x90);
    uVar15 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c231d40();
    func_0x00010798dab4(lVar13,0,uVar14,uVar10,uVar1,0,uVar20,uVar16,1);
    _objc_retainAutoreleasedReturnValue();
LAB_1079848dc:
    _objc_release(uVar15);
  }
  if ((lVar13 != 0) && ((*(byte *)(param_1 + 0x164) & 1) == 0)) {
    lVar3 = param_1 + 0x250;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf7bec0();
    _objc_release(lVar3);
  }
  if (*(long *)(param_1 + 0x270) == 0x13) {
    func_0x00010bde0600(param_1);
  }
LAB_107984924:
  _objc_release(lVar13);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107985404; end: 107985407; -[SCDiscoverFeedActionHandler playbackPresenterDidTearDown:playbackScope:] */

void FUN_107985404(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eaf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidTearDown__1126185e0);
  return;
}



/* Entry: 107985424; end: 107985427; -[SCDiscoverFeedActionHandler playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:] */

void FUN_107985424(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterWillBeginDismissin_112618618);
  return;
}



/* Entry: 107985ba4; end: 107985bab; -[SCDiscoverFeedActionHandler dismissWithInteractionType:] */

void FUN_107985ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x280),PTR_s_dismissWithInteractionType__1125becf0);
  return;
}



/* Entry: 1079860b8; end: 107986127;  */

void FUN_1079860b8(long param_1,undefined8 param_2)

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



/* Entry: 107986278; end: 107986377; -[SCDiscoverFeedActionHandler _clearHovaStoryBadge] */

void FUN_107986278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2238;
  func_0x00010bf153a0(PTR_PTR_1126c2238);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2238;
  func_0x00010bfb49a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_40 = PTR____kCFBooleanFalse_11034ab60;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_48 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&puStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0(puVar1,param_2,puVar2,0,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar1 + 0x238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107986410; end: 107986417; -[SCDiscoverFeedActionHandler currentPageSessionId] */

undefined8 FUN_107986410(long param_1)

{
  return *(undefined8 *)(param_1 + 600);
}



/* Entry: 107986478; end: 10798647f; -[SCDiscoverFeedActionHandler pageType] */

undefined8 FUN_107986478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x270);
}



/* Entry: 1079864e0; end: 10798650f; -[SCDiscoverFeedActionHandler setCurrentPlaylistIdArray:] */

void FUN_1079864e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x288) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107986b54; end: 107986b5b; -[SCDiscoverFeedActionSheetActionHandler addListener:] */

void FUN_107986b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10798859c; end: 10798859f;  */

void FUN_10798859c(void)

{
  return;
}



/* Entry: 107988cec; end: 107988d97; -[SCDiscoverFeedActionSheetActionHandler _handleNotificationResponseWithSuccess:storyDedupeFp:newNotificationState:displayName:] */

void FUN_107988cec(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_6);
  func_0x00010c28a540(*(undefined8 *)(param_1 + 0x40));
  puVar1 = PTR_PTR_1126afca8;
  if ((param_3 & 1) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc34d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
    _objc_release(ppuVar2);
  }
  else {
    func_0x000107b00c44(param_6,param_5 == 3,*(undefined8 *)(param_1 + 0x1a0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1079895c4; end: 10798974f; -[SCDiscoverFeedActionSheetActionHandler _sendPromotedStoryForActionDataModel:] */

void FUN_1079895c4(long param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  param_1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(param_1);
  uVar2 = param_3;
  func_0x00010c258f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf53880(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf22240(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1079897b0; end: 1079897f7; -[SCDiscoverFeedActionSheetActionHandler shareFriendWorkflowCompleted] */

void FUN_1079897b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10798a304; end: 10798a32f;  */

void FUN_10798a304(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10798a82c; end: 10798a87b; -[SCDiscoverFeedActionSheetActionHandler _storyWithDedupeFp:] */

void FUN_10798a82c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10798b028; end: 10798b48f; -[SCDiscoverFeedActionSheetActionHandler _presentReportViewControllerForActionDataModel:] */

void FUN_10798b028(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1133bb330;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 1;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  puStack_98 = &UNK_10798b490;
  puStack_90 = &UNK_10798b4a0;
  uStack_88 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  puStack_c8 = &UNK_10798b490;
  puStack_c0 = &UNK_10798b4a0;
  uStack_b8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x2020000000;
  uStack_e8 = 0;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  puStack_118 = &UNK_10798b490;
  puStack_110 = &UNK_10798b4a0;
  _objc_retain(PTR_PTR_1133bb330);
  puStack_108 = puVar3;
  lVar1 = param_3;
  func_0x00010c259680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c259680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf6a0();
    _objc_release(lVar1);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126afca8;
    if (puStack_d8[5] == 0) {
      if ((*(byte *)(puStack_78 + 3) & 1) == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db9c98;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c237520(puVar3);
      }
      else if (puStack_a8[5] == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db9c98;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c237520(puVar3);
      }
      else {
        ppuVar4 = (undefined **)PTR_PTR_1126aead8;
        _objc_alloc(PTR_PTR_1126aead8);
        lVar1 = param_1 + 0x1d0;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c038f40(ppuVar4);
        _objc_release(lVar1);
        puVar3 = PTR_PTR_1126b2ec8;
        _objc_alloc();
        func_0x00010c0587e0();
        uVar2 = *(undefined8 *)(param_1 + 0x90);
        _objc_retain(uVar2);
        param_1 = param_1 + 0x1c8;
        _objc_loadWeakRetained(param_1);
        _objc_retain(uVar2);
        _objc_retain(puVar3);
        func_0x00010bf83dc0(param_1);
        _objc_release(param_1);
        _objc_release(puVar3);
        _objc_release(uVar2);
        _objc_release(uVar2);
        _objc_release(puVar3);
      }
      _objc_release(ppuVar4);
    }
    else if (*(char *)(puStack_f8 + 3) == '\x01') {
      func_0x00010be7bce0(param_1);
    }
    else {
      func_0x00010be7e240(param_1);
    }
  }
  __Block_object_dispose(&uStack_130,8);
  _objc_release(puStack_108);
  __Block_object_dispose(&uStack_100,8);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_3);
  return;
}



/* Entry: 10798bd64; end: 10798bdd3;  */

void FUN_10798bd64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0402e0();
  _objc_release(param_2);
  func_0x00010c1c8b80(puVar1);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10798c174; end: 10798c397; -[SCDiscoverFeedActionSheetActionHandler _presentHidePromotedStoryWithStory:] */

void FUN_10798c174(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = param_1 + 0x1d0;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c038f40(puVar2);
  _objc_release(lVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xd8);
  func_0x000108f54a98();
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 3;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c79b74(uVar5,*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x178));
  uVar5 = uVar4;
  func_0x00010bef4600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c6bf4();
  _objc_release(uVar4);
  uVar7 = *(undefined8 *)(param_1 + 0xc0);
  uVar4 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf83dc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10798c9c0; end: 10798c9fb;  */

void FUN_10798c9c0(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10798cc80; end: 10798ce3f; -[SCDiscoverFeedActionSheetActionHandler _presentDSAExplainer] */

void FUN_10798cc80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_60,param_1);
  lVar1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_68,auStack_60);
  func_0x00010bf83dc0(lVar1);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ea8c18;
  puVar6 = *(undefined **)(param_1 + 0x18);
  puVar2 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5);
  _objc_release(puVar3);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_68);
  puVar4 = auStack_60;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
    __Unwind_Resume();
    puVar4 = puVar4 + 0x20;
    _objc_loadWeakRetained();
    if (puVar4 != (undefined1 *)0x0) {
      func_0x00010be0cd20(puVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10798d404; end: 10798d52b;  */

void FUN_10798d404(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x1a8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c244280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    func_0x00010bf1d5c0(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10798d7c4; end: 10798d7db; -[SCDiscoverFeedActionSheetActionHandler customStatusBarStyleContextController] */

void FUN_10798d7c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10798e268; end: 10798e477;  */

void FUN_10798e268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  puStack_90 = &UNK_10798dd2c;
  puStack_88 = &UNK_10798dd3c;
  uStack_80 = 0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_8);
  func_0x00010c0bd820(param_1);
  uVar1 = puStack_a0[5];
  _objc_retain(uVar1);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10798ec14; end: 10798ec23;  */

void FUN_10798ec14(void)

{
  return;
}



/* Entry: 10798f04c; end: 10798f127; -[SCDiscoverFeedCustomStoryActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_10798f04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d5988;
    _objc_opt_class(PTR_PTR_1126d5988);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = (ulong)(uVar1 != 0);
    if (uVar1 != 0) {
      func_0x00010be7ade0(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 10798f864; end: 10798f86f; -[SCDiscoverFeedCustomStoryActionHandler setPresentingViewController:] */

void FUN_10798f864(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10798fbd8; end: 10798fc13; -[SCDiscoverFeedExpandStoriesActionHandler .cxx_destruct] */

void FUN_10798fbd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079901fc; end: 1079903cf; -[SCDiscoverFeedOpenFriendProfileActionHandler initWithSnapchattersDataFetcher:snapchatterPublicInfoFetcher:discoverFeedEventsController:callLauncher:friendActionSheetScopeExposer:friendProfileScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:pageLauncher:] */

undefined1 *
FUN_1079901fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f9000;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x58) = 0xffffffffcf5d0adf;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


