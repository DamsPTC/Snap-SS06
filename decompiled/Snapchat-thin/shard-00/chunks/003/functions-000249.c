/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10059d25c; end: 10059d263; -[SCCapriIconConfig defaultImage] */

undefined8 FUN_10059d25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10059d264; end: 10059d26b; -[SCCapriIconConfig highlightImage] */

undefined8 FUN_10059d264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10059d26c; end: 10059d273; -[SCCapriIconConfig defaultColor] */

undefined8 FUN_10059d26c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10059d274; end: 10059d27b; -[SCCapriIconConfig highlightColor] */

undefined8 FUN_10059d274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10059d27c; end: 10059d283; -[SCCapriIconConfig badgeCountXOffset] */

undefined8 FUN_10059d27c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10059d284; end: 10059d28b; -[SCCapriIconConfig badgeCountYOffset] */

undefined8 FUN_10059d284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10059d28c; end: 10059d293; -[SCCapriIconConfig badgeViewOffset] */

undefined8 FUN_10059d28c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10059d294; end: 10059d37f; -[SIGNavigationBarButtonImageView initWithImage:highlightImage:defaultTintColor:highlightTintColor:highlightLabelColor:badgeCountXOffset:badgeCountYOffset:badgeViewOffset:contentMode:scalingFactor:] */

undefined8
FUN_10059d294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c4d960(puVar1,param_6,param_9);
  func_0x000107c61180();
  func_0x000107c46dbc(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,
                      param_10,param_11,param_12);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar1);
  return param_5;
}



/* Entry: 10059d380; end: 10059d53f; -[SIGNavigationBarButtonImageView initWithImage:highlightImage:defaultTintUIColor:highlightTintColor:highlightLabelColor:badgeCountXOffset:badgeCountYOffset:badgeViewOffset:contentMode:scalingFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10059d380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 **ppuVar3;
  long lVar4;
  undefined1 *puStack_90;
  undefined *puStack_88;
  
  ppuVar3 = &puStack_90;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  if (param_7 == 0) {
    ppuVar3 = (undefined1 **)0x0;
  }
  else {
    lVar1 = param_7;
    func_0x000107c45154(param_7);
    func_0x000107c61180();
    puStack_88 = PTR_PTR_11270b630;
    puStack_90 = param_5;
    func_0x000107c61154(&puStack_90,PTR_s_initWithImage__1125e49c0,lVar1);
    if (ppuVar3 != (undefined1 **)0x0) {
      lVar4 = (long)_DAT_112795014;
      func_0x000107c61174(param_7);
      uVar2 = *(undefined8 *)((long)ppuVar3 + lVar4);
      *(long *)((long)ppuVar3 + lVar4) = param_7;
      func_0x000107c61170(uVar2);
      lVar4 = (long)_DAT_112795018;
      func_0x000107c61174(param_8);
      uVar2 = *(undefined8 *)((long)ppuVar3 + lVar4);
      *(undefined8 *)((long)ppuVar3 + lVar4) = param_8;
      func_0x000107c61170(uVar2);
      lVar4 = (long)_DAT_11279501c;
      func_0x000107c61174(param_9);
      uVar2 = *(undefined8 *)((long)ppuVar3 + lVar4);
      *(undefined8 *)((long)ppuVar3 + lVar4) = param_9;
      func_0x000107c61170(uVar2);
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_112795020) = param_10;
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_112795024) = param_11;
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_112795028) = param_1;
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_11279502c) = param_2;
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_112795030) = param_3;
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_112795034) = param_4;
      func_0x000107c5a050(ppuVar3);
      func_0x000107c53840(ppuVar3);
      *(undefined1 *)((long)ppuVar3 + (long)_DAT_112795038) = 0;
      *(undefined1 *)((long)ppuVar3 + (long)_DAT_11279503c) = 0;
    }
    func_0x000107c61174(ppuVar3);
    func_0x000107c61170(lVar1);
    param_5 = (undefined1 *)ppuVar3;
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  return (undefined1 *)ppuVar3;
}



/* Entry: 10059d540; end: 10059d577; -[GPBCodedOutputStream writeFixed64:value:] */

void FUN_10059d540(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  func_0x000100298744(param_1 + 8,param_3 << 3 | 1);
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_4;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x18);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x30);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x38);
  return;
}



/* Entry: 10059d578; end: 10059d593; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts ranking] */

void FUN_10059d578(void)

{
  if (lRam000000011363c918 != -1) {
    func_0x000107c61568(0x11363c918,FUN_10059d594);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813a10);
  return;
}



/* Entry: 10059d594; end: 10059d5d3;  */

void FUN_10059d594(void)

{
  char *pcVar1;
  
  FUN_1000e2834(0);
  pcVar1 = "RANKING";
  func_0x000107c60124("RANKING",7,2);
  pcRam0000000113813a10 = pcVar1;
  return;
}



/* Entry: 10059d5d4; end: 10059d603; +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:] */

void FUN_10059d5d4(void)

{
  func_0x000107c40b48();
  return;
}



/* Entry: 10059d604; end: 10059d63b; +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:authenticated:] */

void FUN_10059d604(void)

{
  func_0x000107c40b50();
  return;
}



/* Entry: 10059d63c; end: 10059d78b; +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:authenticated:useGzipRequestCompression:] */

void FUN_10059d63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bbf20;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3abb4();
  func_0x000107c61180();
  func_0x000107c40b40(0xbff0000000000000,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                      param_8,param_9,param_10,puVar1,param_11,param_12,param_13);
  func_0x000107c61180();
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10059d78c; end: 10059d7df; +[SCRequestParser NoopParser] */

void FUN_10059d78c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4540 != -1) {
    FUN_10002a2fc(0x1137f4540,&PTR___NSConcreteGlobalBlock_110ccc118);
  }
  uVar1 = uRam00000001137f4548;
  func_0x000107c61174(uRam00000001137f4548);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10059d7e0; end: 10059d80b;  */

void FUN_10059d7e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dfed0;
  func_0x000107c610fc();
  uVar1 = puRam00000001137f4548;
  puRam00000001137f4548 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10059d80c; end: 10059d9db; +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestParser:requestType:method:authenticated:readTimeoutInterval:useGzipRequestCompression:] */

void FUN_10059d80c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,uint param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_12);
  puVar1 = PTR_PTR_1126dfd58;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c6071c();
  if ((param_15 & 0x100) == 0) {
    func_0x000107c48fdc(uVar3,param_1,puVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                        ,param_10,param_11,param_12,param_13,param_14,(undefined1)param_15);
  }
  else {
    func_0x000107c30acc();
    func_0x000107c61180();
    func_0x000107c48fdc(uVar3,param_1,puVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                        ,param_10,param_11,param_12,param_13,param_14,(undefined1)param_15);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10059d9dc; end: 10059dc07; -[SCDownloadRequest initWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestParser:requestType:method:authenticated:requestTimestamp:readTimeoutInterval:compressionConfig:estimatedResponseSizeBytes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10059d9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_18);
  puStack_80 = PTR_PTR_112705fa0;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  func_0x000107c61154(param_1,puVar1,PTR_s_initWithKey_contexts_priority_co_112542720,param_9,
                      param_10,param_11,param_12,param_14,param_13,param_15,param_16);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dfea0;
    func_0x000107c5a9bc(PTR_PTR_1126dfea0);
    func_0x000107c61180();
    func_0x000107c4a34c();
    func_0x000107c557f0(puVar1);
    func_0x000107c61170(puVar2);
    uVar3 = param_6;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278db00);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278db00) = uVar3;
    func_0x000107c61170(uVar4);
    uVar3 = param_7;
    func_0x000107c40794(param_7);
    func_0x000107c5a218(puVar1);
    func_0x000107c61170(uVar3);
    uVar3 = param_8;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278db04);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278db04) = uVar3;
    func_0x000107c61170(uVar4);
    uVar3 = param_5;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278db14);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278db14) = uVar3;
    func_0x000107c61170(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278db0c) = 1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278db10) = param_2;
    func_0x000107c5371c(puVar1);
    func_0x000107c558a8(puVar1);
    func_0x000107c55640(puVar1);
  }
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return puVar1;
}



/* Entry: 10059dc08; end: 10059deb3; -[SCRequest initWithKey:contexts:priority:connectivity:requestType:requestParser:method:authenticated:requestTimestamp:estimatedResponseSizeBytes:] */

long FUN_10059dc08(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_9);
  func_0x000107c453e4();
  if (param_2 != 0) {
    uVar5 = param_4;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = uVar5;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c4a0ec(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,*(undefined8 *)(param_2 + 0x38)
                       );
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar2 != 0) {
      FUN_10011df08();
      func_0x000107c61180();
      func_0x000107c51804(puVar3,param_3,&PTR____CFConstantStringClassReference_110de0eb8);
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      *(undefined **)(param_2 + 0x38) = puVar3;
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar2);
    }
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (param_5 != (undefined *)0x0) {
      puVar3 = param_5;
    }
    puVar2 = PTR_PTR_1126dfeb8;
    func_0x000107c420ec(PTR_PTR_1126dfeb8,param_3,puVar3);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    *(undefined **)(param_2 + 0x40) = puVar2;
    func_0x000107c61170(uVar5);
    *(undefined8 *)(param_2 + 0x50) = param_6;
    *(undefined4 *)(param_2 + 0x28) = 0x3f000000;
    *(undefined8 *)(param_2 + 0x80) = param_7;
    lVar1 = 6;
    if (param_8 != 7) {
      lVar1 = param_8;
    }
    *(long *)(param_2 + 0xb0) = lVar1;
    func_0x000107c61174(param_9);
    uVar5 = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_2 + 0x108) = param_9;
    func_0x000107c61170(uVar5);
    *(undefined8 *)(param_2 + 0xb8) = param_10;
    *(undefined1 *)(param_2 + 0x1d) = param_11;
    *(undefined8 *)(param_2 + 0xc0) = param_1;
    *(undefined8 *)(param_2 + 0x168) = 0xbff0000000000000;
    *(undefined8 *)(param_2 + 0x170) = 0xbff0000000000000;
    *(undefined1 *)(param_2 + 0x21) = 0;
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    func_0x000107c61170(uVar5);
    *(undefined8 *)(param_2 + 0xf0) = 0;
    puVar3 = PTR_PTR_1126dfec0;
    func_0x000107c610fc();
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined **)(param_2 + 8) = puVar3;
    func_0x000107c61170(uVar5);
    puVar3 = PTR_PTR_1126dfe78;
    func_0x000107c610fc();
    uVar5 = *(undefined8 *)(param_2 + 0x110);
    *(undefined **)(param_2 + 0x110) = puVar3;
    func_0x000107c61170(uVar5);
    *(undefined8 *)(param_2 + 0x98) = param_13;
    puVar3 = PTR_PTR_1126b4960;
    func_0x000107c44018(PTR_PTR_1126b4960,param_3,*(undefined8 *)(param_2 + 0xb0));
    func_0x000107c56348(param_2,param_3,puVar3);
    *(undefined1 *)(param_2 + 0x1e) = 0;
    func_0x000107c55548(param_2,param_3,0);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_2 + 0x198);
    *(undefined **)(param_2 + 0x198) = puVar3;
    func_0x000107c61170(uVar5);
    *(bool *)(param_2 + 0x20) = *(long *)(param_2 + 0xb0) == 4;
    *(undefined8 *)(param_2 + 0xd8) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0xe0) = 0xffffffffffffffff;
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_2 + 0xe8);
    *(undefined **)(param_2 + 0xe8) = puVar3;
    func_0x000107c61170(uVar5);
    *(undefined8 *)(param_2 + 0x60) = 0;
    uVar5 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x78) = 0;
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return param_2;
}



/* Entry: 10059deb4; end: 10059ded3;  */

bool FUN_10059deb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c4adac(param_3);
  return param_3 == 0;
}



/* Entry: 10059ded4; end: 10059df1f; +[SCDisplayContextFactory displayContextWithContexts:] */

void FUN_10059ded4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dfe20;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c4614c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10059df20; end: 10059df3f; -[SCRequestSchedulingStateListenerAnnouncer .cxx_construct] */

void FUN_10059df20(long param_1)

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



/* Entry: 10059df40; end: 10059e027; -[SCRequestInfoContainer init] */

undefined1 * FUN_10059df40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705fb8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSProgress_1126b8028;
    func_0x000107c610f4();
    func_0x000107c47d70();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c59fa4(*(undefined8 *)((long)puVar1 + 0x48));
    puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSProgress_1126b8028;
    func_0x000107c610f4();
    func_0x000107c47d70();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c59fa4(*(undefined8 *)((long)puVar1 + 0x50));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10059e028; end: 10059e047; +[SCRequest getDefaultRetryAttempts:] */

undefined8 FUN_10059e028(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 6) {
    return *(undefined8 *)(&UNK_10e56fbc0 + param_3 * 8);
  }
  return 2;
}



/* Entry: 10059e048; end: 10059e04f; -[SCRequest setMaxNumOfRequestAttempts:] */

void FUN_10059e048(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 10059e050; end: 10059e057; -[SCRequest setIsAppSessionRetry:] */

void FUN_10059e050(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x23) = param_3;
  return;
}



/* Entry: 10059e058; end: 10059e0df; +[SCResumableRequestHandler shared] */

void FUN_10059e058(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10059e0e0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f4500 != -1) {
    FUN_10002a2fc(0x1137f4500,&puStack_48);
  }
  uVar1 = uRam00000001137f4508;
  func_0x000107c61174(uRam00000001137f4508);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10059e0e0; end: 10059e107;  */

void FUN_10059e0e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610fc();
  uVar1 = uRam00000001137f4508;
  uRam00000001137f4508 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10059e108; end: 10059e20b; -[SCResumableRequestHandler init] */

undefined8 * FUN_10059e108(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112705fc0;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
    func_0x000107c610fc();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c53fcc(puVar1[2]);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c5a790();
    func_0x000107c61180();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c3acf8(puVar1);
  }
  return puVar1;
}



/* Entry: 10059e20c; end: 10059e263; -[SCResumableRequestHandler _addObservers] */

void FUN_10059e20c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10059e264; end: 10059e26b; -[SCResumableRequestHandler isResumableWithUrl:requestMethod:requestType:priority:] */

undefined8 FUN_10059e264(void)

{
  return 0;
}



/* Entry: 10059e26c; end: 10059e273; -[SCRequest setIsResumable:] */

void FUN_10059e26c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 10059e274; end: 10059e27b; -[SCRequest setUploadData:] */

void FUN_10059e274(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10059e27c; end: 10059e2ab; -[SCRequest setCompressionConfig:] */

void FUN_10059e27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10059e2ac; end: 10059e2b3; -[SCRequest setIsUIAssetRequest:] */

void FUN_10059e2ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 10059e2b4; end: 10059e2bb; -[SCRequest setIsFSNAuthInPayload:] */

void FUN_10059e2b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1f) = param_3;
  return;
}



/* Entry: 10059e2bc; end: 10059e4c3; -[SCStoriesProtobufRequestManager _submitRequest:responseClass:requestSource:fetchStartTime:completionQueue:completion:] */

void FUN_10059e2bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61144(auStack_78,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c4f7c0(uVar1);
  func_0x000107c61180();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1008a35bc;
  puStack_b0 = &UNK_110a19570;
  func_0x000107c6111c(auStack_90,auStack_78);
  func_0x000107c61174(param_6);
  uStack_a8 = param_6;
  uStack_88 = param_1;
  uStack_80 = param_5;
  func_0x000107c61174(param_7);
  uStack_a0 = param_7;
  func_0x000107c61174(param_8);
  uStack_98 = param_8;
  func_0x000107c6111c(auStack_d8,auStack_78);
  func_0x000107c61174(param_6);
  uStack_d0 = param_1;
  func_0x000107c61174(param_8);
  func_0x000107c5c2fc(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61120(auStack_90);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10059e4c4; end: 10059e597; -[SCSessionRequestManager submitRequest:successQueue:failureQueue:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x00010059e558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010059e568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010059e578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010059e56c) */
/* WARNING: Removing unreachable block (ram,0x00010059e55c) */
/* WARNING: Removing unreachable block (ram,0x00010059e57c) */

void FUN_10059e4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5a9bc(puVar1);
  func_0x000107c61180();
  func_0x000107c5c2ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10059e598; end: 10059e6af; -[SCRequestManager submitRequest:authenticator:successQueue:failureQueue:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x00010059e63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010059e66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010059e67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010059e68c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010059e680) */
/* WARNING: Removing unreachable block (ram,0x00010059e670) */
/* WARNING: Removing unreachable block (ram,0x00010059e640) */
/* WARNING: Removing unreachable block (ram,0x00010059e690) */

void FUN_10059e598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c50384(param_3);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  FUN_10059e6b8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10059e6b0; end: 10059e6b7; -[SCRequest requestInfoContainer] */

undefined8 FUN_10059e6b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 10059e6b8; end: 10059e7af;  */

void FUN_10059e6b8(undefined8 param_1,undefined8 param_2)

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
  pcStack_68 = FUN_10059e7b0;
  puStack_60 = &UNK_110847658;
  puStack_48 = puStack_58;
  if (lRam00000001137f4580 != -1) {
    FUN_10002a2fc(0x1137f4580,&puStack_78);
  }
  func_0x000107c5ca80(param_2);
  if (dVar1 == 0.0) {
    func_0x000107c59de4(param_1,param_2);
    func_0x000107c54a4c(param_2);
  }
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10059e7b0; end: 10059e7c3;  */

void FUN_10059e7b0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10059e7c4; end: 10059e7cb; -[SCRequestInfoContainer timestampSubmitToNm] */

undefined8 FUN_10059e7c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10059e7cc; end: 10059e7d3; -[SCRequestInfoContainer setTimestampSubmitToNm:] */

void FUN_10059e7cc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 10059e7d4; end: 10059e7db; -[SCRequestInfoContainer setFirstHitSubmitToNm:] */

void FUN_10059e7d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10059e7dc; end: 10059e7e3; -[SCNetworkManager submitRequest:authenticator:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10059e7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_submitRequest_authenticator_succ_112675790);
  return;
}



/* Entry: 10059e7e4; end: 10059eb07; -[SCRequestScheduler submitRequest:authenticator:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10059e7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  )

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  ppuVar5 = &puStack_1b0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  if (param_4 == 0) {
    if ((param_7 == 0) || (param_9 == 0)) goto LAB_10059ea9c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    puStack_90 = &UNK_10b270588;
    puStack_88 = &UNK_110849530;
    func_0x000107c61174(param_9);
    lStack_80 = param_9;
    FUN_10007380c(param_7,&puStack_a0);
    lVar2 = lStack_80;
  }
  else {
    func_0x000107c6071c();
    lVar2 = param_4;
    func_0x000107c4a8c4(param_4);
    func_0x000107c61180();
    func_0x000107c4bbe0(param_4);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_10059ec0c;
    pcStack_b0 = FUN_10068fb5c;
    lStack_a8 = 0;
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_1005a0654;
    puStack_120 = &UNK_110ccc3c0;
    puStack_e0 = &uStack_d0;
    puStack_c8 = &uStack_d0;
    func_0x000107c61174(param_4);
    lStack_118 = param_4;
    func_0x000107c61174(param_5);
    uStack_110 = param_5;
    uStack_108 = param_2;
    func_0x000107c61174(param_6);
    uStack_100 = param_6;
    func_0x000107c61174(param_7);
    lStack_f8 = param_7;
    func_0x000107c61174(param_8);
    uStack_f0 = param_8;
    func_0x000107c61174(param_9);
    ppuVar3 = &puStack_138;
    lStack_e8 = param_9;
    uStack_d8 = param_1;
    func_0x000107c61184();
    puStack_178 = puVar1;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_1005a8874;
    puStack_160 = &UNK_110862058;
    uStack_140 = param_1;
    func_0x000107c61174(param_4);
    ppuVar4 = &puStack_178;
    lStack_158 = param_4;
    uStack_150 = param_2;
    puStack_148 = &uStack_d0;
    func_0x000107c61184();
    puStack_1b0 = puVar1;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_1005a0624;
    puStack_198 = &UNK_110ccc390;
    uStack_180 = 0;
    func_0x000107c61174(ppuVar3);
    ppuStack_190 = ppuVar3;
    func_0x000107c61174(ppuVar4);
    ppuStack_188 = ppuVar4;
    func_0x000107c61184(&puStack_1b0);
    func_0x000107c3c988(param_2);
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(ppuStack_188);
    func_0x000107c61170(ppuStack_190);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(lStack_158);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(lStack_e8);
    func_0x000107c61170(uStack_f0);
    func_0x000107c61170(lStack_f8);
    func_0x000107c61170(uStack_100);
    func_0x000107c61170(uStack_110);
    func_0x000107c61170(lStack_118);
    func_0x000107c60bcc(&uStack_d0,8);
    lVar2 = lStack_a8;
  }
  func_0x000107c61170(lVar2);
LAB_10059ea9c:
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10059eb08; end: 10059eb0f; -[SCRequest key] */

undefined8 FUN_10059eb08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10059eb10; end: 10059eb8f; -[SCRequest logId] */

void FUN_10059eb10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c5ce60();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c4a8c4(param_1);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174(lVar2);
    param_1 = lVar2;
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10059eb90; end: 10059eb97; -[SCRequest trackingInfo] */

undefined8 FUN_10059eb90(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10059eb98; end: 10059ec0b;  */

/* WARNING: Possible PIC construction at 0x00010059ebe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010059ebe4) */

void FUN_10059eb98(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  return;
}



/* Entry: 10059ec0c; end: 10059ec1b;  */

void FUN_10059ec0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10059ec1c; end: 10059ec57;  */

/* WARNING: Possible PIC construction at 0x00010059ec3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010059ec40) */

void FUN_10059ec1c(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  return;
}



/* Entry: 10059ec58; end: 10059ecbf; -[SCRequestScheduler _submitRequest:block:] */

/* WARNING: Possible PIC construction at 0x00010059eca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010059ecac) */

void FUN_10059ec58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c3b69c(param_1,param_2,param_3);
  func_0x000107c4f7e8(param_1);
  func_0x000107c61180();
  func_0x000107c4e524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10059ecc0; end: 10059ef33; -[SCRequestScheduler _fetchClientSBConfigAndUpdateRequestIfNecessary:] */

undefined ** FUN_10059ecc0(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  ppuVar1 = param_3;
  func_0x000107c4a048();
  if (((ulong)ppuVar1 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x000107c3fbd4();
    func_0x000107c61180();
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dad1f8;
    }
    else {
      ppuVar2 = param_3;
      func_0x000107c3fbd4();
      func_0x000107c61180();
    }
    func_0x000107c61170(ppuVar1);
    ppuVar1 = param_3;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    ppuVar3 = ppuVar1;
    func_0x000107c44f08();
    func_0x000107c61180();
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dad1f8;
    }
    else {
      ppuVar4 = param_3;
      func_0x000107c5d7e8();
      func_0x000107c61180();
      ppuVar5 = ppuVar4;
      func_0x000107c44f08();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar4);
    }
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(ppuVar1);
    ppuVar1 = param_3;
    func_0x000107c4e430();
    func_0x000107c61180();
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dad1f8;
    }
    else {
      ppuVar3 = param_3;
      func_0x000107c4e430();
      func_0x000107c61180();
    }
    func_0x000107c61170(ppuVar1);
    ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3798;
    ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d37b0;
    ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d37c8;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_80 = ppuVar2;
    ppuStack_78 = ppuVar3;
    ppuStack_70 = ppuVar5;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_80,&ppuStack_98,3
                       );
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c3fbcc(uVar7);
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar9 = PTR_PTR_1126dfe08;
    func_0x000107c610f4(PTR_PTR_1126dfe08);
    func_0x000107c45f7c();
    uVar10 = uVar8;
    func_0x000107c43034(uVar8,param_2,puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c5d434(param_3,param_2,uVar10);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(ppuVar2);
  }
  func_0x000107c4ee44(param_3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  func_0x000107c60e78();
  return (undefined **)(ulong)*(byte *)((long)param_3 + 0x1e);
}



/* Entry: 10059ef34; end: 10059ef3b; -[SCRequest isMatchaRequest] */

undefined1 FUN_10059ef34(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1e);
}



/* Entry: 10059ef3c; end: 10059ef63; -[SCRequest clientSwitchboardConfigKey] */

void FUN_10059ef3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10059ef64; end: 10059efd7; -[SCDownloadRequest url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10059ef64(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11278db18);
  if (lVar1 == 0) {
    if (*(char *)(param_1 + _DAT_11278db0c) == '\x01') {
      lVar1 = *(long *)(param_1 + _DAT_11278db14);
      func_0x000107c61174(lVar1);
    }
    else {
      lVar1 = 0;
    }
  }
  else {
    func_0x000107c3abfc(lVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10059efd8; end: 10059f07b; -[SCDownloadRequest path] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10059efd8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11278db18);
  if (lVar2 == 0) {
    if (*(char *)(param_1 + _DAT_11278db0c) == '\x01') {
      lVar1 = *(long *)(param_1 + _DAT_11278db14);
      func_0x000107c4e430(lVar1);
      func_0x000107c61180();
    }
    else {
      lVar1 = *(long *)(param_1 + _DAT_11278db08);
      func_0x000107c61174(lVar1);
    }
  }
  else {
    func_0x000107c3abfc(lVar2);
    func_0x000107c61180();
    lVar1 = lVar2;
    func_0x000107c4e430();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10059f07c; end: 10059f08b; -[SCNetworkDeps clientSB] */

void FUN_10059f07c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 10059f08c; end: 10059f0ab;  */

void FUN_10059f08c(void)

{
  FUN_1003e7b2c();
  return;
}



/* Entry: 10059f0ac; end: 10059f0af;  */

void FUN_10059f0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10059f0b0; end: 10059f153; -[SCNClientSwitchboardClientSwitchboardQueryKey initWithConfigKeys:] */

undefined1 * FUN_10059f0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1127063b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10059f154; end: 10059f263; -[SCNClientSwitchboardClientSwitchboardConfigFetcher fetchConfigWithQueryKey:] */

void FUN_10059f154(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_180 [40];
  undefined1 auStack_158 [288];
  char cStack_38;
  
  func_0x000107c61174(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10059f264(auStack_180,param_3);
  (**(code **)(*plVar1 + 0x10))(auStack_158,plVar1,auStack_180);
  func_0x00010059fc34(auStack_180);
  if (cStack_38 == '\x01') {
    puVar2 = auStack_158;
    func_0x000107c2c4e8(puVar2);
    func_0x000107c61180();
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  FUN_10028b84c(auStack_158);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10059f264; end: 10059f2c3;  */

void FUN_10059f264(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  
  func_0x000107c400a8();
  func_0x000107c61180();
  FUN_10059f2cc(auStack_48);
  func_0x00010059fca0(param_1,auStack_48);
  func_0x00010059fc34(auStack_48);
  func_0x00010059fc98();
  return;
}



/* Entry: 10059f2c4; end: 10059f2cb; -[SCNClientSwitchboardClientSwitchboardQueryKey configKeys] */

undefined8 FUN_10059f2c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10059f2cc; end: 10059f3df;  */

void FUN_10059f2cc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  
  func_0x000107c61174();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  puStack_70 = &UNK_10b2d1e70;
  puStack_68 = &UNK_10b2d1e7c;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  fStack_38 = 1.0;
  uVar1 = param_2;
  func_0x000107c40808(param_2);
  FUN_10059f3e0(&uStack_58,(long)((float)uVar1 / fStack_38));
  func_0x000107c429c4(param_2);
  FUN_10059f894(param_1,puStack_80 + 6);
  func_0x00010059fbf0();
  func_0x00010059fc34(&uStack_58);
  FUN_10059fc98();
  return;
}



/* Entry: 10059f3e0; end: 10059f4a7;  */

void FUN_10059f3e0(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        func_0x000107c60c44();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_10059f428;
    }
    return;
  }
LAB_10059f428:
  if (param_2 == 0) {
    FUN_10059f5c0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_10059f4a8(plVar2);
    FUN_10059f5c0(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10059f4a8; end: 10059f4c3;  */

void FUN_10059f4a8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (param_2 == 0) {
      FUN_10059f5c0(param_1);
      param_1[1] = 0;
    }
    else {
      plVar3 = param_1 + 1;
      FUN_10059f4a8(plVar3);
      FUN_10059f5c0(param_1,plVar3);
      param_1[1] = param_2;
      lVar1 = *param_1;
      for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
      }
      plVar3 = (long *)param_1[2];
      if (plVar3 != (long *)0x0) {
        uVar6 = plVar3[1];
        uVar5 = param_2 - 1;
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar6 / param_2;
        }
        uVar7 = uVar6;
        if (param_2 <= uVar6) {
          uVar7 = uVar6 - uVar2 * param_2;
        }
        if ((param_2 & uVar5) == 0) {
          uVar7 = uVar6 & uVar5;
        }
        *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
        while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if ((param_2 & uVar5) == 0) {
            uVar2 = uVar2 & uVar5;
          }
          else if (param_2 <= uVar2) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar2 / param_2;
            }
            uVar2 = uVar2 - uVar6 * param_2;
          }
          if (uVar2 != uVar7) {
            if (*(long *)(lVar1 + uVar2 * 8) == 0) {
              *(long **)(lVar1 + uVar2 * 8) = plVar4;
              uVar7 = uVar2;
            }
            else {
              *plVar4 = *plVar3;
              *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
              **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
              plVar3 = plVar4;
            }
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 10059f4c4; end: 10059f5bf;  */

void FUN_10059f4c4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10059f5c0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10059f4a8(plVar3);
    FUN_10059f5c0(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10059f5c0; end: 10059f5df;  */

void FUN_10059f5c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10059f5e0; end: 10059f857;  */

void FUN_10059f5e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x23;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  uVar2 = param_2;
  func_0x000107c49820();
  func_0x000107c61170(param_2);
  FUN_1000fbca4(&lStack_70,param_3);
  func_0x000107c61170(param_3);
  iVar8 = (int)uVar2;
  uVar10 = (ulong)iVar8;
  uVar9 = *(ulong *)(lVar11 + 0x38);
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x23 = uVar4 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar5 = *(long **)(*(long *)(lVar11 + 0x30) + unaff_x23 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10059f6d0;
          uVar7 = plVar5[1];
          if (uVar7 != uVar10) break;
          if (*(int *)(plVar5 + 2) == iVar8) goto LAB_10059f800;
        }
        if ((uVar9 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (uVar9 <= uVar7) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar7 / uVar9;
          }
          uVar7 = uVar7 - uVar1 * uVar9;
        }
      } while (uVar7 == unaff_x23);
    }
  }
LAB_10059f6d0:
  plVar3 = (long *)0x30;
  func_0x000107c60e20();
  plVar5 = (long *)(lVar11 + 0x40);
  uStack_48 = 1;
  *plVar3 = 0;
  plVar3[1] = uVar10;
  *(int *)(plVar3 + 2) = iVar8;
  plVar3[5] = lStack_60;
  plVar3[4] = lStack_68;
  plVar3[3] = lStack_70;
  lStack_70 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  plStack_58 = plVar3;
  plStack_50 = plVar5;
  if ((uVar9 == 0) ||
     (*(float *)(lVar11 + 0x50) * (float)uVar9 < (float)(*(long *)(lVar11 + 0x48) + 1))) {
    func_0x000107c355b4(uVar9 << 1);
    FUN_10059f3e0(lVar11 + 0x30);
    uVar9 = *(ulong *)(lVar11 + 0x38);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar4 * uVar9;
      }
    }
  }
  lVar6 = *(long *)(lVar11 + 0x30);
  plVar3 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar3 == (long *)0x0) {
    *plStack_58 = *plVar5;
    *plVar5 = (long)plStack_58;
    *(long **)(lVar6 + unaff_x23 * 8) = plVar5;
    if (*plStack_58 != 0) {
      uVar10 = *(ulong *)(*plStack_58 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar4 * uVar9;
      }
      *(long **)(lVar6 + uVar10 * 8) = plStack_58;
    }
  }
  else {
    *plStack_58 = *plVar3;
    *plVar3 = (long)plStack_58;
  }
  plStack_58 = (long *)0x0;
  *(long *)(lVar11 + 0x48) = *(long *)(lVar11 + 0x48) + 1;
  FUN_10059f870(&plStack_58);
LAB_10059f800:
  func_0x000107c60ca0(&lStack_70);
  return;
}



/* Entry: 10059f858; end: 10059f86f;  */

void FUN_10059f858(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10059f870; end: 10059f893;  */

undefined8 FUN_10059f870(undefined8 param_1)

{
  FUN_10059f858(param_1,0);
  return param_1;
}



/* Entry: 10059f894; end: 10059f8ef;  */

undefined8 * FUN_10059f894(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10059f3e0(param_1,*(undefined8 *)(param_2 + 8));
  FUN_10059fb1c(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 10059f8f0; end: 10059fae7;  */

undefined1  [16] FUN_10059f8f0(long *param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  uVar7 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10059f99c;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_10059fab8;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar9 <= uVar5) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar1 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_10059f99c:
  FUN_10059fb5c(aplStack_58,param_1,uVar7);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    func_0x000107c355b4(uVar9 << 1);
    FUN_10059f3e0(param_1);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar3 * uVar9;
      }
    }
  }
  plVar8 = aplStack_58[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10059f870(aplStack_58);
  uVar2 = 1;
LAB_10059fab8:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 10059fae8; end: 10059fb1b;  */

void FUN_10059fae8(undefined8 param_1,undefined8 param_2)

{
  FUN_10059f8f0(param_1,param_2,param_2);
  return;
}



/* Entry: 10059fb1c; end: 10059fb5b;  */

void FUN_10059fb1c(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x00010059fb04(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10059fb5c; end: 10059fbb7;  */

void FUN_10059fb5c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10059fbb8(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10059fbb8; end: 10059fbe3;  */

undefined4 * FUN_10059fbb8(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c60c94(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10059fbe4; end: 10059fbfb;  */

void FUN_10059fbe4(void)

{
  return;
}



/* Entry: 10059fbfc; end: 10059fc5b;  */

void FUN_10059fbfc(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    func_0x000107c60ca0(param_2 + 3);
    func_0x000107c60e14(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 10059fc5c; end: 10059fc73;  */

void FUN_10059fc5c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10059fc74; end: 10059fc97;  */

undefined8 FUN_10059fc74(undefined8 param_1)

{
  FUN_10059fc5c(param_1,0);
  return param_1;
}



/* Entry: 10059fc98; end: 10059fd0f;  */

void FUN_10059fc98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10059fd10; end: 1005a0223;  */

void FUN_10059fd10(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *******pppppppuVar7;
  undefined1 *puVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *puVar11;
  undefined8 *******pppppppuVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined8 ******ppppppuStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  undefined8 *****pppppuStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *****pppppuStack_480;
  undefined4 uStack_478;
  undefined8 *****pppppuStack_348;
  undefined8 ******ppppppuStack_340;
  undefined8 *****apppppuStack_330 [3];
  byte bStack_318;
  undefined8 *****apppppuStack_2f0 [3];
  byte bStack_2d8;
  undefined8 *****apppppuStack_2d0 [9];
  byte bStack_288;
  undefined8 auStack_270 [7];
  byte bStack_234;
  byte bStack_228;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  int iStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  byte bStack_1b0;
  undefined1 auStack_188 [24];
  byte bStack_170;
  undefined1 auStack_168 [72];
  byte bStack_120;
  undefined1 auStack_118 [52];
  undefined4 uStack_e4;
  byte bStack_e0;
  byte bStack_cc;
  byte bStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 uStack_a0;
  int iStack_98;
  undefined1 auStack_90 [48];
  
  FUN_10028e5d0();
  lVar6 = param_3;
  FUN_1005a0224(param_3,3);
  if (lVar6 != 0) {
    lVar6 = lVar6 + 0x18;
    FUN_100152bb8(lVar6,&DAT_10f740b05);
    if ((int)lVar6 != 0) {
      *param_1 = 0;
      param_1[0x120] = 0;
      return;
    }
  }
  FUN_10059f894();
  auStack_1e0[0] = 0;
  bStack_c0 = 0;
  auStack_b8[0] = 0;
  uStack_a0 = 0;
  iStack_98 = 0;
  lStack_1f0 = 0;
  lStack_1f8 = 0;
  pppppppuVar12 = (undefined8 *******)0x4;
  uStack_1e8 = 0;
  iVar14 = 0;
  do {
    lVar6 = param_3;
    pppppppuVar10 = pppppppuVar12;
    FUN_1005a0224();
    pppppppuVar7 = (undefined8 *******)0x0;
    iVar15 = iVar14;
    if (lVar6 == 0) goto LAB_10059fef4;
    pppppuStack_348 = (undefined8 *****)((ulong)pppppuStack_348 & 0xffffffffffffff00);
    bStack_228 = 0;
    auStack_220[0] = 0;
    uStack_208 = 0;
    iStack_200 = 0;
    switch(pppppppuVar12) {
    case (undefined8 *******)0x0:
      pppppppuVar10 = (undefined8 *******)(param_2 + 0x90);
      func_0x0001005a02c0(&pppppuStack_498);
      break;
    case (undefined8 *******)0x1:
      pppppppuVar10 = (undefined8 *******)(param_2 + 0xb8);
      func_0x0001005a02c0(&pppppuStack_498);
      break;
    case (undefined8 *******)0x2:
      pppppppuVar10 = (undefined8 *******)(param_2 + 0x68);
      func_0x0001005a02c0(&pppppuStack_498);
      break;
    case (undefined8 *******)0x3:
      pppppppuVar10 = (undefined8 *******)(param_2 + 0x40);
      func_0x0001005a02c0(&pppppuStack_498);
      break;
    case (undefined8 *******)0x4:
      pppppppuVar10 = (undefined8 *******)(param_2 + 0xe0);
      func_0x0001005a02c0(&pppppuStack_498);
      FUN_1005a03dc();
      func_0x00010028b7fc(&pppppuStack_498);
      if ((bStack_228 & 1) == 0) {
        pppppppuVar10 = (undefined8 *******)(param_2 + 0x18);
        func_0x0001005a02c0(&pppppuStack_498);
        break;
      }
    default:
      goto LAB_10059fe90;
    }
    FUN_1005a03dc();
    func_0x00010028b7fc(&pppppuStack_498);
LAB_10059fe90:
    if (((bStack_c0 & 1) == 0) && (bStack_228 != 0)) {
      FUN_10028b5a8(auStack_1e0,&pppppuStack_348);
      func_0x0001002a969c(auStack_b8,auStack_220);
      iStack_98 = iStack_200;
LAB_10059fec0:
      pppppppuVar10 = (undefined8 *******)auStack_220;
      FUN_100602c04(&lStack_1f8);
    }
    else if ((bStack_c0 != 0) && ((iVar14 != 1 && (bStack_228 != 0)))) {
      bVar13 = (bStack_1b0 ^ 1) & bStack_318;
      if ((bVar13 & 1) != 0) {
        pppppppuVar10 = (undefined8 *******)apppppuStack_330;
        func_0x0001002a969c(auStack_1c8);
      }
      if (((bStack_120 & 1) == 0) && ((bStack_288 & 1) != 0)) {
        pppppppuVar10 = (undefined8 *******)apppppuStack_2d0;
        func_0x000107c2c504(auStack_168);
        bVar13 = 1;
      }
      if (((bStack_170 & 1) == 0) && ((bStack_2d8 & 1) != 0)) {
        pppppppuVar10 = (undefined8 *******)apppppuStack_2f0;
        func_0x0001002a969c(auStack_188);
        bVar13 = 1;
      }
      puVar11 = auStack_270;
      if ((bStack_e0 & 1) == 0) {
        uStack_e4 = (undefined4)auStack_270._36_5_;
        bStack_e0 = SUB51(auStack_270._36_5_,4);
        bVar13 = 1;
      }
      while (puVar11 = (undefined8 *)*puVar11, puVar11 != (undefined8 *)0x0) {
        FUN_1002aa38c(&pppppuStack_498,puVar11 + 2);
        puVar8 = auStack_118;
        pppppppuVar10 = (undefined8 *******)&pppppuStack_498;
        FUN_100ab9b18();
        if (puVar8 == (undefined1 *)0x0) {
          FUN_10060413c(auStack_118,&pppppuStack_498);
          pppppppuVar10 = (undefined8 *******)&pppppuStack_480;
          func_0x000107c60ca4();
          bVar13 = 1;
        }
        FUN_1002aa0bc(&pppppuStack_498);
      }
      if ((bStack_cc & 1) == 0) {
        bStack_cc = bStack_234;
      }
      else if ((bVar13 & 1) == 0) goto LAB_10059fecc;
      goto LAB_10059fec0;
    }
LAB_10059fecc:
    bVar13 = bStack_c0;
    iVar15 = iStack_200;
    if (bStack_228 == 0) {
      iVar15 = iVar14;
    }
    pppppppuVar7 = (undefined8 *******)&pppppuStack_348;
    func_0x00010028b7fc();
    if (bVar13 == 1 && iVar15 == 1) break;
LAB_10059fef4:
    uVar2 = (int)pppppppuVar12 - 1;
    pppppppuVar12 = (undefined8 *******)(ulong)uVar2;
    iVar14 = iVar15;
  } while (-1 < (int)uVar2);
  lVar5 = lStack_1f0;
  lVar6 = lStack_1f8;
  if (bStack_c0 == 1) {
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    ppppppuStack_4b0 = (undefined8 *******)0x0;
    if (lStack_1f8 != lStack_1f0) {
      pppppppuVar7 = &ppppppuStack_4b0;
      pppppppuVar10 = &ppppppuStack_4b0;
      FUN_100602d9c(pppppppuVar7,pppppppuVar10,lStack_1f8);
      lVar6 = lVar6 + 0x18;
    }
    for (; uVar4 = uStack_4a0, uVar1 = uStack_4a8,
        pppppppuVar12 = (undefined8 *******)ppppppuStack_4b0, lVar6 != lVar5; lVar6 = lVar6 + 0x18)
    {
      uVar3 = uStack_4a0 >> 0x38;
      ppppppuVar9 = (undefined8 ******)"_";
      func_0x00010538fd7c();
      if (-1 < (long)uVar4) {
        uVar1 = uVar3;
        pppppppuVar12 = &ppppppuStack_4b0;
      }
      pppppuStack_348 = ppppppuVar9;
      ppppppuStack_340 = pppppppuVar10;
      func_0x000106887580(&ppppppuStack_4b0,(long)pppppppuVar12 + uVar1,&pppppuStack_348);
      uVar1 = uStack_4a8;
      pppppppuVar10 = (undefined8 *******)ppppppuStack_4b0;
      if (-1 < (long)uStack_4a0) {
        uVar1 = uStack_4a0 >> 0x38;
        pppppppuVar10 = &ppppppuStack_4b0;
      }
      pppppppuVar7 = &ppppppuStack_4b0;
      pppppppuVar10 = (undefined8 *******)((long)pppppppuVar10 + uVar1);
      FUN_100602d9c(pppppppuVar7,pppppppuVar10,lVar6);
    }
    FUN_10028e620();
    uStack_488 = 0;
    pppppuStack_480 = (undefined8 ******)0x0;
    pppppuStack_498 = (undefined8 *****)&PTR_DAT_110cd1960;
    uStack_490 = 0;
    uStack_478 = 2;
    func_0x000107c60c94(auStack_4c8,auStack_b8);
    func_0x000107c60c94(auStack_4e0,&ppppppuStack_4b0);
    FUN_1002a7f28(&pppppuStack_498,auStack_4c8,auStack_4e0);
    FUN_1002a7f68(&pppppuStack_348,&pppppuStack_498);
    FUN_100602f9c();
    func_0x000100602fa4();
    FUN_1002a7fc8(&pppppuStack_498);
    (*(code *)(**pppppppuVar7)[1])(*pppppppuVar7,&pppppuStack_348,1);
    FUN_1002a7fc8(&pppppuStack_348);
    func_0x000100602fac();
  }
  FUN_10028b578(param_1,auStack_1e0);
  FUN_1000e30f4(&lStack_1f8);
  func_0x00010028b7fc(auStack_1e0);
  func_0x00010059fc34(auStack_90);
  return;
}



/* Entry: 1005a0224; end: 1005a02c7;  */

long FUN_1005a0224(long *param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1005a02c8; end: 1005a03db;  */

void FUN_1005a02c8(undefined1 *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_2[1];
  if (plVar6 != (long *)0x0) {
    plVar2 = param_2 + 3;
    if (*plVar2 != 0) {
      FUN_100102e7c(plVar2,param_3);
      uVar7 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar8 = (long *)((ulong)plVar2 & uVar7);
      }
      else {
        plVar8 = plVar2;
        if (plVar6 <= plVar2) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar2 / (ulong)plVar6;
          }
          plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
        }
      }
      plVar5 = *(long **)(*param_2 + (long)plVar8 * 8);
      if (plVar5 != (long *)0x0) {
        do {
          while( true ) {
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) goto LAB_1005a0390;
            plVar4 = (long *)plVar5[1];
            if (plVar2 != plVar4) break;
            lVar3 = (long)(plVar5 + 2);
            FUN_1000e107c(lVar3,param_3);
            if ((int)lVar3 != 0) {
              FUN_10028aea0(param_1,plVar5 + 5);
              FUN_10028b578();
              FUN_10028af84(param_1 + 0x128,unaff_x20 + 0x128);
              func_0x00010028b468();
              return;
            }
          }
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar7);
          }
          else if (plVar6 <= plVar4) {
            uVar1 = 0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar6;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
          }
        } while (plVar4 == plVar8);
      }
    }
  }
LAB_1005a0390:
  *param_1 = 0;
  param_1[0x120] = 0;
  param_1[0x128] = 0;
  param_1[0x140] = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  return;
}



/* Entry: 1005a03dc; end: 1005a03e7;  */

void FUN_1005a03dc(void)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = &stack0x000001b8;
  puVar3 = &stack0x00000068;
  FUN_10028aea0();
  cVar1 = puVar2[0x120];
  if (cVar1 == puVar3[0x120]) {
    if (cVar1 != '\0') {
      FUN_100066230();
      FUN_1002a8208(unaff_x19 + 0x18,unaff_x20 + 0x18);
      FUN_1002a8208(unaff_x19 + 0x38,unaff_x20 + 0x38);
      FUN_1002a8208(unaff_x19 + 0x58,unaff_x20 + 0x58);
      cVar1 = *(char *)(unaff_x19 + 0xc0);
      if (cVar1 == *(char *)(unaff_x20 + 0xc0)) {
        if (cVar1 != '\0') {
          uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
          uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
          *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
          *(undefined8 *)(unaff_x19 + 0x80) = uVar5;
          *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
          func_0x0001002a9850(unaff_x19 + 0x90,unaff_x20 + 0x90);
          *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
        }
      }
      else if (cVar1 == '\0') {
        FUN_10028acd4(unaff_x19 + 0x78,unaff_x20 + 0x78);
      }
      else {
        func_0x000107c2c508(unaff_x19 + 0x78);
      }
      FUN_100603e48(unaff_x19 + 200,unaff_x20 + 200);
      func_0x00010028b244();
    }
  }
  else if (cVar1 == '\0') {
    FUN_10028b440();
  }
  else {
    func_0x000107c2c520();
  }
  FUN_1002a8208(unaff_x19 + 0x128,unaff_x20 + 0x128);
  func_0x00010028b468();
  return;
}



/* Entry: 1005a03e8; end: 1005a04db;  */

void FUN_1005a03e8(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10028aea0();
  cVar1 = *(char *)(param_1 + 0x120);
  if (cVar1 == *(char *)(param_2 + 0x120)) {
    if (cVar1 != '\0') {
      FUN_100066230();
      FUN_1002a8208(unaff_x19 + 0x18,unaff_x20 + 0x18);
      FUN_1002a8208(unaff_x19 + 0x38,unaff_x20 + 0x38);
      FUN_1002a8208(unaff_x19 + 0x58,unaff_x20 + 0x58);
      cVar1 = *(char *)(unaff_x19 + 0xc0);
      if (cVar1 == *(char *)(unaff_x20 + 0xc0)) {
        if (cVar1 != '\0') {
          uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
          uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
          *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
          *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
          *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
          func_0x0001002a9850(unaff_x19 + 0x90,unaff_x20 + 0x90);
          *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
        }
      }
      else if (cVar1 == '\0') {
        FUN_10028acd4(unaff_x19 + 0x78,unaff_x20 + 0x78);
      }
      else {
        func_0x000107c2c508(unaff_x19 + 0x78);
      }
      FUN_100603e48(unaff_x19 + 200,unaff_x20 + 200);
      func_0x00010028b244();
    }
  }
  else if (cVar1 == '\0') {
    FUN_10028b440();
  }
  else {
    func_0x000107c2c520();
  }
  FUN_1002a8208(unaff_x19 + 0x128,unaff_x20 + 0x128);
  func_0x00010028b468();
  return;
}



/* Entry: 1005a04dc; end: 1005a04e7; -[SCNClientSwitchboardClientSwitchboardQueryKey .cxx_destruct] */

void FUN_1005a04dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1005a04e8; end: 1005a056b; -[SCRequest updateClientSwitchboardConfig:] */

/* WARNING: Possible PIC construction at 0x0001005a0518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a0530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a0554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a051c) */
/* WARNING: Removing unreachable block (ram,0x0001005a0534) */
/* WARNING: Removing unreachable block (ram,0x0001005a0558) */
/* WARNING: Removing unreachable block (ram,0x0001005a0538) */

void FUN_1005a04e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005a056c; end: 1005a0623; -[SCRequest preprocess] */

void FUN_1005a056c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuStack_40;
  char cStack_31;
  
  lVar2 = param_1;
  func_0x000107c4a048();
  if ((int)lVar2 != 0) {
    cStack_31 = '\0';
    uVar3 = *(undefined8 *)(param_1 + 0x1a0);
    ppuStack_40 = &PTR____CFConstantStringClassReference_110daafd8;
    FUN_100b43698(uVar3,*(undefined8 *)(param_1 + 400),&cStack_31,&ppuStack_40);
    func_0x000107c61180();
    ppuVar1 = ppuStack_40;
    func_0x000107c61174(ppuStack_40);
    if (cStack_31 == '\x01') {
      func_0x000107c61174(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0x1a0) = uVar3;
      func_0x000107c61170(uVar4);
      func_0x000107c5a4a0(*(undefined8 *)(param_1 + 0x198));
    }
    func_0x000107c61170(uVar3);
    func_0x000107c61170(ppuVar1);
  }
  return;
}



/* Entry: 1005a0624; end: 1005a0653;  */

void FUN_1005a0624(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001005a0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 1005a0654; end: 1005a0743;  */

void FUN_1005a0654(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126dff88;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c4d5bc();
  func_0x000107c61180();
  func_0x000107c40bc4();
  func_0x000107c61180();
  lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c4d708(uVar1);
  func_0x000107c61180();
  func_0x000107c56ac8(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf75d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28),
             PTR_s_didEnqueueTaskWithTimestampForFi_1125bb108);
  return;
}



/* Entry: 1005a0744; end: 1005a074f; -[SCRequestScheduler networkInterceptors] */

void FUN_1005a0744(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 1005a0750; end: 1005a086b; +[SCRequestTask createTaskWithRequest:authenticator:traceFile:networkInterceptors:grapheneRegistry:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_1005a0750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dfef0;
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c48350();
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
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



/* Entry: 1005a086c; end: 1005a0a53; -[SCRequestSuccessFailureTask initWithRequest:authenticator:traceFile:networkInterceptors:grapheneRegistry:successQueue:failureQueue:successBlock:failureBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1005a086c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_112705ff0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_initWithRequest_authenticator_tr_112542808,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd38);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd38) = uVar4;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd3c);
    *(undefined **)((long)puVar1 + (long)_DAT_11278dd3c) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd40);
    *(undefined **)((long)puVar1 + (long)_DAT_11278dd40) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd44);
    *(undefined **)((long)puVar1 + (long)_DAT_11278dd44) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd48);
    *(undefined **)((long)puVar1 + (long)_DAT_11278dd48) = puVar2;
    func_0x000107c61170(uVar4);
    lVar5 = (long)_DAT_11278dd4c;
    func_0x000107c61174(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    func_0x000107c61170(uVar4);
    func_0x000107c3ad28(puVar1);
    func_0x000107c3ace8(puVar1);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1005a0a54; end: 1005a0bd3; -[SCRequestTask initWithRequest:authenticator:traceFile:] */

undefined1 *
FUN_1005a0a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_112705ff8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x60) = 0xffffffffffffffff;
    puVar2 = (undefined1 *)puVar1;
    FUN_10011df08();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c42780();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61174(param_3);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar5);
    func_0x000107c59c28(*(undefined8 *)((long)puVar1 + 0x18));
    uVar5 = param_3;
    func_0x000107c3e460();
    if ((int)uVar5 != 0) {
      func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x20),param_4);
    }
    uVar5 = param_3;
    func_0x000107c4a048();
    if ((int)uVar5 != 0) {
      func_0x000107c5a404(puVar1);
    }
    puVar4 = PTR_PTR_1126dfef8;
    func_0x000107c610f4();
    func_0x000107c47a90();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    puVar2 = (undefined1 *)((long)puVar1 + 0x20);
    func_0x000107c61148(puVar2);
    func_0x000107c49688(uVar5);
    func_0x000107c61170(puVar2);
    if (lRam00000001137f4550 != -1) {
      FUN_10002a2fc(0x1137f4550,&PTR___NSConcreteGlobalBlock_110ccc230);
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}


