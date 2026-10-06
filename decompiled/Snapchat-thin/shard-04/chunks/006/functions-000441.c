/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10375b104; end: 10375b13b;  */

void FUN_10375b104(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10375b13c; end: 10375b16f;  */

void FUN_10375b13c(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  (*param_3)();
  uVar1 = param_2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 10375b170; end: 10375b177; -[_TtC32SCPlusSyncServicesImplementation28PlusSyncStoreKitProductStore storeType] */

undefined8 FUN_10375b170(void)

{
  return 0;
}



/* Entry: 10375b178; end: 10375b3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10375b178(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar7 = &puStack_70;
  puVar2 = *(undefined **)(*(long *)(unaff_x20 + _DAT_112f901a0) + _DAT_113042550);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c453e4();
    func_0x000107c451b0(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  else {
    puVar8 = *(undefined **)(param_1 + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar8 != (undefined *)0x0) {
      func_0x000107c61434(param_1);
      puVar4 = puVar8;
      func_0x00010109b448(puVar8,0);
      func_0x00010375afdc(&puStack_70,puVar4 + 0x20,puVar8,param_1);
      FUN_10375a470(puStack_70,uStack_68,puStack_60,puStack_58,pcStack_50);
      if (ppuVar3 != (undefined **)puVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10375b218);
        (*pcVar1)();
      }
    }
    puVar8 = puVar4;
    func_0x00010102c3b8(puVar4);
    func_0x000107c61574(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSSet_1126ae870);
    puVar4 = puVar8;
    func_0x000107c5fc48(puVar8,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar8);
    func_0x000107c45788(puVar5);
    func_0x000107c61170(puVar4);
    puVar6 = puVar2;
    func_0x000107c5dbf0(puVar2);
    func_0x000107c61180();
    puVar4 = &UNK_11068eb18;
    func_0x000107c613fc(&UNK_11068eb18,0x18,7);
    *(long *)(puVar4 + 0x10) = param_1;
    puVar8 = &UNK_11068eb40;
    func_0x000107c613fc(&UNK_11068eb40,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_10375ca98;
    *(undefined **)(puVar8 + 0x18) = puVar4;
    pcStack_50 = FUN_10375caa0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101ce99e0;
    puStack_58 = &UNK_11068eb58;
    puStack_48 = puVar8;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar4);
    puVar4 = puVar6;
    func_0x000107c4c280(puVar6);
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar6);
  }
  return puVar4;
}



/* Entry: 10375b3c8; end: 10375b84f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10375b3c8(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puStack_68 = (undefined *)0x0;
  uVar6 = 0;
  func_0x000103fde58c(0);
  func_0x000107c5f9e4(param_1,&puStack_68,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
  puVar7 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10374e210();
  }
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010374e224();
  lVar16 = 0;
  uVar13 = 1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((puVar7[0x20] & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(puVar7 + 0x40);
  while( true ) {
    while (uVar18 != 0) {
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar16 << 6;
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar12 * 0x10);
      uVar9 = *puVar1;
      uVar3 = puVar1[1];
      lVar17 = *(long *)(*(long *)(puVar7 + 0x38) + uVar12 * 8);
      if (*(long *)(param_2 + 0x10) == 0) {
        func_0x000107c61434(uVar3);
        func_0x000107c61174(lVar17);
        uVar6 = 0;
      }
      else {
        lVar8 = *(long *)(lVar17 + _DAT_1130427e0);
        uVar12 = ((long *)(lVar17 + _DAT_1130427e0))[1];
        func_0x000107c61434(uVar3);
        func_0x000107c61174(lVar17);
        func_0x000107c61434(param_2);
        func_0x000100029284();
        if ((uVar12 & 1) == 0) {
          func_0x000107c6142c(param_2);
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x38) + lVar8 * 8);
          func_0x000107c61174(uVar6);
          func_0x000107c6142c(param_2);
        }
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar8 = lVar17;
      func_0x000106c6b25c(lVar17,uVar6);
      func_0x000107c61180();
      if (lVar8 == 0) {
        func_0x000107c61434(puStack_70);
        uVar12 = uVar3;
        func_0x000100029284();
        func_0x000107c6142c(puStack_70);
        if ((uVar12 & 1) == 0) {
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(lVar17);
          func_0x000107c61170(uVar6);
        }
        else {
          puVar10 = puStack_70;
          func_0x000107c61558();
          puStack_68 = puStack_70;
          if ((int)puVar10 == 0) {
            FUN_10375bedc(0x112f8fe90,&UNK_10dc08290);
          }
          puStack_70 = puStack_68;
          func_0x000107c6142c(*(undefined8 *)(*(long *)(puStack_68 + 0x30) + uVar9 * 0x10 + 8));
          func_0x000107c61170(*(undefined8 *)(*(long *)(puStack_70 + 0x38) + uVar9 * 8));
          func_0x00010375c320(uVar9,puStack_70);
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(lVar17);
          func_0x000107c61170(uVar6);
        }
      }
      else {
        puVar10 = puStack_70;
        func_0x000107c61558();
        puStack_68 = puStack_70;
        uVar12 = uVar9;
        uVar11 = uVar3;
        func_0x000100029284();
        uVar14 = (ulong)~(uint)uVar11 & 1;
        lVar2 = *(long *)(puStack_70 + 0x10) + uVar14;
        if (SCARRY8(*(long *)(puStack_70 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10375b83c);
          (*pcVar4)();
        }
        if (*(long *)(puStack_70 + 0x18) < lVar2) {
          func_0x00010375c08c(lVar2,(ulong)puVar10 & 0xffffffff,0x112f8fe90,&UNK_10dc08290);
          uVar12 = uVar9;
          uVar14 = uVar3;
          func_0x000100029284();
          if (((uint)uVar11 & 1) != ((uint)uVar14 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10375b850);
            (*pcVar4)();
          }
        }
        else if (((ulong)puVar10 & 1) == 0) {
          FUN_10375bedc(0x112f8fe90,&UNK_10dc08290);
          uVar11 = uVar11 & 0xffffffff;
        }
        puVar10 = puStack_68;
        puStack_70 = puStack_68;
        if ((uVar11 & 1) == 0) {
          *(ulong *)(puStack_68 + (uVar12 >> 6) * 8 + 0x40) =
               *(ulong *)(puStack_68 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puStack_68 + 0x30) + uVar12 * 0x10);
          *puVar1 = uVar9;
          puVar1[1] = uVar3;
          *(long *)(*(long *)(puStack_68 + 0x38) + uVar12 * 8) = lVar8;
          func_0x000107c61170(lVar17);
          func_0x000107c61170(uVar6);
          lVar17 = *(long *)(puVar10 + 0x10);
          if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10375b840);
            (*pcVar4)();
          }
          *(long *)(puVar10 + 0x10) = lVar17 + 1;
        }
        else {
          uVar15 = *(undefined8 *)(*(long *)(puStack_68 + 0x38) + uVar12 * 8);
          *(long *)(*(long *)(puStack_68 + 0x38) + uVar12 * 8) = lVar8;
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(lVar17);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar15);
        }
      }
    }
    bVar5 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar5) break;
    if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
      func_0x000107c61574(puVar7);
      uVar6 = 0;
      func_0x000103f79ac8(0);
      puVar7 = puStack_70;
      func_0x000107c5f9dc(puStack_70,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(puStack_70);
      return puVar7;
    }
    uVar18 = *(ulong *)((long)(puVar7 + 0x40) + lVar16 * 8);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10375b838);
  (*pcVar4)();
}



/* Entry: 10375b850; end: 10375b977; -[_TtC32SCPlusSyncServicesImplementation28PlusSyncStoreKitProductStore fetchProducts:] */

void FUN_10375b850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103f7b3a4(0);
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10375b178(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10375b978; end: 10375b9d3; -[_TtC32SCPlusSyncServicesImplementation28PlusSyncStoreKitProductStore handlerForProductInfo:] */

void FUN_10375b978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010375b8cc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10375b9d4; end: 10375ba8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10375b9d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = *(undefined **)(*(long *)(unaff_x20 + _DAT_112f901a0) + _DAT_113042550);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000103fdcad8(0);
    func_0x000107c610f8();
    uVar3 = 0;
    func_0x000103fdc9dc(0);
    func_0x000107c451b0(puVar2,param_2,uVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
  }
  else {
    puVar2 = puVar1;
    func_0x000107c42480();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
  }
  return puVar2;
}



/* Entry: 10375ba90; end: 10375bb83; -[_TtC32SCPlusSyncServicesImplementation28PlusSyncStoreKitProductStore eligibleOfferInfoWithRequestor:] */

void FUN_10375ba90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10375b9d4(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10375bb84; end: 10375bbb7; -[_TtC32SCPlusSyncServicesImplementation28PlusSyncStoreKitProductStore restorePurchases] */

void FUN_10375bb84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010375bacc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10375bbb8; end: 10375bbe3; -[_TtC32SCPlusSyncServicesImplementation28PlusSyncStoreKitProductStore availabilityState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10375bbb8(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_112f901a8);
  func_0x000106c78c58();
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10375bbe4; end: 10375bcc7;  */

/* WARNING: Possible PIC construction at 0x00010375bc78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375bca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010375bc7c) */
/* WARNING: Removing unreachable block (ram,0x00010375bca4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375bbe4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112f901a0) + _DAT_113042550);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x00010102c3b8(param_1);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSSet_1126ae870);
    uVar3 = param_1;
    func_0x000107c5fc48(param_1,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(param_1);
    func_0x000107c45788(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10375bcc8; end: 10375bd1f; -[_TtC32SCPlusSyncServicesImplementation28PlusSyncStoreKitProductStore preloadProducts:] */

void FUN_10375bcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  FUN_10375bbe4(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10375bd20; end: 10375bd7f; -[_TtC32SCPlusSyncServicesImplementation28PlusSyncStoreKitProductStore init] */

void FUN_10375bd20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusSyncServicesImplementation.PlusSyncStoreKitProductStore",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10375bd4c);
  (*pcVar1)();
}



/* Entry: 10375bd80; end: 10375bdc7; -[_TtC32SCPlusSyncServicesImplementation28PlusSyncStoreKitProductStore .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010375bd9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010375bda0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375bd80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f901a0));
  return;
}



/* Entry: 10375bdc8; end: 10375bde7;  */

void FUN_10375bdc8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e9918);
  return;
}



/* Entry: 10375bde8; end: 10375be1f;  */

void FUN_10375bde8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f901f0;
  plVar5 = (long *)&UNK_10dc08398;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10375caf0();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10375be20; end: 10375be8b;  */

void FUN_10375be20(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10375be8c; end: 10375bedb;  */

void FUN_10375be8c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112f8fea0,&UNK_10dc08080);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10375bfa8;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_10375bfa8:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10375c03c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10375c014;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10375c014:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10375bedc; end: 10375c03b;  */

void FUN_10375bedc(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10375bfa8;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_10375bfa8:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10375c03c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10375c014;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10375c014:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10375c03c; end: 10375c08b;  */

void FUN_10375c03c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  uVar6 = 0x112f8fea0;
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112f8fea0,&UNK_10dc08080);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10375c2ec:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10375c31c);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10375c2ec;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10375c320);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10375c08c; end: 10375c4cf;  */

void FUN_10375c08c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10375c2ec:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10375c31c);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10375c2ec;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10375c320);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10375c4d0; end: 10375c5d7;  */

void FUN_10375c4d0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10375c818();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10375c5d8; end: 10375c817;  */

undefined * FUN_10375c5d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10375c6f4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f901e0;
    func_0x0001000285a8(0x112f901e0,&UNK_10dc08380);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x110) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110727790);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x110 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x110);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10375c818; end: 10375c95b;  */

undefined *
FUN_10375c818(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10375c95c);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar4 = param_5;
    func_0x000107c610a4();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    func_0x000107c6140c(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x18 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar2,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 10375c95c; end: 10375ca97;  */

undefined * FUN_10375c95c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10375ca98);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = &SUB_103f79ac8;
    FUN_10375be20(&SUB_103f79ac8,0x112f901e8,&UNK_10dc08388);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000103f79ac8(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10375ca98; end: 10375ca9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10375ca98(undefined8 param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar12 = *(long *)(unaff_x20 + 0x10);
  puStack_68 = (undefined *)0x0;
  uVar6 = 0;
  func_0x000103fde58c(0);
  func_0x000107c5f9e4(param_1,&puStack_68,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
  puVar7 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10374e210();
  }
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010374e224();
  lVar17 = 0;
  uVar14 = 1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((puVar7[0x20] & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)(puVar7 + 0x40);
  while( true ) {
    while (uVar19 != 0) {
      uVar9 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar17 << 6;
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar13 * 0x10);
      uVar9 = *puVar1;
      uVar3 = puVar1[1];
      lVar18 = *(long *)(*(long *)(puVar7 + 0x38) + uVar13 * 8);
      if (*(long *)(lVar12 + 0x10) == 0) {
        func_0x000107c61434(uVar3);
        func_0x000107c61174(lVar18);
        uVar6 = 0;
      }
      else {
        lVar8 = *(long *)(lVar18 + _DAT_1130427e0);
        uVar13 = ((long *)(lVar18 + _DAT_1130427e0))[1];
        func_0x000107c61434(uVar3);
        func_0x000107c61174(lVar18);
        func_0x000107c61434(lVar12);
        func_0x000100029284();
        if ((uVar13 & 1) == 0) {
          func_0x000107c6142c(lVar12);
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + lVar8 * 8);
          func_0x000107c61174(uVar6);
          func_0x000107c6142c(lVar12);
        }
      }
      uVar19 = uVar19 - 1 & uVar19;
      lVar8 = lVar18;
      func_0x000106c6b25c(lVar18,uVar6);
      func_0x000107c61180();
      if (lVar8 == 0) {
        func_0x000107c61434(puStack_70);
        uVar13 = uVar3;
        func_0x000100029284();
        func_0x000107c6142c(puStack_70);
        if ((uVar13 & 1) == 0) {
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(lVar18);
          func_0x000107c61170(uVar6);
        }
        else {
          puVar10 = puStack_70;
          func_0x000107c61558();
          puStack_68 = puStack_70;
          if ((int)puVar10 == 0) {
            FUN_10375bedc(0x112f8fe90,&UNK_10dc08290);
          }
          puStack_70 = puStack_68;
          func_0x000107c6142c(*(undefined8 *)(*(long *)(puStack_68 + 0x30) + uVar9 * 0x10 + 8));
          func_0x000107c61170(*(undefined8 *)(*(long *)(puStack_70 + 0x38) + uVar9 * 8));
          func_0x00010375c320(uVar9,puStack_70);
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(lVar18);
          func_0x000107c61170(uVar6);
        }
      }
      else {
        puVar10 = puStack_70;
        func_0x000107c61558();
        puStack_68 = puStack_70;
        uVar13 = uVar9;
        uVar11 = uVar3;
        func_0x000100029284();
        uVar15 = (ulong)~(uint)uVar11 & 1;
        lVar2 = *(long *)(puStack_70 + 0x10) + uVar15;
        if (SCARRY8(*(long *)(puStack_70 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10375b83c);
          (*pcVar4)();
        }
        if (*(long *)(puStack_70 + 0x18) < lVar2) {
          func_0x00010375c08c(lVar2,(ulong)puVar10 & 0xffffffff,0x112f8fe90,&UNK_10dc08290);
          uVar13 = uVar9;
          uVar15 = uVar3;
          func_0x000100029284();
          if (((uint)uVar11 & 1) != ((uint)uVar15 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10375b850);
            (*pcVar4)();
          }
        }
        else if (((ulong)puVar10 & 1) == 0) {
          FUN_10375bedc(0x112f8fe90,&UNK_10dc08290);
          uVar11 = uVar11 & 0xffffffff;
        }
        puVar10 = puStack_68;
        puStack_70 = puStack_68;
        if ((uVar11 & 1) == 0) {
          *(ulong *)(puStack_68 + (uVar13 >> 6) * 8 + 0x40) =
               *(ulong *)(puStack_68 + (uVar13 >> 6) * 8 + 0x40) | 1L << (uVar13 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puStack_68 + 0x30) + uVar13 * 0x10);
          *puVar1 = uVar9;
          puVar1[1] = uVar3;
          *(long *)(*(long *)(puStack_68 + 0x38) + uVar13 * 8) = lVar8;
          func_0x000107c61170(lVar18);
          func_0x000107c61170(uVar6);
          lVar18 = *(long *)(puVar10 + 0x10);
          if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10375b840);
            (*pcVar4)();
          }
          *(long *)(puVar10 + 0x10) = lVar18 + 1;
        }
        else {
          uVar16 = *(undefined8 *)(*(long *)(puStack_68 + 0x38) + uVar13 * 8);
          *(long *)(*(long *)(puStack_68 + 0x38) + uVar13 * 8) = lVar8;
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(lVar18);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar16);
        }
      }
    }
    bVar5 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar5) break;
    if ((long)(uVar14 + 0x3f >> 6) <= lVar17) {
      func_0x000107c61574(puVar7);
      uVar6 = 0;
      func_0x000103f79ac8(0);
      puVar7 = puStack_70;
      func_0x000107c5f9dc(puStack_70,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(puStack_70);
      return puVar7;
    }
    uVar19 = *(ulong *)((long)(puVar7 + 0x40) + lVar17 * 8);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10375b838);
  (*pcVar4)();
}



/* Entry: 10375caa0; end: 10375cad3;  */

void FUN_10375caa0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  uVar1 = param_2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 10375cad4; end: 10375caef;  */

void FUN_10375cad4(long param_1,long param_2)

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



/* Entry: 10375caf0; end: 10375cb33;  */

void FUN_10375caf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8ffc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d1d40;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f8ffc8 = puVar1;
  return;
}



/* Entry: 10375cb34; end: 10375cb73;  */

undefined8 FUN_10375cb34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_10375d674(param_1);
  FUN_10375a894(param_1);
  return uVar1;
}



/* Entry: 10375cb74; end: 10375cbbf; -[SCPlusSyncCacheEntry key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375cb74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f90220);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f90220))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10375cbc0; end: 10375cbcf; -[SCPlusSyncCacheEntry syncTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10375cbc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f90228);
}



/* Entry: 10375cbd0; end: 10375cbdf; -[SCPlusSyncCacheEntry productRefreshTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10375cbd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f90230);
}



/* Entry: 10375cbe0; end: 10375cc3b; -[SCPlusSyncCacheEntry responseData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375cbe0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f90238);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f90238))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10375cc3c; end: 10375cc8b; -[SCPlusSyncCacheEntry products] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375cc3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f90240);
  func_0x000103f79ac8(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10375cc8c; end: 10375cc9b; -[SCPlusSyncCacheEntry productValidationIncomplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10375cc8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f90248);
}



/* Entry: 10375cc9c; end: 10375cd67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375cc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f90220);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f90228) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f90230) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f90238);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f90240) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112f90248) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10375cd68; end: 10375ce97; -[SCPlusSyncCacheEntry initWithKey:syncTimestamp:productRefreshTimestamp:responseData:products:productValidationIncomplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375cd68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_80;
  long lStack_78;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_6;
  uVar5 = param_4;
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c5ee30();
  func_0x000107c61170(uVar3);
  uVar4 = 0;
  func_0x000103f79ac8(0);
  uVar3 = param_7;
  func_0x000107c5fc54(param_7,uVar4);
  func_0x000107c61170(param_7);
  puVar1 = (undefined8 *)(param_3 + _DAT_112f90220);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  *(undefined8 *)(param_3 + _DAT_112f90228) = param_1;
  *(undefined8 *)(param_3 + _DAT_112f90230) = param_2;
  puVar1 = (undefined8 *)(param_3 + _DAT_112f90238);
  *puVar1 = param_6;
  puVar1[1] = uVar5;
  *(undefined8 *)(param_3 + _DAT_112f90240) = uVar3;
  *(undefined1 *)(param_3 + _DAT_112f90248) = param_8;
  lStack_80 = param_3;
  lStack_78 = lVar2;
  func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10375ce98; end: 10375ce9b; -[SCPlusSyncCacheEntry copyWithZone:] */

void FUN_10375ce98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10375ce9c; end: 10375d0af;  */

/* WARNING: Possible PIC construction at 0x00010375cef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375cf4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375cf98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375cff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375d050: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010375cff4) */
/* WARNING: Removing unreachable block (ram,0x00010375cf9c) */
/* WARNING: Removing unreachable block (ram,0x00010375cf50) */
/* WARNING: Removing unreachable block (ram,0x00010375cefc) */
/* WARNING: Removing unreachable block (ram,0x00010375d054) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375ce9c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f90220);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f90220))[1]);
  func_0x000107c5fadc(0x59454b,0xe300000000000000);
  func_0x000107c42744(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10375d0b0; end: 10375d0ff; -[SCPlusSyncCacheEntry encodeWithCoder:] */

/* WARNING: Possible PIC construction at 0x00010375d0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010375d0ec) */

void FUN_10375d0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10375ce9c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10375d100; end: 10375d12f;  */

void FUN_10375d100(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_10375d130(param_1);
  return;
}



/* Entry: 10375d130; end: 10375d533;  */

undefined8 FUN_10375d130(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar8 = 0;
  uVar2 = 0x59454b;
  func_0x000107c5fadc(0x59454b,0xe300000000000000);
  lVar3 = param_1;
  func_0x000107c41478();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c60234(&uStack_b0,lVar3);
    func_0x000107c615e8(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
LAB_10375d4c0:
    func_0x000107c61170(param_1);
LAB_10375d4c8:
    func_0x00010006e7f4(&uStack_90);
  }
  else {
    uVar11 = uStack_a0;
    func_0x000107c6147c(&uStack_c0,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar9 = uStack_b8;
    uVar2 = uStack_c0;
    if ((uVar4 & 1) != 0) {
      uVar5 = 0x4d49545f434e5953;
      func_0x000107c5fadc(0x4d49545f434e5953,0xee00504d41545345);
      func_0x000107c41460(param_1);
      uVar12 = uVar11;
      func_0x000107c61170(uVar5);
      uVar5 = 0xd000000000000019;
      func_0x000107c5fadc(0xd000000000000019,0x800000010f163710);
      func_0x000107c41460(param_1);
      func_0x000107c61170(uVar5);
      uVar5 = 0x45534e4f50534552;
      func_0x000107c5fadc(0x45534e4f50534552,0xed0000415441445f);
      lVar3 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (lVar3 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x000107c60234(&uStack_b0,lVar3);
        func_0x000107c615e8(lVar3);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c6142c(uVar9);
        goto LAB_10375d4c8;
      }
      func_0x000107c6147c(&uStack_c0,&uStack_90,puVar1 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
      uVar5 = uStack_c0;
      if ((uVar6 & 1) == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c6142c(uVar9);
        goto LAB_10375d4f0;
      }
      uVar7 = 0x53544355444f5250;
      func_0x000107c5fadc(0x53544355444f5250,0xe800000000000000);
      lVar3 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      if (lVar3 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x000107c60234(&uStack_b0,lVar3);
        func_0x000107c615e8(lVar3);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x000107c6142c(uVar9);
        func_0x00010006c090(uVar5,uStack_b8);
        goto LAB_10375d4c0;
      }
      uVar7 = 0x112f90250;
      func_0x0001000285a8(0x112f90250,&UNK_10dc083f8);
      func_0x000107c6147c(&uStack_c0,&uStack_90,puVar1 + 8,uVar7,6);
      if ((uVar8 & 1) != 0) {
        uVar7 = 0xd00000000000001d;
        func_0x000107c5fadc(0xd00000000000001d,0x800000010f163730);
        func_0x000107c41454(param_1);
        func_0x000107c61170(uVar7);
        func_0x000107c5fadc(uVar2,uVar9);
        func_0x000107c6142c(uVar9);
        uVar9 = uVar5;
        func_0x000107c5ee20(uVar5,uStack_b8);
        uVar10 = 0;
        func_0x000103f79ac8(0);
        uVar7 = uStack_c0;
        func_0x000107c5fc48(uStack_c0,uVar10);
        func_0x000107c6142c(uStack_c0);
        func_0x000107c47060(uVar11,uVar12);
        func_0x00010006c090(uVar5,uStack_b8);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(param_1);
        return unaff_x20;
      }
      func_0x000107c6142c(uVar9);
      func_0x00010006c090(uVar5,uStack_b8);
    }
    func_0x000107c61170(param_1);
  }
LAB_10375d4f0:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10375d534; end: 10375d55b; -[SCPlusSyncCacheEntry initWithCoder:] */

void FUN_10375d534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10375d130();
  return;
}



/* Entry: 10375d55c; end: 10375d5a7; -[SCPlusSyncCacheEntry description] */

void FUN_10375d55c(undefined8 param_1)

{
  undefined1 auStack_60 [64];
  
  func_0x000107c61174();
  FUN_10375d840(auStack_60);
  func_0x000107c61170(param_1);
  FUN_10375a894(auStack_60);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10375d5a8; end: 10375d623; -[SCPlusSyncCacheEntry init] */

void FUN_10375d5a8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCPlusSyncServicesImplementation/PlusSyncCacheEntryWrapper.swift",0x40,2,0x68
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10375d5f0);
  (*pcVar1)();
}



/* Entry: 10375d624; end: 10375d673; -[SCPlusSyncCacheEntry .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010375d644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010375d648) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375d624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f90220 + 8))
  ;
  return;
}



/* Entry: 10375d674; end: 10375d83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375d674(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_2b8 [272];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [288];
  
  func_0x000107c614f0();
  uStack_188 = param_1[1];
  uStack_190 = *param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f90220);
  puVar2[1] = uStack_188;
  *puVar2 = uStack_190;
  uVar7 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112f90228) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112f90230) = uVar7;
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f90238);
  puVar2[1] = uStack_198;
  *puVar2 = uStack_1a0;
  lVar5 = param_1[6];
  lVar4 = *(long *)(lVar5 + 0x10);
  if (lVar4 == 0) {
    func_0x000100402194(&uStack_190,auStack_180);
    func_0x0001006e36f4(&uStack_1a0,auStack_180);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100402194(&uStack_190,auStack_180);
    func_0x0001006e36f4(&uStack_1a0,auStack_180);
    puStack_1a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010375c5bc(0,lVar4,0);
    puVar6 = puStack_1a8;
    lVar5 = lVar5 + 0x20;
    uVar7 = 0;
    func_0x000103f79ac8(0);
    do {
      func_0x000107c610b4(auStack_180,lVar5,0x110);
      func_0x000107c610f8(uVar7);
      func_0x00010375aef8(auStack_180,auStack_2b8);
      puVar3 = auStack_180;
      func_0x000103f77fb4();
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puStack_1a8 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        func_0x00010375c5bc(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_1a8 + 0x10) = uVar1 + 1;
      *(undefined1 **)(puStack_1a8 + uVar1 * 8 + 0x20) = puVar3;
      lVar5 = lVar5 + 0x110;
      lVar4 = lVar4 + -1;
      puVar6 = puStack_1a8;
    } while (lVar4 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_112f90240) = puVar6;
  *(undefined1 *)(unaff_x20 + _DAT_112f90248) = *(undefined1 *)(param_1 + 7);
  func_0x000107c61154(&stack0xfffffffffffffd38,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10375d840; end: 10375da1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375d840(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_188 [280];
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f90220);
  uVar4 = ((undefined8 *)(param_2 + _DAT_112f90220))[1];
  uVar12 = *(undefined8 *)(param_2 + _DAT_112f90228);
  uVar13 = *(undefined8 *)(param_2 + _DAT_112f90230);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112f90238);
  uVar5 = ((undefined8 *)(param_2 + _DAT_112f90238))[1];
  uVar9 = *(ulong *)(param_2 + _DAT_112f90240);
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
  }
  if (uVar10 == 0) {
    func_0x000107c61434(uVar4);
    func_0x00010006c00c(uVar2,uVar5);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(uVar4);
    func_0x00010006c00c(uVar2,uVar5);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010375c50c(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10375da20);
      (*pcVar7)();
    }
    uVar11 = 0;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        func_0x000107c61174(*(undefined8 *)(uVar9 + uVar11 * 8 + 0x20));
      }
      else {
        FUN_103757ef4(uVar11,uVar9);
      }
      func_0x000103f778e0(auStack_188);
      uVar3 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
        func_0x00010375c50c(1 < *(ulong *)(puVar8 + 0x18),uVar3 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
      func_0x000107c610b4(puVar8 + uVar3 * 0x110 + 0x20,auStack_188,0x110);
    } while (uVar10 != uVar11);
  }
  uVar6 = *(undefined1 *)(param_2 + _DAT_112f90248);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar12;
  param_1[3] = uVar13;
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  param_1[6] = puVar8;
  *(undefined1 *)(param_1 + 7) = uVar6;
  return;
}



/* Entry: 10375da20; end: 10375da3f;  */

void FUN_10375da20(void)

{
  func_0x000107c61168(&PTR_PTR_1128e99e8);
  return;
}



/* Entry: 10375da40; end: 10375db5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10375da40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_118 [8];
  undefined1 auStack_108 [8];
  undefined8 auStack_100 [11];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c610f8();
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_50 = param_1[10];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  func_0x000103f75a80(0);
  func_0x000107c610f8();
  func_0x00010374e944(&uStack_a0,auStack_100);
  puVar1 = &uStack_a0;
  func_0x000103f75280();
  *(undefined8 **)(unaff_x20 + _DAT_112f90280) = puVar1;
  auStack_100[0] = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_112f90288) = auStack_100[0];
  uStack_a8 = param_1[0xc];
  *(undefined8 *)(unaff_x20 + _DAT_112f90290) = uStack_a8;
  FUN_10375dc90(auStack_100,auStack_108,0x112f90298,&UNK_10dc08420);
  FUN_10375dc90(&uStack_a8,auStack_108,0x112f902a0,&UNK_10dc08428);
  puVar2 = auStack_118;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x00010375a8c8(param_1);
  return puVar2;
}



/* Entry: 10375db5c; end: 10375db6b; -[SCPlusSyncInternalState syncState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375db5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f90280));
  return;
}



/* Entry: 10375db6c; end: 10375db7b; -[SCPlusSyncInternalState fhpConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375db6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f90288));
  return;
}



/* Entry: 10375db7c; end: 10375db8b; -[SCPlusSyncInternalState halfSheetConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375db7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f90290));
  return;
}



/* Entry: 10375db8c; end: 10375dbff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375db8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f90280) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f90288) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f90290) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10375dc00; end: 10375dc8f; -[SCPlusSyncInternalState initWithSyncState:fhpConfig:halfSheetConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375dc00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f90280) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f90288) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f90290) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10375dc90; end: 10375dcd7;  */

undefined8 FUN_10375dc90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10375dcd8; end: 10375dcdb; -[SCPlusSyncInternalState copyWithZone:] */

void FUN_10375dcd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10375dcdc; end: 10375dde7; -[SCPlusSyncInternalState description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375dcdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_b8 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f90280);
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000103f75300(auStack_b8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f90288);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f90290);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c6142c(auStack_b8[0]);
  func_0x000107c61170(param_1);
  func_0x00010006c090(uStack_a8,uStack_a0);
  FUN_10375dde8(uStack_98,uStack_90,uStack_88,uStack_80);
  func_0x00010006c090(uStack_78,uStack_70);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uStack_68);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10375dde8; end: 10375de1f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10375dde8(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 10375de20; end: 10375de9b; -[SCPlusSyncInternalState init] */

void FUN_10375de20(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCPlusSyncServicesImplementation/PlusSyncInternalStateWrapper.swift",0x43,2,
                      0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10375de68);
  (*pcVar1)();
}



/* Entry: 10375de9c; end: 10375dee3; -[SCPlusSyncInternalState .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010375deb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010375debc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375de9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f90280));
  return;
}



/* Entry: 10375dee4; end: 10375df03;  */

void FUN_10375dee4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e9ae0);
  return;
}



/* Entry: 10375df04; end: 10375df23; -[_TtC16PlusGiftingScope16PlusGiftingScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375df04(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f902d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10375df24; end: 10375df33; -[_TtC16PlusGiftingScope16PlusGiftingScope loggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375df24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f902d8));
  return;
}



/* Entry: 10375df34; end: 10375df43; -[_TtC16PlusGiftingScope16PlusGiftingScope funnelLoggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375df34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f902e0));
  return;
}



/* Entry: 10375df44; end: 10375df53; -[_TtC16PlusGiftingScope16PlusGiftingScope presentationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10375df44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f902e8);
}



/* Entry: 10375df54; end: 10375df63; -[_TtC16PlusGiftingScope16PlusGiftingScope context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375df54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f902f0));
  return;
}



/* Entry: 10375df64; end: 10375dfab; -[_TtC16PlusGiftingScope16PlusGiftingScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375df64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f902f8;
  func_0x000107c61428(param_1 + _DAT_112f902f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10375dfac; end: 10375e003; -[_TtC16PlusGiftingScope16PlusGiftingScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375dfac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f902f8;
  func_0x000107c61428(param_1 + _DAT_112f902f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10375e004; end: 10375e177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10375e004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f902f8;
  uVar6 = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f902f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f902d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f902d8) = param_2;
  func_0x000107c615f0(param_1);
  func_0x000107c61174();
  uVar3 = param_2;
  func_0x00010011df08();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x00010439b838(0);
  func_0x000107c610f8();
  func_0x00010439b668(uVar4,uVar6);
  *(undefined8 *)(unaff_x20 + _DAT_112f902e0) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f902e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f902f0) = param_4;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_4);
  puVar5 = auStack_88;
  func_0x000107c61154(puVar5,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return puVar5;
}



/* Entry: 10375e178; end: 10375e1db;  */

undefined8
FUN_10375e178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10375e358();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 10375e1dc; end: 10375e28f; -[_TtC16PlusGiftingScope16PlusGiftingScope initWithUIContainer:loggingContext:presentationType:context:delegate:] */

undefined8
FUN_10375e1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  uVar2 = param_3;
  FUN_10375e358(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_7);
  return uVar2;
}



/* Entry: 10375e290; end: 10375e2ef; -[_TtC16PlusGiftingScope16PlusGiftingScope init] */

void FUN_10375e290(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusGiftingScope.PlusGiftingScope",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10375e2bc);
  (*pcVar1)();
}



/* Entry: 10375e2f0; end: 10375e357; -[_TtC16PlusGiftingScope16PlusGiftingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10375e2f0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f902d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f902d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f902e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f902f0));
  param_1 = param_1 + _DAT_112f902f8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10375e358; end: 10375e49b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375e358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f902f8;
  uVar4 = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f902f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f902d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f902d8) = param_2;
  func_0x000107c615f0(param_1);
  func_0x000107c61174();
  func_0x00010011df08();
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  func_0x00010439b838(0);
  func_0x000107c610f8();
  func_0x00010439b668(uVar3,uVar4);
  *(undefined8 *)(unaff_x20 + _DAT_112f902e0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f902e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f902f0) = param_4;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar1);
  return;
}



/* Entry: 10375e49c; end: 10375e4bf;  */

undefined8 FUN_10375e49c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10375e4c0; end: 10375e4df;  */

void FUN_10375e4c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e9bb8);
  return;
}



/* Entry: 10375e4e0; end: 10375e64f;  */

void FUN_10375e4e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10375e650; end: 10375e6fb;  */

void FUN_10375e650(void)

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



/* Entry: 10375e6fc; end: 10375e73b;  */

void FUN_10375e6fc(undefined1 *param_1,long *param_2)

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



/* Entry: 10375e73c; end: 10375e783; -[SCPlusGiftingScopeContext description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375e73c(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_112f90328) != '\x01') &&
     (*(long *)(param_1 + _DAT_112f90330 + 8) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10375e784);
    (*pcVar1)();
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10375e784; end: 10375e7cb; -[SCPlusGiftingScopeContext init] */

void FUN_10375e784(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "PlusGiftingScope/PlusGiftingScopeContextWrapper.swift",0x35,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10375e7cc);
  (*pcVar1)();
}



/* Entry: 10375e7cc; end: 10375e7cf; -[SCPlusGiftingScopeContext copyWithZone:] */

void FUN_10375e7cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10375e7d0; end: 10375e843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375e7d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112f90328) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f90330);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61434(param_2);
  func_0x000107c61154(auStack_40,puVar2);
  return;
}



/* Entry: 10375e844; end: 10375e8bf; +[SCPlusGiftingScopeContext purchaseForUserWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375e844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f90328) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f90330);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10375e8c0; end: 10375e913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375e8c0(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_20 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112f90328) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f90330);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(auStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10375e914; end: 10375e973; +[SCPlusGiftingScopeContext redeem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375e914(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f90328) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f90330);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10375e974; end: 10375ea13; -[SCPlusGiftingScopeContext matchPurchaseForUser:redeem:] */

/* WARNING: Possible PIC construction at 0x00010375e9f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010375e9fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375e974(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_112f90328) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010375e9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  lVar2 = ((undefined8 *)(param_1 + _DAT_112f90330))[1];
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f90330);
    func_0x000107c61174();
    func_0x000107c5fadc(uVar3,lVar2);
    (**(code **)(param_3 + 0x10))(param_3,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10375ea14);
  (*pcVar1)();
}



/* Entry: 10375ea14; end: 10375ea47;  */

void FUN_10375ea14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10375ea48; end: 10375ea5b; -[SCPlusGiftingScopeContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375ea48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f90330 + 8))
  ;
  return;
}



/* Entry: 10375ea5c; end: 10375ea7b;  */

void FUN_10375ea5c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e9ca0);
  return;
}



/* Entry: 10375ea7c; end: 10375ebe3;  */

int FUN_10375ea7c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10375eaf8;
        goto LAB_10375eadc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10375eadc:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10375eaf8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10375ebe4; end: 10375ec23;  */

void FUN_10375ebe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc084d0;
  func_0x000107c61520(&UNK_10dc084d0,&UNK_11068ed10);
  puRam0000000112f90360 = puVar1;
  return;
}



/* Entry: 10375ec24; end: 10375ecbf;  */

/* WARNING: Possible PIC construction at 0x00010375eca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010375eca8) */

void FUN_10375ec24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11068ee08;
  func_0x000107c613fc(&UNK_11068ee08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10dc08578,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10375ecc0; end: 10375ed5b;  */

void FUN_10375ecc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  lVar1 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x20) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  plVar4 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10375ed5c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar4,uVar2);
  return;
}



/* Entry: 10375ed5c; end: 10375edbf;  */

void FUN_10375ed5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x28);
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10375edc0,uVar2,uVar1);
  return;
}



/* Entry: 10375edc0; end: 10375eefb;  */

void FUN_10375edc0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  puVar5 = *(undefined **)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  lVar1 = 0;
  func_0x000107c5f8a4();
  lVar7 = *(long *)(lVar1 + -8);
  uVar4 = 1;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar1);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  if ((int)puVar5 == 1) {
    FUN_10375f13c(uVar6);
    puVar5 = PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
    func_0x000107c61168();
    func_0x000107c415f8();
    func_0x000107c61180();
    puVar2 = puVar5;
    func_0x000107c5bf10();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar2 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      puVar3 = puVar2;
      func_0x000107c40860(puVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      puVar5 = puVar3;
      func_0x000107c5faec(puVar3);
      func_0x000107c61170(puVar3);
    }
  }
  else {
    func_0x000107c5f894();
    (**(code **)(lVar7 + 8))(uVar6,lVar1);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0x10))(puVar5,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010375eef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10375eefc; end: 10375ef4b;  */

void FUN_10375eefc(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10375f184;
  plVar5[2] = lVar3;
  plVar5[3] = lVar1;
  lVar3 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[4] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar5[5] = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar3;
  plVar4 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  plVar5[7] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10375ed5c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar4,uVar2);
  return;
}


