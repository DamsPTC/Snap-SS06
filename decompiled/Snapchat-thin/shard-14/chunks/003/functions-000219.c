/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0f9a64; end: 10b0f9a77;  */

void FUN_10b0f9a64(void)

{
  FUN_10b0f9ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0f9a78; end: 10b0f9ac7;  */

void FUN_10b0f9a78(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_10b0f9b8c();
    } while (extraout_w10 != 0);
  }
  FUN_10b0f9754(param_1 + 8);
  func_0x00010b0f9bb0();
  return;
}



/* Entry: 10b0f9ac8; end: 10b0f9b8b;  */

undefined8 * FUN_10b0f9ac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba370;
  func_0x00010b0f9af4(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f9b8c; end: 10b0f9c6b;  */

void FUN_10b0f9b8c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b0f9c6c; end: 10b0f9ce3; -[SCNContentManagerContentResolutionSignalCollector initWithCpp:] */

undefined1 * FUN_10b0f9c6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705ce8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b0fa104();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010b0f9b44(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0f9ce4; end: 10b0f9dc7; -[SCNContentManagerContentResolutionSignalCollector addVariantSelectionSignals:params:] */

void FUN_10b0f9ce4(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_288 [552];
  undefined1 auStack_60 [32];
  
  func_0x00010b0fa11c();
  _objc_retain();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010b0fa15c(auStack_60);
  FUN_10b10933c(auStack_288);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_60,auStack_288);
  func_0x0001052b5d04(auStack_288);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  func_0x00010b0fa130();
  func_0x00010b0fa114();
  return;
}



/* Entry: 10b0f9dc8; end: 10b0f9e77; -[SCNContentManagerContentResolutionSignalCollector addPlaylistSignal:operation:] */

void FUN_10b0f9dc8(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_50 [32];
  
  func_0x00010b0fa11c();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010b0fa15c(auStack_50);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  func_0x00010b0fa114();
  return;
}



/* Entry: 10b0f9e78; end: 10b0f9f53; -[SCNContentManagerContentResolutionSignalCollector addPlayerSignal:operation:playerInfo:] */

void FUN_10b0f9e78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_78 [40];
  undefined1 auStack_50 [32];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0fa15c(auStack_50);
  FUN_10b0ff250(auStack_78,param_5);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_50,param_4,auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  func_0x00010b0fa130();
  func_0x00010b0fa114();
  return;
}



/* Entry: 10b0f9f54; end: 10b0f9f7f;  */

void FUN_10b0f9f54(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b0fa018();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f9f80; end: 10b0f9fd3; -[SCNContentManagerContentResolutionSignalCollector .cxx_destruct] */

void FUN_10b0f9f80(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba3b0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b0f9b44((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0f9fd4; end: 10b0fa017; -[SCNContentManagerContentResolutionSignalCollector .cxx_construct] */

undefined8 * FUN_10b0f9fd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b0fa104();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0fa018; end: 10b0fa08f;  */

void FUN_10b0fa018(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cba3b0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b0fa104();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b0fa090);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fa150();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fa090; end: 10b0fa103;  */

void FUN_10b0fa090(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfb60;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b0fa104();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010b0f9b44(&uStack_30);
  return;
}



/* Entry: 10b0fa104; end: 10b0fa163;  */

void FUN_10b0fa104(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b0fa164; end: 10b0fa1db; -[SCNContentManagerContentResultCppProxy initWithCpp:] */

undefined1 * FUN_10b0fa164(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705cf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b0fb90c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010b0f7f30(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0fa1dc; end: 10b0fa257; -[SCNContentManagerContentResultCppProxy getContentKey] */

void FUN_10b0fa1dc(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010b0fb8b0();
  func_0x00010b0fb944();
  FUN_10b0f57d4(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fb900();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fa258; end: 10b0fa2a7; -[SCNContentManagerContentResultCppProxy getStatus] */

long FUN_10b0fa258(int param_1)

{
  long extraout_x8;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0x18))();
  return (long)param_1;
}



/* Entry: 10b0fa2a8; end: 10b0fa33f; -[SCNContentManagerContentResultCppProxy getMetrics] */

void FUN_10b0fa2a8(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_318 [744];
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0x20))(auStack_318);
  puVar1 = auStack_318;
  FUN_10b0fba20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0faf64(auStack_318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fa340; end: 10b0fa38b; -[SCNContentManagerContentResultCppProxy getTotalSize] */

void FUN_10b0fa340(void)

{
  long extraout_x8;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0x28))();
  return;
}



/* Entry: 10b0fa38c; end: 10b0fa3d7; -[SCNContentManagerContentResultCppProxy getPrefetchSize] */

void FUN_10b0fa38c(void)

{
  long extraout_x8;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0x30))();
  return;
}



/* Entry: 10b0fa3d8; end: 10b0fa423; -[SCNContentManagerContentResultCppProxy getAvailableSize] */

void FUN_10b0fa3d8(void)

{
  long extraout_x8;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0x38))();
  return;
}



/* Entry: 10b0fa424; end: 10b0fa49b; -[SCNContentManagerContentResultCppProxy createReadStream] */

void FUN_10b0fa424(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b0fb8b0();
  func_0x00010b0fb944();
  FUN_10b101cc0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fb8d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fa49c; end: 10b0fa523; -[SCNContentManagerContentResultCppProxy retrieveIfSingleFile] */

void FUN_10b0fa49c(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_38 [24];
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0x48))(auStack_38);
  puVar1 = auStack_38;
  func_0x000107c281d0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f18(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fa524; end: 10b0fa613; -[SCNContentManagerContentResultCppProxy pushBytesToWriteStream:start:count:] */

void FUN_10b0fa524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  FUN_10b104d24(auStack_50,param_3);
  (**(code **)(*plVar2 + 0x50))(auStack_40,plVar2,auStack_50,param_4,param_5);
  FUN_10b0fb81c(auStack_50);
  puVar1 = auStack_40;
  FUN_10b49b48c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010539eeb0(auStack_40);
  func_0x00010b0fb8d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fa614; end: 10b0fa65f; -[SCNContentManagerContentResultCppProxy getIsStreaming] */

void FUN_10b0fa614(void)

{
  long extraout_x8;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0x58))();
  return;
}



/* Entry: 10b0fa660; end: 10b0fa6ff; -[SCNContentManagerContentResultCppProxy updateStreamingRequestContext:] */

void FUN_10b0fa660(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_a8 [120];
  
  FUN_10b0fb874();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_10b49b094(auStack_a8);
  (**(code **)(*plVar1 + 0x60))(plVar1,auStack_a8);
  func_0x00010529fe04(auStack_a8);
  func_0x00010b0fb8d0();
  return;
}



/* Entry: 10b0fa700; end: 10b0fa79b; -[SCNContentManagerContentResultCppProxy getCurrentStreamingRequestContext] */

void FUN_10b0fa700(void)

{
  undefined1 *puVar1;
  undefined1 auStack_a0 [120];
  char cStack_28;
  
  puVar1 = auStack_a0;
  func_0x00010b0fb8b0();
  func_0x00010b0fb944();
  if (cStack_28 == '\x01') {
    FUN_10b49b1ec(auStack_a0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_10b0faf98(auStack_a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fa79c; end: 10b0fa7e7; -[SCNContentManagerContentResultCppProxy free] */

void FUN_10b0fa79c(void)

{
  long extraout_x8;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0x70))();
  return;
}



/* Entry: 10b0fa7e8; end: 10b0fa833; -[SCNContentManagerContentResultCppProxy getIsZipArchive] */

void FUN_10b0fa7e8(void)

{
  long extraout_x8;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0x78))();
  return;
}



/* Entry: 10b0fa834; end: 10b0fa8eb; -[SCNContentManagerContentResultCppProxy getZipEntryData:] */

void FUN_10b0fa834(void)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [16];
  
  FUN_10b0fb874();
  func_0x00010b0fba00();
  func_0x00010b0fb9b8();
  func_0x00010b0fb9a8();
  puVar1 = auStack_40;
  FUN_10b101cc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0f7ec4(auStack_40);
  func_0x00010b0fb8d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fa8ec; end: 10b0fa963; -[SCNContentManagerContentResultCppProxy getZipArchiveForLocalContent] */

void FUN_10b0fa8ec(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b0fb8b0();
  func_0x00010b0fb944();
  FUN_10b101cc0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fb8d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fa964; end: 10b0faa1b; -[SCNContentManagerContentResultCppProxy getZipEntryFilePath:] */

void FUN_10b0fa964(void)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [32];
  
  FUN_10b0fb874();
  func_0x00010b0fba00();
  func_0x00010b0fb9b8();
  func_0x00010b0fb9a8();
  puVar1 = auStack_50;
  func_0x000107c27f68(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c279a4(auStack_50);
  func_0x00010b0fb8d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0faa1c; end: 10b0faa93; -[SCNContentManagerContentResultCppProxy getFilePath] */

void FUN_10b0faa1c(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010b0fb8b0();
  func_0x00010b0fb944();
  func_0x000107c27f68(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fb8e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0faa94; end: 10b0fab33; -[SCNContentManagerContentResultCppProxy addDownloadCompletionListener:] */

void FUN_10b0faa94(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  FUN_10b0fb874();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_10b104510(auStack_40);
  (**(code **)(*plVar1 + 0xa0))(plVar1,auStack_40);
  func_0x0001052a6df8(auStack_40);
  func_0x00010b0fb8d0();
  return;
}



/* Entry: 10b0fab34; end: 10b0fab7f; -[SCNContentManagerContentResultCppProxy getIsAuthoritative] */

void FUN_10b0fab34(void)

{
  long extraout_x8;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0xa8))();
  return;
}



/* Entry: 10b0fab80; end: 10b0fabcb; -[SCNContentManagerContentResultCppProxy hasEncryptionData] */

void FUN_10b0fab80(void)

{
  long extraout_x8;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0xb0))();
  return;
}



/* Entry: 10b0fabcc; end: 10b0fac5f; -[SCNContentManagerContentResultCppProxy stitchFilePath] */

void FUN_10b0fabcc(void)

{
  long extraout_x8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0xb8))(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b0f0c4c(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fb900();
  func_0x0001052a4f84();
  func_0x00010b0fb9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fac60; end: 10b0faccb; -[SCNContentManagerContentResultCppProxy streamingProtocol] */

void FUN_10b0fac60(undefined8 param_1)

{
  long extraout_x8;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0xc0))();
  uStack_28 = (undefined4)param_1;
  uStack_24 = (undefined1)((ulong)param_1 >> 0x20);
  FUN_10b0faccc(&uStack_28);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0faccc; end: 10b0facff;  */

void FUN_10b0faccc(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_10b0fb844(*param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fad00; end: 10b0fad77; -[SCNContentManagerContentResultCppProxy resolvedUrl] */

void FUN_10b0fad00(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010b0fb8b0();
  func_0x00010b0fb944();
  func_0x000107c27f68(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fb8e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fad78; end: 10b0fadc7; -[SCNContentManagerContentResultCppProxy isEncrypted] */

long FUN_10b0fad78(int param_1)

{
  long extraout_x8;
  
  func_0x00010b0fb8b0();
  (**(code **)(extraout_x8 + 0xd0))();
  return (long)param_1;
}



/* Entry: 10b0fadc8; end: 10b0fae5f; -[SCNContentManagerContentResultCppProxy logConsumed:bytesRange:] */

void FUN_10b0fadc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b0effc0(auStack_48,param_4);
  (**(code **)(*plVar1 + 0xd8))(plVar1,param_3,auStack_48);
  func_0x00010b0fb8d0();
  return;
}



/* Entry: 10b0fae60; end: 10b0faecf;  */

void FUN_10b0fae60(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110cba418,&PTR_DAT_110cba3c0,0);
    if (lVar1 == 0) {
      FUN_10b0fb73c(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0faed0; end: 10b0faf23; -[SCNContentManagerContentResultCppProxy .cxx_destruct] */

void FUN_10b0faed0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba408;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b0f7f30((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0faf24; end: 10b0faf97; -[SCNContentManagerContentResultCppProxy .cxx_construct] */

undefined8 * FUN_10b0faf24(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b0fb90c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0faf98; end: 10b0fafd3;  */

void FUN_10b0faf98(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x00010529fe04();
  }
  return;
}



/* Entry: 10b0fafd4; end: 10b0fb06f;  */

void FUN_10b0fafd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[7] = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_2 + 0xe) == '\x01') {
    uVar2 = param_2[0xc];
    uVar1 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xb] = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return;
}



/* Entry: 10b0fb070; end: 10b0fb0df;  */

void FUN_10b0fb070(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar2;
  param_1[1] = lVar3;
  func_0x00010b0fb934();
  return;
}



/* Entry: 10b0fb0e0; end: 10b0fb11f;  */

void FUN_10b0fb0e0(long param_1)

{
  int extraout_w10;
  long unaff_x19;
  
  func_0x00010b0fb9c8();
  func_0x00010b0fb138(param_1 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    do {
      func_0x00010b0fb90c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b0fb120; end: 10b0fb123;  */

void FUN_10b0fb120(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x00010b0fb9c8();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b0fb3dc();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052a4f84(unaff_x19 + 0x18);
  func_0x0001052a4f84((long *)(param_1 + 8));
  return;
}



/* Entry: 10b0fb124; end: 10b0fb153;  */

void FUN_10b0fb124(void)

{
  FUN_10b0fb370();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0fb154; end: 10b0fb157;  */

void FUN_10b0fb154(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x00010b0fb9c8();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b0fb3dc();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052a4f84(unaff_x19 + 0x18);
  func_0x0001052a4f84((long *)(param_1 + 8));
  return;
}



/* Entry: 10b0fb158; end: 10b0fb16b;  */

void FUN_10b0fb158(void)

{
  FUN_10b0fb370();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0fb16c; end: 10b0fb23b;  */

undefined1 * FUN_10b0fb16c(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_10b0fb23c(auStack_40);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110cba4a0;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xd] = 0x3cb0b1bb;
  puStack_30[0xf] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x13] = 0x32aaaba7;
  puStack_30[0x15] = 0;
  puStack_30[0x14] = 0;
  puStack_30[0x17] = 0;
  puStack_30[0x16] = 0;
  puStack_30[0x19] = 0;
  puStack_30[0x18] = 0;
  puStack_30[0x1b] = 0;
  puStack_30[0x1a] = 0;
  puStack_30[0x1c] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_10b0fb360();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_10b0fb264();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10b0fb23c; end: 10b0fb263;  */

long FUN_10b0fb23c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b0fb264();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b0fb264; end: 10b0fb293;  */

void FUN_10b0fb264(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cba4a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0fb294; end: 10b0fb297;  */

void FUN_10b0fb294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba4a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0fb298; end: 10b0fb2ab;  */

void FUN_10b0fb298(void)

{
  func_0x00010b0fb2b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0fb2ac; end: 10b0fb2cb;  */

void FUN_10b0fb2ac(long param_1)

{
  func_0x00010b0fb30c(param_1 + 0xe0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xd8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x68);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x0001052a51d4();
  }
  return;
}



/* Entry: 10b0fb2cc; end: 10b0fb33f;  */

void FUN_10b0fb2cc(long param_1)

{
  func_0x00010b0fb30c(param_1 + 200);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xc0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x80);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x50);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001052a51d4();
  }
  return;
}



/* Entry: 10b0fb340; end: 10b0fb35f;  */

void FUN_10b0fb340(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001052a51d4();
  }
  return;
}



/* Entry: 10b0fb360; end: 10b0fb36f;  */

void FUN_10b0fb360(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b0fb370; end: 10b0fb3db;  */

void FUN_10b0fb370(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x00010b0fb9c8();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b0fb3dc();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052a4f84(unaff_x19 + 0x18);
  func_0x0001052a4f84((long *)(param_1 + 8));
  return;
}



/* Entry: 10b0fb3dc; end: 10b0fb447;  */

void FUN_10b0fb3dc(undefined8 param_1)

{
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  ppuStack_30 = &PTR_DAT_1107e6938;
  func_0x000104bdfe3c(auStack_28,&ppuStack_30);
  FUN_10b0fb448(param_1,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt9exceptionD2Ev(&ppuStack_30);
  return;
}



/* Entry: 10b0fb448; end: 10b0fb467;  */

void FUN_10b0fb448(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b0fb468(param_1,&uStack_18);
  return;
}



/* Entry: 10b0fb468; end: 10b0fb4ff;  */

void FUN_10b0fb468(undefined8 param_1,long *param_2)

{
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x00010b0fb988();
  func_0x00010b0fba14();
  func_0x00010b0fb9a0();
  func_0x00010b0fb934();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x80);
  FUN_10b0fb500(param_2,alStack_30);
  func_0x00010b0fb96c();
  if (param_2 == (long *)0x0) {
    func_0x00010b0fb9e8();
  }
  else {
    func_0x00010b0fb9f4(*(undefined8 *)(*param_2 + 0x10));
    func_0x00010b0fb8f0();
  }
  func_0x00010b0fb9b0();
  return;
}



/* Entry: 10b0fb500; end: 10b0fb513;  */

void FUN_10b0fb500(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0xc0,*param_1);
  return;
}



/* Entry: 10b0fb514; end: 10b0fb5cb;  */

void FUN_10b0fb514(undefined8 param_1,long *param_2)

{
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x00010b0fb988();
  func_0x00010b0fba14();
  func_0x00010b0fb9a0();
  func_0x00010b0fb934();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x80);
  FUN_10b0fb5cc(param_2,alStack_30);
  func_0x00010b0fb96c();
  if (param_2 == (long *)0x0) {
    func_0x00010b0fb9e8();
  }
  else {
    func_0x00010b0fb9f4(*(undefined8 *)(*param_2 + 0x10));
    func_0x00010b0fb8f0();
  }
  func_0x00010b0fb9b0();
  return;
}



/* Entry: 10b0fb5cc; end: 10b0fb5db;  */

long FUN_10b0fb5cc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x48) == '\x01') {
    FUN_10b0fb62c();
  }
  else {
    FUN_10b0fb610(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 10b0fb5dc; end: 10b0fb60f;  */

long FUN_10b0fb5dc(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_10b0fb62c();
  }
  else {
    FUN_10b0fb610();
  }
  return param_1;
}



/* Entry: 10b0fb610; end: 10b0fb62b;  */

void FUN_10b0fb610(long param_1)

{
  func_0x0001052a5170();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 10b0fb62c; end: 10b0fb687;  */

void FUN_10b0fb62c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((*(byte *)(param_1 + 8) & 1) == 0) && ((*(byte *)(param_2 + 8) & 1) != 0)) {
    func_0x0001052a03ac();
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    FUN_10b0fb688(param_1,param_2);
  }
  return;
}



/* Entry: 10b0fb688; end: 10b0fb6eb;  */

/* WARNING: Possible PIC construction at 0x00010563bf54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010563bf58) */
/* WARNING: Removing unreachable block (ram,0x00010563bfe8) */

void FUN_10b0fb688(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(byte *)(param_2 + 8) == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001052a0844();
      *(undefined1 *)(param_1 + 8) = 0;
      return;
    }
  }
  else {
    if ((*(byte *)(param_2 + 8) & 1) != 0) {
      return;
    }
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &UNK_10563bf58;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
  }
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 10b0fb6ec; end: 10b0fb703;  */

void FUN_10b0fb6ec(void)

{
  FUN_10b0fb704();
  return;
}



/* Entry: 10b0fb704; end: 10b0fb73b;  */

void FUN_10b0fb704(long param_1)

{
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b0fb73c; end: 10b0fb7af;  */

void FUN_10b0fb73c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cba408;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010b0fb90c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b0fb7b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fb900();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fb7b0; end: 10b0fb81b;  */

void FUN_10b0fb7b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfb68;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b0fb90c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010b0f7f30(&uStack_30);
  return;
}



/* Entry: 10b0fb81c; end: 10b0fb843;  */

long FUN_10b0fb81c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b0fb844; end: 10b0fb873;  */

void FUN_10b0fb844(int param_1,undefined8 param_2)

{
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fb874; end: 10b0fba1f;  */

void FUN_10b0fb874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b0fba20; end: 10b0fbb7f;  */

void FUN_10b0fba20(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126dfb18;
  _objc_alloc(PTR_PTR_1126dfb18);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar6 = param_1;
    FUN_10b0ff218(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar6 = 0;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar7 = param_1 + 0x28;
    FUN_10b0f3094(lVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar7 = 0;
  }
  lVar3 = param_1 + 0x40;
  func_0x00010539dccc(lVar3);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = *(int *)(param_1 + 0x270);
  lVar4 = param_1 + 0x278;
  func_0x00010563299c(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x2c0;
  func_0x000107c27f68(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02f3a0(puVar2,param_2,lVar6,lVar7,lVar3,(long)iVar1,lVar4,lVar5,
                      *(undefined1 *)(param_1 + 0x2e0));
  func_0x00010b0fbc60();
  func_0x00010b0fbc58();
  func_0x00010b0fbc48();
  func_0x00010b0fbc40();
  func_0x00010b0fbc50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0fbb80; end: 10b0fbc3f;  */

undefined8 *
FUN_10b0fbb80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 *param_7,undefined1 param_8,
             undefined4 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[7] = param_3[2];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  func_0x00010539dcfc(param_1 + 8,param_4);
  *(undefined4 *)(param_1 + 0x4e) = param_5;
  func_0x0001052a07e8(param_1 + 0x4f,param_6);
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  if (*(char *)(param_7 + 3) == '\x01') {
    uVar2 = param_7[1];
    uVar1 = *param_7;
    param_1[0x5a] = param_7[2];
    param_1[0x59] = uVar2;
    param_1[0x58] = uVar1;
    param_7[1] = 0;
    param_7[2] = 0;
    *param_7 = 0;
    *(undefined1 *)(param_1 + 0x5b) = 1;
  }
  *(undefined1 *)(param_1 + 0x5c) = param_8;
  *(undefined4 *)((long)param_1 + 0x2e4) = param_9;
  return param_1;
}



/* Entry: 10b0fbc40; end: 10b0fbc6b;  */

void FUN_10b0fbc40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0fbc6c; end: 10b0fbd6f;  */

void FUN_10b0fbc6c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cba538;
    lStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&lStack_50,FUN_10b0fbd70);
    uVar1 = uStack_38;
    uVar3 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(lStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar3;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b0fbff4(&uStack_60);
    _objc_release(param_2);
    return;
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x00010527a174();
  ___cxa_throw(uVar3,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b0fbd3c);
  (*pcVar2)();
}



/* Entry: 10b0fbd70; end: 10b0fbe6f;  */

void FUN_10b0fbd70(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cba578;
  puVar4[3] = &PTR_DAT_110cba5f0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110cba5c8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b0fbff4(&uStack_50);
  return;
}



/* Entry: 10b0fbe70; end: 10b0fbe73;  */

void FUN_10b0fbe70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0fbe74; end: 10b0fbe87;  */

void FUN_10b0fbe74(void)

{
  FUN_10b0fbfe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0fbe88; end: 10b0fbe93;  */

long FUN_10b0fbe88(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cba538;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b0fc02c();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b0fbe94; end: 10b0fbed3;  */

void FUN_10b0fbe94(void)

{
  FUN_10b0fc020();
  return;
}



/* Entry: 10b0fbed4; end: 10b0fbf53;  */

void FUN_10b0fbed4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (*(char *)(param_2 + 0x2e8) == '\x01') {
    FUN_10b0fba20(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf43720(uVar2);
  func_0x00010b0fc02c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b0fbf54; end: 10b0fbfe3;  */

long FUN_10b0fbf54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cba538;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b0fc02c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b0fbfe4; end: 10b0fbff3;  */

void FUN_10b0fbfe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0fbff4; end: 10b0fc01f;  */

long FUN_10b0fbff4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b0fc020; end: 10b0fc033;  */

long FUN_10b0fc020(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cba538;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b0fc02c();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b0fc034; end: 10b0fc0ab; -[SCNContentManagerContentStreamer initWithCpp:] */

undefined1 * FUN_10b0fc034(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705cf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b0fc4ac();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052aad48(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0fc0ac; end: 10b0fc1bf; -[SCNContentManagerContentStreamer streamByteRange:streamerCallback:] */

void FUN_10b0fc0ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b101880();
  uStack_50 = param_3;
  uStack_48 = param_2;
  FUN_10b103118(auStack_60,param_4);
  (**(code **)(*plVar1 + 0x10))(auStack_40,plVar1,&uStack_50,auStack_60);
  func_0x0001052aacf8(auStack_60);
  FUN_10b1037fc(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fc4d0();
  _objc_release(param_4);
  func_0x00010b0fc4bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b0fc1c0; end: 10b0fc247; -[SCNContentManagerContentStreamer getMetadataIfAvailable] */

void FUN_10b0fc1c0(long param_1,uint param_2)

{
  long *plVar1;
  long *plStack_30;
  undefined1 uStack_28;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x18))();
  uStack_28 = (undefined1)param_2;
  plStack_30 = plVar1;
  if ((param_2 & 1) != 0) {
    FUN_10b1039d4(&plStack_30);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fc248; end: 10b0fc303; -[SCNContentManagerContentStreamer setRequestContext:] */

void FUN_10b0fc248(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_a8 [120];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b49b094(auStack_a8,param_3);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_a8);
  func_0x00010529fe04(auStack_a8);
  func_0x00010b0fc4bc();
  return;
}



/* Entry: 10b0fc304; end: 10b0fc32f;  */

void FUN_10b0fc304(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b0fc3c8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fc330; end: 10b0fc383; -[SCNContentManagerContentStreamer .cxx_destruct] */

void FUN_10b0fc330(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba608;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052aad48((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}


