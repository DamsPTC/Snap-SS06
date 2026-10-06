/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100082294; end: 100082327;  */

void FUN_100082294(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = PTR___sBpWV_11034d680 + 0x40;
  puStack_38 = PTR___sBoWV_11034d678 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000100082288();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd385b8;
    func_0x000107c61524(param_1,0,4,&puStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 100082328; end: 10008232f;  */

void FUN_100082328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 100082330; end: 1000823a7;  */

void FUN_100082330(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___syycWV_11034f1c0 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61528(param_1,0,2,&puStack_30);
  }
  return;
}



/* Entry: 1000823a8; end: 10008257b;  */

void FUN_1000823a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar2;
  
  lVar1 = 0;
  func_0x000100082288(0,*(undefined8 *)(unaff_x20 + 0x50));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined8 *)(&stack0xffffffffffffffd0 + -extraout_x8);
  *puVar2 = param_1;
  *(undefined8 *)(&stack0xffffffffffffffd8 + -extraout_x8) = param_2;
  func_0x000107c6159c(puVar2);
  func_0x000107c613fc();
  func_0x000100082438(puVar2);
  return;
}



/* Entry: 10008257c; end: 10008265b;  */

undefined8 * FUN_10008257c(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_100082618;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_100082618:
  if (uVar5 != 1) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    func_0x000107c6157c(uVar2);
  }
  else {
    (**(code **)(lVar3 + 0x10))(param_1);
  }
  *(bool *)((long)param_1 + uVar4) = uVar5 == 1;
  return param_1;
}



/* Entry: 10008265c; end: 1000826ff;  */

void FUN_10008265c(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1000826e8;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1000826e8:
  if (uVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000826f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 2));
  return;
}



/* Entry: 100082700; end: 10008271f;  */

void FUN_100082700(void)

{
  func_0x000107c61168(&PTR_PTR_113092ed8);
  return;
}



/* Entry: 100082720; end: 10008279b;  */

void FUN_100082720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  long *unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  func_0x000107c61428(puVar1,auStack_58,1,0);
  cVar2 = *(char *)((long)puVar1 + 0x11);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(char *)(puVar1 + 2) = (char)param_3;
  *(char *)((long)puVar1 + 0x11) = (char)((ulong)param_3 >> 8);
  if (cVar2 == '\x01') {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10008279c);
  (*pcVar3)();
}



/* Entry: 10008279c; end: 1000827c3; +[SCClearableReplaySubject clearableReplaySubjectWithBufferSize:] */

void FUN_10008279c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f4();
  func_0x000107c45a7c(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000827c4; end: 1000827f3; -[SCClearableReplaySubject .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000827c4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112796918);
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 1000827f4; end: 1000828fb; -[SCClearableReplaySubject initWithBufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1000827f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e630;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c9690;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796908);
    *(undefined **)((long)puVar1 + (long)_DAT_112796908) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279690c);
    *(undefined **)((long)puVar1 + (long)_DAT_11279690c) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796910) = param_3;
    puVar2 = PTR_PTR_1126e3010;
    func_0x000107c610f4();
    func_0x000107c47ba0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796914);
    *(undefined **)((long)puVar1 + (long)_DAT_112796914) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000828fc; end: 100082913;  */

void FUN_1000828fc(long param_1,long param_2)

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



/* Entry: 100082914; end: 10008298b; -[SCPublishSubject subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100082914(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c49b78();
  if ((int)lVar1 != 0) {
    func_0x000107c3fedc(param_3);
  }
  func_0x000107c3d7b4(*(undefined8 *)(param_1 + _DAT_112796804),param_2,param_3);
  puVar2 = PTR_PTR_1126e2fe0;
  func_0x000107c610f4(PTR_PTR_1126e2fe0);
  func_0x000107c47b64();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10008298c; end: 10008299f; -[SCPublishSubject isComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10008298c(long param_1)

{
  return *(byte *)(param_1 + _DAT_112796800) & 1;
}



/* Entry: 1000829a0; end: 1000829cf; -[SCDisposableObserver bindTo:] */

void FUN_1000829a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bef7e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_addDisposable__11259b928,param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c11f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSException_1126af520,PTR_s_raise_format__112625628,
             &PTR____CFConstantStringClassReference_11102e1f8,
             &PTR____CFConstantStringClassReference_11102e218);
  return;
}



/* Entry: 1000829d0; end: 100082b37; -[SCDisposableObserverLifecycle addDisposable:] */

/* WARNING: Possible PIC construction at 0x000100082ab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100082abc) */
/* WARNING: Removing unreachable block (ram,0x000100082ac4) */

void FUN_1000829d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  puVar9 = *(undefined8 **)(param_1 + 0x50);
  if (puVar9 < *(undefined8 **)(param_1 + 0x58)) {
    func_0x000107c61174(param_3);
    puVar12 = puVar9 + 1;
    *puVar9 = param_3;
  }
  else {
    lVar11 = (long)puVar9 - *(long *)(param_1 + 0x48);
    uVar1 = (lVar11 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x000107c312bc();
LAB_100082b10:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100082b14);
      (*pcVar4)();
    }
    uVar6 = (long)*(undefined8 **)(param_1 + 0x58) - *(long *)(param_1 + 0x48);
    uVar8 = (long)uVar6 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar8 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_100082b10;
      }
      lVar5 = uVar8 << 3;
      func_0x000107c60e20();
    }
    puVar9 = (undefined8 *)(lVar5 + lVar11);
    func_0x000107c61174(param_3);
    puVar12 = puVar9 + 1;
    *puVar9 = param_3;
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    lVar11 = (long)puVar2 - (long)puVar3;
    puVar9 = (undefined8 *)((long)puVar9 + lVar11);
    puVar7 = puVar2;
    if (lVar11 != 0) {
      do {
        uVar10 = *puVar7;
        puVar12 = puVar7 + 1;
        *puVar7 = 0;
        *puVar9 = uVar10;
        puVar7 = puVar12;
        puVar9 = puVar9 + 1;
      } while (puVar12 != puVar3);
      param_3 = *puVar2;
      goto code_r0x000107c61170;
    }
    *(undefined8 **)(param_1 + 0x48) = puVar9;
    *(undefined8 **)(param_1 + 0x50) = puVar12;
    *(ulong *)(param_1 + 0x58) = lVar5 + uVar8 * 8;
    if (puVar2 != (undefined8 *)0x0) {
      func_0x000107c60e14(puVar2);
    }
  }
  *(undefined8 **)(param_1 + 0x50) = puVar12;
  func_0x000107c60d8c(param_1 + 8);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100082b38; end: 100082bab; -[SCSystemServicesProviderImplementation initWithIsFeatureApplication:scopeGraphLauncher:] */

undefined8
FUN_100082b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103b63f8;
  func_0x000107c613fc(&UNK_1103b63f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  FUN_100082bd8(param_3,FUN_100a164c4,puVar1);
  func_0x000107c61574(puVar1);
  return param_3;
}



/* Entry: 100082bac; end: 100082bcf;  */

void FUN_100082bac(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100082bd0; end: 100082bd7;  */

void FUN_100082bd0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 100082bd8; end: 100083083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100082bd8(ulong param_1,undefined8 **param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  undefined1 *puVar14;
  uint uVar15;
  long unaff_x20;
  undefined8 *puVar16;
  undefined8 **ppuVar17;
  ulong uVar18;
  undefined8 **appuStack_88 [3];
  undefined8 *puStack_70;
  undefined **ppuStack_68;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d7f110) = 0;
  lVar2 = _DAT_112d7f150;
  ppuVar3 = (undefined8 **)0x0;
  FUN_100083084();
  ppuVar6 = ppuVar3;
  func_0x000107c613fc();
  FUN_1000830a4();
  *(undefined8 ***)(unaff_x20 + lVar2) = ppuVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112d7f118) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7f128) = 0;
  FUN_1000830c0();
  puVar16 = *ppuVar6;
  ppuVar4 = (undefined8 **)0x0;
  func_0x0001000831a0();
  ppuVar6 = ppuVar4;
  func_0x000107c613fc();
  ppuStack_68 = &PTR_DAT_1103b63a0;
  appuStack_88[0] = ppuVar6;
  puStack_70 = ppuVar4;
  func_0x000107c6157c(puVar16);
  FUN_1000831c0(appuStack_88);
  func_0x000107c61574(puVar16);
  pppuVar5 = appuStack_88;
  func_0x0001000834e4();
  FUN_100083504();
  ppuVar17 = *pppuVar5;
  ppuVar4 = (undefined8 **)0x0;
  func_0x0001000835e4();
  ppuVar6 = ppuVar4;
  func_0x000107c613fc();
  ppuStack_68 = &PTR_DAT_1103b63d0;
  appuStack_88[0] = ppuVar6;
  puStack_70 = ppuVar4;
  func_0x000107c6157c(ppuVar17);
  FUN_100083604(appuStack_88);
  func_0x000107c61574(ppuVar17);
  pppuVar5 = appuStack_88;
  func_0x0001000834e4();
  FUN_1000298f0();
  func_0x000107c61428();
  ppuVar6 = *pppuVar5;
  func_0x000107c61174();
  ppuVar4 = ppuVar6;
  FUN_1000836dc();
  func_0x000107c61170();
  if ((((ulong)ppuVar4 & 1) != 0) || (FUN_100083728(), ((ulong)ppuVar6 & 1) != 0)) {
    func_0x000104859d38(0);
    ppuVar6 = *(undefined8 ***)(unaff_x20 + lVar2);
    ppuStack_68 = &PTR_DAT_1103b8a60;
    uVar7 = 0;
    appuStack_88[0] = ppuVar6;
    puStack_70 = ppuVar3;
    func_0x000101438588();
    func_0x000107c613fc();
    pppuVar5 = appuStack_88;
    func_0x00010143744c();
    ppuStack_68 = &PTR_DAT_1103b8958;
    appuStack_88[0] = pppuVar5;
    puStack_70 = (undefined8 *)uVar7;
    func_0x000107c6157c(ppuVar6);
    func_0x000104859afc(appuStack_88);
    puVar8 = PTR_PTR_1126df8f0;
    func_0x000107c61168(PTR_PTR_1126df8f0);
    ppuVar6 = *(undefined8 ***)(unaff_x20 + lVar2);
    ppuStack_68 = &PTR_DAT_1103b8a60;
    appuStack_88[0] = ppuVar6;
    puStack_70 = ppuVar3;
    func_0x000101438ca8(0);
    func_0x000107c610f8();
    func_0x000107c6157c(ppuVar6);
    ppuVar6 = (undefined8 **)0x0;
    func_0x000101438634();
    func_0x000107c59090(puVar8);
    func_0x000107c61170();
  }
  FUN_100083750();
  if (((ulong)ppuVar6 & 1) == 0) {
    func_0x000100083790();
    uVar15 = 2;
    if ((param_1 & 1) == 0) {
      uVar15 = 3;
    }
    if (((ulong)ppuVar6 & 1) != 0) {
      uVar15 = 1;
    }
    uVar18 = (ulong)uVar15;
  }
  else {
    uVar18 = 0;
  }
  uVar7 = 0;
  FUN_1000837d0(0);
  func_0x000107c610f8();
  FUN_1000837f0(uVar18,uVar7);
  lVar1 = _DAT_112d7f148;
  *(ulong *)(unaff_x20 + _DAT_112d7f148) = uVar18;
  ppuVar6 = (undefined8 **)0x0;
  FUN_10008383c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 ***)(unaff_x20 + _DAT_112d7f130) = ppuVar6;
  FUN_1000285a8(0x112d7f180,&UNK_10d93d2d8);
  appuStack_88[0] = *(undefined8 ***)(unaff_x20 + lVar1);
  func_0x000107c61174();
  pppuVar5 = appuStack_88;
  FUN_1000838ec(pppuVar5);
  FUN_1000285a8(0x112d7f188,&UNK_10d93d2e0);
  pppuVar9 = appuStack_88;
  appuStack_88[0] = ppuVar6;
  FUN_1000838ec(pppuVar9);
  FUN_1000285a8(0x112d7f190,&UNK_10d93d2e8);
  appuStack_88[0] = *(undefined8 ***)(unaff_x20 + lVar2);
  ppuStack_68 = &PTR_DAT_1103b8a60;
  puStack_70 = ppuVar3;
  func_0x000107c6157c();
  pppuVar10 = appuStack_88;
  FUN_1000838ec(pppuVar10);
  func_0x0001000834e4(appuStack_88);
  FUN_1000285a8(0x112d7f198,&UNK_10d93d2f0);
  if (lRam0000000112d7f138 != -1) {
    func_0x000107c61568(0x112d7f138,FUN_1000774c4);
  }
  appuStack_88[0] = ppuRam0000000112d7f140;
  pppuVar11 = appuStack_88;
  FUN_1000838ec(pppuVar11);
  FUN_1000285a8(0x112d7f1a0,&UNK_10d93d2f8);
  FUN_10008399c(0);
  func_0x000107c613fc();
  FUN_1000839bc(param_2,param_3);
  appuStack_88[0] = param_2;
  func_0x000107c6157c(param_3);
  pppuVar12 = appuStack_88;
  FUN_1000838ec(pppuVar12);
  func_0x000107c61574(param_2);
  pppuVar13 = pppuVar5;
  FUN_1000839c8(pppuVar5,pppuVar9,pppuVar10,pppuVar11,pppuVar12);
  func_0x000107c61574(pppuVar5);
  func_0x000107c61574(pppuVar9);
  func_0x000107c61574(pppuVar10);
  func_0x000107c61574(pppuVar11);
  func_0x000107c61574(pppuVar12);
  FUN_100083b20(appuStack_88);
  func_0x000107c61574(pppuVar13);
  *(undefined8 ***)(unaff_x20 + _DAT_112d7f120) = appuStack_88[0];
  puVar14 = &stack0xffffffffffffff50;
  func_0x000107c61154(puVar14,PTR_s_init_1125d9248);
  func_0x000107c61170(ppuVar6);
  return puVar14;
}



/* Entry: 100083084; end: 1000830a3;  */

void FUN_100083084(void)

{
  func_0x000107c61168(&PTR_PTR_112d9db60);
  return;
}



/* Entry: 1000830a4; end: 1000830bf;  */

void FUN_1000830a4(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 1000830c0; end: 10008311f;  */

undefined8 FUN_1000830c0(void)

{
  if (lRam0000000112ffd6c8 != -1) {
    func_0x000107c61568(0x112ffd6c8,FUN_100083120);
  }
  return 0x11380d1d8;
}



/* Entry: 100083120; end: 10008317f;  */

void FUN_100083120(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100083100();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100083180();
  uVar2 = uVar1;
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined ***)(param_1 + 0x30) = &PTR_DAT_1106f1fc0;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined1 *)(param_1 + 0x38) = 0;
  lRam000000011380d1d8 = param_1;
  return;
}



/* Entry: 100083180; end: 1000831bf;  */

void FUN_100083180(void)

{
  func_0x000107c61168(&PTR_PTR_112ffd670);
  return;
}



/* Entry: 1000831c0; end: 100083373;  */

void FUN_1000831c0(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar3 = (int)puVar4;
  func_0x000107c4a02c();
  if (iVar3 == 0) {
    if (lRam0000000112ffd6c8 != -1) {
      func_0x000107c61568(0x112ffd6c8,FUN_100083120);
    }
    lVar1 = lRam000000011380d1d8;
    func_0x000107c61428(lRam000000011380d1d8 + 0x10,auStack_48,0,0);
    func_0x000103c7cef8(lVar1 + 0x10,auStack_70);
    FUN_1000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 8))
              (&UNK_103c7cf9c,0,&UNK_103c7cfa4,0,
               "Platform/Public/Shims/AssertionShims/SnapAssertionHandlerProxy.swift",0x44,2,0xc,
               uStack_58,lStack_50);
    func_0x0001000834e4(auStack_70);
  }
  else {
    if ((*(byte *)(unaff_x20 + 0x38) & 1) != 0) {
      if (lRam0000000112ffd6c8 != -1) {
        func_0x000107c61568(0x112ffd6c8,FUN_100083120);
      }
      lVar1 = lRam000000011380d1d8;
      func_0x000107c61428(lRam000000011380d1d8 + 0x10,auStack_48,0,0);
      func_0x000103c7cef8(lVar1 + 0x10,auStack_70);
      FUN_1000a8868(auStack_70,uStack_58);
      (**(code **)(lStack_50 + 0x20))
                (&UNK_103c7d004,0,
                 "Platform/Public/Shims/AssertionShims/SnapAssertionHandlerProxy.swift",0x44,2,0x10,
                 uStack_58,lStack_50);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100083374);
      (*pcVar2)();
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0x21,0);
    FUN_100083374(unaff_x20 + 0x10,param_1);
    func_0x000107c614a8(auStack_70);
    *(undefined1 *)(unaff_x20 + 0x38) = 1;
  }
  return;
}



/* Entry: 100083374; end: 1000834d3;  */

/* WARNING: Possible PIC construction at 0x000100083460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100083464) */

void FUN_100083374(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 == param_2) {
    return;
  }
  lVar3 = param_1[3];
  lVar5 = param_2[3];
  if (lVar3 == lVar5) {
    if ((*(byte *)(*(long *)(lVar3 + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010008342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
      return;
    }
    uVar4 = *param_1;
    func_0x000107c6157c(*param_2);
  }
  else {
    param_1[3] = lVar5;
    param_1[4] = param_2[4];
    lVar6 = *(long *)(lVar3 + -8);
    lVar7 = *(long *)(lVar5 + -8);
    uVar1 = *(uint *)(lVar7 + 0x50);
    if ((*(byte *)(lVar6 + 0x52) >> 1 & 1) == 0) {
      (**(code **)(lVar6 + 0x20))(auStack_68,param_1,lVar3);
      if ((uVar1 >> 0x11 & 1) == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      }
      else {
        *param_1 = *param_2;
        func_0x000107c6157c();
      }
      (**(code **)(lVar6 + 8))(auStack_68,lVar3);
      return;
    }
    uVar4 = *param_1;
    if ((uVar1 >> 0x11 & 1) == 0) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
    }
    else {
      uVar2 = *param_2;
      *param_1 = uVar2;
      func_0x000107c6157c(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar4);
  return;
}



/* Entry: 1000834d4; end: 100083503;  */

void FUN_1000834d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100083504; end: 100083563;  */

undefined8 FUN_100083504(void)

{
  if (lRam0000000112f38050 != -1) {
    func_0x000107c61568(0x112f38050,FUN_100083564);
  }
  return 0x113806e88;
}



/* Entry: 100083564; end: 1000835c3;  */

void FUN_100083564(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100083544();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1000835c4();
  uVar2 = uVar1;
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110604d18;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined1 *)(param_1 + 0x38) = 0;
  lRam0000000113806e88 = param_1;
  return;
}



/* Entry: 1000835c4; end: 100083603;  */

void FUN_1000835c4(void)

{
  func_0x000107c61168(&PTR_PTR_112f37ff8);
  return;
}



/* Entry: 100083604; end: 1000836cb;  */

void FUN_100083604(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar3 = (int)puVar4;
  func_0x000107c4a02c();
  if (iVar3 == 0) {
    puStack_50 = &UNK_10308033c;
    uStack_48 = 0;
    if (lRam0000000112ffd6c8 != -1) {
      func_0x000107c61568(0x112ffd6c8,FUN_100083120);
    }
    lVar1 = lRam000000011380d1d8;
    puStack_68 = auStack_60;
    puStack_70 = &UNK_103c7cf44;
    func_0x000107c61428(lRam000000011380d1d8 + 0x10,auStack_98,0,0);
    func_0x000103c7cef8(lVar1 + 0x10,auStack_c0);
    puVar5 = auStack_c0;
    FUN_1000a8868(puVar5,uStack_a8);
    puStack_c8 = auStack_80;
    puStack_d0 = &UNK_103c7cf6c;
    (**(code **)(lStack_a0 + 8))
              (puVar5,&UNK_103c7cf9c,0,&UNK_103c7cf70,auStack_e0,
               "Platform/Public/Shims/LocalizationShims/SnapLocalizationHandlerProxy.swift",0x4a,2,
               0xd,uStack_a8,lStack_a0);
    func_0x0001000834e4(auStack_c0);
    return;
  }
  if ((*(byte *)(unaff_x20 + 0x38) & 1) == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,&stack0xffffffffffffffc8,0x21,0);
    FUN_100083374(unaff_x20 + 0x10,param_1);
    func_0x000107c614a8(&stack0xffffffffffffffc8);
    *(undefined1 *)(unaff_x20 + 0x38) = 1;
    return;
  }
  func_0x000103c7ce18(&UNK_103080358,0,
                      "Platform/Public/Shims/LocalizationShims/SnapLocalizationHandlerProxy.swift",
                      0x4a,2,0x11);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000836cc);
  (*pcVar2)();
}



/* Entry: 1000836cc; end: 1000836db;  */

void FUN_1000836cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1000836dc; end: 100083727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1000836dc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11309bf58;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4a614();
    func_0x000107c615e8(lVar1);
  }
  return lVar2;
}



/* Entry: 100083728; end: 10008374f;  */

void FUN_100083728(void)

{
  func_0x000107c61168(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  func_0x000107c5accc(0x3fb999999999999a);
  return;
}



/* Entry: 100083750; end: 1000837cf;  */

undefined1 FUN_100083750(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112d9dbe8,auStack_38,0,0);
  return uRam0000000112d9dbe8;
}



/* Entry: 1000837d0; end: 1000837ef;  */

void FUN_1000837d0(void)

{
  func_0x000107c61168(&PTR_PTR_1129bba00);
  return;
}



/* Entry: 1000837f0; end: 10008383b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000837f0(undefined1 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_11307ce50) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10008383c; end: 10008385b;  */

void FUN_10008383c(void)

{
  func_0x000107c61168(&PTR_PTR_1129bb700);
  return;
}



/* Entry: 10008385c; end: 1000838eb; -[_TtC30AppStartupStateServiceProvider36AppStartupStateServiceImplementation init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008385c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11307cd58) = 0;
  *(undefined **)(param_1 + _DAT_11307cd60) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_11307cd48;
  uVar3 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000838ec; end: 10008399b;  */

void FUN_1000838ec(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x50);
  lVar1 = 0;
  func_0x000100082288(0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar3,param_1,lVar2);
  func_0x000107c6159c(puVar3,lVar1,1);
  func_0x000107c613fc();
  func_0x000100082438(puVar3);
  return;
}



/* Entry: 10008399c; end: 1000839bb;  */

void FUN_10008399c(void)

{
  func_0x000107c61168(&PTR_PTR_112d9dd48);
  return;
}



/* Entry: 1000839bc; end: 1000839c7;  */

void FUN_1000839bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1000839c8; end: 100083a83;  */

void FUN_1000839c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d2b8,&UNK_10d93da00);
  puVar1 = &UNK_1103b6fe8;
  func_0x000107c613fc(&UNK_1103b6fe8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_100084104,puVar1);
  return;
}



/* Entry: 100083a84; end: 100083ac3;  */

void FUN_100083a84(void)

{
  func_0x000107c61168(&PTR_PTR_1129dbc48);
  return;
}



/* Entry: 100083ac4; end: 100083ad3;  */

void FUN_100083ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e81e810);
  return;
}



/* Entry: 100083ad4; end: 100083b1f;  */

void FUN_100083ad4(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_18 = &UNK_10dd384c0;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x60);
  return;
}



/* Entry: 100083b20; end: 100083ec7;  */

void FUN_100083b20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar5 = 0;
  func_0x000100082288(0,lVar7);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12;
  lStack_108 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar6 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  lVar13 = unaff_x20[3];
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar4 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar4 != 0) {
    lVar10 = *(long *)(*unaff_x20 + 0x68);
    func_0x000107c61428((long)unaff_x20 + lVar10,auStack_100,0,0);
    (**(code **)(lVar9 + 0x10))(lVar8,(long)unaff_x20 + lVar10,lVar5);
    lVar10 = lVar8;
    func_0x000107c614c4(lVar8,lVar5);
    if ((int)lVar10 == 1) {
      pcVar11 = *(code **)(lStack_108 + 0x20);
      (*pcVar11)(lVar6,lVar8,lVar7);
      (*pcVar11)(param_1,lVar6,lVar7);
      return;
    }
    (**(code **)(lVar9 + 8))(lVar8,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  func_0x000107c61428(puVar1,auStack_80,0,0);
  if (*(char *)((long)puVar1 + 0x11) == '\x01') {
    func_0x000107c6157c();
  }
  else {
    uStack_120 = *puVar1;
    uVar2 = puVar1[1];
    uVar3 = *(undefined1 *)(puVar1 + 2);
    uStack_118 = param_1;
    func_0x000107c61428(0x1138153c0,auStack_c0,0,0);
    FUN_10008a8e8(0x1138153c0,auStack_e8);
    if (lStack_d0 != 0) {
      func_0x000104857124(auStack_e8,auStack_a8);
      lStack_128 = lVar9;
      FUN_1000a8868(auStack_a8,uStack_90);
      pcStack_130 = *(code **)(lStack_88 + 8);
      func_0x000107c61580();
      lVar9 = lStack_128;
      (*pcStack_130)(uStack_120,uVar2,uVar3,&UNK_104857794);
      func_0x000107c61574();
      func_0x0001000834e4(auStack_a8);
      param_1 = uStack_118;
      goto LAB_100083dec;
    }
    func_0x000107c6157c();
    func_0x00010008a938(auStack_e8);
    param_1 = uStack_118;
  }
  FUN_100083ec8();
LAB_100083dec:
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar4 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100083eb4);
    (*pcVar11)();
  }
  lVar6 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar6,auStack_a8,0,0);
  (**(code **)(lVar9 + 0x10))(lVar12,(long)unaff_x20 + lVar6,lVar5);
  lVar8 = lVar12;
  func_0x000107c614c4(lVar12,lVar5);
  lVar6 = lStack_110;
  if ((int)lVar8 == 1) {
    pcVar11 = *(code **)(lStack_108 + 0x20);
    (*pcVar11)(lStack_110,lVar12,lVar7);
    (*pcVar11)(param_1,lVar6,lVar7);
    func_0x000107c61574();
    return;
  }
  (**(code **)(lVar9 + 8))(lVar12,lVar5);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100083ec8);
  (*pcVar11)();
}



/* Entry: 100083ec8; end: 100083f1b;  */

undefined1 FUN_100083ec8(long param_1)

{
  undefined8 uVar1;
  undefined1 uStack_31;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c611ec(uVar1);
  FUN_100083f1c(&uStack_31,param_1);
  func_0x000107c611f0(uVar1);
  return uStack_31;
}



/* Entry: 100083f1c; end: 100084103;  */

void FUN_100083f1c(undefined8 param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = *param_2;
  lVar7 = *(long *)(lVar6 + 0x50);
  lVar10 = *(long *)(lVar7 + -8);
  auStack_a0[1] = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)auStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000100082288(0,lVar7);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined8 *)(lVar9 - extraout_x12);
  lVar6 = *(long *)(lVar6 + 0x68);
  func_0x000107c61428((long)param_2 + lVar6,auStack_78,0,0);
  (**(code **)(lVar4 + 0x10))(puVar5,(long)param_2 + lVar6,lVar2);
  puVar3 = puVar5;
  func_0x000107c614c4(puVar5,lVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    auStack_a0[0] = puVar5[1];
    (*(code *)*puVar5)(lVar8);
    (**(code **)(lVar10 + 0x10))(lVar9,lVar8,lVar7);
    func_0x000107c6159c(lVar9,lVar2,1);
    func_0x000107c61428((long)param_2 + lVar6,auStack_90,0x21,0);
    (**(code **)(lVar4 + 0x28))((long)param_2 + lVar6,lVar9,lVar2);
    func_0x000107c614a8(auStack_90);
    lVar2 = param_2[3];
    func_0x000107c61428(lVar2 + 0x10,auStack_90,0x21,0);
    func_0x000107c60b28(1,lVar2 + 0x10);
    func_0x000107c614a8(auStack_90);
    func_0x000107c61574(auStack_a0[0]);
    (**(code **)(lVar10 + 8))(lVar8,lVar7);
  }
  else {
    (**(code **)(lVar4 + 8))(puVar5,lVar2);
  }
  *(bool *)auStack_a0[1] = bVar1;
  return;
}



/* Entry: 100084104; end: 100084113;  */

/* WARNING: Possible PIC construction at 0x0001000841c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000841d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000841c4) */
/* WARNING: Removing unreachable block (ram,0x0001000841d4) */

void FUN_100084104(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_1103b7030;
  func_0x000107c613fc(&UNK_1103b7030,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112d9d2c0;
  FUN_1000285a8(0x112d9d2c0,&UNK_10d93da38);
  func_0x000107c613fc();
  pcVar6 = FUN_10008a980;
  FUN_1000841f8(FUN_10008a980,puVar4,uVar5);
  FUN_100084214(&UNK_10d93da10,0x24,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100084114; end: 1000841f7;  */

/* WARNING: Possible PIC construction at 0x0001000841c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000841d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000841c4) */
/* WARNING: Removing unreachable block (ram,0x0001000841d4) */

void FUN_100084114(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1103b7030;
  func_0x000107c613fc(&UNK_1103b7030,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0x112d9d2c0;
  FUN_1000285a8(0x112d9d2c0,&UNK_10d93da38);
  func_0x000107c613fc();
  pcVar3 = FUN_10008a980;
  FUN_1000841f8(FUN_10008a980,puVar1,uVar2);
  FUN_100084214(&UNK_10d93da10,0x24,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1000841f8; end: 100084213;  */

void FUN_1000841f8(void)

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



/* Entry: 100084214; end: 100084417;  */

void FUN_100084214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_58,1,0);
  cVar1 = *(char *)(unaff_x20 + 0x31);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(char *)(unaff_x20 + 0x30) = (char)param_3;
  *(char *)(unaff_x20 + 0x31) = (char)((ulong)param_3 >> 8);
  if (cVar1 == '\x01') {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100084284);
  (*pcVar2)();
}



/* Entry: 100084418; end: 10008441b;  */

void FUN_100084418(void)

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



/* Entry: 10008441c; end: 10008445f;  */

void FUN_10008441c(void)

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



/* Entry: 100084460; end: 1000844c7;  */

void FUN_100084460(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61590(unaff_x20[2],0xffffffffffffffff,0xffffffffffffffff);
  func_0x000107c61574(unaff_x20[3]);
  lVar3 = *(long *)(*unaff_x20 + 0x68);
  lVar1 = 0;
  func_0x000100082288(0,*(undefined8 *)(lVar2 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar3,lVar1);
  return;
}



/* Entry: 1000844c8; end: 1000844eb;  */

void FUN_1000844c8(void)

{
  FUN_100084460();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1000844ec; end: 1000844fb;  */

void FUN_1000844ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1000844fc; end: 10008450b; -[_TtC17AppLaunchSignaler24ForegroundLaunchDetector processLaunchedForForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1000844fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307c8d0);
}



/* Entry: 10008450c; end: 10008453b; -[SCAppDelegateProperties setOpenURLEvents:] */

void FUN_10008450c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10008453c; end: 10008456b; -[SCAppDelegateProperties setNotificationLifecycleEvents:] */

void FUN_10008453c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10008456c; end: 10008459b; -[SCAppDelegateProperties setBackgroundPrefetchHandler:] */

void FUN_10008456c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10008459c; end: 1000845cb; -[SCAppDelegateProperties setNotificationAPNSTokenEvents:] */

void FUN_10008459c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000845cc; end: 1000845fb; -[SCAppDelegateProperties setInAppNotificationInteractionEvents:] */

void FUN_1000845cc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1000845fc; end: 10008462b; -[SCAppDelegateProperties setNotificationProcessingStepEventEmitter:] */

void FUN_1000845fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10008462c; end: 10008465b; -[SCAppDelegateProperties setSystemNotificationInteractionEventHandlingPluginRegistry:] */

void FUN_10008462c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10008465c; end: 10008468b; -[SCAppDelegateProperties setContinueUserActivityEventHandlingPluginRegistry:] */

void FUN_10008465c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10008468c; end: 1000846bb; -[SCAppDelegateProperties setApplicationOpenFromQuickAction:] */

void FUN_10008468c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000846bc; end: 10008472f; -[SCPushNotificationDelegate initWithAppDelegateProperties:] */

undefined1 * FUN_1000846bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7310;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100084730; end: 100084773; -[SCTracer currentTraceClockUs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100084730(long param_1)

{
  param_1 = param_1 + _DAT_11309bf58;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4102c();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 100084774; end: 10008478f; +[SCAppLaunchSignaler signalAppDelegateInitEnd] */

void FUN_100084774(undefined8 param_1)

{
  func_0x000107c6106c();
  uRam0000000113813690 = param_1;
  return;
}



/* Entry: 100084790; end: 10008490b; -[SCMainAppDelegate application:willFinishLaunchingWithOptions:] */

undefined8 FUN_100084790(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar3;
  
  func_0x000107c61174(param_3);
  lVar3 = param_4;
  func_0x000107c61174();
  iVar2 = (int)lVar3;
  FUN_1000816d4();
  if (iVar2 == 0) {
    pcVar6 = "ActivePrewarm";
    func_0x000107c60ffc();
    if (pcVar6 == (char *)0x0) {
      func_0x000107c61174(param_4);
LAB_100084828:
      lVar3 = param_4;
      func_0x000107c4d9e8(param_4,param_2,
                          *(undefined8 *)
                           PTR__UIApplicationLaunchOptionsRemoteNotificationKey_110345a48);
      func_0x000107c61180();
      if (lVar3 == 0) {
        lVar3 = param_4;
        func_0x000107c4d9e8(param_4,param_2,
                            *(undefined8 *)PTR__UIApplicationLaunchOptionsLocationKey_110345a40);
        func_0x000107c61180();
        if (lVar3 == 0) {
          lVar3 = param_4;
          func_0x000107c4d9e8(param_4,param_2,
                              *(undefined8 *)
                               PTR__UIApplicationLaunchOptionsBluetoothCentralsKey_110345a30);
          func_0x000107c61180();
          func_0x000107c61170();
          func_0x000107c61170(param_4);
          if (lVar3 == 0) goto LAB_10008489c;
          goto LAB_100084874;
        }
      }
      func_0x000107c61170();
    }
    else {
      cVar1 = *pcVar6;
      func_0x000107c61174(param_4);
      if (cVar1 != '1') goto LAB_100084828;
    }
    func_0x000107c61170(param_4);
  }
  else {
    puVar4 = PTR_PTR_1126b6ac0;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c4f2bc();
    func_0x000107c61170(puVar4);
    if (((ulong)puVar5 & 1) != 0) goto LAB_10008489c;
  }
LAB_100084874:
  puVar4 = PTR_PTR_1126b6ac8;
  func_0x000107c5a9bc(PTR_PTR_1126b6ac8);
  func_0x000107c61180();
  func_0x000107c41498();
  func_0x000107c61170(puVar4);
LAB_10008489c:
  func_0x000107c4ad9c(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10008490c; end: 100084a1b; -[SCMainAppDelegate legacy_application:willFinishLaunchingWithOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10008490c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127208fc);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4102c();
  func_0x000107c49788(puVar1,param_2,uVar4,puVar3,&PTR____CFConstantStringClassReference_110dcda98);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4102c();
  *(undefined **)(param_1 + _DAT_112720900) = puVar2;
  func_0x000107c61170(puVar1);
  return 1;
}



/* Entry: 100084a1c; end: 100084a83; -[SCTracer insertSyncSpanWithSpanStartTimeUs:spanEndTimeUs:name:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100084a1c(long param_1)

{
  param_1 = param_1 + _DAT_11309bf58;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c49788();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 100084a84; end: 100084b07; -[SCMainAppDelegate application:didFinishLaunchingWithOptions:] */

undefined8
FUN_100084a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x000107c40f90(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(puVar1);
  func_0x000107c5b008(PTR_PTR_1126ae4e0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return 1;
}



/* Entry: 100084b08; end: 100084bcb; +[SCAppLaunchSignaler signalUIKitDidFinishLaunching] */

void FUN_100084b08(void)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_30 = &UNK_1044731ec;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_1044726a8;
  puStack_38 = &UNK_110775350;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c61574(uStack_28);
  uVar2 = 0;
  func_0x000107c60810(0,0x20,0,0,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c60808();
  func_0x000107c61180();
  func_0x000107c607f8();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(ppuVar1);
  return;
}



/* Entry: 100084bcc; end: 100084be3;  */

void FUN_100084bcc(long param_1,long param_2)

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



/* Entry: 100084be4; end: 100084c3b; +[GTMSessionFetcher reconnectFetchersForBackgroundSessionsOnAppLaunch:] */

void FUN_100084be4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  puStack_28 = &UNK_100c33254;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  FUN_10007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 100084c3c; end: 100084c93; +[GTMSessionUploadFetcher reconnectFetchersForBackgroundSessionsOnAppLaunch:] */

void FUN_100084c3c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  puStack_28 = &UNK_100c33554;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  FUN_10007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 100084c94; end: 100084cf3; -[SCMainAppDelegate application:configurationForConnectingSceneSession:options:] */

void FUN_100084c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UISceneConfiguration_1126b6b28;
  func_0x000107c508bc(param_4);
  func_0x000107c61180();
  func_0x000107c4012c(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcdc58,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100084cf4; end: 100085183; -[SCMainAppSceneDelegate scene:willConnectToSession:options:] */

/* WARNING: Possible PIC construction at 0x000100084d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100084dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100084e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100084e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100084e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100084e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100084eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100084ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100084fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100084fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000850f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000851fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010008529c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000852cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000853b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000853c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000853e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010008541c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000854c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000854d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100085558) */
/* WARNING: Removing unreachable block (ram,0x00010008555c) */
/* WARNING: Removing unreachable block (ram,0x000100085560) */
/* WARNING: Removing unreachable block (ram,0x000100085518) */
/* WARNING: Removing unreachable block (ram,0x0001000854d8) */
/* WARNING: Removing unreachable block (ram,0x0001000854c8) */
/* WARNING: Removing unreachable block (ram,0x000100085494) */
/* WARNING: Removing unreachable block (ram,0x00010008545c) */
/* WARNING: Removing unreachable block (ram,0x000100085468) */
/* WARNING: Removing unreachable block (ram,0x0001000853e8) */
/* WARNING: Removing unreachable block (ram,0x000100085420) */
/* WARNING: Removing unreachable block (ram,0x0001000854d0) */
/* WARNING: Removing unreachable block (ram,0x000100085434) */
/* WARNING: Removing unreachable block (ram,0x0001000853ec) */
/* WARNING: Removing unreachable block (ram,0x0001000853c8) */
/* WARNING: Removing unreachable block (ram,0x0001000853b8) */
/* WARNING: Removing unreachable block (ram,0x00010008538c) */
/* WARNING: Removing unreachable block (ram,0x0001000852d0) */
/* WARNING: Removing unreachable block (ram,0x0001000852d8) */
/* WARNING: Removing unreachable block (ram,0x0001000853d0) */
/* WARNING: Removing unreachable block (ram,0x0001000852e0) */
/* WARNING: Removing unreachable block (ram,0x000100085390) */
/* WARNING: Removing unreachable block (ram,0x0001000853a8) */
/* WARNING: Removing unreachable block (ram,0x000100085358) */
/* WARNING: Removing unreachable block (ram,0x000100085244) */
/* WARNING: Removing unreachable block (ram,0x000100085258) */
/* WARNING: Removing unreachable block (ram,0x00010008526c) */
/* WARNING: Removing unreachable block (ram,0x000100085280) */
/* WARNING: Removing unreachable block (ram,0x000100085540) */
/* WARNING: Removing unreachable block (ram,0x000100085294) */
/* WARNING: Removing unreachable block (ram,0x000100085200) */
/* WARNING: Removing unreachable block (ram,0x00010008522c) */
/* WARNING: Removing unreachable block (ram,0x000100085204) */
/* WARNING: Removing unreachable block (ram,0x000100085148) */
/* WARNING: Removing unreachable block (ram,0x000100085180) */
/* WARNING: Removing unreachable block (ram,0x000100085520) */
/* WARNING: Removing unreachable block (ram,0x0001000851d8) */
/* WARNING: Removing unreachable block (ram,0x000100085160) */
/* WARNING: Removing unreachable block (ram,0x000100085138) */
/* WARNING: Removing unreachable block (ram,0x000100085124) */
/* WARNING: Removing unreachable block (ram,0x0001000850f4) */
/* WARNING: Removing unreachable block (ram,0x000100085100) */
/* WARNING: Removing unreachable block (ram,0x000100085048) */
/* WARNING: Removing unreachable block (ram,0x000100085054) */
/* WARNING: Removing unreachable block (ram,0x00010008511c) */
/* WARNING: Removing unreachable block (ram,0x00010008508c) */
/* WARNING: Removing unreachable block (ram,0x0001000850a0) */
/* WARNING: Removing unreachable block (ram,0x0001000850a4) */
/* WARNING: Removing unreachable block (ram,0x0001000850b4) */
/* WARNING: Removing unreachable block (ram,0x0001000850bc) */
/* WARNING: Removing unreachable block (ram,0x000100085008) */
/* WARNING: Removing unreachable block (ram,0x000100084fd8) */
/* WARNING: Removing unreachable block (ram,0x000100084fe4) */
/* WARNING: Removing unreachable block (ram,0x000100084fc8) */
/* WARNING: Removing unreachable block (ram,0x000100084efc) */
/* WARNING: Removing unreachable block (ram,0x000100084f08) */
/* WARNING: Removing unreachable block (ram,0x000100085000) */
/* WARNING: Removing unreachable block (ram,0x000100084f40) */
/* WARNING: Removing unreachable block (ram,0x000100084f4c) */
/* WARNING: Removing unreachable block (ram,0x000100084f50) */
/* WARNING: Removing unreachable block (ram,0x000100084f60) */
/* WARNING: Removing unreachable block (ram,0x000100084f68) */
/* WARNING: Removing unreachable block (ram,0x000100084eb8) */
/* WARNING: Removing unreachable block (ram,0x000100084e6c) */
/* WARNING: Removing unreachable block (ram,0x000100084ec0) */
/* WARNING: Removing unreachable block (ram,0x00010008500c) */
/* WARNING: Removing unreachable block (ram,0x000100085128) */
/* WARNING: Removing unreachable block (ram,0x000100085020) */
/* WARNING: Removing unreachable block (ram,0x000100084ed4) */
/* WARNING: Removing unreachable block (ram,0x000100084e70) */
/* WARNING: Removing unreachable block (ram,0x000100084e54) */
/* WARNING: Removing unreachable block (ram,0x000100084e2c) */
/* WARNING: Removing unreachable block (ram,0x000100084e0c) */
/* WARNING: Removing unreachable block (ram,0x000100084dc8) */
/* WARNING: Removing unreachable block (ram,0x000100084d98) */
/* WARNING: Removing unreachable block (ram,0x000100084db4) */
/* WARNING: Removing unreachable block (ram,0x000100085584) */
/* WARNING: Removing unreachable block (ram,0x0001000852a0) */
/* WARNING: Removing unreachable block (ram,0x000100085588) */
/* WARNING: Removing unreachable block (ram,0x000100085298) */

void FUN_100084cf4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puVar1 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
  func_0x000107c61158(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
  uVar2 = param_3;
  func_0x000107c6115c(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    param_3 = 0;
  }
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c61180();
  func_0x000107c4168c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100085184; end: 1000855ab; -[SCMainAppDelegate handleSetupFromSceneDelegate:] */

/* WARNING: Possible PIC construction at 0x0001000851fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010008529c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000852cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000853b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000853c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000853e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010008541c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000854c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000854d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100085580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100085558) */
/* WARNING: Removing unreachable block (ram,0x00010008555c) */
/* WARNING: Removing unreachable block (ram,0x000100085560) */
/* WARNING: Removing unreachable block (ram,0x000100085518) */
/* WARNING: Removing unreachable block (ram,0x0001000854d8) */
/* WARNING: Removing unreachable block (ram,0x0001000854c8) */
/* WARNING: Removing unreachable block (ram,0x000100085494) */
/* WARNING: Removing unreachable block (ram,0x00010008545c) */
/* WARNING: Removing unreachable block (ram,0x000100085468) */
/* WARNING: Removing unreachable block (ram,0x0001000853e8) */
/* WARNING: Removing unreachable block (ram,0x000100085420) */
/* WARNING: Removing unreachable block (ram,0x0001000854d0) */
/* WARNING: Removing unreachable block (ram,0x000100085434) */
/* WARNING: Removing unreachable block (ram,0x0001000853ec) */
/* WARNING: Removing unreachable block (ram,0x0001000853c8) */
/* WARNING: Removing unreachable block (ram,0x0001000853b8) */
/* WARNING: Removing unreachable block (ram,0x00010008538c) */
/* WARNING: Removing unreachable block (ram,0x0001000852d0) */
/* WARNING: Removing unreachable block (ram,0x0001000852d8) */
/* WARNING: Removing unreachable block (ram,0x0001000853d0) */
/* WARNING: Removing unreachable block (ram,0x0001000852e0) */
/* WARNING: Removing unreachable block (ram,0x000100085390) */
/* WARNING: Removing unreachable block (ram,0x0001000853a8) */
/* WARNING: Removing unreachable block (ram,0x000100085358) */
/* WARNING: Removing unreachable block (ram,0x000100085244) */
/* WARNING: Removing unreachable block (ram,0x000100085258) */
/* WARNING: Removing unreachable block (ram,0x00010008526c) */
/* WARNING: Removing unreachable block (ram,0x000100085280) */
/* WARNING: Removing unreachable block (ram,0x000100085540) */
/* WARNING: Removing unreachable block (ram,0x000100085294) */
/* WARNING: Removing unreachable block (ram,0x000100085200) */
/* WARNING: Removing unreachable block (ram,0x00010008522c) */
/* WARNING: Removing unreachable block (ram,0x000100085204) */
/* WARNING: Removing unreachable block (ram,0x000100085584) */
/* WARNING: Removing unreachable block (ram,0x0001000852a0) */
/* WARNING: Removing unreachable block (ram,0x000100085588) */
/* WARNING: Removing unreachable block (ram,0x000100085298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100085184(long param_1,undefined8 param_2,undefined *param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c5affc(PTR_PTR_1126ae4e0);
  func_0x000107c4c4ec(PTR_PTR_1126b6ac8);
  if (*(long *)(param_1 + _DAT_112720904) == 0) {
    param_3 = PTR_PTR_1126b6ac0;
    func_0x000107c5a9bc(PTR_PTR_1126b6ac0);
    func_0x000107c61180();
    func_0x000107c4f2bc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1000855ac; end: 1000855db; +[SCAppLaunchSignaler signalSceneConnected] */

void FUN_1000855ac(undefined8 param_1)

{
  if ((bRam0000000113813678 & 1) == 0) {
    bRam0000000113813678 = 1;
    func_0x000107c6106c();
    uRam0000000113813680 = param_1;
  }
  return;
}



/* Entry: 1000855dc; end: 1000856f7; +[SCConfigHeuristicRecoveryManagerImpl markSceneConnected] */

void FUN_1000855dc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  if (lRam0000000113084258 != -1) {
    func_0x000107c61568(0x113084258,FUN_10006e83c);
  }
  uVar1 = uRam0000000113084260;
  puVar3 = &UNK_110784f40;
  func_0x000107c613fc(&UNK_110784f40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x100085700;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  uStack_40 = 0x1000856fc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10006eb60;
  puStack_48 = &UNK_110784f58;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar5 = puStack_38;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  FUN_10006eaa4(uVar1,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar3;
  func_0x000107c61544(puVar3,"",0x73,0x1ab,0x14,1);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000856f8);
  (*pcVar2)();
}



/* Entry: 1000856f8; end: 100085717;  */

void FUN_1000856f8(long param_1,long param_2)

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



/* Entry: 100085718; end: 10008576f; -[SCApplicationState setApplicationState:] */

void FUN_100085718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1000857cc;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 100085770; end: 1000857cb; -[SCDispatchLock lock:] */

/* WARNING: Possible PIC construction at 0x00010006eb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006eb08) */

void FUN_100085770(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (lVar3 == 0) {
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    if ((bRam0000000113817d68 & 1) == 0) {
      iVar1 = 0x13817d68;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        pcVar2 = (code *)0xffffffffffffffff;
        func_0x000107c60f9c(0xffffffffffffffff,"dispatch_sync");
        pcRam0000000113817d60 = pcVar2;
        func_0x000107c60e4c(0x113817d68);
      }
    }
    pcVar2 = pcRam0000000113817d60;
    FUN_10002a3a8(param_3);
    func_0x000107c61180();
    (*pcVar2)(uVar4,param_3);
  }
  else {
    func_0x000107c40538();
    func_0x000107c61180();
    FUN_10006eaa4(uVar4,lVar3);
    param_3 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1000857cc; end: 1000857d7;  */

void FUN_1000857cc(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 1000857d8; end: 100085ac3; -[SCMainAppDelegate legacy_application:didFinishLaunchingWithOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1000857d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c61174(param_4);
  func_0x000107c5a9bc(puVar1);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112720900);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4102c();
  func_0x000107c49788(puVar1,param_2,uVar8,puVar3,&PTR____CFConstantStringClassReference_110dcdad8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae4e0;
  func_0x000107c610f4();
  uVar8 = param_3;
  func_0x000107c3dfc0(param_3);
  lVar6 = (long)_DAT_1127208ec;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x000107c4de78(uVar4);
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x000107c4d7ec(uVar5);
  func_0x000107c61180();
  func_0x000107c45758(puVar1,param_2,uVar8,uVar4,uVar5);
  lVar7 = (long)_DAT_112720904;
  uVar8 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  puVar1 = PTR_PTR_1126b6b00;
  func_0x000107c610f4(PTR_PTR_1126b6b00);
  puVar2 = PTR_PTR_1126aec70;
  func_0x000107c5a9f0(PTR_PTR_1126aec70);
  func_0x000107c61180();
  func_0x000107c4718c(puVar1,param_2,param_1,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c55b88(*(undefined8 *)(param_1 + _DAT_1127208e4),param_2,puVar1);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar2);
  lVar6 = param_1;
  func_0x000107c3ada0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + lVar7));
  func_0x000107c61170(param_4);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc(PTR_PTR_1126ae520);
  func_0x000107c61180();
  func_0x000107c3dd90();
  func_0x000107c61170(puVar2);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127208e0);
  func_0x000107c41bd4(uVar8);
  func_0x000107c61180();
  func_0x000107c4d664();
  func_0x000107c61170(uVar8);
  func_0x000107c3dd94(*(undefined8 *)(param_1 + lVar7));
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4102c();
  *(undefined **)(param_1 + _DAT_112720908) = puVar3;
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  return lVar6;
}



/* Entry: 100085ac4; end: 100085b07; -[SCUIApplication applicationState] */

undefined * FUN_100085ac4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc(PTR_PTR_1126ae520);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100085b08; end: 100085baf; -[SCApplicationState applicationState] */

undefined8 FUN_100085b08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_100085be4;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 8),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  func_0x000107c60bcc(&uStack_40,8);
  return uVar1;
}



/* Entry: 100085bb0; end: 100085be3;  */

void FUN_100085bb0(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  return;
}



/* Entry: 100085be4; end: 100085bf7;  */

void FUN_100085be4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  return;
}



/* Entry: 100085bf8; end: 100085c23;  */

void FUN_100085bf8(long param_1)

{
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100085c24; end: 100085c2b; -[SCAppDelegateProperties openURLEvents] */

undefined8 FUN_100085c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100085c2c; end: 100085c33; -[SCAppDelegateProperties notificationLifecycleEvents] */

undefined8 FUN_100085c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100085c34; end: 100085c87; -[SCAppLaunchSignaler initWithApplicationState:openURLEvents:notificationLifecycleEvents:] */

void FUN_100085c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  FUN_100085c88(param_3,param_4,param_5);
  return;
}



/* Entry: 100085c88; end: 100085fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100085c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined1 uVar13;
  byte bVar14;
  byte bVar15;
  undefined4 uVar16;
  byte bVar17;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puVar8;
  
  ppuVar10 = &puStack_b0;
  ppuVar12 = &puStack_b0;
  func_0x000107c614f0();
  lVar3 = _DAT_11307c850;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  *(undefined1 *)(unaff_x20 + _DAT_11307c858) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307c860);
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11307c868) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11307c870) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307c878);
  *puVar1 = 0x505041203a583247;
  puVar1[1] = 0xef48434e55414c5f;
  *(undefined8 *)(unaff_x20 + _DAT_11307c880) = 0;
  puVar7 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x000107c61180();
  puVar8 = puVar7;
  FUN_10008602c();
  iVar4 = (int)puVar8;
  func_0x000100086040();
  if ((((ulong)puVar8 & 1) == 0) || (iVar5 = iVar4, func_0x00010008606c(), iVar5 == 0)) {
    uVar13 = 0;
    if (param_1 == 2) {
      uVar16 = 2;
      bVar15 = 0;
      goto LAB_100085e30;
    }
    bVar14 = 0;
  }
  else {
    if ((bRam00000001138136c0 & 1) == 0) {
      bVar14 = 0;
      bVar17 = 0;
    }
    else {
      if (lRam000000011307c8c8 == -1) {
        bVar14 = 1;
      }
      else {
        func_0x000107c61568(0x11307c8c8,0x1000815b4);
        bVar14 = bRam00000001138136c0;
      }
      bVar17 = *(byte *)(lRam0000000113813750 + _DAT_11307c8d0) ^ 1;
    }
    uVar16 = 2;
    uVar13 = 1;
    bVar15 = param_1 != 2;
    if ((param_1 == 2) || ((bVar17 & 1) != 0)) goto LAB_100085e30;
  }
  uVar16 = 3;
  if (iVar4 == 0) {
    uVar16 = 1;
  }
  bVar15 = (byte)iVar4 & bVar14;
LAB_100085e30:
  puVar7[_DAT_11307c870] = uVar13;
  puVar7[_DAT_11307c868] = bVar15;
  FUN_1000860d4(uVar16);
  puVar6 = &UNK_1107752e8;
  puVar9 = puVar6;
  func_0x000107c613fc(&UNK_1107752e8,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,puVar7);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = &UNK_104473218;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1044732c8;
  puStack_98 = &UNK_110775300;
  puStack_88 = puVar9;
  func_0x000107c60bc4(&puStack_b0);
  puVar9 = puStack_88;
  puVar8 = puVar7;
  func_0x000107c61174();
  func_0x000107c61574(puVar9);
  uVar11 = param_2;
  func_0x000107c5c320(param_2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c3e924(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c613fc(&UNK_1107752e8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,puVar8);
  puStack_90 = &UNK_104473220;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_102e0c0f4;
  puStack_98 = &UNK_110775328;
  puStack_88 = puVar6;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  uVar11 = param_3;
  func_0x000107c5c320(param_3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c3e924(uVar11);
  func_0x000107c61170(uVar11);
  uVar11 = puRam000000011307c828;
  puRam000000011307c828 = puVar7;
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar11);
  return puVar8;
}



/* Entry: 100086000; end: 100086023;  */

void FUN_100086000(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


