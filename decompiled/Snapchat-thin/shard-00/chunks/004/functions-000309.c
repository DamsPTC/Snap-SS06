/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10068b5c4; end: 10068b64b; -[SCCameraLegacyDataSourceFactoryImpl dataSourceWithCameraVisibilityObservable:context:isLiveStreaming:] */

void FUN_10068b5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7ee0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c45bdc();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10068b64c; end: 10068b9eb; -[SCCameraLegacyDataSource initWithCameraHardwareResource:captureDeviceManager:configurationFactory:cameraVisibilityObservable:isLiveStreaming:context:] */

undefined8 *
FUN_10068b64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  puStack_78 = PTR_PTR_1126f0778;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 1,param_3);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126c8e98;
    func_0x000107c610f4();
    puVar4 = puVar3;
    FUN_100078e94();
    func_0x000107c61180();
    func_0x000107c47e14();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126b3770;
    func_0x000107c4d8b8(PTR_PTR_1126b3770);
    func_0x000107c61180();
    uVar5 = param_8;
    func_0x000107c49d0c();
    func_0x000107c61170(puVar3);
    if ((uVar5 & 1) == 0) {
      puVar3 = PTR_PTR_1126ae810;
      func_0x000107c61160();
      uVar2 = puVar1[5];
      puVar1[5] = puVar3;
      func_0x000107c61170(uVar2);
      puVar3 = PTR_PTR_1126c8ea0;
      func_0x000107c610f4();
      puVar4 = PTR_PTR_1126c8ea8;
      func_0x000107c5a9f0(PTR_PTR_1126c8ea8);
      func_0x000107c61180();
      uVar2 = param_5;
      func_0x000107c5c734(param_5);
      func_0x000107c61180();
      func_0x000107c4586c();
      uVar7 = puVar1[4];
      puVar1[4] = puVar3;
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar4);
      puVar3 = PTR_PTR_1126c8eb0;
      func_0x000107c610f4();
      func_0x000107c45be0();
      uVar2 = puVar1[3];
      puVar1[3] = puVar3;
      func_0x000107c61170(uVar2);
      puVar3 = PTR_PTR_1126c8ea8;
      func_0x000107c5a9f0(PTR_PTR_1126c8ea8);
      func_0x000107c61180();
      func_0x000107c3d740();
      func_0x000107c61170(puVar3);
      func_0x000107c61144(auStack_88,puVar1);
      uVar2 = param_3;
      func_0x000107c5c734(param_3);
      func_0x000107c61180();
      uVar7 = uVar2;
      func_0x000107c5dd7c();
      func_0x000107c61180();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      puStack_a0 = &UNK_100c26d6c;
      puStack_98 = &UNK_110916758;
      func_0x000107c6111c(auStack_90,auStack_88);
      uVar6 = uVar7;
      func_0x000107c5c320(uVar7);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar2);
      func_0x000107c6111c(auStack_b8,auStack_88);
      uVar2 = param_6;
      func_0x000107c5c320(param_6);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar2);
      func_0x000107c61120(auStack_b8);
      func_0x000107c61120(auStack_90);
      func_0x000107c61120(auStack_88);
    }
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10068b9ec; end: 10068badb; -[SCViewfinderDataSourceTokenHandlerImpl initWithPerformer:delegate:] */

undefined8 *
FUN_10068b9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_4);
  puStack_40 = PTR_PTR_1126f0870;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = auStack_38;
    func_0x000107c61148(puVar3);
    func_0x000107c611a0(puVar1 + 3,puVar3);
    func_0x000107c61170(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c5e15c();
    func_0x000107c61180();
    uVar2 = puVar1[2];
    puVar1[2] = puVar4;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10068badc; end: 10068bd0b;  */

/* WARNING: Possible PIC construction at 0x00010068bb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068bb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068bbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068bc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068bc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068bc9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068bcc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010068bc68) */
/* WARNING: Removing unreachable block (ram,0x00010068bca0) */
/* WARNING: Removing unreachable block (ram,0x00010068bc6c) */
/* WARNING: Removing unreachable block (ram,0x00010068bc14) */
/* WARNING: Removing unreachable block (ram,0x00010068bbb0) */
/* WARNING: Removing unreachable block (ram,0x00010068bbc0) */
/* WARNING: Removing unreachable block (ram,0x00010068bc1c) */
/* WARNING: Removing unreachable block (ram,0x00010068bce0) */
/* WARNING: Removing unreachable block (ram,0x00010068bc24) */
/* WARNING: Removing unreachable block (ram,0x00010068bbc4) */
/* WARNING: Removing unreachable block (ram,0x00010068bb90) */
/* WARNING: Removing unreachable block (ram,0x00010068bb4c) */
/* WARNING: Removing unreachable block (ram,0x00010068bb94) */
/* WARNING: Removing unreachable block (ram,0x00010068bb50) */
/* WARNING: Removing unreachable block (ram,0x00010068bb9c) */
/* WARNING: Removing unreachable block (ram,0x00010068bba0) */
/* WARNING: Removing unreachable block (ram,0x00010068bb64) */
/* WARNING: Removing unreachable block (ram,0x00010068bcc8) */

void FUN_10068badc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
  func_0x000107c4e430(uVar1);
  func_0x000107c61180();
  if (lRam00000001137f44d0 != -1) {
    FUN_10002a2fc(0x1137f44d0,&PTR___NSConcreteGlobalBlock_110ccbea8);
  }
  uVar1 = uRam00000001137f44d8;
  func_0x000107c61174(uRam00000001137f44d8);
  func_0x000107c40404(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10068bd0c; end: 10068bdc3;  */

void FUN_10068bd0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f5fed8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f5feb8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_38,2);
  func_0x000107c61180();
  func_0x000107c5a74c();
  func_0x000107c61180();
  uVar1 = puRam00000001137f44d8;
  puRam00000001137f44d8 = puVar3;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c5fadc(0x4c4c554e,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10068bdc4; end: 10068bde3; +[SCViewfinderDataSourceContext null] */

void FUN_10068bdc4(void)

{
  func_0x000107c5fadc(0x4c4c554e,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10068bde4; end: 10068be63; +[SCNetworkRadioStatusEstimator networkActivityAttributionKeyForRequest:requestType:trackingInfo:] */

void FUN_10068bde4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c5d0f0(param_5);
  func_0x000107c61180();
  func_0x000107c4d580(param_1,param_2,param_3,param_4,param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10068be64; end: 10068bf23; -[SCAPISessionTaskBackgroundWrapper initWithTask:backgroundTaskWrapper:] */

undefined1 *
FUN_10068be64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112705f78;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_4);
    func_0x000107c61174();
    uVar2 = param_4;
    func_0x000107c3e764();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(param_4);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10068bf24; end: 10068c0f3; +[SCNetworkRadioStatusEstimator networkActivityAttributionKeyForRequest:requestType:contextType:] */

void FUN_10068bf24(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  ppuVar5 = param_3;
  func_0x000107c3abfc();
  func_0x000107c61180();
  ppuVar1 = ppuVar5;
  func_0x000107c4e430();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar5);
  ppuVar5 = ppuVar1;
  func_0x000107c4adac();
  if ((ppuVar5 == (undefined **)0x0) ||
     (ppuVar5 = ppuVar1, func_0x000107c4adac(), (undefined **)0x1d < ppuVar5)) {
    if (param_5 != (undefined **)0x0) {
      func_0x000107c61174(param_5);
      ppuVar5 = param_5;
      goto LAB_10068c0bc;
    }
    if (((param_4 != 3) || (ppuVar5 = ppuVar1, func_0x000107c4adac(), ppuVar5 == (undefined **)0x0))
       || (ppuVar5 = ppuVar1, func_0x000107c4adac(), (undefined **)0x3b < ppuVar5)) {
      ppuVar5 = ppuVar1;
      func_0x000107c4adac();
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110db54d8;
      }
      else {
        ppuVar5 = param_3;
        func_0x000107c3abfc();
        func_0x000107c61180();
        ppuVar2 = ppuVar5;
        func_0x000107c4e43c();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar5);
        ppuVar3 = ppuVar2;
        func_0x000107c40808();
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar3 < (undefined **)0x2) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110db54d8;
        }
        else {
          ppuVar3 = ppuVar2;
          func_0x000107c4d9a4(ppuVar2,param_2,0);
          func_0x000107c61180();
          ppuVar4 = ppuVar2;
          func_0x000107c4d9a4(ppuVar2,param_2,1);
          func_0x000107c61180();
          func_0x000107c51804(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110dae518);
          func_0x000107c61180();
          func_0x000107c61170(ppuVar4);
          func_0x000107c61170(ppuVar3);
        }
        func_0x000107c61170(ppuVar2);
      }
      goto LAB_10068c0bc;
    }
  }
  func_0x000107c61174(ppuVar1);
  ppuVar5 = ppuVar1;
LAB_10068c0bc:
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10068c0f4; end: 10068c14b; -[SCBackgroundTaskWrapper beginBackgroundTaskWithName:] */

ulong FUN_10068c0f4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c3c7d0();
  if ((uVar1 & 1) == 0) {
    func_0x000107c3ae9c(param_1,param_2,param_3);
  }
  else {
    param_1 = 0xffffffffffffffff;
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10068c14c; end: 10068c1cf; -[SCBackgroundTaskWrapper _shouldSkipBackgroundTask] */

bool FUN_10068c14c(double param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c6071c();
  puVar2 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3dfc0();
  if ((puVar3 != (undefined *)0x2) ||
     (param_1 = *(double *)(param_2 + 0x30) - param_1, param_1 <= 0.0)) {
    bVar1 = false;
  }
  else {
    bVar1 = param_1 < (double)*(long *)(param_2 + 0x28);
  }
  func_0x000107c61170(puVar2);
  return bVar1;
}



/* Entry: 10068c1d0; end: 10068c297; +[SCNetworkRadioStatusEstimator networkActivityAttributionInfoForNetworkManagerRequest:] */

void FUN_10068c1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5d7fc(param_3);
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c5043c(param_3);
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c4a644(param_3);
  uVar4 = param_3;
  func_0x000107c5ce60(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c4d57c(param_1,param_2,uVar1,uVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10068c298; end: 10068c41f; -[SCBackgroundTaskWrapper _beginBackgroundTaskWhenGroupBackgroundTaskEnabledWithName:] */

long FUN_10068c298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  puStack_78 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  lVar2 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  puStack_80 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10068c4dc;
  puStack_98 = &UNK_110876040;
  lStack_90 = param_1;
  puStack_68 = puStack_80;
  puStack_48 = puStack_78;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  uStack_88 = param_3;
  FUN_10006eaa4(uVar3,&puStack_b0);
  if (*(char *)(puStack_68 + 3) == '\x01') {
    func_0x0001052d8294(*(undefined8 *)(param_1 + 0x50),1);
  }
  if (puStack_48[3] != lVar2) {
    lVar2 = param_1;
    func_0x000107c5addc();
    if ((int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      func_0x000107c419ec(uVar3);
      func_0x000107c61170(puVar1);
    }
    lVar2 = puStack_48[3];
  }
  func_0x000107c61170(uStack_88);
  func_0x000107c60bcc(&uStack_70,8);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(param_3);
  return lVar2;
}



/* Entry: 10068c420; end: 10068c473; +[SCManagedAudioStreamer sharedInstance] */

void FUN_10068c420(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113732838 != -1) {
    FUN_10002a2fc(0x113732838,&PTR___NSConcreteGlobalBlock_110adf208);
  }
  uVar1 = uRam0000000113732840;
  func_0x000107c61174(uRam0000000113732840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10068c474; end: 10068c4db; -[SCRequest requestTypeStr] */

undefined ** FUN_10068c474(long param_1)

{
  undefined **ppuVar1;
  
  func_0x000107c50438();
  if (param_1 - 1U < 7) {
    ppuVar1 = (undefined **)(&PTR_PTR_110ccbfe8)[param_1 - 1U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f3e8b8;
  }
  return ppuVar1;
}



/* Entry: 10068c4dc; end: 10068c693;  */

void FUN_10068c4dc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x000107c40808();
  if (lVar1 == 0) {
    func_0x000107c61144(auStack_38,*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_40,auStack_38);
    puVar3 = puVar2;
    func_0x000107c3e768();
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x10) = puVar3;
    func_0x000107c61170(puVar2);
    lVar1 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
    if (*(long *)(*(long *)(param_1 + 0x20) + 0x10) == lVar1) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    }
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  else {
    lVar1 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(long *)(lVar4 + 0x10) != lVar1) || (lVar5 = lVar1, (*(byte *)(lVar4 + 8) & 1) == 0)) {
    *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = lVar5;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) != lVar1) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c56bd8(uVar6);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 10068c694; end: 10068c763; -[SCManagedAudioStreamer initSharedInstance] */

undefined1 * FUN_10068c694(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700a50;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126dd0d8;
    func_0x000107c610fc();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar4);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10068c764; end: 10068c803; +[SCNetworkRadioStatusEstimator networkActivityAttributionInfoForNetworkManagerRequest:requestTypeStr:isUIAssetRequest:trackingInfo:] */

void FUN_10068c764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5d0f0(param_6);
  func_0x000107c61180();
  func_0x000107c4d578(param_1,param_2,param_3,param_4,param_5,param_6);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10068c804; end: 10068c947; +[SCNetworkRadioStatusEstimator networkActivityAttributionInfoForNetworkManagerRequest:requestTypeStr:isUIAssetRequest:mediaContextType:] */

void FUN_10068c804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d6c80;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  uVar2 = param_3;
  func_0x000107c3abfc(param_3);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4e430();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c3abfc(param_3);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c44f08();
  func_0x000107c61180();
  uVar6 = param_3;
  func_0x000107c3abfc(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c47a28(puVar1,param_2,0,param_4,param_5,uVar3,uVar5,uVar6,param_6,0);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10068c948; end: 10068c96f; -[SCManagedAudioDataSourceListenerAnnouncer .cxx_construct] */

void FUN_10068c948(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10068c970; end: 10068c9cb;  */

void FUN_10068c970(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a7040;
  func_0x000107c610f8();
  func_0x000107c45db0();
  func_0x000107c61170(param_2);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068c9cc);
  (*pcVar1)();
}



/* Entry: 10068c9cc; end: 10068ca3f; -[SCAudioSessionConfigurationFactoryImpl initWithCircumstanceEngine:] */

undefined1 * FUN_10068c9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e74c8;
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



/* Entry: 10068ca40; end: 10068cad3; -[SCCameraLegacyAudioHandler initWithAudioStreamer:configurationFactory:] */

undefined1 *
FUN_10068ca40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f0770;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10068cad4; end: 10068cbab; -[SCCameraSampleBufferMetadataProviderImpl initWithCameraHardwareResource:captureDeviceManager:isLiveStreaming:] */

undefined1 *
FUN_10068cad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f0798;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_5;
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(*(undefined8 *)((long)puVar1 + 0x18));
    func_0x000107c3c9d0(puVar1);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10068cbac; end: 10068ccef; -[SCCameraSampleBufferMetadataProviderImpl _subscribeToCameraHardwareUpdates] */

void FUN_10068cbac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  func_0x000107c61170(uVar8);
  param_1 = param_1 + 8;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4c238();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c52094();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5d58c();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10068ccf0; end: 10068ccf7; -[SCManagedAudioStreamer addListener:] */

void FUN_10068ccf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10068ccf8; end: 10068cfa3; -[SCManagedAudioDataSourceListenerAnnouncer addListener:] */

undefined8 FUN_10068ccf8(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  plVar3 = (long *)0x30;
  func_0x000107c60e20();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_DAT_110cacea0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    func_0x000107c61144(auStack_90,param_3);
    FUN_10068cfa4(plVar10,auStack_90);
    func_0x000107c61120(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10068d0e4(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_10068ceac:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x000107c60d68(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        func_0x000107c61148();
        func_0x000107c61170();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_10068cecc;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      func_0x000107c61148();
      func_0x000107c61170();
      if (lVar5 != 0) {
        FUN_10068cfa4(plVar10,lVar7);
      }
    }
    func_0x000107c61144(auStack_78,param_3);
    FUN_10068cfa4(plVar10,auStack_78);
    func_0x000107c61120(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10068d0e4(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_10068ceac;
    }
  }
  uVar9 = 1;
LAB_10068cecc:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      func_0x000107c60d68(plVar3);
    }
  }
  func_0x000107c60d8c(param_1 + 8);
  func_0x000107c61170(param_3);
  return uVar9;
}



/* Entry: 10068cfa4; end: 10068d0e3;  */

void FUN_10068cfa4(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    func_0x000107c6111c(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x000107c2bce0();
LAB_10068d0e0:
      func_0x000104bd35f4();
      plVar5 = param_1;
      func_0x000107c60c40();
      func_0x000107c60dc4();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10068d0e0;
      lVar4 = uVar7 << 3;
      func_0x000107c60e20();
    }
    lVar9 = lVar4 + lVar9;
    func_0x000107c6111c(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        func_0x000107c6114c(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        func_0x000107c61120(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10068d0e4; end: 10068d12b;  */

void FUN_10068d0e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10068d12c; end: 10068d133;  */

void FUN_10068d12c(void)

{
  if (lRam0000000113080a88 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e80e700);
  return;
}



/* Entry: 10068d134; end: 10068d16b;  */

void FUN_10068d134(undefined8 param_1)

{
  if (lRam0000000113080a88 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e80e700);
  return;
}



/* Entry: 10068d16c; end: 10068d203;  */

void FUN_10068d16c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_58 = &UNK_10dd0c5b0;
  puStack_50 = &UNK_10dd0c5c8;
  puStack_48 = &UNK_10dd0c5b0;
  puStack_40 = &UNK_10dd0c5b0;
  lVar1 = 0x13f;
  FUN_1000ee934();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dd0c5b0;
    puStack_28 = &UNK_10dd0c5b0;
    func_0x000107c61630(param_1,0x100,8,&puStack_60,param_1 + 0x50);
  }
  return;
}



/* Entry: 10068d204; end: 10068d20b; -[SCCameraHardwareResourceImpl videoCapturerObservable] */

undefined8 FUN_10068d204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10068d20c; end: 10068d53b; -[SCBatteryNetworkActivityAttributionInfo initWithNetworkActivitySourceType:requestTypeStr:isUIAssetRequest:path:host:url:mediaContextType:grpcFeature:] */

void FUN_10068d20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5,long param_6,long param_7,long param_8,long param_9,
                  long param_10)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long alStack_c0 [6];
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  lVar2 = 0x112d36580;
  puVar7 = &UNK_10d9016d0;
  uStack_78 = param_3;
  uStack_6c = param_5;
  uStack_68 = param_1;
  FUN_1000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  lVar9 = (long)&lStack_90 + lVar2;
  if (param_4 == 0) {
    puStack_88 = (undefined *)0x0;
    lStack_80 = 0;
  }
  else {
    func_0x000107c5faec();
    puStack_88 = puVar7;
    lStack_80 = param_4;
  }
  if (param_6 == 0) {
    lStack_90 = 0;
    puVar11 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    lStack_90 = param_6;
    puVar11 = puVar7;
  }
  if (param_7 == 0) {
    param_7 = 0;
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_7);
  }
  lVar3 = param_8;
  func_0x000107c61174();
  lVar4 = param_9;
  func_0x000107c61174();
  lVar5 = param_10;
  func_0x000107c61174();
  if (lVar3 == 0) {
    lVar6 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(lVar9,param_8);
    func_0x000107c61170(lVar3);
    lVar6 = 0;
    func_0x000107c5ede0();
  }
  uVar8 = (ulong)(lVar3 == 0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar9,uVar8,1);
  if (lVar4 == 0) {
    param_9 = 0;
    uVar1 = 0;
    uVar10 = uVar8;
  }
  else {
    func_0x000107c5faec();
    uVar10 = uVar8;
    func_0x000107c61170(lVar4);
    uVar1 = uVar8;
  }
  if (lVar5 == 0) {
    param_10 = 0;
    uVar10 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
  }
  *(long *)((long)alStack_c0 + lVar2 + 0x18) = param_10;
  *(ulong *)((long)alStack_c0 + lVar2 + 0x20) = uVar10;
  *(long *)((long)alStack_c0 + lVar2 + 8) = param_9;
  *(ulong *)((long)alStack_c0 + lVar2 + 0x10) = uVar1;
  *(long *)((long)alStack_c0 + lVar2) = lVar9;
  func_0x00010068d3f8(uStack_78,lStack_80,puStack_88,uStack_6c,lStack_90,puVar11,param_7,puVar7);
  return;
}



/* Entry: 10068d53c; end: 10068d5e3; -[SCBatteryLogger didStartNetworkActivity:startTime:activityAttributionKey:activityAttributionInfo:] */

/* WARNING: Possible PIC construction at 0x00010068d5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068d5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010068d5b4) */
/* WARNING: Removing unreachable block (ram,0x00010068d5c4) */

void FUN_10068d53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3e714(param_1);
  func_0x000107c61180();
  func_0x000107c4bee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10068d5e4; end: 10068d5eb; -[SCBatteryLogger batteryNetworkMonitor] */

undefined8 FUN_10068d5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10068d5ec; end: 10068d757; -[SCBatteryNetworkMonitor logStartedNetworkActivity:startTime:activityAttributionKey:activityAttributionInfo:] */

void FUN_10068d5ec(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  lVar1 = param_1;
  func_0x000107c3c73c();
  if ((((int)lVar1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    func_0x000107c61144(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c4e524(uVar2);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10068d758; end: 10068d767; -[SCBatteryNetworkMonitor _shouldEnableNetworkRadioStatusEstimator] */

void FUN_10068d758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c232710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4024000000000000,PTR__OBJC_CLASS___UIDevice_1126aeb10,
             PTR_s_shouldReportForPercentage__11266a3e8);
  return;
}



/* Entry: 10068d768; end: 10068d77f; -[SCRequestInfoContainer concurrencyObserver] */

void FUN_10068d768(long param_1)

{
  func_0x000107c61148(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10068d780; end: 10068d787;  */

void FUN_10068d780(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    FUN_10068da44();
  }
  else {
    func_0x000107c303f0(param_2,0x50);
  }
  *puVar1 = &PTR_DAT_110cfc0d0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10068d788; end: 10068d89f; -[SCRequestManagerRunningTaskState startRequest:requestType:] */

void FUN_10068d788(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c61174();
  if (param_4 != 0) {
    FUN_10068d8a0();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c49820();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((uVar3 < 4) || (uVar3 == 5)) {
      func_0x000107c6071c();
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_100692844;
      puStack_78 = &UNK_110844fe0;
      lStack_70 = param_2;
      func_0x000107c61174(param_4);
      lStack_68 = param_4;
      uStack_60 = param_1;
      uStack_58 = uVar3;
      func_0x000107c4e524(uVar4,param_3,&puStack_90);
      func_0x000107c61170(lStack_68);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10068d8a0; end: 10068d8f3;  */

void FUN_10068d8a0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4510 != -1) {
    FUN_10002a2fc(0x1137f4510,&PTR___NSConcreteGlobalBlock_110ccc0b8);
  }
  uVar1 = uRam00000001137f4518;
  func_0x000107c61174(uRam00000001137f4518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10068d8f4; end: 10068da0b;  */

void FUN_10068d8f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f3e8d8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f3e8b8;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d33d8;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d33f0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f3e8f8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f3e918;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3408;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3420;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f3e938;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f3e958;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3438;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3450;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f3e978;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f3e998;
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3468;
  ppuStack_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3480;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_58,&ppuStack_98,8);
  func_0x000107c61180();
  puVar2 = puRam00000001137f4518;
  puRam00000001137f4518 = (undefined8 *)puVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  func_0x000107c60e78();
  puVar3 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_10068da44();
  }
  else {
    func_0x000107c303f0(puVar2,0x50);
  }
  *puVar3 = &PTR_DAT_110cfc0d0;
  puVar3[1] = puVar2;
  puVar3[2] = 0;
  puVar3[3] = &DAT_11383d918;
  puVar3[4] = &DAT_11383d918;
  puVar3[5] = &DAT_11383d918;
  puVar3[6] = &DAT_11383d918;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[7] = 0;
  return;
}



/* Entry: 10068da0c; end: 10068da43;  */

void FUN_10068da0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    FUN_10068da44();
  }
  else {
    func_0x000107c303f0(param_1,0x50);
  }
  *puVar1 = &PTR_DAT_110cfc0d0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10068da44; end: 10068da7f;  */

void FUN_10068da44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x50);
  return;
}



/* Entry: 10068da80; end: 10068dac3;  */

void FUN_10068da80(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c33620();
  }
  *puVar1 = &PTR_DAT_110a91b90;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10068dac4; end: 10068dad3;  */

void FUN_10068dac4(void)

{
  return;
}



/* Entry: 10068dad4; end: 10068db0f;  */

void FUN_10068dad4(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x20;
    func_0x000107c60e20();
  }
  else {
    func_0x000107c33510();
  }
  FUN_100685260(&UNK_110a921c0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10068db10; end: 10068db17;  */

void FUN_10068db10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_2;
    func_0x000107c33620();
  }
  *puVar1 = &PTR_DAT_110a917d0;
  puVar1[1] = param_2;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10068db18; end: 10068db5b;  */

void FUN_10068db18(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c33620();
  }
  *puVar1 = &PTR_DAT_110a917d0;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10068db5c; end: 10068dc53;  */

void FUN_10068db5c(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174();
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  dVar1 = 1.60807493534087e-314;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10068dd78;
  puStack_60 = &UNK_110847658;
  puStack_48 = puStack_58;
  if (lRam00000001137f4588 != -1) {
    FUN_10002a2fc(0x1137f4588,&puStack_78);
  }
  func_0x000107c54a48(param_2);
  func_0x000107c5ca7c(param_2);
  if (dVar1 == 0.0) {
    func_0x000107c59de0(param_1,param_2);
  }
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10068dc54; end: 10068dc5b;  */

undefined8 * FUN_10068dc54(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x158;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_2;
    func_0x000107c303f0(param_2,0x158);
  }
  *puVar1 = &PTR_DAT_110a96040;
  puVar1[1] = param_2;
  FUN_10068dc98();
  return puVar1;
}



/* Entry: 10068dc5c; end: 10068dc97;  */

undefined8 * FUN_10068dc5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x158;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x158);
  }
  *puVar1 = &PTR_DAT_110a96040;
  puVar1[1] = param_1;
  FUN_10068dc98();
  return puVar1;
}



/* Entry: 10068dc98; end: 10068dcef;  */

void FUN_10068dc98(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = param_2;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = param_2;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  return;
}



/* Entry: 10068dcf0; end: 10068dd1b;  */

undefined8 * FUN_10068dcf0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110a96040;
  param_1[1] = param_2;
  FUN_10068dc98();
  return param_1;
}



/* Entry: 10068dd1c; end: 10068dd2b;  */

void FUN_10068dd1c(void)

{
  return;
}



/* Entry: 10068dd2c; end: 10068dd77;  */

void FUN_10068dd2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x28);
  }
  *puVar1 = &PTR_DAT_110a815c0;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10068dd78; end: 10068dd8b;  */

void FUN_10068dd78(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10068dd8c; end: 10068ddd7;  */

void FUN_10068dd8c(int param_1)

{
  undefined1 *unaff_x19;
  
  FUN_10061f60c();
  if (param_1 != 5) {
    FUN_10061f668();
    func_0x00010865fa68();
    func_0x00010061fa40();
    func_0x000104bee630();
  }
  else {
    *unaff_x19 = 0;
  }
  unaff_x19[0x18] = param_1 != 5;
  return;
}



/* Entry: 10068ddd8; end: 10068de07;  */

void FUN_10068ddd8(int param_1)

{
  FUN_1006224b0();
  if (param_1 != 5) {
    FUN_100622504();
    func_0x000100622510();
  }
  return;
}



/* Entry: 10068de08; end: 10068de1f;  */

ulong FUN_10068de08(ulong param_1)

{
  FUN_10068ddd8();
  return param_1 & 0xffffffffff;
}



/* Entry: 10068de20; end: 10068de4f;  */

void FUN_10068de20(int param_1)

{
  FUN_1006224b0();
  if (param_1 != 5) {
    FUN_100622504();
    func_0x000100622510();
  }
  return;
}



/* Entry: 10068de50; end: 10068de67;  */

ulong FUN_10068de50(ulong param_1)

{
  FUN_10068de20();
  return param_1 & 0xffffffffff;
}



/* Entry: 10068de68; end: 10068de97;  */

void FUN_10068de68(int param_1)

{
  FUN_1006224b0();
  if (param_1 != 5) {
    FUN_100622504();
    func_0x000100622510();
  }
  return;
}



/* Entry: 10068de98; end: 10068deaf;  */

ulong FUN_10068de98(ulong param_1)

{
  FUN_10068de68();
  return param_1 & 0xffffffffff;
}



/* Entry: 10068deb0; end: 10068dedf;  */

void FUN_10068deb0(int param_1)

{
  FUN_1006224b0();
  if (param_1 != 5) {
    FUN_100622504();
    func_0x000100622510();
  }
  return;
}



/* Entry: 10068dee0; end: 10068def7;  */

ulong FUN_10068dee0(ulong param_1)

{
  FUN_10068deb0();
  return param_1 & 0xffffffffff;
}



/* Entry: 10068def8; end: 10068dfeb;  */

long FUN_10068def8(long param_1)

{
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    FUN_1006906a0();
  }
  else {
    FUN_10068dfec();
  }
  return param_1;
}



/* Entry: 10068dfec; end: 10068e007;  */

void FUN_10068dfec(long param_1)

{
  func_0x00010068df2c();
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  return;
}



/* Entry: 10068e008; end: 10068e01b; -[SCRequestInfoContainer setFirstHitSubmitToNSURLSession:] */

void FUN_10068e008(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x39) = param_3;
  return;
}



/* Entry: 10068e01c; end: 10068e05f;  */

long FUN_10068e01c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100656fc0(&UNK_110a96170);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  FUN_10068e060();
  return param_1;
}



/* Entry: 10068e060; end: 10068e0c3;  */

long FUN_10068e060(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010068e0f0(param_1);
    }
    else {
      func_0x000107c2a5bc(param_1);
    }
  }
  return param_1;
}



/* Entry: 10068e0c4; end: 10068e11f;  */

undefined1  [16] FUN_10068e0c4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  auVar3._8_8_ = param_2 + 0x18;
  auVar3._0_8_ = param_1 + 0x18;
  return auVar3;
}



/* Entry: 10068e120; end: 10068e14b;  */

undefined1 * FUN_10068e120(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x00010068e10c();
  return param_1;
}



/* Entry: 10068e14c; end: 10068e153; -[SCRequestInfoContainer timestampSubmitToNSURLSession] */

undefined8 FUN_10068e14c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10068e154; end: 10068e19b;  */

long FUN_10068e154(long param_1)

{
  long lStack_28;
  
  FUN_1005fce88(param_1 + 0x188);
  FUN_1005fce88(param_1 + 0x150);
  FUN_10068e19c(param_1 + 0xf0);
  func_0x000107c60ca0(param_1 + 200);
  FUN_10068e1c4(param_1 + 0x50);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10068e19c; end: 10068e1bb;  */

void FUN_10068e19c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104bee630();
  }
  return;
}



/* Entry: 10068e1bc; end: 10068e1c3;  */

void FUN_10068e1bc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  uVar2 = *puVar1 & 0xfffffffffffffffe;
  if (uVar2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar2 + 8);
  }
  __ZdlPv(uVar2);
  *puVar1 = 0;
  return;
}



/* Entry: 10068e1c4; end: 10068e1ef;  */

undefined8 FUN_10068e1c4(undefined8 param_1)

{
  FUN_10068e1bc();
  FUN_10068e1fc(param_1);
  return param_1;
}



/* Entry: 10068e1f0; end: 10068e1fb;  */

undefined8 FUN_10068e1f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10068e1fc; end: 10068e29b;  */

/* WARNING: Possible PIC construction at 0x00010068e214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068e224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068e234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068e244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068e254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068e264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068e274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068e284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010068e278) */
/* WARNING: Removing unreachable block (ram,0x00010068e280) */
/* WARNING: Removing unreachable block (ram,0x00010068e284) */
/* WARNING: Removing unreachable block (ram,0x00010068e268) */
/* WARNING: Removing unreachable block (ram,0x00010068e270) */
/* WARNING: Removing unreachable block (ram,0x00010068e274) */
/* WARNING: Removing unreachable block (ram,0x00010068e258) */
/* WARNING: Removing unreachable block (ram,0x00010068e260) */
/* WARNING: Removing unreachable block (ram,0x00010068e264) */
/* WARNING: Removing unreachable block (ram,0x00010068e248) */
/* WARNING: Removing unreachable block (ram,0x00010068e250) */
/* WARNING: Removing unreachable block (ram,0x00010068e254) */
/* WARNING: Removing unreachable block (ram,0x00010068e238) */
/* WARNING: Removing unreachable block (ram,0x00010068e240) */
/* WARNING: Removing unreachable block (ram,0x00010068e244) */
/* WARNING: Removing unreachable block (ram,0x00010068e228) */
/* WARNING: Removing unreachable block (ram,0x00010068e230) */
/* WARNING: Removing unreachable block (ram,0x00010068e234) */
/* WARNING: Removing unreachable block (ram,0x00010068e218) */
/* WARNING: Removing unreachable block (ram,0x00010068e220) */
/* WARNING: Removing unreachable block (ram,0x00010068e224) */
/* WARNING: Removing unreachable block (ram,0x00010068e288) */
/* WARNING: Removing unreachable block (ram,0x00010068e290) */
/* WARNING: Removing unreachable block (ram,0x00010068e294) */
/* WARNING: Removing unreachable block (ram,0x00010068e2a4) */

void FUN_10068e1fc(long param_1)

{
  FUN_10068e1f0();
  if (param_1 != 0) {
    FUN_1005f73a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10068e29c; end: 10068e2cf; -[SCRequestInfoContainer setTimestampSubmitToNSURLSession:] */

void FUN_10068e29c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 10068e2d0; end: 10068e2f7;  */

void FUN_10068e2d0(long param_1,long param_2)

{
  func_0x0001006577c8();
  FUN_10068e2f8(param_1 + 8,param_2 + 8);
  FUN_100657898();
  return;
}



/* Entry: 10068e2f8; end: 10068e363;  */

void FUN_10068e2f8(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_1d8 [424];
  
  func_0x0001006577c8();
  cVar1 = *(char *)(param_1 + 0x1a8);
  if (cVar1 != *(char *)(param_2 + 0x1a8)) {
    if (cVar1 == '\0') {
      FUN_100657868();
      FUN_10068dfec();
    }
    else {
      FUN_10065b8b8();
      FUN_10068dfec();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x1a8) == '\x01') {
      FUN_10068e154();
      *(undefined1 *)(unaff_x19 + 0x1a8) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    FUN_100657868();
    func_0x000107c31e1c();
    func_0x00010068df2c(auStack_1d8,unaff_x20);
    func_0x000107c31e34();
    FUN_1006906a0();
    func_0x000107c31e3c();
    FUN_1006906a0();
    FUN_10068e154(auStack_1d8);
    return;
  }
  return;
}



/* Entry: 10068e364; end: 10068e387;  */

void FUN_10068e364(long param_1)

{
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    FUN_10068e154();
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  return;
}



/* Entry: 10068e388; end: 10068e413; -[SCBatteryNetworkActivityAttributionInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010068e3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068e3d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010068e3f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010068e3d4) */
/* WARNING: Removing unreachable block (ram,0x00010068e3ac) */
/* WARNING: Removing unreachable block (ram,0x00010068e3f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10068e388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113080a40 + 8))
  ;
  return;
}



/* Entry: 10068e414; end: 10068e437;  */

void FUN_10068e414(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(&stack0x00000048,0x1b8);
  return;
}



/* Entry: 10068e438; end: 10068e48b;  */

long FUN_10068e438(long param_1)

{
  if ((*(byte *)(param_1 + 0x1b0) & 1) == 0) {
    func_0x0001086601b4();
    func_0x0001086601a0();
    func_0x0001086601ec();
    func_0x000108660224();
    func_0x0001086601dc();
  }
  return param_1 + 8;
}



/* Entry: 10068e48c; end: 10068e4a3;  */

long FUN_10068e48c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  lVar1 = param_1;
  FUN_10054f8dc();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  *(undefined1 *)(lVar1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined8 *)(lVar1 + 0x40) = uVar7;
  *(undefined8 *)(lVar1 + 0x38) = uVar6;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  FUN_10068e5ac(lVar1 + 0x50,param_2 + 0x50);
  func_0x000107c60c94(param_1 + 200,param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  FUN_1006902b0(param_1 + 0xf0,param_2 + 0xf0);
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  uVar2 = *(undefined8 *)(param_2 + 0x110);
  uVar5 = *(undefined8 *)(param_2 + 0x128);
  uVar4 = *(undefined8 *)(param_2 + 0x120);
  uVar7 = *(undefined8 *)(param_2 + 0x138);
  uVar6 = *(undefined8 *)(param_2 + 0x130);
  uVar8 = *(undefined8 *)(param_2 + 0x139);
  *(undefined8 *)(param_1 + 0x141) = *(undefined8 *)(param_2 + 0x141);
  *(undefined8 *)(param_1 + 0x139) = uVar8;
  *(undefined8 *)(param_1 + 0x128) = uVar5;
  *(undefined8 *)(param_1 + 0x120) = uVar4;
  *(undefined8 *)(param_1 + 0x138) = uVar7;
  *(undefined8 *)(param_1 + 0x130) = uVar6;
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  FUN_100606fd8(param_1 + 0x150,param_2 + 0x150);
  uVar3 = *(undefined8 *)(param_2 + 0x178);
  uVar2 = *(undefined8 *)(param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = uVar3;
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  FUN_100606fd8(param_1 + 0x188,param_2 + 0x188);
  return param_1;
}



/* Entry: 10068e4a4; end: 10068e5ab;  */

long FUN_10068e4a4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1;
  FUN_10054f8dc();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  *(undefined1 *)(lVar1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined8 *)(lVar1 + 0x40) = uVar7;
  *(undefined8 *)(lVar1 + 0x38) = uVar6;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  FUN_10068e5ac(lVar1 + 0x50,param_2 + 0x50);
  func_0x000107c60c94(param_1 + 200,param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  FUN_1006902b0(param_1 + 0xf0,param_2 + 0xf0);
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  uVar2 = *(undefined8 *)(param_2 + 0x110);
  uVar5 = *(undefined8 *)(param_2 + 0x128);
  uVar4 = *(undefined8 *)(param_2 + 0x120);
  uVar7 = *(undefined8 *)(param_2 + 0x138);
  uVar6 = *(undefined8 *)(param_2 + 0x130);
  uVar8 = *(undefined8 *)(param_2 + 0x139);
  *(undefined8 *)(param_1 + 0x141) = *(undefined8 *)(param_2 + 0x141);
  *(undefined8 *)(param_1 + 0x139) = uVar8;
  *(undefined8 *)(param_1 + 0x128) = uVar5;
  *(undefined8 *)(param_1 + 0x120) = uVar4;
  *(undefined8 *)(param_1 + 0x138) = uVar7;
  *(undefined8 *)(param_1 + 0x130) = uVar6;
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  FUN_100606fd8(param_1 + 0x150,param_2 + 0x150);
  uVar3 = *(undefined8 *)(param_2 + 0x178);
  uVar2 = *(undefined8 *)(param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = uVar3;
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  FUN_100606fd8(param_1 + 0x188,param_2 + 0x188);
  return param_1;
}



/* Entry: 10068e5ac; end: 10068e5cb;  */

void FUN_10068e5ac(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  
  func_0x00010068e5b8(param_1,0,param_2);
  FUN_10068e710(&PTR_DAT_110a96180);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c34a24();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010068e71c();
    FUN_10068e734();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10068e7e8();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10068f608();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10068fea0();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_1006901a4();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_100694c50();
  }
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a5f0();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a5f4();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  if ((uVar1 >> 8 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c2a474();
  }
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x21;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  return;
}



/* Entry: 10068e5cc; end: 10068e70f;  */

void FUN_10068e5cc(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  
  func_0x00010068e5b8();
  FUN_10068e710(&PTR_DAT_110a96180);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c34a24();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010068e71c();
    FUN_10068e734();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10068e7e8();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10068f608();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10068fea0();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_1006901a4();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_100694c50();
  }
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a5f0();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a5f4();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  if ((uVar1 >> 8 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c2a474();
  }
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x21;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  return;
}



/* Entry: 10068e710; end: 10068e733;  */

void FUN_10068e710(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10068e734; end: 10068e773;  */

undefined8 * FUN_10068e734(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010068e728();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x20;
    func_0x000107c60e20();
  }
  else {
    puVar1 = unaff_x20;
    func_0x000107c303f0();
  }
  puVar1[1] = unaff_x20;
  *puVar1 = &PTR_DAT_110a81f68;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107c30374(puVar1 + 1,(*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = unaff_x19 + 0x10;
  func_0x0001002a0e60();
  puVar1[2] = lVar2;
  *(undefined4 *)(puVar1 + 3) = 0;
  return puVar1;
}



/* Entry: 10068e774; end: 10068e7db;  */

undefined8 * FUN_10068e774(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a81f68;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c30374(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x0001002a0e60(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10068e7dc; end: 10068e7e7;  */

void FUN_10068e7dc(void)

{
  return;
}



/* Entry: 10068e7e8; end: 10068e817;  */

undefined8 * FUN_10068e7e8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_10068e7dc();
  if (param_1 == (undefined8 *)0x0) {
    FUN_10068e818();
  }
  else {
    func_0x000107c34a64();
  }
  FUN_10068f190();
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a90cd0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c34968();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  uVar2 = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 5) = uVar2;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10068f270(param_2,*(undefined8 *)(param_3 + 0x18));
    uVar2 = *(undefined4 *)(param_1 + 5);
  }
  param_1[3] = param_2;
  switch(uVar2) {
  case 1:
    func_0x00010068f534();
    FUN_10068f540();
    break;
  case 2:
    func_0x00010068f534();
    func_0x000107c2a4a4();
    break;
  case 3:
    func_0x00010068f534();
    func_0x000107c2a4a8();
    break;
  case 4:
    func_0x00010068f534();
    func_0x000107c2a4ac();
    break;
  default:
    goto LAB_10068f258;
  }
  param_1[4] = param_2;
LAB_10068f258:
  return param_1;
}



/* Entry: 10068e818; end: 10068e847;  */

void FUN_10068e818(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x30);
  return;
}



/* Entry: 10068e848; end: 10068eeaf;  */

void FUN_10068e848(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 in_NG;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x9_04;
  long *extraout_x9_05;
  ulong uVar7;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  long *plVar8;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *plVar9;
  long *extraout_x11_02;
  long *extraout_x11_03;
  long *extraout_x12;
  long *extraout_x12_00;
  long *plVar10;
  long unaff_x19;
  ulong uVar11;
  long *unaff_x24;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  func_0x00010061052c();
  func_0x000107c60d9c();
  plVar8 = (long *)(unaff_x19 + 200);
  FUN_100102e7c(plVar8,param_2);
  plVar14 = *(long **)(unaff_x19 + 0xb8);
  plVar13 = plVar8;
  if (plVar14 != (long *)0x0) {
    uVar11 = (long)plVar14 - 1;
    if (((ulong)plVar14 & uVar11) == 0) {
      unaff_x24 = (long *)(uVar11 & (ulong)plVar8);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar8 - (long)plVar14 < 0;
      unaff_x24 = plVar8;
      if (plVar14 <= plVar8) {
        uVar7 = 0;
        if (plVar14 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)plVar14;
        }
        unaff_x24 = (long *)((long)plVar8 - uVar7 * (long)plVar14);
      }
    }
    plVar12 = *(long **)(*(long *)(unaff_x19 + 0xb0) + (long)unaff_x24 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10068e918;
          plVar6 = (long *)plVar12[1];
          in_NG = (long)plVar6 - (long)plVar8 < 0;
          if (plVar6 != plVar8) break;
          plVar13 = plVar12 + 2;
          FUN_1000e107c(plVar13,param_2);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10068eb4c;
        }
        if (((ulong)plVar14 & uVar11) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar11);
        }
        else if (plVar14 <= plVar6) {
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar14;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar14);
        }
        in_NG = (long)plVar6 - (long)unaff_x24 < 0;
      } while (plVar6 == unaff_x24);
    }
  }
LAB_10068e918:
  FUN_10068eeb0();
  plVar12 = (long *)(unaff_x19 + 0xc0);
  uStack_68 = 0;
  plVar6 = plVar13 + 2;
  *plVar13 = 0;
  plVar13[1] = (long)plVar8;
  plStack_78 = plVar13;
  plStack_70 = plVar12;
  func_0x000107c60c94(plVar6,param_2);
  plVar13[5] = param_1;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  func_0x0001006012f8(*(undefined8 *)(unaff_x19 + 200));
  if ((plVar14 == (long *)0x0) || (FUN_100b449e4(), (bool)in_NG)) {
    func_0x00010068eeb8();
    bVar2 = (long *)0x2 < plVar14;
    bVar4 = plVar14 == (long *)0x3;
    func_0x00010060131c();
    plVar5 = extraout_x8;
    if (!bVar2 || bVar4) {
      plVar5 = extraout_x9;
    }
    if ((long)plVar5 - 1U == 0) {
      plVar5 = (long *)0x2;
    }
    else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
      func_0x000107c60c44();
      plVar6 = plVar5;
    }
    plVar14 = *(long **)(unaff_x19 + 0xb8);
    if (plVar14 < plVar5) {
LAB_10068e9a4:
      if ((ulong)plVar5 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10068ee7c;
      }
      lVar15 = (long)plVar5 << 3;
      func_0x000107c60e20(lVar15);
      func_0x00010068eed0(unaff_x19 + 0xb0,lVar15);
      plVar14 = (long *)0x0;
      *(long **)(unaff_x19 + 0xb8) = plVar5;
      while (plVar5 != plVar14) {
        func_0x0001006014c8();
        plVar14 = extraout_x9_00;
      }
      plVar14 = plVar5;
      if (*plVar12 != 0) {
        func_0x000107c39734();
        func_0x000107c39730();
        lVar15 = extraout_x8_00;
        uVar11 = extraout_x9_01;
        plVar6 = extraout_x10;
        plVar9 = extraout_x11;
        while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
          plVar10 = (long *)plVar6[1];
          if (((ulong)plVar5 & uVar11) == 0) {
            plVar10 = (long *)((ulong)plVar10 & uVar11);
          }
          else if (plVar5 <= plVar10) {
            uVar7 = 0;
            if (plVar5 != (long *)0x0) {
              uVar7 = (ulong)plVar10 / (ulong)plVar5;
            }
            plVar10 = (long *)((long)plVar10 - uVar7 * (long)plVar5);
          }
          if (plVar10 != plVar9) {
            if (*(long *)(lVar15 + (long)plVar10 * 8) == 0) {
              func_0x000107c396d4();
              lVar15 = extraout_x8_02;
              uVar11 = extraout_x9_03;
              plVar6 = extraout_x12;
              plVar9 = extraout_x11_01;
            }
            else {
              func_0x000107c39660();
              lVar15 = extraout_x8_01;
              uVar11 = extraout_x9_02;
              plVar6 = extraout_x10_00;
              plVar9 = extraout_x11_00;
            }
          }
        }
      }
    }
    else if (plVar5 < plVar14) {
      func_0x000107c396c4((float)*(ulong *)(unaff_x19 + 200),*(undefined4 *)(unaff_x19 + 0xd0));
      if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else {
        func_0x000107c39668();
      }
      if (plVar5 <= plVar6) {
        plVar5 = plVar6;
      }
      if (plVar5 < plVar14) {
        if (plVar5 != (long *)0x0) goto LAB_10068e9a4;
        func_0x00010068eed0(unaff_x19 + 0xb0,0);
        *(undefined8 *)(unaff_x19 + 0xb8) = 0;
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = *(long **)(unaff_x19 + 0xb8);
      }
    }
    if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar14 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x24 = plVar8;
      if (plVar14 <= plVar8) {
        uVar11 = 0;
        if (plVar14 != (long *)0x0) {
          uVar11 = (ulong)plVar8 / (ulong)plVar14;
        }
        unaff_x24 = (long *)((long)plVar8 - uVar11 * (long)plVar14);
      }
    }
  }
  lVar15 = *(long *)(unaff_x19 + 0xb0);
  if (*(long *)(lVar15 + (long)unaff_x24 * 8) == 0) {
    *plVar13 = *plVar12;
    *plVar12 = (long)plVar13;
    *(long **)(lVar15 + (long)unaff_x24 * 8) = plVar12;
    if (*plVar13 != 0) {
      plVar8 = *(long **)(*plVar13 + 8);
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar8) {
        uVar11 = 0;
        if (plVar14 != (long *)0x0) {
          uVar11 = (ulong)plVar8 / (ulong)plVar14;
        }
        plVar8 = (long *)((long)plVar8 - uVar11 * (long)plVar14);
      }
      *(long **)(lVar15 + (long)plVar8 * 8) = plVar13;
    }
  }
  else {
    func_0x000107c39698();
  }
  plStack_78 = (long *)0x0;
  *(long *)(unaff_x19 + 200) = *(long *)(unaff_x19 + 200) + 1;
  FUN_10068eee8(&plStack_78);
LAB_10068eb4c:
  uVar3 = (int)(*(byte *)(unaff_x19 + 0xac) - 1) < 0;
  if (*(byte *)(unaff_x19 + 0xac) != 1) goto LAB_10068ee4c;
  lVar15 = *(long *)(unaff_x19 + 0x228);
  plVar8 = (long *)(unaff_x19 + 0xf0);
  FUN_100102e7c(plVar8,param_2);
  plVar13 = *(long **)(unaff_x19 + 0xe0);
  if (plVar13 != (long *)0x0) {
    uVar11 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar11) == 0) {
      plVar14 = (long *)(uVar11 & (ulong)plVar8);
      uVar3 = false;
    }
    else {
      uVar3 = (long)plVar8 - (long)plVar13 < 0;
      plVar14 = plVar8;
      if (plVar13 <= plVar8) {
        uVar7 = 0;
        if (plVar13 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar14 = (long *)((long)plVar8 - uVar7 * (long)plVar13);
      }
    }
    plVar12 = *(long **)(*(long *)(unaff_x19 + 0xd8) + (long)plVar14 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10068ebfc;
          plVar6 = (long *)plVar12[1];
          uVar3 = (long)plVar6 - (long)plVar8 < 0;
          if (plVar6 != plVar8) break;
          uVar7 = (ulong)(plVar12 + 2);
          FUN_1000e107c(uVar7,param_2);
          if ((uVar7 & 1) != 0) goto LAB_10068ee4c;
        }
        if (((ulong)plVar13 & uVar11) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar11);
        }
        else if (plVar13 <= plVar6) {
          uVar7 = 0;
          if (plVar13 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar13;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar13);
        }
        uVar3 = (long)plVar6 - (long)plVar14 < 0;
      } while (plVar6 == plVar14);
    }
  }
LAB_10068ebfc:
  plVar5 = (long *)0x38;
  func_0x000107c60e20();
  plVar12 = (long *)(unaff_x19 + 0xe8);
  uStack_68 = 0;
  plVar6 = plVar5 + 2;
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  plStack_78 = plVar5;
  plStack_70 = plVar12;
  func_0x000107c60c94(plVar6,param_2);
  plVar5[5] = param_1;
  plVar5[6] = lVar15;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  func_0x0001006012f8(*(undefined8 *)(unaff_x19 + 0xf0));
  if ((plVar13 == (long *)0x0) || (FUN_100b449e4(), (bool)uVar3)) {
    func_0x000107c39710();
    bVar2 = (long *)0x2 < plVar13;
    bVar4 = plVar13 == (long *)0x3;
    func_0x00010060131c();
    plVar14 = extraout_x8_03;
    if (!bVar2 || bVar4) {
      plVar14 = extraout_x9_04;
    }
    if ((long)plVar14 - 1U == 0) {
      plVar14 = (long *)0x2;
    }
    else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
      func_0x000107c60c44();
      plVar6 = plVar14;
    }
    plVar13 = *(long **)(unaff_x19 + 0xe0);
    if (plVar13 < plVar14) {
LAB_10068ec8c:
      if ((ulong)plVar14 >> 0x3d != 0) {
        func_0x000104bd35f4();
LAB_10068ee7c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068ee80);
        (*pcVar1)();
      }
      lVar15 = (long)plVar14 << 3;
      func_0x000107c60e20(lVar15);
      func_0x000107c300fc(unaff_x19 + 0xd8,lVar15);
      plVar13 = (long *)0x0;
      *(long **)(unaff_x19 + 0xe0) = plVar14;
      lVar15 = *(long *)(unaff_x19 + 0xd8);
      while (plVar14 != plVar13) {
        func_0x0001006014c8();
        lVar15 = extraout_x8_04;
        plVar13 = extraout_x9_05;
      }
      plVar6 = (long *)*plVar12;
      plVar13 = plVar14;
      if (plVar6 != (long *)0x0) {
        plVar9 = (long *)plVar6[1];
        uVar7 = (long)plVar14 - 1;
        uVar11 = 0;
        if (plVar14 != (long *)0x0) {
          uVar11 = (ulong)plVar9 / (ulong)plVar14;
        }
        plVar10 = plVar9;
        if (plVar14 <= plVar9) {
          plVar10 = (long *)((long)plVar9 - uVar11 * (long)plVar14);
        }
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar10 = (long *)((ulong)plVar9 & uVar7);
        }
        *(long **)(lVar15 + (long)plVar10 * 8) = plVar12;
        while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
          plVar9 = (long *)plVar6[1];
          if (((ulong)plVar14 & uVar7) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar7);
          }
          else if (plVar14 <= plVar9) {
            uVar11 = 0;
            if (plVar14 != (long *)0x0) {
              uVar11 = (ulong)plVar9 / (ulong)plVar14;
            }
            plVar9 = (long *)((long)plVar9 - uVar11 * (long)plVar14);
          }
          if (plVar9 != plVar10) {
            if (*(long *)(lVar15 + (long)plVar9 * 8) == 0) {
              func_0x000107c396d4();
              lVar15 = extraout_x8_06;
              uVar7 = extraout_x9_07;
              plVar6 = extraout_x12_00;
              plVar10 = extraout_x11_03;
            }
            else {
              func_0x000107c39660();
              lVar15 = extraout_x8_05;
              uVar7 = extraout_x9_06;
              plVar6 = extraout_x10_01;
              plVar10 = extraout_x11_02;
            }
          }
        }
      }
    }
    else if (plVar14 < plVar13) {
      func_0x000107c396c4((float)*(ulong *)(unaff_x19 + 0xf0),*(undefined4 *)(unaff_x19 + 0xf8));
      if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else {
        func_0x000107c39668();
      }
      if (plVar14 <= plVar6) {
        plVar14 = plVar6;
      }
      if (plVar14 < plVar13) {
        if (plVar14 != (long *)0x0) goto LAB_10068ec8c;
        func_0x000107c300fc(unaff_x19 + 0xd8,0);
        *(undefined8 *)(unaff_x19 + 0xe0) = 0;
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = *(long **)(unaff_x19 + 0xe0);
      }
    }
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      plVar14 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
    }
    else {
      plVar14 = plVar8;
      if (plVar13 <= plVar8) {
        uVar11 = 0;
        if (plVar13 != (long *)0x0) {
          uVar11 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar14 = (long *)((long)plVar8 - uVar11 * (long)plVar13);
      }
    }
  }
  lVar15 = *(long *)(unaff_x19 + 0xd8);
  if (*(long *)(lVar15 + (long)plVar14 * 8) == 0) {
    *plVar5 = *plVar12;
    *plVar12 = (long)plVar5;
    *(long **)(lVar15 + (long)plVar14 * 8) = plVar12;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar11 = 0;
        if (plVar13 != (long *)0x0) {
          uVar11 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar11 * (long)plVar13);
      }
      *(long **)(lVar15 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    func_0x000107c39698();
  }
  plStack_78 = (long *)0x0;
  *(long *)(unaff_x19 + 0xf0) = *(long *)(unaff_x19 + 0xf0) + 1;
  func_0x000107c30100(&plStack_78);
LAB_10068ee4c:
  FUN_10068ef18();
  return;
}



/* Entry: 10068eeb0; end: 10068eee7;  */

void FUN_10068eeb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x30);
  return;
}


