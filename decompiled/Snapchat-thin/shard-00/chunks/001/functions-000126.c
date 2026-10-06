/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100321d00; end: 100321dc7; -[SCBlizzardZstdCompressor initWithGraphene:experimentProvider:] */

undefined1 *
FUN_100321d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f4b80;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x000107c5ea28();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    puVar3 = &UNK_10e00f928;
    FUN_100321ef4();
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    FUN_1003220f4();
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100321dc8; end: 100321e13;  */

void FUN_100321dc8(undefined8 param_1)

{
  FUN_1000285a8(0x112f86168,&UNK_10dbf9d40);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1036a8c98,param_1);
  return;
}



/* Entry: 100321e14; end: 100321e87; -[SCBlizzardExperimentProvider zstdCompressionLevel] */

undefined8 FUN_100321e14(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100321e88;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4c50 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4c50,&puStack_38);
  }
  return uRam00000001136c4c58;
}



/* Entry: 100321e88; end: 100321ed3;  */

void FUN_100321e88(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam00000001136c4c58 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100321ed4; end: 100321ef3;  */

void FUN_100321ed4(void)

{
  func_0x000107c61168(&PTR_PTR_1128dfc98);
  return;
}



/* Entry: 100321ef4; end: 100322033;  */

long FUN_100321ef4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = (code *)*param_1;
  if ((pcVar1 == (code *)0x0) == (param_1[1] == 0)) {
    if (pcVar1 == (code *)0x0) {
      lVar3 = 0x478;
      func_0x000107c610a0();
    }
    else {
      lVar3 = param_1[2];
      (*pcVar1)(lVar3,0x478);
    }
    if (lVar3 != 0) {
      uVar5 = param_1[1];
      uVar4 = *param_1;
      uVar2 = param_1[2];
      func_0x000107c60ee4(lVar3,0x478);
      *(undefined8 *)(lVar3 + 0x1f8) = uVar5;
      *(undefined8 *)(lVar3 + 0x1f0) = uVar4;
      *(undefined8 *)(lVar3 + 0x200) = uVar2;
      *(undefined4 *)(lVar3 + 8) = 0;
      if (*(int *)(lVar3 + 0x428) == 0) {
        func_0x000100321fcc(lVar3);
        *(undefined8 *)(lVar3 + 0x88) = 0;
        *(undefined8 *)(lVar3 + 0x80) = 0;
        *(undefined8 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0x68) = 0;
        *(undefined8 *)(lVar3 + 0x60) = 0;
        *(undefined8 *)(lVar3 + 0x78) = 0;
        *(undefined8 *)(lVar3 + 0x70) = 0;
        *(undefined8 *)(lVar3 + 0x48) = 0;
        *(undefined8 *)(lVar3 + 0x40) = 0;
        *(undefined8 *)(lVar3 + 0x58) = 0;
        *(undefined8 *)(lVar3 + 0x50) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x38) = 0;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined4 *)(lVar3 + 0x3c) = 3;
        *(undefined4 *)(lVar3 + 0x30) = 1;
      }
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



/* Entry: 100322034; end: 1003220f3;  */

undefined8 FUN_100322034(ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  pcVar4 = *(code **)(param_1 + 0x1328);
  uVar3 = *(undefined8 *)(param_1 + 0x1330);
  puVar2 = (ulong *)(param_1 + 0x18);
  uVar1 = *puVar2;
  if (param_1 < uVar1) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *puVar2 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (pcVar4 == (code *)0x0) {
      func_0x000107c60fd0(uVar1);
LAB_1003220d8:
      func_0x000107c60fd0(param_1);
      return 0;
    }
    (*pcVar4)(uVar3);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *puVar2 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (uVar1 != 0) {
      if (pcVar4 == (code *)0x0) {
        func_0x000107c60fd0(uVar1);
        if (param_1 <= uVar5) {
          return 0;
        }
        goto LAB_1003220d8;
      }
      (*pcVar4)(uVar3);
    }
    if (param_1 <= uVar5) {
      return 0;
    }
    if (pcVar4 == (code *)0x0) goto LAB_1003220d8;
  }
  (*pcVar4)(uVar3,param_1);
  return 0;
}



/* Entry: 1003220f4; end: 10032215f;  */

undefined8 FUN_1003220f4(long param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  func_0x000100321fcc();
  *(undefined8 *)(param_1 + 0x458) = 0;
  if (*(int *)(param_1 + 0x428) != 0) {
    *(undefined4 *)(param_1 + 4) = 1;
  }
  if (param_2 < -0x20000) {
    param_2 = -0x20000;
  }
  else if (param_2 < 0x17) {
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    param_2 = 0x16;
  }
  *(int *)(param_1 + 0x3c) = param_2;
  return 0;
}



/* Entry: 100322160; end: 100322167; -[SCBlizzardEventLoggerConstructorV2 appStateProvider] */

undefined8 FUN_100322160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100322168; end: 10032216f; -[SCBlizzardEventLoggerConstructorV2 timeProvider] */

undefined8 FUN_100322168(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100322170; end: 100322187; -[SCBlizzardEventLoggerConstructorV2 experimentProvider] */

void FUN_100322170(long param_1)

{
  func_0x000107c61148(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100322188; end: 1003221c7;  */

void FUN_100322188(void)

{
  FUN_1000285a8(0x112ea3578,&UNK_10dab5ae8);
  FUN_1000823a8(&UNK_10250efb4,0);
  return;
}



/* Entry: 1003221c8; end: 1003221cf; -[SCBlizzardEventLoggerConstructorV2 snapTokenProvider] */

undefined8 FUN_1003221c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1003221d0; end: 1003221d7; -[SCBlizzardEventLoggerConstructorV2 loggingQueue] */

undefined8 FUN_1003221d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1003221d8; end: 10032260b; -[SCBlizzardUploadManager initWithAllTiersFileQueue:config:appStateProvider:timeProvider:urlProvider:experimentProvider:grapheneRegistry:configVersion:snapTokenProvider:loggingQueue:isSpectrumUploader:zstdCompressor:] */

undefined8 *
FUN_1003221d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             char param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_15);
  puStack_68 = PTR_PTR_1126f4c28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[5];
    puVar1[5] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c498f8(puVar1[9]);
    puVar3 = PTR_PTR_1126bc890;
    uVar2 = param_4;
    if (param_13 == '\0') {
      func_0x000107c4e14c(param_4);
      func_0x000107c51930();
      func_0x000107c61180();
      uVar5 = puVar1[9];
      puVar1[9] = puVar3;
      func_0x000107c61170(uVar5);
      func_0x000107c4c81c();
    }
    else {
      func_0x000107c5b780(param_4);
      func_0x000107c51930();
      func_0x000107c61180();
      uVar5 = puVar1[9];
      puVar1[9] = puVar3;
      func_0x000107c61170(uVar5);
      func_0x000107c5b770();
    }
    puVar1[10] = uVar2;
    *(char *)(puVar1 + 1) = param_13;
    uVar2 = param_8;
    func_0x000107c3eadc();
    if ((int)uVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
      func_0x000107c3e5d0(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
      func_0x000107c61180();
      func_0x000107c541d4();
      func_0x000107c58fec(puVar3);
      func_0x000107c5269c(puVar3);
      func_0x000107c5a624(puVar3);
      func_0x000107c59dac(0x404e000000000000,puVar3);
      func_0x000107c59db0(0x4072c00000000000,puVar3);
      puVar4 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
      func_0x000107c520a0();
      func_0x000107c61180();
      uVar2 = puVar1[0x10];
      puVar1[0x10] = puVar4;
      func_0x000107c61170(uVar2);
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c41988();
      func_0x000107c61180();
      uVar2 = puVar1[0x11];
      puVar1[0x11] = puVar4;
      func_0x000107c61170(uVar2);
      *(undefined1 *)((long)puVar1 + 9) = 0;
      func_0x000107c3b674(puVar1);
      func_0x000107c61170(puVar3);
    }
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10032260c; end: 100322613; -[SCBlizzardConfigAdapter overallUploadIntervalSec] */

undefined8 FUN_10032260c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100322614; end: 100322693;  */

void FUN_100322614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f25b58,&UNK_10db60700);
  puVar1 = &UNK_1105e2900;
  func_0x000107c613fc(&UNK_1105e2900,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_102ea102c,puVar1);
  return;
}



/* Entry: 100322694; end: 1003226bf;  */

void FUN_100322694(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003226c0; end: 1003226c7; -[SCBlizzardConfigAdapter maxConcurrentRequests] */

undefined8 FUN_1003226c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1003226c8; end: 10032273b; -[SCBlizzardExperimentProvider blizzardTier0BackgroundUploadEnabled] */

undefined1 FUN_1003226c8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10032273c;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4c68 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4c68,&puStack_38);
  }
  return uRam00000001136c4c49;
}



/* Entry: 10032273c; end: 100322783;  */

void FUN_10032273c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3ebd4();
  uRam00000001136c4c49 = (undefined1)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100322784; end: 1003227cf; -[SCCircumstanceEngineConfigProvider boolValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_100322784(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c3cda0();
  func_0x000107c61180();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x000107c3ebcc(param_1);
  }
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 1003227d0; end: 1003227ef;  */

void FUN_1003227d0(void)

{
  func_0x000107c61168(&PTR_PTR_112f25bd0);
  return;
}



/* Entry: 1003227f0; end: 10032280b;  */

void FUN_1003227f0(undefined8 param_1)

{
  FUN_1000285a8(0x112f25b60,&UNK_10db60708);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102ea1174,param_1);
  return;
}



/* Entry: 10032280c; end: 10032285b;  */

void FUN_10032280c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10032285c; end: 10032287b;  */

void FUN_10032285c(void)

{
  func_0x000107c61168(&PTR_PTR_1128aafe8);
  return;
}



/* Entry: 10032287c; end: 10032291f;  */

void FUN_10032287c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f20f00,&UNK_10db5a020);
  puVar1 = &UNK_1105dd2d8;
  func_0x000107c613fc(&UNK_1105dd2d8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_102e551fc,puVar1);
  return;
}



/* Entry: 100322920; end: 10032297b;  */

void FUN_100322920(void)

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



/* Entry: 10032297c; end: 100322997;  */

void FUN_10032297c(undefined8 param_1)

{
  FUN_1000285a8(0x112f20f08,&UNK_10db5a028);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102e55354,param_1);
  return;
}



/* Entry: 100322998; end: 1003229e7;  */

void FUN_100322998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1003229e8; end: 100322a07;  */

void FUN_1003229e8(void)

{
  func_0x000107c61168(&PTR_PTR_1129c3358);
  return;
}



/* Entry: 100322a08; end: 100322a0f; -[SCBlizzardEventLoggerConstructorV2 grapheneRegistry] */

undefined8 FUN_100322a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 100322a10; end: 100322aa7;  */

void FUN_100322a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f0e6d8,&UNK_10db41ba0);
  puVar1 = &UNK_1105c55b0;
  func_0x000107c613fc(&UNK_1105c55b0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_102d33a9c,puVar1);
  return;
}



/* Entry: 100322aa8; end: 100322adb;  */

void FUN_100322aa8(void)

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



/* Entry: 100322adc; end: 100322ba7; -[SCBlizzardEagerUploadClient initWithEagerUploadStatusManager:graphene:uploadManager:] */

undefined1 *
FUN_100322adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4a88;
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



/* Entry: 100322ba8; end: 100322bc7;  */

void FUN_100322ba8(void)

{
  func_0x000107c61168(&PTR_PTR_112f0e750);
  return;
}



/* Entry: 100322bc8; end: 100322c3b; -[SCBlizzardFilePersistenceSink initWithAllTiersFileQueue:] */

undefined1 * FUN_100322bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4b68;
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



/* Entry: 100322c3c; end: 100322c57;  */

void FUN_100322c3c(undefined8 param_1)

{
  FUN_1000285a8(0x112f0e6e0,&UNK_10db41ba8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102d33c68,param_1);
  return;
}



/* Entry: 100322c58; end: 100322ca7;  */

void FUN_100322c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100322ca8; end: 100322cc7;  */

void FUN_100322ca8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1b70);
  return;
}



/* Entry: 100322cc8; end: 100322d3f; -[SCBlizzardEventList initWithEvents:] */

undefined1 * FUN_100322cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4bf8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c4d2d4();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100322d40; end: 100322dd7;  */

void FUN_100322d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ec9640,&UNK_10daed230);
  puVar1 = &UNK_1105665d8;
  func_0x000107c613fc(&UNK_1105665d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_1028deec4,puVar1);
  return;
}



/* Entry: 100322dd8; end: 100322e0b;  */

void FUN_100322dd8(void)

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



/* Entry: 100322e0c; end: 100322ec7;  */

void FUN_100322e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f135a0,&UNK_10db47d30);
  puVar1 = &UNK_1105cba80;
  func_0x000107c613fc(&UNK_1105cba80,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(&UNK_102d6b8d4,puVar1);
  return;
}



/* Entry: 100322ec8; end: 100322f2b;  */

void FUN_100322ec8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100322f2c; end: 100322fa3; -[SCSpectrumEventList initWithEvents:] */

undefined1 * FUN_100322f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4c18;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c4d2d4();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100322fa4; end: 100322fab; -[SCBlizzardEventLoggerConstructorV2 eventConfigurer] */

undefined8 FUN_100322fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100322fac; end: 100322fb3; -[SCBlizzardEventLoggerConstructorV2 eagerUploadIdProvider] */

undefined8 FUN_100322fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 100322fb4; end: 1003233bb; -[SCBlizzardEventLogger initWithConfig:frameEventList:spectrumEventList:jsonSerializer:appStateProvider:logQueueName:experimentProvider:grapheneRegistry:filePersistenceSink:uploadManager:eventConfigurer:blizzardRtusEventRouter:eagerUploadClient:eagerUploadIdProvider:] */

undefined8 *
FUN_100322fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined **param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_17);
  puStack_70 = PTR_PTR_1126f4bd0;
  puVar1 = &uStack_78;
  uStack_78 = param_2;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[4];
    puVar1[4] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x15,param_13);
    puVar1[0xd] = 0;
    puVar1[3] = 0;
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_14;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    func_0x000107c61170(uVar2);
    ppuVar4 = param_9;
    func_0x000107c49d0c();
    if ((int)ppuVar4 == 0) {
      ppuVar4 = param_9;
      func_0x000107c49d0c();
      ppuVar7 = &PTR____CFConstantStringClassReference_110e6dc78;
      if ((int)ppuVar4 == 0) {
        ppuVar7 = param_9;
      }
    }
    else {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e6dc98;
    }
    func_0x000107c61174(ppuVar7);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = ppuVar7;
    func_0x000107c61170(uVar2);
    puVar5 = puVar1;
    func_0x000107c42bb8();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5d054();
    *(char *)(puVar1 + 1) = (char)puVar6;
    func_0x000107c61170(puVar5);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    func_0x000107c61170(uVar2);
    puVar5 = puVar1;
    func_0x000107c3baf0();
    *(char *)((long)puVar1 + 9) = (char)puVar5;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    puVar1[0x16] = param_1;
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    puVar1[0x17] = param_1;
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return puVar1;
}



/* Entry: 1003233bc; end: 1003233d7;  */

void FUN_1003233bc(undefined8 param_1)

{
  FUN_1000285a8(0x112f135a8,&UNK_10db47d38);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102d6bad0,param_1);
  return;
}



/* Entry: 1003233d8; end: 100323427;  */

void FUN_1003233d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100323428; end: 100323447;  */

void FUN_100323428(void)

{
  func_0x000107c61168(&PTR_PTR_11291e318);
  return;
}



/* Entry: 100323448; end: 10032344f; -[SCBlizzardEventLogger experimentProvider] */

undefined8 FUN_100323448(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 100323450; end: 100323553; -[SCBlizzardExperimentProvider trimTierZeroEventsEnabled] */

void FUN_100323450(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xa0;
    func_0x000107c61148(lVar1);
    func_0x000107c3ebd4();
    func_0x000107c61170(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d94c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    func_0x000107c61170(uVar3);
    lVar1 = *(long *)(param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 100323554; end: 10032359f;  */

void FUN_100323554(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003235a0; end: 1003235bb;  */

void FUN_1003235a0(undefined8 param_1)

{
  FUN_1000285a8(0x112f31700,&UNK_10db77978);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102ff59ec,param_1);
  return;
}



/* Entry: 1003235bc; end: 10032360b;  */

void FUN_1003235bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10032360c; end: 1003236ab; -[SCBlizzardEventLogger _isEagerUploadingEnabledForQueue:] */

undefined8 FUN_10032360c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c42bb8(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c423c8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c3ff54(uVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c40404();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return uVar3;
}



/* Entry: 1003236ac; end: 100323793; -[SCBlizzardExperimentProvider eagerUploadEnabledQueues] */

void FUN_1003236ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x100323734;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c4c28 != -1) {
    FUN_10002a2fc(0x1136c4c28,&puStack_48);
  }
  puVar1 = PTR_PTR_11316eeb8;
  func_0x000107c61174(PTR_PTR_11316eeb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100323794; end: 100323827; -[SCCircumstanceEngine stringValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_100323794(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3ade8(param_1,param_2,param_3,5);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000107c5c1dc(uVar1,param_2,param_3,param_4,param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100323828; end: 1003238bb; -[SCCircumstanceEngineConfigProvider stringValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_100323828(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c3cda0(param_1,param_2,param_3,5,param_5);
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61174(param_4);
    lVar1 = param_4;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5c1d4(param_1);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1003238bc; end: 1003238db;  */

void FUN_1003238bc(void)

{
  func_0x000107c61168(&PTR_PTR_11299c3c8);
  return;
}



/* Entry: 1003238dc; end: 10032397f;  */

void FUN_1003238dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f12448,&UNK_10db46270);
  puVar1 = &UNK_1105ca750;
  func_0x000107c613fc(&UNK_1105ca750,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1008f558c,puVar1);
  return;
}



/* Entry: 100323980; end: 10032399f;  */

void FUN_100323980(void)

{
  func_0x000107c61168(&PTR_PTR_112f124c0);
  return;
}



/* Entry: 1003239a0; end: 1003239eb;  */

void FUN_1003239a0(undefined8 param_1)

{
  FUN_1000285a8(0x112e64a98,&UNK_10da6f570);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1022054e0,param_1);
  return;
}



/* Entry: 1003239ec; end: 100323a0b;  */

void FUN_1003239ec(void)

{
  func_0x000107c61168(&PTR_PTR_112e64ae0);
  return;
}



/* Entry: 100323a0c; end: 100323a4b;  */

void FUN_100323a0c(void)

{
  FUN_1000285a8(0x112ecac88,&UNK_10daeddb0);
  FUN_1000823a8(&UNK_1028ee914,0);
  return;
}



/* Entry: 100323a4c; end: 100323aef;  */

void FUN_100323a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f32bf0,&UNK_10db79b70);
  puVar1 = &UNK_1105fd3f0;
  func_0x000107c613fc(&UNK_1105fd3f0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_10300b4c4,puVar1);
  return;
}



/* Entry: 100323af0; end: 100323b4b;  */

void FUN_100323af0(void)

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



/* Entry: 100323b4c; end: 100323b67;  */

void FUN_100323b4c(undefined8 param_1)

{
  FUN_1000285a8(0x112f32bf8,&UNK_10db79b78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10300b61c,param_1);
  return;
}



/* Entry: 100323b68; end: 100323bb7;  */

void FUN_100323b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100323bb8; end: 100323bd7;  */

void FUN_100323bb8(void)

{
  func_0x000107c61168(&PTR_PTR_11292f3f0);
  return;
}



/* Entry: 100323bd8; end: 100323c57;  */

void FUN_100323bd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f12538,&UNK_10db46450);
  puVar1 = &UNK_1105ca8a8;
  func_0x000107c613fc(&UNK_1105ca8a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_102d623b4,puVar1);
  return;
}



/* Entry: 100323c58; end: 100323cc3;  */

void FUN_100323c58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100323cc4; end: 100323d67;  */

void FUN_100323cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f19fc0,&UNK_10db51b60);
  puVar1 = &UNK_1105d4368;
  func_0x000107c613fc(&UNK_1105d4368,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1005de43c,puVar1);
  return;
}



/* Entry: 100323d68; end: 100323d87;  */

void FUN_100323d68(void)

{
  func_0x000107c61168(&PTR_PTR_112f1a038);
  return;
}



/* Entry: 100323d88; end: 100323da3;  */

void FUN_100323d88(undefined8 param_1)

{
  FUN_1000285a8(0x112f19fc8,&UNK_10db51b68);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1005de3e0,param_1);
  return;
}



/* Entry: 100323da4; end: 100323df3;  */

void FUN_100323da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100323df4; end: 100323e13;  */

void FUN_100323df4(void)

{
  func_0x000107c61168(&PTR_PTR_1128f8a38);
  return;
}



/* Entry: 100323e14; end: 100323e9f;  */

void FUN_100323e14(void)

{
  FUN_1000285a8(0x112e9bb80,&UNK_10daa9860);
  FUN_1000823a8(FUN_1007d5f04,0);
  return;
}



/* Entry: 100323ea0; end: 100323f8b;  */

void FUN_100323ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e4dd10,&UNK_10da48bd0);
  puVar1 = &UNK_1104b7860;
  func_0x000107c613fc(&UNK_1104b7860,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(&UNK_101fec540,puVar1);
  return;
}



/* Entry: 100323f8c; end: 100323fe7;  */

void FUN_100323f8c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100323fe8; end: 100324067;  */

void FUN_100323fe8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f2cd20,&UNK_10db70ec0);
  puVar1 = &UNK_1105f5600;
  func_0x000107c613fc(&UNK_1105f5600,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100923be0,puVar1);
  return;
}



/* Entry: 100324068; end: 100324087;  */

void FUN_100324068(void)

{
  func_0x000107c61168(&PTR_PTR_112f2cd98);
  return;
}



/* Entry: 100324088; end: 100324107;  */

void FUN_100324088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e50f00,&UNK_10da4ff80);
  puVar1 = &UNK_1104be900;
  func_0x000107c613fc(&UNK_1104be900,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102022db0,puVar1);
  return;
}



/* Entry: 100324108; end: 100324127;  */

void FUN_100324108(void)

{
  func_0x000107c61168(&PTR_PTR_112818c50);
  return;
}



/* Entry: 100324128; end: 100324213;  */

void FUN_100324128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ea1eb0,&UNK_10dab4190);
  puVar1 = &UNK_110517a80;
  func_0x000107c613fc(&UNK_110517a80,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(&UNK_1024ef910,puVar1);
  return;
}



/* Entry: 100324214; end: 10032426f;  */

void FUN_100324214(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100324270; end: 1003242bb;  */

void FUN_100324270(undefined8 param_1)

{
  FUN_1000285a8(0x112fee0f0,&UNK_10dc58040);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103b4692c,param_1);
  return;
}



/* Entry: 1003242bc; end: 1003242db;  */

void FUN_1003242bc(void)

{
  func_0x000107c61168(&PTR_PTR_11292e920);
  return;
}



/* Entry: 1003242dc; end: 10032430b; -[SCBlizzardEventLoggerConstructorV2 setLoggerIndex:] */

void FUN_1003242dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10032430c; end: 1003243f7;  */

void FUN_10032430c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f17fe0,&UNK_10db4e690);
  puVar1 = &UNK_1105d1198;
  func_0x000107c613fc(&UNK_1105d1198,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(FUN_1008f98e4,puVar1);
  return;
}



/* Entry: 1003243f8; end: 1003243ff; -[SCBlizzardConfig qosToLogQueueNameMap] */

undefined8 FUN_1003243f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100324400; end: 10032441f;  */

void FUN_100324400(void)

{
  func_0x000107c61168(&PTR_PTR_112f18050);
  return;
}



/* Entry: 100324420; end: 10032464f; -[SCBlizzardEventLoggerConstructorV2 _loggerDictFromQoSDict:] */

void FUN_100324420(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  uVar3 = param_3;
  func_0x000107c3db60(param_3);
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c3c888();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61174(lVar4);
  lVar5 = lVar4;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar4);
      }
      uVar3 = param_3;
      func_0x000107c4d9e8(param_3);
      func_0x000107c61180();
      uVar6 = uVar3;
      func_0x000107c4c280();
      func_0x000107c61180();
      lVar7 = param_1;
      func_0x000107c3c884(param_1);
      func_0x000107c61180();
      func_0x000107c56bcc(puVar2);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar3);
      lVar11 = lVar11 + 1;
    } while (lVar5 != lVar11);
    lVar5 = lVar4;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar4);
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar9 = puVar2;
  func_0x000107c419a0(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    func_0x000107c60e78();
    lVar5 = lRam00000001136c4ad8;
    func_0x000107c61174(puVar9);
    if (lVar5 != -1) {
      FUN_10002a2fc(0x1136c4ad8,&PTR___NSConcreteGlobalBlock_11095f008);
    }
    puVar8 = puVar9;
    func_0x000107c5b5c0(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100324650; end: 1003246c3; -[SCBlizzardEventLoggerConstructorV2 _sortQosStrings:] */

void FUN_100324650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam00000001136c4ad8;
  func_0x000107c61174(param_3);
  if (lVar1 != -1) {
    FUN_10002a2fc(0x1136c4ad8,&PTR___NSConcreteGlobalBlock_11095f008);
  }
  uVar2 = param_3;
  func_0x000107c5b5c0(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1003246c4; end: 10032482f;  */

void FUN_1003246c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 in_x5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = 4;
  FUN_1002ced14();
  func_0x000107c61180();
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c81d0;
  uVar3 = 0;
  uStack_98 = uVar2;
  FUN_1002ced14();
  func_0x000107c61180();
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c81e8;
  uVar4 = 1;
  uStack_90 = uVar3;
  FUN_1002ced14();
  func_0x000107c61180();
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8200;
  uVar5 = 3;
  uStack_88 = uVar4;
  FUN_1002ced14();
  func_0x000107c61180();
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8218;
  uVar6 = 2;
  uStack_80 = uVar5;
  FUN_1002ced14();
  func_0x000107c61180();
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8230;
  pppuVar8 = &ppuStack_70;
  puVar9 = &uStack_98;
  uVar10 = 5;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_78 = uVar6;
  func_0x000107c419ac();
  func_0x000107c61180();
  uVar1 = puRam00000001136c4ad0;
  puRam00000001136c4ad0 = puVar7;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  FUN_1000285a8(0x112f28908,&UNK_10db645e0);
  puVar7 = &UNK_1105e8ff0;
  func_0x000107c613fc(&UNK_1105e8ff0,0x40,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = param_2;
  *(undefined ****)(puVar7 + 0x20) = pppuVar8;
  *(undefined8 **)(puVar7 + 0x28) = puVar9;
  *(undefined8 *)(puVar7 + 0x30) = uVar10;
  *(undefined8 *)(puVar7 + 0x38) = in_x5;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(pppuVar8);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(in_x5);
  FUN_1000823a8(FUN_1008fa7a4,puVar7);
  return;
}



/* Entry: 100324830; end: 1003248f7;  */

void FUN_100324830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f28908,&UNK_10db645e0);
  puVar1 = &UNK_1105e8ff0;
  func_0x000107c613fc(&UNK_1105e8ff0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_1008fa7a4,puVar1);
  return;
}



/* Entry: 1003248f8; end: 100324917;  */

void FUN_1003248f8(void)

{
  func_0x000107c61168(&PTR_PTR_112f28978);
  return;
}



/* Entry: 100324918; end: 1003249ab;  */

undefined8 FUN_100324918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = uRam00000001136c4ad0;
  func_0x000107c61174(param_3);
  func_0x000107c4d9c0(uVar1);
  func_0x000107c61180();
  uVar2 = uRam00000001136c4ad0;
  func_0x000107c4d9c0(uRam00000001136c4ad0);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar3 = uVar1;
  func_0x000107c3fec0(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return uVar3;
}


