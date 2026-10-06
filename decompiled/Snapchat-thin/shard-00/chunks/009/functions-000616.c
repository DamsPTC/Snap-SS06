/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bcd4bc; end: 100bcd513; -[_TtC32SCSpotlightMediaFetchingServices32SCSpotlightMediaFetchingServices initWithSpotlightMediaFetcherFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bcd4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fb6990) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100bcd514; end: 100bcd59f;  */

void FUN_100bcd514(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bcd5a0; end: 100bcd65b; -[SCPredefinedLensMetadataStore initWithInitialLenses:announcerPerformer:] */

undefined1 *
FUN_100bcd5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701690;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bcc50;
    func_0x000107c610f4();
    func_0x000107c456b0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c5d51c(*(undefined8 *)((long)puVar1 + 8));
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bcd65c; end: 100bcd6f7; -[SCGenericLensMetadataStore updateLenses:] */

/* WARNING: Possible PIC construction at 0x000100bcd690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bcd6bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bcd694) */
/* WARNING: Removing unreachable block (ram,0x000100bcd6c0) */

void FUN_100bcd65c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 == 0) {
    func_0x000107c611ec(param_1 + 8);
    func_0x000107c61174(puVar1);
    param_3 = *(long *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
  }
  else {
    func_0x000107c40794(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100bcd6f8; end: 100bcd817; -[SCGenericLensMetadataStore _applyFilterAndNotifyIfNeeded] */

void FUN_100bcd6f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c611ec(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x48);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    func_0x000107c61174(lVar3);
  }
  else {
    func_0x000107c434d4(lVar1,param_2,lVar3);
    func_0x000107c61180();
    lVar3 = lVar1;
  }
  lVar1 = lVar3;
  func_0x000107c49cec(lVar3,param_2,*(undefined8 *)(param_1 + 0x30));
  if ((int)lVar1 == 0) {
    func_0x000107c61174(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c611f0(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    puStack_50 = &UNK_100c70a78;
    puStack_48 = &UNK_110883780;
    lStack_40 = param_1;
    func_0x000107c61174(lVar3);
    lStack_38 = lVar3;
    func_0x000107c3c0d4(param_1,param_2,&puStack_60);
    func_0x000107c61170(lStack_38);
  }
  else {
    func_0x000107c611f0(param_1 + 8);
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 100bcd818; end: 100bcd82b;  */

void FUN_100bcd818(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 100bcd82c; end: 100bcd833; -[SCLensOnboardingMetadataStoreServices lensOnboardingMetadataStore] */

undefined8 FUN_100bcd82c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bcd834; end: 100bcd89f;  */

void FUN_100bcd834(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
  puVar2 = PTR_PTR_1126ddc98;
  func_0x000107c610f4(PTR_PTR_1126ddc98);
  func_0x000107c46e94();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bcd8a0; end: 100bcd8a7; -[SCPredefinedLensMetadataStore warmUp] */

void FUN_100bcd8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_warmUp_112686130);
  return;
}



/* Entry: 100bcd8a8; end: 100bcd8ab; -[SCGenericLensMetadataStore warmUp] */

void FUN_100bcd8a8(void)

{
  return;
}



/* Entry: 100bcd8ac; end: 100bcd8fb;  */

void FUN_100bcd8ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c40a10(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x30));
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100bcd8fc; end: 100bcda03;  */

void FUN_100bcd8fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126ae720;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bcda04; end: 100bcda3b;  */

void FUN_100bcda04(void)

{
  func_0x000107c610f4(PTR_PTR_1126de880);
  func_0x000107c484bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bcda3c; end: 100bcdab3;  */

/* WARNING: Possible PIC construction at 0x000100bcda98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bcda9c) */

void FUN_100bcda3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100bcdab4; end: 100bcdabb;  */

/* WARNING: Possible PIC construction at 0x000100bcdd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bcdd10) */

void FUN_100bcdab4(long param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 ****ppppuVar13;
  long unaff_x20;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ***pppuStack_68;
  
  pcVar4 = *(code **)(unaff_x20 + 0x10);
  if ((param_2 == 0) && (param_1 != 0)) {
    pppuStack_68 = (undefined8 ****)0x0;
    uVar5 = 0;
    FUN_100bcdabc(0,0x112de84b8,&PTR_PTR_1126b5930,*(undefined8 *)(unaff_x20 + 0x18));
    ppppuVar7 = &pppuStack_68;
    func_0x000107c5fc50(param_1,ppppuVar7,uVar5);
    pppuVar3 = pppuStack_68;
    if ((undefined8 ****)pppuStack_68 != (undefined8 ****)0x0) {
      ppppuVar15 = (undefined8 ****)((ulong)pppuStack_68 & 0xffffffffffffff8);
      if ((ulong)pppuStack_68 >> 0x3e == 0) {
        ppppuVar14 = (undefined8 ****)ppppuVar15[2];
      }
      else {
        ppppuVar14 = (undefined8 ****)pppuStack_68;
        if (-1 < (long)pppuStack_68) {
          ppppuVar14 = ppppuVar15;
        }
        func_0x000107c60480();
      }
      if (ppppuVar14 != (undefined8 ****)0x0) {
        ppppuVar8 = (undefined8 ****)0x0;
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          while( true ) {
            if (((ulong)pppuVar3 & 0xc000000000000001) == 0) {
              if (ppppuVar15[2] <= ppppuVar8) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100bcdcec);
                (*pcVar4)();
              }
              ppppuVar6 = (undefined8 ****)pppuVar3[(long)ppppuVar8 + 4];
              func_0x000107c61174();
              ppppuVar13 = ppppuVar7;
            }
            else {
              ppppuVar6 = ppppuVar8;
              ppppuVar13 = (undefined8 ****)pppuVar3;
              func_0x0001019ea4ec(ppppuVar8,pppuVar3,&PTR_PTR_1126b5930,0x112de84b8);
            }
            ppppuVar1 = (undefined8 ****)((long)ppppuVar8 + 1);
            if (SCARRY8((long)ppppuVar8,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100bcdce8);
              (*pcVar4)();
            }
            ppppuVar7 = ppppuVar6;
            func_0x000107c5bd00();
            if (ppppuVar7 == (undefined8 ****)0x2) break;
            func_0x000107c61170(ppppuVar6);
            ppppuVar7 = ppppuVar13;
            ppppuVar8 = (undefined8 ****)((long)ppppuVar8 + 1);
            if (ppppuVar1 == ppppuVar14) goto LAB_100bcdd08;
          }
          ppppuVar8 = ppppuVar6;
          func_0x000107c4b1dc();
          func_0x000107c61180();
          ppppuVar9 = ppppuVar8;
          func_0x000107c5faec();
          ppppuVar7 = ppppuVar13;
          func_0x000107c61170(ppppuVar8);
          func_0x000107c61170(ppppuVar6);
          puVar10 = puVar12;
          func_0x000107c61558();
          puVar11 = puVar12;
          if (((ulong)puVar10 & 1) == 0) {
            ppppuVar7 = (undefined8 ****)(*(long *)(puVar12 + 0x10) + 1);
            puVar11 = (undefined *)0x0;
            func_0x0001019ea6a8(0,ppppuVar7,1,puVar12,PTR__swift_bridgeObjectRelease_11034f258);
          }
          uVar2 = *(ulong *)(puVar11 + 0x10);
          ppppuVar8 = (undefined8 ****)(uVar2 + 1);
          puVar12 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
            ppppuVar7 = ppppuVar8;
            func_0x0001019ea6a8(puVar12,ppppuVar8,1,puVar11,PTR__swift_bridgeObjectRelease_11034f258
                               );
          }
          *(undefined8 *****)(puVar12 + 0x10) = ppppuVar8;
          *(undefined8 *****)(puVar12 + uVar2 * 0x10 + 0x20) = ppppuVar9;
          *(undefined8 *****)(puVar12 + uVar2 * 0x10 + 0x28) = ppppuVar13;
          ppppuVar8 = ppppuVar1;
        } while (ppppuVar1 != ppppuVar14);
      }
LAB_100bcdd08:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pppuVar3);
      return;
    }
  }
  (*pcVar4)(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 100bcdabc; end: 100bcdafb;  */

void FUN_100bcdabc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100bcdafc; end: 100bcdd3b;  */

/* WARNING: Possible PIC construction at 0x000100bcdd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bcdd10) */

void FUN_100bcdafc(long param_1,long param_2,code *param_3)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ***pppuStack_68;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    pppuStack_68 = (undefined8 ****)0x0;
    uVar5 = 0;
    FUN_100bcdabc(0,0x112de84b8,&PTR_PTR_1126b5930);
    ppppuVar7 = &pppuStack_68;
    func_0x000107c5fc50(param_1,ppppuVar7,uVar5);
    pppuVar3 = pppuStack_68;
    if ((undefined8 ****)pppuStack_68 != (undefined8 ****)0x0) {
      ppppuVar15 = (undefined8 ****)((ulong)pppuStack_68 & 0xffffffffffffff8);
      if ((ulong)pppuStack_68 >> 0x3e == 0) {
        ppppuVar14 = (undefined8 ****)ppppuVar15[2];
      }
      else {
        ppppuVar14 = (undefined8 ****)pppuStack_68;
        if (-1 < (long)pppuStack_68) {
          ppppuVar14 = ppppuVar15;
        }
        func_0x000107c60480();
      }
      if (ppppuVar14 != (undefined8 ****)0x0) {
        ppppuVar8 = (undefined8 ****)0x0;
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          while( true ) {
            if (((ulong)pppuVar3 & 0xc000000000000001) == 0) {
              if (ppppuVar15[2] <= ppppuVar8) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100bcdcec);
                (*pcVar4)();
              }
              ppppuVar6 = (undefined8 ****)pppuVar3[(long)ppppuVar8 + 4];
              func_0x000107c61174();
              ppppuVar13 = ppppuVar7;
            }
            else {
              ppppuVar6 = ppppuVar8;
              ppppuVar13 = (undefined8 ****)pppuVar3;
              func_0x0001019ea4ec(ppppuVar8,pppuVar3,&PTR_PTR_1126b5930,0x112de84b8);
            }
            ppppuVar1 = (undefined8 ****)((long)ppppuVar8 + 1);
            if (SCARRY8((long)ppppuVar8,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100bcdce8);
              (*pcVar4)();
            }
            ppppuVar7 = ppppuVar6;
            func_0x000107c5bd00();
            if (ppppuVar7 == (undefined8 ****)0x2) break;
            func_0x000107c61170(ppppuVar6);
            ppppuVar7 = ppppuVar13;
            ppppuVar8 = (undefined8 ****)((long)ppppuVar8 + 1);
            if (ppppuVar1 == ppppuVar14) goto LAB_100bcdd08;
          }
          ppppuVar8 = ppppuVar6;
          func_0x000107c4b1dc();
          func_0x000107c61180();
          ppppuVar9 = ppppuVar8;
          func_0x000107c5faec();
          ppppuVar7 = ppppuVar13;
          func_0x000107c61170(ppppuVar8);
          func_0x000107c61170(ppppuVar6);
          puVar10 = puVar12;
          func_0x000107c61558();
          puVar11 = puVar12;
          if (((ulong)puVar10 & 1) == 0) {
            ppppuVar7 = (undefined8 ****)(*(long *)(puVar12 + 0x10) + 1);
            puVar11 = (undefined *)0x0;
            func_0x0001019ea6a8(0,ppppuVar7,1,puVar12,PTR__swift_bridgeObjectRelease_11034f258);
          }
          uVar2 = *(ulong *)(puVar11 + 0x10);
          ppppuVar8 = (undefined8 ****)(uVar2 + 1);
          puVar12 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
            ppppuVar7 = ppppuVar8;
            func_0x0001019ea6a8(puVar12,ppppuVar8,1,puVar11,PTR__swift_bridgeObjectRelease_11034f258
                               );
          }
          *(undefined8 *****)(puVar12 + 0x10) = ppppuVar8;
          *(undefined8 *****)(puVar12 + uVar2 * 0x10 + 0x20) = ppppuVar9;
          *(undefined8 *****)(puVar12 + uVar2 * 0x10 + 0x28) = ppppuVar13;
          ppppuVar8 = ppppuVar1;
        } while (ppppuVar1 != ppppuVar14);
      }
LAB_100bcdd08:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pppuVar3);
      return;
    }
  }
  (*param_3)(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 100bcdd3c; end: 100bcde97; -[SCScheduledLensFilteredMetadataStore initWithScheduleService:announcerPerformer:context:lensPerformerProvider:lensDataConfig:] */

undefined1 *
FUN_100bcdd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112701710;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126bcc50;
    func_0x000107c610f4();
    func_0x000107c456b0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126bcc50;
    func_0x000107c610f4();
    func_0x000107c456b0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x50) = 0;
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bcde98; end: 100bcdee7; -[SCScheduledLensFilteredMetadataStore warmUp] */

void FUN_100bcde98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3c9c4();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3bf70(param_1,param_2,0);
  func_0x000107c5bc1c(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bcdee8; end: 100bce03f; -[SCScheduledLensFilteredMetadataStore _subscribeOnServiceObservable] */

void FUN_100bcdee8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  func_0x000107c42194(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4cd78();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c51f40(uVar3);
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000107c4da88(uVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 100bce040; end: 100bce047; -[SCLensScheduleNamespaceReadOnlyManager mergedNamespaceDataObservable] */

void FUN_100bce040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_mergedNamespaceDataObservable_1126105a0);
  return;
}



/* Entry: 100bce048; end: 100bce0b7; -[SCMixerScheduleNamespaceServiceAdapter mergedNamespaceDataObservable] */

void FUN_100bce048(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4cd74();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100bce0b8; end: 100bce16f; -[SCMixerNamespaceService mergedMixerNamespaceDataObservable] */

void FUN_100bce0b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100bd3864;
  puStack_40 = &UNK_11089afa0;
  puVar1 = PTR_PTR_1126ae6b8;
  uStack_38 = param_1;
  func_0x000107c41654(PTR_PTR_1126ae6b8,param_2,&puStack_58);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c328();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100bce170; end: 100bce177; -[SCObservable subscribeOnPerformer:] */

void FUN_100bce170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25fff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_subscribeOnPerformer_preferSynch_112675a20,param_3,0);
  return;
}



/* Entry: 100bce178; end: 100bce1db; -[SCObservable subscribeOnPerformer:preferSynchronous:] */

void FUN_100bce178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2f18;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47d88();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bce1dc; end: 100bce27f; -[SCQueuePerformerSubscriptionObservable initWithParentObservable:performer:preferSynchronous:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100bce1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_11270e4d8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127966e8;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127966ec) = param_5;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100bce280; end: 100bce433; -[SCQueuePerformerSubscriptionObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bce280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126e2f28;
  func_0x000107c610f4(PTR_PTR_1126e2f28);
  lVar2 = param_1;
  func_0x000107c4e358(param_1);
  func_0x000107c61180();
  func_0x000107c47b64(puVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61174(puVar1);
  func_0x000107c61144(auStack_48,puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127966e8);
  if (*(char *)(param_1 + _DAT_1127966ec) == '\x01') {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    puStack_70 = &UNK_10bcb9bb4;
    puStack_68 = &UNK_110848218;
    puVar3 = auStack_50;
    func_0x000107c6111c(puVar3,auStack_48);
    lStack_60 = param_1;
    func_0x000107c61174(param_3);
    uStack_58 = param_3;
    func_0x000107c4e590(uVar4);
    uVar4 = uStack_58;
  }
  else {
    puVar3 = auStack_88;
    func_0x000107c6111c(puVar3,auStack_48);
    func_0x000107c61174(param_3);
    func_0x000107c4e524(uVar4);
    uVar4 = param_3;
  }
  func_0x000107c61170(uVar4);
  func_0x000107c61120(puVar3);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bce434; end: 100bce4f7; -[SCObserverAsyncUnsubscriber initWithObservable:observer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100bce434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_11270e570;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_1127967a0),param_3);
    lVar3 = (long)_DAT_1127967a4;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127967a8) = 0;
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127967ac) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bce4f8; end: 100bce4ff;  */

void FUN_100bce4f8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100bce55c(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100bce500; end: 100bce55b;  */

void FUN_100bce500(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100bce55c(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100bce55c; end: 100bce76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bce55c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  ulong *puVar5;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  
  lVar10 = 0x112d373d8;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  lVar6 = *(long *)(unaff_x20 + _DAT_112de8460);
  func_0x000107c614f0();
  FUN_100bc7fa4();
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    FUN_100bcbc04();
    func_0x000107c61434();
    puVar5 = (ulong *)(param_1 + 0x28);
    do {
      uVar2 = puVar5[-1];
      uVar1 = *puVar5;
      func_0x000107c61434(uVar1);
      func_0x000107c61434(lVar6);
      uVar4 = uVar1;
      func_0x000100029284();
      func_0x000107c6142c(lVar6);
      if ((uVar4 & 1) == 0) {
        func_0x000107c6142c(uVar1);
        lVar3 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar7,1,1,lVar3);
      }
      else {
        lVar3 = lVar6;
        func_0x000107c61558();
        if ((int)lVar3 == 0) {
          func_0x000100fdb034();
        }
        func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar6 + 0x30) + uVar2 * 0x10 + 8));
        lVar8 = *(long *)(lVar6 + 0x38);
        lVar3 = 0;
        func_0x000107c5eea4();
        lVar9 = *(long *)(lVar3 + -8);
        (**(code **)(lVar9 + 0x20))(puVar7,lVar8 + *(long *)(lVar9 + 0x48) * uVar2,lVar3);
        func_0x000100fdc0d0(uVar2,lVar6);
        func_0x000107c6142c(uVar1);
        (**(code **)(lVar9 + 0x38))(puVar7,0,1,lVar3);
      }
      puVar5 = puVar5 + 2;
      func_0x0001019eb0bc(puVar7,0x112d373d8,&UNK_10d9014c0);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    lVar10 = *(long *)(lVar6 + 0x10);
    func_0x000107c6142c();
    if (lVar10 != *(long *)(lVar6 + 0x10)) {
      func_0x0001019e92e8(lVar6);
    }
    func_0x000107c6142c(lVar6);
  }
  return;
}



/* Entry: 100bce770; end: 100bce77f;  */

void FUN_100bce770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100bce780; end: 100bce7a3;  */

void FUN_100bce780(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bce7a4; end: 100bce7bb; -[SCScheduledLensFilteredMetadataStore _namespaceUpdatingModeForStoreUpdatingMode:] */

undefined1 FUN_100bce7a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 3;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 100bce7bc; end: 100bce7cf; -[SCLensScheduleNamespaceReadOnlyManager startUpdatingWithMode:] */

void FUN_100bce7bc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c251670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_startUpdatingWithMode__112671fc0);
    return;
  }
  return;
}



/* Entry: 100bce7d0; end: 100bce823; -[SCLensUnlockableDataProvider strategy] */

/* WARNING: Possible PIC construction at 0x000100bce7f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bce7f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bce7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127832d4),PTR_s_target_112678178);
  return;
}



/* Entry: 100bce824; end: 100bce8c3;  */

void FUN_100bce824(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dddb0;
  func_0x000107c610f4(PTR_PTR_1126dddb0);
  func_0x000107c47378();
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x000107c61174(puVar1);
    puVar2 = puVar1;
  }
  else if (*(char *)(param_1 + 0x40) == '\x01') {
    puVar2 = PTR_PTR_1126dddb8;
    func_0x000107c610f4(PTR_PTR_1126dddb8);
    func_0x000107c48ac8();
  }
  else {
    puVar2 = PTR_PTR_1126dddc0;
    func_0x000107c610f4(PTR_PTR_1126dddc0);
    func_0x000107c47380();
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bce8c4; end: 100bce993; -[SCLensUnlockableDefaultStrategy initWithLensMetadataStore:lensUnlocker:] */

undefined8
FUN_100bce8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f55c2a5);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x19,0,0xe);
  func_0x000107c61170(puVar2);
  func_0x000107c4737c(param_1,param_2,param_3,param_4,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100bce994; end: 100bcea9b; -[SCLensUnlockableDefaultStrategy initWithLensMetadataStore:lensUnlocker:performer:] */

undefined1 *
FUN_100bce994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112700e28;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = &UNK_10f55c2e7;
    func_0x000107c60f50(&UNK_10f55c2e7,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bcea9c; end: 100bceaa7; -[SCLensUnlockableDefaultStrategy setDelegate:] */

void FUN_100bcea9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 100bceaa8; end: 100bceaab; -[SCLensUnlockableDefaultStrategy warmUp] */

void FUN_100bceaa8(void)

{
  return;
}



/* Entry: 100bceaac; end: 100bcec83;  */

/* WARNING: Possible PIC construction at 0x000100bceb24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bceb34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bceb28) */
/* WARNING: Removing unreachable block (ram,0x000100bceb38) */

void FUN_100bceaac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x000107c40794(uVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x000107c40794(uVar3);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  func_0x000107c40794(uVar4);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x000107c40794(uVar5);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,uVar3,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 100bcec84; end: 100bced4b; -[SCFriendsFeedDataCoordinator _logGrapheneFetchIfNecessaryForSubstep:entriesFetched:startTime:friendsFeedUpdate:] */

/* WARNING: Possible PIC construction at 0x000100bcecd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bced24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bcecdc) */
/* WARNING: Removing unreachable block (ram,0x000100bcece0) */
/* WARNING: Removing unreachable block (ram,0x000100bced28) */
/* WARNING: Removing unreachable block (ram,0x000100bced30) */

void FUN_100bcec84(void)

{
  undefined8 in_x4;
  
  func_0x000107c61174(in_x4);
  func_0x000107c43044(in_x4);
  func_0x000107c61180();
  FUN_100bbae3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 100bced4c; end: 100bcedab;  */

/* WARNING: Possible PIC construction at 0x000100bced98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bced9c) */

void FUN_100bced4c(long param_1)

{
  func_0x000107c61120(param_1 + 0x50);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x48),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x40),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x38),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100bcedac; end: 100bcedc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bcedac(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_113095328);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar1);
    func_0x000100087f6c(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 100bcedc8; end: 100bcee47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bcedc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_113095328);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_1);
    func_0x000100087f6c(param_2);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 100bcee48; end: 100bcee4f;  */

void FUN_100bcee48(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined auStack_68 [24];
  
  puVar8 = (undefined *)*param_1;
  puVar1 = puVar8;
  func_0x000107c5d6e4();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_100bcf210(0,0x112d67868,&PTR_PTR_1126daa00);
    puVar3 = puVar1;
    func_0x000107c5fc54(puVar1,uVar2);
    func_0x000107c61170(puVar1);
  }
  puVar1 = puVar8;
  func_0x000107c4d184();
  func_0x000107c61180();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_100bcf210(0,0x112f14530,&PTR_PTR_1126dab20);
    puVar4 = puVar1;
    func_0x000107c5fc54(puVar1,uVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c4d188();
  func_0x000107c61180();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar8 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_100bcf210(0,0x112f14528,&PTR_PTR_1126c29a0);
    puVar1 = puVar8;
    func_0x000107c5fc54(puVar8,uVar2);
    func_0x000107c61170(puVar8);
  }
  puVar8 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x10,puVar8,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    func_0x000107c6142c(puVar4);
  }
  else {
    lVar6 = lVar5;
    FUN_10011df08();
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
    FUN_100bcf7a8(puVar3,puVar4,puVar1,lVar7,puVar8);
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puVar1);
    func_0x000107c61170(lVar5);
    puVar1 = puVar8;
  }
  func_0x000107c6142c(puVar1);
  func_0x000107c6142c(puVar3);
  return;
}



/* Entry: 100bcee50; end: 100bcf023;  */

void FUN_100bcee50(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined auStack_68 [24];
  
  puVar7 = (undefined *)*param_1;
  puVar1 = puVar7;
  func_0x000107c5d6e4();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_100bcf210(0,0x112d67868,&PTR_PTR_1126daa00);
    puVar3 = puVar1;
    func_0x000107c5fc54(puVar1,uVar2);
    func_0x000107c61170(puVar1);
  }
  puVar1 = puVar7;
  func_0x000107c4d184();
  func_0x000107c61180();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_100bcf210(0,0x112f14530,&PTR_PTR_1126dab20);
    puVar4 = puVar1;
    func_0x000107c5fc54(puVar1,uVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c4d188();
  func_0x000107c61180();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar7 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_100bcf210(0,0x112f14528,&PTR_PTR_1126c29a0);
    puVar1 = puVar7;
    func_0x000107c5fc54(puVar7,uVar2);
    func_0x000107c61170(puVar7);
  }
  puVar7 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar7,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000107c6142c(puVar4);
  }
  else {
    lVar5 = param_2;
    FUN_10011df08();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    FUN_100bcf7a8(puVar3,puVar4,puVar1,lVar6,puVar7);
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puVar1);
    func_0x000107c61170(param_2);
    puVar1 = puVar7;
  }
  func_0x000107c6142c(puVar1);
  func_0x000107c6142c(puVar3);
  return;
}



/* Entry: 100bcf024; end: 100bcf20f; -[SCDiscoverFeedQueryServiceProvider provide] */

void FUN_100bcf024(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_100bd4c10;
  puStack_78 = &UNK_1109493a0;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_b8 = puVar3;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_1068f9240;
  puStack_a0 = &UNK_1109493d0;
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_c0,auStack_68);
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126cee38;
  func_0x000107c610f4(PTR_PTR_1126cee38);
  func_0x000107c465c4();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_98);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100bcf210; end: 100bcf24f;  */

void FUN_100bcf210(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100bcf250; end: 100bcf257; -[SCFriendsFeedUpdateEvent multiRecipientFeedEntries] */

undefined8 FUN_100bcf250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bcf258; end: 100bcf307; -[_TtC27SCDiscoverFeedQueryServices27SCDiscoverFeedQueryServices initWithDiscoverFeedQueryCoordinator:prefetchHandler:collectionPrefetcher:viewModelGenerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bcf258(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11302ce60) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302ce68) = param_4;
  *(undefined8 *)(param_1 + _DAT_11302ce70) = param_5;
  *(undefined8 *)(param_1 + _DAT_11302ce78) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 100bcf308; end: 100bcf483;  */

void FUN_100bcf308(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bcf484; end: 100bcf48b;  */

void FUN_100bcf484(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bcf48c; end: 100bcf4df;  */

void FUN_100bcf48c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bcf4e0; end: 100bcf4eb;  */

void FUN_100bcf4e0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002b9c20();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a99a0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 100bcf4ec; end: 100bcf79f;  */

void FUN_100bcf4ec(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002b9c20();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a99a0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100bcf7a0; end: 100bcf7a7; -[SCFriendsFeedUpdateEvent multiRecipientFeedEntriesDeleted] */

undefined8 FUN_100bcf7a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100bcf7a8; end: 100bd0387;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bcf7a8(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *****pppppuVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *******pppppppuVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *******pppppppuVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *******pppppppuVar24;
  undefined8 *****pppppuVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  long unaff_x20;
  ulong uVar30;
  long lVar31;
  undefined *puVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  undefined8 ******ppppppuVar36;
  undefined8 *****pppppuVar37;
  undefined8 *****pppppuVar38;
  ulong uVar39;
  long lStack_d0;
  undefined8 *******pppppppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined *apuStack_80 [4];
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112f144f0));
  FUN_100bd03b4(param_1);
  if (param_2 >> 0x3e == 0) {
    uVar30 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar30 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar30 = param_2;
    }
    func_0x000107c60480();
  }
  lVar26 = _DAT_112f144c8;
  lVar34 = _DAT_112f144c0;
  if (uVar30 == 0) {
    lStack_d0 = 0;
  }
  else {
    lStack_d0 = 0;
    uVar35 = 0;
    lVar27 = *(long *)(unaff_x20 + _DAT_112f144e8);
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0254);
          (*pcVar6)();
        }
        uVar9 = *(ulong *)(param_2 + 0x20 + uVar35 * 8);
        func_0x000107c61174();
      }
      else {
        uVar9 = uVar35;
        func_0x000102d75f58(uVar35,param_2);
      }
      bVar7 = SCARRY8(uVar35,1);
      uVar35 = uVar35 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0250);
        (*pcVar6)();
      }
      uVar29 = uVar9;
      func_0x000107c44fdc();
      func_0x000107c61180();
      uVar33 = uVar29;
      func_0x000107c41844();
      func_0x000107c61180();
      func_0x000107c61170(uVar29);
      pppppppuVar10 = (undefined8 *******)0x0;
      FUN_100bcf210(0,0x112d4e810,&PTR_PTR_1126b0cd8);
      uVar29 = uVar33;
      pppppppuVar24 = pppppppuVar10;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar33);
      uVar33 = uVar29 & 0xffffffffffffff8;
      if (uVar29 >> 0x3e == 0) {
        uVar39 = *(ulong *)(uVar33 + 0x10);
      }
      else {
        uVar39 = uVar33;
        if (0x7fffffffffffffff < uVar29) {
          uVar39 = uVar29;
        }
        func_0x000107c60480();
      }
      puVar32 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar39 != 0) {
        uVar20 = 0;
        do {
          while( true ) {
            if ((uVar29 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar33 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd023c);
                (*pcVar6)();
              }
              uVar11 = *(ulong *)(uVar29 + uVar20 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar11 = uVar20;
              FUN_100bc2938(uVar20,uVar29);
            }
            uVar1 = uVar20 + 1;
            if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0238);
              (*pcVar6)();
            }
            pppppppuVar24 = &pppppppuStack_a8;
            func_0x000107c61428(unaff_x20 + lVar26,pppppppuVar24,0x20,0);
            lVar31 = *(long *)(unaff_x20 + lVar26);
            if (*(long *)(lVar31 + 0x10) != 0) break;
LAB_100bcfa28:
            func_0x000107c614a8(&pppppppuStack_a8);
            puVar13 = puVar32;
            func_0x000107c61558();
            apuStack_80[0] = puVar32;
            if (((ulong)puVar13 & 1) == 0) {
              pppppppuVar24 = (undefined8 *******)(*(long *)(puVar32 + 0x10) + 1);
              func_0x000102d76108(0,pppppppuVar24,1);
            }
            uVar20 = *(ulong *)(apuStack_80[0] + 0x10);
            pppppppuVar21 = (undefined8 *******)(uVar20 + 1);
            if (*(ulong *)(apuStack_80[0] + 0x18) >> 1 <= uVar20) {
              pppppppuVar24 = pppppppuVar21;
              func_0x000102d76108(1 < *(ulong *)(apuStack_80[0] + 0x18),pppppppuVar21,1);
            }
            *(undefined8 ********)(apuStack_80[0] + 0x10) = pppppppuVar21;
            *(ulong *)(apuStack_80[0] + uVar20 * 8 + 0x20) = uVar11;
            puVar32 = apuStack_80[0];
            uVar20 = uVar1;
            if (uVar1 == uVar39) goto LAB_100bcfad8;
          }
          func_0x000107c61434(lVar31);
          uVar12 = uVar11;
          FUN_100bd0a8c();
          if (((ulong)pppppppuVar24 & 1) == 0) {
            func_0x000107c6142c(lVar31);
            goto LAB_100bcfa28;
          }
          uVar28 = *(undefined8 *)(*(long *)(lVar31 + 0x38) + uVar12 * 0x10 + 8);
          func_0x000107c61434(uVar28);
          func_0x000107c614a8(&pppppppuStack_a8);
          func_0x000107c6142c(uVar28);
          func_0x000107c61170(uVar11);
          func_0x000107c6142c(lVar31);
          uVar20 = uVar20 + 1;
        } while (uVar1 != uVar39);
      }
LAB_100bcfad8:
      func_0x000107c6142c(uVar29);
      if (((long)puVar32 < 0) || (((ulong)puVar32 >> 0x3e & 1) != 0)) {
        puVar13 = puVar32;
        func_0x000107c60480();
        if (puVar13 != (undefined *)0x0) goto LAB_100bcfaf8;
LAB_100bcfe0c:
        func_0x000107c61574(puVar32);
      }
      else {
        if (*(long *)(puVar32 + 0x10) == 0) goto LAB_100bcfe0c;
LAB_100bcfaf8:
        puVar13 = &UNK_1105cc818;
        func_0x000107c613fc(&UNK_1105cc818,0x20,7);
        *(undefined **)(puVar13 + 0x10) = puVar32;
        *(long *)(puVar13 + 0x18) = unaff_x20;
        func_0x000107c6157c(puVar32);
        func_0x000107c61174(unaff_x20);
        uVar28 = 0x112f14538;
        FUN_1000285a8(0x112f14538,&UNK_10db49638);
        uVar14 = 0;
        func_0x0001048898b8(0,1,&UNK_102d75218,puVar13,uVar28);
        func_0x000107c61574(puVar32);
        func_0x000107c61574(puVar13);
        func_0x0001048886ac(&pppppppuStack_a8);
        func_0x000107c61574(uVar14);
        pppppppuVar21 = pppppppuStack_a8;
        pppppppuVar24 = (undefined8 *******)(uStack_a0 & 0xff);
        uVar22 = (uint)(byte)uStack_a0;
        if ((uVar22 == 1) ||
           (pppppuVar25 = pppppppuStack_a8[2], pppppuVar25 == (undefined8 *****)0x0)) {
          func_0x000102d75230(pppppppuStack_a8);
        }
        else {
          pppppuVar38 = (undefined8 *****)0x0;
          ppppppuVar36 = pppppppuStack_a8 + 6;
          do {
            if (pppppppuVar21[2] <= pppppuVar38) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0240);
              (*pcVar6)();
            }
            pppppuVar4 = ppppppuVar36[-2];
            pppppuVar17 = ppppppuVar36[-1];
            pppppuVar37 = *ppppppuVar36;
            pppppppuVar24 = &pppppppuStack_a8;
            func_0x000107c61428(unaff_x20 + lVar26,pppppppuVar24,0x21,0);
            if (pppppuVar37 == (undefined8 *****)0x0) {
              uVar28 = *(undefined8 *)(unaff_x20 + lVar26);
              pppppuVar17 = pppppuVar4;
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61434(uVar28);
              pppppuVar37 = pppppuVar17;
              FUN_100bd0a8c();
              func_0x000107c6142c(uVar28);
              if (((ulong)pppppppuVar24 & 1) != 0) {
                iVar8 = (int)*(undefined8 *)(unaff_x20 + lVar26);
                func_0x000107c61558();
                apuStack_80[0] = *(undefined **)(unaff_x20 + lVar26);
                *(undefined8 *)(unaff_x20 + lVar26) = 0x8000000000000000;
                if (iVar8 == 0) {
                  func_0x000102d740e0();
                }
                puVar32 = apuStack_80[0];
                func_0x000107c61170(*(undefined8 *)
                                     (*(long *)(apuStack_80[0] + 0x30) + (long)pppppuVar37 * 8));
                func_0x000107c6142c(*(undefined8 *)
                                     (*(long *)(puVar32 + 0x38) + (long)pppppuVar37 * 0x10 + 8));
                func_0x000102d73dbc(pppppuVar37,puVar32);
                func_0x000107c61170(pppppuVar17);
                goto LAB_100bcfbd0;
              }
              func_0x000107c61170(pppppuVar17);
            }
            else {
              func_0x000107c61434(pppppuVar37);
              uVar29 = *(ulong *)(unaff_x20 + lVar26);
              pppppuVar15 = pppppuVar4;
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61558();
              uVar23 = (uint)uVar29;
              puVar32 = *(undefined **)(unaff_x20 + lVar26);
              *(undefined8 *)(unaff_x20 + lVar26) = 0x8000000000000000;
              pppppuVar16 = pppppuVar15;
              apuStack_80[0] = puVar32;
              FUN_100bd0a8c();
              uVar33 = (ulong)~(uint)pppppppuVar24 & 1;
              if (SCARRY8(*(long *)(puVar32 + 0x10),uVar33)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0244);
                (*pcVar6)();
              }
              if (*(long *)(puVar32 + 0x18) < (long)(*(long *)(puVar32 + 0x10) + uVar33)) {
                FUN_100bd0b88();
                pppppuVar16 = pppppuVar15;
                FUN_100bd0a8c();
                if (((uint)pppppppuVar24 & 1) != (uVar23 & 1)) {
                  func_0x000107c60624(pppppppuVar10);
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0388);
                  (*pcVar6)();
                }
              }
              else if ((uVar29 & 1) == 0) {
                func_0x000102d740e0();
              }
              puVar32 = apuStack_80[0];
              if (((ulong)pppppppuVar24 & 1) == 0) {
                *(ulong *)(apuStack_80[0] + ((ulong)pppppuVar16 >> 6) * 8 + 0x40) =
                     *(ulong *)(apuStack_80[0] + ((ulong)pppppuVar16 >> 6) * 8 + 0x40) |
                     1L << ((ulong)pppppuVar16 & 0x3f);
                *(undefined8 ******)(*(long *)(apuStack_80[0] + 0x30) + (long)pppppuVar16 * 8) =
                     pppppuVar15;
                plVar2 = (long *)(*(long *)(apuStack_80[0] + 0x38) + (long)pppppuVar16 * 0x10);
                *plVar2 = (long)pppppuVar17;
                plVar2[1] = (long)pppppuVar37;
                if (SCARRY8(*(long *)(apuStack_80[0] + 0x10),1)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0248);
                  (*pcVar6)();
                }
                *(long *)(apuStack_80[0] + 0x10) = *(long *)(apuStack_80[0] + 0x10) + 1;
              }
              else {
                plVar2 = (long *)(*(long *)(apuStack_80[0] + 0x38) + (long)pppppuVar16 * 0x10);
                lVar31 = plVar2[1];
                *plVar2 = (long)pppppuVar17;
                plVar2[1] = (long)pppppuVar37;
                func_0x000107c61170(pppppuVar15);
                func_0x000107c6142c(lVar31);
              }
LAB_100bcfbd0:
              *(undefined **)(unaff_x20 + lVar26) = puVar32;
            }
            pppppuVar38 = (undefined8 *****)((long)pppppuVar38 + 1);
            func_0x000107c614a8(&pppppppuStack_a8);
            func_0x000107c61170(pppppuVar4);
            ppppppuVar36 = ppppppuVar36 + 3;
          } while (pppppuVar25 != pppppuVar38);
          pppppppuVar24 = (undefined8 *******)(ulong)uVar22;
          func_0x000102d75230(pppppppuVar21);
        }
      }
      uVar29 = uVar9;
      func_0x000107c44fdc(uVar9);
      func_0x000107c61180();
      lVar31 = lVar27;
      func_0x000107c43a7c();
      func_0x000107c61180();
      func_0x000107c61170(uVar29);
      lVar18 = lVar31;
      func_0x000107c5faec();
      uVar29 = uVar9;
      func_0x000107cf7ad4(uVar9,lVar31);
      func_0x000107c61180();
      func_0x000107c61170(lVar31);
      func_0x000107c61428(unaff_x20 + lVar34,&pppppppuStack_a8,0x20,0);
      lVar31 = *(long *)(unaff_x20 + lVar34);
      if (*(long *)(lVar31 + 0x10) == 0) {
LAB_100bcff70:
        func_0x000107c614a8(&pppppppuStack_a8);
        uVar33 = 0;
LAB_100bcff84:
        uVar39 = uVar9;
        func_0x000107c44fdc(uVar9);
        func_0x000107c61180();
        uVar20 = uVar39;
        func_0x000107c41844();
        func_0x000107c61180();
        func_0x000107c61170(uVar39);
        uVar39 = uVar20;
        func_0x000107c5fc54(uVar20,pppppppuVar10);
        func_0x000107c61170(uVar20);
        uVar20 = uVar39;
        func_0x000102d72fa0(uVar39);
        func_0x000107c6142c(uVar39);
        func_0x000107c61428(unaff_x20 + lVar34,&pppppppuStack_a8,0x21,0);
        func_0x000107c61174(uVar29);
        func_0x000107c61434(pppppppuVar10);
        uVar28 = *(undefined8 *)(unaff_x20 + lVar34);
        func_0x000107c61558(uVar28);
        apuStack_80[0] = *(undefined **)(unaff_x20 + lVar34);
        *(undefined8 *)(unaff_x20 + lVar34) = 0x8000000000000000;
        func_0x000102d74250(uVar20,pppppppuVar10,2,uVar29,lVar18,pppppppuVar24,uVar28);
        func_0x000107c6142c(pppppppuVar24);
        *(undefined **)(unaff_x20 + lVar34) = apuStack_80[0];
        func_0x000107c614a8(&pppppppuStack_a8);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar33);
        func_0x000107c61170(uVar29);
        func_0x000107c6142c(pppppppuVar10);
        bVar7 = SCARRY8(lStack_d0,1);
        lStack_d0 = lStack_d0 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd009c);
          (*pcVar6)();
        }
      }
      else {
        func_0x000107c61434(lVar31);
        lVar19 = lVar18;
        pppppppuVar21 = pppppppuVar24;
        func_0x000100029284();
        if (((ulong)pppppppuVar21 & 1) == 0) {
          func_0x000107c6142c(lVar31);
          goto LAB_100bcff70;
        }
        puVar3 = (undefined8 *)(*(long *)(lVar31 + 0x38) + lVar19 * 0x20);
        uVar28 = *puVar3;
        uVar5 = puVar3[1];
        uVar14 = puVar3[2];
        uVar39 = puVar3[3];
        func_0x000107c61434(uVar5);
        uVar33 = uVar39;
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c614a8(&pppppppuStack_a8);
        func_0x000107c6142c(lVar31);
        func_0x000102d72cb8(uVar28,uVar5,uVar14,uVar39);
        FUN_100bcf210(0,0x112f144a8,&PTR_PTR_1126d7848);
        func_0x000107c61174();
        uVar39 = uVar29;
        func_0x000107c61174(uVar29);
        uVar20 = uVar33;
        func_0x000107c60118(uVar33,uVar39);
        func_0x000107c61170(uVar33);
        func_0x000107c61170(uVar39);
        if ((uVar20 & 1) == 0) goto LAB_100bcff84;
        func_0x000107c61170(uVar33);
        func_0x000107c6142c(pppppppuVar24);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar39);
      }
    } while (uVar35 != uVar30);
  }
  if (((long)param_3 < 0) || ((param_3 >> 0x3e & 1) != 0)) {
    uVar30 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar30 = param_3;
    }
    func_0x000107c60480();
    lVar34 = _DAT_112f144c0;
  }
  else {
    uVar30 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    lVar34 = _DAT_112f144c0;
  }
  _DAT_112f144c0 = lVar34;
  if (uVar30 != 0) {
    if ((long)uVar30 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0270);
      (*pcVar6)();
    }
    uVar35 = 0;
    lVar26 = *(long *)(unaff_x20 + _DAT_112f144e8);
    do {
      uVar9 = param_3;
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar29 = *(ulong *)(param_3 + uVar35 * 8 + 0x20);
        func_0x000107c61174(uVar29);
      }
      else {
        uVar29 = uVar35;
        func_0x000102d75f44(uVar35);
      }
      lVar27 = lVar26;
      func_0x000107c43a7c();
      func_0x000107c61180();
      lVar31 = lVar27;
      func_0x000107c5faec();
      func_0x000107c61170(lVar27);
      func_0x000107c61428(unaff_x20 + lVar34,&pppppppuStack_a8,0x21,0);
      uVar28 = *(undefined8 *)(unaff_x20 + lVar34);
      func_0x000107c61434(uVar28);
      uVar33 = uVar9;
      func_0x000100029284();
      func_0x000107c6142c(uVar28);
      if ((uVar33 & 1) != 0) {
        iVar8 = (int)*(undefined8 *)(unaff_x20 + lVar34);
        func_0x000107c61558();
        apuStack_80[0] = *(undefined **)(unaff_x20 + lVar34);
        *(undefined8 *)(unaff_x20 + lVar34) = 0x8000000000000000;
        if (iVar8 == 0) {
          func_0x000102d73f4c();
        }
        puVar32 = apuStack_80[0];
        func_0x000107c6142c(*(undefined8 *)(*(long *)(apuStack_80[0] + 0x30) + lVar31 * 0x10 + 8));
        lVar27 = *(long *)(puVar32 + 0x38) + lVar31 * 0x20;
        uVar28 = *(undefined8 *)(lVar27 + 8);
        func_0x000107c61170(*(undefined8 *)(lVar27 + 0x18));
        func_0x000107c6142c(uVar28);
        func_0x000102d73c0c(lVar31,puVar32);
        *(undefined **)(unaff_x20 + lVar34) = puVar32;
      }
      func_0x000107c614a8(&pppppppuStack_a8);
      func_0x000107c6142c(uVar9);
      func_0x000107c61170(uVar29);
      if (lStack_d0 == 0x7fffffffffffffff) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd024c);
        (*pcVar6)();
      }
      uVar35 = uVar35 + 1;
      lStack_d0 = lStack_d0 + 1;
    } while (uVar30 != uVar35);
  }
  lVar34 = _DAT_112f144c0;
  if (0 < lStack_d0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f144c0,apuStack_80,0,0);
    lVar34 = *(long *)(unaff_x20 + lVar34);
    pppppppuVar10 = *(undefined8 ********)(lVar34 + 0x10);
    pppppppuVar24 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppppuVar10 != (undefined8 *******)0x0) {
      func_0x000107c61434(lVar34);
      pppppppuVar24 = pppppppuVar10;
      func_0x000100beb648(pppppppuVar10,0);
      pppppppuVar21 = &pppppppuStack_a8;
      func_0x000100beb6c8(pppppppuVar21,pppppppuVar24 + 4,pppppppuVar10,lVar34);
      func_0x000100beb848(pppppppuStack_a8,uStack_a0,uStack_98,uStack_90,
                          CONCAT62(uStack_86,uStack_88));
      if (pppppppuVar21 != pppppppuVar10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0318);
        (*pcVar6)();
      }
    }
    uStack_a0 = 0;
    uStack_88 = 0;
    pppppppuStack_a8 = pppppppuVar24;
    uStack_98 = param_4;
    uStack_90 = param_5;
    func_0x000107c61434(param_5);
    FUN_1002a64a8(&pppppppuStack_a8);
    func_0x000107c6142c(param_5);
    func_0x000107c61574(pppppppuVar24);
  }
  return;
}



/* Entry: 100bd0388; end: 100bd03b3;  */

void FUN_100bd0388(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bd03b4; end: 100bd07ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd03b4(ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x20;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  undefined1 auStack_78 [24];
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112f144f0));
  if (param_1 >> 0x3e == 0) {
    uVar22 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    lVar5 = _DAT_112f144c8;
  }
  else {
    uVar22 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar22 = param_1;
    }
    func_0x000107c60480();
    lVar5 = _DAT_112f144c8;
  }
  _DAT_112f144c8 = lVar5;
  if (uVar22 != 0) {
    lVar17 = *(long *)(unaff_x20 + _DAT_112f144e8);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f144f8);
    lVar4 = ((undefined8 *)(unaff_x20 + _DAT_112f144f8))[1];
    lVar23 = 4;
    do {
      uVar18 = lVar23 - 4;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0790);
          (*pcVar6)();
        }
        uVar8 = *(ulong *)(param_1 + lVar23 * 8);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar18;
        FUN_100bc22ec(uVar18,param_1);
      }
      uVar1 = lVar23 - 3;
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd078c);
        (*pcVar6)();
      }
      uVar18 = uVar8;
      func_0x000107c40674();
      func_0x000107c61180();
      puVar14 = auStack_78;
      func_0x000107c61428(unaff_x20 + lVar5,puVar14,0x20,0);
      lVar19 = *(long *)(unaff_x20 + lVar5);
      if (*(long *)(lVar19 + 0x10) == 0) {
LAB_100bd0540:
        func_0x000107c614a8(auStack_78);
        uVar21 = uVar3;
        lVar15 = lVar4;
        func_0x000107c5fadc(uVar3);
        lVar19 = lVar17;
        func_0x000107c43a9c();
        func_0x000107c61180();
        func_0x000107c61170(uVar21);
        if (lVar19 == 0) {
          puVar14 = auStack_78;
          func_0x000107c61428(unaff_x20 + lVar5,puVar14,0x21,0);
LAB_100bd065c:
          uVar21 = *(undefined8 *)(unaff_x20 + lVar5);
          uVar9 = uVar18;
          func_0x000107c61174();
          func_0x000107c61434(uVar21);
          uVar12 = uVar9;
          FUN_100bd0a8c();
          func_0x000107c6142c(uVar21);
          if (((ulong)puVar14 & 1) == 0) {
            func_0x000107c61170(uVar9);
          }
          else {
            iVar7 = (int)*(undefined8 *)(unaff_x20 + lVar5);
            func_0x000107c61558();
            lVar19 = *(long *)(unaff_x20 + lVar5);
            *(undefined8 *)(unaff_x20 + lVar5) = 0x8000000000000000;
            if (iVar7 == 0) {
              func_0x000102d740e0();
            }
            func_0x000107c61170(*(undefined8 *)(*(long *)(lVar19 + 0x30) + uVar12 * 8));
            func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar19 + 0x38) + uVar12 * 0x10 + 8));
            func_0x000102d73dbc(uVar12,lVar19);
            func_0x000107c61170(uVar9);
            *(long *)(unaff_x20 + lVar5) = lVar19;
          }
        }
        else {
          lVar10 = lVar19;
          func_0x000107c5faec();
          func_0x000107c61170(lVar19);
          puVar14 = auStack_78;
          func_0x000107c61428(unaff_x20 + lVar5,puVar14,0x21,0);
          if (lVar15 == 0) goto LAB_100bd065c;
          uVar12 = uVar18;
          func_0x000107c61174();
          uVar11 = *(ulong *)(unaff_x20 + lVar5);
          func_0x000107c61558();
          uVar13 = (uint)uVar11;
          lVar19 = *(long *)(unaff_x20 + lVar5);
          *(undefined8 *)(unaff_x20 + lVar5) = 0x8000000000000000;
          uVar9 = uVar12;
          FUN_100bd0a8c();
          uVar16 = (ulong)~(uint)puVar14 & 1;
          if (SCARRY8(*(long *)(lVar19 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0794);
            (*pcVar6)();
          }
          if (*(long *)(lVar19 + 0x18) < (long)(*(long *)(lVar19 + 0x10) + uVar16)) {
            FUN_100bd0b88();
            uVar9 = uVar12;
            FUN_100bd0a8c();
            if (((uint)puVar14 & 1) != (uVar13 & 1)) {
              FUN_100bcf210(0,0x112d4e810,&PTR_PTR_1126b0cd8);
              func_0x000107c60624();
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd07f0);
              (*pcVar6)();
            }
joined_r0x000100bd0734:
            if (((ulong)puVar14 & 1) != 0) goto LAB_100bd06f0;
LAB_100bd0738:
            lVar20 = lVar19 + (uVar9 >> 6) * 8;
            *(ulong *)(lVar20 + 0x40) = *(ulong *)(lVar20 + 0x40) | 1L << (uVar9 & 0x3f);
            *(ulong *)(*(long *)(lVar19 + 0x30) + uVar9 * 8) = uVar12;
            plVar2 = (long *)(*(long *)(lVar19 + 0x38) + uVar9 * 0x10);
            *plVar2 = lVar10;
            plVar2[1] = lVar15;
            if (SCARRY8(*(long *)(lVar19 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100bd0798);
              (*pcVar6)();
            }
            *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
          }
          else {
            if ((uVar11 & 1) == 0) {
              func_0x000102d740e0();
              goto joined_r0x000100bd0734;
            }
            if (((ulong)puVar14 & 1) == 0) goto LAB_100bd0738;
LAB_100bd06f0:
            plVar2 = (long *)(*(long *)(lVar19 + 0x38) + uVar9 * 0x10);
            lVar20 = plVar2[1];
            *plVar2 = lVar10;
            plVar2[1] = lVar15;
            func_0x000107c61170(uVar12);
            func_0x000107c6142c(lVar20);
          }
          *(long *)(unaff_x20 + lVar5) = lVar19;
        }
        func_0x000107c614a8(auStack_78);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar18);
      }
      else {
        func_0x000107c61434(lVar19);
        uVar9 = uVar18;
        FUN_100bd0a8c();
        if (((ulong)puVar14 & 1) == 0) {
          func_0x000107c6142c(lVar19);
          goto LAB_100bd0540;
        }
        uVar21 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + uVar9 * 0x10 + 8);
        func_0x000107c61434(uVar21);
        func_0x000107c614a8(auStack_78);
        func_0x000107c6142c(uVar21);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar18);
        func_0x000107c6142c(lVar19);
      }
      lVar23 = lVar23 + 1;
    } while (uVar1 != uVar22);
  }
  return;
}



/* Entry: 100bd07f0; end: 100bd0943; -[SCStoriesBadgingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd07f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar1 = param_1 + _DAT_11272d4bc;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar3 = PTR_PTR_1126c1010;
  func_0x000107c610f4(PTR_PTR_1126c1010);
  lVar1 = param_1 + _DAT_11272d4c0;
  func_0x000107c61148(lVar1);
  lVar4 = lVar1;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11272d4c4;
  func_0x000107c61148(param_1);
  lVar7 = param_1;
  func_0x000107c5bf3c();
  func_0x000107c61180();
  func_0x000107c492e0(puVar3,param_2,lVar5,lVar2,puVar6,lVar7);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  puVar6 = PTR_PTR_1126c1018;
  func_0x000107c610f4(PTR_PTR_1126c1018);
  func_0x000107c48a34();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100bd0944; end: 100bd0a5f; -[SCStoriesClientSideBadgingCoordinator initWithUserPreferences:circumstanceEngine:notificationCenter:storiesConfigProvider:] */

undefined1 *
FUN_100bd0944(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126eb478;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(long *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    lVar3 = param_4;
    FUN_100bd0a60();
    *(double *)((long)puVar1 + 0x20) = (double)lVar3 / 1000.0;
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bd0a60; end: 100bd0a8b;  */

long FUN_100bd0a60(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4980c(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b7b8,1200000,0);
  return (long)(int)param_1;
}



/* Entry: 100bd0a8c; end: 100bd0abb;  */

undefined1  [16] FUN_100bd0a8c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c60114();
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_100bcf210(0,0x112d4e810,&PTR_PTR_1126b0cd8);
    do {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8);
      func_0x000107c61174();
      uVar3 = uVar2;
      func_0x000107c60118();
      uVar5 = (uint)uVar3;
      func_0x000107c61170(uVar2);
      if ((uVar3 & 1) != 0) break;
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  auVar6._8_4_ = uVar5 & 1;
  auVar6._0_8_ = uVar1;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Entry: 100bd0abc; end: 100bd0b87;  */

undefined1  [16] FUN_100bd0abc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_100bcf210(0,0x112d4e810,&PTR_PTR_1126b0cd8);
    do {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      func_0x000107c61174();
      uVar2 = uVar1;
      func_0x000107c60118();
      uVar4 = (uint)uVar2;
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 100bd0b88; end: 100bd0e03;  */

void FUN_100bd0b88(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  undefined8 uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f143d8;
  FUN_1000285a8(0x112f143d8,&UNK_10db49640);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_100bd0dd0:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar18 = uVar18 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar17 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100bd0e00);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar18 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar18 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_100bd0dd0;
        }
        uVar18 = puVar16[lVar17];
        lVar10 = lVar10 + 1;
      } while (uVar18 == 0);
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar17 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar17 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 8);
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar14);
      func_0x000107c61434(uVar3);
    }
    uVar8 = *(ulong *)(lVar7 + 0x28);
    func_0x000107c60114();
    uVar13 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar8 = uVar8 & (uVar13 ^ 0xffffffffffffffff);
    uVar11 = uVar8 >> 6;
    uVar9 = -1L << (uVar8 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar13 >> 6;
      do {
        uVar8 = uVar11 + 1;
        if ((uVar8 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100bd0e04);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar8 != uVar9) {
          uVar11 = uVar8;
        }
        bVar4 = (bool)(uVar8 == uVar9 | bVar4);
        uVar8 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar8 == 0xffffffffffffffff);
      uVar8 = ~uVar8;
      uVar9 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
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
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 8) = uVar14;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar17;
  } while( true );
}



/* Entry: 100bd0e04; end: 100bd0ed3;  */

/* WARNING: Possible PIC construction at 0x000100bd0e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd0eb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd0eb4) */

void FUN_100bd0e04(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar6 = (int)*(undefined8 *)(param_2 + 0x20);
  FUN_100bbae3c();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar6 == 0) {
    lVar7 = param_2 + 0x58;
    func_0x000107c61148(lVar7);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    func_0x000107c40794(uVar8);
    func_0x000107c3c0f0(lVar7,param_3,uVar1,uVar3,uVar2,uVar4,uVar8,*(undefined8 *)(param_2 + 0x20),
                        *(undefined8 *)(param_2 + 0x50));
  }
  else {
    func_0x000107c6071c();
    func_0x000107c4d954((param_1 - *(double *)(param_2 + 0x60)) * 1000.0,puVar5);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100bd0ed4; end: 100bd1167; -[SCPersonDataCoordinator _performFetchWithSnapchatterFeedIds:groupFeedIds:multiRecipientFeedIds:multiRecipientFeedIdToRecipientIds:multiRecipientIndividualIds:fetchContexts:completion:] */

void FUN_100bd0ed4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c6071c();
  lVar1 = param_2;
  uVar4 = param_1;
  func_0x000107c3b6b8();
  func_0x000107c61180();
  uVar2 = param_9;
  FUN_100bbae3c();
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c40808(lVar1);
    func_0x000107c4bdb4(uVar2);
    func_0x000107c61170(uVar2);
    uVar4 = param_1;
  }
  func_0x000107c6071c();
  func_0x000107c61144(auStack_78,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c4f7c0(uVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_78);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(lVar1);
  func_0x000107c61174(param_7);
  uStack_80 = uVar4;
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c4e678(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100bd1168; end: 100bd14cb; -[SCPersonDataCoordinator _fetchGroupEntities:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd1168(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  long lStack_70;
  
  ppuVar10 = &puStack_220;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_3;
  func_0x000107c61174(param_3);
  ppuVar2 = param_3;
  func_0x000107c40808();
  ppuVar3 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
  if (ppuVar2 == (undefined **)0x0) goto LAB_100bd1484;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    ppuVar2 = (undefined **)param_1[5];
    func_0x000107c5c734(ppuVar2);
    func_0x000107c61180();
    ppuVar5 = param_3;
    func_0x000107c3db80(param_3);
    func_0x000107c61180();
    ppuVar4 = ppuVar2;
    func_0x000107c440b0(ppuVar2);
    func_0x000107c61180();
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    puStack_188 = &UNK_1064de8e4;
    puStack_180 = &UNK_110927538;
    ppuVar10 = &puStack_198;
    ppuVar3 = ppuVar4;
    ppuStack_178 = param_1;
    FUN_10050471c();
LAB_100bd1470:
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(ppuVar5);
    ppuVar9 = ppuVar10;
  }
  else {
    ppuVar9 = param_1;
    func_0x000107c3b684();
    func_0x000107c61180();
    ppuVar3 = ppuVar9;
    func_0x000107c4d2d4();
    func_0x000107c61170(ppuVar9);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uStack_1d8 = 0;
    puStack_1e0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    func_0x000107c61174(param_3);
    ppuVar9 = &puStack_1e0;
    ppuVar4 = param_3;
    func_0x000107c4080c();
    if (ppuVar4 != (undefined **)0x0) {
      lVar8 = *plStack_1d0;
      do {
        ppuVar9 = (undefined **)0x0;
        do {
          if (*plStack_1d0 != lVar8) {
            func_0x000107c61128(param_3);
          }
          ppuVar5 = ppuVar3;
          func_0x000107c4d9c0();
          func_0x000107c61180();
          func_0x000107c61170();
          if (ppuVar5 == (undefined **)0x0) {
            func_0x000107c3d798(ppuVar2);
          }
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        } while (ppuVar4 != ppuVar9);
        ppuVar9 = &puStack_1e0;
        ppuVar4 = param_3;
        func_0x000107c4080c();
      } while (ppuVar4 != (undefined **)0x0);
    }
    func_0x000107c61170(param_3);
    ppuVar4 = ppuVar2;
    func_0x000107c40808();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar5 = (undefined **)param_1[5];
      func_0x000107c5c734();
      func_0x000107c61180();
      ppuVar9 = ppuVar2;
      func_0x000107c40794(ppuVar2);
      ppuVar4 = ppuVar5;
      func_0x000107c440b0();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar9);
      func_0x000107c61170(ppuVar5);
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      lStack_218 = 0;
      puStack_220 = (undefined *)0x0;
      uStack_208 = 0;
      plStack_210 = (long *)0x0;
      func_0x000107c61174(ppuVar4);
      ppuVar9 = ppuVar4;
      func_0x000107c4080c();
      ppuVar5 = ppuVar4;
      if (ppuVar9 != (undefined **)0x0) {
        lVar8 = *plStack_210;
        do {
          ppuVar10 = (undefined **)0x0;
          do {
            if (*plStack_210 != lVar8) {
              func_0x000107c61128(ppuVar4);
            }
            uVar7 = *(undefined8 *)(lStack_218 + (long)ppuVar10 * 8);
            ppuVar6 = param_1;
            func_0x000107c3b8d0(param_1);
            func_0x000107c61180();
            func_0x000107c444fc(uVar7);
            func_0x000107c61180();
            func_0x000107c56bd8(ppuVar3);
            func_0x000107c61170(uVar7);
            func_0x000107c61170(ppuVar6);
            ppuVar10 = (undefined **)((long)ppuVar10 + 1);
          } while (ppuVar9 != ppuVar10);
          ppuVar9 = ppuVar4;
          ppuVar10 = &puStack_220;
          func_0x000107c4080c();
        } while (ppuVar9 != (undefined **)0x0);
      }
      goto LAB_100bd1470;
    }
  }
  func_0x000107c61170(ppuVar2);
LAB_100bd1484:
  ppuVar10 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    pcStack_228 = FUN_100bd14cc;
    ppuVar2 = ppuVar10;
    ppuStack_240 = param_1;
    ppuStack_238 = param_3;
    puStack_230 = &stack0xfffffffffffffff0;
    func_0x000107c614f0();
    *(undefined ***)((long)ppuVar10 + _DAT_112fe66b0) = ppuVar9;
    puVar1 = PTR_s_init_1125d9248;
    ppuStack_250 = ppuVar10;
    ppuStack_248 = ppuVar2;
    func_0x000107c615f0(ppuVar9);
    func_0x000107c61154(&ppuStack_250,puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 100bd14cc; end: 100bd1523; -[_TtC24SCStoriesBadgingServices24SCStoriesBadgingServices initWithStoriesBadgingCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd14cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fe66b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100bd1524; end: 100bd155f;  */

void FUN_100bd1524(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bd1560; end: 100bd1567;  */

void FUN_100bd1560(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bd1568; end: 100bd15bb;  */

void FUN_100bd1568(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bd15bc; end: 100bd1b27;  */

void FUN_100bd15bc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_10034344c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  puVar1 = PTR_PTR_1126ac988;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar11 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0520c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar11 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03f160);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar1);
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar1);
  uVar11 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  uVar11 = uVar12;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(param_2 + 0x58) = uVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 100bd1b28; end: 100bd1b5b;  */

void FUN_100bd1b28(void)

{
  long unaff_x20;
  
  FUN_100bd15bc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 100bd1b5c; end: 100bd1bbb;  */

void FUN_100bd1b5c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bd1bbc; end: 100bd1bdf;  */

void FUN_100bd1bbc(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bd1be0; end: 100bd1be3; -[SCFeedSnapchattersRepository personEntitiesForFeedIds:completionQueue:completionHandler:] */

void FUN_100bd1be0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be73790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__personEntitiesIncludingUserIdsF_11257a780);
  return;
}



/* Entry: 100bd1be4; end: 100bd1f33; -[SCFeedSnapchattersRepository _personEntitiesIncludingUserIdsForFeedIds:completionQueue:completionHandler:] */

void FUN_100bd1be4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  ppuVar6 = &puStack_1b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_100bd2120;
  pcStack_f8 = FUN_100bd3234;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  lVar2 = param_3;
  puStack_f0 = puVar1;
  func_0x000107c40404();
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5da98();
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c3b788();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    if (lVar2 != 0) {
      func_0x000107c56bd8(puStack_110[5]);
    }
    func_0x000107c61170(lVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c4080c();
  if (lVar2 != 0) {
    lVar8 = *plStack_150;
    do {
      lVar9 = 0;
      do {
        if (*plStack_150 != lVar8) {
          func_0x000107c61128(param_3);
        }
        uVar7 = *(ulong *)(lStack_158 + lVar9 * 8);
        func_0x000100bec764();
        if ((uVar7 & 1) != 0) {
          func_0x000107c3d798(puVar1);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x000107c4080c();
    } while (lVar2 != 0);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61144(auStack_168,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_100bd2284;
  puStack_198 = &UNK_110927448;
  func_0x000107c6111c(auStack_170,auStack_168);
  func_0x000107c61174(param_5);
  uStack_180 = param_5;
  func_0x000107c61174(puVar1);
  puStack_178 = &uStack_118;
  puStack_190 = puVar1;
  func_0x000107c61174(param_4);
  puVar5 = puVar1;
  lVar2 = param_4;
  lStack_188 = param_4;
  func_0x000107c5b4f8(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lStack_188);
  func_0x000107c61170(puStack_190);
  func_0x000107c61170(uStack_180);
  func_0x000107c61120(auStack_170);
  func_0x000107c61120(auStack_168);
  func_0x000107c61170(puVar1);
  func_0x000107c60bcc(&uStack_118,8);
  func_0x000107c61170(puStack_f0);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61120(auStack_170);
  func_0x000107c61120(auStack_168);
  func_0x000107c60bcc(&uStack_118,8);
  lVar8 = param_3;
  func_0x000107c60bd8();
  pcStack_1b8 = FUN_100bd1f34;
  puStack_1f0 = (undefined1 *)&puStack_1b0;
  puStack_1e8 = puVar1;
  uStack_1e0 = uVar4;
  uStack_1d8 = param_5;
  lStack_1d0 = param_4;
  lStack_1c8 = param_3;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar5);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(ppuVar6);
  if ((lVar2 != 0) && (ppuVar6 != (undefined **)0x0)) {
    puVar1 = puVar5;
    func_0x000107c40808();
    if (puVar1 == (undefined *)0x0) {
      puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_210 = 0xc2000000;
      pcStack_208 = FUN_100bd226c;
      puStack_200 = &UNK_110849530;
      func_0x000107c61174(ppuVar6);
      puStack_1f8 = (undefined1 *)ppuVar6;
      FUN_10007380c(lVar2,&puStack_218);
      func_0x000107c61170(puStack_1f8);
    }
    else {
      func_0x000107c61144(auStack_220,lVar8);
      uVar4 = *(undefined8 *)(lVar8 + 0x20);
      puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_258 = 0xc2000000;
      puStack_250 = &UNK_100bec7bc;
      puStack_248 = &UNK_110857fd0;
      func_0x000107c6111c(auStack_228,auStack_220);
      func_0x000107c61174(lVar2);
      lStack_240 = lVar2;
      func_0x000107c61174(ppuVar6);
      puStack_230 = (undefined1 *)ppuVar6;
      func_0x000107c61174(puVar5);
      puStack_238 = puVar5;
      FUN_1008a8be0(uVar4,&puStack_260);
      func_0x000107c61170(puStack_238);
      func_0x000107c61170(puStack_230);
      func_0x000107c61170(lStack_240);
      func_0x000107c61120(auStack_228);
      func_0x000107c61120(auStack_220);
    }
  }
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 100bd1f34; end: 100bd20c7; -[SCSnapchattersDataProvider snapchattersWithUserIds:completionQueue:completionHandler:] */

void FUN_100bd1f34(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    lVar1 = param_3;
    func_0x000107c40808();
    if (lVar1 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_100bd226c;
      puStack_50 = &UNK_110849530;
      func_0x000107c61174(param_5);
      lStack_48 = param_5;
      FUN_10007380c(param_4,&puStack_68);
      func_0x000107c61170(lStack_48);
    }
    else {
      func_0x000107c61144(auStack_70,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      puStack_a0 = &UNK_100bec7bc;
      puStack_98 = &UNK_110857fd0;
      func_0x000107c6111c(auStack_78,auStack_70);
      func_0x000107c61174(param_4);
      lStack_90 = param_4;
      func_0x000107c61174(param_5);
      lStack_80 = param_5;
      func_0x000107c61174(param_3);
      lStack_88 = param_3;
      FUN_1008a8be0(uVar2,&puStack_b0);
      func_0x000107c61170(lStack_88);
      func_0x000107c61170(lStack_80);
      func_0x000107c61170(lStack_90);
      func_0x000107c61120(auStack_78);
      func_0x000107c61120(auStack_70);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100bd20c8; end: 100bd211f;  */

void FUN_100bd20c8(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c60bc8(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  func_0x000107c60bc8(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 100bd2120; end: 100bd212f;  */

void FUN_100bd2120(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100bd2130; end: 100bd2213; -[SCSpotlightDisplayOrderServiceProvider provide] */

void FUN_100bd2130(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126cea88;
  func_0x000107c610f4(PTR_PTR_1126cea88);
  func_0x000107c4893c();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bd2214; end: 100bd226b;  */

/* WARNING: Possible PIC construction at 0x000100bd2230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd2244) */
/* WARNING: Removing unreachable block (ram,0x000100bd2234) */
/* WARNING: Removing unreachable block (ram,0x000100bd2254) */

void FUN_100bd2214(long param_1)

{
  func_0x000107c61120(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 100bd226c; end: 100bd2283;  */

void FUN_100bd226c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bd2280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 100bd2284; end: 100bd2307;  */

/* WARNING: Possible PIC construction at 0x000100bd22f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd22f4) */

void FUN_100bd2284(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x40;
  func_0x000107c61148();
  if ((lVar1 == 0) || (param_3 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    func_0x000107c3c1a0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100bd2308; end: 100bd235f; -[_TtC31SCSpotlightDisplayOrderServices31SCSpotlightDisplayOrderServices initWithSpotlightDisplayOrdererFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd2308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fee570) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100bd2360; end: 100bd2627; -[SCFeedSnapchattersRepository _processLocalSnapchatterFetch:requestedUserIds:friendsFeedEntities:completionQueue:completionHandler:] */

void FUN_100bd2360(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  uVar2 = param_3;
  FUN_10050471c(param_3,&PTR___NSConcreteGlobalBlock_110927478,
                &PTR___NSConcreteGlobalBlock_110927498);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_100bf0ac0;
  puStack_88 = &UNK_110894890;
  func_0x000107c61174();
  lVar3 = param_4;
  uStack_80 = uVar2;
  FUN_100504554(param_4,&puStack_a0);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c40808(param_3);
  func_0x000107c4be98(uVar5);
  lVar4 = lVar3;
  func_0x000107c40808();
  if ((lVar4 == 0) || ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
    func_0x000107c3b194(param_1);
    func_0x000107c61180();
    func_0x000107c3d66c(param_5);
    uVar5 = param_5;
    func_0x000107c40794(param_5);
    (**(code **)(param_7 + 0x10))(param_7,uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c61144(auStack_a8,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    puStack_d8 = &UNK_1064dda9c;
    puStack_d0 = &UNK_110854260;
    func_0x000107c6111c(auStack_b0,auStack_a8);
    func_0x000107c61174(param_3);
    uStack_c8 = param_3;
    func_0x000107c61174(param_5);
    uStack_c0 = param_5;
    func_0x000107c61174(param_7);
    lStack_b8 = param_7;
    func_0x000107c6111c(auStack_f0,auStack_a8);
    func_0x000107c5b500(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61120(auStack_f0);
    func_0x000107c61170(lStack_b8);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(uStack_c8);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61120(auStack_a8);
  }
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100bd2628; end: 100bd268b;  */

void FUN_100bd2628(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bd268c; end: 100bd26e7; -[SCFeedSnapchattersRepositoryGrapheneLogger logSnapchatterFetchResult:resultCount:] */

void FUN_100bd268c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100be0a14;
  puStack_30 = &UNK_110858dc0;
  lStack_28 = param_1;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48);
  return;
}



/* Entry: 100bd26e8; end: 100bd28ef; -[SCFeedSnapchattersRepository _convertSnapchattersToEntities:] */

/* WARNING: Possible PIC construction at 0x000100bd27bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd28a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd28a8) */
/* WARNING: Removing unreachable block (ram,0x000100bd28ec) */
/* WARNING: Removing unreachable block (ram,0x000100bd28c8) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x000100bd2874) */
/* WARNING: Removing unreachable block (ram,0x000100bd2878) */
/* WARNING: Removing unreachable block (ram,0x000100bd2834) */
/* WARNING: Removing unreachable block (ram,0x000100bd2804) */
/* WARNING: Removing unreachable block (ram,0x000100bd2808) */
/* WARNING: Removing unreachable block (ram,0x000100bd27c0) */
/* WARNING: Removing unreachable block (ram,0x000100bd27c4) */
/* WARNING: Removing unreachable block (ram,0x000100bd2838) */
/* WARNING: Removing unreachable block (ram,0x000100bd283c) */
/* WARNING: Removing unreachable block (ram,0x000100bd2844) */
/* WARNING: Removing unreachable block (ram,0x000100bd2850) */
/* WARNING: Removing unreachable block (ram,0x000100bd286c) */
/* WARNING: Removing unreachable block (ram,0x000100bd27e0) */
/* WARNING: Removing unreachable block (ram,0x000100bd2948) */

void FUN_100bd26e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  puStack_128 = (undefined8 *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c40794(puVar2);
  }
  else {
    if (*plStack_120 != *plStack_120) {
      func_0x000107c61128(param_3);
    }
    puVar2 = (undefined *)*puStack_128;
    func_0x000107c5d984(puVar2);
    func_0x000107c61180();
    func_0x000107c49d0c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100bd28f0; end: 100bd295f;  */

/* WARNING: Possible PIC construction at 0x000100bd2944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd2948) */

void FUN_100bd28f0(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x58);
  func_0x000107c3af4c(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100bd2960; end: 100bd2db7; -[SCPersonDataCoordinator _buildAllEntitiesFromOneOnOneFeedIds:groupFeedIds:multiRecipientFeedIds:groupEntities:personEntities:multiRecipientFeedIdToRecipientIds:snapchatterStartFetchTime:fetchContexts:completion:] */

/* WARNING: Possible PIC construction at 0x000100bd2a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2ef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd2ed4) */
/* WARNING: Removing unreachable block (ram,0x000100bd2e18) */
/* WARNING: Removing unreachable block (ram,0x000100bd2ef4) */
/* WARNING: Removing unreachable block (ram,0x000100bd2e1c) */
/* WARNING: Removing unreachable block (ram,0x000100bd2e48) */
/* WARNING: Removing unreachable block (ram,0x000100bd2e28) */
/* WARNING: Removing unreachable block (ram,0x000100bd2d78) */
/* WARNING: Removing unreachable block (ram,0x000100bd2db4) */
/* WARNING: Removing unreachable block (ram,0x000100bd2d90) */
/* WARNING: Removing unreachable block (ram,0x000100bd2d68) */
/* WARNING: Removing unreachable block (ram,0x000100bd2d58) */
/* WARNING: Removing unreachable block (ram,0x000100bd2d48) */
/* WARNING: Removing unreachable block (ram,0x000100bd2d38) */
/* WARNING: Removing unreachable block (ram,0x000100bd2d18) */
/* WARNING: Removing unreachable block (ram,0x000100bd2cdc) */
/* WARNING: Removing unreachable block (ram,0x000100bd2cf0) */
/* WARNING: Removing unreachable block (ram,0x000100bd2c28) */
/* WARNING: Removing unreachable block (ram,0x000100bd2d0c) */
/* WARNING: Removing unreachable block (ram,0x000100bd2c58) */
/* WARNING: Removing unreachable block (ram,0x000100bd2c64) */
/* WARNING: Removing unreachable block (ram,0x000100bd2c68) */
/* WARNING: Removing unreachable block (ram,0x000100bd2c78) */
/* WARNING: Removing unreachable block (ram,0x000100bd2c80) */
/* WARNING: Removing unreachable block (ram,0x000100bd2bc0) */
/* WARNING: Removing unreachable block (ram,0x000100bd2bf4) */
/* WARNING: Removing unreachable block (ram,0x000100bd2c00) */
/* WARNING: Removing unreachable block (ram,0x000100bd2bc4) */
/* WARNING: Removing unreachable block (ram,0x000100bd2b44) */
/* WARNING: Removing unreachable block (ram,0x000100bd2c1c) */
/* WARNING: Removing unreachable block (ram,0x000100bd2b74) */
/* WARNING: Removing unreachable block (ram,0x000100bd2b80) */
/* WARNING: Removing unreachable block (ram,0x000100bd2b84) */
/* WARNING: Removing unreachable block (ram,0x000100bd2b94) */
/* WARNING: Removing unreachable block (ram,0x000100bd2b9c) */
/* WARNING: Removing unreachable block (ram,0x000100bd2ae0) */
/* WARNING: Removing unreachable block (ram,0x000100bd2b14) */
/* WARNING: Removing unreachable block (ram,0x000100bd2b20) */
/* WARNING: Removing unreachable block (ram,0x000100bd2ae4) */
/* WARNING: Removing unreachable block (ram,0x000100bd2ee4) */

void FUN_100bd2960(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_100 [128];
  undefined8 uStack_80;
  
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  uVar1 = param_10;
  FUN_100bbae3c();
  if ((int)uVar1 == 0) {
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puStack_238 = (undefined8 *)0x0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    func_0x000107c61174(param_4);
    lVar2 = param_4;
    func_0x000107c4080c(param_4,param_3,&uStack_240,auStack_100,0x10);
    if (lVar2 != 0) {
      if (*plStack_230 != *plStack_230) {
        func_0x000107c61128(param_4);
      }
      func_0x000107c4d9e8(param_8,param_3,*puStack_238);
      func_0x000107c61180();
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c40808(param_8);
    func_0x000107c4bdb4(param_1,uVar1,param_3,3,param_8,param_10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100bd2db8; end: 100bd2f17;  */

/* WARNING: Possible PIC construction at 0x000100bd2e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd2ef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd2ed4) */
/* WARNING: Removing unreachable block (ram,0x000100bd2e18) */
/* WARNING: Removing unreachable block (ram,0x000100bd2ef4) */
/* WARNING: Removing unreachable block (ram,0x000100bd2e1c) */
/* WARNING: Removing unreachable block (ram,0x000100bd2e48) */
/* WARNING: Removing unreachable block (ram,0x000100bd2e28) */
/* WARNING: Removing unreachable block (ram,0x000100bd2ee4) */

void FUN_100bd2db8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x40;
  func_0x000107c61148(lVar1);
  func_0x000107c40808(param_2);
  func_0x000107c3be48(*(undefined8 *)(param_1 + 0x48),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100bd2f18; end: 100bd2f1f;  */

void FUN_100bd2f18(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bd2f20; end: 100bd2f73;  */

void FUN_100bd2f20(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bd2f74; end: 100bd30fb; -[SCFriendsFeedDataCoordinator _fetchServerBotPublicStoriesForFeedIds:] */

void FUN_100bd2f74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_100bd30fc;
    puStack_48 = &UNK_1108434b0;
    puVar4 = auStack_40;
    func_0x000107c6111c(puVar4,auStack_38);
    func_0x000107c4e524(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    func_0x000107c4f7c0(uVar3);
    func_0x000107c61180();
    puVar4 = auStack_68;
    func_0x000107c6111c(puVar4,auStack_38);
    func_0x000107c61174(param_3);
    func_0x000107c43264(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61120(puVar4);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100bd30fc; end: 100bd3127;  */

void FUN_100bd30fc(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bd3128; end: 100bd31ef; -[SCFriendsFeedDataCoordinator _clearServerBotPublicUserStorySummaries] */

/* WARNING: Possible PIC construction at 0x000100bd3188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd31c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd31b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd31a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd31cc) */
/* WARNING: Removing unreachable block (ram,0x000100bd318c) */
/* WARNING: Removing unreachable block (ram,0x000100bd31b8) */
/* WARNING: Removing unreachable block (ram,0x000100bd3198) */
/* WARNING: Removing unreachable block (ram,0x000100bd31ac) */
/* WARNING: Removing unreachable block (ram,0x000100bd31dc) */

void FUN_100bd3128(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c41988();
  func_0x000107c61180();
  puVar2 = *(undefined **)(param_1 + 0xd8);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar1);
  if (puVar2 == puVar1) {
    func_0x000107c61170(puVar1);
  }
  else if (puVar1 != (undefined *)0x0) {
    func_0x000107c49cf8(puVar2,param_2,puVar1);
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}


