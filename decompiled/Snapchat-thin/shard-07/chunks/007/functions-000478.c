/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058ff9c4; end: 1058ff9ef;  */

void FUN_1058ff9c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bff50;
  _objc_alloc_init();
  uVar1 = puRam00000001136c1588;
  puRam00000001136c1588 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058ff9f0; end: 1058ffa53; -[SCNeoPlayerLogCollector init] */

undefined1 * FUN_1058ff9f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ead70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bff58;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1058ffa54; end: 1058ffb23; -[SCNeoPlayerLogCollector logChunkLoaded:latency:playerType:viewSource:] */

void FUN_1058ffa54(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bdd5980(param_2);
  func_0x00010c0df820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010b29a348(*(undefined8 *)(param_2 + 8),puVar2,param_5,param_6,(long)(param_1 * 1000.0));
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1058ffb24; end: 1058ffb63; -[SCNeoPlayerLogCollector _bufferGridAlignedChunkSizeKiB:] */

int FUN_1058ffb24(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126bff60;
  func_0x00010bf68fe0();
  uVar3 = (uint)puVar4;
  uVar1 = param_3 + (uVar3 >> 1);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar1 / uVar3;
  }
  if (uVar1 < uVar3) {
    uVar2 = 1;
  }
  return uVar2 * (uVar3 >> 10);
}



/* Entry: 1058ffb64; end: 1058ffb6f; -[SCNeoPlayerLogCollector .cxx_destruct] */

void FUN_1058ffb64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058ffb70; end: 1058ffbaf;  */

void FUN_1058ffb70(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be3b940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058ffbb0; end: 1058ffbeb; -[SCPlaybackMediaPrefetchServiceEntryPoint end] */

void FUN_1058ffbb0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ead78;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058ffbec; end: 1058ffd57; -[SCPlaybackMediaPrefetchServiceEntryPoint _initializePrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058ffbec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11272bffc;
    _objc_loadWeakRetained(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010bf398e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puVar2 = PTR_PTR_1126bff70;
  _objc_alloc(PTR_PTR_1126bff70);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11272bff4;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010c08f120(lVar7);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11272bff8;
    _objc_loadWeakRetained(lVar8);
  }
  lVar4 = lVar8;
  func_0x00010c0ffb20(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_11272c000;
    _objc_loadWeakRetained(lVar5);
  }
  lVar6 = lVar5;
  func_0x00010c0b83c0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e7a0(puVar2,param_2,lVar3,lVar1,lVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058ffd58; end: 1058ffdc3; -[SCPlaybackMediaPrefetchServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058ffd58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272bfec,0);
  _objc_destroyWeak(param_1 + _DAT_11272c000);
  _objc_destroyWeak(param_1 + _DAT_11272bffc);
  _objc_destroyWeak(param_1 + _DAT_11272bff8);
  _objc_destroyWeak(param_1 + _DAT_11272bff4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272bff0);
  return;
}



/* Entry: 1058ffdc4; end: 1058ffecf; -[SCPlaybackMediaPrefetcher initWithStreamingMediaFetcher:circumstanceEngine:playbackResolver:manifestRewriter:] */

undefined1 *
FUN_1058ffdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ead80;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bff78;
    _objc_alloc();
    uVar3 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0294a0();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058ffed0; end: 1059000df; -[SCPlaybackMediaPrefetcher submitRequest:completion:] */

void FUN_1058ffed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b7fc0;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1058fffb8;
  puStack_50 = &UNK_1108bf0f8;
  uStack_48 = param_1;
  uStack_38 = param_4;
  _objc_retain();
  puStack_40 = puVar2;
  _objc_retain(param_4);
  func_0x00010c0be860(param_3,param_2,&puStack_68,&PTR___NSConcreteGlobalBlock_1108bf148);
  _objc_release(param_3);
  puVar1 = puStack_40;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059000e0; end: 1059000e3;  */

void FUN_1059000e0(void)

{
  return;
}



/* Entry: 1059000e4; end: 10590014b; -[SCPlaybackMediaPrefetcher cancelRequest:completion:] */

void FUN_1059000e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10590014c;
  puStack_20 = &UNK_1108450c8;
  uStack_18 = param_1;
  func_0x00010c0bce40(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_1108bf188,
                      &PTR___NSConcreteGlobalBlock_1108bf1a8);
  return;
}



/* Entry: 10590014c; end: 105900163;  */

void FUN_10590014c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_cancelPrefetchForMediaKey__1125a9438,param_2);
  return;
}



/* Entry: 105900164; end: 10590031b; -[SCPlaybackMediaPrefetcher getPrefetchStateForMediaKey:completion:] */

void FUN_105900164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1059001fc;
  puStack_40 = &UNK_110852668;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c108360(uVar1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10590031c; end: 105900327; -[SCPlaybackMediaPrefetcher .cxx_destruct] */

void FUN_10590031c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105900328; end: 1059003db; -[SCStreamingMediaFetcher initWithRequestHandler:extraInfoProvider:streamingDelegate:] */

undefined1 *
FUN_105900328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ead88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059003dc; end: 1059005eb; -[SCStreamingMediaFetcher fetchMediaDataForRequestInfo:byteRangeValue:completionQueue:completion:] */

void FUN_1059003dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar1;
  func_0x00010bf9e8e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126bfe90;
  _objc_alloc(PTR_PTR_1126bfe90);
  uVar5 = param_3;
  func_0x00010c0c6e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0c54a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c135080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c05a140(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar8 = puVar4;
  FUN_105906b2c(puVar4,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bfd21e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059005ec; end: 105900743;  */

void FUN_1059005ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010bf63640(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,lVar1);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      uStack_58 = 0x1059006f4;
      puStack_50 = &UNK_11084a9e8;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      _objc_retain(param_2);
      uStack_48 = param_2;
      _objc_retain(param_3);
      lStack_40 = param_3;
      func_0x00010007380c(lVar1,&puStack_68);
      _objc_release(lStack_40);
      _objc_release(uStack_48);
      lVar1 = lStack_38;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105900744; end: 10590075b; -[SCStreamingMediaFetcher requestHandler] */

void FUN_105900744(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10590075c; end: 105900773; -[SCStreamingMediaFetcher extraInfoProvider] */

void FUN_10590075c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105900774; end: 10590078b; -[SCStreamingMediaFetcher streamingDelegate] */

void FUN_105900774(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10590078c; end: 1059007bb; -[SCStreamingMediaFetcher .cxx_destruct] */

void FUN_10590078c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1059007bc; end: 1059008c7; -[SCStreamingContentManagerHandler initWithPlaybackResolver:circumstanceEngine:manifestRewriter:performerProvider:] */

undefined1 *
FUN_1059007bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ead90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059008c8; end: 105900b5b; -[SCStreamingContentManagerHandler handleProxyRequest:urlProvider:completion:] */

void FUN_1059008c8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar6 = param_3;
  func_0x00010bfed8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  if ((uVar3 & 1) == 0) {
    uVar6 = param_3;
    func_0x00010bfe02c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    uVar2 = uVar1;
    _objc_opt_isKindOfClass();
    uVar6 = uVar1;
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar1);
    uVar1 = uVar6;
    func_0x00010b29196c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (uVar1 == 0) {
      uVar6 = 0;
      puVar7 = (undefined *)0x7fffffffffffffff;
    }
    else {
      uVar6 = uVar1;
      func_0x00010c11f4c0();
    }
    _objc_release(uVar1);
  }
  else {
    uVar6 = 0;
    puVar7 = (undefined *)0x7fffffffffffffff;
  }
  puVar4 = PTR_PTR_1126b7fc0;
  _objc_opt_new();
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(puVar4);
  _objc_retain(param_3);
  uStack_68 = uVar6;
  puStack_60 = puVar7;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar5);
  _objc_retain(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105900b5c; end: 105900cd3;  */

void FUN_105900b5c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    _objc_release(lVar1);
    if ((uVar2 & 1) == 0) {
      lVar1 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfed8e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfed8e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c135080();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfed8e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf9e8c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010be32d20(lVar1,param_2,uVar4,*(undefined8 *)(param_1 + 0x48),
                          *(undefined8 *)(param_1 + 0x50),uVar6,uVar8,
                          *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar1);
      func_0x00010bef7460(*(undefined8 *)(param_1 + 0x20),param_2,lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar9);
      return;
    }
  }
  return;
}



/* Entry: 105900cd4; end: 105900d63; -[SCStreamingContentManagerHandler handleStreamingProxyRequest:urlProvider:updateBlock:] */

void FUN_105900cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000105906960(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd21e0(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105900d64; end: 105900d6b; -[SCStreamingContentManagerHandler useSimplifiedProxyURLs] */

undefined8 FUN_105900d64(void)

{
  return 1;
}



/* Entry: 105900d6c; end: 105901237; -[SCStreamingContentManagerHandler _handleUrl:range:requestContext:extraInfo:urlProvider:completion:] */

void FUN_105900d6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_3;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bff90;
  func_0x00010c100200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  func_0x00010c2aae20(puVar3,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (param_6 == 0) {
    func_0x00010c2bc3a0(puVar3,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2b70a0(puVar3,param_2,param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bbcc0(puVar3,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126bfef0;
  _objc_alloc();
  puVar4 = PTR_PTR_1126b2c80;
  func_0x00010c28fba0(PTR_PTR_1126b2c80,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029760(puVar5,param_2,puVar4,3,1,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar14 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar14;
  func_0x00010c25cf40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bff98;
  func_0x00010bfb6120(PTR_PTR_1126bff98,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e0cc38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar7);
  _objc_release(uVar14);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e0cc58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04340(PTR_PTR_1126bff98);
  puVar8 = PTR_PTR_1126bff98;
  func_0x00010bf18180(PTR_PTR_1126bff98,param_2,puVar4);
  uVar9 = param_6;
  func_0x00010c11fca0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c27bc40();
  _objc_release(uVar9);
  uVar9 = param_6;
  func_0x00010c11fca0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c0f12c0();
  _objc_release(uVar9);
  uVar9 = param_6;
  if (param_6 != 0) {
    uVar12 = param_6;
    func_0x00010c11fca0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bfa96c0();
    _objc_release(uVar12);
    if (((uVar13 != 4) && (uVar10 != 0x11)) && ((uVar10 & 0xfffffffffffffffd) != 8)) {
      ppuVar15 = (undefined **)0x0;
      goto LAB_1059010d4;
    }
    if ((uVar10 != 0x11) || ((int)uVar11 != 2000)) {
      func_0x00010c2bbc00(param_6,param_2,0x11,2000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_6);
      ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1e10;
      goto LAB_1059010d4;
    }
  }
  ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1e10;
LAB_1059010d4:
  uVar14 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105901238;
  puStack_c0 = &UNK_1108bf1f8;
  uStack_70 = (undefined1)uVar2;
  uStack_90 = param_9;
  lStack_b8 = param_1;
  uStack_b0 = param_3;
  uStack_a8 = uVar9;
  uStack_a0 = param_7;
  uStack_98 = param_8;
  puStack_88 = puVar8;
  uStack_80 = param_4;
  uStack_78 = param_5;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(uVar9);
  _objc_retain(param_3);
  _objc_retain(param_9);
  uVar2 = uVar14;
  func_0x00010bf88f80(uVar14,param_2,puVar5,param_4,param_5,ppuVar15,&puStack_d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_90);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar9);
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_release(uVar14);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105901238; end: 10590150b;  */

void FUN_105901238(long param_1,long param_2,undefined8 param_3,undefined *param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar8 = *(undefined **)(param_1 + 0x50);
  func_0x00010bf94960(PTR_PTR_1126bff98);
  lVar1 = *(long *)(param_1 + 0x48);
  lVar3 = param_2;
  if (lVar1 != 0) {
    if (param_4 == (undefined *)0x0) {
      if (*(char *)(param_1 + 0x68) == '\x01') {
        lVar3 = *(long *)(param_1 + 0x20);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bdc2cc0();
        _objc_retainAutoreleasedReturnValue();
        param_6 = *(undefined8 *)(param_1 + 0x38);
        param_7 = *(long *)(param_1 + 0x40);
        func_0x00010beced60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        _objc_release(uVar2);
      }
      if (*(long *)(param_1 + 0x60) == 0x7fffffffffffffff) {
        func_0x00010c08fa60();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
      }
      else {
        func_0x00010c08fa60(lVar3);
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        uVar7 = *(undefined8 *)(param_1 + 0x60);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b291928(uVar2,uVar7,param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(puVar8);
      }
      lVar1 = *(long *)(param_1 + 0x48);
      puVar5 = PTR_PTR_1126bffa0;
      _objc_alloc();
      puVar6 = puVar4;
      param_5 = lVar3;
      func_0x00010c04c460();
      puVar8 = puVar5;
      (**(code **)(lVar1 + 0x10))(lVar1,0,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    else {
      puVar8 = (undefined *)0x0;
      (**(code **)(lVar1 + 0x10))(lVar1,param_4,0);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar4 = PTR_PTR_1126b9ee0;
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  _objc_alloc(puVar4);
  func_0x00010c008240();
  _objc_release(puVar8);
  puVar8 = puVar4;
  func_0x00010bdc1aa0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar6 = puVar8;
  if (param_7 != 0) {
    _objc_retain(param_7);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010bdc1ac0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_7);
  }
  uVar7 = *(undefined8 *)(lVar3 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf63640(puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c140700(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10590150c; end: 1059016d3; -[SCStreamingContentManagerHandler _transformM3U8:originalURLBase:requestContext:extraInfo:urlProvider:] */

void FUN_10590150c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b9ee0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c008240();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bdc1aa0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (param_7 != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1059016d4;
    puStack_70 = &UNK_1108bf228;
    _objc_retain(param_7);
    lStack_68 = param_7;
    _objc_retain(param_5);
    uStack_60 = param_5;
    _objc_retain(param_6);
    uStack_58 = param_6;
    func_0x00010bdc1ac0(puVar2,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_68);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c140700(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1059016d4; end: 10590175b;  */

void FUN_1059016d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bfe90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c05a140();
  _objc_release(param_2);
  func_0x00010c119ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10590175c; end: 105901797; -[SCStreamingContentManagerHandler .cxx_destruct] */

void FUN_10590175c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105901798; end: 105901bc3;  */

void FUN_105901798(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_105901bc4;
  uStack_118 = 0x105901bd4;
  uStack_110 = 0;
  func_0x00010bf529e0(param_1);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7fc0;
  _objc_opt_new();
  puVar3 = puVar2;
  _dispatch_group_create();
  uVar4 = 1;
  _dispatch_semaphore_create();
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  _objc_retain(param_1);
  lVar9 = param_1;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar10 = *plStack_170;
    do {
      lVar11 = 0;
      do {
        if (*plStack_170 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        uVar12 = *(undefined8 *)(lStack_178 + lVar11 * 8);
        _dispatch_group_enter(puVar3);
        lVar5 = param_1;
        func_0x00010c0e00e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 0x15;
        func_0x0001000819a8(0x15,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1c8 = 0xc2000000;
        pcStack_1c0 = FUN_105901bdc;
        puStack_1b8 = &UNK_1108bf258;
        _objc_retain(uVar4);
        puStack_188 = &uStack_138;
        uStack_1b0 = uVar4;
        _objc_retain(puVar1);
        puStack_1a8 = puVar1;
        uStack_1a0 = uVar12;
        _objc_retain(puVar3);
        puStack_198 = puVar3;
        _objc_retain(puVar2);
        lVar8 = param_3;
        puStack_190 = puVar2;
        func_0x00010bfa84c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(lVar5);
        if (lVar8 != 0) {
          func_0x00010bef7460(puVar2);
        }
        _objc_release(lVar8);
        _objc_release(puStack_190);
        _objc_release(puStack_198);
        _objc_release(puStack_1a8);
        _objc_release(uStack_1b0);
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
      lVar9 = param_1;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(param_1);
  lVar9 = param_4;
  if (param_4 == 0) {
    lVar9 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_200 = 0xc2000000;
  pcStack_1f8 = FUN_105901c7c;
  puStack_1f0 = &UNK_110883360;
  _objc_retain(param_5);
  puStack_1d8 = &uStack_138;
  uStack_1e0 = param_5;
  _objc_retain(puVar1);
  puStack_1e8 = puVar1;
  func_0x000100bc0718(puVar3,lVar9,&puStack_208);
  if (param_4 == 0) {
    _objc_release(lVar9);
  }
  _objc_release(puStack_1e8);
  _objc_release(uStack_1e0);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_138);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 105901bc4; end: 105901bdb;  */

void FUN_105901bc4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105901bdc; end: 105901c7b;  */

void FUN_105901bdc(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x20),0xffffffffffffffff);
  if (param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  if (param_3 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  if (param_2 != 0) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x40));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105901c7c; end: 105901ca7;  */

void FUN_105901c7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000105901ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar1,uVar2);
  return;
}



/* Entry: 105901ca8; end: 105901f4f;  */

void FUN_105901ca8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105901f50;
  puStack_88 = &UNK_1108bf288;
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_retain(param_3);
  ppuVar1 = &puStack_a0;
  uStack_80 = param_3;
  _objc_retainBlock();
  ppuVar2 = (undefined **)PTR_PTR_1126b7fc0;
  _objc_opt_new();
  uVar3 = param_1;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  if ((uVar5 & 1) == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e0ccd8;
    func_0x00010b291824(&PTR____CFConstantStringClassReference_110e0ccd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar1[2])(ppuVar1,ppuVar8,0);
  }
  else {
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105902054;
    puStack_d0 = &UNK_1108bf2e8;
    _objc_retain(ppuVar1);
    ppuStack_a8 = ppuVar1;
    _objc_retain(param_4);
    uStack_c8 = param_4;
    _objc_retain(param_1);
    uStack_c0 = param_1;
    _objc_retain(param_2);
    uStack_b8 = param_2;
    _objc_retain(ppuVar2);
    ppuVar8 = &puStack_e8;
    ppuStack_b0 = ppuVar2;
    _objc_retainBlock(ppuVar8);
    uVar6 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
    func_0x00010bfa84c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010bef7460(ppuVar2);
    _objc_retain(ppuVar2);
    _objc_release(uVar7);
    _objc_release(ppuVar8);
    _objc_release(ppuStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(ppuStack_a8);
    ppuVar8 = ppuVar2;
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105901f50; end: 10590203f;  */

void FUN_105901f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105902040;
      puStack_50 = &UNK_11084a9e8;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      _objc_retain(param_2);
      uStack_48 = param_2;
      _objc_retain(param_3);
      uStack_40 = param_3;
      func_0x00010007380c(lVar1,&puStack_68);
      _objc_release(uStack_40);
      _objc_release(uStack_48);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105902040; end: 105902053;  */

void FUN_105902040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105902050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105902054; end: 10590272b;  */

void FUN_105902054(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (param_2 == 0) {
    puVar1 = PTR_PTR_1126b9ee0;
    _objc_alloc();
    func_0x00010c008240();
    puVar2 = puVar1;
    func_0x00010c2978e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      lVar4 = *(long *)(param_1 + 0x40);
      ppuVar7 = &PTR____CFConstantStringClassReference_110e0ccf8;
      func_0x00010b291824(&PTR____CFConstantStringClassReference_110e0ccf8);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,ppuVar7,0);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x20);
      puVar2 = puVar1;
      if (lVar4 != 0) {
        func_0x00010c140700();
        _objc_retainAutoreleasedReturnValue();
        if (param_3 != lVar4) {
          puVar2 = PTR_PTR_1126b9ee0;
          _objc_alloc();
          func_0x00010c008240();
          _objc_release(puVar1);
        }
        _objc_release(lVar4);
      }
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c2978e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c29a5e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      _objc_release(puVar1);
      if (puVar5 != (undefined *)0x0) {
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        puVar1 = puVar2;
        func_0x00010c2978e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c29a5e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001059024cc(uVar8,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar7);
        _objc_release(uVar8);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar1);
      }
      puVar1 = puVar2;
      func_0x00010c2978e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf0f2c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      _objc_release(puVar1);
      if (puVar5 != (undefined *)0x0) {
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        puVar1 = puVar2;
        func_0x00010c2978e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf0f2c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001059024cc(uVar8,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar7);
        _objc_release(uVar8);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar1);
      }
      puVar1 = puVar2;
      func_0x00010bfe6460();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bfe6440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      _objc_release(puVar1);
      if (puVar5 != (undefined *)0x0) {
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        puVar1 = puVar2;
        func_0x00010bfe6460(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfe6440();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001059024cc(uVar8,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar7);
        _objc_release(uVar8);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar1);
      }
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      uVar8 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      uStack_70 = 0x1059025f8;
      puStack_68 = &UNK_1108bf2b8;
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar10);
      uStack_58 = uVar10;
      _objc_retain(puVar2);
      ppuVar6 = ppuVar7;
      puStack_60 = puVar2;
      FUN_105901798(ppuVar7,0,uVar9,uVar8,&puStack_80);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      func_0x00010bef7460(*(undefined8 *)(param_1 + 0x38));
      _objc_release(ppuVar6);
      _objc_release(puStack_60);
      _objc_release(uStack_58);
      puVar1 = puVar2;
    }
    _objc_release(ppuVar7);
    _objc_release(puVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),param_2,0);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10590272c; end: 1059028b7;  */

void FUN_10590272c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b7fc0;
  _objc_opt_new();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1059028b8;
  puStack_a0 = &UNK_1108bf348;
  uStack_98 = param_5;
  uStack_90 = param_3;
  uStack_78 = param_6;
  uStack_70 = param_1;
  uStack_68 = param_2;
  _objc_retain();
  puStack_88 = puVar1;
  uStack_80 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar2 = &puStack_b8;
  _objc_retainBlock(ppuVar2);
  uVar3 = param_3;
  FUN_105901ca8(param_3,param_4,0,0,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7460(puVar1);
  _objc_release(uVar3);
  _objc_retain(puVar1);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(puStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_78);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059028b8; end: 105902e27;  */

void FUN_1059028b8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_3;
    func_0x00010c29a640();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar11;
    func_0x00010c08fa60();
    _objc_release(lVar11);
    if (lVar8 != 0) {
      puVar2 = PTR_PTR_1126b9ee0;
      _objc_alloc(PTR_PTR_1126b9ee0);
      lVar11 = param_3;
      func_0x00010c29a640(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008240(puVar2);
      _objc_release(lVar11);
      puVar3 = puVar2;
      func_0x00010c1585e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010b294e9c(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    lVar11 = param_3;
    func_0x00010bf0f300();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar11;
    func_0x00010c08fa60();
    _objc_release(lVar11);
    if (lVar8 != 0) {
      puVar2 = PTR_PTR_1126b9ee0;
      _objc_alloc(PTR_PTR_1126b9ee0);
      lVar11 = param_3;
      func_0x00010bf0f300(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008240(puVar2);
      _objc_release(lVar11);
      puVar3 = puVar2;
      func_0x00010c1585e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010b294e9c(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar1);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar1);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    _objc_retain(puVar1);
    puVar4 = puVar1;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar11 = *plStack_150;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_150 != lVar11) {
            _objc_enumerationMutation(puVar1);
          }
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar13 = *(undefined8 *)(lStack_158 + (long)puVar12 * 8);
          _objc_retain(uVar13);
          uVar5 = uVar13;
          func_0x00010c28f340();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar13;
          func_0x00010bf25ec0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11f4c0();
          uVar10 = uVar13;
          func_0x00010bf25ec0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          func_0x00010c11f4c0(uVar10);
          func_0x00010c14de00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar7);
          _objc_release(uVar5);
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          uVar5 = uVar13;
          func_0x00010c28f340();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001059024cc(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(uVar7);
          _objc_release(uVar5);
          func_0x00010bf25ec0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar13);
          _objc_release(puVar6);
          puVar12 = puVar12 + 1;
        } while (puVar4 != puVar12);
        puVar4 = puVar1;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    uStack_178 = 0x105902e38;
    puStack_170 = &UNK_1108bf318;
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar10);
    puVar4 = puVar2;
    uStack_168 = uVar10;
    FUN_105901798(puVar2,puVar3,uVar7,uVar9,&puStack_188);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7460(uVar5);
    _objc_release(puVar4);
    _objc_release(uStack_168);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    lVar11 = *(long *)(param_1 + 0x40);
    if (lVar11 != 0) {
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 == 0) {
        (**(code **)(lVar11 + 0x10))(lVar11,param_2);
      }
      else {
        puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_118 = 0xc2000000;
        pcStack_110 = FUN_105902e28;
        puStack_108 = &UNK_11084aaa8;
        _objc_retain(lVar11);
        lStack_f8 = lVar11;
        _objc_retain(param_2);
        lStack_100 = param_2;
        func_0x00010007380c(lVar8,&puStack_120);
        _objc_release(lStack_100);
        _objc_release(lStack_f8);
      }
    }
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105902e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 105902e28; end: 105902e4b;  */

void FUN_105902e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105902e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105902e4c; end: 105902ecf; -[SCStreamingLongformStreamingDelegate shouldUseStreamingRequestManagerAPIForRequestInfo:request:] */

uint FUN_105902e4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x3;
  
  func_0x00010bfed8e0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(in_x3);
  return (uint)uVar3 ^ 1;
}



/* Entry: 105902ed0; end: 105902fb7; -[SCStreamingLongformStreamingDelegate cacheKeyForRequestInfo:request:] */

void FUN_105902ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfed8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bfe02c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010c0e00e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e98978);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105902fb8; end: 105903133; -[SCStreamingMediaPrefetcher initWithMediaFetcher:playbackResolver:manifestRewriter:] */

undefined1 *
FUN_105902fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ead98;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105903134; end: 105903227; -[SCStreamingMediaPrefetcher prefetchForRequest:completion:] */

void FUN_105903134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7fc0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105903228;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  _objc_retain();
  puStack_50 = puVar1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
  uVar2 = uStack_48;
  _objc_retain(puVar1);
  _objc_release(uVar2);
  _objc_release(puStack_50);
  _objc_release(uStack_60);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105903228; end: 105903327;  */

void FUN_105903228(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105903328;
  puStack_60 = &UNK_1108bf378;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar4;
  uStack_50 = uVar5;
  _objc_retain(uVar3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105903370;
  puStack_98 = &UNK_1108bf3a8;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar3;
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar4;
  uStack_88 = uVar5;
  _objc_retain(uVar3);
  uStack_80 = uVar3;
  func_0x00010c0bec20(uVar2,param_2,&puStack_78,&puStack_b0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  return;
}



/* Entry: 105903328; end: 1059033b7;  */

void FUN_105903328(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be2be80(uVar2,param_2,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7460(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059033b8; end: 105903447; -[SCStreamingMediaPrefetcher cancelPrefetchForMediaKey:] */

void FUN_1059033b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105903448;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105903448; end: 10590348f;  */

void FUN_105903448(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105903490; end: 1059036c7; -[SCStreamingMediaPrefetcher _handleManifestRequestWithCM:startTime:duration:completion:] */

void FUN_105903490(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar6 = 0;
  }
  else {
    _objc_retain(param_6);
    func_0x00010c0c6e00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    puVar2 = PTR_PTR_1126bff90;
    func_0x00010c100200(PTR_PTR_1126bff90);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    func_0x00010c2aae20(puVar2,param_4,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c2bc3a0(puVar2,param_4,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (0.0 < param_2) {
      if (param_1 <= 0.0) {
        param_1 = -0.0;
      }
      puVar3 = PTR_PTR_1126b8010;
      _objc_alloc(PTR_PTR_1126b8010);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720((param_2 + param_1) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0003a0(puVar3,param_4,0,puVar4,0,1,0,0);
      _objc_release(puVar4);
      func_0x00010c2b5b20(puVar2,param_4,puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126bfef0;
    _objc_alloc(PTR_PTR_1126bfef0);
    puVar4 = PTR_PTR_1126b2c80;
    func_0x00010c28fba0(PTR_PTR_1126b2c80,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029760(puVar3,param_4,puVar4,3,1,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c107fa0(uVar6,param_4,puVar3,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1059036c8; end: 10590396f; -[SCStreamingMediaPrefetcher _handleManifestRequest:completion:] */

void FUN_1059036c8(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar6 = (int)*(undefined8 *)(param_1 + 0x20);
  puVar1 = param_3;
  func_0x00010c0c54a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar1);
  if (iVar6 == 0) {
    _objc_initWeak(auStack_78,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105903970;
    puStack_98 = &UNK_110859728;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    puStack_90 = param_3;
    _objc_retain(param_4);
    ppuVar2 = &puStack_b0;
    lStack_88 = param_4;
    _objc_retainBlock();
    puVar3 = param_1;
    func_0x00010be2bea0(0,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = puVar1;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_105903ae0;
      puStack_c0 = &UNK_1108bf3d8;
      _objc_retain(ppuVar2);
      puVar3 = param_3;
      ppuStack_b8 = ppuVar2;
      FUN_105901ca8(param_3,uVar7,uVar4,uVar5,&puStack_d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(ppuStack_b8);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = param_3;
    func_0x00010c0c54a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = param_3;
    func_0x00010c0c54a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4);
    _objc_release(puVar1);
    _objc_release(ppuVar2);
    _objc_release(lStack_88);
    _objc_release(puStack_90);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  else {
    puVar1 = param_3;
    func_0x00010bf02020();
    if ((param_4 != 0) && ((int)puVar1 != 0)) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    puVar3 = PTR_PTR_1126b7fc0;
    _objc_opt_new(PTR_PTR_1126b7fc0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105903970; end: 105903a4f;  */

void FUN_105903970(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_2);
    _objc_release(uVar4);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105903a50; end: 105903adf;  */

void FUN_105903a50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c0c54a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c0c54a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105903ae0; end: 105903aeb;  */

void FUN_105903ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105903ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105903aec; end: 105903da7; -[SCStreamingMediaPrefetcher _handleMediaRequest:startTime:duration:completion:] */

void FUN_105903aec(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar2 = &puStack_a0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  iVar5 = (int)*(undefined8 *)(param_3 + 0x20);
  puVar1 = param_5;
  func_0x00010c0c54a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar1);
  if (iVar5 != 0) {
    puVar1 = param_5;
    func_0x00010bf02020();
    if ((param_6 != 0) && ((int)puVar1 != 0)) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
    puVar1 = PTR_PTR_1126b7fc0;
    _objc_opt_new(PTR_PTR_1126b7fc0);
    goto LAB_105903d58;
  }
  _objc_initWeak(auStack_68,param_3);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105903da8;
  puStack_88 = &UNK_110859728;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  puStack_80 = param_5;
  _objc_retain(param_6);
  lStack_78 = param_6;
  _objc_retainBlock(&puStack_a0);
  puVar3 = param_5;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c0720c0();
  if ((int)puVar1 == 0) {
    _objc_release(puVar4);
    _objc_release(puVar3);
LAB_105903c88:
    uVar6 = *(undefined8 *)(param_3 + 0x30);
    uVar7 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_5;
    FUN_10590272c(param_1,param_2,param_5,uVar6,uVar7,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
  }
  else {
    puVar1 = param_3;
    func_0x00010be2bea0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x0) goto LAB_105903c88;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  puVar3 = param_5;
  func_0x00010c0c54a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar7);
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  puVar3 = param_5;
  func_0x00010c0c54a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar7);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(lStack_78);
  _objc_release(puStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
LAB_105903d58:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105903da8; end: 105903e87;  */

void FUN_105903da8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_2);
    _objc_release(uVar4);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105903e88; end: 105903f17;  */

void FUN_105903e88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c0c54a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c0c54a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105903f18; end: 10590403f; -[SCStreamingMediaPrefetcher prefetchedMediaStateForMediaKey:completion:] */

void FUN_105903f18(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0xffffffffffffffff);
    }
  }
  else if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105904040; end: 105904117;  */

void FUN_105904040(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x18);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      iVar1 = (int)*(undefined8 *)(lVar2 + 0x20);
      func_0x00010bf4b900();
      uStack_38 = 2;
      if (iVar1 == 0) {
        uStack_38 = 0;
      }
    }
    else {
      uStack_38 = 1;
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105904118;
    puStack_48 = &UNK_110860cf8;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uStack_40 = uVar4;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
    _objc_release(uStack_40);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105904118; end: 105904127;  */

void FUN_105904118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105904124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105904128; end: 10590412f; -[SCStreamingMediaPrefetcher mediaFetcher] */

undefined8 FUN_105904128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105904130; end: 10590418f; -[SCStreamingMediaPrefetcher .cxx_destruct] */

void FUN_105904130(long param_1)

{
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



/* Entry: 105904190; end: 1059042c7; -[SCStreamingRequestExtraInfoProvider extraInfoForStreamingRequestInfo:streamingDelegate:] */

void FUN_105904190(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c6e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4,param_2,puVar5,&PTR____CFConstantStringClassReference_110e0cd78);
  _objc_release(puVar5);
  if (param_4 != 0) {
    puVar5 = PTR_PTR_1126bffb8;
    _objc_alloc(PTR_PTR_1126bffb8);
    func_0x00010c060400();
    func_0x00010c1d0640(puVar4,param_2,puVar5,&PTR____CFConstantStringClassReference_110e0cd58);
    _objc_release(puVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059042c8; end: 10590432f; -[SCStreamingRequestExtraInfoProvider streamingRequestInfoFromExtraInfo:] */

void FUN_1059042c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0cd38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bffb0;
  _objc_opt_class(PTR_PTR_1126bffb0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105904330; end: 1059043db; -[SCStreamingRequestExtraInfoProvider streamingDelegateFromExtraInfo:] */

void FUN_105904330(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0cd58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bffb8;
  _objc_opt_class(PTR_PTR_1126bffb8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a4fd8);
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059043dc; end: 105904457; -[SCStreamingRequestExtraInfoProvider streamingPlaybackTypeFromExtraInfo:] */

ulong FUN_1059043dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0cd78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c2827c0(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105904458; end: 105904543; -[SCStreamingURLProvider initWithURLProvider:proxyController:extraInfoProvider:streamingDelegate:] */

undefined1 *
FUN_105904458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eada0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105904544; end: 10590469f; -[SCStreamingURLProvider streamingURLForRequestInfo:] */

void FUN_105904544(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar1;
    func_0x00010bf9e8e0(lVar1,param_2,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126bfe90;
    _objc_alloc(PTR_PTR_1126bfe90);
    lVar1 = param_3;
    func_0x00010c0c6e00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0c54a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c135080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a140(puVar4,param_2,lVar1,lVar2,lVar5,lVar3);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c119ca0(uVar6,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1059046a0; end: 1059046a7; -[SCStreamingURLProvider urlProvider] */

undefined8 FUN_1059046a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1059046a8; end: 1059046bf; -[SCStreamingURLProvider extraInfoProvider] */

void FUN_1059046a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059046c0; end: 1059046c7; -[SCStreamingURLProvider proxyController] */

undefined8 FUN_1059046c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1059046c8; end: 1059046df; -[SCStreamingURLProvider streamingDelegate] */

void FUN_1059046c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059046e0; end: 10590471f; -[SCStreamingURLProvider .cxx_destruct] */

void FUN_1059046e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105904720; end: 105904727; -[SCStreamingResourceLoaderDelegate initWithRequestHandler:extraInfoProvider:streamingDelegate:] */

void FUN_105904720(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c03ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithRequestHandler_extraInfo_1125ed598);
  return;
}



/* Entry: 105904728; end: 1059048eb; -[SCStreamingResourceLoaderDelegate initWithRequestHandler:extraInfoProvider:streamingDelegate:webProxyUrlProvider:] */

undefined1 *
FUN_105904728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126eada8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_5);
    puVar2 = PTR_PTR_1126bffc0;
    _objc_alloc();
    puVar3 = (undefined1 *)((long)puVar1 + 0x30);
    _objc_loadWeakRetained(puVar3);
    func_0x00010c2909c0();
    func_0x00010c00b260();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar5);
    lVar6 = param_6;
    if (param_6 == 0) {
      lVar6 = *(long *)((long)puVar1 + 8);
    }
    _objc_retain(lVar6);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(long *)((long)puVar1 + 0x10) = lVar6;
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059048ec; end: 10590499f; -[SCStreamingResourceLoaderDelegate proxiedURLForRequestInfo:] */

void FUN_1059048ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  lVar1 = 8;
  if ((int)uVar3 == 0) {
    lVar1 = 0x10;
  }
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c119ca0(uVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1059049a0; end: 105904b97; -[SCStreamingResourceLoaderDelegate streamingURLForRequestInfo:] */

void FUN_1059049a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar1;
  func_0x00010bf9e8e0(lVar1,param_2,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126bfe90;
  _objc_alloc(PTR_PTR_1126bfe90);
  uVar5 = param_3;
  func_0x00010c0c6e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0c54a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c135080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c05a140(puVar4,param_2,uVar5,uVar6,uVar7,lVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar8 = *(undefined **)(param_1 + 8);
  func_0x00010c119ca0(puVar8,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c08fa60();
  _objc_release(puVar9);
  if (puVar10 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,puVar8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c25ce20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820(puVar9,param_2,puVar11);
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar10 = puVar9;
    func_0x00010bdc2b80(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  else {
    _objc_retain(puVar8);
    puVar10 = puVar8;
  }
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105904b98; end: 105904b9b; -[SCStreamingResourceLoaderDelegate urlProvider] */

void FUN_105904b98(void)

{
  return;
}



/* Entry: 105904b9c; end: 105904fdf; -[SCStreamingResourceLoaderDelegate resourceLoader:shouldWaitForLoadingOfRequestedResource:] */

undefined *** FUN_105904b9c(long param_1,undefined ***param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined **unaff_x28;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar9 = *(long *)(param_1 + 8);
  puVar1 = param_4;
  func_0x00010c134680(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1358a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (lVar9 == 0) goto LAB_105904f58;
  puVar1 = param_4;
  func_0x00010c134680(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc16c0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1059068a8();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bffc8;
  _objc_alloc(PTR_PTR_1126bffc8);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_4;
  func_0x00010bf64280();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar4 = puVar3;
  func_0x00010c1373c0();
  if ((int)puVar4 == 0) {
    puVar4 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar3 != (undefined *)0x0) {
      puVar6 = puVar3;
      func_0x00010c1372a0();
      puVar4 = puVar3;
      func_0x00010c137280(puVar3);
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110e98978;
      func_0x00010b2918e8(puVar6,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_a8 = puVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105904d98;
    }
  }
  else {
    puVar5 = puVar3;
    func_0x00010c1372a0();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar5 != (undefined *)0x0) {
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110e98978;
      func_0x00010c1372a0();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_a8 = puVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
LAB_105904d98:
      _objc_release(puVar6);
    }
  }
  _objc_release(puVar3);
  func_0x00010c05f9c0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126b7fc0;
  _objc_opt_new(PTR_PTR_1126b7fc0);
  puVar4 = PTR_PTR_1126bffd0;
  _objc_alloc();
  func_0x00010c026820();
  _objc_initWeak(&ppuStack_b0,param_1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105904fe0;
  puStack_c8 = &UNK_11085aad8;
  unaff_x28 = &puStack_e0;
  param_2 = &ppuStack_b0;
  _objc_copyWeak(auStack_b8,param_2);
  _objc_retain(puVar4);
  puStack_c0 = puVar4;
  _objc_retain(param_4);
  _objc_retain(&puStack_e0);
  puStack_a8 = puVar2;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1059054c0;
  puStack_90 = &UNK_1108bf408;
  puStack_88 = param_4;
  ppuStack_80 = unaff_x28;
  _objc_retain(param_4);
  ppuVar7 = &puStack_a8;
  _objc_retainBlock(ppuVar7);
  _objc_release(ppuStack_80);
  _objc_release(puStack_88);
  _objc_release(param_4);
  func_0x00010be00780(param_1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bfd2b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7460(puVar3);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(ppuVar7);
  _objc_release(puStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(&ppuStack_b0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_105904f58:
  _objc_release(lVar9);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x28 + 5);
    _objc_destroyWeak(&ppuStack_b0);
    __Unwind_Resume();
    _objc_retain(param_2);
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained();
    if (param_3 != 0) {
      func_0x00010bdfe200(param_3);
    }
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return param_2;
  }
  return (undefined ***)(ulong)(lVar9 != 0);
}



/* Entry: 105904fe0; end: 10590503b;  */

void FUN_105904fe0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdfe200(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10590503c; end: 1059050cb; -[SCStreamingResourceLoaderDelegate resourceLoader:didCancelLoadingRequest:] */

void FUN_10590503c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1059050cc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1059050cc; end: 10590521b;  */

void FUN_1059050cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x21;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x22 = *(long *)(lStack_128 + lVar7 * 8);
        lVar3 = unaff_x22;
        func_0x00010c09d2a0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = *(long *)(param_1 + 0x28);
        _objc_release();
        if (lVar3 == lVar8) {
          param_1 = unaff_x22;
          func_0x00010bf4c280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2dba0();
          _objc_release(param_1);
          unaff_x21 = lVar2;
          goto LAB_1059051d8;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = lVar2;
    } while (lVar2 != 0);
  }
LAB_1059051d8:
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_10590521c;
    lStack_160 = unaff_x22;
    lStack_158 = unaff_x21;
    lStack_150 = param_1;
    lStack_148 = lVar1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    uStack_180 = 0x1059052ac;
    puStack_178 = &UNK_110841f80;
    lStack_170 = lVar2;
    puStack_168 = (undefined1 *)puVar4;
    _objc_retain(puVar4);
    func_0x00010c0f7fc0(uVar5,param_2,&puStack_190);
    _objc_release(puStack_168);
    _objc_release(puVar4);
    return;
  }
  return;
}



/* Entry: 10590521c; end: 105905313; -[SCStreamingResourceLoaderDelegate _didStartHandlingRequest:] */

void FUN_10590521c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1059052ac;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105905314; end: 105905403; -[SCStreamingResourceLoaderDelegate _didFinishHandlingRequest:withError:] */

void FUN_105905314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1059053a4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105905404; end: 105905417; -[SCStreamingResourceLoaderDelegate proxyURLProvider:baseURLForRequestInfo:] */

void FUN_105905404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,
             &PTR____CFConstantStringClassReference_110e0cd98);
  return;
}



/* Entry: 105905418; end: 10590542f; -[SCStreamingResourceLoaderDelegate extraInfoProvider] */

void FUN_105905418(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105905430; end: 105905447; -[SCStreamingResourceLoaderDelegate requestHandler] */

void FUN_105905430(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105905448; end: 10590545f; -[SCStreamingResourceLoaderDelegate streamingDelegate] */

void FUN_105905448(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105905460; end: 1059054bf; -[SCStreamingResourceLoaderDelegate .cxx_destruct] */

void FUN_105905460(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059054c0; end: 10590569b;  */

void FUN_1059054c0(long param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 == 0) {
    _objc_retain(param_5);
    if (param_5 != 0) {
      lVar2 = param_5;
      func_0x00010c08fa60();
      _objc_release(param_5);
      if (lVar2 == 0) {
        func_0x00010bfaf920(*(undefined8 *)(param_1 + 0x20));
        lVar2 = *(long *)(param_1 + 0x28);
        if (lVar2 == 0) goto LAB_105905658;
        pcVar8 = *(code **)(lVar2 + 0x10);
        lVar7 = 0;
        goto LAB_10590551c;
      }
    }
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf4c7a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar1 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf4c7a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182a00();
      _objc_release(uVar1);
      _objc_release(uVar6);
      func_0x00010b291b94(param_3);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf4c7a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182140();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf4c7a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174ca0();
      _objc_release(uVar6);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf64280(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13b6c0();
    _objc_release(uVar6);
  }
  else {
    func_0x00010bfaf960(*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) goto LAB_105905658;
    pcVar8 = *(code **)(lVar2 + 0x10);
    lVar7 = param_2;
LAB_10590551c:
    (*pcVar8)(lVar2,lVar7);
  }
LAB_105905658:
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10590569c; end: 10590576b; -[SCStreamingResourceLoaderDelegateRequest initWithLoadingRequest:proxyRequest:contentDeliveryRequestHandle:] */

undefined1 *
FUN_10590569c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eadb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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



/* Entry: 10590576c; end: 10590578f; -[SCStreamingResourceLoaderDelegateRequest copyWithZone:] */

undefined8 FUN_10590576c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105905790; end: 1059057e3; -[SCStreamingResourceLoaderDelegateRequest hash] */

ulong FUN_105905790(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfde980(lVar1);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfde980(uVar2);
  uVar2 = uVar2 | lVar1 << 0x20;
  uVar2 = ~uVar2 + uVar2 * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uVar2 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  return uVar2 ^ uVar2 >> 0x16;
}



/* Entry: 1059057e4; end: 10590588b; -[SCStreamingResourceLoaderDelegateRequest isEqual:] */

long FUN_1059057e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105905864:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105905870;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105905870;
        }
        goto LAB_105905864;
      }
    }
    lVar3 = 0;
  }
LAB_105905870:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10590588c; end: 105905893; -[SCStreamingResourceLoaderDelegateRequest loadingRequest] */

undefined8 FUN_10590588c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105905894; end: 10590589b; -[SCStreamingResourceLoaderDelegateRequest proxyRequest] */

undefined8 FUN_105905894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10590589c; end: 1059058a3; -[SCStreamingResourceLoaderDelegateRequest contentDeliveryRequestHandle] */

undefined8 FUN_10590589c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


