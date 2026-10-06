/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b439a8; end: 100b43a8f;  */

void FUN_100b439a8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126dff88;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c4d5bc();
  func_0x000107c61180();
  func_0x000107c40bc0();
  func_0x000107c61180();
  lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c4d708(uVar1);
  func_0x000107c61180();
  func_0x000107c56ac8(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf75d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28),
             PTR_s_didEnqueueTaskWithTimestampForFi_1125bb108);
  return;
}



/* Entry: 100b43a90; end: 100b43a9b;  */

void FUN_100b43a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b43a9c; end: 100b43b87; +[SCRequestTask createTaskWithRequest:authenticator:traceFile:networkInterceptors:grapheneRegistry:completionQueue:completionBlock:] */

void FUN_100b43a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dfee8;
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c4834c();
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b43b88; end: 100b43b8b;  */

void FUN_100b43b88(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100b43b8c; end: 100b43bb7; -[SCRequestManagerHTTPRequestToken .cxx_destruct] */

void FUN_100b43b8c(long param_1)

{
  func_0x000107c61120(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100b43bb8; end: 100b43bbb;  */

void FUN_100b43bb8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100b43bbc; end: 100b43c4f; -[SCSojuMessage dealloc] */

void FUN_100b43bbc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c611ec(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x000107c611f0(param_1 + 0x20);
  if (lVar2 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        if (*(long *)(lVar2 + uVar3 * 8) != 0) {
          func_0x000107c607f0();
          uVar1 = *(ulong *)(param_1 + 0x10);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    func_0x000107c60fd0(lVar2);
  }
  puStack_38 = PTR_PTR_11270a968;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100b43c50; end: 100b43c5f; -[SCSojuMessage .cxx_destruct] */

void FUN_100b43c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100b43c60; end: 100b43c6b; -[SCSojuMessageBuilder .cxx_destruct] */

void FUN_100b43c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100b43c6c; end: 100b43dcf; -[SCRequestSingleCompletionTask initWithRequest:authenticator:traceFile:networkInterceptors:grapheneRegistry:completionQueue:completionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100b43c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_112705fe8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_initWithRequest_authenticator_tr_112542808,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11278dd28;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    func_0x000107c61170(uVar2);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd2c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd2c) = uVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd30);
    *(undefined **)((long)puVar1 + (long)_DAT_11278dd30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd34);
    *(undefined **)((long)puVar1 + (long)_DAT_11278dd34) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3acd0(puVar1);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 100b43dd0; end: 100b43df3;  */

void FUN_100b43dd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100b43df4; end: 100b43e4b; -[SCRequestTask setUserSessionScopeIdentifier:] */

void FUN_100b43df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)
            (param_1,PTR_s_userSessionScopeIdentifier_112682840,param_3,1);
  return;
}



/* Entry: 100b43e4c; end: 100b43ea7;  */

void FUN_100b43e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce4c8;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  func_0x000107c47f74();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b43ea8; end: 100b43f43; -[SCNavigationItemBadgeProviderScope initWithPlugInRegistry:viewTypeToNavigationItemMap:] */

undefined1 *
FUN_100b43ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f39b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b43f44; end: 100b43f63;  */

void FUN_100b43f44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100b43f64; end: 100b44037; -[SCRequestSingleCompletionTask _addCompletionQueue:completionBlock:] */

/* WARNING: Possible PIC construction at 0x000100b43fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b43ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4401c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b43ffc) */
/* WARNING: Removing unreachable block (ram,0x000100b43fcc) */
/* WARNING: Removing unreachable block (ram,0x000100b43fd0) */
/* WARNING: Removing unreachable block (ram,0x000100b44020) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b43f64(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278dd34);
    func_0x000107c61184(param_4);
    func_0x000107c40404(uVar1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100b44038; end: 100b441cb;  */

void FUN_100b44038(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  func_0x000107c6071c();
  dVar10 = *(double *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c4a8c4(uVar1);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4bbe0(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  lVar3 = *(long *)(*(long *)(param_2 + 0x28) + 0x80);
  func_0x000107c40808(lVar3);
  lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 0x70);
  func_0x000107c5c770(lVar4);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c5d7e8(uVar5);
  func_0x000107c61180();
  uVar1 = uVar5;
  func_0x000107c4e430();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c4d5b4(uVar6);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c5bcac();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c5bcb8();
  func_0x0001005a8a60();
  func_0x000107c61180();
  FUN_1005a8a80(param_1 - dVar10,lVar4 + lVar3,uVar1,uVar9,
                *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x38));
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc8910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x28),PTR_s__addTask__11254fbe0,
             *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x28));
  return;
}



/* Entry: 100b441cc; end: 100b44243; -[SCRequest setUserInitiated:] */

void FUN_100b441cc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  *(char *)(param_2 + 0x18) = (char)param_4;
  if (*(long *)(param_2 + 0x118) != 0) {
    func_0x000107c558c4(*(long *)(param_2 + 0x118),param_3,param_4);
  }
  lVar1 = param_2;
  func_0x000107c51938();
  if (lVar1 == 1) {
    func_0x000107c6071c();
    if ((int)param_4 == 0) {
      *(long *)(param_2 + 0x148) =
           *(long *)(param_2 + 0x148) + (long)((param_1 - *(double *)(param_2 + 0x150)) * 1000.0);
    }
    else {
      *(double *)(param_2 + 0x150) = param_1;
    }
  }
  return;
}



/* Entry: 100b44244; end: 100b4424b; -[SCRequest schedulingState] */

undefined8 FUN_100b44244(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 100b4424c; end: 100b4427b; -[SCRequestTask didInitiateTaskByUser] */

void FUN_100b4424c(undefined8 param_1)

{
  func_0x000107c4bfcc();
  func_0x000107c61180();
  func_0x000107c5c77c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b4427c; end: 100b442af; -[SCRequestTaskLogger taskDidInitiateByUser] */

void FUN_100b4427c(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x18);
  if (dVar1 != 0.0) {
    return;
  }
  func_0x000107c6071c();
  *(double *)(param_1 + 0x18) = dVar1;
  return;
}



/* Entry: 100b442b0; end: 100b442e3;  */

void FUN_100b442b0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 **)(param_1 + 8) = puVar4 + 2;
  return;
}



/* Entry: 100b442e4; end: 100b44363; -[SCSCDeepLinkHandlingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b442e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e6f870,0);
  func_0x000107c61614(param_1 + _DAT_112e6f878,0);
  *(undefined8 *)(param_1 + _DAT_112e6f880) = 0;
  *(undefined8 *)(param_1 + _DAT_112e6f888) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b44364; end: 100b4440f; -[SCSCDeepLinkHandlingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b44364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100b44410(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b44410; end: 100b44613;  */

void FUN_100b44410(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef0f886c0)) ||
       (func_0x000107c605b8(0xd000000000000026,0x800000010f077940,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a3a8();
    }
    else {
      if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0f88690)) {
        uVar2 = 0xd000000000000021;
        func_0x000107c605b8(0xd000000000000021,0x800000010f077970,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "UserNavigationScopeGraphBridge/SCSCDeepLinkHandlingServicesSaberEntryPoint.swift"
                              ,0x50,2,1000,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b44614);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c582ac();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b44614; end: 100b4461f; -[SCSCDeepLinkHandlingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b44614(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f870;
  func_0x000107c61428(param_1 + _DAT_112e6f870,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b44620; end: 100b44673;  */

void FUN_100b44620(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b44674; end: 100b4467f; -[SCSCDeepLinkHandlingServicesSaberEntryPoint setUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b44674(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f878;
  func_0x000107c61428(param_1 + _DAT_112e6f878,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b44680; end: 100b446e3; -[SCSCDeepLinkHandlingServicesSaberEntryPoint setSCDeepLinkHandlingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b44680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f880;
  func_0x000107c61428(param_1 + _DAT_112e6f880,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b446e4; end: 100b4470b; -[SCSCDeepLinkHandlingServicesSaberEntryPoint begin] */

void FUN_100b446e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b4470c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b4470c; end: 100b4488f;  */

/* WARNING: Possible PIC construction at 0x000100b4480c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4481c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b44838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b44810) */
/* WARNING: Removing unreachable block (ram,0x000100b44820) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4470c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5d9f8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50d04();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b44934();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e6e718);
        *(undefined8 *)(lVar2 + _DAT_112e65a08) = uVar6;
        *(long *)(lVar2 + _DAT_112e65a10) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e65a10);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100b44890; end: 100b4489b; -[SCSCDeepLinkHandlingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b44890(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f870;
  func_0x000107c61428(param_1 + _DAT_112e6f870,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b4489c; end: 100b448df;  */

void FUN_100b4489c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b448e0; end: 100b448eb; -[SCSCDeepLinkHandlingServicesSaberEntryPoint userNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b448e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f878;
  func_0x000107c61428(param_1 + _DAT_112e6f878,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b448ec; end: 100b44933; -[SCSCDeepLinkHandlingServicesSaberEntryPoint sCDeepLinkHandlingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b448ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f880;
  func_0x000107c61428(param_1 + _DAT_112e6f880,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b44934; end: 100b44953;  */

void FUN_100b44934(void)

{
  func_0x000107c61168(&PTR_PTR_11282ad68);
  return;
}



/* Entry: 100b44954; end: 100b44967; +[SCNotificationActionHandlerUserNavigationScopedEntryPoint context] */

undefined8 FUN_100b44954(void)

{
  return 2;
}



/* Entry: 100b44968; end: 100b449e3;  */

void FUN_100b44968(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_100688c94();
  *param_1 = *param_2;
  (**(code **)(*(long *)(unaff_x19 + 8) + 0x10))(param_1 + 1,(long *)(unaff_x19 + 8));
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  return;
}



/* Entry: 100b449e4; end: 100b449ef;  */

void FUN_100b449e4(void)

{
  return;
}



/* Entry: 100b449f0; end: 100b44a3b;  */

/* WARNING: Possible PIC construction at 0x000100b44a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b44a20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b44a14) */
/* WARNING: Removing unreachable block (ram,0x000100b44a24) */

void FUN_100b449f0(long param_1)

{
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 100b44a3c; end: 100b44a4b;  */

void FUN_100b44a3c(void)

{
  return;
}



/* Entry: 100b44a4c; end: 100b44acb; -[SCSCTIVServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b44a4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e6f8b8,0);
  func_0x000107c61614(param_1 + _DAT_112e6f8c0,0);
  *(undefined8 *)(param_1 + _DAT_112e6f8c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e6f8d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b44acc; end: 100b44b77; -[SCSCTIVServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b44acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100b44b78(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b44b78; end: 100b44d7b;  */

void FUN_100b44b78(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef0f886c0)) ||
       (func_0x000107c605b8(0xd000000000000026,0x800000010f077940,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a3a8();
    }
    else {
      if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef0f88600)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000014,0x800000010f077a00,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "UserNavigationScopeGraphBridge/SCSCTIVServicesSaberEntryPoint.swift",
                              0x43,2,1000,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b44d7c);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58a38();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b44d7c; end: 100b44d87; -[SCSCTIVServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b44d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f8b8;
  func_0x000107c61428(param_1 + _DAT_112e6f8b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b44d88; end: 100b44ddb;  */

void FUN_100b44d88(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b44ddc; end: 100b44de7; -[SCSCTIVServicesSaberEntryPoint setUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b44ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f8c0;
  func_0x000107c61428(param_1 + _DAT_112e6f8c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b44de8; end: 100b44e4b; -[SCSCTIVServicesSaberEntryPoint setSCTIVServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b44de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f8c8;
  func_0x000107c61428(param_1 + _DAT_112e6f8c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b44e4c; end: 100b44e73; -[SCSCTIVServicesSaberEntryPoint begin] */

void FUN_100b44e4c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b44e74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b44e74; end: 100b44ff7;  */

/* WARNING: Possible PIC construction at 0x000100b44f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b44f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b44fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b44f78) */
/* WARNING: Removing unreachable block (ram,0x000100b44f88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b44e74(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5d9f8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51490();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b4509c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e6edc8);
        *(undefined8 *)(lVar2 + _DAT_112e65a40) = uVar6;
        *(long *)(lVar2 + _DAT_112e65a48) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e65a48);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100b44ff8; end: 100b45003; -[SCSCTIVServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b44ff8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f8b8;
  func_0x000107c61428(param_1 + _DAT_112e6f8b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b45004; end: 100b45047;  */

void FUN_100b45004(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b45048; end: 100b45053; -[SCSCTIVServicesSaberEntryPoint userNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b45048(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f8c0;
  func_0x000107c61428(param_1 + _DAT_112e6f8c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b45054; end: 100b4509b; -[SCSCTIVServicesSaberEntryPoint sCTIVServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b45054(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f8c8;
  func_0x000107c61428(param_1 + _DAT_112e6f8c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4509c; end: 100b450bb;  */

void FUN_100b4509c(void)

{
  func_0x000107c61168(&PTR_PTR_11282ae30);
  return;
}



/* Entry: 100b450bc; end: 100b450c3;  */

void FUN_100b450bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xf8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b450c4; end: 100b45117;  */

void FUN_100b450c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xf8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b45118; end: 100b45183; -[SCCustomStatusBarScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b45118(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4f968,0);
  *(undefined8 *)(param_1 + _DAT_112f4f970) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4f978) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b45184; end: 100b4522f; -[SCCustomStatusBarScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100b45184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100b45230(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b45230; end: 100b453c7;  */

void FUN_100b45230(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0ecd4d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f132b30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CustomStatusBarScopeGraphBridge/SCCustomStatusBarScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b453c8);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53d24();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b453c8; end: 100b4541f; -[SCCustomStatusBarScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b453c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4f968;
  func_0x000107c61428(param_1 + _DAT_112f4f968,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b45420; end: 100b45483; -[SCCustomStatusBarScopeGraphBridgeSaberEntryPoint setCustomStatusBarScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b45420(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4f970;
  func_0x000107c61428(param_1 + _DAT_112f4f970,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b45484; end: 100b454ab; -[SCCustomStatusBarScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100b45484(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b454ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b454ac; end: 100b455df;  */

/* WARNING: Possible PIC construction at 0x000100b45564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b45580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4559c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b45568) */
/* WARNING: Removing unreachable block (ram,0x000100b45584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b454ac(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c410d4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100b45670();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100b45690();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b455e0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f4f898) = lVar5;
    *(long *)(lVar4 + _DAT_112f4f8a0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100b455e0; end: 100b45627; -[SCCustomStatusBarScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b455e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4f968;
  func_0x000107c61428(param_1 + _DAT_112f4f968,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b45628; end: 100b4566f; -[SCCustomStatusBarScopeGraphBridgeSaberEntryPoint customStatusBarScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b45628(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4f970;
  func_0x000107c61428(param_1 + _DAT_112f4f970,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b45670; end: 100b4568f;  */

void FUN_100b45670(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4120);
  return;
}



/* Entry: 100b45690; end: 100b4575f;  */

undefined8 FUN_100b45690(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f4f908,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10058f2c4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100b45760; end: 100b457bf; -[SCSCCustomStatusBarScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b45760(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4f9a8,0);
  *(undefined8 *)(param_1 + _DAT_112f4f9b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b457c0; end: 100b4598b; -[SCSCCustomStatusBarScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b457c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  func_0x000100b4586c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b4598c; end: 100b459e3; -[SCSCCustomStatusBarScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4598c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4f9a8;
  func_0x000107c61428(param_1 + _DAT_112f4f9a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b459e4; end: 100b45a0b; -[SCSCCustomStatusBarScopedServicesSaberEntryPoint begin] */

void FUN_100b459e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b45a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b45a0c; end: 100b45ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b45a0c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_100b45b2c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f4f8d0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    FUN_100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b45ae4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f4f8d8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f4f9b0);
    *(long **)(unaff_x20 + _DAT_112f4f9b0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 100b45ae4; end: 100b45b2b; -[SCSCCustomStatusBarScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b45ae4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4f9a8;
  func_0x000107c61428(param_1 + _DAT_112f4f9a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b45b2c; end: 100b45b4b;  */

void FUN_100b45b2c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c41e8);
  return;
}



/* Entry: 100b45b4c; end: 100b45bd7; -[SCScopeLifecycleSubLifecycles add:] */

/* WARNING: Possible PIC construction at 0x000100b45b9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b45ba0) */

void FUN_100b45b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x000107c3d798(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
  func_0x000107c611a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b45bd8; end: 100b45c2b;  */

void FUN_100b45bd8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x000107c40aa4(uVar1);
  func_0x000107c61180();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100b45c2c; end: 100b45c9f; -[SCSCDeferredDeepLinkStorageServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b45c2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305c7d0,0);
  func_0x000107c61614(param_1 + _DAT_11305c7d8,0);
  *(undefined8 *)(param_1 + _DAT_11305c7e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b45ca0; end: 100b45d4b; -[SCSCDeferredDeepLinkStorageServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b45ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100b45d4c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b45d4c; end: 100b45ee3;  */

void FUN_100b45d4c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e14a60)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f1eb5a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ShuSystemScopeGraphBridge/SCSCDeferredDeepLinkStorageServicesSaberServiceProvider.swift"
                            ,0x57,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b45ee4);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59290();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b45ee4; end: 100b45eef; -[SCSCDeferredDeepLinkStorageServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b45ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c7d0;
  func_0x000107c61428(param_1 + _DAT_11305c7d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b45ef0; end: 100b45f43;  */

void FUN_100b45ef0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b45f44; end: 100b45f4f; -[SCSCDeferredDeepLinkStorageServicesSaberServiceProvider setShuSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b45f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c7d8;
  func_0x000107c61428(param_1 + _DAT_11305c7d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b45f50; end: 100b45fcf; -[SCScopeLifecycle _addServiceProvider:] */

/* WARNING: Possible PIC construction at 0x000100b45f8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b45f90) */

void FUN_100b45f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c611a4(param_1);
  func_0x000107c3d844(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100b45fd0; end: 100b46053; -[SCScopeLifecycleEntryPoints addServiceProvider:] */

/* WARNING: Possible PIC construction at 0x000100b4602c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b46030) */

void FUN_100b45fd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x000107c40404(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x000107c3d798(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
  }
  func_0x000107c611a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b46054; end: 100b460f3;  */

void FUN_100b46054(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c5e3f0(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c52004(*(undefined8 *)(param_1 + 0x28));
  uVar1 = param_2;
  func_0x000107c3ac70(param_2);
  func_0x000107c61180();
  func_0x000107c52000(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c41de4(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b460f4; end: 100b46103; -[SCScopeLifecycleBeginScheduler willUnwrapServiceProvider] */

void FUN_100b460f4(long param_1)

{
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return;
}



/* Entry: 100b46104; end: 100b46187; -[SCMutliplexingScopeLifecycleMonitor serviceProviderProviding:] */

void FUN_100b46104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100b46188;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3b75c(param_1,param_2,&puStack_48);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100b46188; end: 100b46193;  */

void FUN_100b46188(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15f870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_serviceProviderProviding__112635838,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100b46194; end: 100b4620f; -[SCStartupScopeLifecycleMonitor serviceProviderProviding:] */

/* WARNING: Possible PIC construction at 0x000100b461f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b461f8) */

void FUN_100b46194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c61174(param_3);
    func_0x000107c6071c();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d954(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c56bcc(uVar2,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 100b46210; end: 100b46213; -[SCNoOpScopeLifecycleMonitor serviceProviderProviding:] */

void FUN_100b46210(void)

{
  return;
}



/* Entry: 100b46214; end: 100b462f7; -[SCServiceProvider __provide] */

void FUN_100b46214(ulong param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  puVar1 = &UNK_10f7277c0;
  func_0x000107c612e8(&UNK_10f7277c0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10b0ad02c;
  puStack_40 = &UNK_11087bb90;
  ppuVar2 = &puStack_58;
  uStack_38 = param_1;
  FUN_1001071d4(ppuVar2);
  uVar3 = param_1;
  func_0x000107c61164(param_1,puVar1);
  if ((uVar3 & 1) == 0) {
    func_0x000107c4f570(param_1);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61150(param_1,puVar1);
    func_0x000107c61180();
  }
  func_0x0001000e2a84(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100b462f8; end: 100b4632b; -[SCSCDeferredDeepLinkStorageServicesSaberServiceProvider __safeProvide] */

void FUN_100b462f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b4632c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b4632c; end: 100b46413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4632c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5af34();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b46470();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_11305c5b0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11305c7e0);
      *(long *)(unaff_x20 + _DAT_11305c7e0) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b46414; end: 100b4641f; -[SCSCDeferredDeepLinkStorageServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b46414(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c7d0;
  func_0x000107c61428(param_1 + _DAT_11305c7d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b46420; end: 100b46463;  */

void FUN_100b46420(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b46464; end: 100b4646f; -[SCSCDeferredDeepLinkStorageServicesSaberServiceProvider shuSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b46464(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c7d8;
  func_0x000107c61428(param_1 + _DAT_11305c7d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b46470; end: 100b464eb;  */

void FUN_100b46470(undefined8 param_1)

{
  if (lRam000000011305c418 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7ecfd8);
  return;
}



/* Entry: 100b464ec; end: 100b464f3;  */

void FUN_100b464ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b464f4; end: 100b46547;  */

void FUN_100b464f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}


