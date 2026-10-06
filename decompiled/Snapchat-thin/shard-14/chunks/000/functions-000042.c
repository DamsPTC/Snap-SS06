/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af506ec; end: 10af50797; -[SCNWarmupManagerWarmupSignalConfig initWithWarmupRequest:recurringIntervalMillis:recurringCount:startDelayMillis:] */

undefined1 *
FUN_10af506ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112702c00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined4 *)((long)puVar1 + 0x10) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af50798; end: 10af5079f; -[SCNWarmupManagerWarmupSignalConfig warmupRequest] */

undefined8 FUN_10af50798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af507a0; end: 10af507a7; -[SCNWarmupManagerWarmupSignalConfig recurringIntervalMillis] */

undefined4 FUN_10af507a0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10af507a8; end: 10af507af; -[SCNWarmupManagerWarmupSignalConfig recurringCount] */

undefined4 FUN_10af507a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10af507b0; end: 10af507b7; -[SCNWarmupManagerWarmupSignalConfig startDelayMillis] */

undefined4 FUN_10af507b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10af507b8; end: 10af507c3; -[SCNWarmupManagerWarmupSignalConfig .cxx_destruct] */

void FUN_10af507b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af507c4; end: 10af508d7; -[SCNWarmupManagerWarmupUrlRequest initWithHost:path:method:] */

undefined1 *
FUN_10af507c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112702c08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 10af508d8; end: 10af508df; -[SCNWarmupManagerWarmupUrlRequest host] */

undefined8 FUN_10af508d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af508e0; end: 10af508e7; -[SCNWarmupManagerWarmupUrlRequest path] */

undefined8 FUN_10af508e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af508e8; end: 10af508ef; -[SCNWarmupManagerWarmupUrlRequest method] */

undefined8 FUN_10af508e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af508f0; end: 10af5092b; -[SCNWarmupManagerWarmupUrlRequest .cxx_destruct] */

void FUN_10af508f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af5092c; end: 10af5099f; -[SCDynamicCdnServices initWithDynamicCdnPrewarm:] */

undefined1 * FUN_10af5092c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702c10;
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



/* Entry: 10af509a0; end: 10af509a7; -[SCDynamicCdnServices dynamicCdnPrewarm] */

undefined8 FUN_10af509a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af509a8; end: 10af509d7; -[SCDynamicCdnServices setDynamicCdnPrewarm:] */

void FUN_10af509a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af509d8; end: 10af509e3; -[SCDynamicCdnServices .cxx_destruct] */

void FUN_10af509d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af509e4; end: 10af50a9b; -[SCDynamicCdnPrewarmConfig initWithSignal:warmupURL:method:intervalMilliSec:connectionsRequested:TtlMilliSec:shouldSkipOptimization:] */

undefined1 *
FUN_10af509e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_112702c18;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af50a9c; end: 10af50abf; -[SCDynamicCdnPrewarmConfig copyWithZone:] */

undefined8 FUN_10af50a9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af50ac0; end: 10af50b53; -[SCDynamicCdnPrewarmConfig hash] */

long * FUN_10af50ac0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  plVar2 = &lStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lStack_60 = -lVar4;
  if (-1 < lVar4) {
    lStack_60 = lVar4;
  }
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x20);
  lStack_50 = -lVar4;
  if (-1 < lVar4) {
    lStack_50 = lVar4;
  }
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_58 = uVar1;
  func_0x000107c3191c(&lStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 != (long *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af50c28;
    puVar5 = (undefined1 *)plVar2;
    _objc_opt_class(plVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar3 & 1) == 0) ||
        (((*(long *)((long)plVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(long *)((long)plVar2 + 0x20) != *(long *)(param_3 + 0x20))) ||
         (*(long *)((long)plVar2 + 0x28) != *(long *)(param_3 + 0x28))))) ||
       (((*(long *)((long)plVar2 + 0x30) != *(long *)(param_3 + 0x30) ||
         (*(long *)((long)plVar2 + 0x38) != *(long *)(param_3 + 0x38))) ||
        (*(char *)((long)plVar2 + 8) != param_3[8])))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10af50c28;
    }
    puVar5 = *(undefined1 **)((long)plVar2 + 0x18);
    if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10af50c28;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10af50c28:
  _objc_release(param_3);
  return (long *)puVar5;
}



/* Entry: 10af50b54; end: 10af50c43; -[SCDynamicCdnPrewarmConfig isEqual:] */

long FUN_10af50b54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af50c28;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) ||
         (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))))) ||
       (((*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30) ||
         (*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38))) ||
        (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      goto LAB_10af50c28;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10af50c28;
    }
  }
  lVar3 = 1;
LAB_10af50c28:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af50c44; end: 10af50c4b; -[SCDynamicCdnPrewarmConfig signal] */

undefined8 FUN_10af50c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af50c4c; end: 10af50c53; -[SCDynamicCdnPrewarmConfig warmupURL] */

undefined8 FUN_10af50c4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af50c54; end: 10af50c5b; -[SCDynamicCdnPrewarmConfig method] */

undefined8 FUN_10af50c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af50c5c; end: 10af50c63; -[SCDynamicCdnPrewarmConfig intervalMilliSec] */

undefined8 FUN_10af50c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af50c64; end: 10af50c6b; -[SCDynamicCdnPrewarmConfig connectionsRequested] */

undefined8 FUN_10af50c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af50c6c; end: 10af50c73; -[SCDynamicCdnPrewarmConfig TtlMilliSec] */

undefined8 FUN_10af50c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af50c74; end: 10af50c7b; -[SCDynamicCdnPrewarmConfig shouldSkipOptimization] */

undefined1 FUN_10af50c74(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af50c7c; end: 10af50c87; -[SCDynamicCdnPrewarmConfig .cxx_destruct] */

void FUN_10af50c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af50c88; end: 10af50c8f; -[SCNetworkTraceServices networkTracing] */

undefined8 FUN_10af50c88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af50c90; end: 10af50c9b; -[SCNetworkTraceServices .cxx_destruct] */

void FUN_10af50c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af50c9c; end: 10af50d3f; -[SCSystemUnifiedGRPCServices initWithGRPCClientFactory:grpcEventLogger:] */

undefined1 *
FUN_10af50c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702c28;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af50d40; end: 10af50d47; -[SCSystemUnifiedGRPCServices grpcClientFactory] */

undefined8 FUN_10af50d40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af50d48; end: 10af50d77; -[SCSystemUnifiedGRPCServices setGrpcClientFactory:] */

void FUN_10af50d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af50d78; end: 10af50d7f; -[SCSystemUnifiedGRPCServices grpcEventLogger] */

undefined8 FUN_10af50d78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af50d80; end: 10af50daf; -[SCSystemUnifiedGRPCServices setGrpcEventLogger:] */

void FUN_10af50d80(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af50db0; end: 10af50ddf; -[SCSystemUnifiedGRPCServices .cxx_destruct] */

void FUN_10af50db0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af50de0; end: 10af50e0f; -[SCUserUnifiedGRPCServices setGrpcClientFactory:] */

void FUN_10af50de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af50e10; end: 10af50e3f; -[SCUserUnifiedGRPCServices setAuthContextDelegate:] */

void FUN_10af50e10(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af50e40; end: 10af50e6f; -[SCUserUnifiedGRPCServices .cxx_destruct] */

void FUN_10af50e40(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af50e70; end: 10af50ee3; -[SCClientFeatureGatingServices initWithValueRetriever:] */

undefined1 * FUN_10af50e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702c38;
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



/* Entry: 10af50ee4; end: 10af50eeb; -[SCClientFeatureGatingServices valueRetriever] */

undefined8 FUN_10af50ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af50eec; end: 10af50ef7; -[SCClientFeatureGatingServices .cxx_destruct] */

void FUN_10af50eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af50ef8; end: 10af50fab; -[SCClientFeatureGatingTreatment initWithTrafficPercentage:experimentId:value:] */

undefined1 *
FUN_10af50ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112702c40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af50fac; end: 10af50fcf; -[SCClientFeatureGatingTreatment copyWithZone:] */

undefined8 FUN_10af50fac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af50fd0; end: 10af51047; -[SCClientFeatureGatingTreatment hash] */

undefined8 * FUN_10af50fd0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af510d8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af510e4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af510e4;
        }
        goto LAB_10af510d8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af510e4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af51048; end: 10af510ff; -[SCClientFeatureGatingTreatment isEqual:] */

long FUN_10af51048(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af510d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af510e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af510e4;
        }
        goto LAB_10af510d8;
      }
    }
    lVar3 = 0;
  }
LAB_10af510e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af51100; end: 10af51107; -[SCClientFeatureGatingTreatment trafficPercentage] */

undefined8 FUN_10af51100(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af51108; end: 10af5110f; -[SCClientFeatureGatingTreatment experimentId] */

undefined8 FUN_10af51108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af51110; end: 10af51117; -[SCClientFeatureGatingTreatment value] */

undefined8 FUN_10af51110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af51118; end: 10af51147; -[SCClientFeatureGatingTreatment .cxx_destruct] */

void FUN_10af51118(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af51148; end: 10af5114f; -[SCConfigManagerServices configManager] */

undefined8 FUN_10af51148(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af51150; end: 10af51157; -[SCConfigManagerServices grapheneContextManager] */

undefined8 FUN_10af51150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af51158; end: 10af51187; -[SCConfigManagerServices .cxx_destruct] */

void FUN_10af51158(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af51188; end: 10af511fb; -[SCConfigNetworkServices initWithConfigNetwork:] */

undefined1 * FUN_10af51188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702c50;
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



/* Entry: 10af511fc; end: 10af51203; -[SCConfigNetworkServices configRepositoryNetwork] */

undefined8 FUN_10af511fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af51204; end: 10af5120f; -[SCConfigNetworkServices .cxx_destruct] */

void FUN_10af51204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af51210; end: 10af5121b; -[SCPropertyHandlerRegistryServices .cxx_destruct] */

void FUN_10af51210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af5121c; end: 10af51223; -[SCCCofTweaksConfigValueType__Enum init] */

void FUN_10af5121c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 10af51224; end: 10af5122b; -[SCCCofTweaksPropertyValueType__Enum init] */

void FUN_10af51224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10af5122c; end: 10af512d7; -[SCCNativeTweakBridgeErrorCode__Enum init] */

undefined1 * FUN_10af5122c(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_70 [16];
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110daf6b8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110eedad8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f3a498;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f3a4b8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  func_0x00010af515cc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10af512d8;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010af51590(PTR_PTR_112702c60);
  puVar1 = auStack_70;
  func_0x00010af515a8(puVar1);
  return puVar1;
}



/* Entry: 10af512d8; end: 10af5131b; -[SCCCofTweaksConfig initWithConfigId:defaultValueType:namespace:priority:value:targetingExpression:ruleId:] */

void FUN_10af512d8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af51590(PTR_PTR_112702c60);
  func_0x00010af515a8(auStack_20);
  return;
}



/* Entry: 10af5131c; end: 10af5132f; +[SCCCofTweaksConfig valdiMarshallableObjectDescriptor] */

void FUN_10af5131c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c98368;
  param_1[1] = &PTR_DAT_110c98488;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af51330; end: 10af51353; -[SCCCofTweaksConfigValue init] */

void FUN_10af51330(void)

{
  func_0x00010af515b0(PTR_PTR_112702c68);
  return;
}



/* Entry: 10af51354; end: 10af51367; +[SCCCofTweaksConfigValue valdiMarshallableObjectDescriptor] */

void FUN_10af51354(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_stringValue_110c984a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af51368; end: 10af513cf; -[SCCCofTweaksContext initWithUpdateNativeConfigs:] */

undefined8 FUN_10af51368(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_112702c70;
  uStack_30 = param_1;
  func_0x00010af515a8(&uStack_30,PTR_s_initWithFieldValues__1125e24b8);
  func_0x00010af515cc();
  return param_1;
}



/* Entry: 10af513d0; end: 10af513e3; +[SCCCofTweaksContext valdiMarshallableObjectDescriptor] */

void FUN_10af513d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c98560;
  param_1[1] = &PTR_DAT_110c98620;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af513e4; end: 10af51417; -[SCCCofTweaksPropertyMetadata initWithPropertyId:propertyName:valueType:] */

void FUN_10af513e4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af51590(PTR_PTR_112702c78);
  func_0x00010af515a8(auStack_20);
  return;
}



/* Entry: 10af51418; end: 10af5142b; +[SCCCofTweaksPropertyMetadata valdiMarshallableObjectDescriptor] */

void FUN_10af51418(undefined8 *param_1)

{
  *param_1 = &PTR_s_propertyId_110c98658;
  param_1[1] = &PTR_DAT_110c986d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af5142c; end: 10af5145f; -[SCCCofTweaksPropertyOverride initWithPropertyId:overrideValue:expirationTimeMs:] */

void FUN_10af5142c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af51590(PTR_PTR_112702c80);
  func_0x00010af515a8(auStack_20);
  return;
}



/* Entry: 10af51460; end: 10af51473; +[SCCCofTweaksPropertyOverride valdiMarshallableObjectDescriptor] */

void FUN_10af51460(undefined8 *param_1)

{
  *param_1 = &PTR_s_propertyId_110c986e0;
  param_1[1] = &PTR_DAT_110c98740;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af51474; end: 10af51497; -[SCCCofTweaksPropertyValue init] */

void FUN_10af51474(void)

{
  func_0x00010af515b0(PTR_PTR_112702c88);
  return;
}



/* Entry: 10af51498; end: 10af514ab; +[SCCCofTweaksPropertyValue valdiMarshallableObjectDescriptor] */

void FUN_10af51498(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_boolValue_110c98750;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af514ac; end: 10af514e3; -[SCCCofTweaksViewModel initWithConfigList:etag:lastUpdateTimestamp:] */

void FUN_10af514ac(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af51590(PTR_PTR_112702c90);
  func_0x00010af515a8(auStack_20);
  return;
}



/* Entry: 10af514e4; end: 10af514f7; +[SCCCofTweaksViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af514e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c987e0;
  param_1[1] = &PTR_DAT_110c98888;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af514f8; end: 10af51527; -[SCCNativeTweakBridgeResult initWithSuccess:errorCode:] */

void FUN_10af514f8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af51590(PTR_PTR_112702c98);
  func_0x00010af515a8(auStack_20);
  return;
}



/* Entry: 10af51528; end: 10af5153b; +[SCCNativeTweakBridgeResult valdiMarshallableObjectDescriptor] */

void FUN_10af51528(undefined8 *param_1)

{
  *param_1 = &PTR_s_success_110c988a8;
  param_1[1] = &PTR_DAT_110c98908;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af5153c; end: 10af5156b; -[SCCNativeTweakLocator initWithFeature:key:] */

void FUN_10af5153c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af51590(PTR_PTR_112702ca0);
  func_0x00010af515a8(auStack_20);
  return;
}



/* Entry: 10af5156c; end: 10af515d7; +[SCCNativeTweakLocator valdiMarshallableObjectDescriptor] */

void FUN_10af5156c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_feature_110c98918;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af515d8; end: 10af5164b; -[SCCircumstanceEngineReadinessMetricServices initWithReadinessMetricEmitter:] */

undefined1 * FUN_10af515d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702ca8;
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



/* Entry: 10af5164c; end: 10af51653; -[SCCircumstanceEngineReadinessMetricServices readinessMetricEmitter] */

undefined8 FUN_10af5164c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af51654; end: 10af5165f; -[SCCircumstanceEngineReadinessMetricServices .cxx_destruct] */

void FUN_10af51654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af51660; end: 10af51667; -[SCComposerFrameworkServices authContextDelegateProxy] */

undefined8 FUN_10af51660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af51668; end: 10af516af; -[SCComposerFrameworkServices .cxx_destruct] */

void FUN_10af51668(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af516b0; end: 10af516bb; -[SCWatchDetectorServices .cxx_destruct] */

void FUN_10af516b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af516bc; end: 10af5170b; -[SCWatchStatus initWithIsWatchPaired:isWatchAppInstalled:] */

void FUN_10af516bc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702cc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 10af5170c; end: 10af5172f; -[SCWatchStatus copyWithZone:] */

undefined8 FUN_10af5170c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af51730; end: 10af5178b; -[SCWatchStatus hash] */

ulong * FUN_10af51730(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10af5178c; end: 10af51823; -[SCWatchStatus isEqual:] */

bool FUN_10af5178c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af51824; end: 10af5182b; -[SCWatchStatus isWatchPaired] */

undefined1 FUN_10af51824(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af5182c; end: 10af51833; -[SCWatchStatus isWatchAppInstalled] */

undefined1 FUN_10af5182c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10af51834; end: 10af5183f; -[SCLegacyBlizzardServices .cxx_destruct] */

void FUN_10af51834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af51840; end: 10af518b3; -[SCLensCollectionsMockServices initWithLensCollectionDataProvider:] */

undefined1 * FUN_10af51840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702cd0;
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



/* Entry: 10af518b4; end: 10af518bb; -[SCLensCollectionsMockServices lensCollectionDataProvider] */

undefined8 FUN_10af518b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af518bc; end: 10af518c7; -[SCLensCollectionsMockServices .cxx_destruct] */

void FUN_10af518bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af518c8; end: 10af518cf; -[SCLensCollectionsServices lensCollectionDataProvider] */

undefined8 FUN_10af518c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af518d0; end: 10af518d7; -[SCLensCollectionsServices lensCollectionMetadataMapper] */

undefined8 FUN_10af518d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af518d8; end: 10af51907; -[SCLensCollectionsServices .cxx_destruct] */

void FUN_10af518d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af51908; end: 10af51a07; -[SCLensCollectionMetadata initWithCoder:] */

undefined1 * FUN_10af51908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702ce0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af51a08; end: 10af51b13; -[SCLensCollectionMetadata initWithCollectionId:name:tileImageURL:lenses:] */

undefined1 *
FUN_10af51a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112702ce0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af51b14; end: 10af51b37; -[SCLensCollectionMetadata copyWithZone:] */

undefined8 FUN_10af51b14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af51b38; end: 10af51bbf; -[SCLensCollectionMetadata encodeWithCoder:] */

void FUN_10af51b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f3a4d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e6c918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f3a4f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e44cb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


