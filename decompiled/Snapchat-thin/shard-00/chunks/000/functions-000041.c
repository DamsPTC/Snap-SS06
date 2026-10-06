/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100100b9c; end: 100100bbb;  */

void FUN_100100b9c(void)

{
  undefined1 uStack_11;
  
  FUN_100100b10(&uStack_11);
  return;
}



/* Entry: 100100bbc; end: 100100bc3;  */

void FUN_100100bbc(void)

{
  return;
}



/* Entry: 100100bc4; end: 100100c63;  */

void FUN_100100bc4(undefined8 param_1)

{
  int iVar1;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if ((bRam00000001137f4dd0 & 1) == 0) {
    iVar1 = 0x137f4dd0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001137f4de0 = 0;
      uRam00000001137f4de8 = 0;
      uRam00000001137f4df0 = 0;
      func_0x000107c60e4c(0x1137f4dd0);
    }
  }
  if (lRam00000001137f4dd8 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    func_0x000107c60c38(0x1137f4dd8,&ppuStack_30,FUN_100100d0c);
  }
  func_0x000107c60c94(param_1,0x1137f4de0);
  return;
}



/* Entry: 100100c64; end: 100100cb7;  */

undefined8 FUN_100100c64(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_100100bc4(auStack_38);
  FUN_100114988(param_1,auStack_38);
  func_0x000107c60ca0(auStack_38);
  return param_1;
}



/* Entry: 100100cb8; end: 100100cfb;  */

undefined8 * FUN_100100cb8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cd34a0;
  FUN_100100c64(param_1 + 3);
  return param_1;
}



/* Entry: 100100cfc; end: 100100d0b;  */

void FUN_100100cfc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f742ece;
  func_0x00010002b82c(param_1,&UNK_10f742ece);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 100100d0c; end: 100100d8b;  */

void FUN_100100d0c(void)

{
  undefined1 *puStack_50;
  ulong uStack_48;
  byte bStack_39;
  undefined1 auStack_38 [24];
  
  FUN_100100cfc(&puStack_50);
  if (-1 < (char)bStack_39) {
    uStack_48 = (ulong)bStack_39;
    puStack_50 = (undefined1 *)&puStack_50;
  }
  FUN_100100da0(auStack_38,&UNK_10f743709,0x25,puStack_50,uStack_48);
  FUN_100066230(0x1137f4de0,auStack_38);
  func_0x000107c60ca0(auStack_38);
  func_0x000100114974();
  return;
}



/* Entry: 100100d8c; end: 100100d9f;  */

void FUN_100100d8c(void)

{
  return;
}



/* Entry: 100100da0; end: 100100dc7;  */

void FUN_100100da0(void)

{
  FUN_100100d8c();
  FUN_100100dc8(0x28);
  FUN_100100de8();
  return;
}



/* Entry: 100100dc8; end: 100100de7;  */

void FUN_100100dc8(void)

{
  return;
}



/* Entry: 100100de8; end: 100100ec7;  */

void FUN_100100de8(undefined8 *param_1)

{
  undefined8 in_x4;
  long in_x5;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  char cStack_108;
  undefined1 auStack_e8 [104];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  
  func_0x000100100dd8();
  if (lStack_60 != 0) {
    if (in_x5 == 0) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c3981c();
    }
    func_0x000100100f7c();
    func_0x000100100f88();
    func_0x000107c60ca0(auStack_e8);
    FUN_100101020();
    func_0x000100101034();
    if (cStack_108 == '\x01') {
      param_1[1] = uStack_118;
      *param_1 = uStack_120;
      param_1[2] = uStack_110;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_120 = 0;
      FUN_1001148fc(&uStack_120);
      FUN_10011491c();
      FUN_10011494c();
      goto LAB_100100e94;
    }
    FUN_1001148fc(&uStack_120);
    FUN_10011491c();
    FUN_10011494c();
  }
  FUN_100060b18(param_1,in_x4);
LAB_100100e94:
  func_0x000100114954();
  return;
}



/* Entry: 100100ec8; end: 100100ecf;  */

undefined8 FUN_100100ec8(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam000000011383d968 & 1) == 0) {
    iVar1 = 0x1383d968;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uVar2 = 0x110;
      func_0x000107c60e20();
      func_0x000107c60ee4();
      FUN_1000df6a8(uVar2);
      uRam000000011383d960 = uVar2;
      func_0x000107c60e4c(0x11383d968);
    }
  }
  return uRam000000011383d960;
}



/* Entry: 100100ed0; end: 100100f0f;  */

void FUN_100100ed0(void)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  FUN_100100ec8();
  FUN_100100f10();
  lVar1 = *(long *)(unaff_x20 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  unaff_x19[1] = *(undefined8 *)(unaff_x20 + 0xb8);
  *unaff_x19 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100100f28();
    } while (extraout_w10 != 0);
  }
  func_0x000100100f38();
  return;
}



/* Entry: 100100f10; end: 100100f3f;  */

void FUN_100100f10(long param_1)

{
  long lStack0000000000000000;
  undefined1 uStack0000000000000008;
  
  lStack0000000000000000 = param_1 + 8;
  uStack0000000000000008 = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_mutex_base11lock_sharedEv_110346610)();
  return;
}



/* Entry: 100100f40; end: 100100f73;  */

undefined8 * FUN_100100f40(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c60d58(*param_1);
  }
  return param_1;
}



/* Entry: 100100f74; end: 100100feb;  */

void FUN_100100f74(void)

{
  return;
}



/* Entry: 100100fec; end: 10010101f;  */

undefined8 FUN_100100fec(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000100100fd4(&uStack_28);
  return param_1;
}



/* Entry: 100101020; end: 100101063;  */

long FUN_100101020(void)

{
  long unaff_x29;
  
  return unaff_x29 + -0x40;
}



/* Entry: 100101064; end: 1001010e3;  */

void FUN_100101064(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
  
  func_0x000100101054();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_1001010e4();
  func_0x000107c61180();
  func_0x000107c44318(uVar1,param_2,unaff_x21);
  func_0x000107c61180();
  FUN_10011485c();
  FUN_100114864(uVar1);
  func_0x0001000ded28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1001010e4; end: 1001011a3;  */

void FUN_1001010e4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126e01b8;
  func_0x000107c610f4(PTR_PTR_1126e01b8);
  lVar3 = param_1;
  FUN_1001011a4(param_1);
  func_0x000107c61180();
  lVar4 = param_1 + 0x18;
  FUN_1001011ec(lVar4);
  func_0x000107c61180();
  iVar1 = *(int *)(param_1 + 0x28);
  param_1 = param_1 + 0x30;
  func_0x000100101220(param_1);
  func_0x000107c61180();
  func_0x000107c47048(puVar2,param_2,lVar3,lVar4,(long)iVar1,param_1);
  FUN_100101380();
  func_0x00010010138c();
  func_0x000100101394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1001011a4; end: 1001011eb;  */

void FUN_1001011a4(void)

{
  func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c45ae8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1001011ec; end: 100101263;  */

void FUN_1001011ec(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_10028fd70(*param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100101264; end: 10010137f; -[SCNConfigConfigurationKey initWithKey:id:systemType:featureProvidedSignalsProto:] */

undefined1 *
FUN_100101264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270c190;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100101380; end: 10010139b;  */

void FUN_100101380(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10010139c; end: 100101427; -[SCCircumstanceEngineConfigurationMashaller getStringValue:] */

void FUN_10010139c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5c64c();
  if (lVar1 == 0xc) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    FUN_100101430(param_3);
    func_0x000107c61180();
    func_0x000107c5c1e4(uVar2,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  else {
    uVar2 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100101428; end: 10010142f; -[SCNConfigConfigurationKey systemType] */

undefined8 FUN_100101428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100101430; end: 10010155b;  */

void FUN_100101430(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c42e90();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4adac();
  func_0x000107c61170(lVar1);
  puVar5 = PTR_PTR_1126ae780;
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c42e90(param_1);
    func_0x000107c61180();
    uStack_48 = 0;
    func_0x000107c4e380(puVar5,param_2,lVar1,&uStack_48);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  puVar3 = PTR_PTR_1126dec58;
  func_0x000107c610f4(PTR_PTR_1126dec58);
  lVar1 = param_1;
  func_0x000107c4a8c4(param_1);
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c44fc8(param_1);
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c5c64c(param_1);
  func_0x000107c47044(puVar3,param_2,lVar1,lVar2,puVar5,lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10010155c; end: 100101563; -[SCNConfigConfigurationKey featureProvidedSignalsProto] */

undefined8 FUN_10010155c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100101564; end: 10010156b; -[SCNConfigConfigurationKey key] */

undefined8 FUN_100101564(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10010156c; end: 100101573; -[SCNConfigConfigurationKey id] */

undefined8 FUN_10010156c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100101574; end: 100101657; -[SCCircumstanceEngineConfigurationKey initWithKey:id:featureProvidedSignals:systemType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100101574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  uVar2 = param_5;
  func_0x000107c41214(param_5);
  func_0x000107c61180();
  puStack_48 = PTR_PTR_112702ec0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithKey_id_systemType_featur_1125e5cb8,param_3,param_4,
                      param_6,uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127875bc;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 100101658; end: 1001017ab; -[SCCircumstanceEngineConfiguration stringValueForKey:] */

void FUN_100101658(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5c64c();
  if (uVar1 == 0xc) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar1 = param_3;
    func_0x000107c4a8c4(param_3);
    func_0x000107c61180();
    func_0x000107c4baac(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126dec58;
    func_0x000107c61174(param_3);
    func_0x000107c61158(puVar3);
    uVar4 = param_3;
    func_0x000107c6115c(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_3);
    func_0x000107c3b834(param_1);
    func_0x000107c61180();
    uVar4 = uVar1;
    func_0x000107c4a8c4(uVar1);
    func_0x000107c61180();
    uVar5 = uVar1;
    func_0x000107c42e88(uVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    lVar6 = param_1;
    func_0x000107c5c1e0(param_1);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
  }
  else {
    lVar6 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1001017ac; end: 10010181b;  */

void FUN_1001017ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x0001000ad7c4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a7510;
  func_0x000107c610f8();
  func_0x000107c45f98();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  *param_1 = puVar2;
  return;
}



/* Entry: 10010181c; end: 1001018bf; -[SCConfigMetricLoggerImpl initWithConfigMetric:startupCompleteTracker:] */

undefined1 *
FUN_10010181c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e78e8;
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



/* Entry: 1001018c0; end: 1001018eb;  */

void FUN_1001018c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001018ec; end: 100101957; -[SCConfigMetricLoggerImpl logCppSingleReadConfig:] */

/* WARNING: Possible PIC construction at 0x000100101940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100101944) */

void FUN_1001018ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3bbf0(param_1);
  func_0x000107c408a8(uVar1,param_2,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100101958; end: 100101997; -[SCConfigMetricLoggerImpl _latestInStartup] */

uint FUN_100101958(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4a500();
  func_0x000107c61170(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 100101998; end: 1001019b7;  */

void FUN_100101998(void)

{
  func_0x000107c61168(&PTR_PTR_1127d9618);
  return;
}



/* Entry: 1001019b8; end: 100101a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001019b8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_100101998();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112da1538) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 100101a20; end: 100101b77; -[_TtC36StartupCompleteTrackerImplementation36StartupCompleteTrackerImplementation isStartupComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100101a20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  FUN_100083b20(auStack_58);
  FUN_1000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 0x20))(uStack_40,lStack_38);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_58);
  return (uint)uVar1 & 1;
}



/* Entry: 100101b78; end: 100101c1b;  */

uint FUN_100101b78(uint param_1)

{
  func_0x000100101aa0();
  return param_1 & 1;
}



/* Entry: 100101c1c; end: 100101c2f; -[SCConfigMetricGraphene2 cppGetSingleConfig:isStartUp:] */

char * FUN_100101c1c(long param_1,undefined8 param_2,char *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = param_3;
  func_0x000107c61174(param_3);
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 8);
    pcVar4 = "";
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar3 = *(long **)(lVar2 + 8);
      func_0x000107c61174(param_3);
      if (param_3 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = param_3;
        func_0x000107c61178(param_3);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_78,pcVar4);
      pcVar4 = "true";
      if (param_4 == 0) {
        pcVar4 = "false";
      }
      FUN_10002b838(auStack_60,pcVar4);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      pcVar4 = "";
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11087b138,&uStack_98,100);
      puStack_80 = &uStack_98;
      FUN_10007e5dc(&puStack_80);
      lVar2 = 0;
      do {
        if ((&cStack_49)[lVar2] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar2));
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != -0x30);
    }
  }
  pcVar5 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar5;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  lVar2 = *(long *)(pcVar5 + 8);
  iVar1 = *(int *)(pcVar4 + 0x48);
  if (iVar1 <= *(int *)(lVar2 + 0x130)) {
    *(int *)(lVar2 + 0x134) = *(int *)(lVar2 + 0x134) + 1;
  }
  return (char *)(ulong)(*(int *)(lVar2 + 0x130) < iVar1);
}



/* Entry: 100101c30; end: 100101e3b;  */

char * FUN_100101c30(long param_1,char *param_2,int param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_2;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    pcVar3 = "";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_78,pcVar3);
      pcVar3 = "true";
      if (param_3 == 0) {
        pcVar3 = "false";
      }
      FUN_10002b838(auStack_60,pcVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      pcVar3 = "";
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11087b138,&uStack_98,param_4 * 100);
      puStack_80 = &uStack_98;
      FUN_10007e5dc(&puStack_80);
      lVar5 = 0;
      do {
        if ((&cStack_49)[lVar5] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar5));
        }
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x30);
    }
  }
  pcVar4 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar4;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  lVar5 = *(long *)(pcVar4 + 8);
  iVar1 = *(int *)(pcVar3 + 0x48);
  if (iVar1 <= *(int *)(lVar5 + 0x130)) {
    *(int *)(lVar5 + 0x134) = *(int *)(lVar5 + 0x134) + 1;
  }
  return (char *)(ulong)(*(int *)(lVar5 + 0x130) < iVar1);
}



/* Entry: 100101e3c; end: 100101e67;  */

bool FUN_100101e3c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 <= *(int *)(lVar2 + 0x130)) {
    *(int *)(lVar2 + 0x134) = *(int *)(lVar2 + 0x134) + 1;
  }
  return *(int *)(lVar2 + 0x130) < iVar1;
}



/* Entry: 100101e68; end: 100101f1b; -[SCCircumstanceEngineConfiguration _getEngine] */

void FUN_100101e68(long param_1)

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
  code *pcStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_100101f1c;
  pcStack_30 = FUN_100101f60;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100101f2c;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  FUN_10006eaa4(*(undefined8 *)(param_1 + 0x18),&puStack_80);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100101f1c; end: 100101f2b;  */

void FUN_100101f1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100101f2c; end: 100101f5f;  */

void FUN_100101f2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  func_0x000107c61174(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100101f60; end: 100101f67;  */

void FUN_100101f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100101f68; end: 100101f77; -[SCCircumstanceEngineConfigurationKey featureProvidedSignals] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100101f68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127875bc);
}



/* Entry: 100101f78; end: 100101ffb; -[SCLazyCircumstanceEngineProxy stringValueForConfigKeySync:featureProvidedSignals:] */

void FUN_100101f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3b5e8(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c1e0();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100101ffc; end: 100102003; -[SCLazyCircumstanceEngineProxy _engine] */

void FUN_100101ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 100102004; end: 10010205b;  */

void FUN_100102004(void)

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



/* Entry: 10010205c; end: 10010210f;  */

void FUN_10010205c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar1);
  if (lVar1 != 0) {
    func_0x000107c5e060(*(undefined8 *)(lVar1 + 0xd0));
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    func_0x000107c6111c(auStack_38,param_1 + 0x28);
    func_0x000107c4e524(uVar2);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 100102110; end: 1001021c3; -[SCConfigManagerRecoveryHandler waitForRecovery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100102110(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  long lStack_58;
  
  puVar3 = *(undefined8 **)(param_1 + _DAT_112daa338);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61174();
    func_0x000107c61174();
    puVar1 = puVar3;
    FUN_1000298f0();
    func_0x000107c61428();
    uVar2 = *puVar1;
    puStack_60 = puVar3;
    lStack_58 = param_1;
    func_0x000107c61174(uVar2);
    FUN_1000b0da8(0xd00000000000001e,0x800000010ef870e0,&UNK_1014e1834,auStack_70);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1001021c4; end: 1001021cb;  */

void FUN_1001021c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001021c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 1001021cc; end: 10010221b;  */

undefined8 FUN_1001021cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10010221c; end: 100102243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10010221c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *unaff_x20 + _DAT_1137ff4d8;
  lVar2 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar1,lVar2);
  return param_1;
}



/* Entry: 100102244; end: 1001023cb;  */

void FUN_100102244(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FUN_1001023cc();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_70 = uVar1;
    func_0x000107c6157c(uVar3);
    FUN_100075034(0x100184328,auStack_80,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar3);
    auStack_80[0] = uVar1;
    if (param_3 == 0) {
      func_0x0001014c4e50(param_4,param_5);
      func_0x000107c6142c(param_5);
      uVar1 = auStack_80[0];
    }
    else {
      uVar3 = uVar1;
      func_0x000107c61558(uVar1);
      func_0x000107c61434(param_3);
      FUN_10018433c(param_2,param_3,param_4,param_5,uVar3);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = uVar1;
    func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    uVar2 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef86280);
    func_0x000107c56bcc(uVar4);
    func_0x000107c6142c(uVar1);
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1001023cc; end: 100102703;  */

undefined * FUN_1001023cc(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  ulong *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uStack_140;
  ulong uStack_138;
  undefined *apuStack_130 [4];
  undefined1 auStack_110 [32];
  undefined8 auStack_f0 [3];
  long lStack_d8;
  undefined8 auStack_b0 [4];
  undefined8 auStack_90 [6];
  
  uVar6 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef86280);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  if (param_1 != 0) {
    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c61168(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    lVar7 = param_1;
    func_0x000107c6148c(param_1,puVar17);
    if (lVar7 != 0) {
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1001830b8();
      puVar8 = puVar17;
      func_0x000107c5ff48();
      func_0x000107c5ff50(auStack_f0);
      puVar12 = PTR___sypN_11034f1a8;
      puVar4 = PTR___sSSN_11034da80;
      do {
        if (lStack_d8 == 0) {
          func_0x000107c61574(puVar8);
          func_0x000107c615e8(param_1);
          return puVar17;
        }
        FUN_100102924(auStack_b0,auStack_f0);
        FUN_100102924(auStack_90,auStack_110);
        FUN_1000bb420(auStack_f0,apuStack_130);
        puVar9 = &uStack_140;
        func_0x000107c6147c(puVar9,apuStack_130,puVar12 + 8,puVar4,6);
        uVar2 = uStack_138;
        uVar18 = uStack_140;
        if (((ulong)puVar9 & 1) == 0) {
LAB_1001024b4:
          FUN_100183ab8(auStack_110);
          FUN_100183ab8(auStack_f0);
        }
        else {
          FUN_1000bb420(auStack_110,apuStack_130);
          puVar9 = &uStack_140;
          func_0x000107c6147c(puVar9,apuStack_130,puVar12 + 8,puVar4,6);
          uVar15 = uStack_138;
          uVar13 = uStack_140;
          if (((ulong)puVar9 & 1) == 0) {
            func_0x000107c6142c(uVar2);
            goto LAB_1001024b4;
          }
          puVar10 = puVar17;
          func_0x000107c61558();
          uVar11 = uVar18;
          uVar14 = uVar2;
          apuStack_130[0] = puVar17;
          func_0x000100029284();
          uVar16 = (ulong)~(uint)uVar14 & 1;
          lVar7 = *(long *)(puVar17 + 0x10) + uVar16;
          if (SCARRY8(*(long *)(puVar17 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001026f0);
            (*pcVar5)();
          }
          if (*(long *)(puVar17 + 0x18) < lVar7) {
            FUN_1001833c8(lVar7,puVar10);
            uVar11 = uVar18;
            uVar16 = uVar2;
            func_0x000100029284();
            if (((uint)uVar14 & 1) != ((uint)uVar16 & 1)) {
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100102704);
              (*pcVar5)();
            }
LAB_1001025d0:
            if ((uVar14 & 1) != 0) goto LAB_1001025d8;
LAB_100102624:
            puVar17 = apuStack_130[0];
            *(ulong *)(apuStack_130[0] + (uVar11 >> 6) * 8 + 0x40) =
                 *(ulong *)(apuStack_130[0] + (uVar11 >> 6) * 8 + 0x40) | 1L << (uVar11 & 0x3f);
            puVar9 = (ulong *)(*(long *)(apuStack_130[0] + 0x30) + uVar11 * 0x10);
            *puVar9 = uVar18;
            puVar9[1] = uVar2;
            puVar9 = (ulong *)(*(long *)(apuStack_130[0] + 0x38) + uVar11 * 0x10);
            *puVar9 = uVar13;
            puVar9[1] = uVar15;
            FUN_100183ab8(auStack_110);
            FUN_100183ab8(auStack_f0);
            if (SCARRY8(*(long *)(puVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1001026f4);
              (*pcVar5)();
            }
            *(long *)(puVar17 + 0x10) = *(long *)(puVar17 + 0x10) + 1;
          }
          else {
            if (((ulong)puVar10 & 1) != 0) goto LAB_1001025d0;
            func_0x000100184498();
            if ((uVar14 & 1) == 0) goto LAB_100102624;
LAB_1001025d8:
            puVar17 = apuStack_130[0];
            puVar9 = (ulong *)(*(long *)(apuStack_130[0] + 0x38) + uVar11 * 0x10);
            uVar18 = puVar9[1];
            *puVar9 = uVar13;
            puVar9[1] = uVar15;
            func_0x000107c6142c(uVar2);
            func_0x000107c6142c(uVar18);
            FUN_100183ab8(auStack_110);
            FUN_100183ab8(auStack_f0);
          }
        }
        func_0x000107c5ff50(auStack_f0);
      } while( true );
    }
    func_0x000107c615e8(param_1);
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar17 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar17 != (undefined *)0x0) {
    FUN_1000285a8(0x112d38330,&UNK_10d91d920);
    puVar12 = puVar17;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar19 = (undefined8 *)(puVar4 + 0x38);
    do {
      uVar18 = puVar19[-3];
      uVar2 = puVar19[-2];
      uVar6 = puVar19[-1];
      uVar3 = *puVar19;
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar3);
      uVar13 = uVar18;
      uVar15 = uVar2;
      func_0x000100029284();
      if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001831c4);
        (*pcVar5)();
      }
      uVar15 = uVar13 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar15 + 0x40) =
           *(ulong *)(puVar12 + uVar15 + 0x40) | 1L << (uVar13 & 0x3f);
      puVar9 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar13 * 0x10);
      *puVar9 = uVar18;
      puVar9[1] = uVar2;
      puVar1 = (undefined8 *)(*(long *)(puVar12 + 0x38) + uVar13 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar3;
      if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001831c8);
        (*pcVar5)();
      }
      puVar19 = puVar19 + 4;
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      puVar17 = puVar17 + -1;
    } while (puVar17 != (undefined *)0x0);
    func_0x000107c61574(puVar12);
  }
  return puVar12;
}



/* Entry: 100102704; end: 100102717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100102704(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_90 [16];
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lStack_80 = lVar5;
      uStack_78 = uVar3;
      uStack_70 = uVar2;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      FUN_100087bd4(FUN_100102904,auStack_90,PTR___sytN_11034f1b0 + 8);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100102718; end: 1001027d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100102718(long param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined1 auStack_90 [16];
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lStack_80 = param_1;
      uStack_78 = param_2;
      uStack_70 = param_3;
      uStack_68 = param_4;
      uStack_60 = param_5;
      FUN_100087bd4(FUN_100102904,auStack_90,PTR___sytN_11034f1b0 + 8);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1001027d8; end: 100102903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001027d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  
  lVar1 = _DAT_112da9610;
  puStack_48 = PTR___sSSN_11034da80;
  uStack_60 = param_4;
  uStack_58 = param_5;
  func_0x000107c61428(param_1 + _DAT_112da9610,auStack_78,0x21,0);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  FUN_100102934(&uStack_60,param_2,param_3);
  func_0x000107c614a8(auStack_78);
  puVar3 = PTR_PTR_1126d05a8;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    uVar4 = uVar5;
    func_0x000107c61434(uVar5);
    FUN_10018cc3c();
    func_0x000107c6142c(uVar5);
    uVar5 = uVar4;
    func_0x000107c5f9dc(uVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(uVar4);
    func_0x000107c5a360(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100102904);
  (*pcVar2)();
}



/* Entry: 100102904; end: 100102923;  */

void FUN_100102904(void)

{
  long unaff_x20;
  
  FUN_1001027d8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 100102924; end: 100102933;  */

undefined8 * FUN_100102924(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Entry: 100102934; end: 1001029e7;  */

void FUN_100102934(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  lStack_58 = param_1[3];
  uStack_60 = param_1[2];
  if (lStack_58 == 0) {
    FUN_10006e7f4(&uStack_70);
    FUN_100216878(auStack_50,param_2,param_3);
    func_0x000107c6142c(param_3);
    FUN_10006e7f4(auStack_50);
  }
  else {
    FUN_100102924(&uStack_70,auStack_50);
    uVar1 = *unaff_x20;
    func_0x000107c61558(uVar1);
    uStack_70 = *unaff_x20;
    FUN_1001029e8(auStack_50,param_2,param_3,uVar1);
    func_0x000107c6142c(param_3);
    *unaff_x20 = uStack_70;
  }
  return;
}



/* Entry: 1001029e8; end: 100102b0b;  */

undefined8 * FUN_1001029e8(undefined8 *param_1,long param_2,undefined8 *param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  puVar3 = param_3;
  func_0x000100029284();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)puVar3 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100102ac8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    FUN_100102b0c(lVar5,param_4 & 1);
    puVar4 = param_3;
    func_0x000100029284();
    lVar2 = param_2;
    if (((uint)puVar3 & 1) != ((uint)puVar4 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100102a88);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001010fc388();
    lVar5 = *unaff_x20;
    goto joined_r0x000100102adc;
  }
  lVar5 = *unaff_x20;
joined_r0x000100102adc:
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 0x20);
    FUN_100183ab8(puVar3);
    uVar9 = *param_1;
    uVar11 = param_1[3];
    uVar10 = param_1[2];
    puVar3[1] = param_1[1];
    *puVar3 = uVar9;
    puVar3[3] = uVar11;
    puVar3[2] = uVar10;
    return puVar3;
  }
  FUN_100102dc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return param_3;
}



/* Entry: 100102b0c; end: 100102dc7;  */

void FUN_100102b0c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112d4b5f8;
  FUN_1000285a8(0x112d4b5f8,&UNK_10d9121b0);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_100102d94:
    func_0x000107c61574(lVar15);
LAB_100102d9c:
    *unaff_x20 = lVar7;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100102dc4);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar15);
            goto LAB_100102d9c;
          }
          uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
          if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
            *puVar17 = -1L << (uVar16 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_100102d94;
        }
        uVar16 = puVar17[lVar18];
        lVar10 = lVar10 + 1;
      } while (uVar16 == 0);
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar18 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    lVar10 = *(long *)(lVar15 + 0x38) + uVar9 * 0x20;
    if ((param_2 & 1) == 0) {
      FUN_1000bb420(lVar10,auStack_80);
      func_0x000107c61434(uVar3);
    }
    else {
      FUN_100102924(lVar10,auStack_80);
    }
    func_0x000107c6068c(auStack_c8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_c8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100102dc8);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    FUN_100102924(auStack_80,*(long *)(lVar7 + 0x38) + uVar9 * 0x20);
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar18;
  } while( true );
}



/* Entry: 100102dc8; end: 100102e2f;  */

void FUN_100102dc8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  FUN_100102924(param_4,*(long *)(param_5 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100102e30);
  (*pcVar3)();
}



/* Entry: 100102e30; end: 100102e7b; +[KSCrash sharedInstance] */

void FUN_100102e30(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c4dc0 != -1) {
    FUN_10002a2fc(0x1136c4dc0,&PTR___NSConcreteGlobalBlock_11095f2b8);
  }
  uVar1 = uRam00000001136c4db8;
  func_0x00010018ac98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100102e7c; end: 100102e9b;  */

void FUN_100102e7c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uStack_11;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_1000df1ac(&uStack_11,puVar2,uVar1);
  return;
}



/* Entry: 100102e9c; end: 1001030f3;  */

undefined1  [16]
FUN_100102e9c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  plVar6 = param_1 + 3;
  FUN_100102e7c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1 + 4;
          FUN_100105738(plVar3,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1001030a8;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  plVar3 = (long *)*param_4;
  plVar7 = (long *)0x30;
  func_0x000107c60e20();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  if (*(char *)((long)plVar3 + 0x17) < '\0') {
    FUN_100033dac(plVar7 + 2,*plVar3,plVar3[1]);
  }
  else {
    lVar10 = plVar3[1];
    lVar4 = *plVar3;
    plVar7[4] = plVar3[2];
    plVar7[3] = lVar10;
    plVar7[2] = lVar4;
  }
  plVar7[5] = 0;
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_100103130(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*plVar7 != 0) {
      plVar6 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(lVar4 + (long)plVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_1001030a8:
  auVar11._8_8_ = uVar1;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 1001030f4; end: 10010312f;  */

void FUN_1001030f4(long param_1,long param_2)

{
  undefined1 uStack_11;
  
  FUN_1000df1ac(&uStack_11,param_1,param_2 - param_1);
  return;
}



/* Entry: 100103130; end: 1001032f3;  */

void FUN_100103130(long *param_1,long *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  
  plVar6 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar6 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar6 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar6) {
      plVar6 = (long *)(1L << (-LZCOUNT((long)plVar6 + -1) & 0x3fU));
    }
    if (param_2 <= plVar6) {
      param_2 = plVar6;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar11 = *param_1;
      *param_1 = 0;
      if (lVar11 != 0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar11 = (long)param_2 << 3;
    func_0x000107c60e20();
    lVar4 = *param_1;
    *param_1 = lVar11;
    if (lVar4 != 0) {
      func_0x000107c60e14();
      lVar11 = *param_1;
    }
    param_1[1] = (long)param_2;
    func_0x000107c60ee4(lVar11,(long)param_2 << 3);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      plVar7 = (long *)plVar6[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar5);
      }
      else if (param_2 <= plVar7) {
        uVar3 = 0;
        if (param_2 != (long *)0x0) {
          uVar3 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar3 * (long)param_2);
      }
      *(long **)(lVar11 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar6;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar5);
        }
        else if (param_2 <= plVar9) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar3 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          if (*(long *)(lVar11 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar11 + (long)plVar9 * 8) = plVar6;
            plVar7 = plVar9;
          }
          else {
            *plVar6 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar11 + (long)plVar9 * 8);
            **(long **)(lVar11 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000104bd35f4();
  if ((*(byte *)((long)plVar6 + 0x1b) & 1) == 0) {
    iVar2 = (int)plVar6[1];
    if (iVar2 < 0xf) {
      if (iVar2 - 0xcU < 2) {
        plVar10 = (long *)plVar6[7];
        if ((plVar10 != (long *)0x0) && ((*(byte *)((long)plVar10 + 0x1b) & 1) == 0)) {
          (**(code **)(*plVar10 + 0x20))(plVar10,plVar7,param_3);
        }
        puVar1 = (undefined8 *)plVar6[10];
        for (puVar13 = (undefined8 *)plVar6[9]; puVar13 != puVar1; puVar13 = puVar13 + 1) {
          uVar12 = *puVar13;
          func_0x000107c61174(uVar12);
          *param_3 = *param_3 + 1;
          func_0x000107c61174(uVar12);
          func_0x000107c3e920(uVar12);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(uVar12);
        }
      }
      else if (iVar2 == 0xe) {
        return;
      }
    }
    else {
      if (iVar2 == 0x10) {
        return;
      }
      if (iVar2 == 0xf) {
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        func_0x000107c6132c(plVar7,iVar2 + 1,(char)plVar6[6]);
        return;
      }
    }
    plVar10 = (long *)plVar6[7];
    if ((plVar10 != (long *)0x0) && ((*(byte *)((long)plVar10 + 0x1b) & 1) == 0)) {
      (**(code **)(*plVar10 + 0x20))(plVar10,plVar7,param_3);
    }
    plVar6 = (long *)plVar6[8];
    if ((plVar6 != (long *)0x0) && ((*(byte *)((long)plVar6 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100103450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x20))(plVar6,plVar7,param_3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1001032f4; end: 10010345b;  */

void FUN_1001032f4(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        func_0x000107c61174(uVar4);
        *param_3 = *param_3 + 1;
        func_0x000107c61174(uVar4);
        func_0x000107c3e920(uVar4);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      func_0x000107c6132c(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100103450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 10010345c; end: 1001035eb;  */

/* WARNING: Possible PIC construction at 0x00010010351c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100103520) */

void FUN_10010345c(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 < 0xf) {
      if (iVar1 - 0xcU < 2) {
        plVar2 = *(long **)(param_1 + 0x38);
        if ((plVar2 != (long *)0x0) && ((*(byte *)((long)plVar2 + 0x1b) & 1) == 0)) {
          (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3);
        }
        if (*(undefined8 **)(param_1 + 0x48) != *(undefined8 **)(param_1 + 0x50)) {
          uVar3 = **(undefined8 **)(param_1 + 0x48);
          func_0x000107c61174(uVar3);
          *param_3 = *param_3 + 1;
          func_0x000107c61174(uVar3);
          func_0x000107c3e920(uVar3);
          goto code_r0x000107c61170;
        }
      }
      else if (iVar1 == 0xe) {
        return;
      }
    }
    else {
      if (iVar1 == 0x10) {
        return;
      }
      if (iVar1 == 0xf) {
        *param_3 = *param_3 + 1;
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        func_0x000107c61174(uVar3);
        func_0x000107c3e920(uVar3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar3);
        return;
      }
    }
    plVar2 = *(long **)(param_1 + 0x38);
    if ((plVar2 != (long *)0x0) && ((*(byte *)((long)plVar2 + 0x1b) & 1) == 0)) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3);
    }
    plVar2 = *(long **)(param_1 + 0x40);
    if ((plVar2 != (long *)0x0) && ((*(byte *)((long)plVar2 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001001035e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3);
      return;
    }
  }
  return;
}



/* Entry: 1001035ec; end: 100103627;  */

void FUN_1001035ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61178();
  func_0x000107c3ac4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_bind_text_11034cf98)(param_3,param_4,param_1,0xffffffff,0xffffffffffffffff)
  ;
  return;
}



/* Entry: 100103628; end: 1001038db;  */

uint FUN_100103628(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  
  func_0x000107c61174(param_3);
  uVar8 = *(uint *)(param_1 + 8);
  if ((int)uVar8 < 0xe) {
    if (uVar8 - 1 < 2) {
      *param_4 = 0;
      bStack_53 = 0;
      (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_53);
      func_0x000107c611b0();
      uVar8 = (uint)(uVar8 != 1 ^ bStack_53);
      goto LAB_1001038a4;
    }
    if (1 < uVar8 - 0xc) goto LAB_100103790;
    plVar10 = *(long **)(param_1 + 0x38);
    func_0x000107c61174(param_3);
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,param_4);
    func_0x000107c61180();
    puVar3 = *(undefined8 **)(param_1 + 0x48);
    puVar4 = *(undefined8 **)(param_1 + 0x50);
    if (uVar8 == 0xc) {
      if (puVar3 == puVar4) {
        uVar8 = 0;
      }
      else {
        do {
          uVar9 = *puVar3;
          func_0x000107c61174(uVar9);
          plVar6 = plVar10;
          func_0x000107c3fec8();
          func_0x000107c61170(uVar9);
          uVar8 = (uint)plVar6;
          uVar2 = uVar8;
          if (puVar3 + 1 == puVar4) {
            uVar2 = 1;
          }
          puVar3 = puVar3 + 1;
        } while ((uVar2 & 1) == 0);
      }
    }
    else if (puVar3 == puVar4) {
      uVar8 = 1;
    }
    else {
      do {
        uVar9 = *puVar3;
        func_0x000107c61174(uVar9);
        plVar6 = plVar10;
        func_0x000107c3fec8();
        func_0x000107c61170(uVar9);
        uVar8 = (uint)plVar6;
        if (puVar3 + 1 == puVar4) {
          uVar8 = 1;
        }
        puVar3 = puVar3 + 1;
      } while (uVar8 != 1);
      uVar8 = (uint)plVar6 ^ 1;
    }
LAB_100103898:
    func_0x000107c61170(plVar10);
  }
  else {
    if (uVar8 - 0xf < 2) {
      *param_4 = 0;
      uVar8 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_1001038a4;
    }
    if (uVar8 == 0xe) {
      lVar1 = 0x28;
      lVar5 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar5 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar5,param_4);
      uVar8 = (uint)lVar5;
      goto LAB_1001038a4;
    }
LAB_100103790:
    plVar10 = *(long **)(param_1 + 0x38);
    plVar6 = *(long **)(param_1 + 0x40);
    func_0x000107c61174(param_3);
    if ((uVar8 & 0xfffffffe) == 10) {
      (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&bStack_51);
      func_0x000107c61180();
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&bStack_52);
      func_0x000107c61180();
      *param_4 = (bStack_51 | bStack_52) & 1;
      plVar7 = plVar10;
      func_0x000107c3fec8(plVar10);
      uVar8 = (uint)plVar7;
      func_0x000107c61170(plVar6);
      goto LAB_100103898;
    }
    uVar8 = 0;
  }
  func_0x000107c61170(param_3);
LAB_1001038a4:
  func_0x000107c61170(param_3);
  return uVar8 & 1;
}



/* Entry: 1001038dc; end: 1001039bb;  */

void FUN_1001038dc(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  int iVar1;
  
  func_0x000107c61174(param_3);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0xe) {
    if (iVar1 - 1U < 2) {
      param_2 = 0;
      *param_4 = 0;
      goto LAB_10010399c;
    }
  }
  else {
    if (iVar1 - 0xfU < 2) {
      *param_4 = 0;
      param_2 = *(long *)(param_1 + 0x30);
      func_0x000107c61174(param_2);
      goto LAB_10010399c;
    }
    if (iVar1 == 0xe) {
      if (param_2 == 0) {
        param_2 = param_3;
        (**(code **)(param_1 + 0x28))(param_3,param_4);
        func_0x000107c61180();
      }
      else {
        (**(code **)(param_1 + 0x20))(param_2,param_4);
        func_0x000107c61180();
      }
      goto LAB_10010399c;
    }
  }
  param_2 = 0;
LAB_10010399c:
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1001039bc; end: 100103a43;  */

void FUN_1001039bc(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c45aec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100103a44; end: 100103ad3;  */

ulong FUN_100103a44(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x000107c61174(param_3);
  if (param_4 == 0xb) {
    func_0x000107c49d0c(param_1,param_2,param_3);
    param_1 = (ulong)((uint)param_1 ^ 1);
  }
  else if (param_4 == 10) {
    func_0x000107c49d0c(param_1,param_2,param_3);
  }
  else {
    param_1 = 0;
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 100103ad4; end: 100103d9b; +[SCDocPrefItem immutableObjectParse:bufferSize:] */

void FUN_100103ad4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  char cVar12;
  char cVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126e0340;
  func_0x000107c610f4(PTR_PTR_1126e0340);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      func_0x000107c61180();
      lVar5 = (long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    if (6 < uVar4) {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
      if (uVar6 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        func_0x000107c61180();
        lVar5 = -(long)*piVar1;
        uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      uVar14 = 0;
      uVar15 = 0;
      if (uVar4 < 9) {
        cVar12 = '\0';
LAB_100103c40:
        uVar9 = 0;
        cVar13 = '\0';
LAB_100103c44:
        uVar10 = 0;
      }
      else {
        uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
        if (uVar6 == 0) {
          cVar12 = '\0';
        }
        else {
          cVar12 = *(char *)((long)piVar1 + uVar6);
        }
        if (uVar4 < 0xb) goto LAB_100103c40;
        uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 10);
        if (uVar6 == 0) {
          cVar13 = '\0';
        }
        else {
          cVar13 = *(char *)((long)piVar1 + uVar6);
        }
        if (uVar4 < 0xd) {
          uVar9 = 0;
          goto LAB_100103c44;
        }
        uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xc);
        if (uVar6 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)((long)piVar1 + uVar6);
        }
        if (uVar4 < 0xf) goto LAB_100103c44;
        uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xe);
        if (uVar6 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)((long)piVar1 + uVar6);
        }
        if (0x10 < uVar4) {
          uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x10);
          if (uVar6 != 0) {
            uVar15 = *(undefined4 *)((long)piVar1 + uVar6);
          }
          if (0x12 < uVar4) {
            uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x12);
            if (uVar6 != 0) {
              uVar14 = *(undefined8 *)((long)piVar1 + uVar6);
            }
            if ((0x14 < uVar4) && (*(short *)((long)piVar1 + lVar5 + 0x14) != 0)) {
              puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
              func_0x000107c610f4();
              func_0x000107c45ae4();
              goto LAB_100103c4c;
            }
          }
        }
      }
      puVar11 = (undefined *)0x0;
      goto LAB_100103c4c;
    }
  }
  puVar8 = (undefined *)0x0;
  uVar9 = 0;
  cVar12 = '\0';
  cVar13 = '\0';
  uVar10 = 0;
  puVar11 = (undefined *)0x0;
  uVar14 = 0;
  uVar15 = 0;
LAB_100103c4c:
  func_0x000107c47058(uVar15,uVar14,puVar3,param_2,puVar7,puVar8,(int)cVar12,(int)cVar13,uVar9,
                      uVar10,puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100103d9c; end: 100103eef; -[SCDocPrefItem initWithKey:nameGroup:valType:valByte:valInteger:valUnsignedInteger:valFloat:valDouble:valFastCoded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100103d9c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_11);
  puStack_78 = PTR_PTR_1127065a0;
  uStack_80 = param_3;
  func_0x000107c61154(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ea38);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ea38) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ea3c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ea3c) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278ea40) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278ea44) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ea48) = param_9;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ea4c) = param_10;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11278ea50) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ea54) = param_2;
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ea58);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ea58) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 100103ef0; end: 100103f2f; -[SCDocObject init] */

void FUN_100103ef0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270c180;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0xffffffffffffffff;
  }
  return;
}



/* Entry: 100103f30; end: 100103f37; -[SCDocObject setRowid:] */

void FUN_100103f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 100103f38; end: 100103f3f; -[SCDocObject setChangesTimestamp:] */

void FUN_100103f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 100103f40; end: 10010403f;  */

undefined1  [16] FUN_100103f40(long *param_1,ulong **param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong **ppuVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar10 = (ulong *)(param_1 + 2);
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)*puVar10) {
    puVar10 = *param_2;
    func_0x000107c61174(puVar10);
    puVar13 = puVar11 + 1;
    *puVar11 = puVar10;
    param_1[1] = (long)puVar13;
  }
  else {
    lVar12 = (long)puVar11 - *param_1;
    uVar9 = (lVar12 >> 3) + 1;
    if (uVar9 >> 0x3d != 0) {
      func_0x000107c306a0();
      FUN_100104120(&puStack_58);
      func_0x000107c60bd8();
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104bd35f4();
        puVar14 = (ulong *)*puVar10;
        puVar1 = (ulong *)puVar10[1];
        puVar6 = (ulong *)((long)puVar14 + ((long)param_2[1] - (long)puVar1));
        puVar2 = puVar10;
        ppuVar3 = param_2;
        puVar5 = puVar14;
        puVar8 = puVar6;
        if (puVar1 != puVar14) {
          do {
            uVar9 = *puVar5;
            puVar2 = puVar5 + 1;
            *puVar5 = 0;
            *puVar8 = uVar9;
            puVar5 = puVar2;
            puVar8 = puVar8 + 1;
          } while (puVar2 != puVar1);
          do {
            puVar5 = puVar14 + 1;
            puVar2 = (ulong *)*puVar14;
            func_0x000107c61170(puVar2);
            puVar14 = puVar5;
          } while (puVar5 != puVar1);
          puVar14 = (ulong *)*puVar10;
        }
        param_2[1] = puVar6;
        *puVar10 = (ulong)puVar6;
        puVar10[1] = (ulong)puVar14;
        param_2[1] = puVar14;
        puVar6 = (ulong *)puVar10[1];
        puVar10[1] = (ulong)param_2[2];
        param_2[2] = puVar6;
        puVar6 = (ulong *)puVar10[2];
        puVar10[2] = (ulong)param_2[3];
        param_2[3] = puVar6;
        *param_2 = param_2[1];
        auVar17._8_8_ = ppuVar3;
        auVar17._0_8_ = puVar2;
        return auVar17;
      }
      lVar12 = (long)param_2 << 3;
      func_0x000107c60e20(lVar12);
      auVar16._8_8_ = param_2;
      auVar16._0_8_ = lVar12;
      return auVar16;
    }
    uVar4 = (long)*puVar10 - *param_1;
    uVar7 = (long)uVar4 >> 2;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar7 = 0x1fffffffffffffff;
    }
    puStack_38 = puVar10;
    if (uVar7 == 0) {
      puStack_58 = (ulong *)0x0;
    }
    else {
      FUN_100104040();
      puStack_58 = puVar10;
    }
    puVar11 = (undefined8 *)((long)puStack_58 + lVar12);
    puStack_40 = puStack_58 + uVar7;
    puVar10 = *param_2;
    puStack_50 = puVar11;
    func_0x000107c61174(puVar10);
    puStack_48 = puVar11 + 1;
    *puVar11 = puVar10;
    param_2 = &puStack_58;
    FUN_100104074(param_1,param_2);
    puVar13 = (undefined8 *)param_1[1];
    FUN_100104120(&puStack_58);
  }
  param_1[1] = (long)puVar13;
  auVar15._0_8_ = puVar13 + -1;
  auVar15._8_8_ = param_2;
  return auVar15;
}



/* Entry: 100104040; end: 100104073;  */

void FUN_100104040(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    puVar8 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)((long)puVar8 + (param_2[1] - (long)puVar2));
    puVar3 = puVar8;
    puVar6 = puVar1;
    if (puVar2 != puVar8) {
      do {
        uVar7 = *puVar3;
        puVar4 = puVar3 + 1;
        *puVar3 = 0;
        *puVar6 = uVar7;
        puVar3 = puVar4;
        puVar6 = puVar6 + 1;
      } while (puVar4 != puVar2);
      do {
        puVar3 = puVar8 + 1;
        func_0x000107c61170(*puVar8);
        puVar8 = puVar3;
      } while (puVar3 != puVar2);
      puVar8 = (undefined8 *)*param_1;
    }
    param_2[1] = puVar1;
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar8;
    param_2[1] = puVar8;
    lVar5 = param_1[1];
    param_1[1] = param_2[2];
    param_2[2] = lVar5;
    lVar5 = param_1[2];
    param_1[2] = param_2[3];
    param_2[3] = lVar5;
    *param_2 = param_2[1];
    return;
  }
  func_0x000107c60e20((long)param_2 << 3);
  return;
}



/* Entry: 100104074; end: 10010411f;  */

void FUN_100104074(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar8 + (param_2[1] - (long)puVar2));
  puVar3 = puVar8;
  puVar6 = puVar1;
  if (puVar2 != puVar8) {
    do {
      uVar7 = *puVar3;
      puVar4 = puVar3 + 1;
      *puVar3 = 0;
      *puVar6 = uVar7;
      puVar3 = puVar4;
      puVar6 = puVar6 + 1;
    } while (puVar4 != puVar2);
    do {
      puVar3 = puVar8 + 1;
      func_0x000107c61170(*puVar8);
      puVar8 = puVar3;
    } while (puVar3 != puVar2);
    puVar8 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar8;
  param_2[1] = puVar8;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 100104120; end: 10010416f;  */

long * FUN_100104120(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    param_1[2] = lVar2 + -8;
    func_0x000107c61170(*(undefined8 *)(lVar2 + -8));
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100104170; end: 1001041db;  */

void FUN_100104170(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar2[1];
    puVar1 = puVar3;
    if (puVar3 != puVar4) {
      do {
        puVar4 = puVar4 + -1;
        func_0x000107c61170(*puVar4);
      } while (puVar4 != puVar3);
      puVar1 = *(undefined8 **)*param_1;
    }
    puVar2[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 1001041dc; end: 10010425f; -[SCDocObjectLoggingActivityMonitor docObjectContextDidFetchForClass:duration:] */

void FUN_1001041dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c4a02c();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1158;
  if ((int)puVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db2d38;
  }
  FUN_100104260(param_1,uVar3,param_4,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100104260; end: 1001042f3;  */

/* WARNING: Possible PIC construction at 0x0001001042bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001042c0) */

void FUN_100104260(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_2 != 0) {
    FUN_100104378(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1001042f4; end: 100104377;  */

void FUN_1001042f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c4d664(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100104378; end: 1001045c7;  */

undefined * FUN_100104378(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110d25708);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f7809fd;
      }
      else {
        puVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_78,puVar2);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f7809fd;
      }
      else {
        func_0x000107c61178(param_3);
        puVar2 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_60,puVar2);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d25708,&uStack_98,param_4);
      puStack_80 = &uStack_98;
      FUN_10007e5dc(&puStack_80);
      lVar4 = 0;
      do {
        if ((&cStack_49)[lVar4] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar4));
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x30);
    }
  }
  func_0x000107c61170(param_3);
  puVar2 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(puVar2);
  puVar3 = (undefined *)0x70;
  func_0x000107c60e20(0x70);
  FUN_100104640(puVar3,puVar2);
  return puVar3;
}



/* Entry: 1001045c8; end: 100104603;  */

undefined8 FUN_1001045c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100104640(uVar1,param_1);
  return uVar1;
}



/* Entry: 100104604; end: 10010463f;  */

undefined8 FUN_100104604(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_1001047ec(uVar1,param_1);
  return uVar1;
}



/* Entry: 100104640; end: 1001047eb;  */

void FUN_100104640(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      FUN_1001049cc(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000100bfbf90(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_10010472c:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1004e4bc0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_10010472c;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110862700;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1001047ec; end: 1001049cb;  */

void FUN_1001047ec(undefined8 *param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plStack_30;
  long *plStack_28;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 < 0xc) {
    if (iVar1 - 3U < 9) {
      plVar4 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar4 + 0x30))();
      plVar5 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar4;
      (**(code **)(*plVar5 + 0x30))();
      plStack_30 = plVar5;
      func_0x000105005a74(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar4 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    else {
      plVar4 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar4 + 0x30))();
      plStack_28 = plVar4;
      func_0x0001050059e0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1001048d8:
    plVar4 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  else {
    if (iVar1 < 0xf) {
      if (iVar1 - 0xcU < 2) {
        plVar4 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar4 + 0x30))();
        plStack_28 = plVar4;
        func_0x000105005b78(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1001048d8;
      }
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      bVar2 = *(byte *)(param_2 + 0x18);
      bVar3 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar7;
      *(byte *)(param_1 + 3) = bVar2;
      *(byte *)((long)param_1 + 0x19) = bVar3;
      *(byte *)((long)param_1 + 0x1a) = bVar3 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar3 | bVar2) ^ 1;
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar7;
      param_1[6] = 0;
    }
    else {
      if (iVar1 == 0xf) {
        *param_1 = &PTR_DAT_1108627e0;
        uVar6 = 0xf;
      }
      else {
        *param_1 = &PTR_DAT_1108627e0;
        uVar6 = 0x10;
      }
      *(undefined4 *)(param_1 + 1) = uVar6;
      *(undefined4 *)(param_1 + 3) = 0x100;
      uVar7 = *(undefined8 *)(param_2 + 0x30);
      func_0x000107c61174(uVar7);
      param_1[6] = uVar7;
    }
    *param_1 = &PTR_DAT_110862760;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1001049cc; end: 100104acb;  */

undefined8 * FUN_1001049cc(undefined8 *param_1,int param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  lVar2 = *param_3;
  lVar3 = *param_4;
  if ((*(byte *)(lVar2 + 0x19) & 1) == 0) {
    bVar4 = *(byte *)(lVar3 + 0x19);
  }
  else {
    bVar4 = 1;
  }
  if ((*(byte *)(lVar2 + 0x1a) & 1) == 0) {
    bVar5 = *(byte *)(lVar3 + 0x1a);
  }
  else {
    bVar5 = 1;
  }
  if (param_2 == 4) {
    if ((*(byte *)(lVar2 + 0x1b) & 1) == 0) {
      bVar6 = 0;
      goto LAB_100104a38;
    }
  }
  else if ((*(byte *)(lVar2 + 0x1b) & 1) != 0) {
    bVar6 = 1;
    goto LAB_100104a38;
  }
  bVar6 = *(byte *)(lVar3 + 0x1b);
LAB_100104a38:
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x19) = bVar4 & 1;
  *(byte *)((long)param_1 + 0x1a) = bVar5 & 1;
  *(byte *)((long)param_1 + 0x1b) = bVar6 & 1;
  *param_1 = &PTR_DAT_110862700;
  param_1[7] = lVar2;
  param_1[8] = lVar3;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  lVar2 = *param_3;
  *param_3 = 0;
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = *param_4;
  *param_4 = 0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 100104acc; end: 100104b57; +[SCDocObjectFetchedResult fetchedResultWithArray:objectClass:error:changesTimestamp:expressionPtr:orderBy:limit:] */

void FUN_100104acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  
  func_0x000107c610f4();
  do {
    lVar1 = lRam00000001137fd560 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x1137fd560,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      lRam00000001137fd560 = lVar1;
    }
  } while (cVar2 != '\0');
  func_0x000107c4578c(param_1,param_2,param_3,param_4,param_5,param_6,lVar1,param_7,param_8,param_9)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


