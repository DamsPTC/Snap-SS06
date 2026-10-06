/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103be1a44; end: 103be1acf;  */

void FUN_103be1a44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ff5c08;
  func_0x0001000285a8(0x112ff5c08,&UNK_10dc62f60);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103be1ad0; end: 103be1b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be1ad0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103be2254();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff5c18) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103be1b38; end: 103be1b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be1b38(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5c18) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103be1b84; end: 103be1d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be1b84(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x00010008a7c8(&puStack_60);
  puVar5 = puStack_60;
  if (puStack_60 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    pcStack_40 = FUN_103be1da0;
    puStack_38 = puStack_60;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_103be1d08;
    puStack_48 = &UNK_1106e5438;
    func_0x000107c60bc4(&puStack_60);
    puVar4 = puStack_38;
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c61574(puVar5);
    func_0x000107c60bd0(ppuVar3);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar2 != (undefined *)0x0) {
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61550();
      if (((ulong)puVar5 >> 0x3e != 0) || (((ulong)puVar4 & 1) == 0)) {
        if ((ulong)puVar5 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar5) {
            puVar4 = puVar5;
          }
          func_0x000107c60480(puVar4);
        }
        puVar5 = (undefined *)0x0;
        FUN_103be1f50(0,puVar4 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_103be1f50(uVar6,uVar1 + 1,1,puVar5);
        uVar6 = uVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(undefined **)(uVar6 + uVar1 * 8 + 0x20) = puVar2;
    }
  }
  return;
}



/* Entry: 103be1d08; end: 103be1d3f;  */

void FUN_103be1d08(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103be1d40; end: 103be1d9f; -[_TtC42SCPreviewToolbarItemProviderSaberPluginAPI46SCPreviewToolbarItemProviderSaberPluginService buildSaberPlugins] */

void FUN_103be1d40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103be1b84();
  func_0x000107c61170(param_1);
  uVar2 = 0x112de6120;
  func_0x0001000285a8(0x112de6120,&UNK_10d9b0cc0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103be1da0; end: 103be1dc3;  */

undefined8 FUN_103be1da0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 103be1dc4; end: 103be1ddf;  */

void FUN_103be1dc4(long param_1,long param_2)

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



/* Entry: 103be1de0; end: 103be1e13;  */

void FUN_103be1de0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103be1e14; end: 103be1e2b; -[_TtC42SCPreviewToolbarItemProviderSaberPluginAPI46SCPreviewToolbarItemProviderSaberPluginService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be1e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff5c18));
  return;
}



/* Entry: 103be1e2c; end: 103be1ee7;  */

void FUN_103be1e2c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103be1ee8; end: 103be1f4f;  */

/* WARNING: Possible PIC construction at 0x000103be1f18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be1f1c) */
/* WARNING: Removing unreachable block (ram,0x000103be1f20) */

void FUN_103be1ee8(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112de6720;
    plVar5 = (long *)&UNK_10db00fa0;
  }
  else {
    puVar3 = (ulong *)0x112de6120;
    plVar5 = (long *)&UNK_10d9b0cc0;
    unaff_x30 = 0x103be1f1c;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 103be1f50; end: 103be2077;  */

ulong FUN_103be1f50(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be2078);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103be2368(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be2074);
      (*pcVar1)();
    }
    FUN_103be23e8(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103be2078; end: 103be207b;  */

void FUN_103be2078(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc62f78;
  func_0x000107c61520(&UNK_10dc62f78,&UNK_1106e54e0);
  puRam0000000112ff5c28 = puVar1;
  return;
}



/* Entry: 103be207c; end: 103be20e7;  */

void FUN_103be207c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc62f78;
  func_0x000107c61520(&UNK_10dc62f78,&UNK_1106e54e0);
  puRam0000000112ff5c28 = puVar1;
  return;
}



/* Entry: 103be20e8; end: 103be20eb;  */

void FUN_103be20e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc63020;
  func_0x000107c61520(&UNK_10dc63020,&UNK_1106e5590);
  puRam0000000112ff5c40 = puVar1;
  return;
}



/* Entry: 103be20ec; end: 103be2157;  */

void FUN_103be20ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc63020;
  func_0x000107c61520(&UNK_10dc63020,&UNK_1106e5590);
  puRam0000000112ff5c40 = puVar1;
  return;
}



/* Entry: 103be2158; end: 103be219b;  */

void FUN_103be2158(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103be219c; end: 103be219f;  */

void FUN_103be219c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc63090;
  func_0x000107c61520(&UNK_10dc63090,&UNK_1106e5590);
  puRam0000000112ff5c58 = puVar1;
  return;
}



/* Entry: 103be21a0; end: 103be21df;  */

void FUN_103be21a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc63090;
  func_0x000107c61520(&UNK_10dc63090,&UNK_1106e5590);
  puRam0000000112ff5c58 = puVar1;
  return;
}



/* Entry: 103be21e0; end: 103be21e3;  */

void FUN_103be21e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc63048;
  func_0x000107c61520(&UNK_10dc63048,&UNK_1106e5590);
  puRam0000000112ff5c60 = puVar1;
  return;
}



/* Entry: 103be21e4; end: 103be2223;  */

void FUN_103be21e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc63048;
  func_0x000107c61520(&UNK_10dc63048,&UNK_1106e5590);
  puRam0000000112ff5c60 = puVar1;
  return;
}



/* Entry: 103be2224; end: 103be2253;  */

undefined8 FUN_103be2224(void)

{
  return 0;
}



/* Entry: 103be2254; end: 103be2273;  */

void FUN_103be2254(void)

{
  func_0x000107c61168(&PTR_PTR_112942e30);
  return;
}



/* Entry: 103be2274; end: 103be2367;  */

uint FUN_103be2274(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103be2368; end: 103be23e7;  */

undefined * FUN_103be2368(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_103be1ee8();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103be23e8; end: 103be250b;  */

long FUN_103be23e8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103be2508);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103be250c);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112de6120;
        func_0x0001000285a8(0x112de6120,&UNK_10d9b0cc0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112de6120;
      func_0x0001000285a8(0x112de6120,&UNK_10d9b0cc0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103be2504);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103be250c; end: 103be252b;  */

void FUN_103be250c(void)

{
  func_0x000107c60690(0);
  return;
}



/* Entry: 103be252c; end: 103be2593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be252c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003790e4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff5d20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103be2594; end: 103be25df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be2594(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5d20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103be25e0; end: 103be280b; -[_TtC19SCPreviewScopeProxy29SCPreviewScopeBuilderServices buildWithConfig:legacyConfig:snapDocEditor:source:workflowDelegate:snapchatGalleryDelegate:uiContainer:cameraPreviewDelegate:setupMultisnapViewObservable:setCaptureDiscardRelatedDataObservable:batchCaptureDidCreateSnapWithBatchCaptureSessionIDObservable:logDirectSnapCreateForTimelineWithSessionIDObservable:sendFlowEventSubject:quickPostEventSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be25e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined *apuStack_80 [2];
  undefined8 auStack_70 [2];
  
  puVar1 = PTR_PTR_1126c83f8;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c45f68(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16);
  apuStack_80[0] = puVar1;
  func_0x00010008a7c8(auStack_70,apuStack_80);
  func_0x000100083b20(apuStack_80);
  func_0x000107c61574(auStack_70[0]);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c615e8(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_80[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103be280c; end: 103be283b;  */

void FUN_103be280c(void)

{
  func_0x0001003790e4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103be283c; end: 103be286b; -[_TtC19SCPreviewScopeProxy29SCPreviewScopeBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be283c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff5d20));
  return;
}



/* Entry: 103be286c; end: 103be28b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be286c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5d68) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103be28b8; end: 103be2913; -[_TtC35SCStoriesSnapInfoCollectingServices35SCStoriesSnapInfoCollectingServices init] */

void FUN_103be28b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoriesSnapInfoCollectingServices.SCStoriesSnapInfoCollectingServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103be28e4);
  (*pcVar1)();
}



/* Entry: 103be2914; end: 103be2923; -[_TtC35SCStoriesSnapInfoCollectingServices35SCStoriesSnapInfoCollectingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be2914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff5d68));
  return;
}



/* Entry: 103be2924; end: 103be2c93;  */

ulong FUN_103be2924(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x000103be2adc();
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar7 == 0) {
    uVar3 = 0;
  }
  else {
    uVar9 = 0;
    uVar8 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103be2a80);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar9;
        FUN_103be5524(uVar9,param_1,&PTR_PTR_1126b25d0,0x112d55598);
      }
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be2a7c);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be2adc);
        (*pcVar2)();
      }
      uVar5 = uVar4;
      func_0x000107c44430();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be2ad0);
        (*pcVar2)();
      }
      uVar4 = uVar5;
      func_0x000107c5bbe8();
      func_0x000107c61170(uVar5);
      uVar5 = uVar3;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be2ad4);
        (*pcVar2)();
      }
      uVar6 = uVar5;
      func_0x000107c44430();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be2ad8);
        (*pcVar2)();
      }
      uVar5 = uVar6;
      func_0x000107c42378();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar3);
      if (CARRY8(uVar4,uVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be2a84);
        (*pcVar2)();
      }
      uVar3 = uVar4 + uVar5;
      if (uVar4 + uVar5 <= uVar8) {
        uVar3 = uVar8;
      }
      uVar9 = uVar9 + 1;
      uVar8 = uVar3;
    } while (uVar1 != uVar7);
  }
  func_0x000107c6142c(param_1);
  return uVar3;
}



/* Entry: 103be2c94; end: 103be2cbf;  */

double FUN_103be2c94(ulong param_1)

{
  FUN_103be2924();
  return (double)param_1 / 1000.0;
}



/* Entry: 103be2cc0; end: 103be2d63;  */

undefined * FUN_103be2cc0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_28;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103be2d64);
    (*pcVar1)();
  }
  lVar2 = unaff_x20;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    puStack_28 = (undefined *)0x0;
    uVar3 = 0;
    FUN_103be5750(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc50(lVar2,&puStack_28,uVar3);
    func_0x000107c61170(lVar2);
    if (puStack_28 != (undefined *)0x0) {
      puVar4 = puStack_28;
    }
  }
  return puVar4;
}



/* Entry: 103be2d64; end: 103be30cf;  */

undefined * FUN_103be2d64(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  
  FUN_103be2cc0();
  uVar17 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar16 = *(ulong *)(uVar17 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar16 = uVar17;
    if (0x7fffffffffffffff < param_1) {
      uVar16 = param_1;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar16 != 0) {
    uVar14 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar17 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103be2ee0);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_1 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar14;
          FUN_103be5524(uVar14,param_1,&PTR_PTR_1126b25d0,0x112d55598);
        }
        uVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103be2edc);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000107c4abb4();
        if ((int)uVar5 == 1) break;
LAB_103be2dbc:
        func_0x000107c61170(uVar4);
        uVar14 = uVar14 + 1;
        if (uVar1 == uVar16) goto LAB_103be2efc;
      }
      uVar5 = uVar4;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103be30cc);
        (*pcVar3)();
      }
      uVar6 = uVar5;
      func_0x000107c3e240();
      func_0x000107c61170(uVar5);
      if ((int)uVar6 != 3) goto LAB_103be2dbc;
      puVar12 = puVar7;
      func_0x000107c61558();
      if (((ulong)puVar12 & 1) == 0) {
        func_0x000101a17c14(0,*(long *)(puVar7 + 0x10) + 1,1);
      }
      uVar14 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar14) {
        func_0x000101a17c14(1 < *(ulong *)(puVar7 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar7 + 0x10) = uVar14 + 1;
      *(ulong *)(puVar7 + uVar14 * 8 + 0x20) = uVar4;
      uVar14 = uVar1;
    } while (uVar1 != uVar16);
  }
LAB_103be2efc:
  func_0x000107c6142c(param_1);
  if (((long)puVar7 < 0) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
    puVar12 = puVar7;
    func_0x000107c60480();
  }
  else {
    puVar12 = *(undefined **)(puVar7 + 0x10);
  }
  puVar13 = puVar7;
  if (puVar12 == (undefined *)0x0) {
    func_0x000107c61574();
    FUN_103be2cc0();
    puVar12 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((ulong)puVar7 >> 0x3e == 0) {
      puVar15 = *(undefined **)(puVar12 + 0x10);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar15 = puVar12;
      if ((undefined *)0x7fffffffffffffff < puVar7) {
        puVar15 = puVar7;
      }
      func_0x000107c60480();
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar13;
    if (puVar15 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar7 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar12 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103be3070);
              (*pcVar3)();
            }
            puVar8 = *(undefined **)(puVar7 + (long)puVar11 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar8 = puVar11;
            FUN_103be5524(puVar11,puVar7,&PTR_PTR_1126b25d0,0x112d55598);
          }
          puVar2 = puVar11 + 1;
          if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103be306c);
            (*pcVar3)();
          }
          puVar9 = puVar8;
          func_0x000107c4abb4();
          if ((int)puVar9 == 1) break;
LAB_103be2f54:
          func_0x000107c61170(puVar8);
          puVar11 = puVar11 + 1;
          if (puVar2 == puVar15) goto LAB_103be309c;
        }
        puVar9 = puVar8;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103be30d0);
          (*pcVar3)();
        }
        puVar10 = puVar9;
        func_0x000107c3e240();
        func_0x000107c61170(puVar9);
        if ((int)puVar10 != 5) goto LAB_103be2f54;
        puVar11 = puVar13;
        func_0x000107c61558();
        if (((ulong)puVar11 & 1) == 0) {
          func_0x000101a17c14(0,*(long *)(puVar13 + 0x10) + 1,1);
        }
        uVar17 = *(ulong *)(puVar13 + 0x10);
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar17) {
          func_0x000101a17c14(1 < *(ulong *)(puVar13 + 0x18),uVar17 + 1,1);
        }
        *(ulong *)(puVar13 + 0x10) = uVar17 + 1;
        *(undefined **)(puVar13 + uVar17 * 8 + 0x20) = puVar8;
        puVar11 = puVar2;
      } while (puVar2 != puVar15);
    }
LAB_103be309c:
    func_0x000107c6142c(puVar7);
  }
  return puVar13;
}



/* Entry: 103be30d0; end: 103be31f7;  */

undefined8 FUN_103be30d0(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  FUN_103be2d64();
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be31a4);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar4);
  }
  else {
    uVar4 = 0;
    FUN_103be5524(0,param_1,&PTR_PTR_1126b25d0,0x112d55598);
  }
  func_0x000107c6142c();
  uVar2 = uVar4;
  func_0x000107c4c930(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  return uVar2;
}



/* Entry: 103be31f8; end: 103be423f;  */

undefined * FUN_103be31f8(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103be3464);
    (*pcVar3)();
  }
  lVar5 = unaff_x20;
  func_0x000107c4c97c();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103be3468);
    (*pcVar3)();
  }
  lVar6 = lVar5;
  func_0x000107c500bc();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103be346c);
    (*pcVar3)();
  }
  lVar5 = lVar6;
  func_0x000107c500c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103be3470);
    (*pcVar3)();
  }
  lStack_d8 = lVar5;
  lStack_d0 = lVar13;
  func_0x000107c600f4(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_80,lVar4,lVar6);
  puVar2 = PTR___sypN_11034f1a8;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lStack_68 != 0) {
    func_0x000100102924(auStack_80,auStack_a0);
    func_0x000100102924(auStack_a0,auStack_c8);
    uVar9 = 0;
    FUN_103be5750(0,0x112df41a0,&PTR_PTR_1126bceb0);
    plVar10 = &lStack_a8;
    func_0x000107c6147c(plVar10,auStack_c8,puVar2 + 8,uVar9,6);
    lVar13 = lStack_a8;
    if ((((ulong)plVar10 & 1) != 0) && (lStack_a8 != 0)) {
      puVar8 = puVar11;
      func_0x000107c61550();
      if (((int)puVar8 == 0) ||
         (((long)puVar11 < 0 || (puVar8 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)))) {
        if ((ulong)puVar11 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar11) {
            puVar7 = puVar11;
          }
          func_0x000107c60480(puVar7);
        }
        puVar8 = (undefined *)0x0;
        func_0x000101a86878(0,puVar7 + 1,1,puVar11);
      }
      uVar12 = (ulong)puVar8 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar12 + 0x10);
      puVar11 = puVar8;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        func_0x000101a86878(puVar11,uVar1 + 1,1,puVar8);
        uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
      *(long *)(uVar12 + uVar1 * 8 + 0x20) = lVar13;
    }
    func_0x000107c601c0(auStack_80,lVar4,lVar6);
  }
  func_0x000107c61170(lStack_d8);
  (**(code **)(lStack_d0 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  return puVar11;
}



/* Entry: 103be4240; end: 103be4467;  */

byte FUN_103be4240(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  byte bStack_71;
  
  func_0x000103be3f68();
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar9 == 0) {
    bVar11 = 0;
  }
  else {
    uVar10 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4414);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar10;
        FUN_103be5524(uVar10,param_1,&PTR_PTR_1126b37d8,0x112ff5d98);
      }
      uVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4410);
        (*pcVar2)();
      }
      bStack_71 = 0;
      uVar4 = uVar3;
      func_0x000107c4180c();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4468);
        (*pcVar2)();
      }
      puVar5 = &UNK_1106e5868;
      func_0x000107c613fc(&UNK_1106e5868,0x18,7);
      *(byte **)(puVar5 + 0x10) = &bStack_71;
      puVar6 = &UNK_1106e5890;
      func_0x000107c613fc(&UNK_1106e5890,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_103be56e0;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      pcStack_88 = FUN_103be5700;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_10104fffc;
      puStack_90 = &UNK_1106e58a8;
      ppuVar7 = &puStack_a8;
      puStack_80 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar8 = puStack_80;
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(puVar8);
      func_0x000107c429d8(uVar4);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(uVar4);
      puVar8 = puVar6;
      func_0x000107c61544(puVar6,"",0x43,0x91,0x33,1);
      func_0x000107c61574(puVar6);
      bVar11 = bStack_71;
      if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4418);
        (*pcVar2)();
      }
      func_0x000107c61574(puVar5);
      func_0x000107c61170(uVar3);
    } while (((bVar11 & 1) == 0) && (uVar10 = uVar10 + 1, uVar1 != uVar9));
  }
  func_0x000107c6142c(param_1);
  return bVar11;
}



/* Entry: 103be4468; end: 103be4a7f;  */

uint FUN_103be4468(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong unaff_x20;
  undefined *puVar12;
  undefined *puStack_58;
  
  FUN_103be2cc0();
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c();
  if (uVar11 != 1) {
    return 0;
  }
  FUN_103be2cc0();
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar11 == 0) {
    func_0x000107c6142c();
    return 0;
  }
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be47a8);
      (*pcVar1)();
    }
    uVar11 = *(ulong *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar11 = 0;
    FUN_103be5524(0,param_1,&PTR_PTR_1126b25d0,0x112d55598);
  }
  func_0x000107c6142c(param_1);
  uVar2 = uVar11;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (uVar2 == 0) goto LAB_103be4940;
  uVar3 = uVar2;
  func_0x000107c3e240();
  if ((((int)uVar3 == 5) && (uVar3 = uVar2, func_0x000107c5d0f0(), (int)uVar3 == 1)) &&
     (uVar3 = unaff_x20, func_0x000107c44920(), (uVar3 & 1) == 0)) {
    uVar3 = uVar11;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a34);
      (*pcVar1)();
    }
    uVar6 = uVar3;
    func_0x000107c44a34();
    func_0x000107c61170(uVar3);
    if ((uVar6 & 1) == 0) {
      uVar3 = uVar11;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a5c);
        (*pcVar1)();
      }
      uVar6 = uVar3;
      func_0x000107c44740();
      func_0x000107c61170(uVar3);
      if ((uVar6 & 1) == 0) {
        uVar3 = uVar11;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a60);
          (*pcVar1)();
        }
        uVar6 = uVar3;
        func_0x000107c5d04c();
        func_0x000107c61170(uVar3);
        if ((uVar6 == 0) && (uVar3 = uVar11, FUN_103be4a80(), (uVar3 & 1) != 0)) {
          uVar3 = unaff_x20;
          func_0x000107c4e8d8();
          func_0x000107c61180();
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a64);
            (*pcVar1)();
          }
          uVar6 = uVar3;
          func_0x000107c4c97c();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a68);
            (*pcVar1)();
          }
          uVar3 = uVar6;
          func_0x000107c500bc();
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a6c);
            (*pcVar1)();
          }
          uVar6 = uVar3;
          func_0x000107c500c4();
          func_0x000107c61170(uVar3);
          if (uVar6 == 0) {
            uVar3 = uVar2;
            func_0x000107c4c978();
            func_0x000107c4e8d8();
            func_0x000107c61180();
            if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a70);
              (*pcVar1)();
            }
            uVar6 = unaff_x20;
            func_0x000107c4c97c();
            func_0x000107c61180();
            func_0x000107c61170(unaff_x20);
            if (uVar6 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a74);
              (*pcVar1)();
            }
            uVar7 = uVar6;
            func_0x000107c4aba8();
            func_0x000107c61180();
            func_0x000107c61170(uVar6);
            if (uVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a78);
              (*pcVar1)();
            }
            uVar6 = uVar7;
            func_0x000107c5ce78();
            func_0x000107c61180();
            func_0x000107c61170(uVar7);
            puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (uVar6 != 0) {
              puStack_58 = (undefined *)0x0;
              uVar4 = 0;
              FUN_103be5750(0,0x112deb550,&PTR_PTR_1126bce80);
              func_0x000107c5fc50(uVar6,&puStack_58,uVar4);
              func_0x000107c61170(uVar6);
              if (puStack_58 != (undefined *)0x0) {
                puVar12 = puStack_58;
              }
            }
            if ((ulong)puVar12 >> 0x3e == 0) {
              puVar5 = *(undefined **)((undefined *)((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
              if (((ulong)puVar12 & 0x8000000000000000) != 0) {
                puVar5 = puVar12;
              }
              func_0x000107c60480();
            }
            if (puVar5 == (undefined *)0x0) {
              func_0x000107c6142c(puVar12);
              func_0x000107c61170(uVar2);
              func_0x000107c61170(uVar11);
              return 1;
            }
            if (((ulong)puVar12 & 0xc000000000000001) == 0) {
              if (*(long *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103be49ec);
                (*pcVar1)();
              }
              uVar6 = *(ulong *)(puVar12 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = 0;
              FUN_103be5524(0,puVar12,&PTR_PTR_1126bce80,0x112deb550);
            }
            if ((ulong)puVar12 >> 0x3e == 0) {
              puVar5 = *(undefined **)((undefined *)((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
              if (((ulong)puVar12 & 0x8000000000000000) != 0) {
                puVar5 = puVar12;
              }
              func_0x000107c60480();
            }
            func_0x000107c6142c(puVar12);
            if ((puVar5 == (undefined *)0x1) &&
               (uVar7 = uVar6, func_0x000107c49e94(), (uVar7 & 1) == 0)) {
              uVar7 = uVar6;
              func_0x000107c5ce10();
              func_0x000107c61180();
              puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if (uVar7 != 0) {
                puStack_58 = (undefined *)0x0;
                uVar4 = 0;
                FUN_103be5750(0,0x112deb560,&PTR_PTR_1126bce88);
                func_0x000107c5fc50(uVar7,&puStack_58,uVar4);
                func_0x000107c61170(uVar7);
                if (puStack_58 != (undefined *)0x0) {
                  puVar12 = puStack_58;
                }
              }
              if ((ulong)puVar12 >> 0x3e == 0) {
                if (*(long *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10) == 1) {
LAB_103be4864:
                  if (((ulong)puVar12 & 0xc000000000000001) == 0) {
                    if (*(long *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a58);
                      (*pcVar1)();
                    }
                    uVar7 = *(ulong *)(puVar12 + 0x20);
                    func_0x000107c61174();
                  }
                  else {
                    uVar7 = 0;
                    FUN_103be5524(0,puVar12,&PTR_PTR_1126bce88,0x112deb560);
                  }
                  func_0x000107c6142c(puVar12);
                  uVar8 = uVar7;
                  func_0x000107c44be0();
                  if ((int)uVar8 == 0) {
LAB_103be48f8:
                    uVar3 = uVar7;
                    func_0x000107c44a34();
                    if ((uVar3 & 1) == 0) {
                      uVar3 = uVar7;
                      func_0x000107c447f8(uVar7);
                      func_0x000107c61170(uVar2);
                      func_0x000107c61170(uVar6);
                      func_0x000107c61170(uVar7);
                      func_0x000107c61170(uVar11);
                      return (uint)uVar3 ^ 1;
                    }
                    func_0x000107c61170(uVar11);
                    func_0x000107c61170(uVar2);
                    func_0x000107c61170(uVar6);
                    uVar11 = uVar7;
                  }
                  else {
                    uVar8 = uVar7;
                    func_0x000107c5d040();
                    func_0x000107c61180();
                    if (uVar8 == 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a7c);
                      (*pcVar1)();
                    }
                    uVar9 = uVar8;
                    func_0x000107c5bbe8();
                    func_0x000107c61170(uVar8);
                    if (uVar9 == 0) {
                      uVar8 = uVar7;
                      func_0x000107c5d040();
                      func_0x000107c61180();
                      if (uVar8 == 0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x103be4a80);
                        (*pcVar1)();
                      }
                      uVar9 = uVar8;
                      func_0x000107c42378();
                      func_0x000107c61170(uVar8);
                      if (((uVar3 & 0xffffffff) <= uVar9) && ((int)uVar3 != 0)) goto LAB_103be48f8;
                    }
                    func_0x000107c61170(uVar7);
                    func_0x000107c61170(uVar6);
                    func_0x000107c61170(uVar2);
                  }
                  goto LAB_103be4940;
                }
              }
              else {
                puVar5 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar12) {
                  puVar5 = puVar12;
                }
                puVar10 = puVar5;
                func_0x000107c60480();
                if ((puVar10 == (undefined *)0x1) &&
                   (func_0x000107c60480(), puVar5 != (undefined *)0x0)) goto LAB_103be4864;
              }
              func_0x000107c61170(uVar6);
              func_0x000107c61170(uVar11);
              func_0x000107c6142c(puVar12);
              uVar11 = uVar2;
              goto LAB_103be4940;
            }
            func_0x000107c61170(uVar6);
          }
        }
      }
    }
  }
  func_0x000107c61170(uVar11);
  uVar11 = uVar2;
LAB_103be4940:
  func_0x000107c61170(uVar11);
  return 0;
}



/* Entry: 103be4a80; end: 103be4cdf;  */

bool FUN_103be4a80(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  uint uVar7;
  
  lVar3 = param_1;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4cc8);
    (*pcVar2)();
  }
  lVar4 = lVar3;
  func_0x000107c44bd0();
  func_0x000107c61170(lVar3);
  if ((int)lVar4 != 0) {
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4cd0);
      (*pcVar2)();
    }
    lVar3 = param_1;
    func_0x000107c5cf30();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c51868();
      if ((((lVar4 == 1) && (lVar4 = lVar3, func_0x000107c5e9e8(), lVar4 == 1)) &&
          (lVar4 = lVar3, func_0x000107c5e9f8(), lVar4 == 1)) &&
         (lVar4 = lVar3, func_0x000107c5090c(), lVar4 == 1)) {
        lVar4 = unaff_x20;
        func_0x000107c444cc();
        func_0x000107c61180();
        if (lVar4 == 0) {
          uVar7 = 0;
        }
        else {
          lVar5 = lVar4;
          func_0x000107c5e304();
          func_0x000107c61170(lVar4);
          uVar7 = (uint)lVar5;
          if ((int)uVar7 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4b64);
            (*pcVar2)();
          }
        }
        func_0x000107c444cc();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          uVar6 = 0;
        }
        else {
          lVar4 = unaff_x20;
          func_0x000107c44d98();
          func_0x000107c61170(unaff_x20);
          uVar6 = (uint)lVar4;
          if ((int)uVar6 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4ba0);
            (*pcVar2)();
          }
        }
        lVar4 = lVar3;
        func_0x000107c51864();
        func_0x000107c61180();
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4cd4);
          (*pcVar2)();
        }
        lVar5 = lVar4;
        func_0x000107c5dc14();
        func_0x000107c61170(lVar4);
        if ((int)lVar5 == 5000) {
          lVar4 = lVar3;
          func_0x000107c50908();
          func_0x000107c61180();
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4cd8);
            (*pcVar2)();
          }
          lVar5 = lVar4;
          func_0x000107c5dc14();
          func_0x000107c61170(lVar4);
          if ((int)lVar5 == 0) {
            lVar4 = lVar3;
            func_0x000107c5e9e4();
            func_0x000107c61180();
            if (lVar4 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4cdc);
              (*pcVar2)();
            }
            lVar5 = lVar4;
            func_0x000107c5dc14();
            func_0x000107c61170(lVar4);
            uVar1 = (int)lVar5 - (uVar7 >> 1);
            if (SBORROW4((int)lVar5,uVar7 >> 1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4cc4);
              (*pcVar2)();
            }
            uVar7 = -uVar1;
            if (-1 < (int)uVar1) {
              uVar7 = uVar1;
            }
            if (uVar7 < 2) {
              lVar4 = lVar3;
              func_0x000107c5e9f4();
              func_0x000107c61180();
              if (lVar4 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4ce0);
                (*pcVar2)();
              }
              lVar5 = lVar4;
              func_0x000107c5dc14();
              func_0x000107c61170(lVar4);
              uVar7 = (int)lVar5 - (uVar6 >> 1);
              if (!SBORROW4((int)lVar5,uVar6 >> 1)) {
                func_0x000107c61170(lVar3);
                uVar6 = -uVar7;
                if (-1 < (int)uVar7) {
                  uVar6 = uVar7;
                }
                return uVar6 < 2;
              }
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103be4ccc);
              (*pcVar2)();
            }
          }
        }
      }
      func_0x000107c61170(lVar3);
      return false;
    }
  }
  return true;
}



/* Entry: 103be4ce0; end: 103be504f;  */

undefined8 FUN_103be4ce0(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_68;
  
  FUN_103be2cc0();
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5050);
            (*pcVar1)();
          }
          uVar4 = *(ulong *)(param_1 + 0x20 + uVar12 * 8);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar12;
          FUN_103be5524(uVar12,param_1,&PTR_PTR_1126b25d0,0x112d55598);
        }
        bVar2 = SCARRY8(uVar12,1);
        uVar12 = uVar12 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5008);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar5 != 0) break;
LAB_103be4eb8:
        func_0x000107c61170(uVar4);
        if (uVar12 == uVar10) goto LAB_103be5020;
      }
      uVar6 = uVar5;
      func_0x000107c4e088();
      iVar3 = (int)uVar6;
      if (iVar3 == 0x1e) {
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(param_1);
        return 5;
      }
      if (iVar3 == 0x22) {
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(param_1);
        return 7;
      }
      if (iVar3 == 0x20) {
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(param_1);
        return 6;
      }
      uVar6 = uVar5;
      func_0x000107c3d988();
      func_0x000107c61180();
      if (uVar6 == 0) {
        func_0x000107c61170(uVar4);
        uVar4 = uVar5;
        goto LAB_103be4eb8;
      }
      uStack_68 = 0;
      uVar7 = 0;
      FUN_103be5750(0,0x112d530c8,&PTR_PTR_1126affc8);
      func_0x000107c5fc50(uVar6,&uStack_68,uVar7);
      func_0x000107c61170(uVar6);
      uVar6 = uStack_68;
      if (uStack_68 == 0) {
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
      }
      else {
        uVar11 = uStack_68 & 0xffffffffffffff8;
        if (uStack_68 >> 0x3e == 0) {
          uVar13 = *(ulong *)(uVar11 + 0x10);
        }
        else {
          uVar13 = uStack_68;
          if (-1 < (long)uStack_68) {
            uVar13 = uVar11;
          }
          func_0x000107c60480();
        }
        uVar14 = 0;
        while (uVar13 != uVar14) {
          if ((uVar6 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar11 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5004);
              (*pcVar1)();
            }
            uVar8 = *(ulong *)(uVar6 + uVar14 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar8 = uVar14;
            FUN_103be5524(uVar14,uVar6,&PTR_PTR_1126affc8,0x112d530c8);
          }
          if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5000);
            (*pcVar1)();
          }
          uVar9 = uVar8;
          func_0x000107c4e088();
          func_0x000107c61170(uVar8);
          iVar3 = (int)uVar9;
          if (iVar3 == 7) {
            func_0x000107c6142c(param_1);
            func_0x000107c6142c(uVar6);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar5);
            return 7;
          }
          if (iVar3 == 6) {
            func_0x000107c6142c(param_1);
            func_0x000107c6142c(uVar6);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar5);
            return 6;
          }
          uVar14 = uVar14 + 1;
          if (iVar3 == 5) {
            func_0x000107c6142c(param_1);
            func_0x000107c6142c(uVar6);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar5);
            return 5;
          }
        }
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar6);
      }
    } while (uVar12 != uVar10);
  }
LAB_103be5020:
  func_0x000107c6142c(param_1);
  return 0;
}



/* Entry: 103be5050; end: 103be50df;  */

undefined *
FUN_103be5050(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_103be50e0(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 103be50e0; end: 103be5157;  */

void FUN_103be50e0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103be5750(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103be5158; end: 103be5407;  */

ulong FUN_103be5158(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be52b0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103be5050(uVar2,uVar4,0x112df90e8,&PTR_PTR_1126b0cc0,0x112ff5da8,&UNK_10dc632e0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be52ac);
      (*pcVar1)();
    }
    FUN_103be5408(0,uVar2,uVar3 + 0x20,param_4,0x112df90e8,&PTR_PTR_1126b0cc0);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103be5408; end: 103be5523;  */

long FUN_103be5408(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103be5520);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103be5524);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103be5750(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_103be5750(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103be551c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103be5524; end: 103be56df;  */

ulong FUN_103be5524(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be5608);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be560c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103be5750(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103be56e0);
  (*pcVar2)();
}



/* Entry: 103be56e0; end: 103be56ff;  */

void FUN_103be56e0(int param_1)

{
  long unaff_x20;
  
  **(byte **)(unaff_x20 + 0x10) = **(byte **)(unaff_x20 + 0x10) & 1 | param_1 == 0x29;
  return;
}



/* Entry: 103be5700; end: 103be571f;  */

void FUN_103be5700(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103be5720; end: 103be574f;  */

void FUN_103be5720(long param_1,long param_2)

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



/* Entry: 103be5750; end: 103be578f;  */

void FUN_103be5750(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103be5790; end: 103be5827;  */

ulong FUN_103be5790(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    uVar2 = param_1;
    func_0x000103be3f68();
    if (uVar2 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      func_0x000107c6142c();
    }
    else {
      uVar1 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar1 = uVar2;
      }
      func_0x000107c60480();
      func_0x000107c6142c(uVar2);
    }
    if (uVar1 == 0) {
      uVar2 = param_1;
      func_0x000107c44920(param_1);
    }
    else {
      uVar2 = 1;
    }
    func_0x000107c61170(param_1);
    return uVar2;
  }
  return 0;
}



/* Entry: 103be5828; end: 103be58cf; +[_TtC11SnapDocUtil11SnapDocUtil hasAppliedLens:] */

ulong FUN_103be5828(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_3 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    uVar2 = param_3;
    func_0x000103be3f68();
    if (uVar2 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      func_0x000107c6142c();
    }
    else {
      uVar1 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar1 = uVar2;
      }
      func_0x000107c60480();
      func_0x000107c6142c(uVar2);
    }
    if (uVar1 == 0) {
      uVar2 = param_3;
      func_0x000107c44920(param_3);
    }
    else {
      uVar2 = 1;
    }
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    return uVar2;
  }
  return 0;
}



/* Entry: 103be58d0; end: 103be58d3;  */

undefined8 FUN_103be58d0(undefined *param_1,undefined *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puStack_68;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  func_0x000107c61174();
  puVar11 = param_1;
  func_0x000103be6320();
  puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar13 = *(undefined **)(puVar9 + 0x10);
  }
  else {
    puVar13 = puVar9;
    if ((undefined *)0x7fffffffffffffff < puVar11) {
      puVar13 = puVar11;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar11 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar9 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6744);
            (*pcVar2)();
          }
          puVar3 = *(undefined **)(puVar11 + (long)puVar5 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar3 = puVar5;
          param_2 = puVar11;
          func_0x000103be573c();
        }
        puVar6 = puVar5 + 1;
        if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6740);
          (*pcVar2)();
        }
        puVar4 = puVar3;
        func_0x000107c44990();
        if ((int)puVar4 != 0) break;
        func_0x000107c61170(puVar3);
LAB_103be6618:
        puVar5 = puVar5 + 1;
        if (puVar6 == puVar13) goto LAB_103be6764;
      }
      puVar4 = puVar3;
      func_0x000107c4ce20();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      if (puVar4 == (undefined *)0x0) goto LAB_103be6618;
      puVar5 = puStack_68;
      func_0x000107c61550();
      if ((((int)puVar5 == 0) || ((long)puStack_68 < 0)) ||
         (puVar5 = puStack_68, ((ulong)puStack_68 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_68 >> 0x3e == 0) {
          param_2 = *(undefined **)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
        }
        else {
          param_2 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_68) {
            param_2 = puStack_68;
          }
          func_0x000107c60480();
        }
        param_2 = param_2 + 1;
        puVar5 = (undefined *)0x0;
        func_0x000102ed65b8(0,param_2,1,puStack_68);
      }
      uVar8 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar8 + 0x10);
      puVar3 = (undefined *)(uVar1 + 1);
      puStack_68 = puVar5;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
        puStack_68 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        param_2 = puVar3;
        func_0x000102ed65b8(puStack_68,puVar3,1,puVar5);
        uVar8 = (ulong)puStack_68 & 0xffffffffffffff8;
      }
      *(undefined **)(uVar8 + 0x10) = puVar3;
      *(undefined **)(uVar8 + uVar1 * 8 + 0x20) = puVar4;
      puVar5 = puVar6;
    } while (puVar6 != puVar13);
  }
LAB_103be6764:
  func_0x000107c6142c(puVar11);
  if ((ulong)puStack_68 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_68) {
      puVar11 = puStack_68;
    }
    func_0x000107c60480();
  }
  if (puVar11 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    lVar10 = 4;
    do {
      puVar9 = (undefined *)(lVar10 + -4);
      if (((ulong)puStack_68 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6a68);
          (*pcVar2)();
        }
        puVar13 = *(undefined **)(puStack_68 + lVar10 * 8);
        func_0x000107c61174();
      }
      else {
        puVar13 = puVar9;
        param_2 = puStack_68;
        func_0x000102f02fc0();
      }
      puVar5 = (undefined *)(lVar10 + -3);
      if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6a64);
        (*pcVar2)();
      }
      puVar9 = puVar13;
      func_0x000107c4ce50();
      if ((int)puVar9 == 3) {
        puVar9 = puVar13;
        func_0x000107c453bc();
        func_0x000107c61180();
        if (puVar9 == (undefined *)0x0) goto LAB_103be6840;
        puVar3 = puVar9;
        func_0x000107c453c0();
        if ((int)puVar3 != 1) {
LAB_103be6838:
          func_0x000107c61170(puVar9);
          goto LAB_103be6840;
        }
        puVar3 = puVar9;
        func_0x000107c4e7ec();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) goto LAB_103be6838;
        puVar6 = puVar3;
        func_0x000107c44a28();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar9);
        if (((ulong)puVar6 & 1) == 0) goto LAB_103be6840;
LAB_103be6a48:
        func_0x000107c61170(param_1);
        uVar12 = 1;
        param_1 = puVar13;
        goto LAB_103be6a84;
      }
LAB_103be6840:
      puVar9 = puVar13;
      func_0x000107c4ce50();
      if ((int)puVar9 == 7) {
        puVar9 = puVar13;
        func_0x000107c434d8();
        func_0x000107c61180();
        if (puVar9 == (undefined *)0x0) goto LAB_103be6a20;
        puVar3 = puVar9;
        func_0x000107c434c8();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6abc);
          (*pcVar2)();
        }
        puVar6 = puVar3;
        func_0x000107c453a8();
        func_0x000107c61170(puVar3);
        if ((int)puVar6 == 1) {
          puVar3 = puVar9;
          func_0x000107c434c8();
          func_0x000107c61180();
          if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6ac4);
            (*pcVar2)();
          }
          puVar6 = puVar3;
          func_0x000107c5dcc8();
          func_0x000107c61180();
          func_0x000107c61170(puVar3);
          if (puVar6 != (undefined *)0x0) {
            puVar3 = puVar6;
            func_0x000107c44a28();
            func_0x000107c61170(puVar6);
            if ((int)puVar3 != 0) {
              func_0x000107c61170(puVar9);
              goto LAB_103be6a48;
            }
          }
        }
        puVar3 = puVar9;
        func_0x000107c434c8();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6ac0);
          (*pcVar2)();
        }
        puVar6 = puVar3;
        func_0x000107c453a8();
        func_0x000107c61170(puVar3);
        puVar3 = param_2;
        if ((int)puVar6 != 3) {
LAB_103be6a18:
          func_0x000107c61170(puVar9);
          param_2 = puVar3;
          goto LAB_103be6a20;
        }
        puVar3 = puVar9;
        func_0x000107c434c8();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6ac8);
          (*pcVar2)();
        }
        puVar6 = puVar3;
        func_0x000107c5dccc();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        puVar3 = param_2;
        if (puVar6 == (undefined *)0x0) goto LAB_103be6a18;
        puVar4 = puVar6;
        func_0x000107c5dcc0();
        func_0x000107c61180();
        if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6acc);
          (*pcVar2)();
        }
        puVar7 = puVar4;
        func_0x000107c5faec();
        puVar3 = param_2;
        func_0x000107c61170(puVar4);
        func_0x000107c6142c(param_2);
        uVar1 = (ulong)puVar7 & 0xffffffffffff;
        if (((ulong)param_2 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)param_2 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          func_0x000107c61170(puVar6);
          goto LAB_103be6a18;
        }
        puVar4 = puVar6;
        func_0x000107c5dcd0();
        func_0x000107c61180();
        if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6ad0);
          (*pcVar2)();
        }
        puVar7 = puVar4;
        func_0x000107c5faec();
        param_2 = puVar3;
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar13);
        func_0x000107c6142c(puVar3);
        uVar1 = (ulong)puVar7 & 0xffffffffffff;
        if (((ulong)puVar3 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)puVar3 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          uVar12 = 1;
          goto LAB_103be6a84;
        }
      }
      else {
LAB_103be6a20:
        func_0x000107c61170(puVar13);
      }
      lVar10 = lVar10 + 1;
    } while (puVar5 != puVar11);
    uVar12 = 0;
  }
LAB_103be6a84:
  func_0x000107c61170(param_1);
  func_0x000107c6142c(puStack_68);
  return uVar12;
}



/* Entry: 103be58d4; end: 103be5913; +[_TtC11SnapDocUtil11SnapDocUtil hasTaggedVenue:] */

uint FUN_103be58d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000103be65ac(param_3);
  func_0x000107c61170(uVar1);
  return (uint)param_3 & 1;
}



/* Entry: 103be5914; end: 103be597b; +[_TtC11SnapDocUtil11SnapDocUtil ctItemsFrom:] */

void FUN_103be5914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000103be6320();
  func_0x000107c61170(param_3);
  uVar2 = 0;
  FUN_103be6ad0(0,0x112df90e8,&PTR_PTR_1126b0cc0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103be597c; end: 103be59c3;  */

void FUN_103be597c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_103be5ad8(uVar2 + uVar4,1,&UNK_101a866f4);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_103be5b8c(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10),param_1,0x112df41b0,
                  &PTR_PTR_1126bceb8,&SUB_101a91c8c);
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5ad4);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5ad8);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5ad0);
  (*pcVar1)();
}



/* Entry: 103be59c4; end: 103be5ad7;  */

void FUN_103be59c4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_103be5ad8(uVar2 + uVar4,1,param_2);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_103be5b8c(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10),param_1,param_3,param_4,
                  param_5);
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5ad4);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5ad8);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5ad0);
  (*pcVar1)();
}



/* Entry: 103be5ad8; end: 103be5b8b;  */

void FUN_103be5ad8(long param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  (*param_3)();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 103be5b8c; end: 103be5cff;  */

ulong FUN_103be5b8c(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,code *param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5d00);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5cf4);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_103be6ad0(0,param_4,param_5);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5cf8);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103be5cfc);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          (*param_6)(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 103be5d00; end: 103be6acf;  */

undefined * FUN_103be5d00(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar3 = param_1;
  func_0x000107c44980();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((int)lVar3 != 0) {
    lVar3 = param_1;
    func_0x000107c4c97c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6318);
      (*pcVar2)();
    }
    lVar4 = lVar3;
    func_0x000107c44a8c();
    func_0x000107c61170(lVar3);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((int)lVar4 != 0) {
      func_0x000107c4c97c();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be631c);
        (*pcVar2)();
      }
      lVar3 = param_1;
      func_0x000107c500bc();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be6320);
        (*pcVar2)();
      }
      lVar4 = lVar3;
      func_0x000107c500c0();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar17 = puVar6;
      if (lVar4 != 0) {
        puStack_68 = (undefined *)0x0;
        uVar5 = 0;
        FUN_103be6ad0(0,0x112df41a0,&PTR_PTR_1126bceb0);
        func_0x000107c5fc50(lVar4,&puStack_68,uVar5);
        func_0x000107c61170(lVar4);
        if (puStack_68 != (undefined *)0x0) {
          puVar17 = puStack_68;
        }
      }
      puStack_68 = puVar6;
      if ((ulong)puVar17 >> 0x3e == 0) {
        puVar15 = *(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar15 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar17) {
          puVar15 = puVar17;
        }
        func_0x000107c60480();
      }
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar15 != (undefined *)0x0) {
        puVar19 = (undefined *)0x0;
        puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          if (((ulong)puVar17 & 0xc000000000000001) == 0) {
            if (*(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103be62fc);
              (*pcVar2)();
            }
            puVar6 = *(undefined **)(puVar17 + (long)puVar19 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar6 = puVar19;
            func_0x000101a91ca0(puVar19,puVar17);
          }
          if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103be62f8);
            (*pcVar2)();
          }
          puVar19 = puVar19 + 1;
          puVar7 = puVar6;
          func_0x000107c500b4();
          func_0x000107c61180();
          puVar14 = puVar18;
          if (puVar7 != (undefined *)0x0) {
            puStack_70 = (undefined *)0x0;
            uVar5 = 0;
            FUN_103be6ad0(0,0x112df41b0,&PTR_PTR_1126bceb8);
            func_0x000107c5fc50(puVar7,&puStack_70,uVar5);
            func_0x000107c61170(puVar7);
            if (puStack_70 != (undefined *)0x0) {
              puVar14 = puStack_70;
            }
          }
          puStack_70 = puVar18;
          if ((ulong)puVar14 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar14) {
              puVar7 = puVar14;
            }
            func_0x000107c60480();
          }
          puVar8 = puVar18;
          if (puVar7 != (undefined *)0x0) {
            puVar20 = (undefined *)0x0;
            puVar12 = puVar18;
            do {
              if (((ulong)puVar14 & 0xc000000000000001) == 0) {
                if (*(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103be62e8);
                  (*pcVar2)();
                }
                puVar8 = *(undefined **)(puVar14 + (long)puVar20 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                puVar8 = puVar20;
                func_0x000101a91c8c(puVar20,puVar14);
              }
              if (SCARRY8((long)puVar20,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103be62e4);
                (*pcVar2)();
              }
              puVar20 = puVar20 + 1;
              puVar22 = puVar8;
              func_0x000107c500b8();
              func_0x000107c61180();
              puVar21 = puVar12;
              if (puVar22 != (undefined *)0x0) {
                puStack_78 = (undefined *)0x0;
                uVar5 = 0;
                FUN_103be6ad0(0,0x112df41c0,&PTR_PTR_1126bcd28);
                func_0x000107c5fc50(puVar22,&puStack_78,uVar5);
                func_0x000107c61170(puVar22);
                if (puStack_78 != (undefined *)0x0) {
                  puVar21 = puStack_78;
                }
              }
              puVar22 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
              if ((ulong)puVar21 >> 0x3e == 0) {
                puVar23 = *(undefined **)(puVar22 + 0x10);
              }
              else {
                puVar23 = puVar22;
                if ((undefined *)0x7fffffffffffffff < puVar21) {
                  puVar23 = puVar21;
                }
                func_0x000107c60480();
              }
              if (puVar23 != (undefined *)0x0) {
                puVar11 = (undefined *)0x0;
                do {
                  while( true ) {
                    if (((ulong)puVar21 & 0xc000000000000001) == 0) {
                      if (*(undefined **)(puVar22 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be62d0);
                        (*pcVar2)();
                      }
                      puVar9 = *(undefined **)(puVar21 + (long)puVar11 * 8 + 0x20);
                      func_0x000107c61174();
                    }
                    else {
                      puVar9 = puVar11;
                      func_0x000101a91abc(puVar11,puVar21);
                    }
                    puVar1 = puVar11 + 1;
                    if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be62cc);
                      (*pcVar2)();
                    }
                    puVar10 = puVar9;
                    func_0x000107c42444();
                    if ((int)puVar10 == 1) break;
                    func_0x000107c61170(puVar9);
LAB_103be6050:
                    puVar11 = puVar11 + 1;
                    if (puVar1 == puVar23) goto LAB_103be619c;
                  }
                  puVar10 = puVar9;
                  func_0x000107c40dc8();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar9);
                  if (puVar10 == (undefined *)0x0) goto LAB_103be6050;
                  puVar11 = puVar12;
                  func_0x000107c61550();
                  if ((((int)puVar11 == 0) || ((long)puVar12 < 0)) ||
                     (puVar11 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
                    if ((ulong)puVar12 >> 0x3e == 0) {
                      puVar9 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      puVar9 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
                      if ((undefined *)0x7fffffffffffffff < puVar12) {
                        puVar9 = puVar12;
                      }
                      func_0x000107c60480(puVar9);
                    }
                    puVar11 = (undefined *)0x0;
                    FUN_103be5158(0,puVar9 + 1,1,puVar12);
                  }
                  uVar13 = (ulong)puVar11 & 0xffffffffffffff8;
                  uVar16 = *(ulong *)(uVar13 + 0x10);
                  puVar12 = puVar11;
                  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar16) {
                    puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
                    FUN_103be5158(puVar12,uVar16 + 1,1,puVar11);
                    uVar13 = (ulong)puVar12 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar13 + 0x10) = uVar16 + 1;
                  *(undefined **)(uVar13 + uVar16 * 8 + 0x20) = puVar10;
                  puVar11 = puVar1;
                } while (puVar1 != puVar23);
              }
LAB_103be619c:
              func_0x000107c6142c(puVar21);
              func_0x000107c61170(puVar8);
              if ((ulong)puVar12 >> 0x3e == 0) {
                puVar22 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar22 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar12) {
                  puVar22 = puVar12;
                }
                func_0x000107c60480();
              }
              if ((ulong)puVar18 >> 0x3e == 0) {
                puVar8 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar8 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar18) {
                  puVar8 = puVar18;
                }
                func_0x000107c60480();
              }
              if (SCARRY8((long)puVar8,(long)puVar22)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103be62ec);
                (*pcVar2)();
              }
              FUN_103be5ad8(puVar8 + (long)puVar22,1,FUN_103be5158);
              puVar18 = puStack_70;
              uVar16 = (ulong)puStack_70 & 0xffffffffffffff8;
              FUN_103be5b8c(uVar16 + *(long *)(uVar16 + 0x10) * 8 + 0x20,
                            (*(ulong *)(uVar16 + 0x18) >> 1) - *(long *)(uVar16 + 0x10),puVar12,
                            0x112df90e8,&PTR_PTR_1126b0cc0,0x103be573c);
              func_0x000107c6142c();
              puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if ((long)puVar12 < (long)puVar22) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103be62f0);
                (*pcVar2)();
              }
              if (0 < (long)puVar12) {
                if (SCARRY8(*(long *)(uVar16 + 0x10),(long)puVar12)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103be62f4);
                  (*pcVar2)();
                }
                *(undefined **)(uVar16 + 0x10) = puVar12 + *(long *)(uVar16 + 0x10);
              }
              puVar12 = puVar8;
            } while (puVar20 != puVar7);
          }
          func_0x000107c6142c(puVar14);
          func_0x000107c61170(puVar6);
          FUN_103be59c4(puVar18,FUN_103be5158,0x112df90e8,&PTR_PTR_1126b0cc0,0x103be573c);
          puVar6 = puStack_68;
          puVar18 = puVar8;
        } while (puVar19 != puVar15);
      }
      func_0x000107c6142c(puVar17);
    }
  }
  return puVar6;
}



/* Entry: 103be6ad0; end: 103be6b0f;  */

void FUN_103be6ad0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103be6b10; end: 103be6b23;  */

bool FUN_103be6b10(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103be6b24; end: 103be6bcf;  */

void FUN_103be6b24(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103be6bd0; end: 103be6bfb;  */

void FUN_103be6bd0(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103be6bfc; end: 103be6c37; -[_TtC11SnapDocUtil11SnapDocUtil init] */

void FUN_103be6bfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103be6c38; end: 103be6c43;  */

bool FUN_103be6c38(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x000103be2adc();
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    bVar3 = false;
    if (uVar7 == 0) goto LAB_103be7408;
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
    if (uVar7 == 0) {
      bVar3 = false;
      goto LAB_103be7408;
    }
  }
  uVar8 = 0;
  uVar9 = 0;
  do {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7438);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar8;
      func_0x00010121c1ac(uVar8,param_1);
    }
    uVar1 = uVar8 + 1;
    if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7434);
      (*pcVar2)();
    }
    uVar5 = uVar4;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7458);
      (*pcVar2)();
    }
    uVar6 = uVar5;
    func_0x000107c498f0();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be745c);
      (*pcVar2)();
    }
    uVar5 = uVar6;
    func_0x000107c5dc0c();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    uVar8 = uVar8 + 1;
    uVar9 = uVar5;
  } while (uVar1 != uVar7);
  bVar3 = uVar5 != 0;
LAB_103be7408:
  func_0x000107c6142c(param_1);
  return bVar3;
}



/* Entry: 103be6c44; end: 103be6c7b; +[_TtC11SnapDocUtil11SnapDocUtil isImage:] */

uint FUN_103be6c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103be7754();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103be6c7c; end: 103be6c7f;  */

uint FUN_103be6c7c(ulong param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = param_1;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103be78f0);
    (*pcVar1)();
  }
  uVar4 = uVar3;
  func_0x000107c3f5b8();
  func_0x000107c61170();
  if ((int)uVar4 != 2) {
    FUN_103be2d64();
    if (uVar3 >> 0x3e == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) != 1) {
LAB_103be78b8:
        func_0x000107c6142c();
        goto LAB_103be78bc;
      }
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar4 = uVar3;
      }
      uVar7 = uVar4;
      func_0x000107c60480();
      if ((uVar7 != 1) || (func_0x000107c60480(), uVar4 == 0)) goto LAB_103be78b8;
    }
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103be78ec);
        (*pcVar1)();
      }
      lVar5 = *(long *)(uVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar5 = 0;
      func_0x00010121c1ac();
    }
    func_0x000107c6142c(uVar3);
    lVar6 = lVar5;
    func_0x000107c4c930();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be78f4);
      (*pcVar1)();
    }
    lVar5 = lVar6;
    func_0x000107c5d0f0();
    func_0x000107c61170(lVar6);
    if ((int)lVar5 == 0) {
      func_0x000103be745c();
      uVar2 = (uint)param_1;
      if ((param_1 & 1) == 0) {
        func_0x000103be3470();
        uVar2 = uVar2 ^ 1;
        goto LAB_103be78c0;
      }
    }
  }
LAB_103be78bc:
  uVar2 = 0;
LAB_103be78c0:
  return uVar2 & 1;
}



/* Entry: 103be6c80; end: 103be6cb7; +[_TtC11SnapDocUtil11SnapDocUtil isConsideredImage:] */

uint FUN_103be6c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103be77a4();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103be6cb8; end: 103be6cef; +[_TtC11SnapDocUtil11SnapDocUtil isVideo:] */

uint FUN_103be6cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103be78f4();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103be6cf0; end: 103be6d27; +[_TtC11SnapDocUtil11SnapDocUtil hasTimedTransforms:] */

uint FUN_103be6cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103be7600();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103be6d28; end: 103be6d5f; +[_TtC11SnapDocUtil11SnapDocUtil hasDynamicLayer:] */

uint FUN_103be6d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103be7314();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103be6d60; end: 103be6d97; +[_TtC11SnapDocUtil11SnapDocUtil hasAnimatedOverlay:] */

uint FUN_103be6d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103be7940();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103be6d98; end: 103be6dcf; +[_TtC11SnapDocUtil11SnapDocUtil hasTimedEdits:] */

uint FUN_103be6d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000103be745c();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103be6dd0; end: 103be6e07; +[_TtC11SnapDocUtil11SnapDocUtil totalDurationMs:] */

undefined8 FUN_103be6dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103be2924();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 103be6e08; end: 103be6e3f; +[_TtC11SnapDocUtil11SnapDocUtil isTranscoded:] */

uint FUN_103be6e08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000103be7b08();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103be6e40; end: 103be6e97; +[_TtC11SnapDocUtil11SnapDocUtil playbackLayers:] */

void FUN_103be6e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103be2cc0();
  func_0x000107c61170(param_3);
  uVar2 = 0;
  func_0x000101de16dc(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103be6e98; end: 103be70ef;  */

/* WARNING: Possible PIC construction at 0x000103be6ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be6f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be6fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be6fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be704c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be70a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be70b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be70ac) */
/* WARNING: Removing unreachable block (ram,0x000103be7050) */
/* WARNING: Removing unreachable block (ram,0x000103be70c4) */
/* WARNING: Removing unreachable block (ram,0x000103be7054) */
/* WARNING: Removing unreachable block (ram,0x000103be70ec) */
/* WARNING: Removing unreachable block (ram,0x000103be7084) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000103be6fbc) */
/* WARNING: Removing unreachable block (ram,0x000103be6f50) */
/* WARNING: Removing unreachable block (ram,0x000103be6efc) */
/* WARNING: Removing unreachable block (ram,0x000103be6f58) */
/* WARNING: Removing unreachable block (ram,0x000103be6fcc) */
/* WARNING: Removing unreachable block (ram,0x000103be6f64) */
/* WARNING: Removing unreachable block (ram,0x000103be70e8) */
/* WARNING: Removing unreachable block (ram,0x000103be6f98) */
/* WARNING: Removing unreachable block (ram,0x000103be6f08) */
/* WARNING: Removing unreachable block (ram,0x000103be70e4) */
/* WARNING: Removing unreachable block (ram,0x000103be6f3c) */
/* WARNING: Removing unreachable block (ram,0x000103be70bc) */
/* WARNING: Removing unreachable block (ram,0x000103be6fd0) */
/* WARNING: Removing unreachable block (ram,0x000103be6ffc) */

void FUN_103be6e98(undefined *param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 2) {
    func_0x000107c5ede8(param_1,0);
    func_0x000107c5ee20();
    func_0x0001080693fc();
  }
  else {
    if (param_2 != 3) {
      return;
    }
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    param_1 = puVar1;
    func_0x000107c5ed90();
    func_0x000107c48fd4(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103be70f0; end: 103be7283;  */

/* WARNING: Possible PIC construction at 0x000103be7120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be7168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be7124) */
/* WARNING: Removing unreachable block (ram,0x000103be7128) */
/* WARNING: Removing unreachable block (ram,0x000103be7190) */
/* WARNING: Removing unreachable block (ram,0x000103be7158) */
/* WARNING: Removing unreachable block (ram,0x000103be716c) */

void FUN_103be70f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 2) {
    func_0x000107c5ee20();
    func_0x0001080693fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103be7284; end: 103be72df; +[_TtC11SnapDocUtil11SnapDocUtil setCodecFormatOnPlaybackLayerFrom:mediaType:playbackLayer:] */

/* WARNING: Possible PIC construction at 0x000103be72c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be72cc) */

void FUN_103be7284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  FUN_103be7dd8(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103be72e0; end: 103be7313;  */

void FUN_103be72e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103be7314; end: 103be75ff;  */

bool FUN_103be7314(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x000103be2adc();
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    bVar3 = false;
    if (uVar7 == 0) goto LAB_103be7408;
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
    if (uVar7 == 0) {
      bVar3 = false;
      goto LAB_103be7408;
    }
  }
  uVar8 = 0;
  uVar9 = 0;
  do {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7438);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar8;
      func_0x00010121c1ac(uVar8,param_1);
    }
    uVar1 = uVar8 + 1;
    if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7434);
      (*pcVar2)();
    }
    uVar5 = uVar4;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7458);
      (*pcVar2)();
    }
    uVar6 = uVar5;
    func_0x000107c498f0();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be745c);
      (*pcVar2)();
    }
    uVar5 = uVar6;
    func_0x000107c5dc0c();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    uVar8 = uVar8 + 1;
    uVar9 = uVar5;
  } while (uVar1 != uVar7);
  bVar3 = uVar5 != 0;
LAB_103be7408:
  func_0x000107c6142c(param_1);
  return bVar3;
}



/* Entry: 103be7600; end: 103be7753;  */

bool FUN_103be7600(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  func_0x000103be2adc();
  uVar7 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar6 = uVar7;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar2 = 0;
  do {
    uVar5 = uVar2;
    if (uVar6 == uVar5) break;
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103be7734);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = uVar5;
      func_0x00010121c1ac(uVar5,param_1);
    }
    if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be7730);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be7750);
      (*pcVar1)();
    }
    uVar4 = uVar3;
    func_0x000107c5cf30();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be7754);
      (*pcVar1)();
    }
    uVar3 = uVar4;
    func_0x000107c5ca84();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be774c);
      (*pcVar1)();
    }
    uVar4 = uVar3;
    func_0x000107c40808();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    uVar2 = uVar5 + 1;
  } while (uVar4 < 2);
  func_0x000107c6142c(param_1);
  return uVar6 != uVar5;
}



/* Entry: 103be7754; end: 103be77a3;  */

uint FUN_103be7754(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_103be7314();
  if (((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x000103be745c(), (uVar2 & 1) == 0)) {
    FUN_103be7600();
    uVar1 = (uint)param_1;
    if ((param_1 & 1) == 0) {
      FUN_103be4240();
      uVar1 = uVar1 ^ 1;
      goto LAB_103be7788;
    }
  }
  uVar1 = 0;
LAB_103be7788:
  return uVar1 & 1;
}



/* Entry: 103be77a4; end: 103be78f3;  */

uint FUN_103be77a4(ulong param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = param_1;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103be78f0);
    (*pcVar1)();
  }
  uVar4 = uVar3;
  func_0x000107c3f5b8();
  func_0x000107c61170();
  if ((int)uVar4 != 2) {
    FUN_103be2d64();
    if (uVar3 >> 0x3e == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) != 1) {
LAB_103be78b8:
        func_0x000107c6142c();
        goto LAB_103be78bc;
      }
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar4 = uVar3;
      }
      uVar7 = uVar4;
      func_0x000107c60480();
      if ((uVar7 != 1) || (func_0x000107c60480(), uVar4 == 0)) goto LAB_103be78b8;
    }
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103be78ec);
        (*pcVar1)();
      }
      lVar5 = *(long *)(uVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar5 = 0;
      func_0x00010121c1ac();
    }
    func_0x000107c6142c(uVar3);
    lVar6 = lVar5;
    func_0x000107c4c930();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103be78f4);
      (*pcVar1)();
    }
    lVar5 = lVar6;
    func_0x000107c5d0f0();
    func_0x000107c61170(lVar6);
    if ((int)lVar5 == 0) {
      func_0x000103be745c();
      uVar2 = (uint)param_1;
      if ((param_1 & 1) == 0) {
        func_0x000103be3470();
        uVar2 = uVar2 ^ 1;
        goto LAB_103be78c0;
      }
    }
  }
LAB_103be78bc:
  uVar2 = 0;
LAB_103be78c0:
  return uVar2 & 1;
}



/* Entry: 103be78f4; end: 103be793f;  */

uint FUN_103be78f4(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_103be7314();
  if (((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x000103be745c(), (uVar2 & 1) == 0)) {
    FUN_103be7600();
    uVar1 = (uint)param_1;
    if ((param_1 & 1) == 0) {
      FUN_103be4240();
      return uVar1 & 1;
    }
  }
  return 1;
}



/* Entry: 103be7940; end: 103be7dd7;  */

undefined8 FUN_103be7940(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  func_0x000103be2adc();
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    uVar7 = 0;
    if (uVar6 == 0) goto LAB_103be7aac;
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
    if (uVar6 == 0) {
      uVar7 = 0;
      goto LAB_103be7aac;
    }
  }
  uVar8 = 0;
  do {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7adc);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar8;
      func_0x00010121c1ac(uVar8,param_1);
    }
    uVar1 = uVar8 + 1;
    if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7ad8);
      (*pcVar2)();
    }
    uVar4 = uVar3;
    func_0x000107c4abb4();
    if ((int)uVar4 == 1) {
      uVar4 = uVar3;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7b04);
        (*pcVar2)();
      }
      uVar5 = uVar4;
      func_0x000107c3e240();
      func_0x000107c61170(uVar4);
      if ((int)uVar5 != 5) {
        uVar4 = uVar3;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7b08);
          (*pcVar2)();
        }
        uVar5 = uVar4;
        func_0x000107c3e240();
        func_0x000107c61170(uVar4);
        if ((int)uVar5 != 3) goto LAB_103be7a38;
      }
      func_0x000107c61170(uVar3);
    }
    else {
LAB_103be7a38:
      uVar4 = uVar3;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7b00);
        (*pcVar2)();
      }
      uVar5 = uVar4;
      func_0x000107c498f0();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103be7afc);
        (*pcVar2)();
      }
      uVar4 = uVar5;
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar5);
      if (uVar4 != 0) {
        uVar7 = 1;
        goto LAB_103be7aac;
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar1 != uVar6);
  uVar7 = 0;
LAB_103be7aac:
  func_0x000107c6142c(param_1);
  return uVar7;
}



/* Entry: 103be7dd8; end: 103be80df;  */

void FUN_103be7dd8(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_1106e5970;
  func_0x000107c613fc(&UNK_1106e5970,0x20,7);
  *(undefined4 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar4 = &UNK_1106e5998;
  func_0x000107c613fc(&UNK_1106e5998,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103be82a8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_103be82b4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10130d598;
  puStack_88 = &UNK_1106e59b0;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1106e59e8;
  func_0x000107c613fc(&UNK_1106e59e8,0x20,7);
  *(undefined4 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_1106e5a10;
  func_0x000107c613fc(&UNK_1106e5a10,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x103be82f0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_103be82fc;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101380a90;
  puStack_88 = &UNK_1106e5a28;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1106e5a60;
  func_0x000107c613fc(&UNK_1106e5a60,0x20,7);
  *(undefined4 *)(puVar9 + 0x10) = param_2;
  *(undefined8 *)(puVar9 + 0x18) = param_3;
  puVar10 = &UNK_1106e5a88;
  func_0x000107c613fc(&UNK_1106e5a88,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_103be831c;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_80 = (code *)0x103be8338;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10130d598;
  puStack_88 = &UNK_1106e5aa0;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_78;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c4c620(param_1);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x3e,0x71,0x21,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103be80d8);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x3e,0x8c,0xf,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar10;
    func_0x000107c61544(puVar10,"",0x3e,0x96,0x1a,1);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103be80e0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103be80dc);
  (*pcVar2)();
}



/* Entry: 103be80e0; end: 103be80e3;  */

void FUN_103be80e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc632e8;
  func_0x000107c61520(&UNK_10dc632e8,&UNK_1106e5950);
  puRam0000000112ff5db0 = puVar1;
  return;
}



/* Entry: 103be80e4; end: 103be8123;  */

void FUN_103be80e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc632e8;
  func_0x000107c61520(&UNK_10dc632e8,&UNK_1106e5950);
  puRam0000000112ff5db0 = puVar1;
  return;
}



/* Entry: 103be8124; end: 103be8287;  */

int FUN_103be8124(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103be81a0;
        goto LAB_103be8184;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103be8184:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103be81a0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103be8288; end: 103be82a7;  */

void FUN_103be8288(void)

{
  func_0x000107c61168(&PTR_PTR_112943070);
  return;
}



/* Entry: 103be82a8; end: 103be82b3;  */

/* WARNING: Possible PIC construction at 0x000103be6ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be6f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be6fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be6fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be704c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be70a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be70b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be70ac) */
/* WARNING: Removing unreachable block (ram,0x000103be7050) */
/* WARNING: Removing unreachable block (ram,0x000103be70c4) */
/* WARNING: Removing unreachable block (ram,0x000103be7054) */
/* WARNING: Removing unreachable block (ram,0x000103be70ec) */
/* WARNING: Removing unreachable block (ram,0x000103be7084) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000103be6fbc) */
/* WARNING: Removing unreachable block (ram,0x000103be6f50) */
/* WARNING: Removing unreachable block (ram,0x000103be6efc) */
/* WARNING: Removing unreachable block (ram,0x000103be6f58) */
/* WARNING: Removing unreachable block (ram,0x000103be6fcc) */
/* WARNING: Removing unreachable block (ram,0x000103be6f64) */
/* WARNING: Removing unreachable block (ram,0x000103be70e8) */
/* WARNING: Removing unreachable block (ram,0x000103be6f98) */
/* WARNING: Removing unreachable block (ram,0x000103be6f08) */
/* WARNING: Removing unreachable block (ram,0x000103be70e4) */
/* WARNING: Removing unreachable block (ram,0x000103be6f3c) */
/* WARNING: Removing unreachable block (ram,0x000103be70bc) */
/* WARNING: Removing unreachable block (ram,0x000103be6fd0) */
/* WARNING: Removing unreachable block (ram,0x000103be6ffc) */

void FUN_103be82a8(undefined *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (*(int *)(unaff_x20 + 0x10) == 2) {
    func_0x000107c5ede8(param_1,0,*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c5ee20();
    func_0x0001080693fc();
  }
  else {
    if (*(int *)(unaff_x20 + 0x10) != 3) {
      return;
    }
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    param_1 = puVar1;
    func_0x000107c5ed90();
    func_0x000107c48fd4(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103be82b4; end: 103be82d3;  */

void FUN_103be82b4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103be82d4; end: 103be82fb;  */

void FUN_103be82d4(long param_1,long param_2)

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


