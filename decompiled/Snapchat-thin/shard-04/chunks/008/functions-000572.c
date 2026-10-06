/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10396a144; end: 10396a423;  */

void FUN_10396a144(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  lVar2 = param_1;
  func_0x000101c8e4e8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 5;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  puVar3 = PTR__OBJC_CLASS___CNContactFormatter_1126b8498;
  func_0x000107c61168();
  func_0x000107c41804();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
  *(undefined **)(lVar2 + 0x20) = puVar3;
  *(undefined8 *)(lVar2 + 0x28) = uVar12;
  puVar4 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
  func_0x000107c610f8(PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0);
  func_0x000107c61174(uVar12);
  uVar12 = 0x112e10cc0;
  func_0x0001000285a8(0x112e10cc0,&UNK_10d9ebe50);
  lVar5 = lVar2;
  func_0x000107c5fc48(lVar2,uVar12);
  func_0x000107c61574(lVar2);
  func_0x000107c47088(puVar4);
  func_0x000107c61170(lVar5);
  puVar3 = PTR__OBJC_CLASS___CNContact_1126b4ad8;
  func_0x000107c61168(PTR__OBJC_CLASS___CNContact_1126b4ad8);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  func_0x000107c4ec54(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c57664(puVar4);
  func_0x000107c61170(puVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_1106b1f58;
  func_0x000107c613fc(&UNK_1106b1f58,0x18,7);
  *(undefined ***)(puVar3 + 0x10) = &puStack_68;
  puVar7 = &UNK_1106b1f80;
  func_0x000107c613fc(&UNK_1106b1f80,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10396a424;
  *(undefined **)(puVar7 + 0x18) = puVar3;
  pcStack_78 = FUN_10396a498;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_101c91a3c;
  puStack_80 = &UNK_1106b1f98;
  ppuVar8 = &puStack_98;
  puStack_70 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar11 = puStack_70;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar11);
  puStack_98 = (undefined *)0x0;
  puVar9 = puVar6;
  func_0x000107c429b8();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar6);
  puVar11 = puStack_98;
  puVar6 = puStack_98;
  func_0x000107c61174(puStack_98);
  puVar10 = puVar7;
  func_0x000107c61544(puVar7,"",0x84,0x26,0x4d,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar10 & 1) == 0) {
    if ((int)puVar9 == 0) {
      func_0x000107c5ed30(puVar11);
      func_0x000107c61170(puVar6);
      func_0x000107c61654();
      func_0x000107c614ac(puVar11);
    }
    puVar7 = puStack_68;
    if (pcVar1 != (code *)0x0) {
      func_0x000107c61434(puStack_68);
      (*pcVar1)();
      func_0x000107c6142c(puVar7);
    }
    func_0x000107c61170(puVar4);
    func_0x000107c6142c(puStack_68);
    func_0x000107c61574(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10396a424);
  (*pcVar1)();
}



/* Entry: 10396a424; end: 10396a497;  */

void FUN_10396a424(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong *puVar3;
  
  puVar3 = *(ulong **)(unaff_x20 + 0x10);
  FUN_10396a530();
  uVar2 = *puVar3 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar2 + 0x10);
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_10396a5a0(uVar2,uVar1 + 1,1);
    *puVar3 = uVar2;
    uVar2 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar2 + uVar1 * 8 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10396a498; end: 10396a4b7;  */

void FUN_10396a498(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10396a4b8; end: 10396a4d3;  */

void FUN_10396a4b8(long param_1,long param_2)

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



/* Entry: 10396a4d4; end: 10396a52f;  */

void FUN_10396a4d4(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_10396a840();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112fb9d68;
  plVar5 = (long *)&UNK_10dc2a660;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10396a530; end: 10396a59f;  */

void FUN_10396a530(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_10396a5a0(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 10396a5a0; end: 10396a6c7;  */

ulong FUN_10396a5a0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10396a6c8);
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
  FUN_10396a6c8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10396a6c4);
      (*pcVar1)();
    }
    FUN_10396a748(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10396a6c8; end: 10396a747;  */

undefined * FUN_10396a6c8(undefined *param_1,undefined *param_2)

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
    FUN_10396a4d4();
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



/* Entry: 10396a748; end: 10396a83f;  */

long FUN_10396a748(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10396a83c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10396a840);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10396a840(0);
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
      FUN_10396a840(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10396a838);
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



/* Entry: 10396a840; end: 10396a883;  */

void FUN_10396a840(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb9d60 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CNContact_1126b4ad8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112fb9d60 = puVar1;
  return;
}



/* Entry: 10396a884; end: 10396a88b;  */

void FUN_10396a884(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_10396a840(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10396a88c; end: 10396a8cf;  */

void FUN_10396a88c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fb9d70 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5eab8(0xff);
  puVar2 = PTR___s10ContactsUI19ContactAccessButtonV05SwiftB04ViewAAMc_11034ba00;
  func_0x000107c61520(PTR___s10ContactsUI19ContactAccessButtonV05SwiftB04ViewAAMc_11034ba00,uVar1);
  puRam0000000112fb9d70 = puVar2;
  return;
}



/* Entry: 10396a8d0; end: 10396a8df; -[_TtC27SCGenericStoryQueryServices27SCGenericStoryQueryServices publicUserStoryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396a8d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb9d78));
  return;
}



/* Entry: 10396a8e0; end: 10396a8ef; -[_TtC27SCGenericStoryQueryServices27SCGenericStoryQueryServices publicUserStoryMultiQueryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396a8e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb9d80));
  return;
}



/* Entry: 10396a8f0; end: 10396a8ff; -[_TtC27SCGenericStoryQueryServices27SCGenericStoryQueryServices publicUserStoryStoryFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396a8f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb9d88));
  return;
}



/* Entry: 10396a900; end: 10396a973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396a900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb9d78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb9d80) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fb9d88) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10396a974; end: 10396aa03; -[_TtC27SCGenericStoryQueryServices27SCGenericStoryQueryServices initWithGenericStoryQueryCoordinator:genericStoryMultiQueryCoordinator:genericSingleStoryFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396a974(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fb9d78) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fb9d80) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fb9d88) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10396aa04; end: 10396aa63; -[_TtC27SCGenericStoryQueryServices27SCGenericStoryQueryServices init] */

void FUN_10396aa04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenericStoryQueryServices.SCGenericStoryQueryServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10396aa30);
  (*pcVar1)();
}



/* Entry: 10396aa64; end: 10396aaab; -[_TtC27SCGenericStoryQueryServices27SCGenericStoryQueryServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010396aa80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010396aa84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396aa64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb9d78));
  return;
}



/* Entry: 10396aaac; end: 10396ab17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396aaac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10396aea0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fb9dc0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10396ab18; end: 10396ab83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396ab18(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb9dc0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10396ab84; end: 10396abe3; -[_TtC38SearchBaseScopedFactoryServiceProvider26SCSearchBaseScopedServices init] */

void FUN_10396ab84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchBaseScopedFactoryServiceProvider.SCSearchBaseScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10396abb0);
  (*pcVar1)();
}



/* Entry: 10396abe4; end: 10396abf3; -[_TtC38SearchBaseScopedFactoryServiceProvider26SCSearchBaseScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396abe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb9dc0));
  return;
}



/* Entry: 10396abf4; end: 10396ac5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396abf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106b2290;
  func_0x000107c613fc(&UNK_1106b2290,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10396af7c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10396ac60; end: 10396acfb;  */

void FUN_10396ac60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106b21a0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106b21a0;
  return;
}



/* Entry: 10396acfc; end: 10396ad33;  */

void FUN_10396acfc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10396ad34; end: 10396ad3b;  */

undefined8 FUN_10396ad34(void)

{
  return 0x1b;
}



/* Entry: 10396ad3c; end: 10396ae6f;  */

void FUN_10396ad3c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b22b8;
  func_0x000107c613fc(&UNK_1106b22b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10396af54;
  func_0x00010058fa64(FUN_10396af54,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10396ae70; end: 10396ae9f;  */

undefined ** FUN_10396ae70(void)

{
  return &PTR_DAT_112fba2e8;
}



/* Entry: 10396aea0; end: 10396aebf;  */

void FUN_10396aea0(void)

{
  func_0x000107c61168(&PTR_PTR_112907730);
  return;
}



/* Entry: 10396aec0; end: 10396af0f;  */

undefined1  [16] FUN_10396aec0(void)

{
  return ZEXT816(0x1106b21f0);
}



/* Entry: 10396af10; end: 10396af53;  */

void FUN_10396af10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb9e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ad808;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112fb9e28 = puVar1;
  return;
}



/* Entry: 10396af54; end: 10396af7b;  */

void FUN_10396af54(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10396af7c; end: 10396af7f;  */

void FUN_10396af7c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10396af80; end: 10396afeb;  */

void FUN_10396af80(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112fb9e38,&UNK_10dc2a8d0);
  func_0x000107c613fc();
  pcVar1 = FUN_10396affc;
  func_0x0001000841fc(FUN_10396affc,0);
  func_0x000100084214(&UNK_10dc2a8a0,0x28,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10396afec; end: 10396affb;  */

undefined1  [16] FUN_10396afec(void)

{
  return ZEXT816(0x1106b22f8);
}



/* Entry: 10396affc; end: 10396b273;  */

void FUN_10396affc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  uVar7 = *param_2;
  func_0x0001000285a8(0x112fb9e40,&UNK_10dc2a8d8);
  puVar1 = &uStack_68;
  uStack_68 = uVar7;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_10396acfc;
  func_0x0001000823a8(FUN_10396acfc,0);
  pcVar3 = "SCSearchBaseScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSearchBaseScopedServicesCleanupRelayServiceProvider",0x35,2);
  FUN_10396ba40();
  func_0x000100082720("SearchBaseScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112fb9e48,&UNK_10dc2a8e8);
  puVar4 = &UNK_1106b2318;
  func_0x000107c613fc(&UNK_1106b2318,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(code **)(puVar4 + 0x18) = pcVar2;
  *(char **)(puVar4 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(pcVar3);
  pcVar5 = FUN_10396b274;
  func_0x0001000823a8(FUN_10396b274,puVar4);
  func_0x000100082720("SCSearchBaseScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112fb9dc8,&UNK_10dc2a6a0);
  func_0x000107c6157c(pcVar5);
  uVar7 = 0x10396b280;
  func_0x0001000823a8(0x10396b280,pcVar5);
  func_0x000100082720("SCSearchBaseScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112fb9db8,&UNK_10dc2a690);
  func_0x000107c6157c(uVar7);
  uVar6 = 0x10396b288;
  func_0x0001000823a8(0x10396b288,uVar7);
  func_0x000100082720("SCSearchBaseScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_1106b2340;
  func_0x000107c613fc(&UNK_1106b2340,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(code **)(puVar4 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar6 = 0x10396b290;
  func_0x0001000823a8(0x10396b290,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCSearchBaseScopeEntryPointProvider",0x23,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 10396b274; end: 10396b297;  */

void FUN_10396b274(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10396b2d4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a7f38("SCSearchBaseScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10396b298; end: 10396b2d3;  */

void FUN_10396b298(undefined8 *param_1,undefined8 param_2)

{
  FUN_10396b2d4();
  func_0x0001000a7f38("SCSearchBaseScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10396b2d4; end: 10396b513;  */

void FUN_10396b2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106b2d08;
  ppuVar4 = &PTR_DAT_112fba2e8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1106b2368;
  func_0x000107c613fc(&UNK_1106b2368,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112fb9e50;
  func_0x0001000285a8(0x112fb9e50,&UNK_10dc2a8f0);
  func_0x0001000a6ee8(&UNK_1106b2230,"SCSearchBaseScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_10396b514,puVar2,uVar3,&UNK_1106b2230,&PTR_DAT_112fb9dd0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106b2390;
  func_0x000107c613fc(&UNK_1106b2390,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106b2528,"SearchBaseScopeGraphBridgeScopeInitializationPluginKey",0x36,2
                      ,FUN_10396b51c,puVar2,uVar3,&UNK_1106b2528,&PTR_DAT_112fb9ee0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112fb9e58;
  func_0x0001000285a8(0x112fb9e58,&UNK_10dc2a8f8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10396b514; end: 10396b51b;  */

void FUN_10396b514(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106b23b8;
  func_0x000107c613fc(&UNK_1106b23b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10396b588;
  func_0x0001000823a8(FUN_10396b588,puVar3);
  func_0x000100082720("SCSearchBaseScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10396b51c; end: 10396b55b;  */

void FUN_10396b51c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10396bb24(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SearchBaseScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10396b55c; end: 10396b587;  */

void FUN_10396b55c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10396b588; end: 10396b58f;  */

void FUN_10396b588(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b22b8;
  func_0x000107c613fc(&UNK_1106b22b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10396af54;
  func_0x00010058fa64(FUN_10396af54,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10396b590; end: 10396b617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10396b590(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10396b950();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fb9e60) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fb9e68) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10396b618);
  (*pcVar1)();
}



/* Entry: 10396b618; end: 10396b677; -[_TtC26SearchBaseScopeGraphBridge41SearchBaseScopeGraphBridgeSaberEntryPoint init] */

void FUN_10396b618(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchBaseScopeGraphBridge.SearchBaseScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10396b644);
  (*pcVar1)();
}



/* Entry: 10396b678; end: 10396b6af; -[_TtC26SearchBaseScopeGraphBridge41SearchBaseScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010396b694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010396b698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396b678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb9e60));
  return;
}



/* Entry: 10396b6b0; end: 10396b6d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396b6b0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fb9e68),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fb9e60));
  return;
}



/* Entry: 10396b6d8; end: 10396b6f7;  */

void FUN_10396b6d8(void)

{
  func_0x000107c61168(&PTR_PTR_1129077f0);
  return;
}



/* Entry: 10396b6f8; end: 10396b77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10396b6f8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb9e98) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112fb9ea0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10396b780);
  (*pcVar2)();
}



/* Entry: 10396b780; end: 10396b867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10396b780(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fb9e98);
  *(undefined **)(unaff_x20 + _DAT_112fb9e98) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fb9ea0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112fb9ea0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106b2488;
  func_0x000107c613fc(&UNK_1106b2488,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10396b86c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10396b868; end: 10396b873;  */

void FUN_10396b868(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10396b874; end: 10396b8d3; -[_TtC26SearchBaseScopeGraphBridge41SCSearchBaseScopedServicesSaberEntryPoint init] */

void FUN_10396b874(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchBaseScopeGraphBridge.SCSearchBaseScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10396b8a0);
  (*pcVar1)();
}



/* Entry: 10396b8d4; end: 10396b90b; -[_TtC26SearchBaseScopeGraphBridge41SCSearchBaseScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396b8d4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fb9ea0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb9e98));
  return;
}



/* Entry: 10396b90c; end: 10396b90f;  */

void FUN_10396b90c(void)

{
  return;
}



/* Entry: 10396b910; end: 10396b92f;  */

void FUN_10396b910(void)

{
  FUN_10396b780();
  return;
}



/* Entry: 10396b930; end: 10396b94f;  */

void FUN_10396b930(void)

{
  func_0x000107c61168(&PTR_PTR_1129078b8);
  return;
}



/* Entry: 10396b950; end: 10396ba1f;  */

undefined8 FUN_10396b950(void)

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
  
  func_0x000107c61428(0x112fb9ed0,&uStack_40,0x20,0);
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
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10396ba20();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10396ba20; end: 10396ba3f;  */

void FUN_10396ba20(void)

{
  func_0x000107c61168(&PTR_PTR_112907980);
  return;
}



/* Entry: 10396ba40; end: 10396baab;  */

void FUN_10396ba40(void)

{
  func_0x0001000285a8(0x112fb9ed8,&UNK_10dc2a9a8);
  func_0x0001000823a8(0x10396ba80,0);
  return;
}



/* Entry: 10396baac; end: 10396bae7; -[_TtC26SearchBaseScopeGraphBridge34SearchBaseScopeGraphBridgeServices init] */

void FUN_10396baac(undefined8 param_1)

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



/* Entry: 10396bae8; end: 10396bb1b;  */

void FUN_10396bae8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10396bb1c; end: 10396bb23;  */

undefined8 FUN_10396bb1c(void)

{
  return 0x1b;
}



/* Entry: 10396bb24; end: 10396bc9b;  */

void FUN_10396bb24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b24d0;
  func_0x000107c613fc(&UNK_1106b24d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10396bc9c,puVar1);
  return;
}



/* Entry: 10396bc9c; end: 10396bca3;  */

void FUN_10396bc9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112fb9ed0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb9ed0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106b2568;
  func_0x000107c613fc(&UNK_1106b2568,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10396bd50;
  func_0x00010058fa64(0x10396bd50,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10396bca4; end: 10396bcff;  */

void FUN_10396bca4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fb9ed0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112fb9ed0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10396bd00; end: 10396bd57;  */

undefined ** FUN_10396bd00(void)

{
  return &PTR_DAT_112fba2e8;
}



/* Entry: 10396bd58; end: 10396bd9f; -[SCSearchBaseScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396bd58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb9f30;
  func_0x000107c61428(param_1 + _DAT_112fb9f30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10396bda0; end: 10396bdf7; -[SCSearchBaseScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396bda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb9f30;
  func_0x000107c61428(param_1 + _DAT_112fb9f30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10396bdf8; end: 10396be3f; -[SCSearchBaseScopeGraphBridgeSaberEntryPoint searchBaseScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396bdf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb9f38;
  func_0x000107c61428(param_1 + _DAT_112fb9f38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10396be40; end: 10396bea3; -[SCSearchBaseScopeGraphBridgeSaberEntryPoint setSearchBaseScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396be40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb9f38;
  func_0x000107c61428(param_1 + _DAT_112fb9f38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10396bea4; end: 10396bfd7;  */

/* WARNING: Possible PIC construction at 0x00010396bf5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010396bf78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010396bf94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010396bf60) */
/* WARNING: Removing unreachable block (ram,0x00010396bf7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396bea4(void)

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
  func_0x000107c51ab4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10396b6d8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_10396b950();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10396bfd8);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112fb9e60) = lVar5;
    *(long *)(lVar4 + _DAT_112fb9e68) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10396bfd8; end: 10396bfff; -[SCSearchBaseScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10396bfd8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10396bea4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10396c000; end: 10396c043; -[SCSearchBaseScopeGraphBridgeSaberEntryPoint end] */

void FUN_10396c000(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10396c044; end: 10396c1db;  */

void FUN_10396c044(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e82cc0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f17d340,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SearchBaseScopeGraphBridge/SCSearchBaseScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4c,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10396c1dc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58d14();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10396c1dc; end: 10396c287; -[SCSearchBaseScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10396c1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10396c044(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10396c288; end: 10396c2f3; -[SCSearchBaseScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396c288(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb9f30,0);
  *(undefined8 *)(param_1 + _DAT_112fb9f38) = 0;
  *(undefined8 *)(param_1 + _DAT_112fb9f40) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10396c2f4; end: 10396c327;  */

void FUN_10396c2f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10396c328; end: 10396c36f; -[SCSearchBaseScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010396c354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010396c358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396c328(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb9f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb9f38));
  return;
}



/* Entry: 10396c370; end: 10396c38f;  */

void FUN_10396c370(void)

{
  func_0x000107c61168(&PTR_PTR_112907a30);
  return;
}



/* Entry: 10396c390; end: 10396c3d7; -[SCSCSearchBaseScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396c390(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb9f70;
  func_0x000107c61428(param_1 + _DAT_112fb9f70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10396c3d8; end: 10396c42f; -[SCSCSearchBaseScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396c3d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb9f70;
  func_0x000107c61428(param_1 + _DAT_112fb9f70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10396c430; end: 10396c507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396c430(undefined8 param_1,long param_2)

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
    FUN_10396b930();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112fb9e98) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10396c508);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112fb9ea0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fb9f78);
    *(long **)(unaff_x20 + _DAT_112fb9f78) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10396c508; end: 10396c52f; -[SCSCSearchBaseScopedServicesSaberEntryPoint begin] */

void FUN_10396c508(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10396c430();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10396c530; end: 10396c6a7;  */

/* WARNING: Possible PIC construction at 0x00010396c598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010396c630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010396c59c) */
/* WARNING: Removing unreachable block (ram,0x00010396c634) */
/* WARNING: Removing unreachable block (ram,0x00010396c64c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396c530(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112fb9f78);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10396c6a8; end: 10396c6af;  */

void FUN_10396c6a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10396c6b0; end: 10396c6e3; -[SCSCSearchBaseScopedServicesSaberEntryPoint end] */

void FUN_10396c6b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10396c530();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10396c6e4; end: 10396c803;  */

void FUN_10396c6e4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "SearchBaseScopeGraphBridge/SCSCSearchBaseScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10396c804);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10396c804; end: 10396c8af; -[SCSCSearchBaseScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10396c804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10396c6e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10396c8b0; end: 10396c90f; -[SCSCSearchBaseScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396c8b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb9f70,0);
  *(undefined8 *)(param_1 + _DAT_112fb9f78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10396c910; end: 10396c943;  */

void FUN_10396c910(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10396c944; end: 10396c97b; -[SCSCSearchBaseScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396c944(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb9f70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb9f78));
  return;
}



/* Entry: 10396c97c; end: 10396c99b;  */

void FUN_10396c97c(void)

{
  func_0x000107c61168(&PTR_PTR_112907af8);
  return;
}



/* Entry: 10396c99c; end: 10396ca07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396c99c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10396cd90();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fb9fb0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10396ca08; end: 10396ca73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396ca08(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb9fb0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10396ca74; end: 10396cad3; -[_TtC34SearchScopedFactoryServiceProvider22SCSearchScopedServices init] */

void FUN_10396ca74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchScopedFactoryServiceProvider.SCSearchScopedServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10396caa0);
  (*pcVar1)();
}



/* Entry: 10396cad4; end: 10396cae3; -[_TtC34SearchScopedFactoryServiceProvider22SCSearchScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396cad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb9fb0));
  return;
}



/* Entry: 10396cae4; end: 10396cb4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396cae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106b2780;
  func_0x000107c613fc(&UNK_1106b2780,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10396ce6c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10396cb50; end: 10396cbeb;  */

void FUN_10396cb50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106b2690;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106b2690;
  return;
}



/* Entry: 10396cbec; end: 10396cc23;  */

void FUN_10396cbec(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}


