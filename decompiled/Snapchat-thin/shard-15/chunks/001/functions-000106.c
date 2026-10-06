/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b88320c; end: 10b883287;  */

undefined * FUN_10b88320c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fbd48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f8b278,
                        &UNK_10e5f3790,&UNK_10e5f383c,10,FUN_10b883288,0);
    do {
      if (puRam00000001137fbd48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fbd48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fbd48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fbd48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fbd48;
}



/* Entry: 10b883288; end: 10b883293;  */

bool FUN_10b883288(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b883294; end: 10b88330f;  */

undefined * FUN_10b883294(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fbd50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f8b298,
                        &UNK_10e5f3864,&UNK_10e5f38c8,7,FUN_10b883310,0);
    do {
      if (puRam00000001137fbd50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fbd50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fbd50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fbd50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fbd50;
}



/* Entry: 10b883310; end: 10b88331b;  */

bool FUN_10b883310(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b88331c; end: 10b8833ff; +[LensesInfo descriptor] */

void FUN_10b88331c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9c20,
                        &PTR____CFConstantStringClassReference_110f8b2b8,&PTR_DAT_1133f97d8,
                        &PTR_DAT_1133f97f0,5,0x28,0x1c);
    puRam00000001137fbd58 = puVar1;
  }
  return;
}



/* Entry: 10b883400; end: 10b88340b;  */

bool FUN_10b883400(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b88340c; end: 10b883487;  */

undefined * FUN_10b88340c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fbd68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f8b2f8,
                        &UNK_10e5f3a48,&UNK_10e5f3c14,0x12,FUN_10b883488,0);
    do {
      if (puRam00000001137fbd68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fbd68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fbd68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fbd68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fbd68;
}



/* Entry: 10b883488; end: 10b883493;  */

bool FUN_10b883488(uint param_1)

{
  return param_1 < 0x12;
}



/* Entry: 10b883494; end: 10b8834fb; +[GroupNilUserName descriptor] */

void FUN_10b883494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9cc0,
                        &PTR____CFConstantStringClassReference_110f8b318,&PTR_DAT_1133f9898,
                        &PTR_DAT_1133f98b0,1,0x10,0x1c);
    puRam00000001137fbd70 = puVar1;
  }
  return;
}



/* Entry: 10b8834fc; end: 10b883563; +[ExcessiveLoginRecursion descriptor] */

void FUN_10b8834fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9d10,
                        &PTR____CFConstantStringClassReference_110f8b338,&PTR_DAT_1133f9898,
                        &PTR_DAT_1133f98f0,2,0x18,0x1c);
    puRam00000001137fbd78 = puVar1;
  }
  return;
}



/* Entry: 10b883564; end: 10b8835cb; +[QueryFeedResponse descriptor] */

void FUN_10b883564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9d60,
                        &PTR____CFConstantStringClassReference_110f8b358,&PTR_DAT_1133f9898,
                        &PTR_DAT_1133f98d0,1,8,0x1c);
    puRam00000001137fbd80 = puVar1;
  }
  return;
}



/* Entry: 10b8835cc; end: 10b883657; +[MessagingInfo descriptor] */

undefined * FUN_10b8835cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9db0,
                        &PTR____CFConstantStringClassReference_110f8b378,&PTR_DAT_1133f9898,
                        &PTR_DAT_1133f9930,9,0x40,0x1c);
    func_0x00010c229040();
    puRam00000001137fbd88 = puVar1;
  }
  return puRam00000001137fbd88;
}



/* Entry: 10b883658; end: 10b8836bf; +[DiscoverFeedGenerateOperaPlaylistDuplicateId descriptor] */

void FUN_10b883658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9e50,
                        &PTR____CFConstantStringClassReference_110f8b398,&PTR_DAT_1133f9a58,
                        &PTR_DAT_1133f9a70,1,0x10,0x1c);
    puRam00000001137fbd90 = puVar1;
  }
  return;
}



/* Entry: 10b8836c0; end: 10b883727; +[MixerStoriesDuplicateId descriptor] */

void FUN_10b8836c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9ea0,
                        &PTR____CFConstantStringClassReference_110f8b3b8,&PTR_DAT_1133f9a58,
                        &PTR_DAT_1133f9ab0,2,0x18,0x1c);
    puRam00000001137fbd98 = puVar1;
  }
  return;
}



/* Entry: 10b883728; end: 10b88378f; +[DiscoverFeedStoriesDuplicateSnapId descriptor] */

void FUN_10b883728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbda0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9ef0,
                        &PTR____CFConstantStringClassReference_110f8b3d8,&PTR_DAT_1133f9a58,
                        &PTR_s_snapId_1133f9a90,1,0x10,0x1c);
    puRam00000001137fbda0 = puVar1;
  }
  return;
}



/* Entry: 10b883790; end: 10b88381b; +[DiscoverInfo descriptor] */

undefined * FUN_10b883790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbda8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9f40,
                        &PTR____CFConstantStringClassReference_110f36078,&PTR_DAT_1133f9a58,
                        &PTR_DAT_1133f9af0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137fbda8 = puVar1;
  }
  return puRam00000001137fbda8;
}



/* Entry: 10b88381c; end: 10b883883; +[SCAppInsightsCreatorInfo descriptor] */

void FUN_10b88381c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbdb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9fe0,
                        &PTR____CFConstantStringClassReference_110f53e18,&PTR_DAT_1133f9b50,
                        &PTR_s_snapId_1133f9b68,2,0x18,0x1c);
    puRam00000001137fbdb0 = puVar1;
  }
  return;
}



/* Entry: 10b883884; end: 10b883967; +[AdsClientInfo descriptor] */

void FUN_10b883884(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbdb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea080,
                        &PTR____CFConstantStringClassReference_110f440d8,&PTR_DAT_1133f9ba8,
                        &PTR_DAT_1133f9bc0,2,0x18,0x1c);
    puRam00000001137fbdb8 = puVar1;
  }
  return;
}



/* Entry: 10b883968; end: 10b883973;  */

bool FUN_10b883968(uint param_1)

{
  return param_1 < 0xe;
}



/* Entry: 10b883974; end: 10b8839db; +[SCAppInsightsSharingInfo descriptor] */

void FUN_10b883974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbdc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea120,
                        &PTR____CFConstantStringClassReference_110f8b418,&PTR_DAT_1133f9c00,
                        &PTR_DAT_1133f9c18,1,8,0x1c);
    puRam00000001137fbdc8 = puVar1;
  }
  return;
}



/* Entry: 10b8839dc; end: 10b883a43; +[SCAppInsightsMediaInfo descriptor] */

void FUN_10b8839dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbdd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea1c0,
                        &PTR____CFConstantStringClassReference_110e0bbf8,&PTR_DAT_1133f9c38,
                        &PTR_DAT_1133f9c90,4,0x20,0x1c);
    puRam00000001137fbdd0 = puVar1;
  }
  return;
}



/* Entry: 10b883a44; end: 10b883aab; +[SCAppInsightsEncoderConfiguration descriptor] */

void FUN_10b883a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbdd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea210,
                        &PTR____CFConstantStringClassReference_110f8b438,&PTR_DAT_1133f9c38,
                        &PTR_DAT_1133f9c50,2,0x18,0x1c);
    puRam00000001137fbdd8 = puVar1;
  }
  return;
}



/* Entry: 10b883aac; end: 10b883b13; +[SCAppInsightsVideoFormat descriptor] */

void FUN_10b883aac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbde0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea260,
                        &PTR____CFConstantStringClassReference_110f8b458,&PTR_DAT_1133f9c38,
                        &PTR_DAT_1133f9d10,4,0x18,0x1c);
    puRam00000001137fbde0 = puVar1;
  }
  return;
}



/* Entry: 10b883b14; end: 10b883bf7; +[SCAppInsightsAudioFormat descriptor] */

void FUN_10b883b14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbde8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea2b0,
                        &PTR____CFConstantStringClassReference_110f8b478,&PTR_DAT_1133f9c38,
                        &PTR_DAT_1133f9d90,4,0x18,0x1c);
    puRam00000001137fbde8 = puVar1;
  }
  return;
}



/* Entry: 10b883bf8; end: 10b883c03;  */

bool FUN_10b883bf8(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b883c04; end: 10b883c6b; +[SCAppInsightsBlizzardInfo descriptor] */

void FUN_10b883c04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbdf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea350,
                        &PTR____CFConstantStringClassReference_110f8b4b8,&PTR_DAT_1133f9e10,
                        &PTR_DAT_1133f9e28,5,0x28,0x1c);
    puRam00000001137fbdf8 = puVar1;
  }
  return;
}



/* Entry: 10b883c6c; end: 10b883cd3; +[SCAppInsightsStorageInfo descriptor] */

void FUN_10b883c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbe00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea3f0,
                        &PTR____CFConstantStringClassReference_110f8b4d8,&PTR_DAT_1133f9ec8,
                        &PTR_DAT_1133f9ee0,2,0x18,0x1c);
    puRam00000001137fbe00 = puVar1;
  }
  return;
}



/* Entry: 10b883cd4; end: 10b883d3b; +[SCAppInsightsNotificationInfo descriptor] */

void FUN_10b883cd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbe08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea490,
                        &PTR____CFConstantStringClassReference_110f8b4f8,&PTR_DAT_1133f9f20,
                        &PTR_DAT_1133f9f38,2,0x18,0x1c);
    puRam00000001137fbe08 = puVar1;
  }
  return;
}



/* Entry: 10b883d3c; end: 10b883da3; +[SCAppInsightsSpectaclesInfo descriptor] */

void FUN_10b883d3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbe10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea530,
                        &PTR____CFConstantStringClassReference_110f31b98,&PTR_DAT_1133f9f78,
                        &PTR_DAT_1133f9fd0,8,0x40,0x1c);
    puRam00000001137fbe10 = puVar1;
  }
  return;
}



/* Entry: 10b883da4; end: 10b883e1f; +[SCAppInsightsSpectaclesInfo_Property descriptor] */

undefined * FUN_10b883da4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbe18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea580,
                        &PTR____CFConstantStringClassReference_110dd67f8,&PTR_DAT_1133f9f78,
                        &PTR_s_key_1133f9f90,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137fbe18 = puVar1;
  }
  return puRam00000001137fbe18;
}



/* Entry: 10b883e20; end: 10b883e87; +[SCAppInsightsOperaInfo descriptor] */

void FUN_10b883e20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbe20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea620,
                        &PTR____CFConstantStringClassReference_110f8b518,&PTR_DAT_1133fa0d0,
                        &PTR_DAT_1133fa0e8,5,0x30,0x1c);
    puRam00000001137fbe20 = puVar1;
  }
  return;
}



/* Entry: 10b883e88; end: 10b883f7f; +[SCAppInsightsWebViewInfo descriptor] */

undefined * FUN_10b883e88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbe28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea6c0,
                        &PTR____CFConstantStringClassReference_110f8b538,&PTR_DAT_1133fa188,
                        &PTR_DAT_1133fa1a0,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fbe28 = puVar1;
  }
  return puRam00000001137fbe28;
}



/* Entry: 10b883f80; end: 10b883f8b;  */

bool FUN_10b883f80(uint param_1)

{
  return param_1 < 0x1b;
}



/* Entry: 10b883f8c; end: 10b883ff3; +[PostStorySnapInfo descriptor] */

void FUN_10b883f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbe38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cea7b0,
                        &PTR____CFConstantStringClassReference_110f8b578,&PTR_DAT_1133fa260,
                        &PTR_DAT_1133fa278,7,4,0x1c);
    puRam00000001137fbe38 = puVar1;
  }
  return;
}



/* Entry: 10b883ff4; end: 10b883ffb; -[SCTimeboundCompletion initWithCompletion:timeout:] */

void FUN_10b883ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c000490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithCompletion_timeout_qos__1125ddae8,param_3,0x15);
  return;
}



/* Entry: 10b883ffc; end: 10b884093; -[SCTimeboundCompletion initWithCompletion:timeout:qos:] */

undefined1 *
FUN_10b883ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_11270b7c0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined4 *)((long)puVar1 + 0x20) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b884094; end: 10b88417f; -[SCTimeboundCompletion start] */

void FUN_10b884094(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x20);
  func_0x000107c312b8(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = 0;
  _dispatch_time(0,(long)(*(double *)(param_1 + 0x18) * 1000000000.0));
  _dispatch_source_set_timer(uVar4,uVar3,0xffffffffffffffff,0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b884180;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  _dispatch_source_set_event_handler(*(undefined8 *)(param_1 + 0x10),&puStack_58);
  _dispatch_resume(*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar1);
  return;
}



/* Entry: 10b884180; end: 10b884187;  */

void FUN_10b884180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c270490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_timeout_112679b48);
  return;
}



/* Entry: 10b884188; end: 10b88418f; -[SCTimeboundCompletion complete] */

void FUN_10b884188(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0ba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeCompletionTimedOut__112560830,0);
  return;
}



/* Entry: 10b884190; end: 10b884197; -[SCTimeboundCompletion timeout] */

void FUN_10b884190(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0ba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeCompletionTimedOut__112560830,1);
  return;
}



/* Entry: 10b884198; end: 10b88421b; -[SCTimeboundCompletion _executeCompletionTimedOut:] */

void FUN_10b884198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 8) != 0) {
    _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x10));
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b88421c; end: 10b88424b; -[SCTimeboundCompletion .cxx_destruct] */

void FUN_10b88421c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88424c; end: 10b88429f; +[SCHapticsManager sharedManager] */

void FUN_10b88424c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbe48 != -1) {
    func_0x000107c27d9c(0x1137fbe48,&PTR___NSConcreteGlobalBlock_110d62f10);
  }
  uVar1 = uRam00000001137fbe40;
  _objc_retain(uRam00000001137fbe40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b8842a0; end: 10b8842cb;  */

void FUN_10b8842a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126affa8;
  _objc_alloc_init();
  uVar1 = puRam00000001137fbe40;
  puRam00000001137fbe40 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8842cc; end: 10b88430b; -[SCHapticsManager init] */

void FUN_10b8842cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270b7c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 1;
  }
  return;
}



/* Entry: 10b88430c; end: 10b884363; -[SCHapticsManager generatorImpactLight] */

void FUN_10b88430c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
    _objc_alloc();
    func_0x00010c04ea80();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b884364; end: 10b8843bb; -[SCHapticsManager generatorImpactMedium] */

void FUN_10b884364(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
    _objc_alloc();
    func_0x00010c04ea80();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b8843bc; end: 10b884413; -[SCHapticsManager generatorImpactHeavy] */

void FUN_10b8843bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
    _objc_alloc();
    func_0x00010c04ea80();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b884414; end: 10b88446b; -[SCHapticsManager generatorImpactSoft] */

void FUN_10b884414(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
    _objc_alloc();
    func_0x00010c04ea80();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b88446c; end: 10b8844bb; -[SCHapticsManager generatorSelection] */

void FUN_10b88446c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UISelectionFeedbackGenerator_1126dbbe8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b8844bc; end: 10b88450b; -[SCHapticsManager generatorNotification] */

void FUN_10b8844bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UINotificationFeedbackGenerator_1126d0928;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b88450c; end: 10b884557; -[SCHapticsManager prepare] */

void FUN_10b88450c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c072ca0();
  if ((int)uVar1 != 0) {
    func_0x00010bfc0c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c108f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b884558; end: 10b8845af; -[SCHapticsManager performFeedback:] */

void FUN_10b884558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b8845b0;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 10b8845b0; end: 10b8845e7;  */

void FUN_10b8845b0(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c072ca0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be71c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__performFeedback__11257a0b8,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10b8845e8; end: 10b884643; -[SCHapticsManager performFeedback:withIntensity:] */

void FUN_10b8845e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b884644;
  puStack_30 = &UNK_110858dc0;
  uStack_28 = param_2;
  uStack_20 = param_4;
  uStack_18 = param_1;
  func_0x000107c312cc("APPSTORE",&puStack_48);
  return;
}



/* Entry: 10b884644; end: 10b88467f;  */

void FUN_10b884644(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c072ca0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be71c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
               PTR_s__performFeedback_withIntensity__11257a0c0,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10b884680; end: 10b88488f; -[SCHapticsManager _performFeedback:] */

void FUN_10b884680(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 4) {
    uVar1 = param_1;
    if (param_3 < 2) {
      if (param_3 == 0) {
        func_0x00010bfc0c00(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_3 != 1) {
          return;
        }
        func_0x00010bfc0c00(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if (param_3 != 2) {
        if (param_3 != 3) {
          return;
        }
        func_0x00010bfc0ba0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe9da0();
        _objc_release(uVar1);
        func_0x00010bfc0ba0(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b88486c;
      }
      func_0x00010bfc0c00(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0dc440();
    _objc_release(uVar1);
    func_0x00010bfc0c00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 < 6) {
    if (param_3 == 4) {
      uVar1 = param_1;
      func_0x00010bfc0bc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9da0();
      _objc_release(uVar1);
      func_0x00010bfc0bc0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != 5) {
        return;
      }
      uVar1 = param_1;
      func_0x00010bfc0b80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9da0();
      _objc_release(uVar1);
      func_0x00010bfc0b80(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 6) {
    uVar1 = param_1;
    func_0x00010bfc0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9da0();
    _objc_release(uVar1);
    func_0x00010bfc0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 7) {
      if (param_3 != 8) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__AudioServicesPlaySystemSound_11034af70)(0xfff);
      return;
    }
    uVar1 = param_1;
    func_0x00010bfc0c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15a4e0();
    _objc_release(uVar1);
    func_0x00010bfc0c20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10b88486c:
  func_0x00010c108f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b884890; end: 10b8849eb; -[SCHapticsManager _performFeedback:withIntensity:] */

void FUN_10b884890(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = 1.0;
  if (param_1 <= 1.0) {
    dVar2 = param_1;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (param_4 < 5) {
    if (param_4 == 3) {
      uVar1 = param_2;
      func_0x00010bfc0ba0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9dc0(dVar2);
      _objc_release(uVar1);
      func_0x00010bfc0ba0(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_4 != 4) {
LAB_10be71c60:
                    /* WARNING: Could not recover jumptable at 0x00010be71c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__performFeedback__11257a0b8);
        return;
      }
      uVar1 = param_2;
      func_0x00010bfc0bc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9dc0(dVar2);
      _objc_release(uVar1);
      func_0x00010bfc0bc0(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_4 == 5) {
    uVar1 = param_2;
    func_0x00010bfc0b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9dc0(dVar2);
    _objc_release(uVar1);
    func_0x00010bfc0b80(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 != 6) goto LAB_10be71c60;
    uVar1 = param_2;
    func_0x00010bfc0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9dc0(dVar2);
    _objc_release(uVar1);
    func_0x00010bfc0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c108f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8849ec; end: 10b884b03; -[SCHapticsManager hapticUserInteractionStarted] */

ulong FUN_10b8849ec(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 0x6e6f6974636172;
  uStack_50 = 0x65746e4972657375;
  uStack_41 = 0x53;
  uStack_40 = 0x646574726174;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&uStack_50);
  _objc_retainAutoreleasedReturnValue();
  _NSSelectorFromString();
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfc0c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release();
  if ((uVar3 & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return uVar2;
    }
  }
  else {
    func_0x00010bfc0c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0f8f20();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto code_r0x00010bdbf3e4;
  }
  param_1 = uVar2;
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _NSSelectorFromString();
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfc0c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release();
  if ((uVar3 & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return uVar2;
    }
  }
  else {
    func_0x00010bfc0c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0f8f20();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return param_1;
    }
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar2 + 8);
}



/* Entry: 10b884b04; end: 10b884c1b; -[SCHapticsManager hapticUserInteractionEnded] */

ulong FUN_10b884b04(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_50;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 0x6974636172;
  uStack_50 = 0x65746e4972657375;
  uStack_43 = 0x456e6f;
  uStack_40 = 0x6465646e;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&uStack_50);
  _objc_retainAutoreleasedReturnValue();
  _NSSelectorFromString();
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfc0c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release();
  if ((uVar3 & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return uVar2;
    }
  }
  else {
    func_0x00010bfc0c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0f8f20();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return param_1;
    }
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar2 + 8);
}



/* Entry: 10b884c1c; end: 10b884c23; -[SCHapticsManager isFeedbackEnabled] */

undefined1 FUN_10b884c1c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b884c24; end: 10b884c2b; -[SCHapticsManager setFeedbackEnabled:] */

void FUN_10b884c24(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b884c2c; end: 10b884c5b; -[SCHapticsManager setGeneratorImpactLight:] */

void FUN_10b884c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b884c5c; end: 10b884c8b; -[SCHapticsManager setGeneratorImpactMedium:] */

void FUN_10b884c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b884c8c; end: 10b884cbb; -[SCHapticsManager setGeneratorImpactHeavy:] */

void FUN_10b884c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b884cbc; end: 10b884ceb; -[SCHapticsManager setGeneratorImpactSoft:] */

void FUN_10b884cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b884cec; end: 10b884d1b; -[SCHapticsManager setGeneratorSelection:] */

void FUN_10b884cec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b884d1c; end: 10b884d4b; -[SCHapticsManager setGeneratorNotification:] */

void FUN_10b884d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b884d4c; end: 10b884dab; -[SCHapticsManager .cxx_destruct] */

void FUN_10b884d4c(long param_1)

{
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



/* Entry: 10b884dac; end: 10b884e0f; -[SCMainQueuePerformerImpl performWithQoS:block:] */

void FUN_10b884dac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retainBlock(param_4);
  uVar1 = 0x20;
  func_0x000107c27d94(0x20,param_3,0,param_4);
  _objc_release(param_4);
  func_0x000107c27d8c(*(undefined8 *)(param_1 + 8),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b884e10; end: 10b884eaf; -[SCMainQueuePerformerImpl performWithEnforcedInheritedQoS:] */

void FUN_10b884e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retainBlock();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b884eb0;
  puStack_40 = &UNK_110849530;
  uStack_38 = param_3;
  _objc_retain();
  uVar1 = 0x20;
  func_0x000107c27d90(0x20,&puStack_58);
  func_0x000107c27d8c(*(undefined8 *)(param_1 + 8),uVar1);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b884eb0; end: 10b884ebb;  */

void FUN_10b884eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b884eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10b884ebc; end: 10b884f1b; -[SCMainQueuePerformerImpl performWithEnforcedBlockQoS:] */

void FUN_10b884ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10bcbdbac(param_3,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  _objc_retainBlock();
  func_0x000107c27d8c(uVar2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b884f1c; end: 10b884f6f; -[SCMainQueuePerformerImpl performAndWait:] */

void FUN_10b884f1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retainBlock();
  lVar1 = param_1;
  func_0x00010c06fc80();
  if ((int)lVar1 == 0) {
    func_0x000107c27da4(*(undefined8 *)(param_1 + 8),param_3);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b884f70; end: 10b884f73; -[SCMainQueuePerformerImpl assertNotQueue] */

void FUN_10b884f70(void)

{
  return;
}



/* Entry: 10b884f74; end: 10b884fab; -[SCMainQueuePerformerImpl performWithBarrier:] */

void FUN_10b884f74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retainBlock(param_3);
  func_0x00010c0f7fc0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b884fac; end: 10b885007; -[SCMainQueuePerformerImpl performOnGroupNotification_DEPRECATED:block:] */

void FUN_10b884fac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retainBlock(param_4);
  func_0x000107c27d98(param_3,uVar1,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b885008; end: 10b8851b7;  */

void FUN_10b885008(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f8b598;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f8b598,
                      &PTR____CFConstantStringClassReference_110f8b5b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10b8851b8; end: 10b88532f; -[SIGIconMetadata isEqual:] */

bool FUN_10b8851b8(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_7);
  if (param_5 == param_7) {
    bVar5 = true;
  }
  else {
    puVar1 = PTR_PTR_1126e1930;
    _objc_opt_class(PTR_PTR_1126e1930);
    uVar2 = param_7;
    _objc_opt_isKindOfClass(param_7,puVar1);
    if ((uVar2 & 1) == 0) {
      bVar5 = false;
    }
    else {
      _objc_retain(param_7);
      uVar2 = param_5;
      func_0x00010bfe5b00();
      uVar3 = param_7;
      func_0x00010bfe5b00();
      if (uVar2 == uVar3) {
        func_0x00010c23d0a0(param_5);
        dVar6 = param_1;
        dVar8 = param_2;
        func_0x00010c23d0a0(param_7);
        bVar5 = false;
        if ((param_1 == dVar6) && (param_2 == dVar8)) {
          uVar2 = param_5;
          func_0x00010bf40c40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_7;
          func_0x00010bf40c40(param_7);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          func_0x00010c071ae0();
          if ((int)uVar4 == 0) {
            bVar5 = false;
          }
          else {
            func_0x00010bf8c0a0(param_5);
            dVar7 = dVar6;
            dVar9 = dVar8;
            dVar10 = param_3;
            dVar11 = param_4;
            func_0x00010bf8c0a0(param_7);
            bVar5 = param_3 == dVar10 && (param_4 == dVar11 && (dVar6 == dVar7 && dVar8 == dVar9));
          }
          _objc_release(uVar3);
          _objc_release(uVar2);
        }
      }
      else {
        bVar5 = false;
      }
      _objc_release(param_7);
    }
  }
  _objc_release(param_7);
  return bVar5;
}



/* Entry: 10b885330; end: 10b8853df; -[SIGIconMetadata hash] */

ulong FUN_10b885330(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_5;
  func_0x00010bfe5b00();
  func_0x00010c23d0a0(param_5);
  uVar4 = (ulong)param_1;
  func_0x00010c23d0a0(param_5);
  uVar5 = (ulong)param_2;
  uVar2 = param_5;
  func_0x00010bf40c40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde980();
  func_0x00010bf8c0a0(param_5);
  func_0x00010bf8c0a0(param_5);
  func_0x00010bf8c0a0(param_5);
  func_0x00010bf8c0a0(param_5);
  _objc_release(uVar2);
  return uVar1 ^ uVar4 ^ uVar5 ^ uVar3 ^ (long)(param_1 + param_2 + param_3 + param_4);
}



/* Entry: 10b8853e0; end: 10b8853e7; -[SIGIconMetadata setIconType:] */

void FUN_10b8853e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b8853e8; end: 10b8853ef; -[SIGIconMetadata setSize:] */

void FUN_10b8853e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  return;
}



/* Entry: 10b8853f0; end: 10b88541f; -[SIGIconMetadata setColor:] */

void FUN_10b8853f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b885420; end: 10b88542b; -[SIGIconMetadata setEdgeInsetsGreaterThan:] */

void FUN_10b885420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x28) = param_1;
  *(undefined8 *)(param_5 + 0x30) = param_2;
  *(undefined8 *)(param_5 + 0x38) = param_3;
  *(undefined8 *)(param_5 + 0x40) = param_4;
  return;
}



/* Entry: 10b88542c; end: 10b885443; -[SIGIconMetadata .cxx_destruct] */

void FUN_10b88542c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b885444; end: 10b8854ab;  */

void FUN_10b885444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bddc800(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bfe8d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0c40,PTR_s_imageTemplateFromIconType_size__1125d7d18,param_3);
  return;
}



/* Entry: 10b8854ac; end: 10b885523;  */

void FUN_10b8854ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0c40,PTR_s_imageTemplateFromIconType_size__1125d7d18);
  return;
}



/* Entry: 10b885524; end: 10b88552f; -[SIGThreadSafeCache .cxx_destruct] */

void FUN_10b885524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b885530; end: 10b88553b; +[SIGIcons unicodeValueForIconType:] */

void FUN_10b885530(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c2cb0,PTR_s_unicodeValueForIconType__11267d978)
  ;
  return;
}



/* Entry: 10b88553c; end: 10b885547; +[SIGIcons iconTypeForIconKey:] */

void FUN_10b88553c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c2cb0,PTR_s_iconTypeForIconKey__1125d7090);
  return;
}



/* Entry: 10b885548; end: 10b8855cb; +[SIGIcons imageFromIconType:size:sigColor:] */

void FUN_10b885548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b8855cc; end: 10b88560f;  */

void FUN_10b8855cc(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      _free();
      *param_1 = 0;
    }
    if (param_1[2] != 0) {
      _CFRelease();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10b885610; end: 10b885743; +[SIGIcons _boundingRectAfterRotatingRect:toDegreesAngle:] */

void FUN_10b885610(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  dVar1 = param_1;
  _CGRectGetMidX(param_1,param_2);
  dVar2 = param_1;
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_80 = uStack_b0;
  uStack_78 = uStack_a8;
  uStack_70 = uStack_a0;
  uStack_68 = uStack_98;
  uStack_60 = uStack_90;
  uStack_58 = uStack_88;
  _CGAffineTransformTranslate(&uStack_80,dVar1,dVar2,&uStack_b0);
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  _CGAffineTransformRotate(&uStack_b0,(param_5 * 3.141592653589793) / 180.0,&uStack_e0);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  _CGAffineTransformTranslate(&uStack_b0,-dVar1,-dVar2,&uStack_e0);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  _CGRectApplyAffineTransform(param_1,param_2,param_3,param_4,&uStack_b0);
  return;
}



/* Entry: 10b885744; end: 10b88574f; +[SIGIcons debugStringFromSIGIconType:] */

void FUN_10b885744(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c2cb0,PTR_s_iconKeyForIconType__1125d6fe0);
  return;
}



/* Entry: 10b885750; end: 10b8857d7; +[SIGIconsGeneratedUtils iconTypeForIconKey:] */

undefined8 FUN_10b885750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = lRam00000001137fbed0;
  _objc_retain(param_3);
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbed0,&PTR___NSConcreteGlobalBlock_110d62ff0);
  }
  uVar2 = uRam00000001137fbed8;
  func_0x00010c0e00e0(uRam00000001137fbed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c2827c0(uVar2);
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 10b8857d8; end: 10b8857ef;  */

void FUN_10b8857d8(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001137fbed8;
  ppuRam00000001137fbed8 = &PTR__OBJC_CLASS___NSConstantDictionary_1111756c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8857f0; end: 10b88587f;  */

void FUN_10b8857f0(long param_1)

{
  _objc_retain();
  if (lRam00000001137fbef8 != -1) {
    func_0x000107c27d9c(0x1137fbef8,&PTR___NSConcreteGlobalBlock_110d65f98);
  }
  _os_unfair_lock_lock(0x1137fbee4);
  (**(code **)(param_1 + 0x10))(param_1,uRam00000001137fbef0);
  _os_unfair_lock_unlock(0x1137fbee4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b885880; end: 10b885913;  */

void FUN_10b885880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b885914; end: 10b885b6f;  */

void FUN_10b885914(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,&UNK_10f7c0633,puVar1,0x301);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b885b70; end: 10b885c6b;  */

void FUN_10b885b70(undefined *param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *unaff_x21;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 == 2) {
    _objc_retain(param_2);
    unaff_x21 = param_2;
  }
  else if (param_3 == 1) {
    _objc_retain(param_1);
    unaff_x21 = param_1;
  }
  else if (param_3 == 0) {
    _objc_retain(param_2);
    _objc_retain(param_1);
    func_0x00010bf41560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_2);
    unaff_x21 = puVar1;
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}


