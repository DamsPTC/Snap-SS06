/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100264774; end: 10026485f; +[SCBlizzardCachedMccSignal signalFromDictionary:] */

void FUN_100264774(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar1;
  func_0x000107c6115c(uVar1,puVar4);
  if ((uVar3 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar2;
    func_0x000107c6115c(uVar2,puVar4);
    if ((uVar3 & 1) != 0) {
      puVar4 = PTR_PTR_1126d03d0;
      func_0x000107c610f4(PTR_PTR_1126d03d0);
      func_0x000107c4c0a8(uVar2);
      func_0x000107c4762c(puVar4);
      goto LAB_10026483c;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_10026483c:
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100264860; end: 100264873; -[SCBlizzardGeoSignalGrapheneMetrics logCacheHit:] */

void FUN_100264860(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (param_3 != 0) {
    if (lVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_11095dc30,&uStack_40,1);
      puStack_28 = (undefined1 *)&uStack_40;
      FUN_10007e5dc(&puStack_28);
    }
    return;
  }
  if (lVar1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(lVar1 + 8) + 0x18))(*(long **)(lVar1 + 8),&UNK_11095dc80,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 100264874; end: 1002648eb;  */

void FUN_100264874(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095dc80,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1002648ec; end: 100264d3f; +[SCBlizzard eventLoggerWithGraphene:deviceSamplingProvider:appStartExperimentReader:circumstanceEngine:nsDataWriter:clientIdProvider:rtusConfigProvider:flipper:appInsightsMetadataServicesLazy:geoSignalProvider:] */

void FUN_1002648ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_12);
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_5);
  func_0x000107c61160();
  func_0x000107c56954();
  uVar4 = uRam00000001136c4b40;
  uRam00000001136c4b40 = param_8;
  func_0x000107c61174(param_8);
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126d0518;
  func_0x000107c610f4();
  func_0x000107c45db4();
  func_0x000107c61170(param_5);
  uVar4 = puRam00000001136c4b48;
  puRam00000001136c4b48 = puVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  uVar4 = uRam00000001136c4b50;
  uRam00000001136c4b50 = param_3;
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126d0520;
  func_0x000107c610f4();
  func_0x000107c46b78();
  uVar4 = puRam00000001136c4b58;
  puRam00000001136c4b58 = puVar3;
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126d0528;
  func_0x000107c610f4();
  func_0x000107c48470();
  uVar4 = puRam00000001136c4b60;
  puRam00000001136c4b60 = puVar3;
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126d0530;
  func_0x000107c610f4();
  func_0x000107c46808();
  uVar4 = puRam00000001136c4b38;
  puRam00000001136c4b38 = puVar3;
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126d0538;
  func_0x000107c610f4();
  func_0x000107c48634();
  uVar4 = puRam00000001136c4b68;
  puRam00000001136c4b68 = puVar3;
  func_0x000107c61170(uVar4);
  uVar4 = param_11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_11);
  uVar5 = uVar4;
  func_0x000107c3ddd8();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  puVar6 = PTR_PTR_1126d0370;
  func_0x000107c610f4();
  puVar1 = puRam00000001136c4b68;
  puVar8 = puRam00000001136c4b60;
  puVar3 = puRam00000001136c4b48;
  puVar7 = PTR_PTR_1126d0540;
  func_0x000107c5a9f0(PTR_PTR_1126d0540);
  func_0x000107c61180();
  func_0x000107c47560(puVar6,param_2,puVar2,puVar3,puVar8,puVar1,param_10,puVar7,uVar5);
  func_0x000107c61170(param_10);
  uVar4 = puRam00000001136c4b70;
  puRam00000001136c4b70 = puVar6;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar7);
  puVar3 = PTR_PTR_1126d0548;
  func_0x000107c610f4();
  puVar8 = PTR_PTR_1126d0550;
  func_0x000107c61160(PTR_PTR_1126d0550);
  func_0x000107c48428(puVar3,param_2,param_9,puVar8,uRam00000001136c4b50);
  func_0x000107c61170(param_9);
  uVar4 = puRam00000001136c4b78;
  puRam00000001136c4b78 = puVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar8);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c45454();
  uVar4 = puRam00000001136c4b80;
  puRam00000001136c4b80 = puVar3;
  func_0x000107c61170(uVar4);
  puVar3 = puRam00000001136c4b80;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1002811bc;
  puStack_b8 = &UNK_11085b720;
  uStack_78 = 0;
  uStack_80 = param_12;
  puStack_b0 = puVar2;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  uStack_98 = param_6;
  uStack_90 = param_7;
  uStack_88 = uVar5;
  uStack_70 = param_1;
  func_0x000107c61174(param_12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar2);
  func_0x000107c4e524(puVar3,param_2,&puStack_d0);
  puVar3 = puRam00000001136c4b70;
  func_0x000107c61174(puRam00000001136c4b70);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(puStack_b0);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100264d40; end: 100264d47;  */

void FUN_100264d40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126adb60;
  func_0x000107c610f8();
  uStack_40 = 0x100264e0c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000b4418;
  puStack_48 = &UNK_110738148;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c46590(puVar1,param_3,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 100264d48; end: 100264df7;  */

void FUN_100264d48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126adb60;
  func_0x000107c610f8();
  uStack_40 = 0x100264e0c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000b4418;
  puStack_48 = &UNK_110738148;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c(param_2);
  func_0x000107c46590(puVar1,param_3,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 100264df8; end: 100264e13;  */

void FUN_100264df8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100264e14; end: 100264f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100264e14(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lStack_50;
  long lStack_48;
  undefined *puVar4;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  FUN_100083b20(&lStack_50);
  lVar1 = *(long *)(lStack_50 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_50);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    lVar5 = param_2;
  }
  lVar2 = lVar1;
  func_0x000107c421f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (lVar2 == 0) {
    lVar5 = lVar1;
    func_0x000107c61174(0);
    func_0x000107c5ed30();
    func_0x000107c61170(lVar5);
    func_0x000107c61654();
    if (param_3 == (long *)0x0) {
      func_0x000107c614ac();
    }
    else {
      lVar5 = lVar1;
      func_0x000107c5ed2c();
      func_0x000107c61104();
      *param_3 = lVar5;
      func_0x000107c614ac(lVar1);
    }
    lVar3 = 0;
    lVar5 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5faec(lVar2);
    func_0x000107c61174(0);
    func_0x000107c61170(lVar2);
    lVar1 = lVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = lVar5;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000107c60e78();
  puVar4 = PTR_s_unmanaged_documentDirectory_erro_11267e028;
                    /* WARNING: Could not recover jumptable at 0x00010c281810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = lVar1;
  return auVar7;
}



/* Entry: 100264f80; end: 100264f83; -[SCUserSession documentDirectory:error:] */

void FUN_100264f80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unmanaged_documentDirectory_erro_11267e028);
  return;
}



/* Entry: 100264f84; end: 1002651bf; -[SCUserSession unmanaged_documentDirectory:error:] */

void FUN_100264f84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c61158();
  uVar2 = param_1;
  func_0x000107c5d984(param_1);
  func_0x000107c61180();
  func_0x000107c5da44();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61174(uVar1);
  uVar2 = uVar1;
  if (param_3 != 0) {
    func_0x000107c5c168();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60b18(param_2);
  func_0x000107c61180();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1002b0cfc;
  puStack_70 = &UNK_1108c0330;
  func_0x000107c61174(uVar1);
  uStack_68 = uVar1;
  func_0x000107c4d9d4(param_1);
  func_0x000107c611b0();
  func_0x000107c61170(param_2);
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_1002b27dc;
  pcStack_98 = FUN_1002b5830;
  uStack_90 = 0;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar1);
  func_0x000107c4d9d4(param_1);
  func_0x000107c61180();
  if (param_4 != (undefined8 *)0x0) {
    uVar3 = puStack_b0[5];
    func_0x000107c61178();
    *param_4 = uVar3;
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c60bcc(&uStack_b8,8);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1002651c0; end: 10026532b; +[SCUserSession userScopedDocumentPathRootForUser:] */

void FUN_1002651c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c3abe0();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar1;
  FUN_100088750();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c();
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c4e44c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    func_0x000107c60e78();
    func_0x000107c412d4(puVar5);
    func_0x000107c61180();
    puVar1 = puVar5;
    func_0x000107c61178();
    func_0x000107c3eea8();
    puVar4 = puVar5;
    func_0x000107c4adac(puVar5);
    FUN_10026532c(puVar1,puVar4);
    func_0x000107c61180();
    puVar4 = puVar1;
    FUN_100265394();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10026532c; end: 100265393;  */

void FUN_10026532c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined1 auStack_38 [32];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100237f68(param_1,param_2,auStack_38);
  pbVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c412e4(PTR__OBJC_CLASS___NSData_1126ae778,param_2,auStack_38,0x20);
  func_0x000107c61180();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    func_0x000107c60e78();
    func_0x000107c61174();
    pbVar5 = pbVar4;
    func_0x000107c4adac();
    if (pbVar5 != (byte *)0x0) {
      pbVar6 = pbVar4;
      func_0x000107c61178();
      func_0x000107c3eea8();
      puVar7 = (undefined1 *)((long)pbVar5 << 1 | 1);
      func_0x000107c610a0();
      puVar3 = puVar7;
      pbVar9 = (byte *)0x1;
      do {
        puVar8 = puVar3;
        uVar2 = (&UNK_10f416238)[(ulong)*pbVar6 & 0xf];
        *puVar8 = (&UNK_10f416238)[*pbVar6 >> 4];
        puVar8[1] = uVar2;
        bVar1 = pbVar9 < pbVar5;
        puVar3 = puVar8 + 2;
        pbVar6 = pbVar6 + 1;
        pbVar9 = (byte *)(ulong)((int)pbVar9 + 1);
      } while (bVar1);
      puVar8[2] = 0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar7);
      func_0x000107c61180();
      func_0x000107c60fd0(puVar7);
    }
    func_0x000107c61170(pbVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100265394; end: 100265473;  */

void FUN_100265394(byte *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  
  func_0x000107c61174();
  pbVar4 = param_1;
  func_0x000107c4adac();
  if (pbVar4 == (byte *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    pbVar5 = param_1;
    func_0x000107c61178();
    func_0x000107c3eea8();
    puVar6 = (undefined1 *)((long)pbVar4 << 1 | 1);
    func_0x000107c610a0();
    puVar3 = puVar6;
    pbVar9 = (byte *)0x1;
    do {
      puVar8 = puVar3;
      uVar2 = (&UNK_10f416238)[(ulong)*pbVar5 & 0xf];
      *puVar8 = (&UNK_10f416238)[*pbVar5 >> 4];
      puVar8[1] = uVar2;
      bVar1 = pbVar9 < pbVar4;
      puVar3 = puVar8 + 2;
      pbVar5 = pbVar5 + 1;
      pbVar9 = (byte *)(ulong)((int)pbVar9 + 1);
    } while (bVar1);
    puVar8[2] = 0;
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar6);
    func_0x000107c61180();
    func_0x000107c60fd0(puVar6);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 100265474; end: 1002655e7; -[SCUserSession objectForKey:initializer:] */

void FUN_100265474(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3adfc();
  func_0x000107c61180();
  puVar2 = param_1;
  func_0x000107c51d58();
  func_0x000107c61180();
  func_0x000107c60f74();
  func_0x000107c61170(puVar2);
  puVar2 = param_1;
  func_0x000107c49920();
  if ((int)puVar2 == 0) {
    puVar2 = param_1;
    func_0x000107c5da80();
    func_0x000107c61180();
    puVar1 = puVar2;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e2da0;
      func_0x000107c610f4(PTR_PTR_1126e2da0);
      func_0x000107c46eb0();
      puVar2 = param_1;
      func_0x000107c5da80(param_1);
      func_0x000107c61180();
      func_0x000107c56bd8();
      func_0x000107c61170(puVar2);
    }
    puVar2 = param_1;
    func_0x000107c51d58(param_1);
    func_0x000107c61180();
    func_0x000107c60f70();
    func_0x000107c61170(puVar2);
    puVar2 = puVar1;
    func_0x000107c5e05c(puVar1);
    func_0x000107c61180();
  }
  else {
    puVar1 = param_1;
    func_0x000107c51d58(param_1);
    func_0x000107c61180();
    func_0x000107c60f70();
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1002655e8; end: 1002656b3; -[SCUserSession _associated_storage] */

void FUN_1002655e8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  puVar1 = param_1;
  func_0x000107c61134(param_1,param_2);
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126e2d98;
    func_0x000107c61158(PTR_PTR_1126e2d98);
    puVar3 = puVar1;
    func_0x000107c6115c(puVar1,puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000107c61174(puVar1);
      puVar2 = puVar1;
      goto LAB_100265674;
    }
  }
  puVar2 = PTR_PTR_1126e2d98;
  func_0x000107c61160(PTR_PTR_1126e2d98);
  func_0x000107c61188(param_1,param_2,puVar2,1);
LAB_100265674:
  func_0x000107c61170(puVar1);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1002656b4; end: 100265737; -[SCUserSessionAssociatedStorage init] */

undefined1 * FUN_1002656b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e1e0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    uVar3 = 1;
    func_0x000107c60f6c();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    func_0x000107c61170(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100265738; end: 10026573f; -[SCUserSessionAssociatedStorage sema] */

undefined8 FUN_100265738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100265740; end: 100265747; -[SCUserSessionAssociatedStorage invalidated] */

undefined1 FUN_100265740(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100265748; end: 10026574f; -[SCUserSessionAssociatedStorage userSessionScopedObjects] */

undefined8 FUN_100265748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100265750; end: 1002657f7; -[SCUserSessionScopedObjectFuture initWithInitializer:userSession:] */

undefined1 *
FUN_100265750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e1d8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002657f8; end: 1002658a7;  */

undefined * FUN_1002657f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372db20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea1b8,
                        &UNK_10df94acc,&UNK_10df94aec,3,&UNK_108ba7434,0);
    do {
      if (puRam000000011372db20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam000000011372db20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372db20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372db20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372db20;
}



/* Entry: 1002658a8; end: 1002658cb;  */

void FUN_1002658a8(void)

{
  func_0x000107c61168(PTR_PTR_1126b2930);
  func_0x000107c40efc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1002658cc; end: 1002658e3; -[SCDevice buildVersion] */

undefined8 FUN_1002658cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1002658e4; end: 10026597b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002658e4(long param_1,ulong param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar9 = param_2;
  func_0x000107c4a6c0();
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  if ((uVar9 & 1) == 0) {
    func_0x000107c61158();
    func_0x000107c4d3e4();
    func_0x000107c4f87c(puVar4);
  }
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_10010cd00(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                  *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_1 + 0x40);
  *(int *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_10010cebc;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_100109ff0;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_10010cebc:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_100109ff0;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_100109ff0:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar11,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar6 + 0x10) != 0) {
      FUN_10010cd00(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                    *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_1, func_0x000107c4adac(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_100109f84;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_100109f84:
        param_1 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    func_0x00010029a5f8(uVar9);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar9 == 0) goto FUN_100109ff0;
  lVar10 = lVar6;
  func_0x000107c433d8();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar9);
  param_1 = lVar11;
  goto FUN_100109ff0;
}



/* Entry: 10026597c; end: 100265993;  */

bool FUN_10026597c(uint param_1)

{
  return param_1 < 0x12;
}



/* Entry: 100265994; end: 100265a43;  */

void FUN_100265994(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126b7410;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100265a40);
    (*pcVar1)();
  }
  puVar4 = puVar3;
  func_0x0001000ad7c4();
  func_0x000107c52d78(puVar3,param_3,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c5a9bc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126a71c8;
  func_0x000107c610f8();
  func_0x000107c4590c();
  func_0x000107c61170(puVar2);
  if (puVar3 != (undefined *)0x0) {
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100265a44);
  (*pcVar1)();
}



/* Entry: 100265a44; end: 100265a73; -[SCBandwidthEstimatorExperiment setBlizzardLogger:] */

void FUN_100265a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100265a74; end: 100265ae7; -[SCNetworkBandwidthEstimatorImpl initWithBandwidthExperiment:] */

undefined1 * FUN_100265a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e76f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100265ae8; end: 100265aef; -[SCNetworkBandwidthEstimatorImpl cachedDownloadBpsForLogging] */

void FUN_100265ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf27010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cachedDownloadBpsForLogging_1125a75a8);
  return;
}



/* Entry: 100265af0; end: 100265af3; -[SCBandwidthEstimatorExperiment cachedDownloadBpsForLogging] */

void FUN_100265af0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_nqeDownloadBandwidthBps_112615060);
  return;
}



/* Entry: 100265af4; end: 100265b4f; -[SCBandwidthEstimatorExperiment nqeDownloadBandwidthBps] */

long FUN_100265af4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x58;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c44170();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4224c();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  return lVar2 * 1000;
}



/* Entry: 100265b50; end: 100265b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100265b50(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (lVar6 != 0) {
    FUN_10010cd00(param_2,lVar6,*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_2 + 0x40);
  *(long *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_100265bfc;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_100109ff0;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_100265bfc:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_100109ff0;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_100109ff0:
  do {
    lVar6 = *(long *)(param_2 + 0x20);
    if (lVar6 == 0) {
      return;
    }
    lVar11 = *(long *)(param_2 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar6,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_2 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar11 + 0x10) != 0) {
      FUN_10010cd00(lVar6,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                    *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_2, func_0x000107c4adac(), lVar11 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_2 == 0) goto LAB_100109f84;
      *(uint *)(lVar11 + uVar9 * 4) = *(uint *)(lVar11 + uVar9 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_2);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        param_2 = 0;
        uVar8 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar11 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_100109f84:
        param_2 = 0;
        *(uint *)(lVar11 + uVar9 * 4) = *(uint *)(lVar11 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar11 + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
    param_2 = lVar6;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar6)) {
    func_0x00010029a5f8(uVar9);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar9 = *(ulong *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
  param_2 = lVar6;
  if (uVar9 == 0) goto FUN_100109ff0;
  lVar10 = lVar11;
  func_0x000107c433d8();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar9 + 8) == lVar6) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar6)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar9);
  param_2 = lVar6;
  goto FUN_100109ff0;
}



/* Entry: 100265b60; end: 100265c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100265b60(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_10010cd00(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                  *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_1 + 0x40);
  *(long *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_100265bfc;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_100109ff0;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_100265bfc:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_100109ff0;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_100109ff0:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar11,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar6 + 0x10) != 0) {
      FUN_10010cd00(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                    *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_1, func_0x000107c4adac(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_100109f84;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_100109f84:
        param_1 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    func_0x00010029a5f8(uVar9);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar9 == 0) goto FUN_100109ff0;
  lVar10 = lVar6;
  func_0x000107c433d8();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar9);
  param_1 = lVar11;
  goto FUN_100109ff0;
}



/* Entry: 100265c28; end: 100265c47;  */

void FUN_100265c28(void)

{
  func_0x000107c61168(&PTR_PTR_1127d9e20);
  return;
}



/* Entry: 100265c48; end: 100265c73;  */

void FUN_100265c48(undefined8 *param_1,undefined8 param_2)

{
  FUN_100265c28();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 100265c74; end: 100265e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100265c74(void)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  long lStack_68;
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c60010();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100265eb4(0,0x112d60c68,&PTR__OBJC_CLASS___OS_dispatch_source_1126a6458);
  lVar8 = 0x112da26b0;
  FUN_1000285a8(0x112da26b0,&UNK_10d946e68);
  lVar12 = *(long *)(lVar11 + 0x48);
  bVar2 = *(byte *)(lVar11 + 0x50);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 6;
  *(undefined8 *)(lVar8 + 0x10) = 3;
  lVar1 = lVar8 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
  lVar4 = lVar8;
  func_0x000107c60004(lVar1);
  func_0x000107c60008(lVar1 + lVar12);
  func_0x000107c6000c(lVar1 + lVar12 * 2);
  lStack_68 = lVar8;
  FUN_100265ef4();
  uVar6 = 0x112da26b8;
  FUN_1000285a8(0x112da26b8,&UNK_10d946e70);
  uVar5 = uVar6;
  func_0x000100265f38();
  func_0x000107c60264(puVar10,&lStack_68,uVar6,uVar5,lVar3,lVar4);
  uVar6 = 0;
  func_0x000100265eb4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar7 = puVar10;
  func_0x000107c60014(puVar10,uVar6);
  func_0x000107c61170(uVar6);
  (**(code **)(lVar11 + 8))(puVar10,lVar3);
  lVar8 = 0;
  func_0x000100265f88();
  func_0x000107c613fc();
  puVar9 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c615f0(puVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar8 + 0x10) = puVar9;
  *(undefined1 **)(lVar8 + 0x18) = puVar7;
  *(long *)(unaff_x20 + _DAT_112da26a8) = lVar8;
  func_0x000107c6157c(lVar8);
  FUN_100265fa8();
  func_0x000107c61574(lVar8);
  puVar10 = &stack0xffffffffffffff88;
  func_0x000107c61154(puVar10,PTR_s_init_1125d9248);
  func_0x000107c615e8(puVar7);
  return puVar10;
}



/* Entry: 100265e94; end: 100265ef3; -[_TtC33MemoryUsageServicesImplementation37MemoryUsageInfoProviderImplementation init] */

void FUN_100265e94(void)

{
  FUN_100265c74();
  return;
}



/* Entry: 100265ef4; end: 100265fa7;  */

void FUN_100265ef4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112da2698 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c60010(0xff);
  puVar2 = PTR___sSo18OS_dispatch_sourceC8DispatchE19MemoryPressureEventVs10SetAlgebraACMc_11034f9f0
  ;
  func_0x000107c61520(PTR___sSo18OS_dispatch_sourceC8DispatchE19MemoryPressureEventVs10SetAlgebraACMc_11034f9f0
                      ,uVar1);
  puRam0000000112da2698 = puVar2;
  return;
}



/* Entry: 100265fa8; end: 100266177;  */

void FUN_100265fa8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar2 + -8);
  lStack_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = uVar6;
  func_0x000107c614f0(uVar6);
  puVar4 = &UNK_1103c66f0;
  func_0x000107c613fc(&UNK_1103c66f0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puStack_70 = &UNK_10148dc2c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1000f6b44;
  puStack_78 = &UNK_1103c6708;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c615f0(uVar6);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar9);
  FUN_1002661b0(puVar8,uVar3);
  func_0x000107c60018(lVar9,puVar8,ppuVar5,uVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(uVar6);
  (**(code **)(lVar10 + 8))(puVar8,lStack_98);
  (**(code **)(lVar7 + 8))(lVar9,lVar2);
  puVar1 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = uVar6;
  func_0x000107c614f0(uVar6);
  func_0x000107c615f0(uVar6);
  func_0x000107c60028(uVar3);
  func_0x000107c615e8(uVar6);
  return;
}



/* Entry: 100266178; end: 10026619b;  */

void FUN_100266178(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10026619c; end: 1002661af;  */

void FUN_10026619c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1002661b0; end: 10026626b;  */

void FUN_1002661b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_48;
  
  uVar1 = 0;
  func_0x000107c5f7fc(0);
  puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar2 = 0x112d4af88;
  FUN_10026626c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar3 = 0x112d4af90;
  FUN_1000285a8(0x112d4af90,&UNK_10d914100);
  uVar4 = 0x112d4af98;
  func_0x0001002662ac(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(param_1,&puStack_48,uVar3,uVar4,uVar1,uVar2);
  return;
}



/* Entry: 10026626c; end: 1002662ef;  */

void FUN_10026626c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1002662f0; end: 1002662f7; -[_TtC33MemoryUsageServicesImplementation37MemoryUsageInfoProviderImplementation usedMemory] */

undefined8 FUN_1002662f0(void)

{
  int iVar1;
  undefined4 uStack_198;
  undefined1 auStack_194 [144];
  undefined8 uStack_104;
  
  uStack_198 = 0x5d;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  func_0x000107c61678(iVar1,0x17,auStack_194,&uStack_198);
  if (iVar1 != 0) {
    uStack_104 = 0;
  }
  return uStack_104;
}



/* Entry: 1002662f8; end: 100266347;  */

undefined8 FUN_1002662f8(void)

{
  int iVar1;
  undefined4 uStack_198;
  undefined1 auStack_194 [144];
  undefined8 uStack_104;
  
  uStack_198 = 0x5d;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  func_0x000107c61678(iVar1,0x17,auStack_194,&uStack_198);
  if (iVar1 != 0) {
    uStack_104 = 0;
  }
  return uStack_104;
}



/* Entry: 100266348; end: 10026634b; -[_TtC33MemoryUsageServicesImplementation37MemoryUsageInfoProviderImplementation freeMemory] */

long FUN_100266348(void)

{
  undefined4 uStack_54;
  undefined4 uStack_14;
  
  func_0x000107c61078();
  func_0x000107c61034();
  func_0x000107c61078();
  func_0x000107c61030();
  return CONCAT44(uStack_14,0xf) * (ulong)uStack_54;
}



/* Entry: 10026634c; end: 10026642f; +[ReportOption descriptor] */

void FUN_10026634c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb210 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdf9f0,
                        &PTR____CFConstantStringClassReference_110f88778,&PTR_DAT_1133f4378,
                        &PTR_DAT_1133f4390,7,0x18,0x1c);
    puRam00000001137fb210 = puVar1;
  }
  return;
}



/* Entry: 100266430; end: 100266443; +[GPBMessage message] */

void FUN_100266430(void)

{
  func_0x000107c610fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 100266444; end: 100266453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100266444(long param_1,long param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (lVar6 != 0) {
    FUN_10010cd00(param_2,lVar6,*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_2 + 0x40);
  *(int *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_10010cebc;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_100109ff0;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_10010cebc:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_100109ff0;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_100109ff0:
  do {
    lVar6 = *(long *)(param_2 + 0x20);
    if (lVar6 == 0) {
      return;
    }
    lVar11 = *(long *)(param_2 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar6,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_2 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar11 + 0x10) != 0) {
      FUN_10010cd00(lVar6,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                    *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_2, func_0x000107c4adac(), lVar11 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_2 == 0) goto LAB_100109f84;
      *(uint *)(lVar11 + uVar9 * 4) = *(uint *)(lVar11 + uVar9 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_2);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        param_2 = 0;
        uVar8 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar11 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_100109f84:
        param_2 = 0;
        *(uint *)(lVar11 + uVar9 * 4) = *(uint *)(lVar11 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar11 + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
    param_2 = lVar6;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar6)) {
    func_0x00010029a5f8(uVar9);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar9 = *(ulong *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
  param_2 = lVar6;
  if (uVar9 == 0) goto FUN_100109ff0;
  lVar10 = lVar11;
  func_0x000107c433d8();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar9 + 8) == lVar6) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar6)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar9);
  param_2 = lVar6;
  goto FUN_100109ff0;
}



/* Entry: 100266454; end: 1002664b3; -[ServerDrivenTOSCOFConfigProvider tosMetadataListArray] */

void FUN_100266454(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1002664b4();
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_100266934(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1002664b4; end: 100266623;  */

void FUN_1002664b4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  if (cRam0000000112f8e6a8 == '\x01') {
    puVar2 = PTR_PTR_1126d1540;
    func_0x000107c610f8();
    func_0x000107c453e4();
    if (lRam0000000112f8e668 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100266620);
      (*pcVar1)();
    }
    if (0x7fffffff < lRam0000000112f8e668) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100266624);
      (*pcVar1)();
    }
    func_0x000107c5a4e0();
    func_0x000107c5364c(puVar2);
    func_0x000107c521e8(puVar2);
    uVar4 = uRam0000000112f8e5a8;
    lVar3 = lRam0000000112f8e5a0;
    func_0x000107c61434(uRam0000000112f8e5a8);
    func_0x000107c5fadc(lVar3,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c59f34(puVar2);
    func_0x000107c61170();
    func_0x00010372f1e8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined **)(lVar3 + 0x20) = puVar2;
  }
  else {
    func_0x000100266780();
    if (param_1 != 0) {
      lVar3 = param_1;
      func_0x000107c5cc94();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar3 != 0) {
        uStack_38 = 0;
        uVar4 = 0;
        FUN_100266934(0);
        func_0x000107c5fc50(lVar3,&uStack_38,uVar4);
        func_0x000107c61170(lVar3);
      }
    }
  }
  return;
}



/* Entry: 100266624; end: 1002667eb;  */

/* WARNING: Removing unreachable block (ram,0x000100266724) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100266624(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + _DAT_112f8e560);
  uVar5 = 0x800000010f161fa0;
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (lVar7 != 0) {
    lVar3 = lVar7;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar3);
      uVar1 = (uint)(uVar5 >> 0x20);
      uVar6 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar5 & 0xff000000000000) != 0) {
LAB_1002666f0:
            func_0x000107c610f8(PTR_PTR_1126ad630);
            lVar3 = lVar4;
            FUN_100266854(lVar4,uVar5);
            func_0x00010006c090(lVar4,uVar5);
            func_0x000107c61170(lVar7);
            return lVar3;
          }
        }
        else if ((long)(int)lVar4 != lVar4 >> 0x20) goto LAB_1002666f0;
      }
      else if ((uVar6 == 2) && (*(long *)(lVar4 + 0x10) != *(long *)(lVar4 + 0x18)))
      goto LAB_1002666f0;
      func_0x00010006c090(lVar4,uVar5);
    }
    func_0x000107c61170(lVar7);
  }
  return 0;
}



/* Entry: 1002667ec; end: 100266853; +[SCActivationPbTosMetadataList descriptor] */

void FUN_1002667ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baff80,
                        &PTR____CFConstantStringClassReference_110eea1d8,
                        &PTR_s_snapchat_activation_cof_11328bfd8,&PTR_DAT_11328bff0,1,0x10,0x1c);
    puRam000000011372db28 = puVar1;
  }
  return;
}



/* Entry: 100266854; end: 100266913;  */

/* WARNING: Possible PIC construction at 0x0001002668a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002668d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002668a4) */
/* WARNING: Removing unreachable block (ram,0x0001002668b4) */
/* WARNING: Removing unreachable block (ram,0x0001002668ac) */
/* WARNING: Removing unreachable block (ram,0x0001002668d4) */
/* WARNING: Removing unreachable block (ram,0x0001002668dc) */
/* WARNING: Removing unreachable block (ram,0x000100266910) */
/* WARNING: Removing unreachable block (ram,0x000100266920) */
/* WARNING: Removing unreachable block (ram,0x00010026691c) */
/* WARNING: Removing unreachable block (ram,0x0001002668f4) */

void FUN_100266854(undefined8 param_1)

{
  func_0x000107c5ee20();
  func_0x000107c4636c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100266914; end: 100266933;  */

void FUN_100266914(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100266934; end: 100266977;  */

void FUN_100266934(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8e568 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d1540;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f8e568 = puVar1;
  return;
}



/* Entry: 100266978; end: 100266a9f; -[SCServerDrivenTermsOfUseService _metaData:allowsPromptSurface:] */

bool FUN_100266978(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c3dc2c();
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c40808();
  if ((uVar3 == 0) || (uVar3 = param_3, func_0x000107c40808(), uVar3 == 0)) {
    bVar1 = false;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = param_3;
      func_0x000107c5dc14(param_3,param_2,uVar3);
      bVar1 = (int)uVar2 == param_4;
      if (bVar1) break;
      uVar3 = uVar3 + 1;
      uVar2 = param_3;
      func_0x000107c40808();
    } while (uVar3 < uVar2);
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100266aa0; end: 100266ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100266aa0(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (lVar7 != 0) {
    FUN_10010cd00(param_2,lVar7,*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0x10));
  }
  uVar8 = *(uint *)(lVar11 + 0x18);
  lVar7 = *(long *)(param_2 + 0x40);
  if ((int)uVar8 < 0) {
    uVar9 = *(undefined4 *)(lVar11 + 0x10);
    if (param_3 == 0) {
      uVar9 = 0;
    }
    *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
    if ((param_3 & 1) == 0) goto LAB_10011c7a8;
  }
  else {
    uVar10 = (ulong)(uVar8 >> 5);
    uVar8 = 1 << (ulong)(uVar8 & 0x1f);
    if (param_3 == 0) {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
LAB_10011c7a8:
      bVar4 = (*(ushort *)(lVar11 + 0x1c) & 0x20) == 0;
      goto LAB_10011c7b4;
    }
    *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
  }
  bVar4 = true;
LAB_10011c7b4:
  uVar8 = *(uint *)(lVar11 + 0x14);
  if ((int)uVar8 < 0) {
    uVar9 = *(undefined4 *)(lVar11 + 0x10);
    if (!bVar4) {
      uVar9 = 0;
    }
    *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
  }
  else {
    uVar10 = (ulong)(uVar8 >> 5);
    uVar8 = 1 << (ulong)(uVar8 & 0x1f);
    if (bVar4) {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
    }
    else {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
    }
  }
FUN_100109ff0:
  do {
    lVar11 = *(long *)(param_2 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar7 = *(long *)(param_2 + 0x28);
    if (lVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar11,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_2 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar12 = *(long *)(lVar7 + 8);
    bVar1 = *(byte *)(lVar12 + 0x1e);
    uVar2 = *(ushort *)(lVar12 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar7 + 0x10) != 0) {
      FUN_10010cd00(lVar11,*(long *)(lVar7 + 0x10),*(undefined4 *)(lVar12 + 0x14),
                    *(undefined4 *)(lVar12 + 0x10));
      uVar2 = *(ushort *)(lVar12 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar7 = param_2, func_0x000107c4adac(), lVar7 != 0)) {
      uVar8 = *(uint *)(lVar12 + 0x14);
      lVar7 = *(long *)(lVar11 + 0x40);
      if ((int)uVar8 < 0) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = *(undefined4 *)(lVar12 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar10 = (ulong)(uVar8 >> 5);
      uVar8 = 1 << (ulong)(uVar8 & 0x1f);
      if (param_2 == 0) goto LAB_100109f84;
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
    }
    else {
      func_0x000107c61170(param_2);
      uVar8 = *(uint *)(lVar12 + 0x14);
      lVar7 = *(long *)(lVar11 + 0x40);
      if ((int)uVar8 < 0) {
        param_2 = 0;
        uVar9 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
      }
      else {
        uVar10 = (ulong)(uVar8 >> 5);
        uVar8 = 1 << (ulong)(uVar8 & 0x1f);
LAB_100109f84:
        param_2 = 0;
        *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
      }
    }
    uVar10 = *(ulong *)(lVar7 + (ulong)*(uint *)(lVar12 + 0x18));
    *(long *)(lVar7 + (ulong)*(uint *)(lVar12 + 0x18)) = param_2;
    param_2 = lVar11;
  } while (uVar10 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar10 + 0x20) == lVar11)) {
    func_0x00010029a5f8(uVar10);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar10 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar12 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar12 + 0x18)) = param_2;
  param_2 = lVar11;
  if (uVar10 == 0) goto FUN_100109ff0;
  lVar12 = lVar7;
  func_0x000107c433d8();
  uVar6 = uVar10;
  if ((int)lVar12 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar10 + 8) == lVar11) {
        *(undefined8 *)(uVar10 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar5 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar10,puVar5);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar7 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar5 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar10,puVar5);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar6 & 1) != 0) && (*(long *)(uVar10 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar10 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar10);
  param_2 = lVar11;
  goto FUN_100109ff0;
}



/* Entry: 100266ab8; end: 100266abf; -[GPBFieldDescriptor enumDescriptor] */

undefined8 FUN_100266ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100266ac0; end: 100266b17; -[GPBEnumArray initWithValidationFunction:] */

void FUN_100266ac0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puStack_28 = PTR_PTR_11270e7c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = &UNK_10bd5d920;
    if (param_3 != (undefined *)0x0) {
      puVar1 = param_3;
    }
    *(undefined **)((long)puVar2 + 0x10) = puVar1;
  }
  return;
}



/* Entry: 100266b18; end: 100266b1f; -[GPBEnumArray count] */

undefined8 FUN_100266b18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100266b20; end: 100266bd3; -[SCUserSessionSubScopesRouter beginActiveUserSessionWorkflow] */

/* WARNING: Possible PIC construction at 0x000100266b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100266ba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100266b98) */
/* WARNING: Removing unreachable block (ram,0x000100266ba8) */

void FUN_100266b20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = param_1 + 0x18;
  func_0x000107c61148(lVar1);
  func_0x000107c5da60();
  func_0x000107c61180();
  param_1 = param_1 + 0x18;
  func_0x000107c61148(param_1);
  func_0x000107c5da68();
  func_0x000107c61180();
  func_0x000107c3ede8(uVar2,param_2,lVar1,param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100266bd4; end: 100266bdf;  */

undefined * FUN_100266bd4(void)

{
  return PTR_s_isAdjustingFocus_1125f88c0;
}



/* Entry: 100266be0; end: 100266d13; -[_TtC24SCActiveUserSessionScope32SCActiveUserSessionScopeServices buildWithUserSession:userSessionContext:] */

void FUN_100266be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000100266c58(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100266d14; end: 10027f9ff;  */

void FUN_100266d14(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x20;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000100268db4(extraout_x8,param_1,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 10027fa00; end: 10027fa03;  */

void FUN_10027fa00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10027fa04; end: 10027fa4f;  */

void FUN_10027fa04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10027fa50; end: 10027fa5b;  */

void FUN_10027fa50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10027fa5c; end: 10027fbf7;  */

void FUN_10027fa5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10027fbf8; end: 10027fc2b;  */

void FUN_10027fbf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10027fc2c; end: 10027feab; -[SCBlizzardExperimentProvider initWithCircumstanceEngine:appStartExperimentReader:] */

undefined8 *
FUN_10027fc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_80 = PTR_PTR_1126f4c78;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 0x14,param_3);
    func_0x000107c611a0(puVar1 + 0x15,param_4);
    func_0x000107c61144(auStack_90,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1003e8c98;
    puStack_a0 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_98,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1003e9268;
    puStack_c8 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_c0,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    puStack_f8 = &UNK_106ae2c00;
    puStack_f0 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_e8,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_110,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_110);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10027feac; end: 100280197;  */

void FUN_10027feac(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_80;
  long lStack_78;
  undefined1 auStack_70 [32];
  
  uVar7 = 0;
  uVar2 = 0;
  uVar4 = 0;
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_10027ff6c:
    uVar7 = 0;
  }
  else {
    func_0x000107c61434(param_2);
    lVar1 = -0x2fffffffffffffed;
    uVar6 = 0;
    func_0x000100029284(0xd000000000000013);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(param_2);
      goto LAB_10027ff6c;
    }
    FUN_1000bb420(*(long *)(param_2 + 0x38) + lVar1 * 0x20,auStack_70);
    func_0x000107c6142c(param_2);
    func_0x000107c6147c(&uStack_80,auStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar1 = lStack_78;
    if ((uVar7 & 1) == 0) goto LAB_10027ff6c;
    uVar7 = uStack_80;
    func_0x000107c5fadc(uStack_80,lStack_78);
    func_0x000107c6142c(lVar1);
  }
  func_0x000107c5402c(param_1);
  func_0x000107c61170(uVar7);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_10028009c:
    uVar7 = 0;
  }
  else {
    func_0x000107c61434(param_2);
    uVar7 = 0;
    lVar1 = -0x2ffffffffffffff0;
    func_0x000100029284(0xd000000000000010);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(param_2);
      goto LAB_10028009c;
    }
    FUN_1000bb420(*(long *)(param_2 + 0x38) + lVar1 * 0x20,auStack_70);
    func_0x000107c6142c(param_2);
    puVar5 = PTR___sypN_11034f1a8;
    func_0x000107c6147c(&uStack_80,auStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar1 = lStack_78;
    uVar7 = uStack_80;
    if ((uVar2 & 1) == 0) goto LAB_10028009c;
    if (*(long *)(param_2 + 0x10) != 0) {
      func_0x000107c61434(param_2);
      func_0x000107c61434(lVar1);
      lVar3 = 0x65707974;
      uVar2 = 0;
      func_0x000100029284(0x65707974);
      if ((uVar2 & 1) == 0) {
        func_0x000107c6142c(lVar1);
      }
      else {
        FUN_1000bb420(*(long *)(param_2 + 0x38) + lVar3 * 0x20,auStack_70);
        func_0x000107c6142c(param_2);
        func_0x000107c6147c(&uStack_80,auStack_70,puVar5 + 8,PTR___sSSN_11034da80,6);
        param_2 = lVar1;
        if ((uVar4 & 1) != 0) {
          if ((uStack_80 == 0xd000000000000010) && (lStack_78 == -0x7ffffffef1079540)) {
            func_0x000107c6142c(lVar1);
            func_0x000107c6142c(0x800000010ef86ac0);
          }
          else {
            uVar2 = uStack_80;
            func_0x000107c605b8(uStack_80,lStack_78,0xd000000000000010,0x800000010ef86ac0,0);
            func_0x000107c6142c(lVar1);
            func_0x000107c6142c(lStack_78);
            if ((uVar2 & 1) == 0) goto LAB_100280118;
          }
          func_0x0001014d921c(uVar7,lVar1,param_1,0xd000000000000010,0x800000010ef86b70);
          func_0x000107c6142c(lVar1);
          goto LAB_1002800b4;
        }
      }
      func_0x000107c6142c(param_2);
    }
LAB_100280118:
    func_0x000107c5fadc(uVar7,lVar1);
    func_0x000107c6142c(lVar1);
  }
  func_0x000107c52d88(param_1);
  func_0x000107c61170(uVar7);
LAB_1002800b4:
  puVar5 = PTR_PTR_1126d05a8;
  func_0x000107c61168(PTR_PTR_1126d05a8);
  func_0x000107c418f8();
  func_0x000107c61180();
  func_0x000107c54080(param_1);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 100280198; end: 100280277;  */

void FUN_100280198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e12000,&UNK_10d9ed630);
  puVar1 = &UNK_110465120;
  func_0x000107c613fc(&UNK_110465120,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(&UNK_101c9c3b0,puVar1);
  return;
}



/* Entry: 100280278; end: 1002802eb;  */

void FUN_100280278(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002802ec; end: 100280377; +[KSCrash deviceID] */

void FUN_1002802ec(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c4dc8 != -1) {
    FUN_10002a2fc(0x1136c4dc8,&PTR___NSConcreteGlobalBlock_11095f2d8);
  }
  uVar1 = uRam00000001136c4dd0;
  func_0x00010018ac98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100280378; end: 1002805f3;  */

undefined * FUN_100280378(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_5c [20];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc();
  func_0x000107c61180();
  func_0x000107c61164();
  func_0x0001001d5ca0();
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000107c41304(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    func_0x000107c61180();
    puVar1 = puVar2;
    func_0x000107c61178();
    func_0x000107c4d2d0();
    func_0x000106af0d8c(&DAT_10f3b284b,puVar1);
  }
  else {
    func_0x000107c41304();
    func_0x000107c61180();
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x000107c40efc(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    func_0x000107c61180();
    func_0x000107c44fe0();
    func_0x000107c61180();
    FUN_100281b4c();
    func_0x000107c4d2d0();
    func_0x000107c4435c(puVar1);
    func_0x0001001d5c90();
    func_0x0001001d5c98();
  }
  FUN_100281b54(&PTR____CFConstantStringClassReference_110e70178);
  func_0x000107c61180();
  func_0x000107c412d4();
  func_0x000107c61180();
  FUN_100281c30();
  func_0x0001001d5c90();
  func_0x0001001d5c98();
  FUN_100281b54(&PTR____CFConstantStringClassReference_110e70198);
  func_0x000107c61180();
  func_0x000107c412d4();
  func_0x000107c61180();
  FUN_100281c30();
  func_0x0001001d5c90();
  func_0x0001001d5c98();
  FUN_1001d5d80();
  func_0x000107c613d0();
  func_0x000107c3deec(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c();
  func_0x000107c61180();
  func_0x000107c3ee08();
  func_0x000107c61180();
  func_0x000107c412d4();
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x0001001d535c();
  func_0x0001001d5c90();
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c3def0(puVar2);
  }
  FUN_100281b4c();
  func_0x000107c3eea8();
  func_0x000107c4adac(puVar2);
  func_0x000107c6072c(puVar3,puVar2,auStack_5c);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x000107c5c158();
  func_0x000107c61180();
  for (lVar4 = 0; lVar4 != 0x14; lVar4 = lVar4 + 1) {
    func_0x000107c3def8(puVar1);
  }
  FUN_1001d5920();
  puVar2 = puVar1;
  func_0x0001001d5c90();
  func_0x0001001d5c98();
  func_0x0001001d5ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  func_0x000107c60e78();
  FUN_100280378();
  FUN_1001f3dfc();
  func_0x000107c5c200();
  func_0x000107c61180();
  puVar1 = puRam00000001136c4dd0;
  puRam00000001136c4dd0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 1002805f4; end: 10028062b;  */

void FUN_1002805f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_100280378();
  FUN_1001f3dfc();
  func_0x000107c5c200();
  func_0x000107c61180();
  uVar1 = uRam00000001136c4dd0;
  uRam00000001136c4dd0 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10028062c; end: 10028063b;  */

undefined1  [16] FUN_10028062c(void)

{
  return ZEXT816(0x110742be0);
}



/* Entry: 10028063c; end: 100280717; -[SCBlizzardSamplingRateResolver initWithGraphene:circumstanceEngine:] */

undefined1 *
FUN_10028063c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f4c50;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c3ba38();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c54f38(puVar1);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100280718; end: 1002807a7; -[SCBlizzardSamplingRateResolver _initializeFallbackSamplingConfiguration] */

void FUN_100280718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d05a0;
  func_0x000107c610fc(PTR_PTR_1126d05a0);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c47b54();
  func_0x000107c57160(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1002807a8; end: 10028086b; +[SCAPbDataDynamicSamplingConfig descriptor] */

void FUN_1002807a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b128c0,
                        &PTR____CFConstantStringClassReference_110e6ef58,
                        &PTR_s_snapchat_data_11316f1d8,&PTR_DAT_11316f1f0,1,0x10,0x1c);
    puRam00000001136c4ca8 = puVar1;
  }
  return;
}



/* Entry: 10028086c; end: 10028089b; -[SCBlizzardSamplingRateResolver setGraphene:] */

void FUN_10028086c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10028089c; end: 10028093f; -[SCBlizzardSamplingProvider initWithSamplingResolver:deviceSamplingProvider:] */

undefined1 *
FUN_10028089c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f4c48;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100280940; end: 1002809df; -[SCBlizzardSessionIdProvider initWithExperimentProvider:] */

undefined1 * FUN_100280940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4c58;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c3c1f8();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0xc) = 1;
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002809e0; end: 100280aab; -[SCBlizzardSessionIdProvider _random12BytesUuidString] */

undefined1 * FUN_1002809e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_34 [12];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)PTR__kSecRandomDefault_110347808;
  puVar5 = auStack_34;
  func_0x000107c60b70(uVar1,0xc);
  if ((int)uVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f4();
    in_x3 = 0xc;
    func_0x000107c45ae4();
    puVar5 = (undefined1 *)0x0;
    puVar3 = puVar2;
    func_0x000107c3e684();
    func_0x000107c61180();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x000107c3ac50();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c3ac54();
    func_0x000107c61180();
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  func_0x000107c60e78();
  ppuVar4 = &puStack_80;
  func_0x000107c61174(puVar5);
  func_0x000107c61174(in_x3);
  func_0x000107c61174(in_x4);
  puStack_78 = PTR_PTR_1126f4c60;
  puStack_80 = puVar2;
  func_0x000107c61154(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    func_0x000107c61174(puVar5);
    uVar1 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined1 **)((long)ppuVar4 + 8) = puVar5;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(in_x3);
    uVar1 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined8 *)((long)ppuVar4 + 0x10) = in_x3;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(in_x4);
    uVar1 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x4;
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(in_x4);
  func_0x000107c61170(in_x3);
  func_0x000107c61170(puVar5);
  return (undefined1 *)ppuVar4;
}



/* Entry: 100280aac; end: 100280b77; -[SCBlizzardSessionLogger initWithSessionIdProvider:loggingQueue:grapheneRegistry:] */

undefined1 *
FUN_100280aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f4c60;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100280b78; end: 100280bb7; -[_TtC29SCAppInsightsMetadataServices29SCAppInsightsMetadataServices appInsightsMetadataStorageObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100280b78(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1000bf56c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100280bb8; end: 100280c3f; +[SCBlizzardEventObserverManager sharedInstance] */

void FUN_100280bb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_100280c40;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c4a18 != -1) {
    FUN_10002a2fc(0x1136c4a18,&puStack_48);
  }
  uVar1 = uRam00000001136c4a10;
  func_0x000107c61174(uRam00000001136c4a10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100280c40; end: 100280c67;  */

void FUN_100280c40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610fc();
  uVar1 = uRam00000001136c4a10;
  uRam00000001136c4a10 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100280c68; end: 100280d1f; -[SCBlizzardEventObserverManager init] */

undefined1 * FUN_100280c68(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4b30;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100280d20; end: 100280f1b; -[SCBlizzardEventLoggerAdapter initWithLoggingQueue:experimentProvider:samplingProvider:sessionLogger:flipper:eventObserverManager:appInsightsMetadataStorage:] */

undefined1 *
FUN_100280d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126f4bd8;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c59af8(*(undefined8 *)((long)puVar1 + 0x50));
    func_0x000107c56330(*(undefined8 *)((long)puVar1 + 0x50));
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0xa8),param_4);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_8;
    func_0x000107c61170(uVar2);
    uVar3 = param_4;
    func_0x000107c5ab58();
    uVar2 = param_9;
    if ((int)uVar3 == 0) {
      uVar2 = 0;
    }
    func_0x000107c61174(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined8 *)((long)puVar1 + 0xd8) = uVar2;
    func_0x000107c61170(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar4 = PTR_PTR_1126d0348;
    func_0x000107c3ab14(PTR_PTR_1126d0348);
    func_0x000107c61180();
    func_0x000107c5a7a4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    *(undefined8 *)((long)puVar1 + 0x30) = 0x4014000000000000;
    *(undefined8 *)((long)puVar1 + 0x38) = 3;
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100280f1c; end: 100280f27;  */

undefined * FUN_100280f1c(void)

{
  return PTR_s_lensPosition_1126031e0;
}



/* Entry: 100280f28; end: 100280fab; -[SCBlizzardExperimentProvider shouldBreadCrumbBlizzardEvents] */

void FUN_100280f28(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xa8;
    func_0x000107c61148(lVar1);
    func_0x000107c3ebd4();
    func_0x000107c61170(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d94c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    lVar1 = *(long *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 100280fac; end: 100280fff; +[SCBlizzardConfig BLIZZARD_DEFAULT_BLACKLISTED_EVENTS] */

void FUN_100280fac(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c49e0 != -1) {
    FUN_10002a2fc(0x1136c49e0,&PTR___NSConcreteGlobalBlock_11095ed00);
  }
  uVar1 = uRam00000001136c49d8;
  func_0x000107c61174(uRam00000001136c49d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100281000; end: 10028103b;  */

void FUN_100281000(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c5a74c(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180f38);
  func_0x000107c61180();
  uVar1 = puRam00000001136c49d8;
  puRam00000001136c49d8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10028103c; end: 100281107; -[SCBlizzardRtusEventRouter initWithRtusConfigProvider:rtusEventIdProvider:graphene:] */

undefined1 *
FUN_10028103c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f4c38;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100281108; end: 100281157;  */

/* WARNING: Possible PIC construction at 0x00010028111c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010028112c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010028113c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100281130) */
/* WARNING: Removing unreachable block (ram,0x000100281120) */
/* WARNING: Removing unreachable block (ram,0x000100281140) */

void FUN_100281108(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 100281158; end: 1002811bb; -[SCLogger initWithLogger:] */

undefined1 * FUN_100281158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_s_init_1125d9248;
  puVar2 = &uStack_30;
  puStack_28 = PTR_PTR_112705c40;
  uStack_30 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_30,puVar1);
  func_0x000107c52d78();
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1002811bc; end: 1002811f3;  */

void FUN_1002811bc(long param_1,undefined8 param_2)

{
  func_0x000107c3c618(*(undefined8 *)(param_1 + 0x60),param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 1002811f4; end: 100281223; -[SCLogger setBlizzardLogger:] */

void FUN_1002811f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


